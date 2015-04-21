#ifndef INCLUDED_de_polygonal_ds_IntIntHashTableKeyIterator
#define INCLUDED_de_polygonal_ds_IntIntHashTableKeyIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <de/polygonal/ds/Itr.h>
HX_DECLARE_CLASS3(de,polygonal,ds,IntIntHashTableKeyIterator)
HX_DECLARE_CLASS3(de,polygonal,ds,Itr)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  IntIntHashTableKeyIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IntIntHashTableKeyIterator_obj OBJ_;
		IntIntHashTableKeyIterator_obj();
		Void __construct(Dynamic hash);

	public:
		static hx::ObjectPtr< IntIntHashTableKeyIterator_obj > __new(Dynamic hash);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~IntIntHashTableKeyIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::de::polygonal::ds::Itr_obj *()
			{ return new ::de::polygonal::ds::Itr_delegate_< IntIntHashTableKeyIterator_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("IntIntHashTableKeyIterator"); }

		virtual int __getData( int i);
		Dynamic __getData_dyn();

		virtual Void _scan( );
		Dynamic _scan_dyn();

		virtual Void remove( );
		Dynamic remove_dyn();

		virtual Dynamic next( );
		Dynamic next_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::de::polygonal::ds::Itr reset( );
		Dynamic reset_dyn();

		Array< int > _data;
		int _s;
		int _i;
		Dynamic _f;
};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_IntIntHashTableKeyIterator */ 
