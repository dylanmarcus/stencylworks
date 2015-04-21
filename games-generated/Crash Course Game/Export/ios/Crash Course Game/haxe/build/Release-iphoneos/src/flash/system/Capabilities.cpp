#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_system_Capabilities
#include <flash/system/Capabilities.h>
#endif
namespace flash{
namespace system{

Void Capabilities_obj::__construct()
{
	return null();
}

Capabilities_obj::~Capabilities_obj() { }

Dynamic Capabilities_obj::__CreateEmpty() { return  new Capabilities_obj; }
hx::ObjectPtr< Capabilities_obj > Capabilities_obj::__new()
{  hx::ObjectPtr< Capabilities_obj > result = new Capabilities_obj();
	result->__construct();
	return result;}

Dynamic Capabilities_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Capabilities_obj > result = new Capabilities_obj();
	result->__construct();
	return result;}

::String Capabilities_obj::language;

Float Capabilities_obj::pixelAspectRatio;

Float Capabilities_obj::screenDPI;

Array< ::Dynamic > Capabilities_obj::screenResolutions;

Float Capabilities_obj::screenResolutionX;

Float Capabilities_obj::screenResolutionY;

::String Capabilities_obj::get_language( ){
	HX_STACK_PUSH("Capabilities::get_language","flash/system/Capabilities.hx",25);
	HX_STACK_LINE(27)
	::String locale = ::flash::system::Capabilities_obj::nme_capabilities_get_language();		HX_STACK_VAR(locale,"locale");
	HX_STACK_LINE(29)
	if (((bool((bool((bool((locale == null())) || bool((locale == HX_CSTRING(""))))) || bool((locale == HX_CSTRING("C"))))) || bool((locale == HX_CSTRING("POSIX")))))){
		HX_STACK_LINE(29)
		return HX_CSTRING("en-US");
	}
	else{
		HX_STACK_LINE(35)
		::String formattedLocale = HX_CSTRING("");		HX_STACK_VAR(formattedLocale,"formattedLocale");
		HX_STACK_LINE(36)
		int length = locale.length;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(38)
		if (((length > (int)5))){
			HX_STACK_LINE(38)
			length = (int)5;
		}
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(44)
			while(((_g < length))){
				HX_STACK_LINE(44)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(46)
				::String _char = locale.charAt(i);		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(48)
				if (((i < (int)2))){
					HX_STACK_LINE(48)
					hx::AddEq(formattedLocale,_char.toLowerCase());
				}
				else{
					HX_STACK_LINE(52)
					if (((i == (int)2))){
						HX_STACK_LINE(52)
						hx::AddEq(formattedLocale,HX_CSTRING("-"));
					}
					else{
						HX_STACK_LINE(56)
						hx::AddEq(formattedLocale,_char.toUpperCase());
					}
				}
			}
		}
		HX_STACK_LINE(64)
		return formattedLocale;
	}
	HX_STACK_LINE(29)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_language,return )

Float Capabilities_obj::get_pixelAspectRatio( ){
	HX_STACK_PUSH("Capabilities::get_pixelAspectRatio","flash/system/Capabilities.hx",71);
	HX_STACK_LINE(71)
	return ::flash::system::Capabilities_obj::nme_capabilities_get_pixel_aspect_ratio();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_pixelAspectRatio,return )

Float Capabilities_obj::get_screenDPI( ){
	HX_STACK_PUSH("Capabilities::get_screenDPI","flash/system/Capabilities.hx",72);
	HX_STACK_LINE(72)
	return ::flash::system::Capabilities_obj::nme_capabilities_get_screen_dpi();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenDPI,return )

Array< ::Dynamic > Capabilities_obj::get_screenResolutions( ){
	HX_STACK_PUSH("Capabilities::get_screenResolutions","flash/system/Capabilities.hx",75);
	HX_STACK_LINE(77)
	Array< int > res = ::flash::system::Capabilities_obj::nme_capabilities_get_screen_resolutions();		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(79)
	if (((res == null()))){
		HX_STACK_LINE(79)
		return Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(85)
	Array< ::Dynamic > out = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(out,"out");
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::Std_obj::_int((Float(res->length) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(87)
		while(((_g1 < _g))){
			HX_STACK_LINE(87)
			int c = (_g1)++;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(89)
			out->push(Array_obj< int >::__new().Add(res->__get((c * (int)2))).Add(res->__get(((c * (int)2) + (int)1))));
		}
	}
	HX_STACK_LINE(93)
	return out;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenResolutions,return )

Float Capabilities_obj::get_screenResolutionX( ){
	HX_STACK_PUSH("Capabilities::get_screenResolutionX","flash/system/Capabilities.hx",98);
	HX_STACK_LINE(98)
	return ::flash::system::Capabilities_obj::nme_capabilities_get_screen_resolution_x();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenResolutionX,return )

Float Capabilities_obj::get_screenResolutionY( ){
	HX_STACK_PUSH("Capabilities::get_screenResolutionY","flash/system/Capabilities.hx",99);
	HX_STACK_LINE(99)
	return ::flash::system::Capabilities_obj::nme_capabilities_get_screen_resolution_y();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenResolutionY,return )

Dynamic Capabilities_obj::nme_capabilities_get_pixel_aspect_ratio;

Dynamic Capabilities_obj::nme_capabilities_get_screen_dpi;

Dynamic Capabilities_obj::nme_capabilities_get_screen_resolution_x;

Dynamic Capabilities_obj::nme_capabilities_get_screen_resolution_y;

Dynamic Capabilities_obj::nme_capabilities_get_screen_resolutions;

Dynamic Capabilities_obj::nme_capabilities_get_language;


Capabilities_obj::Capabilities_obj()
{
}

void Capabilities_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Capabilities);
	HX_MARK_END_CLASS();
}

void Capabilities_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Capabilities_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { return inCallProp ? get_language() : language; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"screenDPI") ) { return inCallProp ? get_screenDPI() : screenDPI; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_language") ) { return get_language_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_screenDPI") ) { return get_screenDPI_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pixelAspectRatio") ) { return inCallProp ? get_pixelAspectRatio() : pixelAspectRatio; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"screenResolutions") ) { return inCallProp ? get_screenResolutions() : screenResolutions; }
		if (HX_FIELD_EQ(inName,"screenResolutionX") ) { return inCallProp ? get_screenResolutionX() : screenResolutionX; }
		if (HX_FIELD_EQ(inName,"screenResolutionY") ) { return inCallProp ? get_screenResolutionY() : screenResolutionY; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_pixelAspectRatio") ) { return get_pixelAspectRatio_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_screenResolutions") ) { return get_screenResolutions_dyn(); }
		if (HX_FIELD_EQ(inName,"get_screenResolutionX") ) { return get_screenResolutionX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_screenResolutionY") ) { return get_screenResolutionY_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_language") ) { return nme_capabilities_get_language; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_screen_dpi") ) { return nme_capabilities_get_screen_dpi; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_pixel_aspect_ratio") ) { return nme_capabilities_get_pixel_aspect_ratio; }
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_screen_resolutions") ) { return nme_capabilities_get_screen_resolutions; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_screen_resolution_x") ) { return nme_capabilities_get_screen_resolution_x; }
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_screen_resolution_y") ) { return nme_capabilities_get_screen_resolution_y; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Capabilities_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { language=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"screenDPI") ) { screenDPI=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pixelAspectRatio") ) { pixelAspectRatio=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"screenResolutions") ) { screenResolutions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenResolutionX") ) { screenResolutionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenResolutionY") ) { screenResolutionY=inValue.Cast< Float >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_language") ) { nme_capabilities_get_language=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_screen_dpi") ) { nme_capabilities_get_screen_dpi=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_pixel_aspect_ratio") ) { nme_capabilities_get_pixel_aspect_ratio=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_screen_resolutions") ) { nme_capabilities_get_screen_resolutions=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_screen_resolution_x") ) { nme_capabilities_get_screen_resolution_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_capabilities_get_screen_resolution_y") ) { nme_capabilities_get_screen_resolution_y=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Capabilities_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("language"),
	HX_CSTRING("pixelAspectRatio"),
	HX_CSTRING("screenDPI"),
	HX_CSTRING("screenResolutions"),
	HX_CSTRING("screenResolutionX"),
	HX_CSTRING("screenResolutionY"),
	HX_CSTRING("get_language"),
	HX_CSTRING("get_pixelAspectRatio"),
	HX_CSTRING("get_screenDPI"),
	HX_CSTRING("get_screenResolutions"),
	HX_CSTRING("get_screenResolutionX"),
	HX_CSTRING("get_screenResolutionY"),
	HX_CSTRING("nme_capabilities_get_pixel_aspect_ratio"),
	HX_CSTRING("nme_capabilities_get_screen_dpi"),
	HX_CSTRING("nme_capabilities_get_screen_resolution_x"),
	HX_CSTRING("nme_capabilities_get_screen_resolution_y"),
	HX_CSTRING("nme_capabilities_get_screen_resolutions"),
	HX_CSTRING("nme_capabilities_get_language"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Capabilities_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Capabilities_obj::language,"language");
	HX_MARK_MEMBER_NAME(Capabilities_obj::pixelAspectRatio,"pixelAspectRatio");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenDPI,"screenDPI");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenResolutions,"screenResolutions");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenResolutionX,"screenResolutionX");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenResolutionY,"screenResolutionY");
	HX_MARK_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_pixel_aspect_ratio,"nme_capabilities_get_pixel_aspect_ratio");
	HX_MARK_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_screen_dpi,"nme_capabilities_get_screen_dpi");
	HX_MARK_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_screen_resolution_x,"nme_capabilities_get_screen_resolution_x");
	HX_MARK_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_screen_resolution_y,"nme_capabilities_get_screen_resolution_y");
	HX_MARK_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_screen_resolutions,"nme_capabilities_get_screen_resolutions");
	HX_MARK_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_language,"nme_capabilities_get_language");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Capabilities_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::language,"language");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::pixelAspectRatio,"pixelAspectRatio");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::screenDPI,"screenDPI");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::screenResolutions,"screenResolutions");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::screenResolutionX,"screenResolutionX");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::screenResolutionY,"screenResolutionY");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_pixel_aspect_ratio,"nme_capabilities_get_pixel_aspect_ratio");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_screen_dpi,"nme_capabilities_get_screen_dpi");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_screen_resolution_x,"nme_capabilities_get_screen_resolution_x");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_screen_resolution_y,"nme_capabilities_get_screen_resolution_y");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_screen_resolutions,"nme_capabilities_get_screen_resolutions");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::nme_capabilities_get_language,"nme_capabilities_get_language");
};

Class Capabilities_obj::__mClass;

void Capabilities_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.system.Capabilities"), hx::TCanCast< Capabilities_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Capabilities_obj::__boot()
{
	nme_capabilities_get_pixel_aspect_ratio= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_capabilities_get_pixel_aspect_ratio"),(int)0);
	nme_capabilities_get_screen_dpi= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_capabilities_get_screen_dpi"),(int)0);
	nme_capabilities_get_screen_resolution_x= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_capabilities_get_screen_resolution_x"),(int)0);
	nme_capabilities_get_screen_resolution_y= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_capabilities_get_screen_resolution_y"),(int)0);
	nme_capabilities_get_screen_resolutions= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_capabilities_get_screen_resolutions"),(int)0);
	nme_capabilities_get_language= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_capabilities_get_language"),(int)0);
}

} // end namespace flash
} // end namespace system
