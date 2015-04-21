#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_CubicEaseIn
#include <motion/easing/CubicEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void CubicEaseIn_obj::__construct()
{
HX_STACK_PUSH("CubicEaseIn::new","motion/easing/Cubic.hx",46);
{
}
;
	return null();
}

CubicEaseIn_obj::~CubicEaseIn_obj() { }

Dynamic CubicEaseIn_obj::__CreateEmpty() { return  new CubicEaseIn_obj; }
hx::ObjectPtr< CubicEaseIn_obj > CubicEaseIn_obj::__new()
{  hx::ObjectPtr< CubicEaseIn_obj > result = new CubicEaseIn_obj();
	result->__construct();
	return result;}

Dynamic CubicEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubicEaseIn_obj > result = new CubicEaseIn_obj();
	result->__construct();
	return result;}

hx::Object *CubicEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float CubicEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("CubicEaseIn::ease","motion/easing/Cubic.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(60)
	return ((((c * (hx::DivEq(t,d))) * t) * t) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(CubicEaseIn_obj,ease,return )

Float CubicEaseIn_obj::calculate( Float k){
	HX_STACK_PUSH("CubicEaseIn::calculate","motion/easing/Cubic.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(53)
	return ((k * k) * k);
}


HX_DEFINE_DYNAMIC_FUNC1(CubicEaseIn_obj,calculate,return )


CubicEaseIn_obj::CubicEaseIn_obj()
{
}

void CubicEaseIn_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubicEaseIn);
	HX_MARK_END_CLASS();
}

void CubicEaseIn_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic CubicEaseIn_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CubicEaseIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CubicEaseIn_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("ease"),
	HX_CSTRING("calculate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubicEaseIn_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubicEaseIn_obj::__mClass,"__mClass");
};

Class CubicEaseIn_obj::__mClass;

void CubicEaseIn_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.CubicEaseIn"), hx::TCanCast< CubicEaseIn_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CubicEaseIn_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
