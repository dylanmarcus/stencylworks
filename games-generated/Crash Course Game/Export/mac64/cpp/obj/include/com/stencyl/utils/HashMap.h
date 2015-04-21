#ifndef INCLUDED_com_stencyl_utils_HashMap
#define INCLUDED_com_stencyl_utils_HashMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,utils,HashMap)
namespace com{
namespace stencyl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  HashMap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HashMap_obj OBJ_;
		HashMap_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< HashMap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~HashMap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("HashMap"); }

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils

#endif /* INCLUDED_com_stencyl_utils_HashMap */ 
