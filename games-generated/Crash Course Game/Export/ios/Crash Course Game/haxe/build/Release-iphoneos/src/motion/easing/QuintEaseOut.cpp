#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuintEaseOut
#include <motion/easing/QuintEaseOut.h>
#endif
namespace motion{
namespace easing{

Void QuintEaseOut_obj::__construct()
{
HX_STACK_PUSH("QuintEaseOut::new","motion/easing/Quint.hx",104);
{
}
;
	return null();
}

QuintEaseOut_obj::~QuintEaseOut_obj() { }

Dynamic QuintEaseOut_obj::__CreateEmpty() { return  new QuintEaseOut_obj; }
hx::ObjectPtr< QuintEaseOut_obj > QuintEaseOut_obj::__new()
{  hx::ObjectPtr< QuintEaseOut_obj > result = new QuintEaseOut_obj();
	result->__construct();
	return result;}

Dynamic QuintEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuintEaseOut_obj > result = new QuintEaseOut_obj();
	result->__construct();
	return result;}

hx::Object *QuintEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float QuintEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("QuintEaseOut::ease","motion/easing/Quint.hx",118);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(118)
	return ((c * (((((((t = ((Float(t) / Float(d)) - (int)1)) * t) * t) * t) * t) + (int)1))) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(QuintEaseOut_obj,ease,return )

Float QuintEaseOut_obj::calculate( Float k){
	HX_STACK_PUSH("QuintEaseOut::calculate","motion/easing/Quint.hx",111);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(111)
	return (((((--(k) * k) * k) * k) * k) + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(QuintEaseOut_obj,calculate,return )


QuintEaseOut_obj::QuintEaseOut_obj()
{
}

void QuintEaseOut_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuintEaseOut);
	HX_MARK_END_CLASS();
}

void QuintEaseOut_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic QuintEaseOut_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic QuintEaseOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void QuintEaseOut_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(QuintEaseOut_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuintEaseOut_obj::__mClass,"__mClass");
};

Class QuintEaseOut_obj::__mClass;

void QuintEaseOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.QuintEaseOut"), hx::TCanCast< QuintEaseOut_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void QuintEaseOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
