#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_fonts_TextAlign
#include <com/stencyl/graphics/fonts/TextAlign.h>
#endif
namespace com{
namespace stencyl{
namespace graphics{
namespace fonts{

Void TextAlign_obj::__construct()
{
	return null();
}

TextAlign_obj::~TextAlign_obj() { }

Dynamic TextAlign_obj::__CreateEmpty() { return  new TextAlign_obj; }
hx::ObjectPtr< TextAlign_obj > TextAlign_obj::__new()
{  hx::ObjectPtr< TextAlign_obj > result = new TextAlign_obj();
	result->__construct();
	return result;}

Dynamic TextAlign_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextAlign_obj > result = new TextAlign_obj();
	result->__construct();
	return result;}

int TextAlign_obj::LEFT;

int TextAlign_obj::RIGHT;

int TextAlign_obj::CENTER;


TextAlign_obj::TextAlign_obj()
{
}

void TextAlign_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextAlign);
	HX_MARK_END_CLASS();
}

void TextAlign_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic TextAlign_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic TextAlign_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TextAlign_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("CENTER"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextAlign_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextAlign_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(TextAlign_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(TextAlign_obj::CENTER,"CENTER");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextAlign_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(TextAlign_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(TextAlign_obj::CENTER,"CENTER");
};

Class TextAlign_obj::__mClass;

void TextAlign_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.fonts.TextAlign"), hx::TCanCast< TextAlign_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TextAlign_obj::__boot()
{
	LEFT= (int)1;
	RIGHT= (int)2;
	CENTER= (int)3;
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace fonts
