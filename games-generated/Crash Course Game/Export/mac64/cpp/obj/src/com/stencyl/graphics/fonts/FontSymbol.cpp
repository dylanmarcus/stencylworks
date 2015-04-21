#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_fonts_FontSymbol
#include <com/stencyl/graphics/fonts/FontSymbol.h>
#endif
namespace com{
namespace stencyl{
namespace graphics{
namespace fonts{

Void FontSymbol_obj::__construct()
{
HX_STACK_PUSH("FontSymbol::new","com/stencyl/graphics/fonts/FontSymbol.hx",28);
{
}
;
	return null();
}

FontSymbol_obj::~FontSymbol_obj() { }

Dynamic FontSymbol_obj::__CreateEmpty() { return  new FontSymbol_obj; }
hx::ObjectPtr< FontSymbol_obj > FontSymbol_obj::__new()
{  hx::ObjectPtr< FontSymbol_obj > result = new FontSymbol_obj();
	result->__construct();
	return result;}

Dynamic FontSymbol_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FontSymbol_obj > result = new FontSymbol_obj();
	result->__construct();
	return result;}


FontSymbol_obj::FontSymbol_obj()
{
}

void FontSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FontSymbol);
	HX_MARK_MEMBER_NAME(tileID,"tileID");
	HX_MARK_MEMBER_NAME(xadvance,"xadvance");
	HX_MARK_MEMBER_NAME(yoffset,"yoffset");
	HX_MARK_MEMBER_NAME(xoffset,"xoffset");
	HX_MARK_END_CLASS();
}

void FontSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileID,"tileID");
	HX_VISIT_MEMBER_NAME(xadvance,"xadvance");
	HX_VISIT_MEMBER_NAME(yoffset,"yoffset");
	HX_VISIT_MEMBER_NAME(xoffset,"xoffset");
}

Dynamic FontSymbol_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { return tileID; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"yoffset") ) { return yoffset; }
		if (HX_FIELD_EQ(inName,"xoffset") ) { return xoffset; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { return xadvance; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FontSymbol_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { tileID=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"yoffset") ) { yoffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xoffset") ) { xoffset=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { xadvance=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FontSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tileID"));
	outFields->push(HX_CSTRING("xadvance"));
	outFields->push(HX_CSTRING("yoffset"));
	outFields->push(HX_CSTRING("xoffset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("tileID"),
	HX_CSTRING("xadvance"),
	HX_CSTRING("yoffset"),
	HX_CSTRING("xoffset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontSymbol_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontSymbol_obj::__mClass,"__mClass");
};

Class FontSymbol_obj::__mClass;

void FontSymbol_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.fonts.FontSymbol"), hx::TCanCast< FontSymbol_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FontSymbol_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace fonts
