#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuartEaseOut
#include <motion/easing/QuartEaseOut.h>
#endif
namespace motion{
namespace easing{

Void QuartEaseOut_obj::__construct()
{
HX_STACK_PUSH("QuartEaseOut::new","motion/easing/Quart.hx",104);
{
}
;
	return null();
}

QuartEaseOut_obj::~QuartEaseOut_obj() { }

Dynamic QuartEaseOut_obj::__CreateEmpty() { return  new QuartEaseOut_obj; }
hx::ObjectPtr< QuartEaseOut_obj > QuartEaseOut_obj::__new()
{  hx::ObjectPtr< QuartEaseOut_obj > result = new QuartEaseOut_obj();
	result->__construct();
	return result;}

Dynamic QuartEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuartEaseOut_obj > result = new QuartEaseOut_obj();
	result->__construct();
	return result;}

hx::Object *QuartEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float QuartEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("QuartEaseOut::ease","motion/easing/Quart.hx",118);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(118)
	return ((-(c) * ((((((t = ((Float(t) / Float(d)) - (int)1)) * t) * t) * t) - (int)1))) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(QuartEaseOut_obj,ease,return )

Float QuartEaseOut_obj::calculate( Float k){
	HX_STACK_PUSH("QuartEaseOut::calculate","motion/easing/Quart.hx",111);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(111)
	return -((((((--(k) * k) * k) * k) - (int)1)));
}


HX_DEFINE_DYNAMIC_FUNC1(QuartEaseOut_obj,calculate,return )


QuartEaseOut_obj::QuartEaseOut_obj()
{
}

void QuartEaseOut_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuartEaseOut);
	HX_MARK_END_CLASS();
}

void QuartEaseOut_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic QuartEaseOut_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic QuartEaseOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void QuartEaseOut_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(QuartEaseOut_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuartEaseOut_obj::__mClass,"__mClass");
};

Class QuartEaseOut_obj::__mClass;

void QuartEaseOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.QuartEaseOut"), hx::TCanCast< QuartEaseOut_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void QuartEaseOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
