#ifndef INCLUDED_com_stencyl_AssetLoader
#define INCLUDED_com_stencyl_AssetLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(com,stencyl,AssetLoader)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace stencyl{


class HXCPP_CLASS_ATTRIBUTES  AssetLoader_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef AssetLoader_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void loadScenes( ::haxe::ds::IntMap scenesXML)=0;
		Dynamic loadScenes_dyn();
virtual Void loadResources( ::haxe::ds::StringMap resourceMap)=0;
		Dynamic loadResources_dyn();
};

#define DELEGATE_com_stencyl_AssetLoader \
virtual Void loadScenes( ::haxe::ds::IntMap scenesXML) { return mDelegate->loadScenes(scenesXML);}  \
virtual Dynamic loadScenes_dyn() { return mDelegate->loadScenes_dyn();}  \
virtual Void loadResources( ::haxe::ds::StringMap resourceMap) { return mDelegate->loadResources(resourceMap);}  \
virtual Dynamic loadResources_dyn() { return mDelegate->loadResources_dyn();}  \


template<typename IMPL>
class AssetLoader_delegate_ : public AssetLoader_obj
{
	protected:
		IMPL *mDelegate;
	public:
		AssetLoader_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_com_stencyl_AssetLoader
};

} // end namespace com
} // end namespace stencyl

#endif /* INCLUDED_com_stencyl_AssetLoader */ 
