#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_fonts_BitmapFont
#include <com/stencyl/graphics/fonts/BitmapFont.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_fonts_DefaultFontGenerator
#include <com/stencyl/graphics/fonts/DefaultFontGenerator.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
namespace com{
namespace stencyl{
namespace graphics{
namespace fonts{

Void DefaultFontGenerator_obj::__construct()
{
	return null();
}

DefaultFontGenerator_obj::~DefaultFontGenerator_obj() { }

Dynamic DefaultFontGenerator_obj::__CreateEmpty() { return  new DefaultFontGenerator_obj; }
hx::ObjectPtr< DefaultFontGenerator_obj > DefaultFontGenerator_obj::__new()
{  hx::ObjectPtr< DefaultFontGenerator_obj > result = new DefaultFontGenerator_obj();
	result->__construct();
	return result;}

Dynamic DefaultFontGenerator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultFontGenerator_obj > result = new DefaultFontGenerator_obj();
	result->__construct();
	return result;}

::String DefaultFontGenerator_obj::fontData;

Void DefaultFontGenerator_obj::generateAndStoreDefaultFont( ){
{
		HX_STACK_PUSH("DefaultFontGenerator::generateAndStoreDefaultFont","com/stencyl/graphics/fonts/DefaultFontGenerator.hx",10);
		HX_STACK_LINE(11)
		::String letters = HX_CSTRING("");		HX_STACK_VAR(letters,"letters");
		HX_STACK_LINE(15)
		::flash::display::BitmapData bd = ::flash::display::BitmapData_obj::__new((int)700,(int)9,true,(int)-7829368,null());		HX_STACK_VAR(bd,"bd");
		HX_STACK_LINE(18)
		int letterPos = (int)0;		HX_STACK_VAR(letterPos,"letterPos");
		HX_STACK_LINE(19)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(21)
		while(((i < ::com::stencyl::graphics::fonts::DefaultFontGenerator_obj::fontData.length))){
			HX_STACK_LINE(23)
			hx::AddEq(letters,::com::stencyl::graphics::fonts::DefaultFontGenerator_obj::fontData.substr(i,(int)1));
			HX_STACK_LINE(25)
			int gw = ::Std_obj::parseInt(::com::stencyl::graphics::fonts::DefaultFontGenerator_obj::fontData.substr(++(i),(int)1));		HX_STACK_VAR(gw,"gw");
			HX_STACK_LINE(26)
			int gh = ::Std_obj::parseInt(::com::stencyl::graphics::fonts::DefaultFontGenerator_obj::fontData.substr(++(i),(int)1));		HX_STACK_VAR(gh,"gh");
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = gh;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(28)
				while(((_g1 < _g))){
					HX_STACK_LINE(28)
					int py = (_g1)++;		HX_STACK_VAR(py,"py");
					HX_STACK_LINE(30)
					{
						HX_STACK_LINE(30)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						int _g2 = gw;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(30)
						while(((_g3 < _g2))){
							HX_STACK_LINE(30)
							int px = (_g3)++;		HX_STACK_VAR(px,"px");
							HX_STACK_LINE(32)
							(i)++;
							HX_STACK_LINE(34)
							if (((::com::stencyl::graphics::fonts::DefaultFontGenerator_obj::fontData.substr(i,(int)1) == HX_CSTRING("1")))){
								HX_STACK_LINE(35)
								bd->setPixel32((((int)1 + (letterPos * (int)7)) + px),((int)1 + py),(int)-1);
							}
							else{
								HX_STACK_LINE(44)
								bd->setPixel32((((int)1 + (letterPos * (int)7)) + px),((int)1 + py),(int)0);
							}
						}
					}
				}
			}
			HX_STACK_LINE(54)
			(i)++;
			HX_STACK_LINE(55)
			(letterPos)++;
		}
		HX_STACK_LINE(58)
		::com::stencyl::graphics::fonts::BitmapFont_obj::store(HX_CSTRING("default"),::com::stencyl::graphics::fonts::BitmapFont_obj::__new()->loadPixelizer(bd,letters));
		HX_STACK_LINE(59)
		bd->dispose();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DefaultFontGenerator_obj,generateAndStoreDefaultFont,(void))


DefaultFontGenerator_obj::DefaultFontGenerator_obj()
{
}

void DefaultFontGenerator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultFontGenerator);
	HX_MARK_END_CLASS();
}

void DefaultFontGenerator_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic DefaultFontGenerator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fontData") ) { return fontData; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"generateAndStoreDefaultFont") ) { return generateAndStoreDefaultFont_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultFontGenerator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fontData") ) { fontData=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultFontGenerator_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fontData"),
	HX_CSTRING("generateAndStoreDefaultFont"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultFontGenerator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DefaultFontGenerator_obj::fontData,"fontData");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultFontGenerator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DefaultFontGenerator_obj::fontData,"fontData");
};

Class DefaultFontGenerator_obj::__mClass;

void DefaultFontGenerator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.fonts.DefaultFontGenerator"), hx::TCanCast< DefaultFontGenerator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DefaultFontGenerator_obj::__boot()
{
	fontData= HX_CSTRING(" 36000000000000000000!26101010001000\"46101010100000000000000000#66010100111110010100111110010100000000$56001000111011000001101110000100%66100100000100001000010000010010000000&66011000100000011010100100011010000000'26101000000000(36010100100100010000)36100010010010100000*46000010100100101000000000+46000001001110010000000000,36000000000000010100-46000000001110000000000000.26000000001000/66000010000100001000010000100000000000056011001001010010100100110000000156011000010000100001000010000000256111000001001100100001111000000356111000001001100000101110000000456100101001010010011100001000000556111101000011100000101110000000656011001000011100100100110000000756111000001000010001100001000000856011001001001100100100110000000956011001001010010011100001000000:26001000100000;26001000101000<46001001001000010000100000=46000011100000111000000000>46100001000010010010000000?56111000001001100000000100000000@66011100100010101110101010011100000000A56011001001010010111101001000000B56111001001011100100101110000000C56011001001010000100100110000000D56111001001010010100101110000000E56111101000011000100001111000000F56111101000010000110001000000000G56011001000010110100100111000000H56100101001011110100101001000000I26101010101000J56000100001000010100100110000000K56100101001010010111001001000000L46100010001000100011100000M66100010100010110110101010100010000000N56100101001011010101101001000000O56011001001010010100100110000000P56111001001010010111001000000000Q56011001001010010100100110000010R56111001001010010111001001000000S56011101000001100000101110000000T46111001000100010001000000U56100101001010010100100110000000V56100101001010010101000100000000W66100010100010101010110110100010000000X56100101001001100100101001000000Y56100101001010010011100001001100Z56111100001001100100001111000000[36110100100100110000}46110001000010010011000000]36110010010010110000^46010010100000000000000000_46000000000000000011110000'26101000000000a56000000111010010100100111000000b56100001110010010100101110000000c46000001101000100001100000d56000100111010010100100111000000e56000000110010110110000110000000f46011010001000110010000000g5700000011001001010010011100001001100h56100001110010010100101001000000i26100010101000j37010000010010010010100k56100001001010010111001001000000l26101010101000m66000000111100101010101010101010000000n56000001110010010100101001000000o56000000110010010100100110000000p5700000111001001010010111001000010000q5700000011101001010010011100001000010r46000010101100100010000000s56000000111011000001101110000000t46100011001000100001100000u56000001001010010100100111000000v56000001001010010101000100000000w66000000101010101010101010011110000000x56000001001010010011001001000000y5700000100101001010010011100001001100z56000001111000100010001111000000{46011001001000010001100000|26101010101000}46110001000010010011000000~56010101010000000000000000000000\\46111010101010101011100000");
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace fonts
