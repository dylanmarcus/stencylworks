#ifndef INCLUDED_de_polygonal_ds_IntIntHashTable
#define INCLUDED_de_polygonal_ds_IntIntHashTable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <de/polygonal/ds/Map.h>
HX_DECLARE_CLASS3(de,polygonal,ds,Collection)
HX_DECLARE_CLASS3(de,polygonal,ds,DA)
HX_DECLARE_CLASS3(de,polygonal,ds,Hashable)
HX_DECLARE_CLASS3(de,polygonal,ds,IntIntHashTable)
HX_DECLARE_CLASS3(de,polygonal,ds,IntIntHashTableValIterator)
HX_DECLARE_CLASS3(de,polygonal,ds,Itr)
HX_DECLARE_CLASS3(de,polygonal,ds,Map)
HX_DECLARE_CLASS3(de,polygonal,ds,Set)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  IntIntHashTable_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IntIntHashTable_obj OBJ_;
		IntIntHashTable_obj();
		Void __construct(int slotCount,hx::Null< int >  __o_capacity,hx::Null< bool >  __o_isResizable,hx::Null< int >  __o_maxSize);

	public:
		static hx::ObjectPtr< IntIntHashTable_obj > __new(int slotCount,hx::Null< int >  __o_capacity,hx::Null< bool >  __o_isResizable,hx::Null< int >  __o_maxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~IntIntHashTable_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::de::polygonal::ds::Map_obj *()
			{ return new ::de::polygonal::ds::Map_delegate_< IntIntHashTable_obj >(this); }
		inline operator ::de::polygonal::ds::Collection_obj *()
			{ return new ::de::polygonal::ds::Collection_delegate_< IntIntHashTable_obj >(this); }
		inline operator ::de::polygonal::ds::Hashable_obj *()
			{ return new ::de::polygonal::ds::Hashable_delegate_< IntIntHashTable_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("IntIntHashTable"); }

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

		virtual bool remove( Dynamic _tmp_val);
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

		virtual int getAll( int key,Array< int > values);
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

		virtual bool removePair( int key,int val);
		Dynamic removePair_dyn();

		virtual int extract( int key);
		Dynamic extract_dyn();

		virtual bool remap( Dynamic _tmp_key,Dynamic _tmp_val);
		Dynamic remap_dyn();

		virtual Void rehash( int slotCount);
		Dynamic rehash_dyn();

		virtual bool setIfAbsent( int key,int val);
		Dynamic setIfAbsent_dyn();

		virtual int getFront( int key);
		Dynamic getFront_dyn();

		virtual int getCollisionCount( );
		Dynamic getCollisionCount_dyn();

		virtual int getCapacity( );
		Dynamic getCapacity_dyn();

		virtual int getSlotCount( );
		Dynamic getSlotCount_dyn();

		virtual Float getLoadFactor( );
		Dynamic getLoadFactor_dyn();

		::de::polygonal::ds::IntIntHashTableValIterator _iterator;
		int _sizeLevel;
		int _size;
		int _capacity;
		int _free;
		int _mask;
		Array< int > _next;
		Array< int > _data;
		Array< int > _hash;
		bool _isResizable;
		bool reuseIterator;
		int maxSize;
		int key;
		static int KEY_ABSENT;
		static int VAL_ABSENT;
		static int EMPTY_SLOT;
		static int NULL_POINTER;
};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_IntIntHashTable */ 
