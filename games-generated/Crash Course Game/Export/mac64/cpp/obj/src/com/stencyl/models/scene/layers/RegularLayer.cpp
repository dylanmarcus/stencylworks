#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_scene_layers_RegularLayer
#include <com/stencyl/models/scene/layers/RegularLayer.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace scene{
namespace layers{

Void RegularLayer_obj::__construct()
{
HX_STACK_PUSH("RegularLayer::new","com/stencyl/models/scene/layers/RegularLayer.hx",8);
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

RegularLayer_obj::~RegularLayer_obj() { }

Dynamic RegularLayer_obj::__CreateEmpty() { return  new RegularLayer_obj; }
hx::ObjectPtr< RegularLayer_obj > RegularLayer_obj::__new()
{  hx::ObjectPtr< RegularLayer_obj > result = new RegularLayer_obj();
	result->__construct();
	return result;}

Dynamic RegularLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RegularLayer_obj > result = new RegularLayer_obj();
	result->__construct();
	return result;}


RegularLayer_obj::RegularLayer_obj()
{
}

void RegularLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegularLayer);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RegularLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic RegularLayer_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic RegularLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void RegularLayer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RegularLayer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RegularLayer_obj::__mClass,"__mClass");
};

Class RegularLayer_obj::__mClass;

void RegularLayer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.scene.layers.RegularLayer"), hx::TCanCast< RegularLayer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RegularLayer_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene
} // end namespace layers
