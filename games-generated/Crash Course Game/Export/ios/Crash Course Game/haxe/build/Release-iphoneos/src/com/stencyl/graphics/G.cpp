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
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_G
#include <com/stencyl/graphics/G.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_fonts_BitmapFont
#include <com/stencyl/graphics/fonts/BitmapFont.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Font
#include <com/stencyl/models/Font.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
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
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
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
namespace graphics{

Void G_obj::__construct()
{
HX_STACK_PUSH("G::new","com/stencyl/graphics/G.hx",65);
{
	HX_STACK_LINE(66)
	this->drawActor = false;
	HX_STACK_LINE(68)
	this->x = this->y = (int)0;
	HX_STACK_LINE(69)
	this->scaleX = this->scaleY = ::com::stencyl::Engine_obj::SCALE;
	HX_STACK_LINE(70)
	this->alpha = (int)1;
	HX_STACK_LINE(71)
	this->blendMode = ::flash::display::BlendMode_obj::NORMAL;
	HX_STACK_LINE(73)
	this->strokeSize = (int)0;
	HX_STACK_LINE(75)
	this->fillColor = (int)0;
	HX_STACK_LINE(76)
	this->strokeColor = (int)0;
	HX_STACK_LINE(80)
	this->rect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(81)
	this->rect2 = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(82)
	this->point = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(83)
	this->point2 = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(84)
	this->data = Array_obj< Float >::__new().Add(0.0).Add(0.0).Add((int)0);
	HX_STACK_LINE(88)
	this->drawPoly = false;
	HX_STACK_LINE(89)
	this->pointCounter = (int)0;
	HX_STACK_LINE(90)
	this->firstX = (int)0;
	HX_STACK_LINE(91)
	this->firstY = (int)0;
	HX_STACK_LINE(93)
	this->font = this->defaultFont = ::com::stencyl::models::Font_obj::__new((int)-1,(int)0,HX_CSTRING(""),true);
	HX_STACK_LINE(95)
	this->drawData = Array_obj< Float >::__new();
}
;
	return null();
}

G_obj::~G_obj() { }

Dynamic G_obj::__CreateEmpty() { return  new G_obj; }
hx::ObjectPtr< G_obj > G_obj::__new()
{  hx::ObjectPtr< G_obj > result = new G_obj();
	result->__construct();
	return result;}

Dynamic G_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< G_obj > result = new G_obj();
	result->__construct();
	return result;}

Void G_obj::resetFont( ){
{
		HX_STACK_PUSH("G::resetFont","com/stencyl/graphics/G.hx",660);
		HX_STACK_THIS(this);
		HX_STACK_LINE(660)
		this->font = this->defaultFont;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(G_obj,resetFont,(void))

int G_obj::toARGB( int rgb,int newAlpha){
	HX_STACK_PUSH("G::toARGB","com/stencyl/graphics/G.hx",651);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rgb,"rgb");
	HX_STACK_ARG(newAlpha,"newAlpha");
	HX_STACK_LINE(652)
	int argb = (int)0;		HX_STACK_VAR(argb,"argb");
	HX_STACK_LINE(653)
	argb = rgb;
	HX_STACK_LINE(654)
	hx::AddEq(argb,(int(newAlpha) << int((int)24)));
	HX_STACK_LINE(656)
	return argb;
}


HX_DEFINE_DYNAMIC_FUNC2(G_obj,toARGB,return )

Void G_obj::drawImage( ::flash::display::BitmapData img,Float x,Float y,hx::Null< Float >  __o_angle,::flash::geom::Matrix matrix){
Float angle = __o_angle.Default(0);
	HX_STACK_PUSH("G::drawImage","com/stencyl/graphics/G.hx",522);
	HX_STACK_THIS(this);
	HX_STACK_ARG(img,"img");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(matrix,"matrix");
{
		HX_STACK_LINE(523)
		hx::MultEq(x,this->scaleX);
		HX_STACK_LINE(524)
		hx::MultEq(y,this->scaleY);
		HX_STACK_LINE(526)
		this->rect->x = (int)0;
		HX_STACK_LINE(527)
		this->rect->y = (int)0;
		HX_STACK_LINE(528)
		this->rect->width = img->get_width();
		HX_STACK_LINE(529)
		this->rect->height = img->get_height();
		HX_STACK_LINE(532)
		if ((this->drawActor)){
			HX_STACK_LINE(533)
			if (((bool((this->actor != null())) && bool(this->actor->isHUD)))){
				HX_STACK_LINE(536)
				this->point->x = (this->x + x);
				HX_STACK_LINE(537)
				this->point->y = (this->y + y);
			}
			else{
				HX_STACK_LINE(542)
				this->point->x = ((this->x + x) + ::com::stencyl::Engine_obj::cameraX);
				HX_STACK_LINE(543)
				this->point->y = ((this->y + y) + ::com::stencyl::Engine_obj::cameraY);
			}
		}
		else{
			HX_STACK_LINE(549)
			this->point->x = (this->x + x);
			HX_STACK_LINE(550)
			this->point->y = (this->y + y);
		}
		HX_STACK_LINE(628)
		::openfl::display::Tilesheet sheet = ::openfl::display::Tilesheet_obj::__new(img);		HX_STACK_VAR(sheet,"sheet");
		HX_STACK_LINE(629)
		sheet->addTileRect(this->rect,this->point2);
		HX_STACK_LINE(630)
		this->data[(int)0] = this->point->x;
		HX_STACK_LINE(631)
		this->data[(int)1] = this->point->y;
		HX_STACK_LINE(632)
		this->data[(int)2] = (int)0;
		HX_STACK_LINE(635)
		if (((angle != (int)0))){
			HX_STACK_LINE(637)
			this->data[(int)3] = angle;
			HX_STACK_LINE(638)
			this->data[(int)4] = this->toARGB((int)0,::Std_obj::_int((this->alpha * (int)255)));
			HX_STACK_LINE(639)
			sheet->drawTiles(this->canvas->__Field(HX_CSTRING("graphics"),true),this->data,::scripts::MyAssets_obj::antialias,(int)10);
		}
		else{
			HX_STACK_LINE(644)
			this->data[(int)3] = this->toARGB((int)0,::Std_obj::_int((this->alpha * (int)255)));
			HX_STACK_LINE(645)
			sheet->drawTiles(this->canvas->__Field(HX_CSTRING("graphics"),true),this->data,::scripts::MyAssets_obj::antialias,(int)8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(G_obj,drawImage,(void))

Void G_obj::addPointToPolygon( Float x,Float y){
{
		HX_STACK_PUSH("G::addPointToPolygon","com/stencyl/graphics/G.hx",499);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(500)
		hx::MultEq(x,this->scaleX);
		HX_STACK_LINE(501)
		hx::MultEq(y,this->scaleY);
		HX_STACK_LINE(503)
		if (((this->pointCounter == (int)0))){
			HX_STACK_LINE(505)
			this->firstX = x;
			HX_STACK_LINE(506)
			this->firstY = y;
			HX_STACK_LINE(508)
			this->graphics->moveTo((this->x + x),(this->y + y));
			HX_STACK_LINE(510)
			if ((!(this->drawPoly))){
				HX_STACK_LINE(511)
				this->graphics->beginFill(this->fillColor,this->alpha);
			}
		}
		HX_STACK_LINE(516)
		(this->pointCounter)++;
		HX_STACK_LINE(518)
		this->graphics->lineTo((this->x + x),(this->y + y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(G_obj,addPointToPolygon,(void))

Void G_obj::beginDrawPolygon( ){
{
		HX_STACK_PUSH("G::beginDrawPolygon","com/stencyl/graphics/G.hx",490);
		HX_STACK_THIS(this);
		HX_STACK_LINE(491)
		this->drawPoly = true;
		HX_STACK_LINE(493)
		{
			HX_STACK_LINE(493)
			if ((this->drawActor)){
				HX_STACK_LINE(493)
				if (((bool((this->actor != null())) && bool(this->actor->isHUD)))){
				}
				else{
					HX_STACK_LINE(493)
					hx::AddEq(this->x,::com::stencyl::Engine_obj::cameraX);
					HX_STACK_LINE(493)
					hx::AddEq(this->y,::com::stencyl::Engine_obj::cameraY);
				}
			}
			HX_STACK_LINE(493)
			if (((this->strokeSize == (int)0))){
				HX_STACK_LINE(493)
				this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(493)
				this->graphics->lineStyle(this->strokeSize,this->strokeColor,this->alpha,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(494)
		this->graphics->moveTo(this->x,this->y);
		HX_STACK_LINE(495)
		this->pointCounter = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(G_obj,beginDrawPolygon,(void))

Void G_obj::endDrawingPolygon( ){
{
		HX_STACK_PUSH("G::endDrawingPolygon","com/stencyl/graphics/G.hx",471);
		HX_STACK_THIS(this);
		HX_STACK_LINE(471)
		if (((this->pointCounter >= (int)2))){
			HX_STACK_LINE(474)
			if ((this->drawPoly)){
				HX_STACK_LINE(475)
				this->graphics->lineTo((this->x + this->firstX),(this->y + this->firstY));
			}
			else{
				HX_STACK_LINE(481)
				this->graphics->lineTo((this->x + this->firstX),(this->y + this->firstY));
				HX_STACK_LINE(482)
				this->graphics->endFill();
			}
			HX_STACK_LINE(485)
			{
				HX_STACK_LINE(485)
				if (((bool(this->drawActor) && bool(!(this->actor->isHUD))))){
					HX_STACK_LINE(485)
					hx::SubEq(this->x,::com::stencyl::Engine_obj::cameraX);
					HX_STACK_LINE(485)
					hx::SubEq(this->y,::com::stencyl::Engine_obj::cameraY);
				}
				HX_STACK_LINE(485)
				this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(G_obj,endDrawingPolygon,(void))

Void G_obj::beginFillPolygon( ){
{
		HX_STACK_PUSH("G::beginFillPolygon","com/stencyl/graphics/G.hx",462);
		HX_STACK_THIS(this);
		HX_STACK_LINE(463)
		this->drawPoly = false;
		HX_STACK_LINE(465)
		{
			HX_STACK_LINE(465)
			if ((this->drawActor)){
				HX_STACK_LINE(465)
				if (((bool((this->actor != null())) && bool(this->actor->isHUD)))){
				}
				else{
					HX_STACK_LINE(465)
					hx::AddEq(this->x,::com::stencyl::Engine_obj::cameraX);
					HX_STACK_LINE(465)
					hx::AddEq(this->y,::com::stencyl::Engine_obj::cameraY);
				}
			}
			HX_STACK_LINE(465)
			if (((this->strokeSize == (int)0))){
				HX_STACK_LINE(465)
				this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(465)
				this->graphics->lineStyle(this->strokeSize,this->strokeColor,this->alpha,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(466)
		this->graphics->moveTo(this->x,this->y);
		HX_STACK_LINE(467)
		this->pointCounter = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(G_obj,beginFillPolygon,(void))

Void G_obj::fillCircle( Float x,Float y,Float r){
{
		HX_STACK_PUSH("G::fillCircle","com/stencyl/graphics/G.hx",447);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(r,"r");
		HX_STACK_LINE(448)
		hx::MultEq(x,this->scaleX);
		HX_STACK_LINE(449)
		hx::MultEq(y,this->scaleY);
		HX_STACK_LINE(450)
		hx::MultEq(r,this->scaleX);
		HX_STACK_LINE(452)
		{
			HX_STACK_LINE(452)
			if ((this->drawActor)){
				HX_STACK_LINE(452)
				if (((bool((this->actor != null())) && bool(this->actor->isHUD)))){
				}
				else{
					HX_STACK_LINE(452)
					hx::AddEq(this->x,::com::stencyl::Engine_obj::cameraX);
					HX_STACK_LINE(452)
					hx::AddEq(this->y,::com::stencyl::Engine_obj::cameraY);
				}
			}
			HX_STACK_LINE(452)
			if (((this->strokeSize == (int)0))){
				HX_STACK_LINE(452)
				this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(452)
				this->graphics->lineStyle(this->strokeSize,this->strokeColor,this->alpha,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(454)
		this->graphics->beginFill(this->fillColor,this->alpha);
		HX_STACK_LINE(455)
		this->graphics->drawCircle((this->x + x),(this->y + y),r);
		HX_STACK_LINE(456)
		this->graphics->endFill();
		HX_STACK_LINE(458)
		{
			HX_STACK_LINE(458)
			if (((bool(this->drawActor) && bool(!(this->actor->isHUD))))){
				HX_STACK_LINE(458)
				hx::SubEq(this->x,::com::stencyl::Engine_obj::cameraX);
				HX_STACK_LINE(458)
				hx::SubEq(this->y,::com::stencyl::Engine_obj::cameraY);
			}
			HX_STACK_LINE(458)
			this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(G_obj,fillCircle,(void))

Void G_obj::drawCircle( Float x,Float y,Float r){
{
		HX_STACK_PUSH("G::drawCircle","com/stencyl/graphics/G.hx",434);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(r,"r");
		HX_STACK_LINE(435)
		hx::MultEq(x,this->scaleX);
		HX_STACK_LINE(436)
		hx::MultEq(y,this->scaleY);
		HX_STACK_LINE(437)
		hx::MultEq(r,this->scaleX);
		HX_STACK_LINE(439)
		{
			HX_STACK_LINE(439)
			if ((this->drawActor)){
				HX_STACK_LINE(439)
				if (((bool((this->actor != null())) && bool(this->actor->isHUD)))){
				}
				else{
					HX_STACK_LINE(439)
					hx::AddEq(this->x,::com::stencyl::Engine_obj::cameraX);
					HX_STACK_LINE(439)
					hx::AddEq(this->y,::com::stencyl::Engine_obj::cameraY);
				}
			}
			HX_STACK_LINE(439)
			if (((this->strokeSize == (int)0))){
				HX_STACK_LINE(439)
				this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(439)
				this->graphics->lineStyle(this->strokeSize,this->strokeColor,this->alpha,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(441)
		this->graphics->drawCircle((this->x + x),(this->y + y),r);
		HX_STACK_LINE(443)
		{
			HX_STACK_LINE(443)
			if (((bool(this->drawActor) && bool(!(this->actor->isHUD))))){
				HX_STACK_LINE(443)
				hx::SubEq(this->x,::com::stencyl::Engine_obj::cameraX);
				HX_STACK_LINE(443)
				hx::SubEq(this->y,::com::stencyl::Engine_obj::cameraY);
			}
			HX_STACK_LINE(443)
			this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(G_obj,drawCircle,(void))

Void G_obj::fillRoundRect( Float x,Float y,Float w,Float h,Float arc){
{
		HX_STACK_PUSH("G::fillRoundRect","com/stencyl/graphics/G.hx",418);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(w,"w");
		HX_STACK_ARG(h,"h");
		HX_STACK_ARG(arc,"arc");
		HX_STACK_LINE(419)
		hx::MultEq(x,this->scaleX);
		HX_STACK_LINE(420)
		hx::MultEq(y,this->scaleY);
		HX_STACK_LINE(421)
		hx::MultEq(w,this->scaleX);
		HX_STACK_LINE(422)
		hx::MultEq(h,this->scaleY);
		HX_STACK_LINE(424)
		{
			HX_STACK_LINE(424)
			if ((this->drawActor)){
				HX_STACK_LINE(424)
				if (((bool((this->actor != null())) && bool(this->actor->isHUD)))){
				}
				else{
					HX_STACK_LINE(424)
					hx::AddEq(this->x,::com::stencyl::Engine_obj::cameraX);
					HX_STACK_LINE(424)
					hx::AddEq(this->y,::com::stencyl::Engine_obj::cameraY);
				}
			}
			HX_STACK_LINE(424)
			if (((this->strokeSize == (int)0))){
				HX_STACK_LINE(424)
				this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(424)
				this->graphics->lineStyle(this->strokeSize,this->strokeColor,this->alpha,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(426)
		this->graphics->beginFill(this->fillColor,this->alpha);
		HX_STACK_LINE(427)
		this->graphics->drawRoundRect((this->x + x),(this->y + y),w,h,arc,arc);
		HX_STACK_LINE(428)
		this->graphics->endFill();
		HX_STACK_LINE(430)
		{
			HX_STACK_LINE(430)
			if (((bool(this->drawActor) && bool(!(this->actor->isHUD))))){
				HX_STACK_LINE(430)
				hx::SubEq(this->x,::com::stencyl::Engine_obj::cameraX);
				HX_STACK_LINE(430)
				hx::SubEq(this->y,::com::stencyl::Engine_obj::cameraY);
			}
			HX_STACK_LINE(430)
			this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(G_obj,fillRoundRect,(void))

Void G_obj::drawRoundRect( Float x,Float y,Float w,Float h,Float arc){
{
		HX_STACK_PUSH("G::drawRoundRect","com/stencyl/graphics/G.hx",404);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(w,"w");
		HX_STACK_ARG(h,"h");
		HX_STACK_ARG(arc,"arc");
		HX_STACK_LINE(405)
		hx::MultEq(x,this->scaleX);
		HX_STACK_LINE(406)
		hx::MultEq(y,this->scaleY);
		HX_STACK_LINE(407)
		hx::MultEq(w,this->scaleX);
		HX_STACK_LINE(408)
		hx::MultEq(h,this->scaleY);
		HX_STACK_LINE(410)
		{
			HX_STACK_LINE(410)
			if ((this->drawActor)){
				HX_STACK_LINE(410)
				if (((bool((this->actor != null())) && bool(this->actor->isHUD)))){
				}
				else{
					HX_STACK_LINE(410)
					hx::AddEq(this->x,::com::stencyl::Engine_obj::cameraX);
					HX_STACK_LINE(410)
					hx::AddEq(this->y,::com::stencyl::Engine_obj::cameraY);
				}
			}
			HX_STACK_LINE(410)
			if (((this->strokeSize == (int)0))){
				HX_STACK_LINE(410)
				this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(410)
				this->graphics->lineStyle(this->strokeSize,this->strokeColor,this->alpha,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(412)
		this->graphics->drawRoundRect((this->x + x),(this->y + y),w,h,arc,arc);
		HX_STACK_LINE(414)
		{
			HX_STACK_LINE(414)
			if (((bool(this->drawActor) && bool(!(this->actor->isHUD))))){
				HX_STACK_LINE(414)
				hx::SubEq(this->x,::com::stencyl::Engine_obj::cameraX);
				HX_STACK_LINE(414)
				hx::SubEq(this->y,::com::stencyl::Engine_obj::cameraY);
			}
			HX_STACK_LINE(414)
			this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(G_obj,drawRoundRect,(void))

Void G_obj::fillRect( Float x,Float y,Float w,Float h){
{
		HX_STACK_PUSH("G::fillRect","com/stencyl/graphics/G.hx",388);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(w,"w");
		HX_STACK_ARG(h,"h");
		HX_STACK_LINE(389)
		hx::MultEq(x,this->scaleX);
		HX_STACK_LINE(390)
		hx::MultEq(y,this->scaleY);
		HX_STACK_LINE(391)
		hx::MultEq(w,this->scaleX);
		HX_STACK_LINE(392)
		hx::MultEq(h,this->scaleY);
		HX_STACK_LINE(394)
		{
			HX_STACK_LINE(394)
			if ((this->drawActor)){
				HX_STACK_LINE(394)
				if (((bool((this->actor != null())) && bool(this->actor->isHUD)))){
				}
				else{
					HX_STACK_LINE(394)
					hx::AddEq(this->x,::com::stencyl::Engine_obj::cameraX);
					HX_STACK_LINE(394)
					hx::AddEq(this->y,::com::stencyl::Engine_obj::cameraY);
				}
			}
			HX_STACK_LINE(394)
			if (((this->strokeSize == (int)0))){
				HX_STACK_LINE(394)
				this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(394)
				this->graphics->lineStyle(this->strokeSize,this->strokeColor,this->alpha,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(396)
		this->graphics->beginFill(this->fillColor,this->alpha);
		HX_STACK_LINE(397)
		this->graphics->drawRect((this->x + x),(this->y + y),w,h);
		HX_STACK_LINE(398)
		this->graphics->endFill();
		HX_STACK_LINE(400)
		{
			HX_STACK_LINE(400)
			if (((bool(this->drawActor) && bool(!(this->actor->isHUD))))){
				HX_STACK_LINE(400)
				hx::SubEq(this->x,::com::stencyl::Engine_obj::cameraX);
				HX_STACK_LINE(400)
				hx::SubEq(this->y,::com::stencyl::Engine_obj::cameraY);
			}
			HX_STACK_LINE(400)
			this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(G_obj,fillRect,(void))

Void G_obj::drawRect( Float x,Float y,Float w,Float h){
{
		HX_STACK_PUSH("G::drawRect","com/stencyl/graphics/G.hx",374);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(w,"w");
		HX_STACK_ARG(h,"h");
		HX_STACK_LINE(375)
		hx::MultEq(x,this->scaleX);
		HX_STACK_LINE(376)
		hx::MultEq(y,this->scaleY);
		HX_STACK_LINE(377)
		hx::MultEq(w,this->scaleX);
		HX_STACK_LINE(378)
		hx::MultEq(h,this->scaleY);
		HX_STACK_LINE(380)
		{
			HX_STACK_LINE(380)
			if ((this->drawActor)){
				HX_STACK_LINE(380)
				if (((bool((this->actor != null())) && bool(this->actor->isHUD)))){
				}
				else{
					HX_STACK_LINE(380)
					hx::AddEq(this->x,::com::stencyl::Engine_obj::cameraX);
					HX_STACK_LINE(380)
					hx::AddEq(this->y,::com::stencyl::Engine_obj::cameraY);
				}
			}
			HX_STACK_LINE(380)
			if (((this->strokeSize == (int)0))){
				HX_STACK_LINE(380)
				this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(380)
				this->graphics->lineStyle(this->strokeSize,this->strokeColor,this->alpha,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(382)
		this->graphics->drawRect((this->x + x),(this->y + y),w,h);
		HX_STACK_LINE(384)
		{
			HX_STACK_LINE(384)
			if (((bool(this->drawActor) && bool(!(this->actor->isHUD))))){
				HX_STACK_LINE(384)
				hx::SubEq(this->x,::com::stencyl::Engine_obj::cameraX);
				HX_STACK_LINE(384)
				hx::SubEq(this->y,::com::stencyl::Engine_obj::cameraY);
			}
			HX_STACK_LINE(384)
			this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(G_obj,drawRect,(void))

Void G_obj::fillPixel( Float x,Float y){
{
		HX_STACK_PUSH("G::fillPixel","com/stencyl/graphics/G.hx",356);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(357)
		{
			HX_STACK_LINE(357)
			if ((this->drawActor)){
				HX_STACK_LINE(357)
				if (((bool((this->actor != null())) && bool(this->actor->isHUD)))){
				}
				else{
					HX_STACK_LINE(357)
					hx::AddEq(this->x,::com::stencyl::Engine_obj::cameraX);
					HX_STACK_LINE(357)
					hx::AddEq(this->y,::com::stencyl::Engine_obj::cameraY);
				}
			}
			HX_STACK_LINE(357)
			if (((this->strokeSize == (int)0))){
				HX_STACK_LINE(357)
				this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(357)
				this->graphics->lineStyle(this->strokeSize,this->strokeColor,this->alpha,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(359)
		this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(360)
		this->graphics->beginFill(this->fillColor,this->alpha);
		HX_STACK_LINE(361)
		this->graphics->drawRect((this->x + ::Std_obj::_int((x * ::com::stencyl::Engine_obj::SCALE))),(this->y + ::Std_obj::_int((y * ::com::stencyl::Engine_obj::SCALE))),::Std_obj::_int(::com::stencyl::Engine_obj::SCALE),::Std_obj::_int(::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(368)
		this->graphics->endFill();
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(370)
			if (((bool(this->drawActor) && bool(!(this->actor->isHUD))))){
				HX_STACK_LINE(370)
				hx::SubEq(this->x,::com::stencyl::Engine_obj::cameraX);
				HX_STACK_LINE(370)
				hx::SubEq(this->y,::com::stencyl::Engine_obj::cameraY);
			}
			HX_STACK_LINE(370)
			this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(G_obj,fillPixel,(void))

Void G_obj::drawLine( Float x1,Float y1,Float x2,Float y2){
{
		HX_STACK_PUSH("G::drawLine","com/stencyl/graphics/G.hx",341);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x1,"x1");
		HX_STACK_ARG(y1,"y1");
		HX_STACK_ARG(x2,"x2");
		HX_STACK_ARG(y2,"y2");
		HX_STACK_LINE(342)
		hx::MultEq(x1,this->scaleX);
		HX_STACK_LINE(343)
		hx::MultEq(y1,this->scaleY);
		HX_STACK_LINE(344)
		hx::MultEq(x2,this->scaleX);
		HX_STACK_LINE(345)
		hx::MultEq(y2,this->scaleY);
		HX_STACK_LINE(347)
		{
			HX_STACK_LINE(347)
			if ((this->drawActor)){
				HX_STACK_LINE(347)
				if (((bool((this->actor != null())) && bool(this->actor->isHUD)))){
				}
				else{
					HX_STACK_LINE(347)
					hx::AddEq(this->x,::com::stencyl::Engine_obj::cameraX);
					HX_STACK_LINE(347)
					hx::AddEq(this->y,::com::stencyl::Engine_obj::cameraY);
				}
			}
			HX_STACK_LINE(347)
			if (((this->strokeSize == (int)0))){
				HX_STACK_LINE(347)
				this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(347)
				this->graphics->lineStyle(this->strokeSize,this->strokeColor,this->alpha,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(349)
		this->graphics->moveTo((this->x + x1),(this->y + y1));
		HX_STACK_LINE(350)
		this->graphics->lineTo((this->x + x2),(this->y + y2));
		HX_STACK_LINE(352)
		{
			HX_STACK_LINE(352)
			if (((bool(this->drawActor) && bool(!(this->actor->isHUD))))){
				HX_STACK_LINE(352)
				hx::SubEq(this->x,::com::stencyl::Engine_obj::cameraX);
				HX_STACK_LINE(352)
				hx::SubEq(this->y,::com::stencyl::Engine_obj::cameraY);
			}
			HX_STACK_LINE(352)
			this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(G_obj,drawLine,(void))

Void G_obj::drawString( ::String s,Float x,Float y){
{
		HX_STACK_PUSH("G::drawString","com/stencyl/graphics/G.hx",273);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s,"s");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(274)
		if (((this->font == null()))){
			HX_STACK_LINE(275)
			this->font = this->defaultFont;
		}
		HX_STACK_LINE(279)
		Float drawX;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(280)
		Float drawY;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(282)
		if ((this->drawActor)){
			HX_STACK_LINE(283)
			if (((bool((this->actor != null())) && bool(this->actor->isHUD)))){
				HX_STACK_LINE(286)
				drawX = (this->x + (x * this->scaleX));
				HX_STACK_LINE(287)
				drawY = (this->y + (y * this->scaleY));
			}
			else{
				HX_STACK_LINE(292)
				drawX = ((this->x + (x * this->scaleX)) + ::com::stencyl::Engine_obj::cameraX);
				HX_STACK_LINE(293)
				drawY = ((this->y + (y * this->scaleY)) + ::com::stencyl::Engine_obj::cameraY);
			}
		}
		else{
			HX_STACK_LINE(299)
			drawX = (this->x + (x * this->scaleX));
			HX_STACK_LINE(300)
			drawY = (this->y + (y * this->scaleY));
		}
		HX_STACK_LINE(304)
		this->drawData->splice((int)0,this->drawData->length);
		HX_STACK_LINE(305)
		this->font->font->render(this->drawData,s,(int)0,this->alpha,::Std_obj::_int(drawX),::Std_obj::_int(drawY),(int)0,this->font->fontScale,(int)0,false);
		HX_STACK_LINE(306)
		this->font->font->drawText(this->graphics,this->drawData);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(G_obj,drawString,(void))

Void G_obj::translateToActor( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("G::translateToActor","com/stencyl/graphics/G.hx",233);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(234)
		this->drawActor = true;
		HX_STACK_LINE(235)
		this->actor = a;
		HX_STACK_LINE(237)
		if ((a->smoothMove)){
			HX_STACK_LINE(239)
			Float drawX = ((a->drawX - ::Math_obj::floor((Float(a->cacheWidth) / Float((int)2)))) - a->currOffset->x);		HX_STACK_VAR(drawX,"drawX");
			HX_STACK_LINE(240)
			Float drawY = ((a->drawY - ::Math_obj::floor((Float(a->cacheHeight) / Float((int)2)))) - a->currOffset->y);		HX_STACK_VAR(drawY,"drawY");
			HX_STACK_LINE(242)
			if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
				HX_STACK_LINE(244)
				this->x = (drawX * this->scaleX);
				HX_STACK_LINE(245)
				this->y = (drawY * this->scaleY);
			}
			else{
				HX_STACK_LINE(250)
				this->x = (drawX * this->scaleX);
				HX_STACK_LINE(251)
				this->y = (drawY * this->scaleY);
			}
		}
		else{
			HX_STACK_LINE(255)
			if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
				HX_STACK_LINE(258)
				this->x = (a->colX * this->scaleX);
				HX_STACK_LINE(259)
				this->y = (a->colY * this->scaleY);
			}
			else{
				HX_STACK_LINE(264)
				this->x = (a->colX * this->scaleX);
				HX_STACK_LINE(265)
				this->y = (a->colY * this->scaleY);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(G_obj,translateToActor,(void))

Void G_obj::translateToScreen( ){
{
		HX_STACK_PUSH("G::translateToScreen","com/stencyl/graphics/G.hx",224);
		HX_STACK_THIS(this);
		HX_STACK_LINE(225)
		this->drawActor = false;
		HX_STACK_LINE(226)
		this->actor = null();
		HX_STACK_LINE(228)
		this->x = (int)0;
		HX_STACK_LINE(229)
		this->y = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(G_obj,translateToScreen,(void))

Void G_obj::moveTo( Float x,Float y){
{
		HX_STACK_PUSH("G::moveTo","com/stencyl/graphics/G.hx",204);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(204)
		if ((this->drawActor)){
			HX_STACK_LINE(207)
			if (((this->actor != null()))){
				HX_STACK_LINE(209)
				::com::stencyl::models::Actor a = this->actor;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(209)
				this->drawActor = true;
				HX_STACK_LINE(209)
				this->actor = a;
				HX_STACK_LINE(209)
				if ((a->smoothMove)){
					HX_STACK_LINE(209)
					Float drawX = ((a->drawX - ::Math_obj::floor((Float(a->cacheWidth) / Float((int)2)))) - a->currOffset->x);		HX_STACK_VAR(drawX,"drawX");
					HX_STACK_LINE(209)
					Float drawY = ((a->drawY - ::Math_obj::floor((Float(a->cacheHeight) / Float((int)2)))) - a->currOffset->y);		HX_STACK_VAR(drawY,"drawY");
					HX_STACK_LINE(209)
					if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
						HX_STACK_LINE(209)
						this->x = (drawX * this->scaleX);
						HX_STACK_LINE(209)
						this->y = (drawY * this->scaleY);
					}
					else{
						HX_STACK_LINE(209)
						this->x = (drawX * this->scaleX);
						HX_STACK_LINE(209)
						this->y = (drawY * this->scaleY);
					}
				}
				else{
					HX_STACK_LINE(209)
					if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
						HX_STACK_LINE(209)
						this->x = (a->colX * this->scaleX);
						HX_STACK_LINE(209)
						this->y = (a->colY * this->scaleY);
					}
					else{
						HX_STACK_LINE(209)
						this->x = (a->colX * this->scaleX);
						HX_STACK_LINE(209)
						this->y = (a->colY * this->scaleY);
					}
				}
			}
			HX_STACK_LINE(212)
			hx::AddEq(this->x,(x * this->scaleX));
			HX_STACK_LINE(213)
			hx::AddEq(this->y,(y * this->scaleY));
		}
		else{
			HX_STACK_LINE(218)
			this->x = (x * this->scaleX);
			HX_STACK_LINE(219)
			this->y = (y * this->scaleY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(G_obj,moveTo,(void))

Void G_obj::translate( Float x,Float y){
{
		HX_STACK_PUSH("G::translate","com/stencyl/graphics/G.hx",198);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(199)
		hx::AddEq(this->x,(x * this->scaleX));
		HX_STACK_LINE(200)
		hx::AddEq(this->y,(y * this->scaleY));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(G_obj,translate,(void))

Void G_obj::endGraphics( ){
{
		HX_STACK_PUSH("G::endGraphics","com/stencyl/graphics/G.hx",187);
		HX_STACK_THIS(this);
		HX_STACK_LINE(188)
		if (((bool(this->drawActor) && bool(!(this->actor->isHUD))))){
			HX_STACK_LINE(190)
			hx::SubEq(this->x,::com::stencyl::Engine_obj::cameraX);
			HX_STACK_LINE(191)
			hx::SubEq(this->y,::com::stencyl::Engine_obj::cameraY);
		}
		HX_STACK_LINE(194)
		this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(G_obj,endGraphics,(void))

Void G_obj::startGraphics( ){
{
		HX_STACK_PUSH("G::startGraphics","com/stencyl/graphics/G.hx",161);
		HX_STACK_THIS(this);
		HX_STACK_LINE(162)
		if ((this->drawActor)){
			HX_STACK_LINE(163)
			if (((bool((this->actor != null())) && bool(this->actor->isHUD)))){
			}
			else{
				HX_STACK_LINE(170)
				hx::AddEq(this->x,::com::stencyl::Engine_obj::cameraX);
				HX_STACK_LINE(171)
				hx::AddEq(this->y,::com::stencyl::Engine_obj::cameraY);
			}
		}
		HX_STACK_LINE(175)
		if (((this->strokeSize == (int)0))){
			HX_STACK_LINE(176)
			this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(181)
			this->graphics->lineStyle(this->strokeSize,this->strokeColor,this->alpha,null(),null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(G_obj,startGraphics,(void))

Void G_obj::setFont( ::com::stencyl::models::Font newFont){
{
		HX_STACK_PUSH("G::setFont","com/stencyl/graphics/G.hx",129);
		HX_STACK_THIS(this);
		HX_STACK_ARG(newFont,"newFont");
		HX_STACK_LINE(129)
		if (((bool((newFont != null())) && bool((newFont != this->font))))){
			HX_STACK_LINE(131)
			this->font = newFont;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(G_obj,setFont,(void))

Void G_obj::resetGraphicsSettings( ){
{
		HX_STACK_PUSH("G::resetGraphicsSettings","com/stencyl/graphics/G.hx",120);
		HX_STACK_THIS(this);
		HX_STACK_LINE(121)
		this->alpha = (int)1;
		HX_STACK_LINE(122)
		this->strokeSize = (int)0;
		HX_STACK_LINE(123)
		this->fillColor = (int)0;
		HX_STACK_LINE(124)
		this->strokeColor = (int)0;
		HX_STACK_LINE(125)
		this->font = this->defaultFont;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(G_obj,resetGraphicsSettings,(void))

::haxe::ds::IntMap G_obj::fontCache;


G_obj::G_obj()
{
}

void G_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(G);
	HX_MARK_MEMBER_NAME(drawData,"drawData");
	HX_MARK_MEMBER_NAME(actor,"actor");
	HX_MARK_MEMBER_NAME(drawActor,"drawActor");
	HX_MARK_MEMBER_NAME(firstY,"firstY");
	HX_MARK_MEMBER_NAME(firstX,"firstX");
	HX_MARK_MEMBER_NAME(pointCounter,"pointCounter");
	HX_MARK_MEMBER_NAME(drawPoly,"drawPoly");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(point2,"point2");
	HX_MARK_MEMBER_NAME(point,"point");
	HX_MARK_MEMBER_NAME(rect2,"rect2");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(mtx,"mtx");
	HX_MARK_MEMBER_NAME(fontData,"fontData");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(strokeColor,"strokeColor");
	HX_MARK_MEMBER_NAME(fillColor,"fillColor");
	HX_MARK_MEMBER_NAME(strokeSize,"strokeSize");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(defaultFont,"defaultFont");
	HX_MARK_END_CLASS();
}

void G_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(drawData,"drawData");
	HX_VISIT_MEMBER_NAME(actor,"actor");
	HX_VISIT_MEMBER_NAME(drawActor,"drawActor");
	HX_VISIT_MEMBER_NAME(firstY,"firstY");
	HX_VISIT_MEMBER_NAME(firstX,"firstX");
	HX_VISIT_MEMBER_NAME(pointCounter,"pointCounter");
	HX_VISIT_MEMBER_NAME(drawPoly,"drawPoly");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(point2,"point2");
	HX_VISIT_MEMBER_NAME(point,"point");
	HX_VISIT_MEMBER_NAME(rect2,"rect2");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(mtx,"mtx");
	HX_VISIT_MEMBER_NAME(fontData,"fontData");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(strokeColor,"strokeColor");
	HX_VISIT_MEMBER_NAME(fillColor,"fillColor");
	HX_VISIT_MEMBER_NAME(strokeSize,"strokeSize");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(defaultFont,"defaultFont");
}

Dynamic G_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mtx") ) { return mtx; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"actor") ) { return actor; }
		if (HX_FIELD_EQ(inName,"point") ) { return point; }
		if (HX_FIELD_EQ(inName,"rect2") ) { return rect2; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toARGB") ) { return toARGB_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"firstY") ) { return firstY; }
		if (HX_FIELD_EQ(inName,"firstX") ) { return firstX; }
		if (HX_FIELD_EQ(inName,"point2") ) { return point2; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setFont") ) { return setFont_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		if (HX_FIELD_EQ(inName,"drawData") ) { return drawData; }
		if (HX_FIELD_EQ(inName,"drawPoly") ) { return drawPoly; }
		if (HX_FIELD_EQ(inName,"fontData") ) { return fontData; }
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontCache") ) { return fontCache; }
		if (HX_FIELD_EQ(inName,"resetFont") ) { return resetFont_dyn(); }
		if (HX_FIELD_EQ(inName,"drawImage") ) { return drawImage_dyn(); }
		if (HX_FIELD_EQ(inName,"fillPixel") ) { return fillPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		if (HX_FIELD_EQ(inName,"drawActor") ) { return drawActor; }
		if (HX_FIELD_EQ(inName,"fillColor") ) { return fillColor; }
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fillCircle") ) { return fillCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"drawString") ) { return drawString_dyn(); }
		if (HX_FIELD_EQ(inName,"strokeSize") ) { return strokeSize; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"endGraphics") ) { return endGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"strokeColor") ) { return strokeColor; }
		if (HX_FIELD_EQ(inName,"defaultFont") ) { return defaultFont; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pointCounter") ) { return pointCounter; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fillRoundRect") ) { return fillRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"startGraphics") ) { return startGraphics_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"beginDrawPolygon") ) { return beginDrawPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"beginFillPolygon") ) { return beginFillPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"translateToActor") ) { return translateToActor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addPointToPolygon") ) { return addPointToPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"endDrawingPolygon") ) { return endDrawingPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"translateToScreen") ) { return translateToScreen_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"resetGraphicsSettings") ) { return resetGraphicsSettings_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic G_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mtx") ) { mtx=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::com::stencyl::models::Font >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"actor") ) { actor=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rect2") ) { rect2=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"firstY") ) { firstY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"firstX") ) { firstX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point2") ) { point2=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawData") ) { drawData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawPoly") ) { drawPoly=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontData") ) { fontData=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::flash::display::Graphics >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontCache") ) { fontCache=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawActor") ) { drawActor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillColor") ) { fillColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"strokeSize") ) { strokeSize=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"strokeColor") ) { strokeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultFont") ) { defaultFont=inValue.Cast< ::com::stencyl::models::Font >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pointCounter") ) { pointCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void G_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("drawData"));
	outFields->push(HX_CSTRING("actor"));
	outFields->push(HX_CSTRING("drawActor"));
	outFields->push(HX_CSTRING("firstY"));
	outFields->push(HX_CSTRING("firstX"));
	outFields->push(HX_CSTRING("pointCounter"));
	outFields->push(HX_CSTRING("drawPoly"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("point2"));
	outFields->push(HX_CSTRING("point"));
	outFields->push(HX_CSTRING("rect2"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("mtx"));
	outFields->push(HX_CSTRING("fontData"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("strokeColor"));
	outFields->push(HX_CSTRING("fillColor"));
	outFields->push(HX_CSTRING("strokeSize"));
	outFields->push(HX_CSTRING("blendMode"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("canvas"));
	outFields->push(HX_CSTRING("graphics"));
	outFields->push(HX_CSTRING("defaultFont"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fontCache"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("resetFont"),
	HX_CSTRING("toARGB"),
	HX_CSTRING("drawImage"),
	HX_CSTRING("addPointToPolygon"),
	HX_CSTRING("beginDrawPolygon"),
	HX_CSTRING("endDrawingPolygon"),
	HX_CSTRING("beginFillPolygon"),
	HX_CSTRING("fillCircle"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("fillRoundRect"),
	HX_CSTRING("drawRoundRect"),
	HX_CSTRING("fillRect"),
	HX_CSTRING("drawRect"),
	HX_CSTRING("fillPixel"),
	HX_CSTRING("drawLine"),
	HX_CSTRING("drawString"),
	HX_CSTRING("drawData"),
	HX_CSTRING("translateToActor"),
	HX_CSTRING("translateToScreen"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("translate"),
	HX_CSTRING("endGraphics"),
	HX_CSTRING("startGraphics"),
	HX_CSTRING("setFont"),
	HX_CSTRING("resetGraphicsSettings"),
	HX_CSTRING("actor"),
	HX_CSTRING("drawActor"),
	HX_CSTRING("firstY"),
	HX_CSTRING("firstX"),
	HX_CSTRING("pointCounter"),
	HX_CSTRING("drawPoly"),
	HX_CSTRING("data"),
	HX_CSTRING("point2"),
	HX_CSTRING("point"),
	HX_CSTRING("rect2"),
	HX_CSTRING("rect"),
	HX_CSTRING("mtx"),
	HX_CSTRING("fontData"),
	HX_CSTRING("font"),
	HX_CSTRING("strokeColor"),
	HX_CSTRING("fillColor"),
	HX_CSTRING("strokeSize"),
	HX_CSTRING("blendMode"),
	HX_CSTRING("alpha"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("canvas"),
	HX_CSTRING("graphics"),
	HX_CSTRING("defaultFont"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(G_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(G_obj::fontCache,"fontCache");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(G_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(G_obj::fontCache,"fontCache");
};

Class G_obj::__mClass;

void G_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.G"), hx::TCanCast< G_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void G_obj::__boot()
{
	fontCache= null();
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
