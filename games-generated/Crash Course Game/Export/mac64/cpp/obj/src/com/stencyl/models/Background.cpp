#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_Background
#include <com/stencyl/models/Background.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
namespace com{
namespace stencyl{
namespace models{

HX_DEFINE_DYNAMIC_FUNC5(Background_obj,draw,)

HX_DEFINE_DYNAMIC_FUNC0(Background_obj,update,)


static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Background_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Background_obj::__mClass,"__mClass");
};

Class Background_obj::__mClass;

void Background_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.Background"), hx::TCanCast< Background_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Background_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
