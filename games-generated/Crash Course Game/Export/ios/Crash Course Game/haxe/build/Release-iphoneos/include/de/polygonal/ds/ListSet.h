#ifndef INCLUDED_de_polygonal_ds_ListSet
#define INCLUDED_de_polygonal_ds_ListSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <de/polygonal/ds/Set.h>
HX_DECLARE_CLASS3(de,polygonal,ds,Collection)
HX_DECLARE_CLASS3(de,polygonal,ds,DA)
HX_DECLARE_CLASS3(de,polygonal,ds,Hashable)
HX_DECLARE_CLASS3(de,polygonal,ds,Itr)
HX_DECLARE_CLASS3(de,polygonal,ds,ListSet)
HX_DECLARE_CLASS3(de,polygonal,ds,Set)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  ListSet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ListSet_obj OBJ_;
		ListSet_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ListSet_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ListSet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::de::polygonal::ds::Set_obj *()
			{ return new ::de::polygonal::ds::Set_delegate_< ListSet_obj >(this); }
		inline operator ::de::polygonal::ds::Collection_obj *()
			{ return new ::de::polygonal::ds::Collection_delegate_< ListSet_obj >(this); }
		inline operator ::de::polygonal::ds::Hashable_obj *()
			{ return new ::de::polygonal::ds::Hashable_delegate_< ListSet_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("ListSet"); }

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

		virtual bool contains( Dynamic _tmp_x);
		Dynamic contains_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		virtual Void merge( ::de::polygonal::ds::Set x,bool assign,Dynamic copier);
		Dynamic merge_dyn();

		virtual bool set( Dynamic _tmp_x);
		Dynamic set_dyn();

		virtual bool has( Dynamic _tmp_x);
		Dynamic has_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		::de::polygonal::ds::DA _a;
		bool reuseIterator;
		int key;
};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_ListSet */ 
