#include <hxcpp.h>

#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactFilter
#include <box2D/dynamics/B2ContactFilter.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
namespace box2D{
namespace dynamics{

Void B2ContactFilter_obj::__construct()
{
HX_STACK_PUSH("B2ContactFilter::new","box2D/dynamics/B2ContactFilter.hx",28);
{
}
;
	return null();
}

B2ContactFilter_obj::~B2ContactFilter_obj() { }

Dynamic B2ContactFilter_obj::__CreateEmpty() { return  new B2ContactFilter_obj; }
hx::ObjectPtr< B2ContactFilter_obj > B2ContactFilter_obj::__new()
{  hx::ObjectPtr< B2ContactFilter_obj > result = new B2ContactFilter_obj();
	result->__construct();
	return result;}

Dynamic B2ContactFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2ContactFilter_obj > result = new B2ContactFilter_obj();
	result->__construct();
	return result;}

bool B2ContactFilter_obj::rayCollide( Dynamic userData,::box2D::dynamics::B2Fixture fixture){
	HX_STACK_PUSH("B2ContactFilter::rayCollide","box2D/dynamics/B2ContactFilter.hx",78);
	HX_STACK_THIS(this);
	HX_STACK_ARG(userData,"userData");
	HX_STACK_ARG(fixture,"fixture");
	HX_STACK_LINE(79)
	if (((userData == null()))){
		HX_STACK_LINE(80)
		return true;
	}
	HX_STACK_LINE(81)
	return this->shouldCollide(hx::TCast< box2D::dynamics::B2Fixture >::cast(userData),fixture);
}


HX_DEFINE_DYNAMIC_FUNC2(B2ContactFilter_obj,rayCollide,return )

bool B2ContactFilter_obj::shouldCollide( ::box2D::dynamics::B2Fixture fixtureA,::box2D::dynamics::B2Fixture fixtureB){
	HX_STACK_PUSH("B2ContactFilter::shouldCollide","box2D/dynamics/B2ContactFilter.hx",36);
	HX_STACK_THIS(this);
	HX_STACK_ARG(fixtureA,"fixtureA");
	HX_STACK_ARG(fixtureB,"fixtureB");
	HX_STACK_LINE(37)
	int g1 = fixtureA->m_body->groupID;		HX_STACK_VAR(g1,"g1");
	HX_STACK_LINE(38)
	int g2 = fixtureB->m_body->groupID;		HX_STACK_VAR(g2,"g2");
	HX_STACK_LINE(40)
	int gf1 = fixtureA->groupID;		HX_STACK_VAR(gf1,"gf1");
	HX_STACK_LINE(41)
	int gf2 = fixtureB->groupID;		HX_STACK_VAR(gf2,"gf2");
	HX_STACK_LINE(43)
	if (((gf1 != (int)-1000))){
		HX_STACK_LINE(44)
		g1 = gf1;
	}
	HX_STACK_LINE(48)
	if (((gf2 != (int)-1000))){
		HX_STACK_LINE(49)
		g2 = gf2;
	}
	HX_STACK_LINE(53)
	if (((bool((g1 == (int)-1)) || bool((g2 == (int)-1))))){
		HX_STACK_LINE(54)
		return false;
	}
	HX_STACK_LINE(59)
	if (((bool((g1 == (int)-2)) || bool((g2 == (int)-2))))){
		HX_STACK_LINE(60)
		return true;
	}
	HX_STACK_LINE(66)
	return ::com::stencyl::models::GameModel_obj::collisionMap->__get(g1).StaticCast< Array< bool > >()->__get(g2);
}


HX_DEFINE_DYNAMIC_FUNC2(B2ContactFilter_obj,shouldCollide,return )

::box2D::dynamics::B2ContactFilter B2ContactFilter_obj::b2_defaultFilter;


B2ContactFilter_obj::B2ContactFilter_obj()
{
}

void B2ContactFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2ContactFilter);
	HX_MARK_END_CLASS();
}

void B2ContactFilter_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic B2ContactFilter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"rayCollide") ) { return rayCollide_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shouldCollide") ) { return shouldCollide_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"b2_defaultFilter") ) { return b2_defaultFilter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2ContactFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"b2_defaultFilter") ) { b2_defaultFilter=inValue.Cast< ::box2D::dynamics::B2ContactFilter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2ContactFilter_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("b2_defaultFilter"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("rayCollide"),
	HX_CSTRING("shouldCollide"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2ContactFilter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2ContactFilter_obj::b2_defaultFilter,"b2_defaultFilter");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2ContactFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2ContactFilter_obj::b2_defaultFilter,"b2_defaultFilter");
};

Class B2ContactFilter_obj::__mClass;

void B2ContactFilter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.B2ContactFilter"), hx::TCanCast< B2ContactFilter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2ContactFilter_obj::__boot()
{
	b2_defaultFilter= ::box2D::dynamics::B2ContactFilter_obj::__new();
}

} // end namespace box2D
} // end namespace dynamics
