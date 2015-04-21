#ifndef INCLUDED_de_polygonal_ds_IntHashTable
#define INCLUDED_de_polygonal_ds_IntHashTable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <de/polygonal/ds/Map.h>
HX_DECLARE_CLASS3(de,polygonal,ds,Collection)
HX_DECLARE_CLASS3(de,polygonal,ds,DA)
HX_DECLARE_CLASS3(de,polygonal,ds,Hashable)
HX_DECLARE_CLASS3(de,polygonal,ds,IntHashTable)
HX_DECLARE_CLASS3(de,polygonal,ds,IntHashTableIterator)
HX_DECLARE_CLASS3(de,polygonal,ds,IntIntHashTable)
HX_DECLARE_CLASS3(de,polygonal,ds,Itr)
HX_DECLARE_CLASS3(de,polygonal,ds,Map)
HX_DECLARE_CLASS3(de,polygonal,ds,Set)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  IntHashTable_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IntHashTable_obj OBJ_;
		IntHashTable_obj();
		Void __construct(int slotCount,hx::Null< int >  __o_capacity,hx::Null< bool >  __o_isResizable,hx::Null< int >  __o_maxSize);

	public:
		static hx::ObjectPtr< IntHashTable_obj > __new(int slotCount,hx::Null< int >  __o_capacity,hx::Null< bool >  __o_isResizable,hx::Null< int >  __o_maxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~IntHashTable_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::de::polygonal::ds::Map_obj *()
			{ return new ::de::polygonal::ds::Map_delegate_< IntHashTable_obj >(this); }
		inline operator ::de::polygonal::ds::Collection_obj *()
			{ return new ::de::polygonal::ds::Collection_delegate_< IntHashTable_obj >(this); }
		inline operator ::de::polygonal::ds::Hashable_obj *()
			{ return new ::de::polygonal::ds::Hashable_delegate_< IntHashTable_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("IntHashTable"); }

		virtual bool __hasKey( int i);
		Dynamic __hasKey_dyn();

		virtual Void __clrKey( int i);
		Dynamic __clrKey_dyn();

		virtual Void __setKey( int i,int x);
		Dynamic __setKey_dyn();

		virtual int __getKey( int i);
		Dynamic __getKey_dyn();

		virtual Void __setNext( int i,int x);
		Dynamic __setNext_dyn();

		virtual int __getNext( int i);
		Dynamic __getNext_dyn();

		virtual Void _invalidate( );
		Dynamic _invalidate_dyn();

		virtual Void _shrink( );
		Dynamic _shrink_dyn();

		virtual Void _expand( int oldSize);
		Dynamic _expand_dyn();

		virtual ::de::polygonal::ds::Collection clone( hx::Null< bool >  assign,Dynamic _tmp_copier);
		Dynamic clone_dyn();

		virtual Dynamic toArray( );
		Dynamic toArray_dyn();

		virtual int size( );
		Dynamic size_dyn();

		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		virtual ::de::polygonal::ds::Itr iterator( );
		Dynamic iterator_dyn();

		virtual Void clear( hx::Null< bool >  purge);
		Dynamic clear_dyn();

		virtual bool remove( Dynamic _tmp_x);
		Dynamic remove_dyn();

		virtual bool contains( Dynamic _tmp_val);
		Dynamic contains_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		virtual ::de::polygonal::ds::Itr keys( );
		Dynamic keys_dyn();

		virtual ::de::polygonal::ds::Set toKeySet( );
		Dynamic toKeySet_dyn();

		virtual ::de::polygonal::ds::Set toValSet( );
		Dynamic toValSet_dyn();

		virtual bool clr( Dynamic _tmp_key);
		Dynamic clr_dyn();

		virtual bool set( Dynamic _tmp_key,Dynamic _tmp_val);
		Dynamic set_dyn();

		virtual int getAll( int key,Dynamic values);
		Dynamic getAll_dyn();

		virtual Dynamic get( Dynamic _tmp_key);
		Dynamic get_dyn();

		virtual int count( int key);
		Dynamic count_dyn();

		virtual bool hasKey( Dynamic _tmp_key);
		Dynamic hasKey_dyn();

		virtual bool has( Dynamic _tmp_val);
		Dynamic has_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::de::polygonal::ds::DA toKeyDA( );
		Dynamic toKeyDA_dyn();

		virtual Array< int > toKeyArray( );
		Dynamic toKeyArray_dyn();

		virtual bool remap( Dynamic _tmp_key,Dynamic _tmp_val);
		Dynamic remap_dyn();

		virtual Void rehash( int slotCount);
		Dynamic rehash_dyn();

		virtual bool setIfAbsent( int key,Dynamic val);
		Dynamic setIfAbsent_dyn();

		virtual Dynamic getFront( int key);
		Dynamic getFront_dyn();

		virtual int getCollisionCount( );
		Dynamic getCollisionCount_dyn();

		virtual int getCapacity( );
		Dynamic getCapacity_dyn();

		virtual int getSlotCount( );
		Dynamic getSlotCount_dyn();

		virtual Float getLoadFactor( );
		Dynamic getLoadFactor_dyn();

		Array< int > _tmpArr;
		::de::polygonal::ds::IntHashTableIterator _iterator;
		bool _isResizable;
		int _sizeLevel;
		int _i0;
		int _key0;
		int _free;
		Array< int > _keys;
		Array< int > _next;
		Dynamic _vals;
		::de::polygonal::ds::IntIntHashTable _h;
		bool reuseIterator;
		int maxSize;
		int key;
};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_IntHashTable */ 
