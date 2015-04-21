#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Quint
#include <motion/easing/Quint.h>
#endif
#ifndef INCLUDED_motion_easing_QuintEaseIn
#include <motion/easing/QuintEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_QuintEaseInOut
#include <motion/easing/QuintEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_QuintEaseOut
#include <motion/easing/QuintEaseOut.h>
#endif
namespace motion{
namespace easing{

Void Quint_obj::__construct()
{
	return null();
}

Quint_obj::~Quint_obj() { }

Dynamic Quint_obj::__CreateEmpty() { return  new Quint_obj; }
hx::ObjectPtr< Quint_obj > Quint_obj::__new()
{  hx::ObjectPtr< Quint_obj > result = new Quint_obj();
	result->__construct();
	return result;}

Dynamic Quint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Quint_obj > result = new Quint_obj();
	result->__construct();
	return result;}

::motion::easing::IEasing Quint_obj::get_easeIn( ){
	HX_STACK_PUSH("Quint::get_easeIn","motion/easing/Quint.hx",19);
	HX_STACK_LINE(19)
	return ::motion::easing::QuintEaseIn_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quint_obj,get_easeIn,return )

::motion::easing::IEasing Quint_obj::get_easeInOut( ){
	HX_STACK_PUSH("Quint::get_easeInOut","motion/easing/Quint.hx",26);
	HX_STACK_LINE(26)
	return ::motion::easing::QuintEaseInOut_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quint_obj,get_easeInOut,return )

::motion::easing::IEasing Quint_obj::get_easeOut( ){
	HX_STACK_PUSH("Quint::get_easeOut","motion/easing/Quint.hx",33);
	HX_STACK_LINE(33)
	return ::motion::easing::QuintEaseOut_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quint_obj,get_easeOut,return )


Quint_obj::Quint_obj()
{
}

void Quint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Quint);
	HX_MARK_END_CLASS();
}

void Quint_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Quint_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic Quint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Quint_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Quint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quint_obj::__mClass,"__mClass");
};

Class Quint_obj::__mClass;

void Quint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.Quint"), hx::TCanCast< Quint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Quint_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
