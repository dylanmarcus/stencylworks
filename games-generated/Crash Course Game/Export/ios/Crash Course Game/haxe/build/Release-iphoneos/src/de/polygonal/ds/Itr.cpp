#include <hxcpp.h>

#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

HX_DEFINE_DYNAMIC_FUNC0(Itr_obj,reset,return )

HX_DEFINE_DYNAMIC_FUNC0(Itr_obj,remove,)

HX_DEFINE_DYNAMIC_FUNC0(Itr_obj,next,return )

HX_DEFINE_DYNAMIC_FUNC0(Itr_obj,hasNext,return )


static ::String sMemberFields[] = {
	HX_CSTRING("reset"),
	HX_CSTRING("remove"),
	HX_CSTRING("next"),
	HX_CSTRING("hasNext"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Itr_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Itr_obj::__mClass,"__mClass");
};

Class Itr_obj::__mClass;

void Itr_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.Itr"), hx::TCanCast< Itr_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Itr_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
