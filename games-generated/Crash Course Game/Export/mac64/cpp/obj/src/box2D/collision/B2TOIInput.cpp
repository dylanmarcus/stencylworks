#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2DistanceProxy
#include <box2D/collision/B2DistanceProxy.h>
#endif
#ifndef INCLUDED_box2D_collision_B2TOIInput
#include <box2D/collision/B2TOIInput.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Sweep
#include <box2D/common/math/B2Sweep.h>
#endif
namespace box2D{
namespace collision{

Void B2TOIInput_obj::__construct()
{
HX_STACK_PUSH("B2TOIInput::new","box2D/collision/B2TOIInput.hx",29);
{
	HX_STACK_LINE(31)
	this->proxyA = ::box2D::collision::B2DistanceProxy_obj::__new();
	HX_STACK_LINE(32)
	this->proxyB = ::box2D::collision::B2DistanceProxy_obj::__new();
	HX_STACK_LINE(33)
	this->sweepA = ::box2D::common::math::B2Sweep_obj::__new();
	HX_STACK_LINE(34)
	this->sweepB = ::box2D::common::math::B2Sweep_obj::__new();
}
;
	return null();
}

B2TOIInput_obj::~B2TOIInput_obj() { }

Dynamic B2TOIInput_obj::__CreateEmpty() { return  new B2TOIInput_obj; }
hx::ObjectPtr< B2TOIInput_obj > B2TOIInput_obj::__new()
{  hx::ObjectPtr< B2TOIInput_obj > result = new B2TOIInput_obj();
	result->__construct();
	return result;}

Dynamic B2TOIInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2TOIInput_obj > result = new B2TOIInput_obj();
	result->__construct();
	return result;}


B2TOIInput_obj::B2TOIInput_obj()
{
}

void B2TOIInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2TOIInput);
	HX_MARK_MEMBER_NAME(tolerance,"tolerance");
	HX_MARK_MEMBER_NAME(sweepB,"sweepB");
	HX_MARK_MEMBER_NAME(sweepA,"sweepA");
	HX_MARK_MEMBER_NAME(proxyB,"proxyB");
	HX_MARK_MEMBER_NAME(proxyA,"proxyA");
	HX_MARK_END_CLASS();
}

void B2TOIInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tolerance,"tolerance");
	HX_VISIT_MEMBER_NAME(sweepB,"sweepB");
	HX_VISIT_MEMBER_NAME(sweepA,"sweepA");
	HX_VISIT_MEMBER_NAME(proxyB,"proxyB");
	HX_VISIT_MEMBER_NAME(proxyA,"proxyA");
}

Dynamic B2TOIInput_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sweepB") ) { return sweepB; }
		if (HX_FIELD_EQ(inName,"sweepA") ) { return sweepA; }
		if (HX_FIELD_EQ(inName,"proxyB") ) { return proxyB; }
		if (HX_FIELD_EQ(inName,"proxyA") ) { return proxyA; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tolerance") ) { return tolerance; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2TOIInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sweepB") ) { sweepB=inValue.Cast< ::box2D::common::math::B2Sweep >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepA") ) { sweepA=inValue.Cast< ::box2D::common::math::B2Sweep >(); return inValue; }
		if (HX_FIELD_EQ(inName,"proxyB") ) { proxyB=inValue.Cast< ::box2D::collision::B2DistanceProxy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"proxyA") ) { proxyA=inValue.Cast< ::box2D::collision::B2DistanceProxy >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tolerance") ) { tolerance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2TOIInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tolerance"));
	outFields->push(HX_CSTRING("sweepB"));
	outFields->push(HX_CSTRING("sweepA"));
	outFields->push(HX_CSTRING("proxyB"));
	outFields->push(HX_CSTRING("proxyA"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("tolerance"),
	HX_CSTRING("sweepB"),
	HX_CSTRING("sweepA"),
	HX_CSTRING("proxyB"),
	HX_CSTRING("proxyA"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2TOIInput_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2TOIInput_obj::__mClass,"__mClass");
};

Class B2TOIInput_obj::__mClass;

void B2TOIInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.B2TOIInput"), hx::TCanCast< B2TOIInput_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2TOIInput_obj::__boot()
{
}

} // end namespace box2D
} // end namespace collision
