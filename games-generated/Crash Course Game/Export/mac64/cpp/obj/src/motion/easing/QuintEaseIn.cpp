#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuintEaseIn
#include <motion/easing/QuintEaseIn.h>
#endif
namespace motion{
namespace easing{

Void QuintEaseIn_obj::__construct()
{
HX_STACK_PUSH("QuintEaseIn::new","motion/easing/Quint.hx",46);
{
}
;
	return null();
}

QuintEaseIn_obj::~QuintEaseIn_obj() { }

Dynamic QuintEaseIn_obj::__CreateEmpty() { return  new QuintEaseIn_obj; }
hx::ObjectPtr< QuintEaseIn_obj > QuintEaseIn_obj::__new()
{  hx::ObjectPtr< QuintEaseIn_obj > result = new QuintEaseIn_obj();
	result->__construct();
	return result;}

Dynamic QuintEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuintEaseIn_obj > result = new QuintEaseIn_obj();
	result->__construct();
	return result;}

hx::Object *QuintEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float QuintEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("QuintEaseIn::ease","motion/easing/Quint.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(60)
	return ((((((c * (hx::DivEq(t,d))) * t) * t) * t) * t) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(QuintEaseIn_obj,ease,return )

Float QuintEaseIn_obj::calculate( Float k){
	HX_STACK_PUSH("QuintEaseIn::calculate","motion/easing/Quint.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(53)
	return ((((k * k) * k) * k) * k);
}


HX_DEFINE_DYNAMIC_FUNC1(QuintEaseIn_obj,calculate,return )


QuintEaseIn_obj::QuintEaseIn_obj()
{
}

void QuintEaseIn_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuintEaseIn);
	HX_MARK_END_CLASS();
}

void QuintEaseIn_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic QuintEaseIn_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic QuintEaseIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void QuintEaseIn_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(QuintEaseIn_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuintEaseIn_obj::__mClass,"__mClass");
};

Class QuintEaseIn_obj::__mClass;

void QuintEaseIn_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.QuintEaseIn"), hx::TCanCast< QuintEaseIn_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void QuintEaseIn_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
