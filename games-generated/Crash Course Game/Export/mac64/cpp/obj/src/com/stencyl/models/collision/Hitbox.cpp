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
#ifndef INCLUDED_com_stencyl_models_Region
#include <com/stencyl/models/Region.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_CollisionInfo
#include <com/stencyl/models/collision/CollisionInfo.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Hitbox
#include <com/stencyl/models/collision/Hitbox.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Mask
#include <com/stencyl/models/collision/Mask.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Masklist
#include <com/stencyl/models/collision/Masklist.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace collision{

Void Hitbox_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< bool >  __o_solid)
{
HX_STACK_PUSH("Hitbox::new","com/stencyl/models/collision/Hitbox.hx",22);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
bool solid = __o_solid.Default(true);
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(24)
	this->_width = width;
	HX_STACK_LINE(25)
	this->_height = height;
	HX_STACK_LINE(26)
	this->_x = x;
	HX_STACK_LINE(27)
	this->_y = y;
	HX_STACK_LINE(28)
	this->solid = solid;
	HX_STACK_LINE(29)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::stencyl::models::collision::Hitbox >()),this->collideHitbox_dyn());
}
;
	return null();
}

Hitbox_obj::~Hitbox_obj() { }

Dynamic Hitbox_obj::__CreateEmpty() { return  new Hitbox_obj; }
hx::ObjectPtr< Hitbox_obj > Hitbox_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< bool >  __o_solid)
{  hx::ObjectPtr< Hitbox_obj > result = new Hitbox_obj();
	result->__construct(__o_width,__o_height,__o_x,__o_y,__o_solid);
	return result;}

Dynamic Hitbox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hitbox_obj > result = new Hitbox_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void Hitbox_obj::update( ){
{
		HX_STACK_PUSH("Hitbox::update","com/stencyl/models/collision/Hitbox.hx",170);
		HX_STACK_THIS(this);
		HX_STACK_LINE(170)
		if (((this->parent != null()))){
			HX_STACK_LINE(172)
			if (((this->list != null()))){
				HX_STACK_LINE(174)
				this->list->update();
			}
		}
	}
return null();
}


int Hitbox_obj::set_height( int value){
	HX_STACK_PUSH("Hitbox::set_height","com/stencyl/models/collision/Hitbox.hx",160);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(161)
	if (((this->_height == value))){
		HX_STACK_LINE(161)
		return value;
	}
	HX_STACK_LINE(162)
	this->_height = value;
	HX_STACK_LINE(163)
	if (((this->list != null()))){
		HX_STACK_LINE(163)
		this->list->update();
	}
	else{
		HX_STACK_LINE(164)
		if (((this->parent != null()))){
			HX_STACK_LINE(164)
			this->update();
		}
	}
	HX_STACK_LINE(165)
	return this->_height;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,set_height,return )

int Hitbox_obj::get_height( ){
	HX_STACK_PUSH("Hitbox::get_height","com/stencyl/models/collision/Hitbox.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_LINE(158)
	return this->_height;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,get_height,return )

int Hitbox_obj::set_width( int value){
	HX_STACK_PUSH("Hitbox::set_width","com/stencyl/models/collision/Hitbox.hx",146);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(147)
	if (((this->_width == value))){
		HX_STACK_LINE(147)
		return value;
	}
	HX_STACK_LINE(148)
	this->_width = value;
	HX_STACK_LINE(149)
	if (((this->list != null()))){
		HX_STACK_LINE(149)
		this->list->update();
	}
	else{
		HX_STACK_LINE(150)
		if (((this->parent != null()))){
			HX_STACK_LINE(150)
			this->update();
		}
	}
	HX_STACK_LINE(151)
	return this->_width;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,set_width,return )

int Hitbox_obj::get_width( ){
	HX_STACK_PUSH("Hitbox::get_width","com/stencyl/models/collision/Hitbox.hx",144);
	HX_STACK_THIS(this);
	HX_STACK_LINE(144)
	return this->_width;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,get_width,return )

int Hitbox_obj::set_y( int value){
	HX_STACK_PUSH("Hitbox::set_y","com/stencyl/models/collision/Hitbox.hx",132);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(133)
	if (((this->_y == value))){
		HX_STACK_LINE(133)
		return value;
	}
	HX_STACK_LINE(134)
	this->_y = value;
	HX_STACK_LINE(135)
	if (((this->list != null()))){
		HX_STACK_LINE(135)
		this->list->update();
	}
	else{
		HX_STACK_LINE(136)
		if (((this->parent != null()))){
			HX_STACK_LINE(136)
			this->update();
		}
	}
	HX_STACK_LINE(137)
	return this->_y;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,set_y,return )

int Hitbox_obj::get_y( ){
	HX_STACK_PUSH("Hitbox::get_y","com/stencyl/models/collision/Hitbox.hx",130);
	HX_STACK_THIS(this);
	HX_STACK_LINE(130)
	return this->_y;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,get_y,return )

int Hitbox_obj::set_x( int value){
	HX_STACK_PUSH("Hitbox::set_x","com/stencyl/models/collision/Hitbox.hx",118);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(119)
	if (((this->_x == value))){
		HX_STACK_LINE(119)
		return value;
	}
	HX_STACK_LINE(120)
	this->_x = value;
	HX_STACK_LINE(121)
	if (((this->list != null()))){
		HX_STACK_LINE(121)
		this->list->update();
	}
	else{
		HX_STACK_LINE(122)
		if (((this->parent != null()))){
			HX_STACK_LINE(122)
			this->update();
		}
	}
	HX_STACK_LINE(123)
	return this->_x;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,set_x,return )

int Hitbox_obj::get_x( ){
	HX_STACK_PUSH("Hitbox::get_x","com/stencyl/models/collision/Hitbox.hx",116);
	HX_STACK_THIS(this);
	HX_STACK_LINE(116)
	return this->_x;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,get_x,return )

bool Hitbox_obj::collideHitbox( ::com::stencyl::models::collision::Hitbox other){
	HX_STACK_PUSH("Hitbox::collideHitbox","com/stencyl/models/collision/Hitbox.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(75)
	if ((other->parent->alreadyCollided(hx::ObjectPtr<OBJ_>(this),other))){
		HX_STACK_LINE(76)
		return false;
	}
	HX_STACK_LINE(80)
	if (((bool((bool((bool((((this->parent->colX + this->_x) + this->_width) >= (other->parent->colX + other->_x))) && bool((((this->parent->colY + this->_y) + this->_height) >= (other->parent->colY + other->_y))))) && bool(((this->parent->colX + this->_x) <= ((other->parent->colX + other->_x) + other->_width))))) && bool(((this->parent->colY + this->_y) <= ((other->parent->colY + other->_y) + other->_height)))))){
		HX_STACK_LINE(85)
		if (((bool(::Std_obj::is(this->parent,hx::ClassOf< ::com::stencyl::models::Region >())) || bool(::Std_obj::is(other->parent,hx::ClassOf< ::com::stencyl::models::Region >()))))){
			HX_STACK_LINE(86)
			return true;
		}
		HX_STACK_LINE(90)
		::com::stencyl::models::collision::CollisionInfo info = ::com::stencyl::models::collision::CollisionInfo_obj::__new();		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(92)
		info->solidCollision = (bool(this->solid) && bool(other->solid));
		HX_STACK_LINE(93)
		info->maskA = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(94)
		info->maskB = other;
		HX_STACK_LINE(96)
		if ((this->parent->isLightweight)){
			HX_STACK_LINE(97)
			this->parent->addCollision(info);
		}
		HX_STACK_LINE(101)
		if ((other->parent->isLightweight)){
			HX_STACK_LINE(102)
			other->parent->addCollision(info);
		}
		HX_STACK_LINE(106)
		return true;
	}
	HX_STACK_LINE(109)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,collideHitbox,return )

bool Hitbox_obj::collideMask( ::com::stencyl::models::collision::Mask other){
	HX_STACK_PUSH("Hitbox::collideMask","com/stencyl/models/collision/Hitbox.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(40)
	if (((bool((bool((bool((((this->parent->colX + this->_x) + this->_width) >= other->parent->colX)) && bool((((this->parent->colY + this->_y) + this->_height) >= other->parent->colY)))) && bool(((this->parent->colX + this->_x) <= (other->parent->colX + other->parent->cacheWidth))))) && bool(((this->parent->colY + this->_y) <= (other->parent->colY + other->parent->cacheHeight)))))){
		HX_STACK_LINE(45)
		if (((bool(::Std_obj::is(this->parent,hx::ClassOf< ::com::stencyl::models::Region >())) || bool(::Std_obj::is(other->parent,hx::ClassOf< ::com::stencyl::models::Region >()))))){
			HX_STACK_LINE(46)
			return true;
		}
		HX_STACK_LINE(50)
		::com::stencyl::models::collision::CollisionInfo info = ::com::stencyl::models::collision::CollisionInfo_obj::__new();		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(52)
		info->solidCollision = (bool(this->solid) && bool(other->solid));
		HX_STACK_LINE(53)
		info->maskA = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(54)
		info->maskB = other;
		HX_STACK_LINE(56)
		if ((this->parent->isLightweight)){
			HX_STACK_LINE(57)
			this->parent->addCollision(info);
		}
		HX_STACK_LINE(61)
		if ((other->parent->isLightweight)){
			HX_STACK_LINE(62)
			other->parent->addCollision(info);
		}
		HX_STACK_LINE(66)
		return true;
	}
	HX_STACK_LINE(69)
	return false;
}


::com::stencyl::models::collision::Hitbox Hitbox_obj::clone( ){
	HX_STACK_PUSH("Hitbox::clone","com/stencyl/models/collision/Hitbox.hx",33);
	HX_STACK_THIS(this);
	HX_STACK_LINE(33)
	return ::com::stencyl::models::collision::Hitbox_obj::__new(this->_width,this->_height,this->_x,this->_y,this->solid);
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,clone,return )


Hitbox_obj::Hitbox_obj()
{
}

void Hitbox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Hitbox);
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_width,"_width");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Hitbox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Hitbox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hitbox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Hitbox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_y"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_y"),
	HX_CSTRING("_x"),
	HX_CSTRING("_height"),
	HX_CSTRING("_width"),
	HX_CSTRING("update"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_x"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hitbox_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hitbox_obj::__mClass,"__mClass");
};

Class Hitbox_obj::__mClass;

void Hitbox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.collision.Hitbox"), hx::TCanCast< Hitbox_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Hitbox_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace collision
