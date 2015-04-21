#include <hxcpp.h>

#ifndef INCLUDED_box2D_dynamics_joints_B2GearJointDef
#include <box2D/dynamics/joints/B2GearJointDef.h>
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

Void B2GearJointDef_obj::__construct()
{
HX_STACK_PUSH("B2GearJointDef::new","box2D/dynamics/joints/B2GearJointDef.hx",32);
{
	HX_STACK_LINE(33)
	super::__construct();
	HX_STACK_LINE(34)
	this->type = ::box2D::dynamics::joints::B2Joint_obj::e_gearJoint;
	HX_STACK_LINE(35)
	this->joint1 = null();
	HX_STACK_LINE(36)
	this->joint2 = null();
	HX_STACK_LINE(37)
	this->ratio = 1.0;
}
;
	return null();
}

B2GearJointDef_obj::~B2GearJointDef_obj() { }

Dynamic B2GearJointDef_obj::__CreateEmpty() { return  new B2GearJointDef_obj; }
hx::ObjectPtr< B2GearJointDef_obj > B2GearJointDef_obj::__new()
{  hx::ObjectPtr< B2GearJointDef_obj > result = new B2GearJointDef_obj();
	result->__construct();
	return result;}

Dynamic B2GearJointDef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2GearJointDef_obj > result = new B2GearJointDef_obj();
	result->__construct();
	return result;}


B2GearJointDef_obj::B2GearJointDef_obj()
{
}

void B2GearJointDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2GearJointDef);
	HX_MARK_MEMBER_NAME(ratio,"ratio");
	HX_MARK_MEMBER_NAME(joint2,"joint2");
	HX_MARK_MEMBER_NAME(joint1,"joint1");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2GearJointDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ratio,"ratio");
	HX_VISIT_MEMBER_NAME(joint2,"joint2");
	HX_VISIT_MEMBER_NAME(joint1,"joint1");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic B2GearJointDef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { return ratio; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joint2") ) { return joint2; }
		if (HX_FIELD_EQ(inName,"joint1") ) { return joint1; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2GearJointDef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { ratio=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joint2") ) { joint2=inValue.Cast< ::box2D::dynamics::joints::B2Joint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"joint1") ) { joint1=inValue.Cast< ::box2D::dynamics::joints::B2Joint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2GearJointDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ratio"));
	outFields->push(HX_CSTRING("joint2"));
	outFields->push(HX_CSTRING("joint1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("ratio"),
	HX_CSTRING("joint2"),
	HX_CSTRING("joint1"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2GearJointDef_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2GearJointDef_obj::__mClass,"__mClass");
};

Class B2GearJointDef_obj::__mClass;

void B2GearJointDef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.joints.B2GearJointDef"), hx::TCanCast< B2GearJointDef_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2GearJointDef_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints
