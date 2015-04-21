#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2DistanceJointDef
#include <box2D/dynamics/joints/B2DistanceJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2JointDef
#include <box2D/dynamics/joints/B2JointDef.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace box2D{
namespace dynamics{
namespace joints{

Void B2DistanceJointDef_obj::__construct()
{
HX_STACK_PUSH("B2DistanceJointDef::new","box2D/dynamics/joints/B2DistanceJointDef.hx",38);
{
	HX_STACK_LINE(39)
	super::__construct();
	HX_STACK_LINE(40)
	this->localAnchorA = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(41)
	this->localAnchorB = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(43)
	this->type = ::box2D::dynamics::joints::B2Joint_obj::e_distanceJoint;
	HX_STACK_LINE(46)
	this->length = 1.0;
	HX_STACK_LINE(47)
	this->frequencyHz = 0.0;
	HX_STACK_LINE(48)
	this->dampingRatio = 0.0;
}
;
	return null();
}

B2DistanceJointDef_obj::~B2DistanceJointDef_obj() { }

Dynamic B2DistanceJointDef_obj::__CreateEmpty() { return  new B2DistanceJointDef_obj; }
hx::ObjectPtr< B2DistanceJointDef_obj > B2DistanceJointDef_obj::__new()
{  hx::ObjectPtr< B2DistanceJointDef_obj > result = new B2DistanceJointDef_obj();
	result->__construct();
	return result;}

Dynamic B2DistanceJointDef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2DistanceJointDef_obj > result = new B2DistanceJointDef_obj();
	result->__construct();
	return result;}

Void B2DistanceJointDef_obj::initialize( ::box2D::dynamics::B2Body bA,::box2D::dynamics::B2Body bB,::box2D::common::math::B2Vec2 anchorA,::box2D::common::math::B2Vec2 anchorB){
{
		HX_STACK_PUSH("B2DistanceJointDef::initialize","box2D/dynamics/joints/B2DistanceJointDef.hx",57);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bA,"bA");
		HX_STACK_ARG(bB,"bB");
		HX_STACK_ARG(anchorA,"anchorA");
		HX_STACK_ARG(anchorB,"anchorB");
		HX_STACK_LINE(58)
		this->bodyA = bA;
		HX_STACK_LINE(59)
		this->bodyB = bB;
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::box2D::common::math::B2Vec2 _this = this->localAnchorA;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->bodyA->getLocalPoint(anchorA);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(60)
			_this->x = v->x;
			HX_STACK_LINE(60)
			_this->y = v->y;
		}
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			::box2D::common::math::B2Vec2 _this = this->localAnchorB;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->bodyB->getLocalPoint(anchorB);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(61)
			_this->x = v->x;
			HX_STACK_LINE(61)
			_this->y = v->y;
		}
		HX_STACK_LINE(62)
		Float dX = (anchorB->x - anchorA->x);		HX_STACK_VAR(dX,"dX");
		HX_STACK_LINE(63)
		Float dY = (anchorB->y - anchorA->y);		HX_STACK_VAR(dY,"dY");
		HX_STACK_LINE(64)
		this->length = ::Math_obj::sqrt(((dX * dX) + (dY * dY)));
		HX_STACK_LINE(65)
		this->frequencyHz = 0.0;
		HX_STACK_LINE(66)
		this->dampingRatio = 0.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(B2DistanceJointDef_obj,initialize,(void))


B2DistanceJointDef_obj::B2DistanceJointDef_obj()
{
}

void B2DistanceJointDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2DistanceJointDef);
	HX_MARK_MEMBER_NAME(dampingRatio,"dampingRatio");
	HX_MARK_MEMBER_NAME(frequencyHz,"frequencyHz");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(localAnchorB,"localAnchorB");
	HX_MARK_MEMBER_NAME(localAnchorA,"localAnchorA");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2DistanceJointDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dampingRatio,"dampingRatio");
	HX_VISIT_MEMBER_NAME(frequencyHz,"frequencyHz");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(localAnchorB,"localAnchorB");
	HX_VISIT_MEMBER_NAME(localAnchorA,"localAnchorA");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic B2DistanceJointDef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frequencyHz") ) { return frequencyHz; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dampingRatio") ) { return dampingRatio; }
		if (HX_FIELD_EQ(inName,"localAnchorB") ) { return localAnchorB; }
		if (HX_FIELD_EQ(inName,"localAnchorA") ) { return localAnchorA; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2DistanceJointDef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frequencyHz") ) { frequencyHz=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dampingRatio") ) { dampingRatio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localAnchorB") ) { localAnchorB=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localAnchorA") ) { localAnchorA=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2DistanceJointDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("dampingRatio"));
	outFields->push(HX_CSTRING("frequencyHz"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("localAnchorB"));
	outFields->push(HX_CSTRING("localAnchorA"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dampingRatio"),
	HX_CSTRING("frequencyHz"),
	HX_CSTRING("length"),
	HX_CSTRING("localAnchorB"),
	HX_CSTRING("localAnchorA"),
	HX_CSTRING("initialize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2DistanceJointDef_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2DistanceJointDef_obj::__mClass,"__mClass");
};

Class B2DistanceJointDef_obj::__mClass;

void B2DistanceJointDef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.joints.B2DistanceJointDef"), hx::TCanCast< B2DistanceJointDef_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2DistanceJointDef_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints
