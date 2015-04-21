#include <hxcpp.h>

#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_openfl_ui_Accelerometer
#include <openfl/ui/Accelerometer.h>
#endif
namespace openfl{
namespace ui{

Void Accelerometer_obj::__construct()
{
	return null();
}

Accelerometer_obj::~Accelerometer_obj() { }

Dynamic Accelerometer_obj::__CreateEmpty() { return  new Accelerometer_obj; }
hx::ObjectPtr< Accelerometer_obj > Accelerometer_obj::__new()
{  hx::ObjectPtr< Accelerometer_obj > result = new Accelerometer_obj();
	result->__construct();
	return result;}

Dynamic Accelerometer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Accelerometer_obj > result = new Accelerometer_obj();
	result->__construct();
	return result;}

Dynamic Accelerometer_obj::get( ){
	HX_STACK_PUSH("Accelerometer::get","openfl/ui/Accelerometer.hx",10);
	HX_STACK_LINE(10)
	return ::openfl::ui::Accelerometer_obj::nme_input_get_acceleration();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,get,return )

Dynamic Accelerometer_obj::nme_input_get_acceleration;


Accelerometer_obj::Accelerometer_obj()
{
}

void Accelerometer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Accelerometer);
	HX_MARK_END_CLASS();
}

void Accelerometer_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Accelerometer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_input_get_acceleration") ) { return nme_input_get_acceleration; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Accelerometer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"nme_input_get_acceleration") ) { nme_input_get_acceleration=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Accelerometer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get"),
	HX_CSTRING("nme_input_get_acceleration"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Accelerometer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::nme_input_get_acceleration,"nme_input_get_acceleration");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::nme_input_get_acceleration,"nme_input_get_acceleration");
};

Class Accelerometer_obj::__mClass;

void Accelerometer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.ui.Accelerometer"), hx::TCanCast< Accelerometer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Accelerometer_obj::__boot()
{
	nme_input_get_acceleration= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_input_get_acceleration"),(int)0);
}

} // end namespace openfl
} // end namespace ui
