#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2JointDef
#include <box2D/dynamics/joints/B2JointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2WeldJointDef
#include <box2D/dynamics/joints/B2WeldJointDef.h>
#endif
namespace box2D{
namespace dynamics{
namespace joints{

Void B2WeldJointDef_obj::__construct()
{
HX_STACK_PUSH("B2WeldJointDef::new","box2D/dynamics/joints/B2WeldJointDef.hx",35);
{
	HX_STACK_LINE(36)
	super::__construct();
	HX_STACK_LINE(37)
	this->localAnchorA = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(38)
	this->localAnchorB = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(40)
	this->type = ::box2D::dynamics::joints::B2Joint_obj::e_weldJoint;
	HX_STACK_LINE(41)
	this->referenceAngle = 0.0;
}
;
	return null();
}

B2WeldJointDef_obj::~B2WeldJointDef_obj() { }

Dynamic B2WeldJointDef_obj::__CreateEmpty() { return  new B2WeldJointDef_obj; }
hx::ObjectPtr< B2WeldJointDef_obj > B2WeldJointDef_obj::__new()
{  hx::ObjectPtr< B2WeldJointDef_obj > result = new B2WeldJointDef_obj();
	result->__construct();
	return result;}

Dynamic B2WeldJointDef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2WeldJointDef_obj > result = new B2WeldJointDef_obj();
	result->__construct();
	return result;}

Void B2WeldJointDef_obj::initialize( ::box2D::dynamics::B2Body bA,::box2D::dynamics::B2Body bB,::box2D::common::math::B2Vec2 anchor){
{
		HX_STACK_PUSH("B2WeldJointDef::initialize","box2D/dynamics/joints/B2WeldJointDef.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bA,"bA");
		HX_STACK_ARG(bB,"bB");
		HX_STACK_ARG(anchor,"anchor");
		HX_STACK_LINE(51)
		this->bodyA = bA;
		HX_STACK_LINE(52)
		this->bodyB = bB;
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			::box2D::common::math::B2Vec2 _this = this->localAnchorA;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->bodyA->getLocalPoint(anchor);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(53)
			_this->x = v->x;
			HX_STACK_LINE(53)
			_this->y = v->y;
		}
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			::box2D::common::math::B2Vec2 _this = this->localAnchorB;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->bodyB->getLocalPoint(anchor);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(54)
			_this->x = v->x;
			HX_STACK_LINE(54)
			_this->y = v->y;
		}
		HX_STACK_LINE(55)
		this->referenceAngle = (this->bodyB->getAngle() - this->bodyA->getAngle());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2WeldJointDef_obj,initialize,(void))


B2WeldJointDef_obj::B2WeldJointDef_obj()
{
}

void B2WeldJointDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2WeldJointDef);
	HX_MARK_MEMBER_NAME(referenceAngle,"referenceAngle");
	HX_MARK_MEMBER_NAME(localAnchorB,"localAnchorB");
	HX_MARK_MEMBER_NAME(localAnchorA,"localAnchorA");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2WeldJointDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(referenceAngle,"referenceAngle");
	HX_VISIT_MEMBER_NAME(localAnchorB,"localAnchorB");
	HX_VISIT_MEMBER_NAME(localAnchorA,"localAnchorA");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic B2WeldJointDef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"localAnchorB") ) { return localAnchorB; }
		if (HX_FIELD_EQ(inName,"localAnchorA") ) { return localAnchorA; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"referenceAngle") ) { return referenceAngle; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2WeldJointDef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"localAnchorB") ) { localAnchorB=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localAnchorA") ) { localAnchorA=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"referenceAngle") ) { referenceAngle=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2WeldJointDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("referenceAngle"));
	outFields->push(HX_CSTRING("localAnchorB"));
	outFields->push(HX_CSTRING("localAnchorA"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("referenceAngle"),
	HX_CSTRING("localAnchorB"),
	HX_CSTRING("localAnchorA"),
	HX_CSTRING("initialize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2WeldJointDef_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2WeldJointDef_obj::__mClass,"__mClass");
};

Class B2WeldJointDef_obj::__mClass;

void B2WeldJointDef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.joints.B2WeldJointDef"), hx::TCanCast< B2WeldJointDef_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2WeldJointDef_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints
