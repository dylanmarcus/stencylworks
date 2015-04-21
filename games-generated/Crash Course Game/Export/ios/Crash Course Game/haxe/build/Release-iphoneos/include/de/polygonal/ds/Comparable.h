#ifndef INCLUDED_de_polygonal_ds_Comparable
#define INCLUDED_de_polygonal_ds_Comparable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(de,polygonal,ds,Comparable)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  Comparable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Comparable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual int compare( Dynamic other)=0;
		Dynamic compare_dyn();
};

#define DELEGATE_de_polygonal_ds_Comparable \
virtual int compare( Dynamic other) { return mDelegate->compare(other);}  \
virtual Dynamic compare_dyn() { return mDelegate->compare_dyn();}  \


template<typename IMPL>
class Comparable_delegate_ : public Comparable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Comparable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_de_polygonal_ds_Comparable
};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_Comparable */ 
