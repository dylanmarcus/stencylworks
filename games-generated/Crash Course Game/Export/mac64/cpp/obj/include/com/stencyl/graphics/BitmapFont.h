#ifndef INCLUDED_com_stencyl_graphics_BitmapFont
#define INCLUDED_com_stencyl_graphics_BitmapFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Bitmap.h>
HX_DECLARE_CLASS3(com,stencyl,graphics,BitmapFont)
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
namespace com{
namespace stencyl{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  BitmapFont_obj : public ::flash::display::Bitmap_obj{
	public:
		typedef ::flash::display::Bitmap_obj super;
		typedef BitmapFont_obj OBJ_;
		BitmapFont_obj();
		Void __construct(::String fontURL,int width,int height,::String chars,int charsPerRow,hx::Null< int >  __o_xSpacing,hx::Null< int >  __o_ySpacing,hx::Null< int >  __o_xOffset,hx::Null< int >  __o_yOffset);

	public:
		static hx::ObjectPtr< BitmapFont_obj > __new(::String fontURL,int width,int height,::String chars,int charsPerRow,hx::Null< int >  __o_xSpacing,hx::Null< int >  __o_ySpacing,hx::Null< int >  __o_xOffset,hx::Null< int >  __o_yOffset);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BitmapFont_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BitmapFont"); }

		virtual ::String removeUnsupportedCharacters( hx::Null< bool >  stripCR);
		Dynamic removeUnsupportedCharacters_dyn();

		virtual int getLongestLine( );
		Dynamic getLongestLine_dyn();

		virtual Void pasteLine( ::flash::display::BitmapData output,::String line,hx::Null< int >  x,hx::Null< int >  y,hx::Null< int >  customSpacingX);
		Dynamic pasteLine_dyn();

		virtual ::flash::display::Bitmap getCharacter( ::String _char);
		Dynamic getCharacter_dyn();

		virtual Void buildBitmapFontText( );
		Dynamic buildBitmapFontText_dyn();

		virtual Void setText( ::String content,hx::Null< bool >  multiLines,hx::Null< int >  characterSpacing,hx::Null< int >  lineSpacing,::String lineAlignment,hx::Null< bool >  allowLowerCase);
		Dynamic setText_dyn();

		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::String set_text( ::String content);
		Dynamic set_text_dyn();

		Array< ::Dynamic > grabData;
		int characterPerRow;
		int characterSpacingY;
		int characterSpacingX;
		int characterHeight;
		int characterWidth;
		int offsetY;
		int offsetX;
		::flash::display::BitmapData fontSet;
		::String _text;
		int customSpacingY;
		int customSpacingX;
		bool autoUpperCase;
		bool multiLine;
		::String align;
		static ::String ALIGN_LEFT;
		static ::String ALIGN_RIGHT;
		static ::String ALIGN_CENTER;
		static ::String TEXT_SET1;
		static ::String TEXT_SET2;
		static ::String TEXT_SET25;
		static ::String TEXT_SET3;
		static ::String TEXT_SET4;
		static ::String TEXT_SET5;
		static ::String TEXT_SET6;
		static ::String TEXT_SET7;
		static ::String TEXT_SET8;
		static ::String TEXT_SET9;
		static ::String TEXT_SET10;
		static ::String TEXT_SET11;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics

#endif /* INCLUDED_com_stencyl_graphics_BitmapFont */ 
