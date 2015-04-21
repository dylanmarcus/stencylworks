#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_CollisionInfo
#include <com/stencyl/models/collision/CollisionInfo.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Grid
#include <com/stencyl/models/collision/Grid.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Hitbox
#include <com/stencyl/models/collision/Hitbox.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Mask
#include <com/stencyl/models/collision/Mask.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Pixelmask
#include <com/stencyl/models/collision/Pixelmask.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
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
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace collision{

Void Grid_obj::__construct(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_PUSH("Grid::new","com/stencyl/models/collision/Grid.hx",33);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(34)
	super::__construct(null(),null(),null(),null(),null());
	HX_STACK_LINE(37)
	if (((bool((bool((bool((width == (int)0)) || bool((height == (int)0)))) || bool((tileWidth == (int)0)))) || bool((tileHeight == (int)0))))){
		HX_STACK_LINE(38)
		hx::Throw (HX_CSTRING("Illegal Grid, sizes cannot be 0."));
	}
	HX_STACK_LINE(42)
	this->_rect = ::com::stencyl::utils::Utils_obj::rect;
	HX_STACK_LINE(43)
	this->_point = ::com::stencyl::utils::Utils_obj::point;
	HX_STACK_LINE(44)
	this->_point2 = ::com::stencyl::utils::Utils_obj::point2;
	HX_STACK_LINE(47)
	this->columns = ::Std_obj::_int((Float(width) / Float(tileWidth)));
	HX_STACK_LINE(48)
	this->rows = ::Std_obj::_int((Float(height) / Float(tileHeight)));
	HX_STACK_LINE(50)
	this->_tile = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,tileWidth,tileHeight);
	HX_STACK_LINE(51)
	this->_x = x;
	HX_STACK_LINE(52)
	this->_y = y;
	HX_STACK_LINE(53)
	this->_width = width;
	HX_STACK_LINE(54)
	this->_height = height;
	HX_STACK_LINE(55)
	this->usePositions = false;
	HX_STACK_LINE(58)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::stencyl::models::collision::Mask >()),this->collideMask_dyn());
	HX_STACK_LINE(59)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::stencyl::models::collision::Hitbox >()),this->collideHitbox_dyn());
	HX_STACK_LINE(60)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::stencyl::models::collision::Pixelmask >()),this->collidePixelmask_dyn());
	HX_STACK_LINE(62)
	this->data = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->rows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		while(((_g1 < _g))){
			HX_STACK_LINE(63)
			int x1 = (_g1)++;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(65)
			this->data->push(Array_obj< bool >::__new());
		}
	}
}
;
	return null();
}

Grid_obj::~Grid_obj() { }

Dynamic Grid_obj::__CreateEmpty() { return  new Grid_obj; }
hx::ObjectPtr< Grid_obj > Grid_obj::__new(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct(width,height,tileWidth,tileHeight,__o_x,__o_y);
	return result;}

Dynamic Grid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Grid_obj::squareProjection( ::flash::geom::Point axis,::flash::geom::Point point){
{
		HX_STACK_PUSH("Grid::squareProjection","com/stencyl/models/collision/Grid.hx",342);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(342)
		if (((axis->x < axis->y))){
			HX_STACK_LINE(345)
			point->x = axis->x;
			HX_STACK_LINE(346)
			point->y = axis->y;
		}
		else{
			HX_STACK_LINE(350)
			point->y = axis->x;
			HX_STACK_LINE(351)
			point->x = axis->y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,squareProjection,(void))

bool Grid_obj::collidePixelmask( ::com::stencyl::models::collision::Pixelmask other){
	HX_STACK_PUSH("Grid::collidePixelmask","com/stencyl/models/collision/Grid.hx",252);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(294)
	::haxe::Log_obj::trace(HX_CSTRING("Pixelmasks will not work in targets other than flash due to hittest not being implemented in NME."),hx::SourceInfo(HX_CSTRING("Grid.hx"),294,HX_CSTRING("com.stencyl.models.collision.Grid"),HX_CSTRING("collidePixelmask")));
	HX_STACK_LINE(296)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,collidePixelmask,return )

bool Grid_obj::collideHitbox( ::com::stencyl::models::collision::Hitbox other){
	HX_STACK_PUSH("Grid::collideHitbox","com/stencyl/models/collision/Grid.hx",221);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(222)
	int rectX;		HX_STACK_VAR(rectX,"rectX");
	int rectY;		HX_STACK_VAR(rectY,"rectY");
	int pointX;		HX_STACK_VAR(pointX,"pointX");
	int pointY;		HX_STACK_VAR(pointY,"pointY");
	HX_STACK_LINE(223)
	this->_rect->x = (other->parent->colX + other->_x);
	HX_STACK_LINE(224)
	this->_rect->y = (other->parent->colY + other->_y);
	HX_STACK_LINE(225)
	pointX = (::Std_obj::_int((Float((((this->_rect->x + other->_width) - (int)1))) / Float(this->_tile->width))) + (int)1);
	HX_STACK_LINE(226)
	pointY = (::Std_obj::_int((Float((((this->_rect->y + other->_height) - (int)1))) / Float(this->_tile->height))) + (int)1);
	HX_STACK_LINE(227)
	rectX = ::Std_obj::_int((Float(this->_rect->x) / Float(this->_tile->width)));
	HX_STACK_LINE(228)
	rectY = ::Std_obj::_int((Float(this->_rect->y) / Float(this->_tile->height)));
	HX_STACK_LINE(230)
	{
		HX_STACK_LINE(230)
		int _g = rectY;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(230)
		while(((_g < pointY))){
			HX_STACK_LINE(230)
			int dy = (_g)++;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				int _g1 = rectX;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(232)
				while(((_g1 < pointX))){
					HX_STACK_LINE(232)
					int dx = (_g1)++;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(234)
					if ((this->getTile(dx,dy))){
						HX_STACK_LINE(236)
						::com::stencyl::models::collision::CollisionInfo info = ::com::stencyl::models::collision::CollisionInfo_obj::__new();		HX_STACK_VAR(info,"info");
						HX_STACK_LINE(238)
						info->solidCollision = other->solid;
						HX_STACK_LINE(239)
						info->maskA = other;
						HX_STACK_LINE(240)
						info->maskB = hx::ObjectPtr<OBJ_>(this);
						HX_STACK_LINE(242)
						other->parent->addCollision(info);
						HX_STACK_LINE(243)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(247)
	return false;
}


bool Grid_obj::collideMask( ::com::stencyl::models::collision::Mask other){
	HX_STACK_PUSH("Grid::collideMask","com/stencyl/models/collision/Grid.hx",197);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(198)
	int rectX;		HX_STACK_VAR(rectX,"rectX");
	int rectY;		HX_STACK_VAR(rectY,"rectY");
	int pointX;		HX_STACK_VAR(pointX,"pointX");
	int pointY;		HX_STACK_VAR(pointY,"pointY");
	HX_STACK_LINE(199)
	this->_rect->x = (other->parent->colX - this->parent->colX);
	HX_STACK_LINE(200)
	this->_rect->y = (other->parent->colY - this->parent->colY);
	HX_STACK_LINE(201)
	pointX = (::Std_obj::_int((Float((((this->_rect->x + other->parent->cacheWidth) - (int)1))) / Float(this->_tile->width))) + (int)1);
	HX_STACK_LINE(202)
	pointY = (::Std_obj::_int((Float((((this->_rect->y + other->parent->cacheHeight) - (int)1))) / Float(this->_tile->height))) + (int)1);
	HX_STACK_LINE(203)
	rectX = ::Std_obj::_int((Float(this->_rect->x) / Float(this->_tile->width)));
	HX_STACK_LINE(204)
	rectY = ::Std_obj::_int((Float(this->_rect->y) / Float(this->_tile->height)));
	HX_STACK_LINE(206)
	{
		HX_STACK_LINE(206)
		int _g = rectY;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(206)
		while(((_g < pointY))){
			HX_STACK_LINE(206)
			int dy = (_g)++;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(208)
			{
				HX_STACK_LINE(208)
				int _g1 = rectX;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(208)
				while(((_g1 < pointX))){
					HX_STACK_LINE(208)
					int dx = (_g1)++;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(210)
					if ((this->getTile(dx,dy))){
						HX_STACK_LINE(211)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(216)
	return false;
}


int Grid_obj::get_tileHeight( ){
	HX_STACK_PUSH("Grid::get_tileHeight","com/stencyl/models/collision/Grid.hx",178);
	HX_STACK_THIS(this);
	HX_STACK_LINE(178)
	return ::Std_obj::_int(this->_tile->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_tileHeight,return )

int Grid_obj::get_tileWidth( ){
	HX_STACK_PUSH("Grid::get_tileWidth","com/stencyl/models/collision/Grid.hx",172);
	HX_STACK_THIS(this);
	HX_STACK_LINE(172)
	return ::Std_obj::_int(this->_tile->width);
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_tileWidth,return )

Void Grid_obj::clearRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
	HX_STACK_PUSH("Grid::clearRect","com/stencyl/models/collision/Grid.hx",164);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
{
		HX_STACK_LINE(164)
		this->setRect(column,row,width,height,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Grid_obj,clearRect,(void))

Void Grid_obj::setRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< bool >  __o_solid){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
bool solid = __o_solid.Default(true);
	HX_STACK_PUSH("Grid::setRect","com/stencyl/models/collision/Grid.hx",138);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(solid,"solid");
{
		HX_STACK_LINE(139)
		if ((this->usePositions)){
			HX_STACK_LINE(141)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(142)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
			HX_STACK_LINE(143)
			width = ::Std_obj::_int((Float(width) / Float(this->_tile->width)));
			HX_STACK_LINE(144)
			height = ::Std_obj::_int((Float(height) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			int _g1 = row;		HX_STACK_VAR(_g1,"_g1");
			int _g = (row + height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(147)
			while(((_g1 < _g))){
				HX_STACK_LINE(147)
				int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
				HX_STACK_LINE(149)
				{
					HX_STACK_LINE(149)
					int _g3 = column;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = (column + width);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(149)
					while(((_g3 < _g2))){
						HX_STACK_LINE(149)
						int xx = (_g3)++;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(151)
						this->setTile(xx,yy,solid);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Grid_obj,setRect,(void))

bool Grid_obj::getTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_PUSH("Grid::getTile","com/stencyl/models/collision/Grid.hx",118);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
{
		HX_STACK_LINE(119)
		if ((!(((  (((bool((bool((bool((column < (int)0)) || bool((column > (this->columns - (int)1))))) || bool((row < (int)0)))) || bool((row > (this->rows - (int)1)))))) ? bool(false) : bool(true) ))))){
			HX_STACK_LINE(119)
			return false;
		}
		HX_STACK_LINE(121)
		if ((this->usePositions)){
			HX_STACK_LINE(123)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(124)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(126)
		return this->data->__get(row).StaticCast< Array< bool > >()->__get(column);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,getTile,return )

bool Grid_obj::checkTile( int column,int row){
	HX_STACK_PUSH("Grid::checkTile","com/stencyl/models/collision/Grid.hx",98);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_LINE(98)
	if (((bool((bool((bool((column < (int)0)) || bool((column > (this->columns - (int)1))))) || bool((row < (int)0)))) || bool((row > (this->rows - (int)1)))))){
		HX_STACK_LINE(101)
		return false;
	}
	else{
		HX_STACK_LINE(106)
		return true;
	}
	HX_STACK_LINE(98)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,checkTile,return )

Void Grid_obj::clearTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_PUSH("Grid::clearTile","com/stencyl/models/collision/Grid.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
{
		HX_STACK_LINE(93)
		this->setTile(column,row,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,clearTile,(void))

Void Grid_obj::setTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< bool >  __o_solid){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
bool solid = __o_solid.Default(true);
	HX_STACK_PUSH("Grid::setTile","com/stencyl/models/collision/Grid.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(solid,"solid");
{
		HX_STACK_LINE(77)
		if ((!(((  (((bool((bool((bool((column < (int)0)) || bool((column > (this->columns - (int)1))))) || bool((row < (int)0)))) || bool((row > (this->rows - (int)1)))))) ? bool(false) : bool(true) ))))){
			HX_STACK_LINE(77)
			return null();
		}
		HX_STACK_LINE(79)
		if ((this->usePositions)){
			HX_STACK_LINE(81)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(82)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(84)
		this->data->__get(row).StaticCast< Array< bool > >()[column] = solid;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,setTile,(void))


Grid_obj::Grid_obj()
{
}

void Grid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Grid);
	HX_MARK_MEMBER_NAME(_point2,"_point2");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_tile,"_tile");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(usePositions,"usePositions");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Grid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_point2,"_point2");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_tile,"_tile");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(usePositions,"usePositions");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Grid_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"_tile") ) { return _tile; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { return _point2; }
		if (HX_FIELD_EQ(inName,"columns") ) { return columns; }
		if (HX_FIELD_EQ(inName,"setRect") ) { return setRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return get_tileWidth(); }
		if (HX_FIELD_EQ(inName,"clearRect") ) { return clearRect_dyn(); }
		if (HX_FIELD_EQ(inName,"checkTile") ) { return checkTile_dyn(); }
		if (HX_FIELD_EQ(inName,"clearTile") ) { return clearTile_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return get_tileHeight(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { return usePositions; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tileWidth") ) { return get_tileWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_tileHeight") ) { return get_tileHeight_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"squareProjection") ) { return squareProjection_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePixelmask") ) { return collidePixelmask_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Grid_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile") ) { _tile=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { _point2=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { usePositions=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_point2"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_tile"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("columns"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("usePositions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_point2"),
	HX_CSTRING("_point"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_tile"),
	HX_CSTRING("squareProjection"),
	HX_CSTRING("collidePixelmask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("data"),
	HX_CSTRING("rows"),
	HX_CSTRING("columns"),
	HX_CSTRING("get_tileHeight"),
	HX_CSTRING("get_tileWidth"),
	HX_CSTRING("clearRect"),
	HX_CSTRING("setRect"),
	HX_CSTRING("getTile"),
	HX_CSTRING("checkTile"),
	HX_CSTRING("clearTile"),
	HX_CSTRING("setTile"),
	HX_CSTRING("usePositions"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

Class Grid_obj::__mClass;

void Grid_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.collision.Grid"), hx::TCanCast< Grid_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Grid_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace collision
