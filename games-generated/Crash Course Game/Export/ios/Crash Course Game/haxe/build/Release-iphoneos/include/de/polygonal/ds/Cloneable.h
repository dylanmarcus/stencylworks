#ifndef INCLUDED_de_polygonal_ds_Cloneable
#define INCLUDED_de_polygonal_ds_Cloneable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(de,polygonal,ds,Cloneable)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  Cloneable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Cloneable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Dynamic clone( )=0;
		Dynamic clone_dyn();
};

#define DELEGATE_de_polygonal_ds_Cloneable \
virtual Dynamic clone( ) { return mDelegate->clone();}  \
virtual Dynamic clone_dyn() { return mDelegate->clone_dyn();}  \


template<typename IMPL>
class Cloneable_delegate_ : public Cloneable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Cloneable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_de_polygonal_ds_Cloneable
};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_Cloneable */ 
