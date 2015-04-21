#ifndef INCLUDED_com_stencyl_utils_Mathematics
#define INCLUDED_com_stencyl_utils_Mathematics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,utils,Mathematics)
namespace com{
namespace stencyl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Mathematics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mathematics_obj OBJ_;
		Mathematics_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Mathematics_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Mathematics_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Mathematics"); }

		static int round( Float x);
		static Dynamic round_dyn();

		static int clamp( int x,int min,int max);
		static Dynamic clamp_dyn();

		static Float fclamp( Float x,Float min,Float max);
		static Dynamic fclamp_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils

#endif /* INCLUDED_com_stencyl_utils_Mathematics */ 
