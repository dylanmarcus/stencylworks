#ifndef INCLUDED_com_stencyl_graphics_fonts_DefaultFontGenerator
#define INCLUDED_com_stencyl_graphics_fonts_DefaultFontGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,stencyl,graphics,fonts,DefaultFontGenerator)
namespace com{
namespace stencyl{
namespace graphics{
namespace fonts{


class HXCPP_CLASS_ATTRIBUTES  DefaultFontGenerator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DefaultFontGenerator_obj OBJ_;
		DefaultFontGenerator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DefaultFontGenerator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DefaultFontGenerator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DefaultFontGenerator"); }

		static ::String fontData;
		static Void generateAndStoreDefaultFont( );
		static Dynamic generateAndStoreDefaultFont_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace fonts

#endif /* INCLUDED_com_stencyl_graphics_fonts_DefaultFontGenerator */ 
