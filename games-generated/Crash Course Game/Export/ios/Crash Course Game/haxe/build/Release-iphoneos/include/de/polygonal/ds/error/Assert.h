#ifndef INCLUDED_de_polygonal_ds_error_Assert
#define INCLUDED_de_polygonal_ds_error_Assert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(de,polygonal,ds,error,Assert)
namespace de{
namespace polygonal{
namespace ds{
namespace error{


class HXCPP_CLASS_ATTRIBUTES  Assert_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assert_obj OBJ_;
		Assert_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Assert_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Assert_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Assert"); }

};

} // end namespace de
} // end namespace polygonal
} // end namespace ds
} // end namespace error

#endif /* INCLUDED_de_polygonal_ds_error_Assert */ 
