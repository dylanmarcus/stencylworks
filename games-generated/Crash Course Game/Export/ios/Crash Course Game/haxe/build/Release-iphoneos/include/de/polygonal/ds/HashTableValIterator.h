#ifndef INCLUDED_de_polygonal_ds_HashTableValIterator
#define INCLUDED_de_polygonal_ds_HashTableValIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <de/polygonal/ds/Itr.h>
HX_DECLARE_CLASS3(de,polygonal,ds,HashTableValIterator)
HX_DECLARE_CLASS3(de,polygonal,ds,Itr)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  HashTableValIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HashTableValIterator_obj OBJ_;
		HashTableValIterator_obj();
		Void __construct(Dynamic f);

	public:
		static hx::ObjectPtr< HashTableValIterator_obj > __new(Dynamic f);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~HashTableValIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::de::polygonal::ds::Itr_obj *()
			{ return new ::de::polygonal::ds::Itr_delegate_< HashTableValIterator_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("HashTableValIterator"); }

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
		Dynamic _vals;
		Dynamic _keys;
		Dynamic _f;
};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_HashTableValIterator */ 
