#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_scene_Layer
#include <com/stencyl/models/scene/Layer.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_TileLayer
#include <com/stencyl/models/scene/TileLayer.h>
#endif
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

Void Layer_obj::__construct(int ID,int order,::com::stencyl::models::scene::TileLayer tiles,::flash::display::Sprite overlay,Dynamic bitmapOverlay)
{
HX_STACK_PUSH("Layer::new","com/stencyl/models/scene/Layer.hx",24);
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(27)
	this->tiles = tiles;
	HX_STACK_LINE(28)
	this->overlay = overlay;
	HX_STACK_LINE(29)
	this->bitmapOverlay = bitmapOverlay;
	HX_STACK_LINE(31)
	this->ID = ID;
	HX_STACK_LINE(32)
	this->order = order;
	HX_STACK_LINE(37)
	this->drawnOn = true;
}
;
	return null();
}

Layer_obj::~Layer_obj() { }

Dynamic Layer_obj::__CreateEmpty() { return  new Layer_obj; }
hx::ObjectPtr< Layer_obj > Layer_obj::__new(int ID,int order,::com::stencyl::models::scene::TileLayer tiles,::flash::display::Sprite overlay,Dynamic bitmapOverlay)
{  hx::ObjectPtr< Layer_obj > result = new Layer_obj();
	result->__construct(ID,order,tiles,overlay,bitmapOverlay);
	return result;}

Dynamic Layer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Layer_obj > result = new Layer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}


Layer_obj::Layer_obj()
{
}

void Layer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Layer);
	HX_MARK_MEMBER_NAME(drawnOn,"drawnOn");
	HX_MARK_MEMBER_NAME(bitmapOverlay,"bitmapOverlay");
	HX_MARK_MEMBER_NAME(overlay,"overlay");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(order,"order");
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Layer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(drawnOn,"drawnOn");
	HX_VISIT_MEMBER_NAME(bitmapOverlay,"bitmapOverlay");
	HX_VISIT_MEMBER_NAME(overlay,"overlay");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(order,"order");
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Layer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"order") ) { return order; }
		if (HX_FIELD_EQ(inName,"tiles") ) { return tiles; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"drawnOn") ) { return drawnOn; }
		if (HX_FIELD_EQ(inName,"overlay") ) { return overlay; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitmapOverlay") ) { return bitmapOverlay; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Layer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"order") ) { order=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=inValue.Cast< ::com::stencyl::models::scene::TileLayer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"drawnOn") ) { drawnOn=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overlay") ) { overlay=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitmapOverlay") ) { bitmapOverlay=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Layer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("drawnOn"));
	outFields->push(HX_CSTRING("bitmapOverlay"));
	outFields->push(HX_CSTRING("overlay"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("order"));
	outFields->push(HX_CSTRING("ID"));
	outFields->push(HX_CSTRING("tiles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("drawnOn"),
	HX_CSTRING("bitmapOverlay"),
	HX_CSTRING("overlay"),
	HX_CSTRING("color"),
	HX_CSTRING("order"),
	HX_CSTRING("ID"),
	HX_CSTRING("tiles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Layer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Layer_obj::__mClass,"__mClass");
};

Class Layer_obj::__mClass;

void Layer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.scene.Layer"), hx::TCanCast< Layer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Layer_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene
