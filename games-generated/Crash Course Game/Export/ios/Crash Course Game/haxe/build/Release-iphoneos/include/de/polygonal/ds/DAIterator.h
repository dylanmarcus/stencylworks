#ifndef INCLUDED_de_polygonal_ds_DAIterator
#define INCLUDED_de_polygonal_ds_DAIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <de/polygonal/ds/Itr.h>
HX_DECLARE_CLASS3(de,polygonal,ds,Collection)
HX_DECLARE_CLASS3(de,polygonal,ds,DA)
HX_DECLARE_CLASS3(de,polygonal,ds,DAIterator)
HX_DECLARE_CLASS3(de,polygonal,ds,Hashable)
HX_DECLARE_CLASS3(de,polygonal,ds,Itr)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  DAIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DAIterator_obj OBJ_;
		DAIterator_obj();
		Void __construct(::de::polygonal::ds::DA f);

	public:
		static hx::ObjectPtr< DAIterator_obj > __new(::de::polygonal::ds::DA f);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DAIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::de::polygonal::ds::Itr_obj *()
			{ return new ::de::polygonal::ds::Itr_delegate_< DAIterator_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("DAIterator"); }

		virtual int __size( Dynamic f);
		Dynamic __size_dyn();

		virtual Dynamic __a( Dynamic f);
		Dynamic __a_dyn();

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
		Dynamic _a;
		::de::polygonal::ds::DA _f;
};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_DAIterator */ 
