#ifndef INCLUDED_com_stencyl_graphics_fonts_FontSymbol
#define INCLUDED_com_stencyl_graphics_fonts_FontSymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,stencyl,graphics,fonts,FontSymbol)
namespace com{
namespace stencyl{
namespace graphics{
namespace fonts{


class HXCPP_CLASS_ATTRIBUTES  FontSymbol_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FontSymbol_obj OBJ_;
		FontSymbol_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FontSymbol_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FontSymbol_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FontSymbol"); }

		int tileID;
		int xadvance;
		int yoffset;
		int xoffset;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace fonts

#endif /* INCLUDED_com_stencyl_graphics_fonts_FontSymbol */ 
