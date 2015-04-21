#ifndef INCLUDED_de_polygonal_ds_ArrayUtil
#define INCLUDED_de_polygonal_ds_ArrayUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(de,polygonal,ds,ArrayUtil)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  ArrayUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrayUtil_obj OBJ_;
		ArrayUtil_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ArrayUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ArrayUtil_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ArrayUtil"); }

		static Dynamic alloc( int x);
		static Dynamic alloc_dyn();

		static Dynamic shrink( Dynamic a,int x);
		static Dynamic shrink_dyn();

		static Dynamic copy( Dynamic src,Dynamic dst,hx::Null< int >  min,hx::Null< int >  max);
		static Dynamic copy_dyn();

		static Void fill( Dynamic dst,Dynamic x,hx::Null< int >  k);
		static Dynamic fill_dyn();

		static Void assign( Dynamic dst,::Class C,Dynamic args,hx::Null< int >  k);
		static Dynamic assign_dyn();

		static Void memmove( Dynamic a,int destination,int source,int n);
		static Dynamic memmove_dyn();

		static int bsearchComparator( Dynamic a,Dynamic x,int min,int max,Dynamic comparator);
		static Dynamic bsearchComparator_dyn();

		static int bsearchInt( Array< int > a,int x,int min,int max);
		static Dynamic bsearchInt_dyn();

		static int bsearchFloat( Array< Float > a,Float x,int min,int max);
		static Dynamic bsearchFloat_dyn();

		static Void shuffle( Dynamic a,Array< Float > rval);
		static Dynamic shuffle_dyn();

		static Void sortRange( Array< Float > a,Dynamic compare,bool useInsertionSort,int first,int count);
		static Dynamic sortRange_dyn();

		static Array< ::Dynamic > quickPerm( int n);
		static Dynamic quickPerm_dyn();

		static bool equals( Dynamic a,Dynamic b);
		static Dynamic equals_dyn();

		static Dynamic split( Dynamic a,int n,int k);
		static Dynamic split_dyn();

		static Void _insertionSort( Array< Float > a,int first,int k,Dynamic cmp);
		static Dynamic _insertionSort_dyn();

		static Void _quickSort( Array< Float > a,int first,int k,Dynamic cmp);
		static Dynamic _quickSort_dyn();

};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_ArrayUtil */ 
