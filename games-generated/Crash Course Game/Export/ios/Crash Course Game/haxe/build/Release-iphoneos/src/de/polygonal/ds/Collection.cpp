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
namespace de{
namespace polygonal{
namespace ds{

HX_DEFINE_DYNAMIC_FUNC2(Collection_obj,clone,return )

HX_DEFINE_DYNAMIC_FUNC0(Collection_obj,toArray,return )

HX_DEFINE_DYNAMIC_FUNC0(Collection_obj,size,return )

HX_DEFINE_DYNAMIC_FUNC0(Collection_obj,isEmpty,return )

HX_DEFINE_DYNAMIC_FUNC0(Collection_obj,iterator,return )

HX_DEFINE_DYNAMIC_FUNC1(Collection_obj,clear,)

HX_DEFINE_DYNAMIC_FUNC1(Collection_obj,remove,return )

HX_DEFINE_DYNAMIC_FUNC1(Collection_obj,contains,return )

HX_DEFINE_DYNAMIC_FUNC0(Collection_obj,free,)


static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("toArray"),
	HX_CSTRING("size"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("iterator"),
	HX_CSTRING("clear"),
	HX_CSTRING("remove"),
	HX_CSTRING("contains"),
	HX_CSTRING("free"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Collection_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Collection_obj::__mClass,"__mClass");
};

Class Collection_obj::__mClass;

void Collection_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.Collection"), hx::TCanCast< Collection_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Collection_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
