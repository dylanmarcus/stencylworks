#ifndef INCLUDED_de_polygonal_ds_HashKey
#define INCLUDED_de_polygonal_ds_HashKey

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(de,polygonal,ds,HashKey)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  HashKey_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HashKey_obj OBJ_;
		HashKey_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< HashKey_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~HashKey_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("HashKey"); }

		static int _counter;
		static int next( );
		static Dynamic next_dyn();

};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_HashKey */ 
