#include <hxcpp.h>

#ifndef INCLUDED_com_nmefermmmtools_debug_Colors
#include <com/nmefermmmtools/debug/Colors.h>
#endif
namespace com{
namespace nmefermmmtools{
namespace debug{

Void Colors_obj::__construct()
{
	return null();
}

Colors_obj::~Colors_obj() { }

Dynamic Colors_obj::__CreateEmpty() { return  new Colors_obj; }
hx::ObjectPtr< Colors_obj > Colors_obj::__new()
{  hx::ObjectPtr< Colors_obj > result = new Colors_obj();
	result->__construct();
	return result;}

Dynamic Colors_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Colors_obj > result = new Colors_obj();
	result->__construct();
	return result;}

int Colors_obj::bg;

int Colors_obj::fps;

int Colors_obj::ms;

int Colors_obj::mem;

int Colors_obj::memmax;

::String Colors_obj::bgCSS;

::String Colors_obj::msCSS;

::String Colors_obj::fpsCSS;

::String Colors_obj::memCSS;

::String Colors_obj::memmaxCSS;


Colors_obj::Colors_obj()
{
}

void Colors_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Colors);
	HX_MARK_END_CLASS();
}

void Colors_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Colors_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Colors_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Colors_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("bg"),
	HX_CSTRING("fps"),
	HX_CSTRING("ms"),
	HX_CSTRING("mem"),
	HX_CSTRING("memmax"),
	HX_CSTRING("bgCSS"),
	HX_CSTRING("msCSS"),
	HX_CSTRING("fpsCSS"),
	HX_CSTRING("memCSS"),
	HX_CSTRING("memmaxCSS"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Colors_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Colors_obj::bg,"bg");
	HX_MARK_MEMBER_NAME(Colors_obj::fps,"fps");
	HX_MARK_MEMBER_NAME(Colors_obj::ms,"ms");
	HX_MARK_MEMBER_NAME(Colors_obj::mem,"mem");
	HX_MARK_MEMBER_NAME(Colors_obj::memmax,"memmax");
	HX_MARK_MEMBER_NAME(Colors_obj::bgCSS,"bgCSS");
	HX_MARK_MEMBER_NAME(Colors_obj::msCSS,"msCSS");
	HX_MARK_MEMBER_NAME(Colors_obj::fpsCSS,"fpsCSS");
	HX_MARK_MEMBER_NAME(Colors_obj::memCSS,"memCSS");
	HX_MARK_MEMBER_NAME(Colors_obj::memmaxCSS,"memmaxCSS");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Colors_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Colors_obj::bg,"bg");
	HX_VISIT_MEMBER_NAME(Colors_obj::fps,"fps");
	HX_VISIT_MEMBER_NAME(Colors_obj::ms,"ms");
	HX_VISIT_MEMBER_NAME(Colors_obj::mem,"mem");
	HX_VISIT_MEMBER_NAME(Colors_obj::memmax,"memmax");
	HX_VISIT_MEMBER_NAME(Colors_obj::bgCSS,"bgCSS");
	HX_VISIT_MEMBER_NAME(Colors_obj::msCSS,"msCSS");
	HX_VISIT_MEMBER_NAME(Colors_obj::fpsCSS,"fpsCSS");
	HX_VISIT_MEMBER_NAME(Colors_obj::memCSS,"memCSS");
	HX_VISIT_MEMBER_NAME(Colors_obj::memmaxCSS,"memmaxCSS");
};

Class Colors_obj::__mClass;

void Colors_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.nmefermmmtools.debug.Colors"), hx::TCanCast< Colors_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Colors_obj::__boot()
{
	bg= (int)51;
	fps= (int)16776960;
	ms= (int)65280;
	mem= (int)65535;
	memmax= (int)16711792;
	bgCSS= HX_CSTRING("#000033");
	msCSS= HX_CSTRING("#00ff00");
	fpsCSS= HX_CSTRING("#ffff00");
	memCSS= HX_CSTRING("#00ffff");
	memmaxCSS= HX_CSTRING("#ff0070");
}

} // end namespace com
} // end namespace nmefermmmtools
} // end namespace debug
