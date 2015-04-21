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
#ifndef INCLUDED_com_stencyl_models_Atlas
#include <com/stencyl/models/Atlas.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Tile
#include <com/stencyl/models/scene/Tile.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Tileset
#include <com/stencyl/models/scene/Tileset.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace scene{

Void Tile_obj::__construct(int tileID,int collisionID,int frameIndex,Array< int > durations,::com::stencyl::models::scene::Tileset parent)
{
HX_STACK_PUSH("Tile::new","com/stencyl/models/scene/Tile.hx",35);
{
	HX_STACK_LINE(36)
	this->tileID = tileID;
	HX_STACK_LINE(37)
	this->collisionID = collisionID;
	HX_STACK_LINE(38)
	this->frameIndex = frameIndex;
	HX_STACK_LINE(39)
	this->durations = durations;
	HX_STACK_LINE(40)
	this->parent = parent;
	HX_STACK_LINE(42)
	::com::stencyl::models::Atlas atlas = ::com::stencyl::models::GameModel_obj::get()->atlases->get(parent->atlasID);		HX_STACK_VAR(atlas,"atlas");
	HX_STACK_LINE(44)
	if (((bool((atlas != null())) && bool(atlas->active)))){
		HX_STACK_LINE(45)
		this->loadGraphics();
	}
	HX_STACK_LINE(49)
	this->currFrame = (int)0;
	HX_STACK_LINE(50)
	this->currTime = (int)0;
	HX_STACK_LINE(51)
	this->updateSource = false;
}
;
	return null();
}

Tile_obj::~Tile_obj() { }

Dynamic Tile_obj::__CreateEmpty() { return  new Tile_obj; }
hx::ObjectPtr< Tile_obj > Tile_obj::__new(int tileID,int collisionID,int frameIndex,Array< int > durations,::com::stencyl::models::scene::Tileset parent)
{  hx::ObjectPtr< Tile_obj > result = new Tile_obj();
	result->__construct(tileID,collisionID,frameIndex,durations,parent);
	return result;}

Dynamic Tile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tile_obj > result = new Tile_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void Tile_obj::unloadGraphics( ){
{
		HX_STACK_PUSH("Tile::unloadGraphics","com/stencyl/models/scene/Tile.hx",119);
		HX_STACK_THIS(this);
		HX_STACK_LINE(120)
		this->pixels = null();
		HX_STACK_LINE(123)
		this->data = null();
		HX_STACK_LINE(126)
		if (((this->durations->length > (int)1))){
			HX_STACK_LINE(127)
			::com::stencyl::Data_obj::get()->resourceAssets->remove((((this->parent->ID + HX_CSTRING("-")) + this->tileID) + HX_CSTRING(".png")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,unloadGraphics,(void))

Void Tile_obj::loadGraphics( ){
{
		HX_STACK_PUSH("Tile::loadGraphics","com/stencyl/models/scene/Tile.hx",90);
		HX_STACK_THIS(this);
		HX_STACK_LINE(91)
		::flash::display::BitmapData imgData = null();		HX_STACK_VAR(imgData,"imgData");
		HX_STACK_LINE(93)
		if (((this->durations->length > (int)1))){
			HX_STACK_LINE(94)
			imgData = ::com::stencyl::Data_obj::get()->getGraphicAsset((((this->parent->ID + HX_CSTRING("-")) + this->tileID) + HX_CSTRING(".png")),((((((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/tileset-")) + this->parent->ID) + HX_CSTRING("-")) + this->tileID) + HX_CSTRING(".png")));
		}
		HX_STACK_LINE(102)
		this->pixels = imgData;
		HX_STACK_LINE(105)
		if (((imgData != null()))){
			HX_STACK_LINE(107)
			this->data = ::openfl::display::Tilesheet_obj::__new(imgData);
			HX_STACK_LINE(109)
			{
				HX_STACK_LINE(109)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->durations->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(109)
				while(((_g1 < _g))){
					HX_STACK_LINE(109)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(111)
					this->currFrame = i;
					HX_STACK_LINE(112)
					this->data->addTileRect(this->getSource(this->parent->tileWidth,this->parent->tileHeight),null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,loadGraphics,(void))

::flash::geom::Rectangle Tile_obj::getSource( int tileWidth,int tileHeight){
	HX_STACK_PUSH("Tile::getSource","com/stencyl/models/scene/Tile.hx",83);
	HX_STACK_THIS(this);
	HX_STACK_ARG(tileWidth,"tileWidth");
	HX_STACK_ARG(tileHeight,"tileHeight");
	HX_STACK_LINE(83)
	return ::flash::geom::Rectangle_obj::__new(((this->currFrame * tileWidth) * ::com::stencyl::Engine_obj::SCALE),(int)0,(tileWidth * ::com::stencyl::Engine_obj::SCALE),(tileHeight * ::com::stencyl::Engine_obj::SCALE));
}


HX_DEFINE_DYNAMIC_FUNC2(Tile_obj,getSource,return )

Void Tile_obj::update( Float elapsedTime){
{
		HX_STACK_PUSH("Tile::update","com/stencyl/models/scene/Tile.hx",55);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_LINE(56)
		if (((this->durations->length == (int)1))){
			HX_STACK_LINE(57)
			return null();
		}
		HX_STACK_LINE(61)
		hx::AddEq(this->currTime,::Math_obj::floor(elapsedTime));
		HX_STACK_LINE(63)
		if (((this->currTime > ::Std_obj::_int(this->durations->__get(this->currFrame))))){
			HX_STACK_LINE(65)
			hx::SubEq(this->currTime,::Std_obj::_int(this->durations->__get(this->currFrame)));
			HX_STACK_LINE(67)
			if ((((this->currFrame + (int)1) < this->durations->length))){
				HX_STACK_LINE(68)
				(this->currFrame)++;
			}
			else{
				HX_STACK_LINE(73)
				this->currFrame = (int)0;
			}
			HX_STACK_LINE(77)
			this->updateSource = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,update,(void))


Tile_obj::Tile_obj()
{
}

void Tile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tile);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(updateSource,"updateSource");
	HX_MARK_MEMBER_NAME(currTime,"currTime");
	HX_MARK_MEMBER_NAME(currFrame,"currFrame");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(durations,"durations");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(frameIndex,"frameIndex");
	HX_MARK_MEMBER_NAME(collisionID,"collisionID");
	HX_MARK_MEMBER_NAME(tileID,"tileID");
	HX_MARK_END_CLASS();
}

void Tile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(updateSource,"updateSource");
	HX_VISIT_MEMBER_NAME(currTime,"currTime");
	HX_VISIT_MEMBER_NAME(currFrame,"currFrame");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(durations,"durations");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(frameIndex,"frameIndex");
	HX_VISIT_MEMBER_NAME(collisionID,"collisionID");
	HX_VISIT_MEMBER_NAME(tileID,"tileID");
}

Dynamic Tile_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"pixels") ) { return pixels; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"tileID") ) { return tileID; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currTime") ) { return currTime; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getSource") ) { return getSource_dyn(); }
		if (HX_FIELD_EQ(inName,"currFrame") ) { return currFrame; }
		if (HX_FIELD_EQ(inName,"durations") ) { return durations; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameIndex") ) { return frameIndex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collisionID") ) { return collisionID; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return loadGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSource") ) { return updateSource; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unloadGraphics") ) { return unloadGraphics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tile_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::openfl::display::Tilesheet >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::com::stencyl::models::scene::Tileset >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileID") ) { tileID=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currTime") ) { currTime=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"currFrame") ) { currFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"durations") ) { durations=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameIndex") ) { frameIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collisionID") ) { collisionID=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateSource") ) { updateSource=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("updateSource"));
	outFields->push(HX_CSTRING("currTime"));
	outFields->push(HX_CSTRING("currFrame"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("durations"));
	outFields->push(HX_CSTRING("pixels"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("frameIndex"));
	outFields->push(HX_CSTRING("collisionID"));
	outFields->push(HX_CSTRING("tileID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("unloadGraphics"),
	HX_CSTRING("loadGraphics"),
	HX_CSTRING("getSource"),
	HX_CSTRING("update"),
	HX_CSTRING("data"),
	HX_CSTRING("updateSource"),
	HX_CSTRING("currTime"),
	HX_CSTRING("currFrame"),
	HX_CSTRING("frames"),
	HX_CSTRING("durations"),
	HX_CSTRING("pixels"),
	HX_CSTRING("parent"),
	HX_CSTRING("frameIndex"),
	HX_CSTRING("collisionID"),
	HX_CSTRING("tileID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
};

Class Tile_obj::__mClass;

void Tile_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.scene.Tile"), hx::TCanCast< Tile_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Tile_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene
