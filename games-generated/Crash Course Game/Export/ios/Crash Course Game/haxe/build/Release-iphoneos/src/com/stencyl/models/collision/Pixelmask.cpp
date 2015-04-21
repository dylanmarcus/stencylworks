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
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace collision{

Void Pixelmask_obj::__construct(Dynamic source,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_PUSH("Pixelmask::new","com/stencyl/models/collision/Pixelmask.hx",27);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(28)
	super::__construct(null(),null(),null(),null(),null());
	HX_STACK_LINE(31)
	if ((::Std_obj::is(source,hx::ClassOf< ::flash::display::BitmapData >()))){
		HX_STACK_LINE(31)
		this->_data = source;
	}
	HX_STACK_LINE(33)
	if (((this->_data == null()))){
		HX_STACK_LINE(33)
		hx::Throw (HX_CSTRING("Invalid Pixelmask source image."));
	}
	HX_STACK_LINE(35)
	this->threshold = (int)1;
	HX_STACK_LINE(37)
	this->_rect = ::com::stencyl::utils::Utils_obj::rect;
	HX_STACK_LINE(38)
	this->_point = ::com::stencyl::utils::Utils_obj::point;
	HX_STACK_LINE(39)
	this->_point2 = ::com::stencyl::utils::Utils_obj::point2;
	HX_STACK_LINE(42)
	this->_width = this->get_data()->get_width();
	HX_STACK_LINE(43)
	this->_height = this->get_data()->get_height();
	HX_STACK_LINE(44)
	this->_x = x;
	HX_STACK_LINE(45)
	this->_y = y;
	HX_STACK_LINE(48)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::stencyl::models::collision::Mask >()),this->collideMask_dyn());
	HX_STACK_LINE(49)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::stencyl::models::collision::Pixelmask >()),this->collidePixelmask_dyn());
	HX_STACK_LINE(50)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::stencyl::models::collision::Hitbox >()),this->collideHitbox_dyn());
}
;
	return null();
}

Pixelmask_obj::~Pixelmask_obj() { }

Dynamic Pixelmask_obj::__CreateEmpty() { return  new Pixelmask_obj; }
hx::ObjectPtr< Pixelmask_obj > Pixelmask_obj::__new(Dynamic source,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Pixelmask_obj > result = new Pixelmask_obj();
	result->__construct(source,__o_x,__o_y);
	return result;}

Dynamic Pixelmask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Pixelmask_obj > result = new Pixelmask_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::flash::display::BitmapData Pixelmask_obj::set_data( ::flash::display::BitmapData value){
	HX_STACK_PUSH("Pixelmask::set_data","com/stencyl/models/collision/Pixelmask.hx",105);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(106)
	this->_data = value;
	HX_STACK_LINE(107)
	this->_width = value->get_width();
	HX_STACK_LINE(108)
	this->_height = value->get_height();
	HX_STACK_LINE(109)
	this->update();
	HX_STACK_LINE(110)
	return this->_data;
}


HX_DEFINE_DYNAMIC_FUNC1(Pixelmask_obj,set_data,return )

::flash::display::BitmapData Pixelmask_obj::get_data( ){
	HX_STACK_PUSH("Pixelmask::get_data","com/stencyl/models/collision/Pixelmask.hx",103);
	HX_STACK_THIS(this);
	HX_STACK_LINE(103)
	return this->_data;
}


HX_DEFINE_DYNAMIC_FUNC0(Pixelmask_obj,get_data,return )

bool Pixelmask_obj::collidePixelmask( ::com::stencyl::models::collision::Pixelmask other){
	HX_STACK_PUSH("Pixelmask::collidePixelmask","com/stencyl/models/collision/Pixelmask.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(88)
	this->_point->x = (this->parent->colX + this->_x);
	HX_STACK_LINE(89)
	this->_point->y = (this->parent->colY + this->_y);
	HX_STACK_LINE(90)
	this->_point2->x = (other->parent->colX + other->_x);
	HX_STACK_LINE(91)
	this->_point2->y = (other->parent->colY + other->_y);
	HX_STACK_LINE(95)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Pixelmask_obj,collidePixelmask,return )

bool Pixelmask_obj::collideHitbox( ::com::stencyl::models::collision::Hitbox other){
	HX_STACK_PUSH("Pixelmask::collideHitbox","com/stencyl/models/collision/Pixelmask.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(72)
	this->_point->x = (this->parent->colX + this->_x);
	HX_STACK_LINE(73)
	this->_point->y = (this->parent->colY + this->_y);
	HX_STACK_LINE(74)
	this->_rect->x = (other->parent->colX + other->_x);
	HX_STACK_LINE(75)
	this->_rect->y = (other->parent->colY + other->_y);
	HX_STACK_LINE(76)
	this->_rect->width = other->_width;
	HX_STACK_LINE(77)
	this->_rect->height = other->_height;
	HX_STACK_LINE(81)
	return false;
}


bool Pixelmask_obj::collideMask( ::com::stencyl::models::collision::Mask other){
	HX_STACK_PUSH("Pixelmask::collideMask","com/stencyl/models/collision/Pixelmask.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(56)
	this->_point->x = (this->parent->colX + this->_x);
	HX_STACK_LINE(57)
	this->_point->y = (this->parent->colY + this->_y);
	HX_STACK_LINE(58)
	this->_rect->x = other->parent->colX;
	HX_STACK_LINE(59)
	this->_rect->y = other->parent->colY;
	HX_STACK_LINE(60)
	this->_rect->width = other->parent->cacheWidth;
	HX_STACK_LINE(61)
	this->_rect->height = other->parent->cacheHeight;
	HX_STACK_LINE(65)
	return false;
}



Pixelmask_obj::Pixelmask_obj()
{
}

void Pixelmask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pixelmask);
	HX_MARK_MEMBER_NAME(_point2,"_point2");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(threshold,"threshold");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Pixelmask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_point2,"_point2");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(threshold,"threshold");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Pixelmask_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return get_data(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { return _point2; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collidePixelmask") ) { return collidePixelmask_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Pixelmask_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return set_data(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { _point2=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"threshold") ) { threshold=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pixelmask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_point2"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("threshold"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_point2"),
	HX_CSTRING("_point"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_data"),
	HX_CSTRING("set_data"),
	HX_CSTRING("get_data"),
	HX_CSTRING("collidePixelmask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("threshold"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pixelmask_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pixelmask_obj::__mClass,"__mClass");
};

Class Pixelmask_obj::__mClass;

void Pixelmask_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.collision.Pixelmask"), hx::TCanCast< Pixelmask_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Pixelmask_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace collision
