#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_stencyl_AssetLoader
#include <com/stencyl/AssetLoader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_fonts_BitmapFont
#include <com/stencyl/graphics/fonts/BitmapFont.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_fonts_FontSymbol
#include <com/stencyl/graphics/fonts/FontSymbol.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif
namespace com{
namespace stencyl{
namespace graphics{
namespace fonts{

Void BitmapFont_obj::__construct()
{
HX_STACK_PUSH("BitmapFont::new","com/stencyl/graphics/fonts/BitmapFont.hx",49);
{
	HX_STACK_LINE(50)
	this->_maxHeight = (int)0;
	HX_STACK_LINE(51)
	this->_point = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(57)
	this->_glyphs = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(58)
	this->_num_letters = (int)0;
}
;
	return null();
}

BitmapFont_obj::~BitmapFont_obj() { }

Dynamic BitmapFont_obj::__CreateEmpty() { return  new BitmapFont_obj; }
hx::ObjectPtr< BitmapFont_obj > BitmapFont_obj::__new()
{  hx::ObjectPtr< BitmapFont_obj > result = new BitmapFont_obj();
	result->__construct();
	return result;}

Dynamic BitmapFont_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFont_obj > result = new BitmapFont_obj();
	result->__construct();
	return result;}

int BitmapFont_obj::get_numLetters( ){
	HX_STACK_PUSH("BitmapFont::get_numLetters","com/stencyl/graphics/fonts/BitmapFont.hx",637);
	HX_STACK_THIS(this);
	HX_STACK_LINE(637)
	return this->_num_letters;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFont_obj,get_numLetters,return )

int BitmapFont_obj::getFontHeight( ){
	HX_STACK_PUSH("BitmapFont::getFontHeight","com/stencyl/graphics/fonts/BitmapFont.hx",626);
	HX_STACK_THIS(this);
	HX_STACK_LINE(626)
	return this->_maxHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFont_obj,getFontHeight,return )

int BitmapFont_obj::getTextWidth( ::String pText,Dynamic __o_pLetterSpacing,Dynamic __o_pFontScale){
Dynamic pLetterSpacing = __o_pLetterSpacing.Default(0);
Dynamic pFontScale = __o_pFontScale.Default(1.0);
	HX_STACK_PUSH("BitmapFont::getTextWidth","com/stencyl/graphics/fonts/BitmapFont.hx",570);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pText,"pText");
	HX_STACK_ARG(pLetterSpacing,"pLetterSpacing");
	HX_STACK_ARG(pFontScale,"pFontScale");
{
		HX_STACK_LINE(571)
		int w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(572)
		int realCount = (int)0;		HX_STACK_VAR(realCount,"realCount");
		HX_STACK_LINE(573)
		int textLength = pText.length;		HX_STACK_VAR(textLength,"textLength");
		HX_STACK_LINE(574)
		{
			HX_STACK_LINE(574)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = textLength;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(574)
			while(((_g1 < _g))){
				HX_STACK_LINE(574)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(576)
				if (((i < realCount))){
					HX_STACK_LINE(577)
					continue;
				}
				HX_STACK_LINE(581)
				int charCode = pText.charCodeAt(i);		HX_STACK_VAR(charCode,"charCode");
				HX_STACK_LINE(584)
				if (((charCode == (int)126))){
					HX_STACK_LINE(585)
					if (((pText.charAt((i + (int)1)) == HX_CSTRING("x")))){
						HX_STACK_LINE(588)
						::String unicodeChar = pText.substring((i + (int)2),(i + (int)6));		HX_STACK_VAR(unicodeChar,"unicodeChar");
						HX_STACK_LINE(589)
						charCode = ::Std_obj::parseInt((HX_CSTRING("0x") + unicodeChar));
						HX_STACK_LINE(590)
						hx::AddEq(realCount,(int)5);
					}
				}
				HX_STACK_LINE(601)
				if ((this->_glyphs->exists(charCode))){
					HX_STACK_LINE(602)
					hx::AddEq(w,this->_glyphs->get(charCode)->__Field(HX_CSTRING("xadvance"),true));
				}
				HX_STACK_LINE(608)
				(realCount)++;
			}
		}
		HX_STACK_LINE(611)
		w = ::Math_obj::round((w * pFontScale));
		HX_STACK_LINE(613)
		if (((textLength > (int)1))){
			HX_STACK_LINE(614)
			hx::AddEq(w,(((textLength - (int)1)) * pLetterSpacing));
		}
		HX_STACK_LINE(618)
		return w;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFont_obj,getTextWidth,return )

Void BitmapFont_obj::drawText( ::flash::display::Graphics graphics,Array< Float > drawData){
{
		HX_STACK_PUSH("BitmapFont::drawText","com/stencyl/graphics/fonts/BitmapFont.hx",557);
		HX_STACK_THIS(this);
		HX_STACK_ARG(graphics,"graphics");
		HX_STACK_ARG(drawData,"drawData");
		HX_STACK_LINE(557)
		this->_tileSheet->drawTiles(graphics,drawData,::scripts::MyAssets_obj::antialias,::com::stencyl::graphics::fonts::BitmapFont_obj::_flags);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapFont_obj,drawText,(void))

int BitmapFont_obj::toARGB( int rgb,int newAlpha){
	HX_STACK_PUSH("BitmapFont::toARGB","com/stencyl/graphics/fonts/BitmapFont.hx",542);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rgb,"rgb");
	HX_STACK_ARG(newAlpha,"newAlpha");
	HX_STACK_LINE(543)
	int argb = (int)0;		HX_STACK_VAR(argb,"argb");
	HX_STACK_LINE(544)
	argb = rgb;
	HX_STACK_LINE(545)
	hx::AddEq(argb,(int(newAlpha) << int((int)24)));
	HX_STACK_LINE(547)
	return argb;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapFont_obj,toARGB,return )

Void BitmapFont_obj::render( Array< Float > drawData,::String pText,int pColor,Float pAlpha,int pOffsetX,int pOffsetY,int pLetterSpacing,Float pScale,Dynamic __o_pAngle,Dynamic __o_pUseColorTransform){
Dynamic pAngle = __o_pAngle.Default(0);
Dynamic pUseColorTransform = __o_pUseColorTransform.Default(true);
	HX_STACK_PUSH("BitmapFont::render","com/stencyl/graphics/fonts/BitmapFont.hx",455);
	HX_STACK_THIS(this);
	HX_STACK_ARG(drawData,"drawData");
	HX_STACK_ARG(pText,"pText");
	HX_STACK_ARG(pColor,"pColor");
	HX_STACK_ARG(pAlpha,"pAlpha");
	HX_STACK_ARG(pOffsetX,"pOffsetX");
	HX_STACK_ARG(pOffsetY,"pOffsetY");
	HX_STACK_ARG(pLetterSpacing,"pLetterSpacing");
	HX_STACK_ARG(pScale,"pScale");
	HX_STACK_ARG(pAngle,"pAngle");
	HX_STACK_ARG(pUseColorTransform,"pUseColorTransform");
{
		HX_STACK_LINE(456)
		this->_point->x = pOffsetX;
		HX_STACK_LINE(457)
		this->_point->y = pOffsetY;
		HX_STACK_LINE(461)
		::com::stencyl::graphics::fonts::FontSymbol glyph;		HX_STACK_VAR(glyph,"glyph");
		HX_STACK_LINE(462)
		int glyphWidth;		HX_STACK_VAR(glyphWidth,"glyphWidth");
		HX_STACK_LINE(465)
		int realCount = (int)0;		HX_STACK_VAR(realCount,"realCount");
		HX_STACK_LINE(467)
		{
			HX_STACK_LINE(467)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = pText.length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(467)
			while(((_g1 < _g))){
				HX_STACK_LINE(467)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(469)
				if (((i < realCount))){
					HX_STACK_LINE(470)
					continue;
				}
				HX_STACK_LINE(474)
				int charCode = pText.charCodeAt(i);		HX_STACK_VAR(charCode,"charCode");
				HX_STACK_LINE(477)
				if (((charCode == (int)126))){
					HX_STACK_LINE(478)
					if (((pText.charAt((i + (int)1)) == HX_CSTRING("x")))){
						HX_STACK_LINE(481)
						::String unicodeChar = pText.substring((i + (int)2),(i + (int)6));		HX_STACK_VAR(unicodeChar,"unicodeChar");
						HX_STACK_LINE(482)
						charCode = ::Std_obj::parseInt((HX_CSTRING("0x") + unicodeChar));
						HX_STACK_LINE(483)
						hx::AddEq(realCount,(int)5);
					}
				}
				HX_STACK_LINE(491)
				glyph = this->_glyphs->get(charCode);
				HX_STACK_LINE(492)
				if ((this->_glyphs->exists(charCode))){
					HX_STACK_LINE(510)
					glyphWidth = glyph->xadvance;
					HX_STACK_LINE(511)
					Float red = (Float(((int((int(pColor) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(red,"red");
					HX_STACK_LINE(512)
					Float green = (Float(((int((int(pColor) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(green,"green");
					HX_STACK_LINE(513)
					Float blue = (Float(((int(pColor) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(blue,"blue");
					HX_STACK_LINE(515)
					drawData->push((this->_point->x + (glyph->xoffset * pScale)));
					HX_STACK_LINE(516)
					drawData->push((this->_point->y + (glyph->yoffset * pScale)));
					HX_STACK_LINE(517)
					drawData->push(glyph->tileID);
					HX_STACK_LINE(518)
					drawData->push(pScale);
					HX_STACK_LINE(519)
					drawData->push((int)0);
					HX_STACK_LINE(520)
					if ((pUseColorTransform)){
						HX_STACK_LINE(522)
						drawData->push(red);
						HX_STACK_LINE(523)
						drawData->push(green);
						HX_STACK_LINE(524)
						drawData->push(blue);
					}
					else{
						HX_STACK_LINE(528)
						drawData->push((int)1);
						HX_STACK_LINE(529)
						drawData->push((int)1);
						HX_STACK_LINE(530)
						drawData->push((int)1);
					}
					HX_STACK_LINE(532)
					drawData->push(pAlpha);
					HX_STACK_LINE(533)
					hx::AddEq(this->_point->x,((glyphWidth * pScale) + pLetterSpacing));
				}
				HX_STACK_LINE(537)
				(realCount)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(BitmapFont_obj,render,(void))

Void BitmapFont_obj::setGlyph( int pCharID,::flash::geom::Rectangle pRect,int pGlyphID,Dynamic __o_pOffsetX,Dynamic __o_pOffsetY,Dynamic __o_pAdvanceX){
Dynamic pOffsetX = __o_pOffsetX.Default(0);
Dynamic pOffsetY = __o_pOffsetY.Default(0);
Dynamic pAdvanceX = __o_pAdvanceX.Default(0);
	HX_STACK_PUSH("BitmapFont::setGlyph","com/stencyl/graphics/fonts/BitmapFont.hx",421);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pCharID,"pCharID");
	HX_STACK_ARG(pRect,"pRect");
	HX_STACK_ARG(pGlyphID,"pGlyphID");
	HX_STACK_ARG(pOffsetX,"pOffsetX");
	HX_STACK_ARG(pOffsetY,"pOffsetY");
	HX_STACK_ARG(pAdvanceX,"pAdvanceX");
{
		HX_STACK_LINE(422)
		this->_tileSheet->addTileRect(pRect,null());
		HX_STACK_LINE(424)
		::com::stencyl::graphics::fonts::FontSymbol symbol = ::com::stencyl::graphics::fonts::FontSymbol_obj::__new();		HX_STACK_VAR(symbol,"symbol");
		HX_STACK_LINE(425)
		symbol->tileID = pGlyphID;
		HX_STACK_LINE(426)
		symbol->xoffset = pOffsetX;
		HX_STACK_LINE(427)
		symbol->yoffset = pOffsetY;
		HX_STACK_LINE(428)
		symbol->xadvance = pAdvanceX;
		HX_STACK_LINE(430)
		this->_glyphs->set(pCharID,symbol);
		HX_STACK_LINE(431)
		(this->_num_letters)++;
		HX_STACK_LINE(433)
		if ((((::Math_obj::floor(pRect->height) + pOffsetY) > this->_maxHeight))){
			HX_STACK_LINE(434)
			this->_maxHeight = (::Math_obj::floor(pRect->height) + pOffsetY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapFont_obj,setGlyph,(void))

Void BitmapFont_obj::dispose( ){
{
		HX_STACK_PUSH("BitmapFont::dispose","com/stencyl/graphics/fonts/BitmapFont.hx",359);
		HX_STACK_THIS(this);
		HX_STACK_LINE(371)
		this->_tileSheet = null();
		HX_STACK_LINE(372)
		this->_num_letters = (int)0;
		HX_STACK_LINE(374)
		this->_glyphs = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFont_obj,dispose,(void))

::flash::display::BitmapData BitmapFont_obj::prepareBitmapData( ::flash::display::BitmapData pBitmapData,Array< ::Dynamic > pRects){
	HX_STACK_PUSH("BitmapFont::prepareBitmapData","com/stencyl/graphics/fonts/BitmapFont.hx",221);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pBitmapData,"pBitmapData");
	HX_STACK_ARG(pRects,"pRects");
	HX_STACK_LINE(222)
	int bgColor = pBitmapData->getPixel((int)0,(int)0);		HX_STACK_VAR(bgColor,"bgColor");
	HX_STACK_LINE(223)
	int cy = (int)0;		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(224)
	int cx;		HX_STACK_VAR(cx,"cx");
	HX_STACK_LINE(226)
	while(((cy < pBitmapData->get_height()))){
		HX_STACK_LINE(228)
		int rowHeight = (int)0;		HX_STACK_VAR(rowHeight,"rowHeight");
		HX_STACK_LINE(229)
		cx = (int)0;
		HX_STACK_LINE(231)
		while(((cx < pBitmapData->get_width()))){
			HX_STACK_LINE(233)
			if (((::Std_obj::_int(pBitmapData->getPixel(cx,cy)) != bgColor))){
				HX_STACK_LINE(236)
				int gx = cx;		HX_STACK_VAR(gx,"gx");
				HX_STACK_LINE(237)
				int gy = cy;		HX_STACK_VAR(gy,"gy");
				HX_STACK_LINE(239)
				while(((::Std_obj::_int(pBitmapData->getPixel(gx,cy)) != bgColor))){
					HX_STACK_LINE(240)
					(gx)++;
				}
				HX_STACK_LINE(243)
				while(((::Std_obj::_int(pBitmapData->getPixel(cx,gy)) != bgColor))){
					HX_STACK_LINE(244)
					(gy)++;
				}
				HX_STACK_LINE(247)
				int gw = (gx - cx);		HX_STACK_VAR(gw,"gw");
				HX_STACK_LINE(248)
				int gh = (gy - cy);		HX_STACK_VAR(gh,"gh");
				HX_STACK_LINE(250)
				pRects->push(::flash::geom::Rectangle_obj::__new(cx,cy,gw,gh));
				HX_STACK_LINE(253)
				if (((gh > rowHeight))){
					HX_STACK_LINE(254)
					rowHeight = gh;
				}
				HX_STACK_LINE(257)
				if (((gh > this->_maxHeight))){
					HX_STACK_LINE(258)
					this->_maxHeight = gh;
				}
				HX_STACK_LINE(263)
				hx::AddEq(cx,gw);
			}
			HX_STACK_LINE(266)
			(cx)++;
		}
		HX_STACK_LINE(269)
		hx::AddEq(cy,(rowHeight + (int)1));
	}
	HX_STACK_LINE(275)
	::flash::display::BitmapData resultBitmapData = pBitmapData->clone();		HX_STACK_VAR(resultBitmapData,"resultBitmapData");
	HX_STACK_LINE(285)
	int pixelColor;		HX_STACK_VAR(pixelColor,"pixelColor");
	HX_STACK_LINE(286)
	int bgColor32 = pBitmapData->getPixel32((int)0,(int)0);		HX_STACK_VAR(bgColor32,"bgColor32");
	HX_STACK_LINE(289)
	cy = (int)0;
	HX_STACK_LINE(290)
	while(((cy < pBitmapData->get_height()))){
		HX_STACK_LINE(292)
		cx = (int)0;
		HX_STACK_LINE(293)
		while(((cx < pBitmapData->get_width()))){
			HX_STACK_LINE(295)
			pixelColor = pBitmapData->getPixel32(cx,cy);
			HX_STACK_LINE(302)
			if (((pixelColor == bgColor32))){
				HX_STACK_LINE(303)
				resultBitmapData->setPixel32(cx,cy,(int)0);
			}
			HX_STACK_LINE(307)
			(cx)++;
		}
		HX_STACK_LINE(309)
		(cy)++;
	}
	HX_STACK_LINE(312)
	return resultBitmapData;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapFont_obj,prepareBitmapData,return )

Void BitmapFont_obj::reset( ){
{
		HX_STACK_PUSH("BitmapFont::reset","com/stencyl/graphics/fonts/BitmapFont.hx",209);
		HX_STACK_THIS(this);
		HX_STACK_LINE(210)
		this->dispose();
		HX_STACK_LINE(211)
		this->_maxHeight = (int)0;
		HX_STACK_LINE(215)
		this->_glyphs = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(217)
		this->_glyphString = HX_CSTRING("");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFont_obj,reset,(void))

::com::stencyl::graphics::fonts::BitmapFont BitmapFont_obj::loadAngelCode( ::flash::display::BitmapData pBitmapData,::Xml pXMLData){
	HX_STACK_PUSH("BitmapFont::loadAngelCode","com/stencyl/graphics/fonts/BitmapFont.hx",110);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pBitmapData,"pBitmapData");
	HX_STACK_ARG(pXMLData,"pXMLData");
	HX_STACK_LINE(111)
	this->reset();
	HX_STACK_LINE(113)
	if (((pBitmapData != null()))){
		HX_STACK_LINE(115)
		this->_glyphString = HX_CSTRING("");
		HX_STACK_LINE(116)
		::flash::geom::Rectangle rect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(117)
		::flash::geom::Point point = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(118)
		::flash::display::BitmapData bd;		HX_STACK_VAR(bd,"bd");
		HX_STACK_LINE(119)
		int letterID = (int)0;		HX_STACK_VAR(letterID,"letterID");
		HX_STACK_LINE(120)
		int charCode;		HX_STACK_VAR(charCode,"charCode");
		HX_STACK_LINE(121)
		::String charString;		HX_STACK_VAR(charString,"charString");
		HX_STACK_LINE(124)
		this->_tileSheet = ::openfl::display::Tilesheet_obj::__new(pBitmapData);
		HX_STACK_LINE(127)
		::Xml chars = null();		HX_STACK_VAR(chars,"chars");
		HX_STACK_LINE(128)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(pXMLData->elements());  __it->hasNext(); ){
			::Xml node = __it->next();
			if (((node->get_nodeName() == HX_CSTRING("font")))){
				HX_STACK_LINE(131)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(node->elements());  __it->hasNext(); ){
					::Xml nodeChild = __it->next();
					if (((nodeChild->get_nodeName() == HX_CSTRING("chars")))){
						HX_STACK_LINE(136)
						chars = nodeChild;
						HX_STACK_LINE(137)
						break;
					}
;
				}
			}
;
		}
		HX_STACK_LINE(143)
		if (((chars != null()))){
			HX_STACK_LINE(144)
			for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(chars->elements());  __it->hasNext(); ){
				::Xml node = __it->next();
				if (((node->get_nodeName() == HX_CSTRING("char")))){
					HX_STACK_LINE(149)
					rect->x = ::Std_obj::parseInt(node->get(HX_CSTRING("x")));
					HX_STACK_LINE(150)
					rect->y = ::Std_obj::parseInt(node->get(HX_CSTRING("y")));
					HX_STACK_LINE(151)
					rect->width = ::Std_obj::parseInt(node->get(HX_CSTRING("width")));
					HX_STACK_LINE(152)
					rect->height = ::Std_obj::parseInt(node->get(HX_CSTRING("height")));
					HX_STACK_LINE(154)
					point->x = ::Std_obj::parseInt(node->get(HX_CSTRING("xoffset")));
					HX_STACK_LINE(155)
					point->y = ::Std_obj::parseInt(node->get(HX_CSTRING("yoffset")));
					HX_STACK_LINE(157)
					charCode = ::Std_obj::parseInt(node->get(HX_CSTRING("id")));
					HX_STACK_LINE(158)
					charString = ::String::fromCharCode(charCode);
					HX_STACK_LINE(159)
					hx::AddEq(this->_glyphString,charString);
					HX_STACK_LINE(161)
					int xadvance = ::Std_obj::parseInt(node->get(HX_CSTRING("xadvance")));		HX_STACK_VAR(xadvance,"xadvance");
					HX_STACK_LINE(162)
					int charWidth = xadvance;		HX_STACK_VAR(charWidth,"charWidth");
					HX_STACK_LINE(164)
					if (((rect->width > xadvance))){
						HX_STACK_LINE(166)
						charWidth = ::Std_obj::_int(rect->width);
						HX_STACK_LINE(167)
						point->x = (int)0;
					}
					HX_STACK_LINE(186)
					if (((bool((charString != HX_CSTRING(" "))) && bool((charString != HX_CSTRING("")))))){
						HX_STACK_LINE(187)
						this->setGlyph(charCode,rect,letterID,::Math_obj::floor(point->x),::Math_obj::floor(point->y),charWidth);
					}
					else{
						HX_STACK_LINE(191)
						this->setGlyph(charCode,rect,letterID,::Math_obj::floor(point->x),(int)1,charWidth);
					}
					HX_STACK_LINE(196)
					(letterID)++;
				}
;
			}
		}
	}
	HX_STACK_LINE(202)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapFont_obj,loadAngelCode,return )

::com::stencyl::graphics::fonts::BitmapFont BitmapFont_obj::loadPixelizer( ::flash::display::BitmapData pBitmapData,::String pLetters){
	HX_STACK_PUSH("BitmapFont::loadPixelizer","com/stencyl/graphics/fonts/BitmapFont.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pBitmapData,"pBitmapData");
	HX_STACK_ARG(pLetters,"pLetters");
	HX_STACK_LINE(70)
	this->reset();
	HX_STACK_LINE(71)
	this->_glyphString = pLetters;
	HX_STACK_LINE(73)
	if (((pBitmapData != null()))){
		HX_STACK_LINE(75)
		Array< ::Dynamic > tileRects = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tileRects,"tileRects");
		HX_STACK_LINE(76)
		::flash::display::BitmapData result = this->prepareBitmapData(pBitmapData,tileRects);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(77)
		::flash::geom::Rectangle currRect;		HX_STACK_VAR(currRect,"currRect");
		HX_STACK_LINE(80)
		this->_tileSheet = ::openfl::display::Tilesheet_obj::__new(result);
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = tileRects->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			while(((_g1 < _g))){
				HX_STACK_LINE(83)
				int letterID = (_g1)++;		HX_STACK_VAR(letterID,"letterID");
				HX_STACK_LINE(85)
				currRect = tileRects->__get(letterID).StaticCast< ::flash::geom::Rectangle >();
				HX_STACK_LINE(95)
				this->setGlyph(this->_glyphString.charCodeAt(letterID),currRect,letterID,(int)0,(int)0,::Math_obj::floor(currRect->width));
			}
		}
	}
	HX_STACK_LINE(100)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapFont_obj,loadPixelizer,return )

::haxe::ds::StringMap BitmapFont_obj::_storedFonts;

::flash::geom::Point BitmapFont_obj::ZERO_POINT;

int BitmapFont_obj::_flags;

Void BitmapFont_obj::store( ::String pHandle,::com::stencyl::graphics::fonts::BitmapFont pFont){
{
		HX_STACK_PUSH("BitmapFont::store","com/stencyl/graphics/fonts/BitmapFont.hx",651);
		HX_STACK_ARG(pHandle,"pHandle");
		HX_STACK_ARG(pFont,"pFont");
		HX_STACK_LINE(651)
		::com::stencyl::graphics::fonts::BitmapFont_obj::_storedFonts->set(pHandle,pFont);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapFont_obj,store,(void))

::com::stencyl::graphics::fonts::BitmapFont BitmapFont_obj::fetch( ::String pHandle){
	HX_STACK_PUSH("BitmapFont::fetch","com/stencyl/graphics/fonts/BitmapFont.hx",661);
	HX_STACK_ARG(pHandle,"pHandle");
	HX_STACK_LINE(662)
	::com::stencyl::graphics::fonts::BitmapFont f = ::com::stencyl::graphics::fonts::BitmapFont_obj::_storedFonts->get(pHandle);		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(663)
	return f;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapFont_obj,fetch,return )


BitmapFont_obj::BitmapFont_obj()
{
}

void BitmapFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFont);
	HX_MARK_MEMBER_NAME(numLetters,"numLetters");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_MARK_MEMBER_NAME(_glyphString,"_glyphString");
	HX_MARK_MEMBER_NAME(_tileSheet,"_tileSheet");
	HX_MARK_MEMBER_NAME(_num_letters,"_num_letters");
	HX_MARK_MEMBER_NAME(_glyphs,"_glyphs");
	HX_MARK_END_CLASS();
}

void BitmapFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numLetters,"numLetters");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_VISIT_MEMBER_NAME(_glyphString,"_glyphString");
	HX_VISIT_MEMBER_NAME(_tileSheet,"_tileSheet");
	HX_VISIT_MEMBER_NAME(_num_letters,"_num_letters");
	HX_VISIT_MEMBER_NAME(_glyphs,"_glyphs");
}

Dynamic BitmapFont_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"store") ) { return store_dyn(); }
		if (HX_FIELD_EQ(inName,"fetch") ) { return fetch_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_flags") ) { return _flags; }
		if (HX_FIELD_EQ(inName,"toARGB") ) { return toARGB_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_glyphs") ) { return _glyphs; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawText") ) { return drawText_dyn(); }
		if (HX_FIELD_EQ(inName,"setGlyph") ) { return setGlyph_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ZERO_POINT") ) { return ZERO_POINT; }
		if (HX_FIELD_EQ(inName,"numLetters") ) { return inCallProp ? get_numLetters() : numLetters; }
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { return _maxHeight; }
		if (HX_FIELD_EQ(inName,"_tileSheet") ) { return _tileSheet; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storedFonts") ) { return _storedFonts; }
		if (HX_FIELD_EQ(inName,"getTextWidth") ) { return getTextWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"_glyphString") ) { return _glyphString; }
		if (HX_FIELD_EQ(inName,"_num_letters") ) { return _num_letters; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFontHeight") ) { return getFontHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"loadAngelCode") ) { return loadAngelCode_dyn(); }
		if (HX_FIELD_EQ(inName,"loadPixelizer") ) { return loadPixelizer_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_numLetters") ) { return get_numLetters_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"prepareBitmapData") ) { return prepareBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapFont_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_flags") ) { _flags=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_glyphs") ) { _glyphs=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ZERO_POINT") ) { ZERO_POINT=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLetters") ) { numLetters=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { _maxHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileSheet") ) { _tileSheet=inValue.Cast< ::openfl::display::Tilesheet >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storedFonts") ) { _storedFonts=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_glyphString") ) { _glyphString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_num_letters") ) { _num_letters=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("numLetters"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_maxHeight"));
	outFields->push(HX_CSTRING("_glyphString"));
	outFields->push(HX_CSTRING("_tileSheet"));
	outFields->push(HX_CSTRING("_num_letters"));
	outFields->push(HX_CSTRING("_glyphs"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_storedFonts"),
	HX_CSTRING("ZERO_POINT"),
	HX_CSTRING("_flags"),
	HX_CSTRING("store"),
	HX_CSTRING("fetch"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_numLetters"),
	HX_CSTRING("numLetters"),
	HX_CSTRING("getFontHeight"),
	HX_CSTRING("getTextWidth"),
	HX_CSTRING("drawText"),
	HX_CSTRING("toARGB"),
	HX_CSTRING("render"),
	HX_CSTRING("setGlyph"),
	HX_CSTRING("dispose"),
	HX_CSTRING("prepareBitmapData"),
	HX_CSTRING("reset"),
	HX_CSTRING("loadAngelCode"),
	HX_CSTRING("loadPixelizer"),
	HX_CSTRING("_point"),
	HX_CSTRING("_maxHeight"),
	HX_CSTRING("_glyphString"),
	HX_CSTRING("_tileSheet"),
	HX_CSTRING("_num_letters"),
	HX_CSTRING("_glyphs"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFont_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::_storedFonts,"_storedFonts");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::ZERO_POINT,"ZERO_POINT");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::_flags,"_flags");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::_storedFonts,"_storedFonts");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::ZERO_POINT,"ZERO_POINT");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::_flags,"_flags");
};

Class BitmapFont_obj::__mClass;

void BitmapFont_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.fonts.BitmapFont"), hx::TCanCast< BitmapFont_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BitmapFont_obj::__boot()
{
	_storedFonts= ::haxe::ds::StringMap_obj::__new();
	ZERO_POINT= ::flash::geom::Point_obj::__new(null(),null());
	_flags= (int)15;
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace fonts
