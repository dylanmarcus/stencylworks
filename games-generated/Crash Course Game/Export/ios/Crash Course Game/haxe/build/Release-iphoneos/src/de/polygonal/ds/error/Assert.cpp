#include <hxcpp.h>

#ifndef INCLUDED_de_polygonal_ds_error_Assert
#include <de/polygonal/ds/error/Assert.h>
#endif
namespace de{
namespace polygonal{
namespace ds{
namespace error{

Void Assert_obj::__construct()
{
	return null();
}

Assert_obj::~Assert_obj() { }

Dynamic Assert_obj::__CreateEmpty() { return  new Assert_obj; }
hx::ObjectPtr< Assert_obj > Assert_obj::__new()
{  hx::ObjectPtr< Assert_obj > result = new Assert_obj();
	result->__construct();
	return result;}

Dynamic Assert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assert_obj > result = new Assert_obj();
	result->__construct();
	return result;}


Assert_obj::Assert_obj()
{
}

void Assert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assert);
	HX_MARK_END_CLASS();
}

void Assert_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Assert_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Assert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Assert_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assert_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assert_obj::__mClass,"__mClass");
};

Class Assert_obj::__mClass;

void Assert_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.error.Assert"), hx::TCanCast< Assert_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Assert_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
} // end namespace error
