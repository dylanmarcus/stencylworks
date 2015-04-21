#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_SineEaseInOut
#include <motion/easing/SineEaseInOut.h>
#endif
namespace motion{
namespace easing{

Void SineEaseInOut_obj::__construct()
{
HX_STACK_PUSH("SineEaseInOut::new","motion/easing/Sine.hx",72);
{
}
;
	return null();
}

SineEaseInOut_obj::~SineEaseInOut_obj() { }

Dynamic SineEaseInOut_obj::__CreateEmpty() { return  new SineEaseInOut_obj; }
hx::ObjectPtr< SineEaseInOut_obj > SineEaseInOut_obj::__new()
{  hx::ObjectPtr< SineEaseInOut_obj > result = new SineEaseInOut_obj();
	result->__construct();
	return result;}

Dynamic SineEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SineEaseInOut_obj > result = new SineEaseInOut_obj();
	result->__construct();
	return result;}

hx::Object *SineEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float SineEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("SineEaseInOut::ease","motion/easing/Sine.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(86)
	return (((Float(-(c)) / Float((int)2)) * ((::Math_obj::cos((Float((::Math_obj::PI * t)) / Float(d))) - (int)1))) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(SineEaseInOut_obj,ease,return )

Float SineEaseInOut_obj::calculate( Float k){
	HX_STACK_PUSH("SineEaseInOut::calculate","motion/easing/Sine.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(79)
	return (Float(-(((::Math_obj::cos((::Math_obj::PI * k)) - (int)1)))) / Float((int)2));
}


HX_DEFINE_DYNAMIC_FUNC1(SineEaseInOut_obj,calculate,return )


SineEaseInOut_obj::SineEaseInOut_obj()
{
}

void SineEaseInOut_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SineEaseInOut);
	HX_MARK_END_CLASS();
}

void SineEaseInOut_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic SineEaseInOut_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic SineEaseInOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SineEaseInOut_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(SineEaseInOut_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SineEaseInOut_obj::__mClass,"__mClass");
};

Class SineEaseInOut_obj::__mClass;

void SineEaseInOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.SineEaseInOut"), hx::TCanCast< SineEaseInOut_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SineEaseInOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
