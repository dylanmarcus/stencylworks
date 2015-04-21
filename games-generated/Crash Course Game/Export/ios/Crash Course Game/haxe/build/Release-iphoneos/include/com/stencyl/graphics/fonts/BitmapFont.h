#ifndef INCLUDED_com_stencyl_graphics_fonts_BitmapFont
#define INCLUDED_com_stencyl_graphics_fonts_BitmapFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(com,stencyl,graphics,fonts,BitmapFont)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
namespace com{
namespace stencyl{
namespace graphics{
namespace fonts{


class HXCPP_CLASS_ATTRIBUTES  BitmapFont_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapFont_obj OBJ_;
		BitmapFont_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BitmapFont_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BitmapFont_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BitmapFont"); }

		virtual int get_numLetters( );
		Dynamic get_numLetters_dyn();

		int numLetters;
		virtual int getFontHeight( );
		Dynamic getFontHeight_dyn();

		virtual int getTextWidth( ::String pText,Dynamic pLetterSpacing,Dynamic pFontScale);
		Dynamic getTextWidth_dyn();

		virtual Void drawText( ::flash::display::Graphics graphics,Array< Float > drawData);
		Dynamic drawText_dyn();

		virtual int toARGB( int rgb,int newAlpha);
		Dynamic toARGB_dyn();

		virtual Void render( Array< Float > drawData,::String pText,int pColor,Float pAlpha,int pOffsetX,int pOffsetY,int pLetterSpacing,Float pScale,Dynamic pAngle,Dynamic pUseColorTransform);
		Dynamic render_dyn();

		virtual Void setGlyph( int pCharID,::flash::geom::Rectangle pRect,int pGlyphID,Dynamic pOffsetX,Dynamic pOffsetY,Dynamic pAdvanceX);
		Dynamic setGlyph_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::flash::display::BitmapData prepareBitmapData( ::flash::display::BitmapData pBitmapData,Array< ::Dynamic > pRects);
		Dynamic prepareBitmapData_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual ::com::stencyl::graphics::fonts::BitmapFont loadAngelCode( ::flash::display::BitmapData pBitmapData,::Xml pXMLData);
		Dynamic loadAngelCode_dyn();

		virtual ::com::stencyl::graphics::fonts::BitmapFont loadPixelizer( ::flash::display::BitmapData pBitmapData,::String pLetters);
		Dynamic loadPixelizer_dyn();

		::flash::geom::Point _point;
		int _maxHeight;
		::String _glyphString;
		::openfl::display::Tilesheet _tileSheet;
		int _num_letters;
		::haxe::ds::IntMap _glyphs;
		static ::haxe::ds::StringMap _storedFonts;
		static ::flash::geom::Point ZERO_POINT;
		static int _flags;
		static Void store( ::String pHandle,::com::stencyl::graphics::fonts::BitmapFont pFont);
		static Dynamic store_dyn();

		static ::com::stencyl::graphics::fonts::BitmapFont fetch( ::String pHandle);
		static Dynamic fetch_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace fonts

#endif /* INCLUDED_com_stencyl_graphics_fonts_BitmapFont */ 
