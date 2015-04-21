#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Data
#include <com/stencyl/Data.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
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
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace background{

Void ImageBackground_obj::__construct(int ID,int atlasID,::String name,Array< int > durations,Float parallaxX,Float parallaxY,bool repeats)
{
HX_STACK_PUSH("ImageBackground::new","com/stencyl/models/background/ImageBackground.hx",38);
{
	HX_STACK_LINE(39)
	super::__construct(ID,name,atlasID);
	HX_STACK_LINE(41)
	this->parallaxX = parallaxX;
	HX_STACK_LINE(42)
	this->parallaxY = parallaxY;
	HX_STACK_LINE(43)
	this->durations = durations;
	HX_STACK_LINE(44)
	this->repeats = repeats;
	HX_STACK_LINE(46)
	this->currTime = (int)0;
	HX_STACK_LINE(47)
	this->currFrame = (int)0;
	HX_STACK_LINE(49)
	if ((this->isAtlasActive())){
		HX_STACK_LINE(50)
		this->loadGraphics();
	}
	HX_STACK_LINE(54)
	this->repeated = false;
}
;
	return null();
}

ImageBackground_obj::~ImageBackground_obj() { }

Dynamic ImageBackground_obj::__CreateEmpty() { return  new ImageBackground_obj; }
hx::ObjectPtr< ImageBackground_obj > ImageBackground_obj::__new(int ID,int atlasID,::String name,Array< int > durations,Float parallaxX,Float parallaxY,bool repeats)
{  hx::ObjectPtr< ImageBackground_obj > result = new ImageBackground_obj();
	result->__construct(ID,atlasID,name,durations,parallaxX,parallaxY,repeats);
	return result;}

Dynamic ImageBackground_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageBackground_obj > result = new ImageBackground_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

hx::Object *ImageBackground_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::stencyl::models::Background_obj)) return operator ::com::stencyl::models::Background_obj *();
	return super::__ToInterface(inType);
}

Void ImageBackground_obj::unloadGraphics( ){
{
		HX_STACK_PUSH("ImageBackground::unloadGraphics","com/stencyl/models/background/ImageBackground.hx",152);
		HX_STACK_THIS(this);
		HX_STACK_LINE(154)
		this->img = ::flash::display::BitmapData_obj::__new((int)1,(int)1,null(),null(),null());
		HX_STACK_LINE(155)
		this->currFrame = (int)0;
		HX_STACK_LINE(157)
		this->frames = Dynamic( Array_obj<Dynamic>::__new());
		HX_STACK_LINE(159)
		{
			HX_STACK_LINE(159)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< int > _g1 = this->durations;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(159)
			while(((_g < _g1->length))){
				HX_STACK_LINE(159)
				int d = _g1->__get(_g);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(159)
				++(_g);
				HX_STACK_LINE(161)
				this->frames->__Field(HX_CSTRING("push"),true)(this->img);
			}
		}
		HX_STACK_LINE(166)
		int numFrames = this->durations->length;		HX_STACK_VAR(numFrames,"numFrames");
		HX_STACK_LINE(168)
		if (((numFrames > (int)0))){
			HX_STACK_LINE(170)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(170)
			while(((_g < numFrames))){
				HX_STACK_LINE(170)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(172)
				::com::stencyl::Data_obj::get()->resourceAssets->remove((((this->ID + HX_CSTRING("-")) + i) + HX_CSTRING(".png")));
			}
		}
		else{
			HX_STACK_LINE(177)
			::com::stencyl::Data_obj::get()->resourceAssets->remove((this->ID + HX_CSTRING("-0.png")));
		}
	}
return null();
}


Void ImageBackground_obj::loadGraphics( ){
{
		HX_STACK_PUSH("ImageBackground::loadGraphics","com/stencyl/models/background/ImageBackground.hx",108);
		HX_STACK_THIS(this);
		HX_STACK_LINE(109)
		Dynamic frameData = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(frameData,"frameData");
		HX_STACK_LINE(110)
		int numFrames = this->durations->length;		HX_STACK_VAR(numFrames,"numFrames");
		HX_STACK_LINE(112)
		if (((numFrames > (int)0))){
			HX_STACK_LINE(114)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(114)
			while(((_g < numFrames))){
				HX_STACK_LINE(114)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(116)
				frameData->__Field(HX_CSTRING("push"),true)(::com::stencyl::Data_obj::get()->getGraphicAsset((((this->ID + HX_CSTRING("-")) + i) + HX_CSTRING(".png")),((((((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/background-")) + this->ID) + HX_CSTRING("-")) + i) + HX_CSTRING(".png"))));
			}
		}
		else{
			HX_STACK_LINE(128)
			frameData->__Field(HX_CSTRING("push"),true)(::com::stencyl::Data_obj::get()->getGraphicAsset((this->ID + HX_CSTRING("-0.png")),((((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/background-")) + this->ID) + HX_CSTRING("-0.png"))));
		}
		HX_STACK_LINE(141)
		this->frames = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = frameData->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(143)
			while(((_g1 < _g))){
				HX_STACK_LINE(143)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(145)
				this->frames->__Field(HX_CSTRING("push"),true)(frameData->__GetItem(i));
			}
		}
		HX_STACK_LINE(148)
		this->img = this->frames->__GetItem((int)0);
	}
return null();
}


Void ImageBackground_obj::drawRepeated( ::com::stencyl::models::scene::layers::BackgroundLayer bitmap,int screenWidth,int screenHeight){
{
		HX_STACK_PUSH("ImageBackground::drawRepeated","com/stencyl/models/background/ImageBackground.hx",67);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bitmap,"bitmap");
		HX_STACK_ARG(screenWidth,"screenWidth");
		HX_STACK_ARG(screenHeight,"screenHeight");
		HX_STACK_LINE(68)
		Float tw = this->img->get_width();		HX_STACK_VAR(tw,"tw");
		HX_STACK_LINE(69)
		Float th = this->img->get_height();		HX_STACK_VAR(th,"th");
		HX_STACK_LINE(70)
		::flash::geom::Rectangle rect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,tw,th);		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(72)
		if (((bool((tw >= screenWidth)) && bool((th >= screenHeight))))){
			HX_STACK_LINE(74)
			this->repeated = true;
			HX_STACK_LINE(75)
			return null();
		}
		HX_STACK_LINE(79)
		if (((tw < screenWidth))){
			HX_STACK_LINE(80)
			hx::AddEq(screenWidth,(::Std_obj::_int(tw) - hx::Mod(screenWidth,::Std_obj::_int(tw))));
		}
		HX_STACK_LINE(84)
		if (((th < screenHeight))){
			HX_STACK_LINE(85)
			hx::AddEq(screenHeight,(::Std_obj::_int(th) - hx::Mod(screenHeight,::Std_obj::_int(th))));
		}
		HX_STACK_LINE(89)
		::flash::display::BitmapData texture = ::flash::display::BitmapData_obj::__new(screenWidth,screenHeight,null(),null(),null());		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (::Std_obj::_int((Float(screenHeight) / Float(th))) + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(91)
			while(((_g1 < _g))){
				HX_STACK_LINE(91)
				int yPos = (_g1)++;		HX_STACK_VAR(yPos,"yPos");
				HX_STACK_LINE(93)
				{
					HX_STACK_LINE(93)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = (::Std_obj::_int((Float(screenWidth) / Float(tw))) + (int)1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(93)
					while(((_g3 < _g2))){
						HX_STACK_LINE(93)
						int xPos = (_g3)++;		HX_STACK_VAR(xPos,"xPos");
						HX_STACK_LINE(95)
						texture->copyPixels(this->img,rect,::flash::geom::Point_obj::__new((xPos * tw),(yPos * th)),null(),null(),null());
					}
				}
			}
		}
		HX_STACK_LINE(99)
		bitmap->setImage(texture);
		HX_STACK_LINE(100)
		this->img = texture;
		HX_STACK_LINE(102)
		this->repeated = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ImageBackground_obj,drawRepeated,(void))

Void ImageBackground_obj::draw( ::flash::display::Graphics g,int cameraX,int cameraY,int screenWidth,int screenHeight){
{
		HX_STACK_PUSH("ImageBackground::draw","com/stencyl/models/background/ImageBackground.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_ARG(cameraX,"cameraX");
		HX_STACK_ARG(cameraY,"cameraY");
		HX_STACK_ARG(screenWidth,"screenWidth");
		HX_STACK_ARG(screenHeight,"screenHeight");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ImageBackground_obj,draw,(void))

Void ImageBackground_obj::update( ){
{
		HX_STACK_PUSH("ImageBackground::update","com/stencyl/models/background/ImageBackground.hx",58);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ImageBackground_obj,update,(void))


ImageBackground_obj::ImageBackground_obj()
{
}

void ImageBackground_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageBackground);
	HX_MARK_MEMBER_NAME(repeated,"repeated");
	HX_MARK_MEMBER_NAME(repeats,"repeats");
	HX_MARK_MEMBER_NAME(parallaxY,"parallaxY");
	HX_MARK_MEMBER_NAME(parallaxX,"parallaxX");
	HX_MARK_MEMBER_NAME(durations,"durations");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(img,"img");
	HX_MARK_MEMBER_NAME(currTime,"currTime");
	HX_MARK_MEMBER_NAME(currFrame,"currFrame");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ImageBackground_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(repeated,"repeated");
	HX_VISIT_MEMBER_NAME(repeats,"repeats");
	HX_VISIT_MEMBER_NAME(parallaxY,"parallaxY");
	HX_VISIT_MEMBER_NAME(parallaxX,"parallaxX");
	HX_VISIT_MEMBER_NAME(durations,"durations");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(img,"img");
	HX_VISIT_MEMBER_NAME(currTime,"currTime");
	HX_VISIT_MEMBER_NAME(currFrame,"currFrame");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ImageBackground_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"img") ) { return img; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"repeats") ) { return repeats; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"repeated") ) { return repeated; }
		if (HX_FIELD_EQ(inName,"currTime") ) { return currTime; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parallaxY") ) { return parallaxY; }
		if (HX_FIELD_EQ(inName,"parallaxX") ) { return parallaxX; }
		if (HX_FIELD_EQ(inName,"durations") ) { return durations; }
		if (HX_FIELD_EQ(inName,"currFrame") ) { return currFrame; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return loadGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRepeated") ) { return drawRepeated_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unloadGraphics") ) { return unloadGraphics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ImageBackground_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"img") ) { img=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"repeats") ) { repeats=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"repeated") ) { repeated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currTime") ) { currTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parallaxY") ) { parallaxY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parallaxX") ) { parallaxX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"durations") ) { durations=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currFrame") ) { currFrame=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageBackground_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("repeated"));
	outFields->push(HX_CSTRING("repeats"));
	outFields->push(HX_CSTRING("parallaxY"));
	outFields->push(HX_CSTRING("parallaxX"));
	outFields->push(HX_CSTRING("durations"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("img"));
	outFields->push(HX_CSTRING("currTime"));
	outFields->push(HX_CSTRING("currFrame"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("unloadGraphics"),
	HX_CSTRING("loadGraphics"),
	HX_CSTRING("drawRepeated"),
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("repeated"),
	HX_CSTRING("repeats"),
	HX_CSTRING("parallaxY"),
	HX_CSTRING("parallaxX"),
	HX_CSTRING("durations"),
	HX_CSTRING("frames"),
	HX_CSTRING("img"),
	HX_CSTRING("currTime"),
	HX_CSTRING("currFrame"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageBackground_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageBackground_obj::__mClass,"__mClass");
};

Class ImageBackground_obj::__mClass;

void ImageBackground_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.background.ImageBackground"), hx::TCanCast< ImageBackground_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ImageBackground_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace background
