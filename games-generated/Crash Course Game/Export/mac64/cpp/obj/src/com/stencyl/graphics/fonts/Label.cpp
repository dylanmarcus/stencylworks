#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_fonts_BitmapFont
#include <com/stencyl/graphics/fonts/BitmapFont.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_fonts_DefaultFontGenerator
#include <com/stencyl/graphics/fonts/DefaultFontGenerator.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_fonts_Label
#include <com/stencyl/graphics/fonts/Label.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace stencyl{
namespace graphics{
namespace fonts{

Void Label_obj::__construct(::com::stencyl::graphics::fonts::BitmapFont pFont)
{
HX_STACK_PUSH("Label::new","com/stencyl/graphics/fonts/Label.hx",54);
{
	HX_STACK_LINE(55)
	super::__construct();
	HX_STACK_LINE(57)
	this->canvas = this->get_graphics();
	HX_STACK_LINE(59)
	this->_text = HX_CSTRING("");
	HX_STACK_LINE(60)
	this->_color = (int)0;
	HX_STACK_LINE(61)
	this->_useColor = true;
	HX_STACK_LINE(62)
	this->_outline = false;
	HX_STACK_LINE(63)
	this->_outlineColor = (int)0;
	HX_STACK_LINE(64)
	this->_shadow = false;
	HX_STACK_LINE(65)
	this->_shadowColor = (int)0;
	HX_STACK_LINE(66)
	this->_background = false;
	HX_STACK_LINE(67)
	this->_backgroundColor = (int)16777215;
	HX_STACK_LINE(68)
	this->_alignment = (int)1;
	HX_STACK_LINE(69)
	this->_padding = (int)0;
	HX_STACK_LINE(70)
	this->_pendingTextChange = false;
	HX_STACK_LINE(71)
	this->_fieldWidth = (int)1;
	HX_STACK_LINE(72)
	this->_multiLine = false;
	HX_STACK_LINE(74)
	this->_lineSpacing = (int)0;
	HX_STACK_LINE(75)
	this->_letterSpacing = (int)0;
	HX_STACK_LINE(76)
	this->_fontScale = (int)1;
	HX_STACK_LINE(77)
	this->_autoUpperCase = false;
	HX_STACK_LINE(78)
	this->_fixedWidth = true;
	HX_STACK_LINE(79)
	this->_wordWrap = true;
	HX_STACK_LINE(80)
	this->_alpha = (int)1;
	HX_STACK_LINE(82)
	if (((pFont == null()))){
		HX_STACK_LINE(84)
		if (((::com::stencyl::graphics::fonts::BitmapFont_obj::fetch(HX_CSTRING("default")) == null()))){
			HX_STACK_LINE(85)
			::com::stencyl::graphics::fonts::DefaultFontGenerator_obj::generateAndStoreDefaultFont();
		}
		HX_STACK_LINE(88)
		this->_font = ::com::stencyl::graphics::fonts::BitmapFont_obj::fetch(HX_CSTRING("default"));
	}
	else{
		HX_STACK_LINE(91)
		this->_font = pFont;
	}
	HX_STACK_LINE(102)
	this->_drawData = Array_obj< Float >::__new();
	HX_STACK_LINE(105)
	this->_pendingTextChange = true;
	HX_STACK_LINE(106)
	this->update();
}
;
	return null();
}

Label_obj::~Label_obj() { }

Dynamic Label_obj::__CreateEmpty() { return  new Label_obj; }
hx::ObjectPtr< Label_obj > Label_obj::__new(::com::stencyl::graphics::fonts::BitmapFont pFont)
{  hx::ObjectPtr< Label_obj > result = new Label_obj();
	result->__construct(pFont);
	return result;}

Dynamic Label_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Label_obj > result = new Label_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Label_obj::updateGlyphs( Dynamic __o_textGlyphs,Dynamic __o_shadowGlyphs,Dynamic __o_outlineGlyphs){
Dynamic textGlyphs = __o_textGlyphs.Default(false);
Dynamic shadowGlyphs = __o_shadowGlyphs.Default(false);
Dynamic outlineGlyphs = __o_outlineGlyphs.Default(false);
	HX_STACK_PUSH("Label::updateGlyphs","com/stencyl/graphics/fonts/Label.hx",837);
	HX_STACK_THIS(this);
	HX_STACK_ARG(textGlyphs,"textGlyphs");
	HX_STACK_ARG(shadowGlyphs,"shadowGlyphs");
	HX_STACK_ARG(outlineGlyphs,"outlineGlyphs");
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Label_obj,updateGlyphs,(void))

bool Label_obj::set_fixedWidth( bool value){
	HX_STACK_PUSH("Label::set_fixedWidth","com/stencyl/graphics/fonts/Label.hx",826);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(827)
	if (((this->_fixedWidth != value))){
		HX_STACK_LINE(829)
		this->_fixedWidth = value;
		HX_STACK_LINE(830)
		this->_pendingTextChange = true;
		HX_STACK_LINE(831)
		this->update();
	}
	HX_STACK_LINE(833)
	return this->_fixedWidth;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_fixedWidth,return )

bool Label_obj::get_fixedWidth( ){
	HX_STACK_PUSH("Label::get_fixedWidth","com/stencyl/graphics/fonts/Label.hx",821);
	HX_STACK_THIS(this);
	HX_STACK_LINE(821)
	return this->_fixedWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_fixedWidth,return )

bool Label_obj::set_wordWrap( bool value){
	HX_STACK_PUSH("Label::set_wordWrap","com/stencyl/graphics/fonts/Label.hx",808);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(809)
	if (((this->_wordWrap != value))){
		HX_STACK_LINE(811)
		this->_wordWrap = value;
		HX_STACK_LINE(812)
		this->_pendingTextChange = true;
		HX_STACK_LINE(813)
		this->update();
	}
	HX_STACK_LINE(815)
	return this->_wordWrap;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_wordWrap,return )

bool Label_obj::get_wordWrap( ){
	HX_STACK_PUSH("Label::get_wordWrap","com/stencyl/graphics/fonts/Label.hx",803);
	HX_STACK_THIS(this);
	HX_STACK_LINE(803)
	return this->_wordWrap;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_wordWrap,return )

bool Label_obj::set_autoUpperCase( bool value){
	HX_STACK_PUSH("Label::set_autoUpperCase","com/stencyl/graphics/fonts/Label.hx",788);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(789)
	if (((this->_autoUpperCase != value))){
		HX_STACK_LINE(791)
		this->_autoUpperCase = value;
		HX_STACK_LINE(792)
		if ((this->_autoUpperCase)){
			HX_STACK_LINE(793)
			this->set_text(this->_text.toUpperCase());
		}
	}
	HX_STACK_LINE(797)
	return this->_autoUpperCase;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_autoUpperCase,return )

bool Label_obj::get_autoUpperCase( ){
	HX_STACK_PUSH("Label::get_autoUpperCase","com/stencyl/graphics/fonts/Label.hx",783);
	HX_STACK_THIS(this);
	HX_STACK_LINE(783)
	return this->_autoUpperCase;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_autoUpperCase,return )

int Label_obj::set_letterSpacing( int pSpacing){
	HX_STACK_PUSH("Label::set_letterSpacing","com/stencyl/graphics/fonts/Label.hx",769);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pSpacing,"pSpacing");
	HX_STACK_LINE(770)
	int tmp = ::Math_obj::floor(::Math_obj::abs(pSpacing));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(771)
	if (((tmp != this->_letterSpacing))){
		HX_STACK_LINE(773)
		this->_letterSpacing = tmp;
		HX_STACK_LINE(774)
		this->_pendingTextChange = true;
		HX_STACK_LINE(775)
		this->update();
	}
	HX_STACK_LINE(777)
	return this->_letterSpacing;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_letterSpacing,return )

int Label_obj::get_letterSpacing( ){
	HX_STACK_PUSH("Label::get_letterSpacing","com/stencyl/graphics/fonts/Label.hx",764);
	HX_STACK_THIS(this);
	HX_STACK_LINE(764)
	return this->_letterSpacing;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_letterSpacing,return )

Float Label_obj::set_fontScale( Float pScale){
	HX_STACK_PUSH("Label::set_fontScale","com/stencyl/graphics/fonts/Label.hx",749);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pScale,"pScale");
	HX_STACK_LINE(750)
	Float tmp = ::Math_obj::abs(pScale);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(751)
	if (((tmp != this->_fontScale))){
		HX_STACK_LINE(753)
		this->_fontScale = tmp;
		HX_STACK_LINE(754)
		this->updateGlyphs(true,this->_shadow,this->_outline);
		HX_STACK_LINE(755)
		this->_pendingTextChange = true;
		HX_STACK_LINE(756)
		this->update();
	}
	HX_STACK_LINE(758)
	return pScale;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_fontScale,return )

Float Label_obj::get_fontScale( ){
	HX_STACK_PUSH("Label::get_fontScale","com/stencyl/graphics/fonts/Label.hx",744);
	HX_STACK_THIS(this);
	HX_STACK_LINE(744)
	return this->_fontScale;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_fontScale,return )

Float Label_obj::getAlpha( ){
	HX_STACK_PUSH("Label::getAlpha","com/stencyl/graphics/fonts/Label.hx",734);
	HX_STACK_THIS(this);
	HX_STACK_LINE(734)
	return this->_alpha;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,getAlpha,return )

Void Label_obj::setAlpha( Float pAlpha){
{
		HX_STACK_PUSH("Label::setAlpha","com/stencyl/graphics/fonts/Label.hx",720);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pAlpha,"pAlpha");
		HX_STACK_LINE(720)
		if (((this->_alpha != pAlpha))){
			HX_STACK_LINE(723)
			this->_alpha = pAlpha;
			HX_STACK_LINE(727)
			this->_pendingTextChange = true;
			HX_STACK_LINE(728)
			this->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,setAlpha,(void))

int Label_obj::set_lineSpacing( int pSpacing){
	HX_STACK_PUSH("Label::set_lineSpacing","com/stencyl/graphics/fonts/Label.hx",709);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pSpacing,"pSpacing");
	HX_STACK_LINE(710)
	if (((this->_lineSpacing != pSpacing))){
		HX_STACK_LINE(712)
		this->_lineSpacing = ::Math_obj::floor(::Math_obj::abs(pSpacing));
		HX_STACK_LINE(713)
		this->_pendingTextChange = true;
		HX_STACK_LINE(714)
		this->update();
	}
	HX_STACK_LINE(716)
	return pSpacing;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_lineSpacing,return )

int Label_obj::get_lineSpacing( ){
	HX_STACK_PUSH("Label::get_lineSpacing","com/stencyl/graphics/fonts/Label.hx",704);
	HX_STACK_THIS(this);
	HX_STACK_LINE(704)
	return this->_lineSpacing;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_lineSpacing,return )

::com::stencyl::graphics::fonts::BitmapFont Label_obj::set_font( ::com::stencyl::graphics::fonts::BitmapFont pFont){
	HX_STACK_PUSH("Label::set_font","com/stencyl/graphics/fonts/Label.hx",687);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pFont,"pFont");
	HX_STACK_LINE(688)
	if (((this->_font != pFont))){
		HX_STACK_LINE(690)
		this->_font = pFont;
		HX_STACK_LINE(691)
		this->updateGlyphs(true,this->_shadow,this->_outline);
		HX_STACK_LINE(692)
		this->_pendingTextChange = true;
		HX_STACK_LINE(693)
		this->update();
	}
	HX_STACK_LINE(695)
	return pFont;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_font,return )

::com::stencyl::graphics::fonts::BitmapFont Label_obj::get_font( ){
	HX_STACK_PUSH("Label::get_font","com/stencyl/graphics/fonts/Label.hx",682);
	HX_STACK_THIS(this);
	HX_STACK_LINE(682)
	return this->_font;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_font,return )

int Label_obj::set_outlineColor( int value){
	HX_STACK_PUSH("Label::set_outlineColor","com/stencyl/graphics/fonts/Label.hx",665);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(666)
	if (((this->_outlineColor != value))){
		HX_STACK_LINE(668)
		this->_outlineColor = value;
		HX_STACK_LINE(669)
		this->updateGlyphs(false,false,this->_outline);
		HX_STACK_LINE(670)
		this->_pendingTextChange = true;
		HX_STACK_LINE(671)
		this->update();
	}
	HX_STACK_LINE(673)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_outlineColor,return )

int Label_obj::get_outlineColor( ){
	HX_STACK_PUSH("Label::get_outlineColor","com/stencyl/graphics/fonts/Label.hx",660);
	HX_STACK_THIS(this);
	HX_STACK_LINE(660)
	return this->_outlineColor;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_outlineColor,return )

bool Label_obj::set_outline( bool value){
	HX_STACK_PUSH("Label::set_outline","com/stencyl/graphics/fonts/Label.hx",642);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(643)
	if (((this->_outline != value))){
		HX_STACK_LINE(645)
		this->_outline = value;
		HX_STACK_LINE(646)
		this->_shadow = false;
		HX_STACK_LINE(647)
		this->updateGlyphs(false,false,true);
		HX_STACK_LINE(648)
		this->_pendingTextChange = true;
		HX_STACK_LINE(649)
		this->update();
	}
	HX_STACK_LINE(651)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_outline,return )

bool Label_obj::get_outline( ){
	HX_STACK_PUSH("Label::get_outline","com/stencyl/graphics/fonts/Label.hx",637);
	HX_STACK_THIS(this);
	HX_STACK_LINE(637)
	return this->_outline;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_outline,return )

bool Label_obj::set_multiLine( bool pMultiLine){
	HX_STACK_PUSH("Label::set_multiLine","com/stencyl/graphics/fonts/Label.hx",621);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pMultiLine,"pMultiLine");
	HX_STACK_LINE(622)
	if (((this->_multiLine != pMultiLine))){
		HX_STACK_LINE(624)
		this->_multiLine = pMultiLine;
		HX_STACK_LINE(625)
		this->_pendingTextChange = true;
		HX_STACK_LINE(626)
		this->update();
	}
	HX_STACK_LINE(628)
	return pMultiLine;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_multiLine,return )

bool Label_obj::get_multiLine( ){
	HX_STACK_PUSH("Label::get_multiLine","com/stencyl/graphics/fonts/Label.hx",616);
	HX_STACK_THIS(this);
	HX_STACK_LINE(616)
	return this->_multiLine;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_multiLine,return )

int Label_obj::set_alignment( int pAlignment){
	HX_STACK_PUSH("Label::set_alignment","com/stencyl/graphics/fonts/Label.hx",600);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pAlignment,"pAlignment");
	HX_STACK_LINE(601)
	if (((this->_alignment != pAlignment))){
		HX_STACK_LINE(603)
		this->_alignment = pAlignment;
		HX_STACK_LINE(604)
		this->_pendingTextChange = true;
		HX_STACK_LINE(605)
		this->update();
	}
	HX_STACK_LINE(607)
	return pAlignment;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_alignment,return )

int Label_obj::get_alignment( ){
	HX_STACK_PUSH("Label::get_alignment","com/stencyl/graphics/fonts/Label.hx",595);
	HX_STACK_THIS(this);
	HX_STACK_LINE(595)
	return this->_alignment;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_alignment,return )

int Label_obj::setWidth( int pWidth){
	HX_STACK_PUSH("Label::setWidth","com/stencyl/graphics/fonts/Label.hx",573);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pWidth,"pWidth");
	HX_STACK_LINE(574)
	if (((pWidth < (int)1))){
		HX_STACK_LINE(575)
		pWidth = (int)1;
	}
	HX_STACK_LINE(578)
	if (((pWidth != this->_fieldWidth))){
		HX_STACK_LINE(580)
		this->_fieldWidth = pWidth;
		HX_STACK_LINE(581)
		this->_pendingTextChange = true;
		HX_STACK_LINE(582)
		this->update();
	}
	HX_STACK_LINE(585)
	return pWidth;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,setWidth,return )

bool Label_obj::set_useColor( bool value){
	HX_STACK_PUSH("Label::set_useColor","com/stencyl/graphics/fonts/Label.hx",558);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(559)
	if (((this->_useColor != value))){
		HX_STACK_LINE(561)
		this->_useColor = value;
		HX_STACK_LINE(562)
		this->updateGlyphs(true,false,false);
		HX_STACK_LINE(563)
		this->_pendingTextChange = true;
		HX_STACK_LINE(564)
		this->update();
	}
	HX_STACK_LINE(566)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_useColor,return )

bool Label_obj::get_useColor( ){
	HX_STACK_PUSH("Label::get_useColor","com/stencyl/graphics/fonts/Label.hx",553);
	HX_STACK_THIS(this);
	HX_STACK_LINE(553)
	return this->_useColor;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_useColor,return )

int Label_obj::set_color( int value){
	HX_STACK_PUSH("Label::set_color","com/stencyl/graphics/fonts/Label.hx",539);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(540)
	if (((this->_color != value))){
		HX_STACK_LINE(542)
		this->_color = value;
		HX_STACK_LINE(543)
		this->updateGlyphs(true,false,false);
		HX_STACK_LINE(544)
		this->_pendingTextChange = true;
		HX_STACK_LINE(545)
		this->update();
	}
	HX_STACK_LINE(547)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_color,return )

int Label_obj::get_color( ){
	HX_STACK_PUSH("Label::get_color","com/stencyl/graphics/fonts/Label.hx",534);
	HX_STACK_THIS(this);
	HX_STACK_LINE(534)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_color,return )

int Label_obj::set_padding( int value){
	HX_STACK_PUSH("Label::set_padding","com/stencyl/graphics/fonts/Label.hx",518);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(519)
	if (((this->_padding != value))){
		HX_STACK_LINE(521)
		this->_padding = value;
		HX_STACK_LINE(522)
		this->_pendingTextChange = true;
		HX_STACK_LINE(523)
		this->update();
	}
	HX_STACK_LINE(525)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_padding,return )

int Label_obj::get_padding( ){
	HX_STACK_PUSH("Label::get_padding","com/stencyl/graphics/fonts/Label.hx",513);
	HX_STACK_THIS(this);
	HX_STACK_LINE(513)
	return this->_padding;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_padding,return )

int Label_obj::set_shadowColor( int value){
	HX_STACK_PUSH("Label::set_shadowColor","com/stencyl/graphics/fonts/Label.hx",495);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(496)
	if (((this->_shadowColor != value))){
		HX_STACK_LINE(498)
		this->_shadowColor = value;
		HX_STACK_LINE(499)
		this->updateGlyphs(false,this->_shadow,false);
		HX_STACK_LINE(500)
		this->_pendingTextChange = true;
		HX_STACK_LINE(501)
		this->update();
	}
	HX_STACK_LINE(504)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_shadowColor,return )

int Label_obj::get_shadowColor( ){
	HX_STACK_PUSH("Label::get_shadowColor","com/stencyl/graphics/fonts/Label.hx",490);
	HX_STACK_THIS(this);
	HX_STACK_LINE(490)
	return this->_shadowColor;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_shadowColor,return )

bool Label_obj::set_shadow( bool value){
	HX_STACK_PUSH("Label::set_shadow","com/stencyl/graphics/fonts/Label.hx",471);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(472)
	if (((this->_shadow != value))){
		HX_STACK_LINE(474)
		this->_shadow = value;
		HX_STACK_LINE(475)
		this->_outline = false;
		HX_STACK_LINE(476)
		this->updateGlyphs(false,this->_shadow,false);
		HX_STACK_LINE(477)
		this->_pendingTextChange = true;
		HX_STACK_LINE(478)
		this->update();
	}
	HX_STACK_LINE(481)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_shadow,return )

bool Label_obj::get_shadow( ){
	HX_STACK_PUSH("Label::get_shadow","com/stencyl/graphics/fonts/Label.hx",466);
	HX_STACK_THIS(this);
	HX_STACK_LINE(466)
	return this->_shadow;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_shadow,return )

int Label_obj::set_backgroundColor( int value){
	HX_STACK_PUSH("Label::set_backgroundColor","com/stencyl/graphics/fonts/Label.hx",447);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(448)
	if (((this->_backgroundColor != value))){
		HX_STACK_LINE(450)
		this->_backgroundColor = value;
		HX_STACK_LINE(451)
		if ((this->_background)){
			HX_STACK_LINE(453)
			this->_pendingTextChange = true;
			HX_STACK_LINE(454)
			this->update();
		}
	}
	HX_STACK_LINE(457)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_backgroundColor,return )

int Label_obj::get_backgroundColor( ){
	HX_STACK_PUSH("Label::get_backgroundColor","com/stencyl/graphics/fonts/Label.hx",442);
	HX_STACK_THIS(this);
	HX_STACK_LINE(442)
	return this->_backgroundColor;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_backgroundColor,return )

bool Label_obj::set_background( bool value){
	HX_STACK_PUSH("Label::set_background","com/stencyl/graphics/fonts/Label.hx",426);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(427)
	if (((this->_background != value))){
		HX_STACK_LINE(429)
		this->_background = value;
		HX_STACK_LINE(430)
		this->_pendingTextChange = true;
		HX_STACK_LINE(431)
		this->update();
	}
	HX_STACK_LINE(433)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_background,return )

bool Label_obj::get_background( ){
	HX_STACK_PUSH("Label::get_background","com/stencyl/graphics/fonts/Label.hx",421);
	HX_STACK_THIS(this);
	HX_STACK_LINE(421)
	return this->_background;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_background,return )

Void Label_obj::update( ){
{
		HX_STACK_PUSH("Label::update","com/stencyl/graphics/fonts/Label.hx",405);
		HX_STACK_THIS(this);
		HX_STACK_LINE(405)
		if ((this->_pendingTextChange)){
			HX_STACK_LINE(407)
			this->updateBitmapData();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,update,(void))

Void Label_obj::updateBitmapData( ){
{
		HX_STACK_PUSH("Label::updateBitmapData","com/stencyl/graphics/fonts/Label.hx",159);
		HX_STACK_THIS(this);
		HX_STACK_LINE(160)
		if (((this->_font == null()))){
			HX_STACK_LINE(161)
			return null();
		}
		HX_STACK_LINE(165)
		int calcFieldWidth = this->_fieldWidth;		HX_STACK_VAR(calcFieldWidth,"calcFieldWidth");
		HX_STACK_LINE(166)
		Array< ::String > rows = Array_obj< ::String >::__new();		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(170)
		int fontHeight = this->_font->getFontHeight();		HX_STACK_VAR(fontHeight,"fontHeight");
		HX_STACK_LINE(172)
		int alignment = this->_alignment;		HX_STACK_VAR(alignment,"alignment");
		HX_STACK_LINE(175)
		bool lineComplete;		HX_STACK_VAR(lineComplete,"lineComplete");
		HX_STACK_LINE(178)
		Array< ::String > lines = this->_text.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
		HX_STACK_LINE(179)
		int i = (int)-1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(180)
		int j = (int)-1;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(181)
		if ((!(this->_multiLine))){
			HX_STACK_LINE(182)
			lines = Array_obj< ::String >::__new().Add(lines->__get((int)0));
		}
		HX_STACK_LINE(186)
		int wordLength;		HX_STACK_VAR(wordLength,"wordLength");
		HX_STACK_LINE(187)
		::String word;		HX_STACK_VAR(word,"word");
		HX_STACK_LINE(188)
		::String tempStr;		HX_STACK_VAR(tempStr,"tempStr");
		HX_STACK_LINE(189)
		while(((++(i) < lines->length))){
			HX_STACK_LINE(190)
			if ((this->_fixedWidth)){
				HX_STACK_LINE(193)
				lineComplete = false;
				HX_STACK_LINE(194)
				Array< ::String > words = lines->__get(i).split(HX_CSTRING(" "));		HX_STACK_VAR(words,"words");
				HX_STACK_LINE(196)
				if (((words->length > (int)0))){
					HX_STACK_LINE(198)
					int wordPos = (int)0;		HX_STACK_VAR(wordPos,"wordPos");
					HX_STACK_LINE(199)
					::String txt = HX_CSTRING("");		HX_STACK_VAR(txt,"txt");
					HX_STACK_LINE(200)
					while((!(lineComplete))){
						HX_STACK_LINE(202)
						word = words->__get(wordPos);
						HX_STACK_LINE(203)
						::String currentRow = ((txt + word) + HX_CSTRING(" "));		HX_STACK_VAR(currentRow,"currentRow");
						HX_STACK_LINE(204)
						bool changed = false;		HX_STACK_VAR(changed,"changed");
						HX_STACK_LINE(206)
						if ((this->_wordWrap)){
							HX_STACK_LINE(207)
							if (((this->_font->getTextWidth(currentRow,this->_letterSpacing,this->_fontScale) > this->_fieldWidth))){
								HX_STACK_LINE(210)
								if (((txt == HX_CSTRING("")))){
									HX_STACK_LINE(211)
									words->splice((int)0,(int)1);
								}
								else{
									HX_STACK_LINE(215)
									rows->push(txt.substr((int)0,(txt.length - (int)1)));
								}
								HX_STACK_LINE(219)
								txt = HX_CSTRING("");
								HX_STACK_LINE(220)
								if ((this->_multiLine)){
									HX_STACK_LINE(221)
									words->splice((int)0,wordPos);
								}
								else{
									HX_STACK_LINE(225)
									words->splice((int)0,words->length);
								}
								HX_STACK_LINE(228)
								wordPos = (int)0;
								HX_STACK_LINE(229)
								changed = true;
							}
							else{
								HX_STACK_LINE(233)
								hx::AddEq(txt,(word + HX_CSTRING(" ")));
								HX_STACK_LINE(234)
								(wordPos)++;
							}
						}
						else{
							HX_STACK_LINE(239)
							if (((this->_font->getTextWidth(currentRow,this->_letterSpacing,this->_fontScale) > this->_fieldWidth))){
								HX_STACK_LINE(242)
								j = (int)0;
								HX_STACK_LINE(243)
								tempStr = HX_CSTRING("");
								HX_STACK_LINE(244)
								wordLength = word.length;
								HX_STACK_LINE(245)
								while(((j < wordLength))){
									HX_STACK_LINE(247)
									currentRow = (txt + word.charAt(j));
									HX_STACK_LINE(248)
									if (((this->_font->getTextWidth(currentRow,this->_letterSpacing,this->_fontScale) > this->_fieldWidth))){
										HX_STACK_LINE(250)
										rows->push(txt.substr((int)0,(txt.length - (int)1)));
										HX_STACK_LINE(251)
										txt = HX_CSTRING("");
										HX_STACK_LINE(252)
										word = HX_CSTRING("");
										HX_STACK_LINE(253)
										wordPos = words->length;
										HX_STACK_LINE(254)
										j = wordLength;
										HX_STACK_LINE(255)
										changed = true;
									}
									else{
										HX_STACK_LINE(258)
										hx::AddEq(txt,word.charAt(j));
									}
									HX_STACK_LINE(261)
									(j)++;
								}
							}
							else{
								HX_STACK_LINE(266)
								hx::AddEq(txt,(word + HX_CSTRING(" ")));
								HX_STACK_LINE(267)
								(wordPos)++;
							}
						}
						HX_STACK_LINE(271)
						if (((wordPos >= words->length))){
							HX_STACK_LINE(273)
							if ((!(changed))){
								HX_STACK_LINE(275)
								::String subText = txt.substr((int)0,(txt.length - (int)1));		HX_STACK_VAR(subText,"subText");
								HX_STACK_LINE(276)
								calcFieldWidth = ::Math_obj::floor(::Math_obj::max(calcFieldWidth,this->_font->getTextWidth(subText,this->_letterSpacing,this->_fontScale)));
								HX_STACK_LINE(277)
								rows->push(subText);
							}
							HX_STACK_LINE(279)
							lineComplete = true;
						}
					}
				}
				else{
					HX_STACK_LINE(284)
					rows->push(HX_CSTRING(""));
				}
			}
			else{
				HX_STACK_LINE(290)
				calcFieldWidth = ::Math_obj::floor(::Math_obj::max(calcFieldWidth,this->_font->getTextWidth(lines->__get(i),this->_letterSpacing,this->_fontScale)));
				HX_STACK_LINE(291)
				rows->push(lines->__get(i));
			}
		}
		HX_STACK_LINE(295)
		int finalWidth = ((calcFieldWidth + (this->_padding * (int)2)) + ((  ((this->_outline)) ? int((int)2) : int((int)0) )));		HX_STACK_VAR(finalWidth,"finalWidth");
		HX_STACK_LINE(299)
		int finalHeight = (::Math_obj::floor(((this->_padding * (int)2) + ::Math_obj::max((int)1,((((rows->length * fontHeight) * this->_fontScale) + ((  ((this->_shadow)) ? int((int)1) : int((int)0) ))) + ((  ((this->_outline)) ? int((int)2) : int((int)0) )))))) + ((  (((rows->length >= (int)1))) ? int((this->_lineSpacing * ((rows->length - (int)1)))) : int((int)0) )));		HX_STACK_VAR(finalHeight,"finalHeight");
		HX_STACK_LINE(322)
		this->get_graphics()->clear();
		HX_STACK_LINE(323)
		if (((this->_background == true))){
			HX_STACK_LINE(325)
			this->get_graphics()->beginFill(this->_backgroundColor,this->_alpha);
			HX_STACK_LINE(326)
			this->get_graphics()->drawRect((int)0,(int)0,finalWidth,finalHeight);
			HX_STACK_LINE(327)
			this->get_graphics()->endFill();
		}
		HX_STACK_LINE(329)
		this->_drawData->splice((int)0,this->_drawData->length);
		HX_STACK_LINE(333)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(335)
			while(((_g < rows->length))){
				HX_STACK_LINE(335)
				::String t = rows->__get(_g);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(335)
				++(_g);
				HX_STACK_LINE(337)
				int ox = (int)0;		HX_STACK_VAR(ox,"ox");
				HX_STACK_LINE(338)
				int oy = (int)0;		HX_STACK_VAR(oy,"oy");
				HX_STACK_LINE(339)
				if (((alignment == (int)3))){
					HX_STACK_LINE(340)
					if ((this->_fixedWidth)){
						HX_STACK_LINE(342)
						ox = ::Math_obj::floor((Float(((this->_fieldWidth - this->_font->getTextWidth(t,this->_letterSpacing,this->_fontScale)))) / Float((int)2)));
					}
					else{
						HX_STACK_LINE(346)
						ox = ::Math_obj::floor((Float(((finalWidth - this->_font->getTextWidth(t,this->_letterSpacing,this->_fontScale)))) / Float((int)2)));
					}
				}
				HX_STACK_LINE(350)
				if (((alignment == (int)2))){
					HX_STACK_LINE(351)
					if ((this->_fixedWidth)){
						HX_STACK_LINE(353)
						ox = (this->_fieldWidth - ::Math_obj::floor(this->_font->getTextWidth(t,this->_letterSpacing,this->_fontScale)));
					}
					else{
						HX_STACK_LINE(357)
						ox = ((finalWidth - ::Math_obj::floor(this->_font->getTextWidth(t,this->_letterSpacing,this->_fontScale))) - ((int)2 * this->get_padding()));
					}
				}
				HX_STACK_LINE(361)
				if ((this->_outline)){
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						int _g1 = (int)3;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(363)
						while(((_g2 < _g1))){
							HX_STACK_LINE(363)
							int py = (_g2)++;		HX_STACK_VAR(py,"py");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
								int _g3 = (int)3;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(365)
								while(((_g4 < _g3))){
									HX_STACK_LINE(365)
									int px = (_g4)++;		HX_STACK_VAR(px,"px");
									HX_STACK_LINE(370)
									this->_font->render(this->_drawData,t,this->_outlineColor,this->_alpha,((px + ox) + this->_padding),((py + (row * ((::Math_obj::floor((fontHeight * this->_fontScale)) + this->_lineSpacing)))) + this->_padding),this->_letterSpacing,this->_fontScale,null(),null());
								}
							}
						}
					}
					HX_STACK_LINE(374)
					hx::AddEq(ox,(int)1);
					HX_STACK_LINE(375)
					hx::AddEq(oy,(int)1);
				}
				HX_STACK_LINE(377)
				if ((this->_shadow)){
					HX_STACK_LINE(378)
					this->_font->render(this->_drawData,t,this->_shadowColor,this->_alpha,(((int)1 + ox) + this->_padding),((((int)1 + oy) + (row * ((::Math_obj::floor((fontHeight * this->_fontScale)) + this->_lineSpacing)))) + this->_padding),this->_letterSpacing,this->_fontScale,null(),null());
				}
				HX_STACK_LINE(388)
				this->_font->render(this->_drawData,t,this->_color,this->_alpha,(ox + this->_padding),((oy + (row * ((::Math_obj::floor((fontHeight * this->_fontScale)) + this->_lineSpacing)))) + this->_padding),this->_letterSpacing,this->_fontScale,null(),this->_useColor);
				HX_STACK_LINE(390)
				(row)++;
			}
		}
		HX_STACK_LINE(395)
		this->_font->drawText(this->canvas,this->_drawData);
		HX_STACK_LINE(398)
		this->_pendingTextChange = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,updateBitmapData,(void))

::String Label_obj::set_text( ::String pText){
	HX_STACK_PUSH("Label::set_text","com/stencyl/graphics/fonts/Label.hx",138);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pText,"pText");
	HX_STACK_LINE(139)
	::String tmp = pText;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	tmp = tmp.split(HX_CSTRING("\\n"))->join(HX_CSTRING("\n"));
	HX_STACK_LINE(141)
	if (((tmp != this->_text))){
		HX_STACK_LINE(143)
		this->_text = pText;
		HX_STACK_LINE(144)
		this->_text = this->_text.split(HX_CSTRING("\\n"))->join(HX_CSTRING("\n"));
		HX_STACK_LINE(145)
		if ((this->_autoUpperCase)){
			HX_STACK_LINE(146)
			this->_text = this->_text.toUpperCase();
		}
		HX_STACK_LINE(149)
		this->_pendingTextChange = true;
		HX_STACK_LINE(150)
		this->update();
	}
	HX_STACK_LINE(152)
	return this->_text;
}


HX_DEFINE_DYNAMIC_FUNC1(Label_obj,set_text,return )

::String Label_obj::get_text( ){
	HX_STACK_PUSH("Label::get_text","com/stencyl/graphics/fonts/Label.hx",133);
	HX_STACK_THIS(this);
	HX_STACK_LINE(133)
	return this->_text;
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,get_text,return )

Void Label_obj::destroy( ){
{
		HX_STACK_PUSH("Label::destroy","com/stencyl/graphics/fonts/Label.hx",113);
		HX_STACK_THIS(this);
		HX_STACK_LINE(113)
		this->_font = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Label_obj,destroy,(void))


Label_obj::Label_obj()
{
}

void Label_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Label);
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(_drawData,"_drawData");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_multiLine,"_multiLine");
	HX_MARK_MEMBER_NAME(_fieldWidth,"_fieldWidth");
	HX_MARK_MEMBER_NAME(_pendingTextChange,"_pendingTextChange");
	HX_MARK_MEMBER_NAME(_fixedWidth,"_fixedWidth");
	HX_MARK_MEMBER_NAME(_wordWrap,"_wordWrap");
	HX_MARK_MEMBER_NAME(_autoUpperCase,"_autoUpperCase");
	HX_MARK_MEMBER_NAME(_fontScale,"_fontScale");
	HX_MARK_MEMBER_NAME(_letterSpacing,"_letterSpacing");
	HX_MARK_MEMBER_NAME(_lineSpacing,"_lineSpacing");
	HX_MARK_MEMBER_NAME(_padding,"_padding");
	HX_MARK_MEMBER_NAME(_alignment,"_alignment");
	HX_MARK_MEMBER_NAME(_backgroundColor,"_backgroundColor");
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_shadowColor,"_shadowColor");
	HX_MARK_MEMBER_NAME(_shadow,"_shadow");
	HX_MARK_MEMBER_NAME(_outlineColor,"_outlineColor");
	HX_MARK_MEMBER_NAME(_outline,"_outline");
	HX_MARK_MEMBER_NAME(_useColor,"_useColor");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_font,"_font");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Label_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(_drawData,"_drawData");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_multiLine,"_multiLine");
	HX_VISIT_MEMBER_NAME(_fieldWidth,"_fieldWidth");
	HX_VISIT_MEMBER_NAME(_pendingTextChange,"_pendingTextChange");
	HX_VISIT_MEMBER_NAME(_fixedWidth,"_fixedWidth");
	HX_VISIT_MEMBER_NAME(_wordWrap,"_wordWrap");
	HX_VISIT_MEMBER_NAME(_autoUpperCase,"_autoUpperCase");
	HX_VISIT_MEMBER_NAME(_fontScale,"_fontScale");
	HX_VISIT_MEMBER_NAME(_letterSpacing,"_letterSpacing");
	HX_VISIT_MEMBER_NAME(_lineSpacing,"_lineSpacing");
	HX_VISIT_MEMBER_NAME(_padding,"_padding");
	HX_VISIT_MEMBER_NAME(_alignment,"_alignment");
	HX_VISIT_MEMBER_NAME(_backgroundColor,"_backgroundColor");
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_shadowColor,"_shadowColor");
	HX_VISIT_MEMBER_NAME(_shadow,"_shadow");
	HX_VISIT_MEMBER_NAME(_outlineColor,"_outlineColor");
	HX_VISIT_MEMBER_NAME(_outline,"_outline");
	HX_VISIT_MEMBER_NAME(_useColor,"_useColor");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_font,"_font");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Label_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return get_font(); }
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		if (HX_FIELD_EQ(inName,"_font") ) { return _font; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shadow") ) { return get_shadow(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { return get_outline(); }
		if (HX_FIELD_EQ(inName,"padding") ) { return get_padding(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_shadow") ) { return _shadow; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"getAlpha") ) { return getAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"setAlpha") ) { return setAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return get_font_dyn(); }
		if (HX_FIELD_EQ(inName,"setWidth") ) { return setWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"useColor") ) { return get_useColor(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"_padding") ) { return _padding; }
		if (HX_FIELD_EQ(inName,"_outline") ) { return _outline; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontScale") ) { return get_fontScale(); }
		if (HX_FIELD_EQ(inName,"multiLine") ) { return get_multiLine(); }
		if (HX_FIELD_EQ(inName,"alignment") ) { return get_alignment(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"_drawData") ) { return _drawData; }
		if (HX_FIELD_EQ(inName,"_wordWrap") ) { return _wordWrap; }
		if (HX_FIELD_EQ(inName,"_useColor") ) { return _useColor; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fixedWidth") ) { return get_fixedWidth(); }
		if (HX_FIELD_EQ(inName,"set_shadow") ) { return set_shadow_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shadow") ) { return get_shadow_dyn(); }
		if (HX_FIELD_EQ(inName,"background") ) { return get_background(); }
		if (HX_FIELD_EQ(inName,"_multiLine") ) { return _multiLine; }
		if (HX_FIELD_EQ(inName,"_fontScale") ) { return _fontScale; }
		if (HX_FIELD_EQ(inName,"_alignment") ) { return _alignment; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lineSpacing") ) { return get_lineSpacing(); }
		if (HX_FIELD_EQ(inName,"set_outline") ) { return set_outline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_outline") ) { return get_outline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return set_padding_dyn(); }
		if (HX_FIELD_EQ(inName,"get_padding") ) { return get_padding_dyn(); }
		if (HX_FIELD_EQ(inName,"shadowColor") ) { return get_shadowColor(); }
		if (HX_FIELD_EQ(inName,"_fieldWidth") ) { return _fieldWidth; }
		if (HX_FIELD_EQ(inName,"_fixedWidth") ) { return _fixedWidth; }
		if (HX_FIELD_EQ(inName,"_background") ) { return _background; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateGlyphs") ) { return updateGlyphs_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"outlineColor") ) { return get_outlineColor(); }
		if (HX_FIELD_EQ(inName,"set_useColor") ) { return set_useColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_useColor") ) { return get_useColor_dyn(); }
		if (HX_FIELD_EQ(inName,"_lineSpacing") ) { return _lineSpacing; }
		if (HX_FIELD_EQ(inName,"_shadowColor") ) { return _shadowColor; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"autoUpperCase") ) { return get_autoUpperCase(); }
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { return get_letterSpacing(); }
		if (HX_FIELD_EQ(inName,"set_fontScale") ) { return set_fontScale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontScale") ) { return get_fontScale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiLine") ) { return set_multiLine_dyn(); }
		if (HX_FIELD_EQ(inName,"get_multiLine") ) { return get_multiLine_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return set_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alignment") ) { return get_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"_outlineColor") ) { return _outlineColor; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_fixedWidth") ) { return set_fixedWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fixedWidth") ) { return get_fixedWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return set_background_dyn(); }
		if (HX_FIELD_EQ(inName,"get_background") ) { return get_background_dyn(); }
		if (HX_FIELD_EQ(inName,"_autoUpperCase") ) { return _autoUpperCase; }
		if (HX_FIELD_EQ(inName,"_letterSpacing") ) { return _letterSpacing; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_lineSpacing") ) { return set_lineSpacing_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lineSpacing") ) { return get_lineSpacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shadowColor") ) { return set_shadowColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shadowColor") ) { return get_shadowColor_dyn(); }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return get_backgroundColor(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_outlineColor") ) { return set_outlineColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_outlineColor") ) { return get_outlineColor_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBitmapData") ) { return updateBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"_backgroundColor") ) { return _backgroundColor; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_autoUpperCase") ) { return set_autoUpperCase_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoUpperCase") ) { return get_autoUpperCase_dyn(); }
		if (HX_FIELD_EQ(inName,"set_letterSpacing") ) { return set_letterSpacing_dyn(); }
		if (HX_FIELD_EQ(inName,"get_letterSpacing") ) { return get_letterSpacing_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_pendingTextChange") ) { return _pendingTextChange; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return get_backgroundColor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Label_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return set_font(inValue); }
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_font") ) { _font=inValue.Cast< ::com::stencyl::graphics::fonts::BitmapFont >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shadow") ) { return set_shadow(inValue); }
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::flash::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { return set_outline(inValue); }
		if (HX_FIELD_EQ(inName,"padding") ) { return set_padding(inValue); }
		if (HX_FIELD_EQ(inName,"_shadow") ) { _shadow=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return set_wordWrap(inValue); }
		if (HX_FIELD_EQ(inName,"useColor") ) { return set_useColor(inValue); }
		if (HX_FIELD_EQ(inName,"_padding") ) { _padding=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_outline") ) { _outline=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontScale") ) { return set_fontScale(inValue); }
		if (HX_FIELD_EQ(inName,"multiLine") ) { return set_multiLine(inValue); }
		if (HX_FIELD_EQ(inName,"alignment") ) { return set_alignment(inValue); }
		if (HX_FIELD_EQ(inName,"_drawData") ) { _drawData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_wordWrap") ) { _wordWrap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_useColor") ) { _useColor=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fixedWidth") ) { return set_fixedWidth(inValue); }
		if (HX_FIELD_EQ(inName,"background") ) { return set_background(inValue); }
		if (HX_FIELD_EQ(inName,"_multiLine") ) { _multiLine=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontScale") ) { _fontScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alignment") ) { _alignment=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lineSpacing") ) { return set_lineSpacing(inValue); }
		if (HX_FIELD_EQ(inName,"shadowColor") ) { return set_shadowColor(inValue); }
		if (HX_FIELD_EQ(inName,"_fieldWidth") ) { _fieldWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fixedWidth") ) { _fixedWidth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"outlineColor") ) { return set_outlineColor(inValue); }
		if (HX_FIELD_EQ(inName,"_lineSpacing") ) { _lineSpacing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadowColor") ) { _shadowColor=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"autoUpperCase") ) { return set_autoUpperCase(inValue); }
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { return set_letterSpacing(inValue); }
		if (HX_FIELD_EQ(inName,"_outlineColor") ) { _outlineColor=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_autoUpperCase") ) { _autoUpperCase=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_letterSpacing") ) { _letterSpacing=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return set_backgroundColor(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_backgroundColor") ) { _backgroundColor=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_pendingTextChange") ) { _pendingTextChange=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Label_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fixedWidth"));
	outFields->push(HX_CSTRING("wordWrap"));
	outFields->push(HX_CSTRING("autoUpperCase"));
	outFields->push(HX_CSTRING("letterSpacing"));
	outFields->push(HX_CSTRING("fontScale"));
	outFields->push(HX_CSTRING("lineSpacing"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("outlineColor"));
	outFields->push(HX_CSTRING("outline"));
	outFields->push(HX_CSTRING("multiLine"));
	outFields->push(HX_CSTRING("alignment"));
	outFields->push(HX_CSTRING("useColor"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("padding"));
	outFields->push(HX_CSTRING("shadowColor"));
	outFields->push(HX_CSTRING("shadow"));
	outFields->push(HX_CSTRING("backgroundColor"));
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("canvas"));
	outFields->push(HX_CSTRING("_drawData"));
	outFields->push(HX_CSTRING("_alpha"));
	outFields->push(HX_CSTRING("_multiLine"));
	outFields->push(HX_CSTRING("_fieldWidth"));
	outFields->push(HX_CSTRING("_pendingTextChange"));
	outFields->push(HX_CSTRING("_fixedWidth"));
	outFields->push(HX_CSTRING("_wordWrap"));
	outFields->push(HX_CSTRING("_autoUpperCase"));
	outFields->push(HX_CSTRING("_fontScale"));
	outFields->push(HX_CSTRING("_letterSpacing"));
	outFields->push(HX_CSTRING("_lineSpacing"));
	outFields->push(HX_CSTRING("_padding"));
	outFields->push(HX_CSTRING("_alignment"));
	outFields->push(HX_CSTRING("_backgroundColor"));
	outFields->push(HX_CSTRING("_background"));
	outFields->push(HX_CSTRING("_shadowColor"));
	outFields->push(HX_CSTRING("_shadow"));
	outFields->push(HX_CSTRING("_outlineColor"));
	outFields->push(HX_CSTRING("_outline"));
	outFields->push(HX_CSTRING("_useColor"));
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_text"));
	outFields->push(HX_CSTRING("_font"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateGlyphs"),
	HX_CSTRING("set_fixedWidth"),
	HX_CSTRING("get_fixedWidth"),
	HX_CSTRING("set_wordWrap"),
	HX_CSTRING("get_wordWrap"),
	HX_CSTRING("set_autoUpperCase"),
	HX_CSTRING("get_autoUpperCase"),
	HX_CSTRING("set_letterSpacing"),
	HX_CSTRING("get_letterSpacing"),
	HX_CSTRING("set_fontScale"),
	HX_CSTRING("get_fontScale"),
	HX_CSTRING("getAlpha"),
	HX_CSTRING("setAlpha"),
	HX_CSTRING("set_lineSpacing"),
	HX_CSTRING("get_lineSpacing"),
	HX_CSTRING("set_font"),
	HX_CSTRING("get_font"),
	HX_CSTRING("set_outlineColor"),
	HX_CSTRING("get_outlineColor"),
	HX_CSTRING("set_outline"),
	HX_CSTRING("get_outline"),
	HX_CSTRING("set_multiLine"),
	HX_CSTRING("get_multiLine"),
	HX_CSTRING("set_alignment"),
	HX_CSTRING("get_alignment"),
	HX_CSTRING("setWidth"),
	HX_CSTRING("set_useColor"),
	HX_CSTRING("get_useColor"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_color"),
	HX_CSTRING("set_padding"),
	HX_CSTRING("get_padding"),
	HX_CSTRING("set_shadowColor"),
	HX_CSTRING("get_shadowColor"),
	HX_CSTRING("set_shadow"),
	HX_CSTRING("get_shadow"),
	HX_CSTRING("set_backgroundColor"),
	HX_CSTRING("get_backgroundColor"),
	HX_CSTRING("set_background"),
	HX_CSTRING("get_background"),
	HX_CSTRING("update"),
	HX_CSTRING("updateBitmapData"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_text"),
	HX_CSTRING("destroy"),
	HX_CSTRING("canvas"),
	HX_CSTRING("_drawData"),
	HX_CSTRING("_alpha"),
	HX_CSTRING("_multiLine"),
	HX_CSTRING("_fieldWidth"),
	HX_CSTRING("_pendingTextChange"),
	HX_CSTRING("_fixedWidth"),
	HX_CSTRING("_wordWrap"),
	HX_CSTRING("_autoUpperCase"),
	HX_CSTRING("_fontScale"),
	HX_CSTRING("_letterSpacing"),
	HX_CSTRING("_lineSpacing"),
	HX_CSTRING("_padding"),
	HX_CSTRING("_alignment"),
	HX_CSTRING("_backgroundColor"),
	HX_CSTRING("_background"),
	HX_CSTRING("_shadowColor"),
	HX_CSTRING("_shadow"),
	HX_CSTRING("_outlineColor"),
	HX_CSTRING("_outline"),
	HX_CSTRING("_useColor"),
	HX_CSTRING("_color"),
	HX_CSTRING("_text"),
	HX_CSTRING("_font"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Label_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Label_obj::__mClass,"__mClass");
};

Class Label_obj::__mClass;

void Label_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.fonts.Label"), hx::TCanCast< Label_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Label_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace fonts
