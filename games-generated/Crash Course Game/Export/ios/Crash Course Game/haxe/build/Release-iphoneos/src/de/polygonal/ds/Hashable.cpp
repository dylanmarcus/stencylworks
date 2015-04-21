#include <hxcpp.h>

#ifndef INCLUDED_de_polygonal_ds_Hashable
#include <de/polygonal/ds/Hashable.h>
#endif
namespace de{
namespace polygonal{
namespace ds{


static ::String sMemberFields[] = {
	HX_CSTRING("key"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hashable_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hashable_obj::__mClass,"__mClass");
};

Class Hashable_obj::__mClass;

void Hashable_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.Hashable"), hx::TCanCast< Hashable_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Hashable_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
