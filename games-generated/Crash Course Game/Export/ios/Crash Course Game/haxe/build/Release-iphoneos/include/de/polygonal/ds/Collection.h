#ifndef INCLUDED_de_polygonal_ds_Collection
#define INCLUDED_de_polygonal_ds_Collection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <de/polygonal/ds/Hashable.h>
HX_DECLARE_CLASS3(de,polygonal,ds,Collection)
HX_DECLARE_CLASS3(de,polygonal,ds,Hashable)
HX_DECLARE_CLASS3(de,polygonal,ds,Itr)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  Collection_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Collection_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual ::de::polygonal::ds::Collection clone( hx::Null< bool >  assign,Dynamic copier)=0;
		Dynamic clone_dyn();
virtual Dynamic toArray( )=0;
		Dynamic toArray_dyn();
virtual int size( )=0;
		Dynamic size_dyn();
virtual bool isEmpty( )=0;
		Dynamic isEmpty_dyn();
virtual ::de::polygonal::ds::Itr iterator( )=0;
		Dynamic iterator_dyn();
virtual Void clear( hx::Null< bool >  purge)=0;
		Dynamic clear_dyn();
virtual bool remove( Dynamic x)=0;
		Dynamic remove_dyn();
virtual bool contains( Dynamic x)=0;
		Dynamic contains_dyn();
virtual Void free( )=0;
		Dynamic free_dyn();
};

#define DELEGATE_de_polygonal_ds_Collection \
virtual ::de::polygonal::ds::Collection clone( hx::Null< bool >  assign,Dynamic copier) { return mDelegate->clone(assign,copier);}  \
virtual Dynamic clone_dyn() { return mDelegate->clone_dyn();}  \
virtual Dynamic toArray( ) { return mDelegate->toArray();}  \
virtual Dynamic toArray_dyn() { return mDelegate->toArray_dyn();}  \
virtual int size( ) { return mDelegate->size();}  \
virtual Dynamic size_dyn() { return mDelegate->size_dyn();}  \
virtual bool isEmpty( ) { return mDelegate->isEmpty();}  \
virtual Dynamic isEmpty_dyn() { return mDelegate->isEmpty_dyn();}  \
virtual ::de::polygonal::ds::Itr iterator( ) { return mDelegate->iterator();}  \
virtual Dynamic iterator_dyn() { return mDelegate->iterator_dyn();}  \
virtual Void clear( hx::Null< bool >  purge) { return mDelegate->clear(purge);}  \
virtual Dynamic clear_dyn() { return mDelegate->clear_dyn();}  \
virtual bool remove( Dynamic x) { return mDelegate->remove(x);}  \
virtual Dynamic remove_dyn() { return mDelegate->remove_dyn();}  \
virtual bool contains( Dynamic x) { return mDelegate->contains(x);}  \
virtual Dynamic contains_dyn() { return mDelegate->contains_dyn();}  \
virtual Void free( ) { return mDelegate->free();}  \
virtual Dynamic free_dyn() { return mDelegate->free_dyn();}  \


template<typename IMPL>
class Collection_delegate_ : public Collection_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Collection_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_de_polygonal_ds_Collection
};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_Collection */ 
