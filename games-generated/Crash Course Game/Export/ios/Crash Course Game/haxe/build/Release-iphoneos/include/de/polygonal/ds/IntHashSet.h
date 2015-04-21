#ifndef INCLUDED_de_polygonal_ds_IntHashSet
#define INCLUDED_de_polygonal_ds_IntHashSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <de/polygonal/ds/Set.h>
HX_DECLARE_CLASS3(de,polygonal,ds,Collection)
HX_DECLARE_CLASS3(de,polygonal,ds,Hashable)
HX_DECLARE_CLASS3(de,polygonal,ds,IntHashSet)
HX_DECLARE_CLASS3(de,polygonal,ds,IntHashSetIterator)
HX_DECLARE_CLASS3(de,polygonal,ds,Itr)
HX_DECLARE_CLASS3(de,polygonal,ds,Set)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  IntHashSet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IntHashSet_obj OBJ_;
		IntHashSet_obj();
		Void __construct(int slotCount,hx::Null< int >  __o_capacity,hx::Null< bool >  __o_isResizable,hx::Null< int >  __o_maxSize);

	public:
		static hx::ObjectPtr< IntHashSet_obj > __new(int slotCount,hx::Null< int >  __o_capacity,hx::Null< bool >  __o_isResizable,hx::Null< int >  __o_maxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~IntHashSet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::de::polygonal::ds::Set_obj *()
			{ return new ::de::polygonal::ds::Set_delegate_< IntHashSet_obj >(this); }
		inline operator ::de::polygonal::ds::Collection_obj *()
			{ return new ::de::polygonal::ds::Collection_delegate_< IntHashSet_obj >(this); }
		inline operator ::de::polygonal::ds::Hashable_obj *()
			{ return new ::de::polygonal::ds::Hashable_delegate_< IntHashSet_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("IntHashSet"); }

		virtual Void __setData( int i,int x);
		Dynamic __setData_dyn();

		virtual int __getData( int i);
		Dynamic __getData_dyn();

		virtual Void __setNext( int i,int x);
		Dynamic __setNext_dyn();

		virtual int __getNext( int i);
		Dynamic __getNext_dyn();

		virtual Void __setHash( int i,int x);
		Dynamic __setHash_dyn();

		virtual int __getHash( int i);
		Dynamic __getHash_dyn();

		virtual Void _shrink( );
		Dynamic _shrink_dyn();

		virtual Void _expand( );
		Dynamic _expand_dyn();

		virtual int _hashCode( int x);
		Dynamic _hashCode_dyn();

		virtual ::de::polygonal::ds::Collection clone( hx::Null< bool >  assign,Dynamic _tmp_copier);
		Dynamic clone_dyn();

		virtual Dynamic toArray( );
		Dynamic toArray_dyn();

		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		virtual ::de::polygonal::ds::Itr iterator( );
		Dynamic iterator_dyn();

		virtual Void clear( hx::Null< bool >  purge);
		Dynamic clear_dyn();

		virtual int size( );
		Dynamic size_dyn();

		virtual bool remove( Dynamic _tmp_x);
		Dynamic remove_dyn();

		virtual bool contains( Dynamic _tmp_x);
		Dynamic contains_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		virtual bool set( Dynamic _tmp_x);
		Dynamic set_dyn();

		virtual bool has( Dynamic _tmp_x);
		Dynamic has_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void rehash( int slotCount);
		Dynamic rehash_dyn();

		virtual bool hasFront( int x);
		Dynamic hasFront_dyn();

		virtual int getCollisionCount( );
		Dynamic getCollisionCount_dyn();

		virtual int getCapacity( );
		Dynamic getCapacity_dyn();

		virtual int getSlotCount( );
		Dynamic getSlotCount_dyn();

		virtual Float getLoadFactor( );
		Dynamic getLoadFactor_dyn();

		::de::polygonal::ds::IntHashSetIterator _iterator;
		bool _isResizable;
		int _sizeLevel;
		int _size;
		int _capacity;
		int _free;
		int _mask;
		Array< int > _next;
		Array< int > _data;
		Array< int > _hash;
		bool reuseIterator;
		int maxSize;
		int key;
		static int VAL_ABSENT;
		static int EMPTY_SLOT;
		static int NULL_POINTER;
};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_IntHashSet */ 
