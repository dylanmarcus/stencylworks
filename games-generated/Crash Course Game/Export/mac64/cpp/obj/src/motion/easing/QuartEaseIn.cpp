#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuartEaseIn
#include <motion/easing/QuartEaseIn.h>
#endif
namespace motion{
namespace easing{

Void QuartEaseIn_obj::__construct()
{
HX_STACK_PUSH("QuartEaseIn::new","motion/easing/Quart.hx",46);
{
}
;
	return null();
}

QuartEaseIn_obj::~QuartEaseIn_obj() { }

Dynamic QuartEaseIn_obj::__CreateEmpty() { return  new QuartEaseIn_obj; }
hx::ObjectPtr< QuartEaseIn_obj > QuartEaseIn_obj::__new()
{  hx::ObjectPtr< QuartEaseIn_obj > result = new QuartEaseIn_obj();
	result->__construct();
	return result;}

Dynamic QuartEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuartEaseIn_obj > result = new QuartEaseIn_obj();
	result->__construct();
	return result;}

hx::Object *QuartEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float QuartEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("QuartEaseIn::ease","motion/easing/Quart.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(60)
	return (((((c * (hx::DivEq(t,d))) * t) * t) * t) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(QuartEaseIn_obj,ease,return )

Float QuartEaseIn_obj::calculate( Float k){
	HX_STACK_PUSH("QuartEaseIn::calculate","motion/easing/Quart.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(53)
	return (((k * k) * k) * k);
}


HX_DEFINE_DYNAMIC_FUNC1(QuartEaseIn_obj,calculate,return )


QuartEaseIn_obj::QuartEaseIn_obj()
{
}

void QuartEaseIn_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuartEaseIn);
	HX_MARK_END_CLASS();
}

void QuartEaseIn_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic QuartEaseIn_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic QuartEaseIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void QuartEaseIn_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(QuartEaseIn_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuartEaseIn_obj::__mClass,"__mClass");
};

Class QuartEaseIn_obj::__mClass;

void QuartEaseIn_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.QuartEaseIn"), hx::TCanCast< QuartEaseIn_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void QuartEaseIn_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
