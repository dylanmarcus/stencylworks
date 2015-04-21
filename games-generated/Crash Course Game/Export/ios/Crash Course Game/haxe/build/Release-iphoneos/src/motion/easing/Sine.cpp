#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Sine
#include <motion/easing/Sine.h>
#endif
#ifndef INCLUDED_motion_easing_SineEaseIn
#include <motion/easing/SineEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_SineEaseInOut
#include <motion/easing/SineEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_SineEaseOut
#include <motion/easing/SineEaseOut.h>
#endif
namespace motion{
namespace easing{

Void Sine_obj::__construct()
{
	return null();
}

Sine_obj::~Sine_obj() { }

Dynamic Sine_obj::__CreateEmpty() { return  new Sine_obj; }
hx::ObjectPtr< Sine_obj > Sine_obj::__new()
{  hx::ObjectPtr< Sine_obj > result = new Sine_obj();
	result->__construct();
	return result;}

Dynamic Sine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sine_obj > result = new Sine_obj();
	result->__construct();
	return result;}

::motion::easing::IEasing Sine_obj::get_easeIn( ){
	HX_STACK_PUSH("Sine::get_easeIn","motion/easing/Sine.hx",18);
	HX_STACK_LINE(18)
	return ::motion::easing::SineEaseIn_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sine_obj,get_easeIn,return )

::motion::easing::IEasing Sine_obj::get_easeInOut( ){
	HX_STACK_PUSH("Sine::get_easeInOut","motion/easing/Sine.hx",25);
	HX_STACK_LINE(25)
	return ::motion::easing::SineEaseInOut_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sine_obj,get_easeInOut,return )

::motion::easing::IEasing Sine_obj::get_easeOut( ){
	HX_STACK_PUSH("Sine::get_easeOut","motion/easing/Sine.hx",32);
	HX_STACK_LINE(32)
	return ::motion::easing::SineEaseOut_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sine_obj,get_easeOut,return )


Sine_obj::Sine_obj()
{
}

void Sine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sine);
	HX_MARK_END_CLASS();
}

void Sine_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Sine_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { return get_easeIn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { return get_easeOut(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { return get_easeInOut(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_easeIn") ) { return get_easeIn_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_easeOut") ) { return get_easeOut_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_easeInOut") ) { return get_easeInOut_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sine_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Sine_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_easeIn"),
	HX_CSTRING("get_easeInOut"),
	HX_CSTRING("get_easeOut"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sine_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sine_obj::__mClass,"__mClass");
};

Class Sine_obj::__mClass;

void Sine_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.Sine"), hx::TCanCast< Sine_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Sine_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
