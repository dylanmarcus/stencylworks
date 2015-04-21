#ifndef INCLUDED_com_nmefermmmtools_debug_Colors
#define INCLUDED_com_nmefermmmtools_debug_Colors

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,nmefermmmtools,debug,Colors)
namespace com{
namespace nmefermmmtools{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Colors_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Colors_obj OBJ_;
		Colors_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Colors_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Colors_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Colors"); }

		static int bg;
		static int fps;
		static int ms;
		static int mem;
		static int memmax;
		static ::String bgCSS;
		static ::String msCSS;
		static ::String fpsCSS;
		static ::String memCSS;
		static ::String memmaxCSS;
};

} // end namespace com
} // end namespace nmefermmmtools
} // end namespace debug

#endif /* INCLUDED_com_nmefermmmtools_debug_Colors */ 
