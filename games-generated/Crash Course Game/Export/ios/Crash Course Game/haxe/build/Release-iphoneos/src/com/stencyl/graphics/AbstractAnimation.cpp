#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_AbstractAnimation
#include <com/stencyl/graphics/AbstractAnimation.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_G
#include <com/stencyl/graphics/G.h>
#endif
namespace com{
namespace stencyl{
namespace graphics{

HX_DEFINE_DYNAMIC_FUNC1(AbstractAnimation_obj,setFrameDurations,)

HX_DEFINE_DYNAMIC_FUNC0(AbstractAnimation_obj,getFrameDurations,return )

HX_DEFINE_DYNAMIC_FUNC5(AbstractAnimation_obj,draw,)

HX_DEFINE_DYNAMIC_FUNC0(AbstractAnimation_obj,updateBitmap,)

HX_DEFINE_DYNAMIC_FUNC0(AbstractAnimation_obj,needsBitmapUpdate,return )

HX_DEFINE_DYNAMIC_FUNC0(AbstractAnimation_obj,reset,)

HX_DEFINE_DYNAMIC_FUNC0(AbstractAnimation_obj,isFinished,return )

HX_DEFINE_DYNAMIC_FUNC1(AbstractAnimation_obj,setFrame,)

HX_DEFINE_DYNAMIC_FUNC0(AbstractAnimation_obj,getNumFrames,return )

HX_DEFINE_DYNAMIC_FUNC0(AbstractAnimation_obj,getCurrentFrame,return )

HX_DEFINE_DYNAMIC_FUNC1(AbstractAnimation_obj,update,)


static ::String sMemberFields[] = {
	HX_CSTRING("setFrameDurations"),
	HX_CSTRING("getFrameDurations"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateBitmap"),
	HX_CSTRING("needsBitmapUpdate"),
	HX_CSTRING("reset"),
	HX_CSTRING("isFinished"),
	HX_CSTRING("setFrame"),
	HX_CSTRING("getNumFrames"),
	HX_CSTRING("getCurrentFrame"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractAnimation_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractAnimation_obj::__mClass,"__mClass");
};

Class AbstractAnimation_obj::__mClass;

void AbstractAnimation_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.AbstractAnimation"), hx::TCanCast< AbstractAnimation_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AbstractAnimation_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
