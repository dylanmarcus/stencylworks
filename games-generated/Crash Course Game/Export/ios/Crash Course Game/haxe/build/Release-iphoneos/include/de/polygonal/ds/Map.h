#ifndef INCLUDED_de_polygonal_ds_Map
#define INCLUDED_de_polygonal_ds_Map

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <de/polygonal/ds/Collection.h>
HX_DECLARE_CLASS3(de,polygonal,ds,Collection)
HX_DECLARE_CLASS3(de,polygonal,ds,Hashable)
HX_DECLARE_CLASS3(de,polygonal,ds,Itr)
HX_DECLARE_CLASS3(de,polygonal,ds,Map)
HX_DECLARE_CLASS3(de,polygonal,ds,Set)
namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES  Map_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Map_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual ::de::polygonal::ds::Itr keys( )=0;
		Dynamic keys_dyn();
virtual ::de::polygonal::ds::Set toKeySet( )=0;
		Dynamic toKeySet_dyn();
virtual ::de::polygonal::ds::Set toValSet( )=0;
		Dynamic toValSet_dyn();
virtual bool remap( Dynamic key,Dynamic x)=0;
		Dynamic remap_dyn();
virtual bool clr( Dynamic key)=0;
		Dynamic clr_dyn();
virtual bool set( Dynamic key,Dynamic x)=0;
		Dynamic set_dyn();
virtual Dynamic get( Dynamic key)=0;
		Dynamic get_dyn();
virtual bool hasKey( Dynamic key)=0;
		Dynamic hasKey_dyn();
virtual bool has( Dynamic x)=0;
		Dynamic has_dyn();
};

#define DELEGATE_de_polygonal_ds_Map \
virtual ::de::polygonal::ds::Itr keys( ) { return mDelegate->keys();}  \
virtual Dynamic keys_dyn() { return mDelegate->keys_dyn();}  \
virtual ::de::polygonal::ds::Set toKeySet( ) { return mDelegate->toKeySet();}  \
virtual Dynamic toKeySet_dyn() { return mDelegate->toKeySet_dyn();}  \
virtual ::de::polygonal::ds::Set toValSet( ) { return mDelegate->toValSet();}  \
virtual Dynamic toValSet_dyn() { return mDelegate->toValSet_dyn();}  \
virtual bool remap( Dynamic key,Dynamic x) { return mDelegate->remap(key,x);}  \
virtual Dynamic remap_dyn() { return mDelegate->remap_dyn();}  \
virtual bool clr( Dynamic key) { return mDelegate->clr(key);}  \
virtual Dynamic clr_dyn() { return mDelegate->clr_dyn();}  \
virtual bool set( Dynamic key,Dynamic x) { return mDelegate->set(key,x);}  \
virtual Dynamic set_dyn() { return mDelegate->set_dyn();}  \
virtual Dynamic get( Dynamic key) { return mDelegate->get(key);}  \
virtual Dynamic get_dyn() { return mDelegate->get_dyn();}  \
virtual bool hasKey( Dynamic key) { return mDelegate->hasKey(key);}  \
virtual Dynamic hasKey_dyn() { return mDelegate->hasKey_dyn();}  \
virtual bool has( Dynamic x) { return mDelegate->has(x);}  \
virtual Dynamic has_dyn() { return mDelegate->has_dyn();}  \


template<typename IMPL>
class Map_delegate_ : public Map_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Map_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_de_polygonal_ds_Map
};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_Map */ 
