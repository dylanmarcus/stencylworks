#ifndef INCLUDED_de_polygonal_ds_HashTableKeyIterator
#define INCLUDED_de_polygonal_ds_HashTableKeyIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <de/polygonal/ds/Itr.h>
HX_DECLARE_CLASS3(de,polygonal,ds,HashTableKeyIterator)
HX_DECLARE_CLASS3(de,polygonal,ds,Itr)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  HashTableKeyIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HashTableKeyIterator_obj OBJ_;
		HashTableKeyIterator_obj();
		Void __construct(Dynamic f);

	public:
		static hx::ObjectPtr< HashTableKeyIterator_obj > __new(Dynamic f);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~HashTableKeyIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::de::polygonal::ds::Itr_obj *()
			{ return new ::de::polygonal::ds::Itr_delegate_< HashTableKeyIterator_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("HashTableKeyIterator"); }

		virtual Dynamic __keys( Dynamic f);
		Dynamic __keys_dyn();

		virtual Dynamic __vals( Dynamic f);
		Dynamic __vals_dyn();

		virtual Void remove( );
		Dynamic remove_dyn();

		virtual Dynamic next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::de::polygonal::ds::Itr reset( );
		Dynamic reset_dyn();

		int _s;
		int _i;
		Dynamic _keys;
		Dynamic _f;
};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_HashTableKeyIterator */ 
