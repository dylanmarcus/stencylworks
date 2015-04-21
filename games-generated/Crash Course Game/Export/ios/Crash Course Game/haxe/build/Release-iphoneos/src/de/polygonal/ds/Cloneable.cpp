#include <hxcpp.h>

#ifndef INCLUDED_de_polygonal_ds_Cloneable
#include <de/polygonal/ds/Cloneable.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

HX_DEFINE_DYNAMIC_FUNC0(Cloneable_obj,clone,return )


static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cloneable_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cloneable_obj::__mClass,"__mClass");
};

Class Cloneable_obj::__mClass;

void Cloneable_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.Cloneable"), hx::TCanCast< Cloneable_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Cloneable_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
