#ifndef INCLUDED_de_polygonal_ds_Set
#define INCLUDED_de_polygonal_ds_Set

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <de/polygonal/ds/Collection.h>
HX_DECLARE_CLASS3(de,polygonal,ds,Collection)
HX_DECLARE_CLASS3(de,polygonal,ds,Hashable)
HX_DECLARE_CLASS3(de,polygonal,ds,Set)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  Set_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Set_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual bool set( Dynamic x)=0;
		Dynamic set_dyn();
virtual bool has( Dynamic x)=0;
		Dynamic has_dyn();
};

#define DELEGATE_de_polygonal_ds_Set \
virtual bool set( Dynamic x) { return mDelegate->set(x);}  \
virtual Dynamic set_dyn() { return mDelegate->set_dyn();}  \
virtual bool has( Dynamic x) { return mDelegate->has(x);}  \
virtual Dynamic has_dyn() { return mDelegate->has_dyn();}  \


template<typename IMPL>
class Set_delegate_ : public Set_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Set_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_de_polygonal_ds_Set
};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_Set */ 
