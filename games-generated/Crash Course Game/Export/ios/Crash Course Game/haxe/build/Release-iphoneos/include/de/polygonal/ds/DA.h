#ifndef INCLUDED_de_polygonal_ds_DA
#define INCLUDED_de_polygonal_ds_DA

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <de/polygonal/ds/Collection.h>
HX_DECLARE_CLASS3(de,polygonal,ds,Collection)
HX_DECLARE_CLASS3(de,polygonal,ds,DA)
HX_DECLARE_CLASS3(de,polygonal,ds,DAIterator)
HX_DECLARE_CLASS3(de,polygonal,ds,Hashable)
HX_DECLARE_CLASS3(de,polygonal,ds,Itr)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  DA_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DA_obj OBJ_;
		DA_obj();
		Void __construct(hx::Null< int >  __o_reservedSize,hx::Null< int >  __o_maxSize);

	public:
		static hx::ObjectPtr< DA_obj > __new(hx::Null< int >  __o_reservedSize,hx::Null< int >  __o_maxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DA_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::de::polygonal::ds::Collection_obj *()
			{ return new ::de::polygonal::ds::Collection_delegate_< DA_obj >(this); }
		inline operator ::de::polygonal::ds::Hashable_obj *()
			{ return new ::de::polygonal::ds::Hashable_delegate_< DA_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("DA"); }

		virtual Void __cpy( int i,int j);
		Dynamic __cpy_dyn();

		virtual Void __set( int i,Dynamic x);
		Dynamic __set_dyn();

		virtual Dynamic __get( int i);
		Dynamic __get_dyn();

		virtual Void _insertionSortComparable( int first,int k);
		Dynamic _insertionSortComparable_dyn();

		virtual Void _insertionSort( int first,int k,Dynamic cmp);
		Dynamic _insertionSort_dyn();

		virtual Void _quickSortComparable( int first,int k);
		Dynamic _quickSortComparable_dyn();

		virtual Void _quickSort( int first,int k,Dynamic cmp);
		Dynamic _quickSort_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void shuffle( ::de::polygonal::ds::DA rval);
		Dynamic shuffle_dyn();

		virtual ::de::polygonal::ds::Collection clone( hx::Null< bool >  assign,Dynamic _tmp_copier);
		Dynamic clone_dyn();

		virtual Dynamic toArray( );
		Dynamic toArray_dyn();

		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		virtual int size( );
		Dynamic size_dyn();

		virtual ::de::polygonal::ds::Itr iterator( );
		Dynamic iterator_dyn();

		virtual Void clear( hx::Null< bool >  purge);
		Dynamic clear_dyn();

		virtual bool remove( Dynamic _tmp_x);
		Dynamic remove_dyn();

		virtual bool contains( Dynamic _tmp_x);
		Dynamic contains_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		virtual Dynamic getArray( );
		Dynamic getArray_dyn();

		virtual bool inRange( int i);
		Dynamic inRange_dyn();

		virtual Void sort( Dynamic compare,hx::Null< bool >  useInsertionSort,hx::Null< int >  first,hx::Null< int >  count);
		Dynamic sort_dyn();

		virtual ::String join( ::String x);
		Dynamic join_dyn();

		virtual Void memmove( int destination,int source,int n);
		Dynamic memmove_dyn();

		virtual ::de::polygonal::ds::DA fill( Dynamic x,hx::Null< int >  n);
		Dynamic fill_dyn();

		virtual Void assign( ::Class C,Dynamic args,hx::Null< int >  n);
		Dynamic assign_dyn();

		virtual Void reverse( );
		Dynamic reverse_dyn();

		virtual int lastIndexOf( Dynamic x,hx::Null< int >  from);
		Dynamic lastIndexOf_dyn();

		virtual int indexOf( Dynamic x,hx::Null< int >  from,hx::Null< bool >  binarySearch,Dynamic comparator);
		Dynamic indexOf_dyn();

		virtual ::de::polygonal::ds::DA concat( ::de::polygonal::ds::DA x,hx::Null< bool >  copy);
		Dynamic concat_dyn();

		virtual ::de::polygonal::ds::DA removeRange( int i,int n,::de::polygonal::ds::DA output);
		Dynamic removeRange_dyn();

		virtual Void swapPop( int i);
		Dynamic swapPop_dyn();

		virtual Dynamic removeAt( int i);
		Dynamic removeAt_dyn();

		virtual Void insertAt( int i,Dynamic x);
		Dynamic insertAt_dyn();

		virtual Void pushFront( Dynamic x);
		Dynamic pushFront_dyn();

		virtual Dynamic popFront( );
		Dynamic popFront_dyn();

		virtual Void pushBack( Dynamic x);
		Dynamic pushBack_dyn();

		virtual Dynamic popBack( );
		Dynamic popBack_dyn();

		virtual Dynamic back( );
		Dynamic back_dyn();

		virtual Dynamic front( );
		Dynamic front_dyn();

		virtual Void cpy( int i,int j);
		Dynamic cpy_dyn();

		virtual Void swp( int i,int j);
		Dynamic swp_dyn();

		virtual Void set( int i,Dynamic x);
		Dynamic set_dyn();

		virtual Dynamic getPrev( int i);
		Dynamic getPrev_dyn();

		virtual Dynamic getNext( int i);
		Dynamic getNext_dyn();

		virtual Dynamic get( int i);
		Dynamic get_dyn();

		virtual Void trim( int x);
		Dynamic trim_dyn();

		virtual Void reserve( int x);
		Dynamic reserve_dyn();

		virtual Void pack( );
		Dynamic pack_dyn();

		bool reuseIterator;
		int maxSize;
		::de::polygonal::ds::DAIterator _iterator;
		int _size;
		Dynamic _a;
		int key;
};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_DA */ 
