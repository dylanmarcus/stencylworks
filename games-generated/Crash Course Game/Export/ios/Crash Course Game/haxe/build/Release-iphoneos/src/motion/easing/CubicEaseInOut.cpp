#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_CubicEaseInOut
#include <motion/easing/CubicEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void CubicEaseInOut_obj::__construct()
{
HX_STACK_PUSH("CubicEaseInOut::new","motion/easing/Cubic.hx",73);
{
}
;
	return null();
}

CubicEaseInOut_obj::~CubicEaseInOut_obj() { }

Dynamic CubicEaseInOut_obj::__CreateEmpty() { return  new CubicEaseInOut_obj; }
hx::ObjectPtr< CubicEaseInOut_obj > CubicEaseInOut_obj::__new()
{  hx::ObjectPtr< CubicEaseInOut_obj > result = new CubicEaseInOut_obj();
	result->__construct();
	return result;}

Dynamic CubicEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubicEaseInOut_obj > result = new CubicEaseInOut_obj();
	result->__construct();
	return result;}

hx::Object *CubicEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float CubicEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("CubicEaseInOut::ease","motion/easing/Cubic.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(87)
	return (  ((((hx::DivEq(t,(Float(d) / Float((int)2)))) < (int)1))) ? Float((((((Float(c) / Float((int)2)) * t) * t) * t) + b)) : Float((((Float(c) / Float((int)2)) * (((((hx::SubEq(t,(int)2)) * t) * t) + (int)2))) + b)) );
}


HX_DEFINE_DYNAMIC_FUNC4(CubicEaseInOut_obj,ease,return )

Float CubicEaseInOut_obj::calculate( Float k){
	HX_STACK_PUSH("CubicEaseInOut::calculate","motion/easing/Cubic.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(80)
	return (  ((((hx::DivEq(k,0.5)) < (int)1))) ? Float((((0.5 * k) * k) * k)) : Float((0.5 * (((((hx::SubEq(k,(int)2)) * k) * k) + (int)2)))) );
}


HX_DEFINE_DYNAMIC_FUNC1(CubicEaseInOut_obj,calculate,return )


CubicEaseInOut_obj::CubicEaseInOut_obj()
{
}

void CubicEaseInOut_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubicEaseInOut);
	HX_MARK_END_CLASS();
}

void CubicEaseInOut_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic CubicEaseInOut_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic CubicEaseInOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CubicEaseInOut_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(CubicEaseInOut_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubicEaseInOut_obj::__mClass,"__mClass");
};

Class CubicEaseInOut_obj::__mClass;

void CubicEaseInOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.CubicEaseInOut"), hx::TCanCast< CubicEaseInOut_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CubicEaseInOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
