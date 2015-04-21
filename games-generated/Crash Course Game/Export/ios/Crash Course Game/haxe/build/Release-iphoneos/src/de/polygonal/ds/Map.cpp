#include <hxcpp.h>

#ifndef INCLUDED_de_polygonal_ds_Collection
#include <de/polygonal/ds/Collection.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Hashable
#include <de/polygonal/ds/Hashable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Map
#include <de/polygonal/ds/Map.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Set
#include <de/polygonal/ds/Set.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

HX_DEFINE_DYNAMIC_FUNC0(Map_obj,keys,return )

HX_DEFINE_DYNAMIC_FUNC0(Map_obj,toKeySet,return )

HX_DEFINE_DYNAMIC_FUNC0(Map_obj,toValSet,return )

HX_DEFINE_DYNAMIC_FUNC2(Map_obj,remap,return )

HX_DEFINE_DYNAMIC_FUNC1(Map_obj,clr,return )

HX_DEFINE_DYNAMIC_FUNC2(Map_obj,set,return )

HX_DEFINE_DYNAMIC_FUNC1(Map_obj,get,return )

HX_DEFINE_DYNAMIC_FUNC1(Map_obj,hasKey,return )

HX_DEFINE_DYNAMIC_FUNC1(Map_obj,has,return )


static ::String sMemberFields[] = {
	HX_CSTRING("keys"),
	HX_CSTRING("toKeySet"),
	HX_CSTRING("toValSet"),
	HX_CSTRING("remap"),
	HX_CSTRING("clr"),
	HX_CSTRING("set"),
	HX_CSTRING("get"),
	HX_CSTRING("hasKey"),
	HX_CSTRING("has"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Map_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Map_obj::__mClass,"__mClass");
};

Class Map_obj::__mClass;

void Map_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.Map"), hx::TCanCast< Map_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Map_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
