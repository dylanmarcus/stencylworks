#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_AssetLoader
#include <com/stencyl/AssetLoader.h>
#endif
#ifndef INCLUDED_com_stencyl_Data
#include <com/stencyl/Data.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
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
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace scene{

Void Tileset_obj::__construct(int ID,int atlasID,::String name,int framesAcross,int framesDown,int tileWidth,int tileHeight,Array< ::Dynamic > tiles)
{
HX_STACK_PUSH("Tileset::new","com/stencyl/models/scene/Tileset.hx",32);
{
	HX_STACK_LINE(33)
	super::__construct(ID,name,atlasID);
	HX_STACK_LINE(35)
	this->framesAcross = framesAcross;
	HX_STACK_LINE(36)
	this->framesDown = framesDown;
	HX_STACK_LINE(37)
	this->tileWidth = tileWidth;
	HX_STACK_LINE(38)
	this->tileHeight = tileHeight;
	HX_STACK_LINE(39)
	this->tiles = tiles;
	HX_STACK_LINE(41)
	if ((this->isAtlasActive())){
		HX_STACK_LINE(42)
		this->loadGraphics();
	}
	HX_STACK_LINE(46)
	::com::stencyl::models::scene::Tileset_obj::temp = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
}
;
	return null();
}

Tileset_obj::~Tileset_obj() { }

Dynamic Tileset_obj::__CreateEmpty() { return  new Tileset_obj; }
hx::ObjectPtr< Tileset_obj > Tileset_obj::__new(int ID,int atlasID,::String name,int framesAcross,int framesDown,int tileWidth,int tileHeight,Array< ::Dynamic > tiles)
{  hx::ObjectPtr< Tileset_obj > result = new Tileset_obj();
	result->__construct(ID,atlasID,name,framesAcross,framesDown,tileWidth,tileHeight,tiles);
	return result;}

Dynamic Tileset_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tileset_obj > result = new Tileset_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

::flash::display::BitmapData Tileset_obj::convertPixels( ::flash::display::BitmapData oldPixels){
	HX_STACK_PUSH("Tileset::convertPixels","com/stencyl/models/scene/Tileset.hx",152);
	HX_STACK_THIS(this);
	HX_STACK_ARG(oldPixels,"oldPixels");
	HX_STACK_LINE(153)
	int scaledTileWidth = ::Std_obj::_int((this->tileWidth * ::com::stencyl::Engine_obj::SCALE));		HX_STACK_VAR(scaledTileWidth,"scaledTileWidth");
	HX_STACK_LINE(154)
	int scaledTileHeight = ::Std_obj::_int((this->tileHeight * ::com::stencyl::Engine_obj::SCALE));		HX_STACK_VAR(scaledTileHeight,"scaledTileHeight");
	HX_STACK_LINE(155)
	int widthInTiles = ::Std_obj::_int((Float(oldPixels->get_width()) / Float(scaledTileWidth)));		HX_STACK_VAR(widthInTiles,"widthInTiles");
	HX_STACK_LINE(156)
	int heightInTiles = ::Std_obj::_int((Float(oldPixels->get_height()) / Float(scaledTileHeight)));		HX_STACK_VAR(heightInTiles,"heightInTiles");
	HX_STACK_LINE(157)
	int newWidth = ::Std_obj::_int((oldPixels->get_width() + (widthInTiles * (int)2)));		HX_STACK_VAR(newWidth,"newWidth");
	HX_STACK_LINE(158)
	int newHeight = ::Std_obj::_int((oldPixels->get_height() + (heightInTiles * (int)2)));		HX_STACK_VAR(newHeight,"newHeight");
	HX_STACK_LINE(159)
	::flash::display::BitmapData tempPixels = ::flash::display::BitmapData_obj::__new(newWidth,newHeight,true,(int)0,null());		HX_STACK_VAR(tempPixels,"tempPixels");
	HX_STACK_LINE(160)
	int heightIndex;		HX_STACK_VAR(heightIndex,"heightIndex");
	HX_STACK_LINE(161)
	int widthIndex;		HX_STACK_VAR(widthIndex,"widthIndex");
	HX_STACK_LINE(162)
	int pointX;		HX_STACK_VAR(pointX,"pointX");
	HX_STACK_LINE(163)
	int pointY;		HX_STACK_VAR(pointY,"pointY");
	HX_STACK_LINE(164)
	::flash::geom::Rectangle rect;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(165)
	::flash::geom::Point point;		HX_STACK_VAR(point,"point");
	HX_STACK_LINE(168)
	heightIndex = (int)0;
	HX_STACK_LINE(169)
	while(((heightIndex < heightInTiles))){
		HX_STACK_LINE(171)
		widthIndex = (int)0;
		HX_STACK_LINE(172)
		while(((widthIndex < widthInTiles))){
			HX_STACK_LINE(174)
			pointX = ::Std_obj::_int((((widthIndex * scaledTileWidth) + (widthIndex * (int)2)) + (int)1));
			HX_STACK_LINE(175)
			pointY = ::Std_obj::_int((((heightIndex * scaledTileHeight) + (heightIndex * (int)2)) + (int)1));
			HX_STACK_LINE(176)
			rect = ::flash::geom::Rectangle_obj::__new((widthIndex * scaledTileWidth),(heightIndex * scaledTileHeight),scaledTileWidth,scaledTileHeight);
			HX_STACK_LINE(177)
			point = ::flash::geom::Point_obj::__new(pointX,pointY);
			HX_STACK_LINE(178)
			tempPixels->copyPixels(oldPixels,rect,point,null(),null(),null());
			HX_STACK_LINE(179)
			(widthIndex)++;
		}
		HX_STACK_LINE(181)
		(heightIndex)++;
	}
	HX_STACK_LINE(184)
	int index0;		HX_STACK_VAR(index0,"index0");
	HX_STACK_LINE(185)
	int tilePixel;		HX_STACK_VAR(tilePixel,"tilePixel");
	HX_STACK_LINE(188)
	heightIndex = (int)0;
	HX_STACK_LINE(189)
	while(((heightIndex < heightInTiles))){
		HX_STACK_LINE(191)
		widthIndex = (int)0;
		HX_STACK_LINE(192)
		while(((widthIndex < widthInTiles))){
			HX_STACK_LINE(194)
			pointX = ::Std_obj::_int((((widthIndex * scaledTileWidth) + (widthIndex * (int)2)) + (int)1));
			HX_STACK_LINE(195)
			pointY = ::Std_obj::_int((((heightIndex * scaledTileHeight) + (heightIndex * (int)2)) + (int)1));
			HX_STACK_LINE(197)
			index0 = (int)0;
			HX_STACK_LINE(198)
			while(((index0 < scaledTileWidth))){
				HX_STACK_LINE(201)
				tilePixel = tempPixels->getPixel32((pointX + index0),pointY);
				HX_STACK_LINE(202)
				tempPixels->setPixel32((pointX + index0),(pointY - (int)1),tilePixel);
				HX_STACK_LINE(205)
				tilePixel = tempPixels->getPixel32((pointX + index0),((pointY + scaledTileHeight) - (int)1));
				HX_STACK_LINE(206)
				tempPixels->setPixel32((pointX + index0),(pointY + scaledTileHeight),tilePixel);
				HX_STACK_LINE(208)
				(index0)++;
			}
			HX_STACK_LINE(211)
			index0 = (int)0;
			HX_STACK_LINE(212)
			while(((index0 < scaledTileHeight))){
				HX_STACK_LINE(215)
				tilePixel = tempPixels->getPixel32(pointX,(pointY + index0));
				HX_STACK_LINE(216)
				tempPixels->setPixel32((pointX - (int)1),(pointY + index0),tilePixel);
				HX_STACK_LINE(219)
				tilePixel = tempPixels->getPixel32(((pointX + scaledTileWidth) - (int)1),(pointY + index0));
				HX_STACK_LINE(220)
				tempPixels->setPixel32((pointX + scaledTileWidth),(pointY + index0),tilePixel);
				HX_STACK_LINE(222)
				(index0)++;
			}
			HX_STACK_LINE(224)
			(widthIndex)++;
		}
		HX_STACK_LINE(226)
		(heightIndex)++;
	}
	HX_STACK_LINE(229)
	return tempPixels;
}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,convertPixels,return )

Void Tileset_obj::unloadGraphics( ){
{
		HX_STACK_PUSH("Tileset::unloadGraphics","com/stencyl/models/scene/Tileset.hx",141);
		HX_STACK_THIS(this);
		HX_STACK_LINE(142)
		this->pixels = null();
		HX_STACK_LINE(145)
		this->tilesheet = null();
		HX_STACK_LINE(148)
		::com::stencyl::Data_obj::get()->resourceAssets->remove((this->ID + HX_CSTRING(".png")));
	}
return null();
}


Void Tileset_obj::loadGraphics( ){
{
		HX_STACK_PUSH("Tileset::loadGraphics","com/stencyl/models/scene/Tileset.hx",126);
		HX_STACK_THIS(this);
		HX_STACK_LINE(127)
		this->pixels = ::com::stencyl::Data_obj::get()->getGraphicAsset((this->ID + HX_CSTRING(".png")),((((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/tileset-")) + this->ID) + HX_CSTRING(".png")));
		HX_STACK_LINE(134)
		if (((this->tiles->length > (int)0))){
			HX_STACK_LINE(135)
			this->setupTilesheet();
		}
	}
return null();
}


::flash::geom::Rectangle Tileset_obj::getImageSourceForTile( int tileID,int tileWidth,int tileHeight){
	HX_STACK_PUSH("Tileset::getImageSourceForTile","com/stencyl/models/scene/Tileset.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_ARG(tileID,"tileID");
	HX_STACK_ARG(tileWidth,"tileWidth");
	HX_STACK_ARG(tileHeight,"tileHeight");
	HX_STACK_LINE(88)
	::com::stencyl::models::scene::Tile tile = this->tiles->__get(tileID).StaticCast< ::com::stencyl::models::scene::Tile >();		HX_STACK_VAR(tile,"tile");
	HX_STACK_LINE(90)
	if (((tile == null()))){
		HX_STACK_LINE(92)
		::com::stencyl::models::scene::Tileset_obj::temp->x = (int)0;
		HX_STACK_LINE(93)
		::com::stencyl::models::scene::Tileset_obj::temp->y = (int)0;
		HX_STACK_LINE(94)
		::com::stencyl::models::scene::Tileset_obj::temp->width = (tileWidth * ::com::stencyl::Engine_obj::SCALE);
		HX_STACK_LINE(95)
		::com::stencyl::models::scene::Tileset_obj::temp->height = (tileHeight * ::com::stencyl::Engine_obj::SCALE);
		HX_STACK_LINE(97)
		return ::com::stencyl::models::scene::Tileset_obj::temp->clone();
	}
	else{
		HX_STACK_LINE(102)
		int row = ::Math_obj::floor((Float(tile->frameIndex) / Float(this->framesAcross)));		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(103)
		int col = ::Math_obj::floor(hx::Mod(tile->frameIndex,this->framesAcross));		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(105)
		if (((bool((bool(::scripts::MyAssets_obj::stretchToFit) || bool(::scripts::MyAssets_obj::scaleToFit1))) || bool(::scripts::MyAssets_obj::scaleToFit2)))){
			HX_STACK_LINE(107)
			::com::stencyl::models::scene::Tileset_obj::temp->x = ((((col * tileWidth) * ::com::stencyl::Engine_obj::SCALE) + (col * (int)2)) + (int)1);
			HX_STACK_LINE(108)
			::com::stencyl::models::scene::Tileset_obj::temp->y = ((((row * tileHeight) * ::com::stencyl::Engine_obj::SCALE) + (row * (int)2)) + (int)1);
		}
		else{
			HX_STACK_LINE(112)
			::com::stencyl::models::scene::Tileset_obj::temp->x = ((col * tileWidth) * ::com::stencyl::Engine_obj::SCALE);
			HX_STACK_LINE(113)
			::com::stencyl::models::scene::Tileset_obj::temp->y = ((row * tileHeight) * ::com::stencyl::Engine_obj::SCALE);
		}
		HX_STACK_LINE(116)
		::com::stencyl::models::scene::Tileset_obj::temp->width = (tileWidth * ::com::stencyl::Engine_obj::SCALE);
		HX_STACK_LINE(117)
		::com::stencyl::models::scene::Tileset_obj::temp->height = (tileHeight * ::com::stencyl::Engine_obj::SCALE);
		HX_STACK_LINE(119)
		return ::com::stencyl::models::scene::Tileset_obj::temp->clone();
	}
	HX_STACK_LINE(90)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Tileset_obj,getImageSourceForTile,return )

Void Tileset_obj::setupTilesheet( ){
{
		HX_STACK_PUSH("Tileset::setupTilesheet","com/stencyl/models/scene/Tileset.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_LINE(52)
		this->sheetMap = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(53)
		this->data = Array_obj< Float >::__new().Add(0.0).Add(0.0).Add((int)0);
		HX_STACK_LINE(55)
		if (((this->pixels != null()))){
			HX_STACK_LINE(57)
			if (((bool((bool(::scripts::MyAssets_obj::stretchToFit) || bool(::scripts::MyAssets_obj::scaleToFit1))) || bool(::scripts::MyAssets_obj::scaleToFit2)))){
				HX_STACK_LINE(58)
				this->tilesheet = ::openfl::display::Tilesheet_obj::__new(this->convertPixels(this->pixels));
			}
			else{
				HX_STACK_LINE(63)
				this->tilesheet = ::openfl::display::Tilesheet_obj::__new(this->pixels);
			}
			HX_STACK_LINE(67)
			int counter = (int)0;		HX_STACK_VAR(counter,"counter");
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = this->tiles;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(69)
				while(((_g < _g1->length))){
					HX_STACK_LINE(69)
					::com::stencyl::models::scene::Tile tile = _g1->__get(_g).StaticCast< ::com::stencyl::models::scene::Tile >();		HX_STACK_VAR(tile,"tile");
					HX_STACK_LINE(69)
					++(_g);
					HX_STACK_LINE(71)
					if (((tile == null()))){
						HX_STACK_LINE(72)
						continue;
					}
					HX_STACK_LINE(76)
					::flash::geom::Rectangle r = this->getImageSourceForTile(tile->tileID,::Std_obj::_int(this->tileWidth),::Std_obj::_int(this->tileHeight));		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(77)
					this->tilesheet->addTileRect(r,null());
					HX_STACK_LINE(79)
					this->sheetMap->set(tile->tileID,counter);
					HX_STACK_LINE(80)
					(counter)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tileset_obj,setupTilesheet,(void))

::flash::geom::Rectangle Tileset_obj::temp;


Tileset_obj::Tileset_obj()
{
}

void Tileset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tileset);
	HX_MARK_MEMBER_NAME(sheetMap,"sheetMap");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(tilesheet,"tilesheet");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(framesDown,"framesDown");
	HX_MARK_MEMBER_NAME(framesAcross,"framesAcross");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tileset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sheetMap,"sheetMap");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(tilesheet,"tilesheet");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(framesDown,"framesDown");
	HX_VISIT_MEMBER_NAME(framesAcross,"framesAcross");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Tileset_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { return temp; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tiles") ) { return tiles; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { return pixels; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sheetMap") ) { return sheetMap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesheet") ) { return tilesheet; }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		if (HX_FIELD_EQ(inName,"framesDown") ) { return framesDown; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return loadGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"framesAcross") ) { return framesAcross; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"convertPixels") ) { return convertPixels_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unloadGraphics") ) { return unloadGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"setupTilesheet") ) { return setupTilesheet_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getImageSourceForTile") ) { return getImageSourceForTile_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tileset_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"temp") ) { temp=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sheetMap") ) { sheetMap=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesheet") ) { tilesheet=inValue.Cast< ::openfl::display::Tilesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesDown") ) { framesDown=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"framesAcross") ) { framesAcross=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tileset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sheetMap"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("tilesheet"));
	outFields->push(HX_CSTRING("pixels"));
	outFields->push(HX_CSTRING("tiles"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("framesDown"));
	outFields->push(HX_CSTRING("framesAcross"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("temp"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("convertPixels"),
	HX_CSTRING("unloadGraphics"),
	HX_CSTRING("loadGraphics"),
	HX_CSTRING("getImageSourceForTile"),
	HX_CSTRING("setupTilesheet"),
	HX_CSTRING("sheetMap"),
	HX_CSTRING("data"),
	HX_CSTRING("tilesheet"),
	HX_CSTRING("pixels"),
	HX_CSTRING("tiles"),
	HX_CSTRING("tileHeight"),
	HX_CSTRING("tileWidth"),
	HX_CSTRING("framesDown"),
	HX_CSTRING("framesAcross"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tileset_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tileset_obj::temp,"temp");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tileset_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tileset_obj::temp,"temp");
};

Class Tileset_obj::__mClass;

void Tileset_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.scene.Tileset"), hx::TCanCast< Tileset_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Tileset_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene
