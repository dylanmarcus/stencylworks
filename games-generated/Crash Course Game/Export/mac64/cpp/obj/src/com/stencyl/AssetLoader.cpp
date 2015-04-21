#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_stencyl_AssetLoader
#include <com/stencyl/AssetLoader.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace stencyl{

HX_DEFINE_DYNAMIC_FUNC1(AssetLoader_obj,loadScenes,)

HX_DEFINE_DYNAMIC_FUNC1(AssetLoader_obj,loadResources,)


static ::String sMemberFields[] = {
	HX_CSTRING("loadScenes"),
	HX_CSTRING("loadResources"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetLoader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetLoader_obj::__mClass,"__mClass");
};

Class AssetLoader_obj::__mClass;

void AssetLoader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.AssetLoader"), hx::TCanCast< AssetLoader_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AssetLoader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
