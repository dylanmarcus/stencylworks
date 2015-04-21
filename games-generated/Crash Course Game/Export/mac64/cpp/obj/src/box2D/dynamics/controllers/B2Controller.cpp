#include <hxcpp.h>

#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2DebugDraw
#include <box2D/dynamics/B2DebugDraw.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2TimeStep
#include <box2D/dynamics/B2TimeStep.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2World
#include <box2D/dynamics/B2World.h>
#endif
#ifndef INCLUDED_box2D_dynamics_controllers_B2Controller
#include <box2D/dynamics/controllers/B2Controller.h>
#endif
#ifndef INCLUDED_box2D_dynamics_controllers_B2ControllerEdge
#include <box2D/dynamics/controllers/B2ControllerEdge.h>
#endif
namespace box2D{
namespace dynamics{
namespace controllers{

Void B2Controller_obj::__construct()
{
	return null();
}

B2Controller_obj::~B2Controller_obj() { }

Dynamic B2Controller_obj::__CreateEmpty() { return  new B2Controller_obj; }
hx::ObjectPtr< B2Controller_obj > B2Controller_obj::__new()
{  hx::ObjectPtr< B2Controller_obj > result = new B2Controller_obj();
	result->__construct();
	return result;}

Dynamic B2Controller_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2Controller_obj > result = new B2Controller_obj();
	result->__construct();
	return result;}

::box2D::dynamics::controllers::B2ControllerEdge B2Controller_obj::getBodyList( ){
	HX_STACK_PUSH("B2Controller::getBodyList","box2D/dynamics/controllers/B2Controller.hx",96);
	HX_STACK_THIS(this);
	HX_STACK_LINE(96)
	return this->m_bodyList;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Controller_obj,getBodyList,return )

::box2D::dynamics::B2World B2Controller_obj::getWorld( ){
	HX_STACK_PUSH("B2Controller::getWorld","box2D/dynamics/controllers/B2Controller.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_LINE(93)
	return this->m_world;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Controller_obj,getWorld,return )

::box2D::dynamics::controllers::B2Controller B2Controller_obj::getNext( ){
	HX_STACK_PUSH("B2Controller::getNext","box2D/dynamics/controllers/B2Controller.hx",92);
	HX_STACK_THIS(this);
	HX_STACK_LINE(92)
	return this->m_next;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Controller_obj,getNext,return )

Void B2Controller_obj::clear( ){
{
		HX_STACK_PUSH("B2Controller::clear","box2D/dynamics/controllers/B2Controller.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_LINE(87)
		while(((this->m_bodyList != null()))){
			HX_STACK_LINE(89)
			this->removeBody(this->m_bodyList->body);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Controller_obj,clear,(void))

Void B2Controller_obj::removeBody( ::box2D::dynamics::B2Body body){
{
		HX_STACK_PUSH("B2Controller::removeBody","box2D/dynamics/controllers/B2Controller.hx",60);
		HX_STACK_THIS(this);
		HX_STACK_ARG(body,"body");
		HX_STACK_LINE(61)
		::box2D::dynamics::controllers::B2ControllerEdge edge = body->m_controllerList;		HX_STACK_VAR(edge,"edge");
		HX_STACK_LINE(62)
		while(((bool((edge != null())) && bool((edge->controller != hx::ObjectPtr<OBJ_>(this)))))){
			HX_STACK_LINE(63)
			edge = edge->nextController;
		}
		HX_STACK_LINE(68)
		if (((edge->prevBody != null()))){
			HX_STACK_LINE(69)
			edge->prevBody->nextBody = edge->nextBody;
		}
		HX_STACK_LINE(70)
		if (((edge->nextBody != null()))){
			HX_STACK_LINE(71)
			edge->nextBody->prevBody = edge->prevBody;
		}
		HX_STACK_LINE(72)
		if (((edge->nextController != null()))){
			HX_STACK_LINE(73)
			edge->nextController->prevController = edge->prevController;
		}
		HX_STACK_LINE(74)
		if (((edge->prevController != null()))){
			HX_STACK_LINE(75)
			edge->prevController->nextController = edge->nextController;
		}
		HX_STACK_LINE(76)
		if (((this->m_bodyList == edge))){
			HX_STACK_LINE(77)
			this->m_bodyList = edge->nextBody;
		}
		HX_STACK_LINE(78)
		if (((body->m_controllerList == edge))){
			HX_STACK_LINE(79)
			body->m_controllerList = edge->nextController;
		}
		HX_STACK_LINE(80)
		(body->m_controllerCount)--;
		HX_STACK_LINE(81)
		(this->m_bodyCount)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Controller_obj,removeBody,(void))

Void B2Controller_obj::addBody( ::box2D::dynamics::B2Body body){
{
		HX_STACK_PUSH("B2Controller::addBody","box2D/dynamics/controllers/B2Controller.hx",39);
		HX_STACK_THIS(this);
		HX_STACK_ARG(body,"body");
		HX_STACK_LINE(40)
		::box2D::dynamics::controllers::B2ControllerEdge edge = ::box2D::dynamics::controllers::B2ControllerEdge_obj::__new();		HX_STACK_VAR(edge,"edge");
		HX_STACK_LINE(41)
		edge->controller = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(42)
		edge->body = body;
		HX_STACK_LINE(44)
		edge->nextBody = this->m_bodyList;
		HX_STACK_LINE(45)
		edge->prevBody = null();
		HX_STACK_LINE(46)
		this->m_bodyList = edge;
		HX_STACK_LINE(47)
		if (((edge->nextBody != null()))){
			HX_STACK_LINE(48)
			edge->nextBody->prevBody = edge;
		}
		HX_STACK_LINE(49)
		(this->m_bodyCount)++;
		HX_STACK_LINE(51)
		edge->nextController = body->m_controllerList;
		HX_STACK_LINE(52)
		edge->prevController = null();
		HX_STACK_LINE(53)
		body->m_controllerList = edge;
		HX_STACK_LINE(54)
		if (((edge->nextController != null()))){
			HX_STACK_LINE(55)
			edge->nextController->prevController = edge;
		}
		HX_STACK_LINE(56)
		(body->m_controllerCount)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Controller_obj,addBody,(void))

Void B2Controller_obj::draw( ::box2D::dynamics::B2DebugDraw debugDraw){
{
		HX_STACK_PUSH("B2Controller::draw","box2D/dynamics/controllers/B2Controller.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_ARG(debugDraw,"debugDraw");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Controller_obj,draw,(void))

Void B2Controller_obj::step( ::box2D::dynamics::B2TimeStep step){
{
		HX_STACK_PUSH("B2Controller::step","box2D/dynamics/controllers/B2Controller.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Controller_obj,step,(void))


B2Controller_obj::B2Controller_obj()
{
}

void B2Controller_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2Controller);
	HX_MARK_MEMBER_NAME(m_world,"m_world");
	HX_MARK_MEMBER_NAME(m_bodyCount,"m_bodyCount");
	HX_MARK_MEMBER_NAME(m_bodyList,"m_bodyList");
	HX_MARK_MEMBER_NAME(m_prev,"m_prev");
	HX_MARK_MEMBER_NAME(m_next,"m_next");
	HX_MARK_END_CLASS();
}

void B2Controller_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_world,"m_world");
	HX_VISIT_MEMBER_NAME(m_bodyCount,"m_bodyCount");
	HX_VISIT_MEMBER_NAME(m_bodyList,"m_bodyList");
	HX_VISIT_MEMBER_NAME(m_prev,"m_prev");
	HX_VISIT_MEMBER_NAME(m_next,"m_next");
}

Dynamic B2Controller_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_prev") ) { return m_prev; }
		if (HX_FIELD_EQ(inName,"m_next") ) { return m_next; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_world") ) { return m_world; }
		if (HX_FIELD_EQ(inName,"getNext") ) { return getNext_dyn(); }
		if (HX_FIELD_EQ(inName,"addBody") ) { return addBody_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getWorld") ) { return getWorld_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_bodyList") ) { return m_bodyList; }
		if (HX_FIELD_EQ(inName,"removeBody") ) { return removeBody_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_bodyCount") ) { return m_bodyCount; }
		if (HX_FIELD_EQ(inName,"getBodyList") ) { return getBodyList_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2Controller_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_prev") ) { m_prev=inValue.Cast< ::box2D::dynamics::controllers::B2Controller >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_next") ) { m_next=inValue.Cast< ::box2D::dynamics::controllers::B2Controller >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_world") ) { m_world=inValue.Cast< ::box2D::dynamics::B2World >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_bodyList") ) { m_bodyList=inValue.Cast< ::box2D::dynamics::controllers::B2ControllerEdge >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_bodyCount") ) { m_bodyCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2Controller_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_world"));
	outFields->push(HX_CSTRING("m_bodyCount"));
	outFields->push(HX_CSTRING("m_bodyList"));
	outFields->push(HX_CSTRING("m_prev"));
	outFields->push(HX_CSTRING("m_next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_world"),
	HX_CSTRING("m_bodyCount"),
	HX_CSTRING("m_bodyList"),
	HX_CSTRING("m_prev"),
	HX_CSTRING("m_next"),
	HX_CSTRING("getBodyList"),
	HX_CSTRING("getWorld"),
	HX_CSTRING("getNext"),
	HX_CSTRING("clear"),
	HX_CSTRING("removeBody"),
	HX_CSTRING("addBody"),
	HX_CSTRING("draw"),
	HX_CSTRING("step"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Controller_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Controller_obj::__mClass,"__mClass");
};

Class B2Controller_obj::__mClass;

void B2Controller_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.controllers.B2Controller"), hx::TCanCast< B2Controller_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2Controller_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace controllers
