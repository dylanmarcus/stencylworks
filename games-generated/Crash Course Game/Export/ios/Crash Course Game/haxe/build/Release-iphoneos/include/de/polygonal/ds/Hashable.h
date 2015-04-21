#ifndef INCLUDED_de_polygonal_ds_Hashable
#define INCLUDED_de_polygonal_ds_Hashable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(de,polygonal,ds,Hashable)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  Hashable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Hashable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
};

#define DELEGATE_de_polygonal_ds_Hashable \


template<typename IMPL>
class Hashable_delegate_ : public Hashable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Hashable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_de_polygonal_ds_Hashable
};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_Hashable */ 
