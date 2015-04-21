#ifndef INCLUDED_de_polygonal_ds_Itr
#define INCLUDED_de_polygonal_ds_Itr

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(de,polygonal,ds,Itr)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  Itr_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Itr_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual ::de::polygonal::ds::Itr reset( )=0;
		Dynamic reset_dyn();
virtual Void remove( )=0;
		Dynamic remove_dyn();
virtual Dynamic next( )=0;
		Dynamic next_dyn();
virtual bool hasNext( )=0;
		Dynamic hasNext_dyn();
};

#define DELEGATE_de_polygonal_ds_Itr \
virtual ::de::polygonal::ds::Itr reset( ) { return mDelegate->reset();}  \
virtual Dynamic reset_dyn() { return mDelegate->reset_dyn();}  \
virtual Void remove( ) { return mDelegate->remove();}  \
virtual Dynamic remove_dyn() { return mDelegate->remove_dyn();}  \
virtual Dynamic next( ) { return mDelegate->next();}  \
virtual Dynamic next_dyn() { return mDelegate->next_dyn();}  \
virtual bool hasNext( ) { return mDelegate->hasNext();}  \
virtual Dynamic hasNext_dyn() { return mDelegate->hasNext_dyn();}  \


template<typename IMPL>
class Itr_delegate_ : public Itr_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Itr_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_de_polygonal_ds_Itr
};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_Itr */ 
