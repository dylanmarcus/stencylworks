#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_Cubic
#include <motion/easing/Cubic.h>
#endif
#ifndef INCLUDED_motion_easing_CubicEaseIn
#include <motion/easing/CubicEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_CubicEaseInOut
#include <motion/easing/CubicEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_CubicEaseOut
#include <motion/easing/CubicEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void Cubic_obj::__construct()
{
	return null();
}

Cubic_obj::~Cubic_obj() { }

Dynamic Cubic_obj::__CreateEmpty() { return  new Cubic_obj; }
hx::ObjectPtr< Cubic_obj > Cubic_obj::__new()
{  hx::ObjectPtr< Cubic_obj > result = new Cubic_obj();
	result->__construct();
	return result;}

Dynamic Cubic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cubic_obj > result = new Cubic_obj();
	result->__construct();
	return result;}

::motion::easing::IEasing Cubic_obj::get_easeIn( ){
	HX_STACK_PUSH("Cubic::get_easeIn","motion/easing/Cubic.hx",19);
	HX_STACK_LINE(19)
	return ::motion::easing::CubicEaseIn_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cubic_obj,get_easeIn,return )

::motion::easing::IEasing Cubic_obj::get_easeInOut( ){
	HX_STACK_PUSH("Cubic::get_easeInOut","motion/easing/Cubic.hx",26);
	HX_STACK_LINE(26)
	return ::motion::easing::CubicEaseInOut_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cubic_obj,get_easeInOut,return )

::motion::easing::IEasing Cubic_obj::get_easeOut( ){
	HX_STACK_PUSH("Cubic::get_easeOut","motion/easing/Cubic.hx",33);
	HX_STACK_LINE(33)
	return ::motion::easing::CubicEaseOut_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cubic_obj,get_easeOut,return )


Cubic_obj::Cubic_obj()
{
}

void Cubic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Cubic);
	HX_MARK_END_CLASS();
}

void Cubic_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Cubic_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic Cubic_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Cubic_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Cubic_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cubic_obj::__mClass,"__mClass");
};

Class Cubic_obj::__mClass;

void Cubic_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.Cubic"), hx::TCanCast< Cubic_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Cubic_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
