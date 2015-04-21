#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_SineEaseIn
#include <motion/easing/SineEaseIn.h>
#endif
namespace motion{
namespace easing{

Void SineEaseIn_obj::__construct()
{
HX_STACK_PUSH("SineEaseIn::new","motion/easing/Sine.hx",45);
{
}
;
	return null();
}

SineEaseIn_obj::~SineEaseIn_obj() { }

Dynamic SineEaseIn_obj::__CreateEmpty() { return  new SineEaseIn_obj; }
hx::ObjectPtr< SineEaseIn_obj > SineEaseIn_obj::__new()
{  hx::ObjectPtr< SineEaseIn_obj > result = new SineEaseIn_obj();
	result->__construct();
	return result;}

Dynamic SineEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SineEaseIn_obj > result = new SineEaseIn_obj();
	result->__construct();
	return result;}

hx::Object *SineEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float SineEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("SineEaseIn::ease","motion/easing/Sine.hx",59);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(59)
	return (((-(c) * ::Math_obj::cos(((Float(t) / Float(d)) * ((Float(::Math_obj::PI) / Float((int)2)))))) + c) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(SineEaseIn_obj,ease,return )

Float SineEaseIn_obj::calculate( Float k){
	HX_STACK_PUSH("SineEaseIn::calculate","motion/easing/Sine.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(52)
	return ((int)1 - ::Math_obj::cos((k * ((Float(::Math_obj::PI) / Float((int)2))))));
}


HX_DEFINE_DYNAMIC_FUNC1(SineEaseIn_obj,calculate,return )


SineEaseIn_obj::SineEaseIn_obj()
{
}

void SineEaseIn_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SineEaseIn);
	HX_MARK_END_CLASS();
}

void SineEaseIn_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic SineEaseIn_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic SineEaseIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SineEaseIn_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(SineEaseIn_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SineEaseIn_obj::__mClass,"__mClass");
};

Class SineEaseIn_obj::__mClass;

void SineEaseIn_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.SineEaseIn"), hx::TCanCast< SineEaseIn_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SineEaseIn_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
