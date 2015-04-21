#ifndef INCLUDED_com_stencyl_graphics_fonts_Label
#define INCLUDED_com_stencyl_graphics_fonts_Label

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,fonts,BitmapFont)
HX_DECLARE_CLASS4(com,stencyl,graphics,fonts,Label)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace com{
namespace stencyl{
namespace graphics{
namespace fonts{


class HXCPP_CLASS_ATTRIBUTES  Label_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef Label_obj OBJ_;
		Label_obj();
		Void __construct(::com::stencyl::graphics::fonts::BitmapFont pFont);

	public:
		static hx::ObjectPtr< Label_obj > __new(::com::stencyl::graphics::fonts::BitmapFont pFont);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Label_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Label"); }

		virtual Void updateGlyphs( Dynamic textGlyphs,Dynamic shadowGlyphs,Dynamic outlineGlyphs);
		Dynamic updateGlyphs_dyn();

		virtual bool set_fixedWidth( bool value);
		Dynamic set_fixedWidth_dyn();

		virtual bool get_fixedWidth( );
		Dynamic get_fixedWidth_dyn();

		virtual bool set_wordWrap( bool value);
		Dynamic set_wordWrap_dyn();

		virtual bool get_wordWrap( );
		Dynamic get_wordWrap_dyn();

		virtual bool set_autoUpperCase( bool value);
		Dynamic set_autoUpperCase_dyn();

		virtual bool get_autoUpperCase( );
		Dynamic get_autoUpperCase_dyn();

		virtual int set_letterSpacing( int pSpacing);
		Dynamic set_letterSpacing_dyn();

		virtual int get_letterSpacing( );
		Dynamic get_letterSpacing_dyn();

		virtual Float set_fontScale( Float pScale);
		Dynamic set_fontScale_dyn();

		virtual Float get_fontScale( );
		Dynamic get_fontScale_dyn();

		virtual Float getAlpha( );
		Dynamic getAlpha_dyn();

		virtual Void setAlpha( Float pAlpha);
		Dynamic setAlpha_dyn();

		virtual int set_lineSpacing( int pSpacing);
		Dynamic set_lineSpacing_dyn();

		virtual int get_lineSpacing( );
		Dynamic get_lineSpacing_dyn();

		virtual ::com::stencyl::graphics::fonts::BitmapFont set_font( ::com::stencyl::graphics::fonts::BitmapFont pFont);
		Dynamic set_font_dyn();

		virtual ::com::stencyl::graphics::fonts::BitmapFont get_font( );
		Dynamic get_font_dyn();

		virtual int set_outlineColor( int value);
		Dynamic set_outlineColor_dyn();

		virtual int get_outlineColor( );
		Dynamic get_outlineColor_dyn();

		virtual bool set_outline( bool value);
		Dynamic set_outline_dyn();

		virtual bool get_outline( );
		Dynamic get_outline_dyn();

		virtual bool set_multiLine( bool pMultiLine);
		Dynamic set_multiLine_dyn();

		virtual bool get_multiLine( );
		Dynamic get_multiLine_dyn();

		virtual int set_alignment( int pAlignment);
		Dynamic set_alignment_dyn();

		virtual int get_alignment( );
		Dynamic get_alignment_dyn();

		virtual int setWidth( int pWidth);
		Dynamic setWidth_dyn();

		virtual bool set_useColor( bool value);
		Dynamic set_useColor_dyn();

		virtual bool get_useColor( );
		Dynamic get_useColor_dyn();

		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual int set_padding( int value);
		Dynamic set_padding_dyn();

		virtual int get_padding( );
		Dynamic get_padding_dyn();

		virtual int set_shadowColor( int value);
		Dynamic set_shadowColor_dyn();

		virtual int get_shadowColor( );
		Dynamic get_shadowColor_dyn();

		virtual bool set_shadow( bool value);
		Dynamic set_shadow_dyn();

		virtual bool get_shadow( );
		Dynamic get_shadow_dyn();

		virtual int set_backgroundColor( int value);
		Dynamic set_backgroundColor_dyn();

		virtual int get_backgroundColor( );
		Dynamic get_backgroundColor_dyn();

		virtual bool set_background( bool value);
		Dynamic set_background_dyn();

		virtual bool get_background( );
		Dynamic get_background_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void updateBitmapData( );
		Dynamic updateBitmapData_dyn();

		virtual ::String set_text( ::String pText);
		Dynamic set_text_dyn();

		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		::flash::display::Graphics canvas;
		Array< Float > _drawData;
		Float _alpha;
		bool _multiLine;
		int _fieldWidth;
		bool _pendingTextChange;
		bool _fixedWidth;
		bool _wordWrap;
		bool _autoUpperCase;
		Float _fontScale;
		int _letterSpacing;
		int _lineSpacing;
		int _padding;
		int _alignment;
		int _backgroundColor;
		bool _background;
		int _shadowColor;
		bool _shadow;
		int _outlineColor;
		bool _outline;
		bool _useColor;
		int _color;
		::String _text;
		::com::stencyl::graphics::fonts::BitmapFont _font;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace fonts

#endif /* INCLUDED_com_stencyl_graphics_fonts_Label */ 
