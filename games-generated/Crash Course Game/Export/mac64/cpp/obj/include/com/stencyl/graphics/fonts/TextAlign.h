#ifndef INCLUDED_com_stencyl_graphics_fonts_TextAlign
#define INCLUDED_com_stencyl_graphics_fonts_TextAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,stencyl,graphics,fonts,TextAlign)
namespace com{
namespace stencyl{
namespace graphics{
namespace fonts{


class HXCPP_CLASS_ATTRIBUTES  TextAlign_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextAlign_obj OBJ_;
		TextAlign_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TextAlign_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TextAlign_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextAlign"); }

		static int LEFT;
		static int RIGHT;
		static int CENTER;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace fonts

#endif /* INCLUDED_com_stencyl_graphics_fonts_TextAlign */ 
