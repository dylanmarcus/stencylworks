#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_Background
#include <com/stencyl/models/Background.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_background_ImageBackground
#include <com/stencyl/models/background/ImageBackground.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_layers_BackgroundLayer
#include <com/stencyl/models/scene/layers/BackgroundLayer.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
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

Void BackgroundLayer_obj::__construct(::flash::display::BitmapData bitmapData,::com::stencyl::models::background::ImageBackground model)
{
HX_STACK_PUSH("BackgroundLayer::new","com/stencyl/models/scene/layers/BackgroundLayer.hx",47);
{
	HX_STACK_LINE(49)
	super::__construct(bitmapData,::flash::display::PixelSnapping_obj::AUTO,true);
	HX_STACK_LINE(59)
	this->model = model;
	HX_STACK_LINE(61)
	this->currIndex = (int)0;
	HX_STACK_LINE(62)
	this->currTime = (int)0;
	HX_STACK_LINE(64)
	this->isAnimated = (model->frames->__Field(HX_CSTRING("length"),true) > (int)1);
	HX_STACK_LINE(65)
	this->frameCount = model->frames->__Field(HX_CSTRING("length"),true);
}
;
	return null();
}

BackgroundLayer_obj::~BackgroundLayer_obj() { }

Dynamic BackgroundLayer_obj::__CreateEmpty() { return  new BackgroundLayer_obj; }
hx::ObjectPtr< BackgroundLayer_obj > BackgroundLayer_obj::__new(::flash::display::BitmapData bitmapData,::com::stencyl::models::background::ImageBackground model)
{  hx::ObjectPtr< BackgroundLayer_obj > result = new BackgroundLayer_obj();
	result->__construct(bitmapData,model);
	return result;}

Dynamic BackgroundLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BackgroundLayer_obj > result = new BackgroundLayer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void BackgroundLayer_obj::updateAnimation( Float elapsedTime){
{
		HX_STACK_PUSH("BackgroundLayer::updateAnimation","com/stencyl/models/scene/layers/BackgroundLayer.hx",95);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_LINE(96)
		hx::AddEq(this->currTime,elapsedTime);
		HX_STACK_LINE(98)
		if (((bool((this->model != null())) && bool((this->currTime >= this->model->durations->__get(this->currIndex)))))){
			HX_STACK_LINE(100)
			this->currTime = (int)0;
			HX_STACK_LINE(101)
			(this->currIndex)++;
			HX_STACK_LINE(103)
			if (((this->currIndex >= this->frameCount))){
				HX_STACK_LINE(104)
				this->currIndex = (int)0;
			}
			HX_STACK_LINE(109)
			this->set_bitmapData(this->model->frames->__GetItem(this->currIndex));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundLayer_obj,updateAnimation,(void))

Void BackgroundLayer_obj::setImage( ::flash::display::BitmapData bitmapData){
{
		HX_STACK_PUSH("BackgroundLayer::setImage","com/stencyl/models/scene/layers/BackgroundLayer.hx",74);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bitmapData,"bitmapData");
		HX_STACK_LINE(76)
		this->set_bitmapData(bitmapData);
		HX_STACK_LINE(82)
		this->currIndex = (int)0;
		HX_STACK_LINE(83)
		this->currTime = (int)0;
		HX_STACK_LINE(85)
		this->isAnimated = (this->model->frames->__Field(HX_CSTRING("length"),true) > (int)1);
		HX_STACK_LINE(86)
		this->frameCount = this->model->frames->__Field(HX_CSTRING("length"),true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundLayer_obj,setImage,(void))


BackgroundLayer_obj::BackgroundLayer_obj()
{
}

void BackgroundLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BackgroundLayer);
	HX_MARK_MEMBER_NAME(cacheHeight,"cacheHeight");
	HX_MARK_MEMBER_NAME(cacheWidth,"cacheWidth");
	HX_MARK_MEMBER_NAME(currTime,"currTime");
	HX_MARK_MEMBER_NAME(currIndex,"currIndex");
	HX_MARK_MEMBER_NAME(frameCount,"frameCount");
	HX_MARK_MEMBER_NAME(isAnimated,"isAnimated");
	HX_MARK_MEMBER_NAME(model,"model");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BackgroundLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cacheHeight,"cacheHeight");
	HX_VISIT_MEMBER_NAME(cacheWidth,"cacheWidth");
	HX_VISIT_MEMBER_NAME(currTime,"currTime");
	HX_VISIT_MEMBER_NAME(currIndex,"currIndex");
	HX_VISIT_MEMBER_NAME(frameCount,"frameCount");
	HX_VISIT_MEMBER_NAME(isAnimated,"isAnimated");
	HX_VISIT_MEMBER_NAME(model,"model");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BackgroundLayer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return model; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setImage") ) { return setImage_dyn(); }
		if (HX_FIELD_EQ(inName,"currTime") ) { return currTime; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"currIndex") ) { return currIndex; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cacheWidth") ) { return cacheWidth; }
		if (HX_FIELD_EQ(inName,"frameCount") ) { return frameCount; }
		if (HX_FIELD_EQ(inName,"isAnimated") ) { return isAnimated; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cacheHeight") ) { return cacheHeight; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateAnimation") ) { return updateAnimation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BackgroundLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast< ::com::stencyl::models::background::ImageBackground >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currTime") ) { currTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"currIndex") ) { currIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cacheWidth") ) { cacheWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameCount") ) { frameCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isAnimated") ) { isAnimated=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cacheHeight") ) { cacheHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackgroundLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cacheHeight"));
	outFields->push(HX_CSTRING("cacheWidth"));
	outFields->push(HX_CSTRING("currTime"));
	outFields->push(HX_CSTRING("currIndex"));
	outFields->push(HX_CSTRING("frameCount"));
	outFields->push(HX_CSTRING("isAnimated"));
	outFields->push(HX_CSTRING("model"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateAnimation"),
	HX_CSTRING("setImage"),
	HX_CSTRING("cacheHeight"),
	HX_CSTRING("cacheWidth"),
	HX_CSTRING("currTime"),
	HX_CSTRING("currIndex"),
	HX_CSTRING("frameCount"),
	HX_CSTRING("isAnimated"),
	HX_CSTRING("model"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BackgroundLayer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackgroundLayer_obj::__mClass,"__mClass");
};

Class BackgroundLayer_obj::__mClass;

void BackgroundLayer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.scene.layers.BackgroundLayer"), hx::TCanCast< BackgroundLayer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BackgroundLayer_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene
} // end namespace layers
