#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuadEaseIn
#include <motion/easing/QuadEaseIn.h>
#endif
namespace motion{
namespace easing{

Void QuadEaseIn_obj::__construct()
{
HX_STACK_PUSH("QuadEaseIn::new","motion/easing/Quad.hx",46);
{
}
;
	return null();
}

QuadEaseIn_obj::~QuadEaseIn_obj() { }

Dynamic QuadEaseIn_obj::__CreateEmpty() { return  new QuadEaseIn_obj; }
hx::ObjectPtr< QuadEaseIn_obj > QuadEaseIn_obj::__new()
{  hx::ObjectPtr< QuadEaseIn_obj > result = new QuadEaseIn_obj();
	result->__construct();
	return result;}

Dynamic QuadEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadEaseIn_obj > result = new QuadEaseIn_obj();
	result->__construct();
	return result;}

hx::Object *QuadEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float QuadEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_PUSH("QuadEaseIn::ease","motion/easing/Quad.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(60)
	return (((c * (hx::DivEq(t,d))) * t) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(QuadEaseIn_obj,ease,return )

Float QuadEaseIn_obj::calculate( Float k){
	HX_STACK_PUSH("QuadEaseIn::calculate","motion/easing/Quad.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(53)
	return (k * k);
}


HX_DEFINE_DYNAMIC_FUNC1(QuadEaseIn_obj,calculate,return )


QuadEaseIn_obj::QuadEaseIn_obj()
{
}

void QuadEaseIn_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuadEaseIn);
	HX_MARK_END_CLASS();
}

void QuadEaseIn_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic QuadEaseIn_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic QuadEaseIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadEaseIn_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(QuadEaseIn_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadEaseIn_obj::__mClass,"__mClass");
};

Class QuadEaseIn_obj::__mClass;

void QuadEaseIn_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.QuadEaseIn"), hx::TCanCast< QuadEaseIn_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void QuadEaseIn_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
