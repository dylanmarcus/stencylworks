#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_BitmapFont
#include <com/stencyl/graphics/BitmapFont.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace stencyl{
namespace graphics{

Void BitmapFont_obj::__construct(::String fontURL,int width,int height,::String chars,int charsPerRow,hx::Null< int >  __o_xSpacing,hx::Null< int >  __o_ySpacing,hx::Null< int >  __o_xOffset,hx::Null< int >  __o_yOffset)
{
HX_STACK_PUSH("BitmapFont::new","com/stencyl/graphics/BitmapFont.hx",146);
int xSpacing = __o_xSpacing.Default(0);
int ySpacing = __o_ySpacing.Default(0);
int xOffset = __o_xOffset.Default(0);
int yOffset = __o_yOffset.Default(0);
{
	HX_STACK_LINE(147)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(149)
	this->align = HX_CSTRING("left");
	HX_STACK_LINE(150)
	this->multiLine = false;
	HX_STACK_LINE(151)
	this->autoUpperCase = true;
	HX_STACK_LINE(152)
	this->customSpacingX = (int)0;
	HX_STACK_LINE(153)
	this->customSpacingY = (int)0;
	HX_STACK_LINE(156)
	this->fontSet = ::openfl::Assets_obj::getBitmapData(fontURL,null());
	HX_STACK_LINE(158)
	this->characterWidth = width;
	HX_STACK_LINE(159)
	this->characterHeight = height;
	HX_STACK_LINE(160)
	this->characterSpacingX = xSpacing;
	HX_STACK_LINE(161)
	this->characterSpacingY = ySpacing;
	HX_STACK_LINE(162)
	this->characterPerRow = charsPerRow;
	HX_STACK_LINE(163)
	this->offsetX = xOffset;
	HX_STACK_LINE(164)
	this->offsetY = yOffset;
	HX_STACK_LINE(166)
	this->grabData = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(169)
	int currentX = this->offsetX;		HX_STACK_VAR(currentX,"currentX");
	HX_STACK_LINE(170)
	int currentY = this->offsetY;		HX_STACK_VAR(currentY,"currentY");
	HX_STACK_LINE(171)
	int r = (int)0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(173)
	{
		HX_STACK_LINE(173)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = chars.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(173)
		while(((_g1 < _g))){
			HX_STACK_LINE(173)
			int c = (_g1)++;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(176)
			this->grabData[chars.charCodeAt(c)] = ::flash::geom::Rectangle_obj::__new(currentX,currentY,this->characterWidth,this->characterHeight);
			HX_STACK_LINE(178)
			(r)++;
			HX_STACK_LINE(180)
			if (((r == this->characterPerRow))){
				HX_STACK_LINE(182)
				r = (int)0;
				HX_STACK_LINE(183)
				currentX = this->offsetX;
				HX_STACK_LINE(184)
				hx::AddEq(currentY,(this->characterHeight + this->characterSpacingY));
			}
			else{
				HX_STACK_LINE(187)
				hx::AddEq(currentX,(this->characterWidth + this->characterSpacingX));
			}
		}
	}
}
;
	return null();
}

BitmapFont_obj::~BitmapFont_obj() { }

Dynamic BitmapFont_obj::__CreateEmpty() { return  new BitmapFont_obj; }
hx::ObjectPtr< BitmapFont_obj > BitmapFont_obj::__new(::String fontURL,int width,int height,::String chars,int charsPerRow,hx::Null< int >  __o_xSpacing,hx::Null< int >  __o_ySpacing,hx::Null< int >  __o_xOffset,hx::Null< int >  __o_yOffset)
{  hx::ObjectPtr< BitmapFont_obj > result = new BitmapFont_obj();
	result->__construct(fontURL,width,height,chars,charsPerRow,__o_xSpacing,__o_ySpacing,__o_xOffset,__o_yOffset);
	return result;}

Dynamic BitmapFont_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFont_obj > result = new BitmapFont_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return result;}

::String BitmapFont_obj::removeUnsupportedCharacters( hx::Null< bool >  __o_stripCR){
bool stripCR = __o_stripCR.Default(true);
	HX_STACK_PUSH("BitmapFont::removeUnsupportedCharacters","com/stencyl/graphics/BitmapFont.hx",410);
	HX_STACK_THIS(this);
	HX_STACK_ARG(stripCR,"stripCR");
{
		HX_STACK_LINE(411)
		::String newString = HX_CSTRING("");		HX_STACK_VAR(newString,"newString");
		HX_STACK_LINE(413)
		{
			HX_STACK_LINE(413)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_text.length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(413)
			while(((_g1 < _g))){
				HX_STACK_LINE(413)
				int c = (_g1)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(415)
				if (((bool((bool(::Std_obj::is(this->grabData->__get(this->_text.charCodeAt(c)).StaticCast< ::flash::geom::Rectangle >(),hx::ClassOf< ::flash::geom::Rectangle >())) || bool((this->_text.charCodeAt(c) == (int)32)))) || bool((bool((stripCR == false)) && bool((this->_text.charAt(c) == HX_CSTRING("\n")))))))){
					HX_STACK_LINE(416)
					newString = (newString + this->_text.charAt(c));
				}
			}
		}
		HX_STACK_LINE(421)
		return newString;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFont_obj,removeUnsupportedCharacters,return )

int BitmapFont_obj::getLongestLine( ){
	HX_STACK_PUSH("BitmapFont::getLongestLine","com/stencyl/graphics/BitmapFont.hx",383);
	HX_STACK_THIS(this);
	HX_STACK_LINE(384)
	int longestLine = (int)0;		HX_STACK_VAR(longestLine,"longestLine");
	HX_STACK_LINE(386)
	if (((this->_text.length > (int)0))){
		HX_STACK_LINE(388)
		Array< ::String > lines = this->_text.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
		HX_STACK_LINE(390)
		{
			HX_STACK_LINE(390)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = lines->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(390)
			while(((_g1 < _g))){
				HX_STACK_LINE(390)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(392)
				if (((lines->__get(i).length > longestLine))){
					HX_STACK_LINE(393)
					longestLine = lines->__get(i).length;
				}
			}
		}
	}
	HX_STACK_LINE(399)
	return longestLine;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFont_obj,getLongestLine,return )

Void BitmapFont_obj::pasteLine( ::flash::display::BitmapData output,::String line,hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_customSpacingX){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
int customSpacingX = __o_customSpacingX.Default(0);
	HX_STACK_PUSH("BitmapFont::pasteLine","com/stencyl/graphics/BitmapFont.hx",356);
	HX_STACK_THIS(this);
	HX_STACK_ARG(output,"output");
	HX_STACK_ARG(line,"line");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(customSpacingX,"customSpacingX");
{
		HX_STACK_LINE(357)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = line.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(357)
		while(((_g1 < _g))){
			HX_STACK_LINE(357)
			int c = (_g1)++;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(360)
			if (((line.charAt(c) == HX_CSTRING(" ")))){
				HX_STACK_LINE(361)
				hx::AddEq(x,(this->characterWidth + customSpacingX));
			}
			else{
				HX_STACK_LINE(366)
				if ((::Std_obj::is(this->grabData->__get(line.charCodeAt(c)).StaticCast< ::flash::geom::Rectangle >(),hx::ClassOf< ::flash::geom::Rectangle >()))){
					HX_STACK_LINE(370)
					output->copyPixels(this->fontSet,this->grabData->__get(line.charCodeAt(c)).StaticCast< ::flash::geom::Rectangle >(),::flash::geom::Point_obj::__new(x,y),null(),null(),null());
					HX_STACK_LINE(371)
					hx::AddEq(x,(this->characterWidth + customSpacingX));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFont_obj,pasteLine,(void))

::flash::display::Bitmap BitmapFont_obj::getCharacter( ::String _char){
	HX_STACK_PUSH("BitmapFont::getCharacter","com/stencyl/graphics/BitmapFont.hx",330);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_char,"char");
	HX_STACK_LINE(331)
	::flash::display::Bitmap output = ::flash::display::Bitmap_obj::__new(null(),null(),null());		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(333)
	::flash::display::BitmapData temp = ::flash::display::BitmapData_obj::__new(this->characterWidth,this->characterHeight,true,(int)15,null());		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(335)
	if (((bool(::Std_obj::is(this->grabData->__get(_char.charCodeAt((int)0)).StaticCast< ::flash::geom::Rectangle >(),hx::ClassOf< ::flash::geom::Rectangle >())) && bool((_char.charCodeAt((int)0) != (int)32))))){
		HX_STACK_LINE(336)
		temp->copyPixels(this->fontSet,this->grabData->__get(_char.charCodeAt((int)0)).StaticCast< ::flash::geom::Rectangle >(),::flash::geom::Point_obj::__new((int)0,(int)0),null(),null(),null());
	}
	HX_STACK_LINE(340)
	output->set_bitmapData(temp);
	HX_STACK_LINE(342)
	return output;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFont_obj,getCharacter,return )

Void BitmapFont_obj::buildBitmapFontText( ){
{
		HX_STACK_PUSH("BitmapFont::buildBitmapFontText","com/stencyl/graphics/BitmapFont.hx",258);
		HX_STACK_THIS(this);
		HX_STACK_LINE(259)
		::flash::display::BitmapData temp;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(261)
		if ((this->multiLine)){
			HX_STACK_LINE(263)
			Array< ::String > lines = this->_text.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
			HX_STACK_LINE(265)
			int cx = (int)0;		HX_STACK_VAR(cx,"cx");
			HX_STACK_LINE(266)
			int cy = (int)0;		HX_STACK_VAR(cy,"cy");
			HX_STACK_LINE(268)
			temp = ::flash::display::BitmapData_obj::__new((this->getLongestLine() * ((this->characterWidth + this->customSpacingX))),((lines->length * ((this->characterHeight + this->customSpacingY))) - this->customSpacingY),true,(int)15,null());
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(271)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = lines->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(271)
				while(((_g1 < _g))){
					HX_STACK_LINE(271)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(274)
					if (((this->align == ::com::stencyl::graphics::BitmapFont_obj::ALIGN_LEFT))){
						HX_STACK_LINE(275)
						cx = (int)0;
					}
					else{
						HX_STACK_LINE(279)
						if (((this->align == ::com::stencyl::graphics::BitmapFont_obj::ALIGN_RIGHT))){
							HX_STACK_LINE(280)
							cx = (temp->get_width() - (lines->__get(i).length * ((this->characterWidth + this->customSpacingX))));
						}
						else{
							HX_STACK_LINE(284)
							if (((this->align == ::com::stencyl::graphics::BitmapFont_obj::ALIGN_CENTER))){
								HX_STACK_LINE(286)
								cx = ::Math_obj::floor(((Float(temp->get_width()) / Float((int)2)) - (Float((lines->__get(i).length * ((this->characterWidth + this->customSpacingX)))) / Float((int)2))));
								HX_STACK_LINE(287)
								hx::AddEq(cx,::Math_obj::floor((Float(this->customSpacingX) / Float((int)2))));
							}
						}
					}
					HX_STACK_LINE(307)
					this->pasteLine(temp,lines->__get(i),cx,cy,this->customSpacingX);
					HX_STACK_LINE(309)
					hx::AddEq(cy,(this->characterHeight + this->customSpacingY));
				}
			}
		}
		else{
			HX_STACK_LINE(314)
			temp = ::flash::display::BitmapData_obj::__new((this->_text.length * ((this->characterWidth + this->customSpacingX))),this->characterHeight,true,(int)15,null());
			HX_STACK_LINE(316)
			this->pasteLine(temp,this->_text,(int)0,(int)0,this->customSpacingX);
		}
		HX_STACK_LINE(319)
		this->set_bitmapData(temp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFont_obj,buildBitmapFontText,(void))

Void BitmapFont_obj::setText( ::String content,hx::Null< bool >  __o_multiLines,hx::Null< int >  __o_characterSpacing,hx::Null< int >  __o_lineSpacing,::String __o_lineAlignment,hx::Null< bool >  __o_allowLowerCase){
bool multiLines = __o_multiLines.Default(false);
int characterSpacing = __o_characterSpacing.Default(0);
int lineSpacing = __o_lineSpacing.Default(0);
::String lineAlignment = __o_lineAlignment.Default(HX_CSTRING("left"));
bool allowLowerCase = __o_allowLowerCase.Default(false);
	HX_STACK_PUSH("BitmapFont::setText","com/stencyl/graphics/BitmapFont.hx",234);
	HX_STACK_THIS(this);
	HX_STACK_ARG(content,"content");
	HX_STACK_ARG(multiLines,"multiLines");
	HX_STACK_ARG(characterSpacing,"characterSpacing");
	HX_STACK_ARG(lineSpacing,"lineSpacing");
	HX_STACK_ARG(lineAlignment,"lineAlignment");
	HX_STACK_ARG(allowLowerCase,"allowLowerCase");
{
		HX_STACK_LINE(235)
		this->customSpacingX = characterSpacing;
		HX_STACK_LINE(236)
		this->customSpacingY = lineSpacing;
		HX_STACK_LINE(237)
		this->align = lineAlignment;
		HX_STACK_LINE(238)
		this->multiLine = multiLines;
		HX_STACK_LINE(240)
		if ((allowLowerCase)){
			HX_STACK_LINE(241)
			this->autoUpperCase = false;
		}
		else{
			HX_STACK_LINE(245)
			this->autoUpperCase = true;
		}
		HX_STACK_LINE(249)
		this->set_text(content);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapFont_obj,setText,(void))

::String BitmapFont_obj::get_text( ){
	HX_STACK_PUSH("BitmapFont::get_text","com/stencyl/graphics/BitmapFont.hx",219);
	HX_STACK_THIS(this);
	HX_STACK_LINE(219)
	return this->_text;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFont_obj,get_text,return )

::String BitmapFont_obj::set_text( ::String content){
	HX_STACK_PUSH("BitmapFont::set_text","com/stencyl/graphics/BitmapFont.hx",201);
	HX_STACK_THIS(this);
	HX_STACK_ARG(content,"content");
	HX_STACK_LINE(202)
	if ((this->autoUpperCase)){
		HX_STACK_LINE(203)
		this->_text = content.toUpperCase();
	}
	else{
		HX_STACK_LINE(207)
		this->_text = content;
	}
	HX_STACK_LINE(211)
	this->removeUnsupportedCharacters(this->multiLine);
	HX_STACK_LINE(213)
	this->buildBitmapFontText();
	HX_STACK_LINE(215)
	return this->_text;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFont_obj,set_text,return )

::String BitmapFont_obj::ALIGN_LEFT;

::String BitmapFont_obj::ALIGN_RIGHT;

::String BitmapFont_obj::ALIGN_CENTER;

::String BitmapFont_obj::TEXT_SET1;

::String BitmapFont_obj::TEXT_SET2;

::String BitmapFont_obj::TEXT_SET25;

::String BitmapFont_obj::TEXT_SET3;

::String BitmapFont_obj::TEXT_SET4;

::String BitmapFont_obj::TEXT_SET5;

::String BitmapFont_obj::TEXT_SET6;

::String BitmapFont_obj::TEXT_SET7;

::String BitmapFont_obj::TEXT_SET8;

::String BitmapFont_obj::TEXT_SET9;

::String BitmapFont_obj::TEXT_SET10;

::String BitmapFont_obj::TEXT_SET11;


BitmapFont_obj::BitmapFont_obj()
{
}

void BitmapFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFont);
	HX_MARK_MEMBER_NAME(grabData,"grabData");
	HX_MARK_MEMBER_NAME(characterPerRow,"characterPerRow");
	HX_MARK_MEMBER_NAME(characterSpacingY,"characterSpacingY");
	HX_MARK_MEMBER_NAME(characterSpacingX,"characterSpacingX");
	HX_MARK_MEMBER_NAME(characterHeight,"characterHeight");
	HX_MARK_MEMBER_NAME(characterWidth,"characterWidth");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(fontSet,"fontSet");
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(customSpacingY,"customSpacingY");
	HX_MARK_MEMBER_NAME(customSpacingX,"customSpacingX");
	HX_MARK_MEMBER_NAME(autoUpperCase,"autoUpperCase");
	HX_MARK_MEMBER_NAME(multiLine,"multiLine");
	HX_MARK_MEMBER_NAME(align,"align");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BitmapFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grabData,"grabData");
	HX_VISIT_MEMBER_NAME(characterPerRow,"characterPerRow");
	HX_VISIT_MEMBER_NAME(characterSpacingY,"characterSpacingY");
	HX_VISIT_MEMBER_NAME(characterSpacingX,"characterSpacingX");
	HX_VISIT_MEMBER_NAME(characterHeight,"characterHeight");
	HX_VISIT_MEMBER_NAME(characterWidth,"characterWidth");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(fontSet,"fontSet");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(customSpacingY,"customSpacingY");
	HX_VISIT_MEMBER_NAME(customSpacingX,"customSpacingX");
	HX_VISIT_MEMBER_NAME(autoUpperCase,"autoUpperCase");
	HX_VISIT_MEMBER_NAME(multiLine,"multiLine");
	HX_VISIT_MEMBER_NAME(align,"align");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BitmapFont_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setText") ) { return setText_dyn(); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"fontSet") ) { return fontSet; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"grabData") ) { return grabData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TEXT_SET3") ) { return TEXT_SET3; }
		if (HX_FIELD_EQ(inName,"TEXT_SET4") ) { return TEXT_SET4; }
		if (HX_FIELD_EQ(inName,"TEXT_SET5") ) { return TEXT_SET5; }
		if (HX_FIELD_EQ(inName,"TEXT_SET6") ) { return TEXT_SET6; }
		if (HX_FIELD_EQ(inName,"TEXT_SET7") ) { return TEXT_SET7; }
		if (HX_FIELD_EQ(inName,"TEXT_SET8") ) { return TEXT_SET8; }
		if (HX_FIELD_EQ(inName,"TEXT_SET9") ) { return TEXT_SET9; }
		if (HX_FIELD_EQ(inName,"pasteLine") ) { return pasteLine_dyn(); }
		if (HX_FIELD_EQ(inName,"multiLine") ) { return multiLine; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ALIGN_LEFT") ) { return ALIGN_LEFT; }
		if (HX_FIELD_EQ(inName,"TEXT_SET10") ) { return TEXT_SET10; }
		if (HX_FIELD_EQ(inName,"TEXT_SET11") ) { return TEXT_SET11; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ALIGN_RIGHT") ) { return ALIGN_RIGHT; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ALIGN_CENTER") ) { return ALIGN_CENTER; }
		if (HX_FIELD_EQ(inName,"getCharacter") ) { return getCharacter_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"autoUpperCase") ) { return autoUpperCase; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLongestLine") ) { return getLongestLine_dyn(); }
		if (HX_FIELD_EQ(inName,"characterWidth") ) { return characterWidth; }
		if (HX_FIELD_EQ(inName,"customSpacingY") ) { return customSpacingY; }
		if (HX_FIELD_EQ(inName,"customSpacingX") ) { return customSpacingX; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"characterPerRow") ) { return characterPerRow; }
		if (HX_FIELD_EQ(inName,"characterHeight") ) { return characterHeight; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"characterSpacingY") ) { return characterSpacingY; }
		if (HX_FIELD_EQ(inName,"characterSpacingX") ) { return characterSpacingX; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"buildBitmapFontText") ) { return buildBitmapFontText_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"removeUnsupportedCharacters") ) { return removeUnsupportedCharacters_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapFont_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontSet") ) { fontSet=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grabData") ) { grabData=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TEXT_SET3") ) { TEXT_SET3=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXT_SET4") ) { TEXT_SET4=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXT_SET5") ) { TEXT_SET5=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXT_SET6") ) { TEXT_SET6=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXT_SET7") ) { TEXT_SET7=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXT_SET8") ) { TEXT_SET8=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXT_SET9") ) { TEXT_SET9=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multiLine") ) { multiLine=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ALIGN_LEFT") ) { ALIGN_LEFT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXT_SET10") ) { TEXT_SET10=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXT_SET11") ) { TEXT_SET11=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ALIGN_RIGHT") ) { ALIGN_RIGHT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ALIGN_CENTER") ) { ALIGN_CENTER=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"autoUpperCase") ) { autoUpperCase=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"characterWidth") ) { characterWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"customSpacingY") ) { customSpacingY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"customSpacingX") ) { customSpacingX=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"characterPerRow") ) { characterPerRow=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"characterHeight") ) { characterHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"characterSpacingY") ) { characterSpacingY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"characterSpacingX") ) { characterSpacingX=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("grabData"));
	outFields->push(HX_CSTRING("characterPerRow"));
	outFields->push(HX_CSTRING("characterSpacingY"));
	outFields->push(HX_CSTRING("characterSpacingX"));
	outFields->push(HX_CSTRING("characterHeight"));
	outFields->push(HX_CSTRING("characterWidth"));
	outFields->push(HX_CSTRING("offsetY"));
	outFields->push(HX_CSTRING("offsetX"));
	outFields->push(HX_CSTRING("fontSet"));
	outFields->push(HX_CSTRING("_text"));
	outFields->push(HX_CSTRING("customSpacingY"));
	outFields->push(HX_CSTRING("customSpacingX"));
	outFields->push(HX_CSTRING("autoUpperCase"));
	outFields->push(HX_CSTRING("multiLine"));
	outFields->push(HX_CSTRING("align"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ALIGN_LEFT"),
	HX_CSTRING("ALIGN_RIGHT"),
	HX_CSTRING("ALIGN_CENTER"),
	HX_CSTRING("TEXT_SET1"),
	HX_CSTRING("TEXT_SET2"),
	HX_CSTRING("TEXT_SET25"),
	HX_CSTRING("TEXT_SET3"),
	HX_CSTRING("TEXT_SET4"),
	HX_CSTRING("TEXT_SET5"),
	HX_CSTRING("TEXT_SET6"),
	HX_CSTRING("TEXT_SET7"),
	HX_CSTRING("TEXT_SET8"),
	HX_CSTRING("TEXT_SET9"),
	HX_CSTRING("TEXT_SET10"),
	HX_CSTRING("TEXT_SET11"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("removeUnsupportedCharacters"),
	HX_CSTRING("getLongestLine"),
	HX_CSTRING("pasteLine"),
	HX_CSTRING("getCharacter"),
	HX_CSTRING("buildBitmapFontText"),
	HX_CSTRING("setText"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("grabData"),
	HX_CSTRING("characterPerRow"),
	HX_CSTRING("characterSpacingY"),
	HX_CSTRING("characterSpacingX"),
	HX_CSTRING("characterHeight"),
	HX_CSTRING("characterWidth"),
	HX_CSTRING("offsetY"),
	HX_CSTRING("offsetX"),
	HX_CSTRING("fontSet"),
	HX_CSTRING("_text"),
	HX_CSTRING("customSpacingY"),
	HX_CSTRING("customSpacingX"),
	HX_CSTRING("autoUpperCase"),
	HX_CSTRING("multiLine"),
	HX_CSTRING("align"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFont_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::ALIGN_LEFT,"ALIGN_LEFT");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::ALIGN_RIGHT,"ALIGN_RIGHT");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::ALIGN_CENTER,"ALIGN_CENTER");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::TEXT_SET1,"TEXT_SET1");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::TEXT_SET2,"TEXT_SET2");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::TEXT_SET25,"TEXT_SET25");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::TEXT_SET3,"TEXT_SET3");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::TEXT_SET4,"TEXT_SET4");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::TEXT_SET5,"TEXT_SET5");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::TEXT_SET6,"TEXT_SET6");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::TEXT_SET7,"TEXT_SET7");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::TEXT_SET8,"TEXT_SET8");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::TEXT_SET9,"TEXT_SET9");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::TEXT_SET10,"TEXT_SET10");
	HX_MARK_MEMBER_NAME(BitmapFont_obj::TEXT_SET11,"TEXT_SET11");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::ALIGN_LEFT,"ALIGN_LEFT");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::ALIGN_RIGHT,"ALIGN_RIGHT");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::ALIGN_CENTER,"ALIGN_CENTER");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::TEXT_SET1,"TEXT_SET1");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::TEXT_SET2,"TEXT_SET2");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::TEXT_SET25,"TEXT_SET25");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::TEXT_SET3,"TEXT_SET3");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::TEXT_SET4,"TEXT_SET4");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::TEXT_SET5,"TEXT_SET5");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::TEXT_SET6,"TEXT_SET6");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::TEXT_SET7,"TEXT_SET7");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::TEXT_SET8,"TEXT_SET8");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::TEXT_SET9,"TEXT_SET9");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::TEXT_SET10,"TEXT_SET10");
	HX_VISIT_MEMBER_NAME(BitmapFont_obj::TEXT_SET11,"TEXT_SET11");
};

Class BitmapFont_obj::__mClass;

void BitmapFont_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.BitmapFont"), hx::TCanCast< BitmapFont_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BitmapFont_obj::__boot()
{
	ALIGN_LEFT= HX_CSTRING("left");
	ALIGN_RIGHT= HX_CSTRING("right");
	ALIGN_CENTER= HX_CSTRING("center");
	TEXT_SET1= HX_CSTRING(" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~");
	TEXT_SET2= HX_CSTRING(" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	TEXT_SET25= HX_CSTRING(" !\"'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	TEXT_SET3= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ");
	TEXT_SET4= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZ 0123456789");
	TEXT_SET5= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZ.,/() '!?-*:0123456789");
	TEXT_SET6= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZ!?:;0123456789\"(),-.' ");
	TEXT_SET7= HX_CSTRING("AGMSY+:4BHNTZ!;5CIOU.?06DJPV,(17EKQW\")28FLRX-'39");
	TEXT_SET8= HX_CSTRING("0123456789 .ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	TEXT_SET9= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZ()-0123456789.:,'\"?!");
	TEXT_SET10= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	TEXT_SET11= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZ.,\"-+!?()':;0123456789");
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
