#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuintEaseInOut
#include <motion/easing/QuintEaseInOut.h>
#endif
namespace motion{
namespace easing{

Void QuintEaseInOut_obj::__construct()
{
HX_STACK_PUSH("QuintEaseInOut::new","motion/easing/Quint.hx",73);
{
}
;
	return null();
}

QuintEaseInOut_obj::~QuintEaseInOut_obj() { }

Dynamic QuintEaseInOut_obj::__CreateEmpty() { return  new QuintEaseInOut_obj; }
hx::ObjectPtr< QuintEaseInOut_obj > QuintEaseInOut_obj::__new()
{  hx::ObjectPtr< QuintEaseInOut_obj > result = new QuintEaseInOut_obj();
	result->__construct();
	return result;}

Dynamic QuintEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuintEaseInOut_obj > result = new QuintEaseInOut_obj();
	result->__construct();
	return result;}

hx::Object *QuintEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float QuintEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("QuintEaseInOut::ease","motion/easing/Quint.hx",88);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(90)
	if ((((hx::DivEq(t,(Float(d) / Float((int)2)))) < (int)1))){
		HX_STACK_LINE(90)
		return (((((((Float(c) / Float((int)2)) * t) * t) * t) * t) * t) + b);
	}
	HX_STACK_LINE(93)
	return (((Float(c) / Float((int)2)) * (((((((hx::SubEq(t,(int)2)) * t) * t) * t) * t) + (int)2))) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(QuintEaseInOut_obj,ease,return )

Float QuintEaseInOut_obj::calculate( Float k){
	HX_STACK_PUSH("QuintEaseInOut::calculate","motion/easing/Quint.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(82)
	if ((((hx::MultEq(k,(int)2)) < (int)1))){
		HX_STACK_LINE(82)
		return (((((0.5 * k) * k) * k) * k) * k);
	}
	HX_STACK_LINE(83)
	return (0.5 * (((((((hx::SubEq(k,(int)2)) * k) * k) * k) * k) + (int)2)));
}


HX_DEFINE_DYNAMIC_FUNC1(QuintEaseInOut_obj,calculate,return )


QuintEaseInOut_obj::QuintEaseInOut_obj()
{
}

void QuintEaseInOut_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuintEaseInOut);
	HX_MARK_END_CLASS();
}

void QuintEaseInOut_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic QuintEaseInOut_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic QuintEaseInOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void QuintEaseInOut_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(QuintEaseInOut_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuintEaseInOut_obj::__mClass,"__mClass");
};

Class QuintEaseInOut_obj::__mClass;

void QuintEaseInOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.QuintEaseInOut"), hx::TCanCast< QuintEaseInOut_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void QuintEaseInOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
