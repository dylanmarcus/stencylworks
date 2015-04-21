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
#ifndef INCLUDED_box2D_dynamics_joints_B2PulleyJoint
#include <box2D/dynamics/joints/B2PulleyJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2PulleyJointDef
#include <box2D/dynamics/joints/B2PulleyJointDef.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace box2D{
namespace dynamics{
namespace joints{

Void B2PulleyJointDef_obj::__construct()
{
HX_STACK_PUSH("B2PulleyJointDef::new","box2D/dynamics/joints/B2PulleyJointDef.hx",37);
{
	HX_STACK_LINE(38)
	super::__construct();
	HX_STACK_LINE(39)
	this->groundAnchorA = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(40)
	this->groundAnchorB = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(41)
	this->localAnchorA = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(42)
	this->localAnchorB = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(44)
	this->type = ::box2D::dynamics::joints::B2Joint_obj::e_pulleyJoint;
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::box2D::common::math::B2Vec2 _this = this->groundAnchorA;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(45)
		_this->x = -1.0;
		HX_STACK_LINE(45)
		_this->y = 1.0;
	}
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::box2D::common::math::B2Vec2 _this = this->groundAnchorB;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(46)
		_this->x = 1.0;
		HX_STACK_LINE(46)
		_this->y = 1.0;
	}
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		::box2D::common::math::B2Vec2 _this = this->localAnchorA;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(47)
		_this->x = -1.0;
		HX_STACK_LINE(47)
		_this->y = 0.0;
	}
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		::box2D::common::math::B2Vec2 _this = this->localAnchorB;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(48)
		_this->x = 1.0;
		HX_STACK_LINE(48)
		_this->y = 0.0;
	}
	HX_STACK_LINE(49)
	this->lengthA = 0.0;
	HX_STACK_LINE(50)
	this->maxLengthA = 0.0;
	HX_STACK_LINE(51)
	this->lengthB = 0.0;
	HX_STACK_LINE(52)
	this->maxLengthB = 0.0;
	HX_STACK_LINE(53)
	this->ratio = 1.0;
	HX_STACK_LINE(54)
	this->collideConnected = true;
}
;
	return null();
}

B2PulleyJointDef_obj::~B2PulleyJointDef_obj() { }

Dynamic B2PulleyJointDef_obj::__CreateEmpty() { return  new B2PulleyJointDef_obj; }
hx::ObjectPtr< B2PulleyJointDef_obj > B2PulleyJointDef_obj::__new()
{  hx::ObjectPtr< B2PulleyJointDef_obj > result = new B2PulleyJointDef_obj();
	result->__construct();
	return result;}

Dynamic B2PulleyJointDef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2PulleyJointDef_obj > result = new B2PulleyJointDef_obj();
	result->__construct();
	return result;}

Void B2PulleyJointDef_obj::initialize( ::box2D::dynamics::B2Body bA,::box2D::dynamics::B2Body bB,::box2D::common::math::B2Vec2 gaA,::box2D::common::math::B2Vec2 gaB,::box2D::common::math::B2Vec2 anchorA,::box2D::common::math::B2Vec2 anchorB,Float r){
{
		HX_STACK_PUSH("B2PulleyJointDef::initialize","box2D/dynamics/joints/B2PulleyJointDef.hx",61);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bA,"bA");
		HX_STACK_ARG(bB,"bB");
		HX_STACK_ARG(gaA,"gaA");
		HX_STACK_ARG(gaB,"gaB");
		HX_STACK_ARG(anchorA,"anchorA");
		HX_STACK_ARG(anchorB,"anchorB");
		HX_STACK_ARG(r,"r");
		HX_STACK_LINE(62)
		this->bodyA = bA;
		HX_STACK_LINE(63)
		this->bodyB = bB;
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			::box2D::common::math::B2Vec2 _this = this->groundAnchorA;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(64)
			_this->x = gaA->x;
			HX_STACK_LINE(64)
			_this->y = gaA->y;
		}
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			::box2D::common::math::B2Vec2 _this = this->groundAnchorB;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(65)
			_this->x = gaB->x;
			HX_STACK_LINE(65)
			_this->y = gaB->y;
		}
		HX_STACK_LINE(66)
		this->localAnchorA = this->bodyA->getLocalPoint(anchorA);
		HX_STACK_LINE(67)
		this->localAnchorB = this->bodyB->getLocalPoint(anchorB);
		HX_STACK_LINE(69)
		Float d1X = (anchorA->x - gaA->x);		HX_STACK_VAR(d1X,"d1X");
		HX_STACK_LINE(70)
		Float d1Y = (anchorA->y - gaA->y);		HX_STACK_VAR(d1Y,"d1Y");
		HX_STACK_LINE(72)
		this->lengthA = ::Math_obj::sqrt(((d1X * d1X) + (d1Y * d1Y)));
		HX_STACK_LINE(75)
		Float d2X = (anchorB->x - gaB->x);		HX_STACK_VAR(d2X,"d2X");
		HX_STACK_LINE(76)
		Float d2Y = (anchorB->y - gaB->y);		HX_STACK_VAR(d2Y,"d2Y");
		HX_STACK_LINE(78)
		this->lengthB = ::Math_obj::sqrt(((d2X * d2X) + (d2Y * d2Y)));
		HX_STACK_LINE(80)
		this->ratio = r;
		HX_STACK_LINE(82)
		Float C = (this->lengthA + (this->ratio * this->lengthB));		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(83)
		this->maxLengthA = (C - (this->ratio * ::box2D::dynamics::joints::B2PulleyJoint_obj::b2_minPulleyLength));
		HX_STACK_LINE(84)
		this->maxLengthB = (Float(((C - ::box2D::dynamics::joints::B2PulleyJoint_obj::b2_minPulleyLength))) / Float(this->ratio));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(B2PulleyJointDef_obj,initialize,(void))


B2PulleyJointDef_obj::B2PulleyJointDef_obj()
{
}

void B2PulleyJointDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2PulleyJointDef);
	HX_MARK_MEMBER_NAME(ratio,"ratio");
	HX_MARK_MEMBER_NAME(maxLengthB,"maxLengthB");
	HX_MARK_MEMBER_NAME(lengthB,"lengthB");
	HX_MARK_MEMBER_NAME(maxLengthA,"maxLengthA");
	HX_MARK_MEMBER_NAME(lengthA,"lengthA");
	HX_MARK_MEMBER_NAME(localAnchorB,"localAnchorB");
	HX_MARK_MEMBER_NAME(localAnchorA,"localAnchorA");
	HX_MARK_MEMBER_NAME(groundAnchorB,"groundAnchorB");
	HX_MARK_MEMBER_NAME(groundAnchorA,"groundAnchorA");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2PulleyJointDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ratio,"ratio");
	HX_VISIT_MEMBER_NAME(maxLengthB,"maxLengthB");
	HX_VISIT_MEMBER_NAME(lengthB,"lengthB");
	HX_VISIT_MEMBER_NAME(maxLengthA,"maxLengthA");
	HX_VISIT_MEMBER_NAME(lengthA,"lengthA");
	HX_VISIT_MEMBER_NAME(localAnchorB,"localAnchorB");
	HX_VISIT_MEMBER_NAME(localAnchorA,"localAnchorA");
	HX_VISIT_MEMBER_NAME(groundAnchorB,"groundAnchorB");
	HX_VISIT_MEMBER_NAME(groundAnchorA,"groundAnchorA");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic B2PulleyJointDef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { return ratio; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lengthB") ) { return lengthB; }
		if (HX_FIELD_EQ(inName,"lengthA") ) { return lengthA; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxLengthB") ) { return maxLengthB; }
		if (HX_FIELD_EQ(inName,"maxLengthA") ) { return maxLengthA; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"localAnchorB") ) { return localAnchorB; }
		if (HX_FIELD_EQ(inName,"localAnchorA") ) { return localAnchorA; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"groundAnchorB") ) { return groundAnchorB; }
		if (HX_FIELD_EQ(inName,"groundAnchorA") ) { return groundAnchorA; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2PulleyJointDef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { ratio=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lengthB") ) { lengthB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lengthA") ) { lengthA=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxLengthB") ) { maxLengthB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLengthA") ) { maxLengthA=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"localAnchorB") ) { localAnchorB=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localAnchorA") ) { localAnchorA=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"groundAnchorB") ) { groundAnchorB=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"groundAnchorA") ) { groundAnchorA=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2PulleyJointDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ratio"));
	outFields->push(HX_CSTRING("maxLengthB"));
	outFields->push(HX_CSTRING("lengthB"));
	outFields->push(HX_CSTRING("maxLengthA"));
	outFields->push(HX_CSTRING("lengthA"));
	outFields->push(HX_CSTRING("localAnchorB"));
	outFields->push(HX_CSTRING("localAnchorA"));
	outFields->push(HX_CSTRING("groundAnchorB"));
	outFields->push(HX_CSTRING("groundAnchorA"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("ratio"),
	HX_CSTRING("maxLengthB"),
	HX_CSTRING("lengthB"),
	HX_CSTRING("maxLengthA"),
	HX_CSTRING("lengthA"),
	HX_CSTRING("localAnchorB"),
	HX_CSTRING("localAnchorA"),
	HX_CSTRING("groundAnchorB"),
	HX_CSTRING("groundAnchorA"),
	HX_CSTRING("initialize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2PulleyJointDef_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2PulleyJointDef_obj::__mClass,"__mClass");
};

Class B2PulleyJointDef_obj::__mClass;

void B2PulleyJointDef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.joints.B2PulleyJointDef"), hx::TCanCast< B2PulleyJointDef_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2PulleyJointDef_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints
