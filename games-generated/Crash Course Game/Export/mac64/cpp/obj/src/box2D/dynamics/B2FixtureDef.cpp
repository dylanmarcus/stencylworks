#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2FilterData
#include <box2D/dynamics/B2FilterData.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2FixtureDef
#include <box2D/dynamics/B2FixtureDef.h>
#endif
namespace box2D{
namespace dynamics{

Void B2FixtureDef_obj::__construct()
{
HX_STACK_PUSH("B2FixtureDef::new","box2D/dynamics/B2FixtureDef.hx",35);
{
	HX_STACK_LINE(36)
	this->filter = ::box2D::dynamics::B2FilterData_obj::__new();
	HX_STACK_LINE(37)
	this->shape = null();
	HX_STACK_LINE(38)
	this->userData = null();
	HX_STACK_LINE(39)
	this->friction = 0.2;
	HX_STACK_LINE(40)
	this->restitution = 0.0;
	HX_STACK_LINE(41)
	this->density = 0.0;
	HX_STACK_LINE(42)
	this->filter->categoryBits = (int)1;
	HX_STACK_LINE(43)
	this->filter->maskBits = (int)65535;
	HX_STACK_LINE(44)
	this->filter->groupIndex = (int)0;
	HX_STACK_LINE(45)
	this->isSensor = false;
	HX_STACK_LINE(48)
	this->groupID = (int)3;
}
;
	return null();
}

B2FixtureDef_obj::~B2FixtureDef_obj() { }

Dynamic B2FixtureDef_obj::__CreateEmpty() { return  new B2FixtureDef_obj; }
hx::ObjectPtr< B2FixtureDef_obj > B2FixtureDef_obj::__new()
{  hx::ObjectPtr< B2FixtureDef_obj > result = new B2FixtureDef_obj();
	result->__construct();
	return result;}

Dynamic B2FixtureDef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2FixtureDef_obj > result = new B2FixtureDef_obj();
	result->__construct();
	return result;}


B2FixtureDef_obj::B2FixtureDef_obj()
{
}

void B2FixtureDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2FixtureDef);
	HX_MARK_MEMBER_NAME(groupID,"groupID");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(isSensor,"isSensor");
	HX_MARK_MEMBER_NAME(density,"density");
	HX_MARK_MEMBER_NAME(restitution,"restitution");
	HX_MARK_MEMBER_NAME(friction,"friction");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_END_CLASS();
}

void B2FixtureDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(groupID,"groupID");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(isSensor,"isSensor");
	HX_VISIT_MEMBER_NAME(density,"density");
	HX_VISIT_MEMBER_NAME(restitution,"restitution");
	HX_VISIT_MEMBER_NAME(friction,"friction");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(shape,"shape");
}

Dynamic B2FixtureDef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { return shape; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"groupID") ) { return groupID; }
		if (HX_FIELD_EQ(inName,"density") ) { return density; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isSensor") ) { return isSensor; }
		if (HX_FIELD_EQ(inName,"friction") ) { return friction; }
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"restitution") ) { return restitution; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2FixtureDef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::box2D::collision::shapes::B2Shape >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::box2D::dynamics::B2FilterData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"groupID") ) { groupID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"density") ) { density=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isSensor") ) { isSensor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"restitution") ) { restitution=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2FixtureDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("groupID"));
	outFields->push(HX_CSTRING("filter"));
	outFields->push(HX_CSTRING("isSensor"));
	outFields->push(HX_CSTRING("density"));
	outFields->push(HX_CSTRING("restitution"));
	outFields->push(HX_CSTRING("friction"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("shape"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("groupID"),
	HX_CSTRING("filter"),
	HX_CSTRING("isSensor"),
	HX_CSTRING("density"),
	HX_CSTRING("restitution"),
	HX_CSTRING("friction"),
	HX_CSTRING("userData"),
	HX_CSTRING("shape"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2FixtureDef_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2FixtureDef_obj::__mClass,"__mClass");
};

Class B2FixtureDef_obj::__mClass;

void B2FixtureDef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.B2FixtureDef"), hx::TCanCast< B2FixtureDef_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2FixtureDef_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
