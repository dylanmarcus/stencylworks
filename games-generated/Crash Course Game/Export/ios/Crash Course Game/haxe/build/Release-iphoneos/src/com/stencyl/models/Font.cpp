#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_stencyl_Data
#include <com/stencyl/Data.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_fonts_BitmapFont
#include <com/stencyl/graphics/fonts/BitmapFont.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Font
#include <com/stencyl/models/Font.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace stencyl{
namespace models{

Void Font_obj::__construct(int ID,int atlasID,::String name,bool isDefault)
{
HX_STACK_PUSH("Font::new","com/stencyl/models/Font.hx",19);
{
	HX_STACK_LINE(20)
	super::__construct(ID,name,atlasID);
	HX_STACK_LINE(22)
	this->isDefault = isDefault;
	HX_STACK_LINE(23)
	this->loadGraphics();
}
;
	return null();
}

Font_obj::~Font_obj() { }

Dynamic Font_obj::__CreateEmpty() { return  new Font_obj; }
hx::ObjectPtr< Font_obj > Font_obj::__new(int ID,int atlasID,::String name,bool isDefault)
{  hx::ObjectPtr< Font_obj > result = new Font_obj();
	result->__construct(ID,atlasID,name,isDefault);
	return result;}

Dynamic Font_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Font_obj > result = new Font_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Font_obj::unloadGraphics( ){
{
		HX_STACK_PUSH("Font::unloadGraphics","com/stencyl/models/Font.hx",67);
		HX_STACK_THIS(this);
		HX_STACK_LINE(69)
		this->font = ::com::stencyl::models::Font_obj::defaultFont;
		HX_STACK_LINE(70)
		this->fontScale = (int)1;
		HX_STACK_LINE(72)
		::com::stencyl::Data_obj::get()->resourceAssets->remove((this->ID + HX_CSTRING(".png")));
	}
return null();
}


Void Font_obj::loadGraphics( ){
{
		HX_STACK_PUSH("Font::loadGraphics","com/stencyl/models/Font.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_LINE(42)
		if ((this->isDefault)){
			HX_STACK_LINE(45)
			::String textBytes = ::openfl::Assets_obj::getText(HX_CSTRING("assets/graphics/default-font.fnt"));		HX_STACK_VAR(textBytes,"textBytes");
			HX_STACK_LINE(46)
			::Xml xml = ::Xml_obj::parse(textBytes);		HX_STACK_VAR(xml,"xml");
			HX_STACK_LINE(47)
			::com::stencyl::models::Font_obj::defaultFont = this->font = ::com::stencyl::graphics::fonts::BitmapFont_obj::__new()->loadAngelCode(::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/graphics/default-font.png"),null()),xml);
			HX_STACK_LINE(48)
			this->fontScale = ::com::stencyl::Engine_obj::SCALE;
		}
		else{
			HX_STACK_LINE(53)
			Dynamic textBytes = ::com::stencyl::Data_obj::get()->resourceAssets->get((this->ID + HX_CSTRING(".fnt")));		HX_STACK_VAR(textBytes,"textBytes");
			HX_STACK_LINE(54)
			::Xml xml = ::Xml_obj::parse(textBytes);		HX_STACK_VAR(xml,"xml");
			HX_STACK_LINE(55)
			::flash::display::BitmapData img = ::com::stencyl::Data_obj::get()->getGraphicAsset((this->ID + HX_CSTRING(".png")),((((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/font-")) + this->ID) + HX_CSTRING(".png")));		HX_STACK_VAR(img,"img");
			HX_STACK_LINE(61)
			this->font = ::com::stencyl::graphics::fonts::BitmapFont_obj::__new()->loadAngelCode(img,xml);
			HX_STACK_LINE(62)
			this->fontScale = (int)1;
		}
	}
return null();
}


int Font_obj::getHeight( ){
	HX_STACK_PUSH("Font::getHeight","com/stencyl/models/Font.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	if (((this->font != null()))){
		HX_STACK_LINE(29)
		return this->font->getFontHeight();
	}
	else{
		HX_STACK_LINE(34)
		return (int)0;
	}
	HX_STACK_LINE(27)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,getHeight,return )

::com::stencyl::graphics::fonts::BitmapFont Font_obj::defaultFont;


Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(isDefault,"isDefault");
	HX_MARK_MEMBER_NAME(fontScale,"fontScale");
	HX_MARK_MEMBER_NAME(font,"font");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isDefault,"isDefault");
	HX_VISIT_MEMBER_NAME(fontScale,"fontScale");
	HX_VISIT_MEMBER_NAME(font,"font");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Font_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"isDefault") ) { return isDefault; }
		if (HX_FIELD_EQ(inName,"fontScale") ) { return fontScale; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultFont") ) { return defaultFont; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return loadGraphics_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unloadGraphics") ) { return unloadGraphics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Font_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::com::stencyl::graphics::fonts::BitmapFont >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isDefault") ) { isDefault=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontScale") ) { fontScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultFont") ) { defaultFont=inValue.Cast< ::com::stencyl::graphics::fonts::BitmapFont >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("isDefault"));
	outFields->push(HX_CSTRING("fontScale"));
	outFields->push(HX_CSTRING("font"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("defaultFont"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("unloadGraphics"),
	HX_CSTRING("loadGraphics"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("isDefault"),
	HX_CSTRING("fontScale"),
	HX_CSTRING("font"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Font_obj::defaultFont,"defaultFont");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Font_obj::defaultFont,"defaultFont");
};

Class Font_obj::__mClass;

void Font_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.Font"), hx::TCanCast< Font_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Font_obj::__boot()
{
	defaultFont= null();
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
