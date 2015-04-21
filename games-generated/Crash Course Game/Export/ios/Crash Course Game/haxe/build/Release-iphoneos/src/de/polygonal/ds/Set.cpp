#include <hxcpp.h>

#ifndef INCLUDED_de_polygonal_ds_Collection
#include <de/polygonal/ds/Collection.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Hashable
#include <de/polygonal/ds/Hashable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Set
#include <de/polygonal/ds/Set.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

HX_DEFINE_DYNAMIC_FUNC1(Set_obj,set,return )

HX_DEFINE_DYNAMIC_FUNC1(Set_obj,has,return )


static ::String sMemberFields[] = {
	HX_CSTRING("set"),
	HX_CSTRING("has"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Set_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Set_obj::__mClass,"__mClass");
};

Class Set_obj::__mClass;

void Set_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.Set"), hx::TCanCast< Set_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Set_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
