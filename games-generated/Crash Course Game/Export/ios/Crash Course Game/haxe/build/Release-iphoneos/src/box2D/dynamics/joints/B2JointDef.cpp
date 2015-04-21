#include <hxcpp.h>

#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2JointDef
#include <box2D/dynamics/joints/B2JointDef.h>
#endif
namespace box2D{
namespace dynamics{
namespace joints{

Void B2JointDef_obj::__construct()
{
HX_STACK_PUSH("B2JointDef::new","box2D/dynamics/joints/B2JointDef.hx",33);
{
	HX_STACK_LINE(34)
	this->type = ::box2D::dynamics::joints::B2Joint_obj::e_unknownJoint;
	HX_STACK_LINE(35)
	this->userData = null();
	HX_STACK_LINE(36)
	this->bodyA = null();
	HX_STACK_LINE(37)
	this->bodyB = null();
	HX_STACK_LINE(38)
	this->collideConnected = false;
}
;
	return null();
}

B2JointDef_obj::~B2JointDef_obj() { }

Dynamic B2JointDef_obj::__CreateEmpty() { return  new B2JointDef_obj; }
hx::ObjectPtr< B2JointDef_obj > B2JointDef_obj::__new()
{  hx::ObjectPtr< B2JointDef_obj > result = new B2JointDef_obj();
	result->__construct();
	return result;}

Dynamic B2JointDef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2JointDef_obj > result = new B2JointDef_obj();
	result->__construct();
	return result;}

::String B2JointDef_obj::CENTER;


B2JointDef_obj::B2JointDef_obj()
{
}

void B2JointDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2JointDef);
	HX_MARK_MEMBER_NAME(actor2,"actor2");
	HX_MARK_MEMBER_NAME(actor1,"actor1");
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(collideConnected,"collideConnected");
	HX_MARK_MEMBER_NAME(bodyB,"bodyB");
	HX_MARK_MEMBER_NAME(bodyA,"bodyA");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void B2JointDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(actor2,"actor2");
	HX_VISIT_MEMBER_NAME(actor1,"actor1");
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(collideConnected,"collideConnected");
	HX_VISIT_MEMBER_NAME(bodyB,"bodyB");
	HX_VISIT_MEMBER_NAME(bodyA,"bodyA");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic B2JointDef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bodyB") ) { return bodyB; }
		if (HX_FIELD_EQ(inName,"bodyA") ) { return bodyA; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CENTER") ) { return CENTER; }
		if (HX_FIELD_EQ(inName,"actor2") ) { return actor2; }
		if (HX_FIELD_EQ(inName,"actor1") ) { return actor1; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collideConnected") ) { return collideConnected; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2JointDef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bodyB") ) { bodyB=inValue.Cast< ::box2D::dynamics::B2Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bodyA") ) { bodyA=inValue.Cast< ::box2D::dynamics::B2Body >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CENTER") ) { CENTER=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actor2") ) { actor2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actor1") ) { actor1=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collideConnected") ) { collideConnected=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2JointDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("actor2"));
	outFields->push(HX_CSTRING("actor1"));
	outFields->push(HX_CSTRING("ID"));
	outFields->push(HX_CSTRING("collideConnected"));
	outFields->push(HX_CSTRING("bodyB"));
	outFields->push(HX_CSTRING("bodyA"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CENTER"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("actor2"),
	HX_CSTRING("actor1"),
	HX_CSTRING("ID"),
	HX_CSTRING("collideConnected"),
	HX_CSTRING("bodyB"),
	HX_CSTRING("bodyA"),
	HX_CSTRING("userData"),
	HX_CSTRING("type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2JointDef_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2JointDef_obj::CENTER,"CENTER");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2JointDef_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2JointDef_obj::CENTER,"CENTER");
};

Class B2JointDef_obj::__mClass;

void B2JointDef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.joints.B2JointDef"), hx::TCanCast< B2JointDef_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2JointDef_obj::__boot()
{
	CENTER= HX_CSTRING("center");
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints
