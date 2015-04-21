#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace collision{

Void Mask_obj::__construct()
{
HX_STACK_PUSH("Mask::new","com/stencyl/models/collision/Mask.hx",30);
{
	HX_STACK_LINE(31)
	this->solid = true;
	HX_STACK_LINE(32)
	this->_class = ::Type_obj::getClassName(::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this)));
	HX_STACK_LINE(33)
	this->_check = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(34)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::stencyl::models::collision::Mask >()),this->collideMask_dyn());
	HX_STACK_LINE(35)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::stencyl::models::collision::Masklist >()),this->collideMasklist_dyn());
}
;
	return null();
}

Mask_obj::~Mask_obj() { }

Dynamic Mask_obj::__CreateEmpty() { return  new Mask_obj; }
hx::ObjectPtr< Mask_obj > Mask_obj::__new()
{  hx::ObjectPtr< Mask_obj > result = new Mask_obj();
	result->__construct();
	return result;}

Dynamic Mask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mask_obj > result = new Mask_obj();
	result->__construct();
	return result;}

Void Mask_obj::projectMask( ::flash::geom::Point axis,::com::stencyl::models::collision::CollisionInfo collisionInfo){
{
		HX_STACK_PUSH("Mask::projectMask","com/stencyl/models/collision/Mask.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(collisionInfo,"collisionInfo");
		HX_STACK_LINE(117)
		Float cur;		HX_STACK_VAR(cur,"cur");
		Float max = -9999999999.;		HX_STACK_VAR(max,"max");
		Float min = 9999999999.;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(121)
		cur = ((-(this->parent->originX) * axis->x) - (this->parent->originY * axis->y));
		HX_STACK_LINE(122)
		if (((cur < min))){
			HX_STACK_LINE(123)
			min = cur;
		}
		HX_STACK_LINE(124)
		if (((cur > max))){
			HX_STACK_LINE(125)
			max = cur;
		}
		HX_STACK_LINE(127)
		cur = ((((-(this->parent->originX) + this->parent->cacheWidth)) * axis->x) - (this->parent->originY * axis->y));
		HX_STACK_LINE(128)
		if (((cur < min))){
			HX_STACK_LINE(129)
			min = cur;
		}
		HX_STACK_LINE(130)
		if (((cur > max))){
			HX_STACK_LINE(131)
			max = cur;
		}
		HX_STACK_LINE(133)
		cur = ((-(this->parent->originX) * axis->x) + (((-(this->parent->originY) + this->parent->cacheHeight)) * axis->y));
		HX_STACK_LINE(134)
		if (((cur < min))){
			HX_STACK_LINE(135)
			min = cur;
		}
		HX_STACK_LINE(136)
		if (((cur > max))){
			HX_STACK_LINE(137)
			max = cur;
		}
		HX_STACK_LINE(139)
		cur = ((((-(this->parent->originX) + this->parent->cacheWidth)) * axis->x) + (((-(this->parent->originY) + this->parent->cacheHeight)) * axis->y));
		HX_STACK_LINE(140)
		if (((cur < min))){
			HX_STACK_LINE(141)
			min = cur;
		}
		HX_STACK_LINE(142)
		if (((cur > max))){
			HX_STACK_LINE(143)
			max = cur;
		}
		HX_STACK_LINE(145)
		collisionInfo->min = min;
		HX_STACK_LINE(146)
		collisionInfo->max = max;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Mask_obj,projectMask,(void))

Void Mask_obj::update( ){
{
		HX_STACK_PUSH("Mask::update","com/stencyl/models/collision/Mask.hx",111);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mask_obj,update,(void))

Void Mask_obj::debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_PUSH("Mask::debugDraw","com/stencyl/models/collision/Mask.hx",105);
		HX_STACK_THIS(this);
		HX_STACK_ARG(graphics,"graphics");
		HX_STACK_ARG(scaleX,"scaleX");
		HX_STACK_ARG(scaleY,"scaleY");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Mask_obj,debugDraw,(void))

Void Mask_obj::assignTo( ::com::stencyl::models::Actor parent){
{
		HX_STACK_PUSH("Mask::assignTo","com/stencyl/models/collision/Mask.hx",96);
		HX_STACK_THIS(this);
		HX_STACK_ARG(parent,"parent");
		HX_STACK_LINE(97)
		this->parent = parent;
		HX_STACK_LINE(98)
		if (((parent != null()))){
			HX_STACK_LINE(98)
			this->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,assignTo,(void))

bool Mask_obj::collideMasklist( ::com::stencyl::models::collision::Masklist other){
	HX_STACK_PUSH("Mask::collideMasklist","com/stencyl/models/collision/Mask.hx",90);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(90)
	return other->collide(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,collideMasklist,return )

bool Mask_obj::collideMask( ::com::stencyl::models::collision::Mask other){
	HX_STACK_PUSH("Mask::collideMask","com/stencyl/models/collision/Mask.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(62)
	if (((bool((bool((bool(((this->parent->colX + this->parent->cacheWidth) >= other->parent->colX)) && bool(((this->parent->colY + this->parent->cacheHeight) >= other->parent->colY)))) && bool((this->parent->colX <= (other->parent->colX + other->parent->cacheWidth))))) && bool((this->parent->colY <= (other->parent->colY + other->parent->cacheHeight)))))){
		HX_STACK_LINE(67)
		::com::stencyl::models::collision::CollisionInfo info = ::com::stencyl::models::collision::CollisionInfo_obj::__new();		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(69)
		info->solidCollision = (bool(this->solid) && bool(other->solid));
		HX_STACK_LINE(70)
		info->maskA = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(71)
		info->maskB = other;
		HX_STACK_LINE(73)
		if ((this->parent->isLightweight)){
			HX_STACK_LINE(74)
			this->parent->addCollision(info);
		}
		HX_STACK_LINE(78)
		if ((other->parent->isLightweight)){
			HX_STACK_LINE(79)
			other->parent->addCollision(info);
		}
		HX_STACK_LINE(83)
		return true;
	}
	HX_STACK_LINE(86)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,collideMask,return )

bool Mask_obj::collide( ::com::stencyl::models::collision::Mask mask){
	HX_STACK_PUSH("Mask::collide","com/stencyl/models/collision/Mask.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_ARG(mask,"mask");
	HX_STACK_LINE(45)
	if (((this->parent == null()))){
		HX_STACK_LINE(46)
		hx::Throw (HX_CSTRING("Mask must be attached to a parent Entity"));
	}
	HX_STACK_LINE(50)
	Dynamic cbFunc = this->_check->get(mask->_class);		HX_STACK_VAR(cbFunc,"cbFunc");
	HX_STACK_LINE(51)
	if (((cbFunc != null()))){
		HX_STACK_LINE(51)
		return cbFunc(mask).Cast< bool >();
	}
	HX_STACK_LINE(53)
	cbFunc = mask->_check->get(this->_class);
	HX_STACK_LINE(54)
	if (((cbFunc != null()))){
		HX_STACK_LINE(54)
		return cbFunc(hx::ObjectPtr<OBJ_>(this)).Cast< bool >();
	}
	HX_STACK_LINE(56)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,collide,return )


Mask_obj::Mask_obj()
{
}

void Mask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mask);
	HX_MARK_MEMBER_NAME(_check,"_check");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_MEMBER_NAME(solid,"solid");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void Mask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_check,"_check");
	HX_VISIT_MEMBER_NAME(_class,"_class");
	HX_VISIT_MEMBER_NAME(solid,"solid");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic Mask_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"solid") ) { return solid; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_check") ) { return _check; }
		if (HX_FIELD_EQ(inName,"_class") ) { return _class; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"assignTo") ) { return assignTo_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"projectMask") ) { return projectMask_dyn(); }
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collideMasklist") ) { return collideMasklist_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mask_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::com::stencyl::models::collision::Masklist >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"solid") ) { solid=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_check") ) { _check=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_check"));
	outFields->push(HX_CSTRING("_class"));
	outFields->push(HX_CSTRING("solid"));
	outFields->push(HX_CSTRING("list"));
	outFields->push(HX_CSTRING("parent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_check"),
	HX_CSTRING("_class"),
	HX_CSTRING("projectMask"),
	HX_CSTRING("update"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("assignTo"),
	HX_CSTRING("collideMasklist"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("collide"),
	HX_CSTRING("solid"),
	HX_CSTRING("list"),
	HX_CSTRING("parent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mask_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mask_obj::__mClass,"__mClass");
};

Class Mask_obj::__mClass;

void Mask_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.collision.Mask"), hx::TCanCast< Mask_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Mask_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace collision
