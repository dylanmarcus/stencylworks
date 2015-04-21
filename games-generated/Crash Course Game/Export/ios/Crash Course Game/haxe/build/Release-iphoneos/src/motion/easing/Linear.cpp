#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_motion_easing_LinearEaseNone
#include <motion/easing/LinearEaseNone.h>
#endif
namespace motion{
namespace easing{

Void Linear_obj::__construct()
{
	return null();
}

Linear_obj::~Linear_obj() { }

Dynamic Linear_obj::__CreateEmpty() { return  new Linear_obj; }
hx::ObjectPtr< Linear_obj > Linear_obj::__new()
{  hx::ObjectPtr< Linear_obj > result = new Linear_obj();
	result->__construct();
	return result;}

Dynamic Linear_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Linear_obj > result = new Linear_obj();
	result->__construct();
	return result;}

::motion::easing::IEasing Linear_obj::get_easeNone( ){
	HX_STACK_PUSH("Linear::get_easeNone","motion/easing/Linear.hx",17);
	HX_STACK_LINE(17)
	return ::motion::easing::LinearEaseNone_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Linear_obj,get_easeNone,return )


Linear_obj::Linear_obj()
{
}

void Linear_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Linear);
	HX_MARK_END_CLASS();
}

void Linear_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Linear_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"easeNone") ) { return get_easeNone(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_easeNone") ) { return get_easeNone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Linear_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Linear_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_easeNone"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Linear_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Linear_obj::__mClass,"__mClass");
};

Class Linear_obj::__mClass;

void Linear_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.Linear"), hx::TCanCast< Linear_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Linear_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
