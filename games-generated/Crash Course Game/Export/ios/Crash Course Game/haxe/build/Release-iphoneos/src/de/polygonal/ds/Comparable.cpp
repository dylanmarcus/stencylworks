#include <hxcpp.h>

#ifndef INCLUDED_de_polygonal_ds_Comparable
#include <de/polygonal/ds/Comparable.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

HX_DEFINE_DYNAMIC_FUNC1(Comparable_obj,compare,return )


static ::String sMemberFields[] = {
	HX_CSTRING("compare"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Comparable_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Comparable_obj::__mClass,"__mClass");
};

Class Comparable_obj::__mClass;

void Comparable_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.Comparable"), hx::TCanCast< Comparable_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Comparable_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
