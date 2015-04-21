#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2BodyDef
#include <box2D/dynamics/B2BodyDef.h>
#endif
namespace box2D{
namespace dynamics{

Void B2BodyDef_obj::__construct()
{
HX_STACK_PUSH("B2BodyDef::new","box2D/dynamics/B2BodyDef.hx",35);
{
	HX_STACK_LINE(36)
	this->position = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(37)
	this->linearVelocity = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(39)
	this->userData = null();
	HX_STACK_LINE(41)
	this->angle = 0.0;
	HX_STACK_LINE(43)
	this->angularVelocity = 0.0;
	HX_STACK_LINE(44)
	this->linearDamping = 0.0;
	HX_STACK_LINE(45)
	this->angularDamping = 0.0;
	HX_STACK_LINE(46)
	this->allowSleep = true;
	HX_STACK_LINE(47)
	this->awake = true;
	HX_STACK_LINE(48)
	this->fixedRotation = false;
	HX_STACK_LINE(49)
	this->bullet = false;
	HX_STACK_LINE(50)
	this->type = ::box2D::dynamics::B2Body_obj::b2_staticBody;
	HX_STACK_LINE(51)
	this->active = true;
	HX_STACK_LINE(52)
	this->inertiaScale = 1.0;
	HX_STACK_LINE(55)
	this->groupID = (int)3;
}
;
	return null();
}

B2BodyDef_obj::~B2BodyDef_obj() { }

Dynamic B2BodyDef_obj::__CreateEmpty() { return  new B2BodyDef_obj; }
hx::ObjectPtr< B2BodyDef_obj > B2BodyDef_obj::__new()
{  hx::ObjectPtr< B2BodyDef_obj > result = new B2BodyDef_obj();
	result->__construct();
	return result;}

Dynamic B2BodyDef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2BodyDef_obj > result = new B2BodyDef_obj();
	result->__construct();
	return result;}


B2BodyDef_obj::B2BodyDef_obj()
{
}

void B2BodyDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2BodyDef);
	HX_MARK_MEMBER_NAME(aMass,"aMass");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(bounciness,"bounciness");
	HX_MARK_MEMBER_NAME(friction,"friction");
	HX_MARK_MEMBER_NAME(ignoreGravity,"ignoreGravity");
	HX_MARK_MEMBER_NAME(groupID,"groupID");
	HX_MARK_MEMBER_NAME(inertiaScale,"inertiaScale");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(bullet,"bullet");
	HX_MARK_MEMBER_NAME(fixedRotation,"fixedRotation");
	HX_MARK_MEMBER_NAME(awake,"awake");
	HX_MARK_MEMBER_NAME(allowSleep,"allowSleep");
	HX_MARK_MEMBER_NAME(angularDamping,"angularDamping");
	HX_MARK_MEMBER_NAME(linearDamping,"linearDamping");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(linearVelocity,"linearVelocity");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void B2BodyDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(aMass,"aMass");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(bounciness,"bounciness");
	HX_VISIT_MEMBER_NAME(friction,"friction");
	HX_VISIT_MEMBER_NAME(ignoreGravity,"ignoreGravity");
	HX_VISIT_MEMBER_NAME(groupID,"groupID");
	HX_VISIT_MEMBER_NAME(inertiaScale,"inertiaScale");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(bullet,"bullet");
	HX_VISIT_MEMBER_NAME(fixedRotation,"fixedRotation");
	HX_VISIT_MEMBER_NAME(awake,"awake");
	HX_VISIT_MEMBER_NAME(allowSleep,"allowSleep");
	HX_VISIT_MEMBER_NAME(angularDamping,"angularDamping");
	HX_VISIT_MEMBER_NAME(linearDamping,"linearDamping");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(linearVelocity,"linearVelocity");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic B2BodyDef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"aMass") ) { return aMass; }
		if (HX_FIELD_EQ(inName,"awake") ) { return awake; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"bullet") ) { return bullet; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"groupID") ) { return groupID; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { return friction; }
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bounciness") ) { return bounciness; }
		if (HX_FIELD_EQ(inName,"allowSleep") ) { return allowSleep; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"inertiaScale") ) { return inertiaScale; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ignoreGravity") ) { return ignoreGravity; }
		if (HX_FIELD_EQ(inName,"fixedRotation") ) { return fixedRotation; }
		if (HX_FIELD_EQ(inName,"linearDamping") ) { return linearDamping; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"angularDamping") ) { return angularDamping; }
		if (HX_FIELD_EQ(inName,"linearVelocity") ) { return linearVelocity; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return angularVelocity; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2BodyDef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"aMass") ) { aMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"awake") ) { awake=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bullet") ) { bullet=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"groupID") ) { groupID=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bounciness") ) { bounciness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowSleep") ) { allowSleep=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"inertiaScale") ) { inertiaScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ignoreGravity") ) { ignoreGravity=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixedRotation") ) { fixedRotation=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"linearDamping") ) { linearDamping=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"angularDamping") ) { angularDamping=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"linearVelocity") ) { linearVelocity=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2BodyDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("aMass"));
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("bounciness"));
	outFields->push(HX_CSTRING("friction"));
	outFields->push(HX_CSTRING("ignoreGravity"));
	outFields->push(HX_CSTRING("groupID"));
	outFields->push(HX_CSTRING("inertiaScale"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("bullet"));
	outFields->push(HX_CSTRING("fixedRotation"));
	outFields->push(HX_CSTRING("awake"));
	outFields->push(HX_CSTRING("allowSleep"));
	outFields->push(HX_CSTRING("angularDamping"));
	outFields->push(HX_CSTRING("linearDamping"));
	outFields->push(HX_CSTRING("angularVelocity"));
	outFields->push(HX_CSTRING("linearVelocity"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("aMass"),
	HX_CSTRING("mass"),
	HX_CSTRING("bounciness"),
	HX_CSTRING("friction"),
	HX_CSTRING("ignoreGravity"),
	HX_CSTRING("groupID"),
	HX_CSTRING("inertiaScale"),
	HX_CSTRING("userData"),
	HX_CSTRING("active"),
	HX_CSTRING("bullet"),
	HX_CSTRING("fixedRotation"),
	HX_CSTRING("awake"),
	HX_CSTRING("allowSleep"),
	HX_CSTRING("angularDamping"),
	HX_CSTRING("linearDamping"),
	HX_CSTRING("angularVelocity"),
	HX_CSTRING("linearVelocity"),
	HX_CSTRING("angle"),
	HX_CSTRING("position"),
	HX_CSTRING("type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2BodyDef_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2BodyDef_obj::__mClass,"__mClass");
};

Class B2BodyDef_obj::__mClass;

void B2BodyDef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.B2BodyDef"), hx::TCanCast< B2BodyDef_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2BodyDef_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
