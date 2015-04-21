#include <hxcpp.h>

#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Collision
#include <com/stencyl/models/actor/Collision.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_CollisionPoint
#include <com/stencyl/models/actor/CollisionPoint.h>
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
namespace actor{

Void Collision_obj::__construct()
{
HX_STACK_PUSH("Collision::new","com/stencyl/models/actor/Collision.hx",45);
{
	HX_STACK_LINE(46)
	this->points = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(48)
	this->clear();
}
;
	return null();
}

Collision_obj::~Collision_obj() { }

Dynamic Collision_obj::__CreateEmpty() { return  new Collision_obj; }
hx::ObjectPtr< Collision_obj > Collision_obj::__new()
{  hx::ObjectPtr< Collision_obj > result = new Collision_obj();
	result->__construct();
	return result;}

Dynamic Collision_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Collision_obj > result = new Collision_obj();
	result->__construct();
	return result;}

::com::stencyl::models::actor::Collision Collision_obj::switchData( ){
	HX_STACK_PUSH("Collision::switchData","com/stencyl/models/actor/Collision.hx",100);
	HX_STACK_THIS(this);
	HX_STACK_LINE(101)
	::com::stencyl::models::actor::Collision c = ::com::stencyl::models::actor::Collision_obj::get();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(103)
	c->thisActor = this->otherActor;
	HX_STACK_LINE(104)
	c->thisShape = this->otherShape;
	HX_STACK_LINE(105)
	c->thisFromTop = this->otherFromTop;
	HX_STACK_LINE(106)
	c->thisFromLeft = this->otherFromLeft;
	HX_STACK_LINE(107)
	c->thisFromBottom = this->otherFromBottom;
	HX_STACK_LINE(108)
	c->thisFromRight = this->otherFromRight;
	HX_STACK_LINE(109)
	c->thisCollidedWithActor = this->otherCollidedWithActor;
	HX_STACK_LINE(110)
	c->thisCollidedWithTile = this->otherCollidedWithTile;
	HX_STACK_LINE(111)
	c->thisCollidedWithSensor = this->otherCollidedWithSensor;
	HX_STACK_LINE(112)
	c->thisCollidedWithTerrain = this->otherCollidedWithTerrain;
	HX_STACK_LINE(114)
	c->otherActor = this->thisActor;
	HX_STACK_LINE(115)
	c->otherShape = this->thisShape;
	HX_STACK_LINE(116)
	c->otherFromTop = this->thisFromTop;
	HX_STACK_LINE(117)
	c->otherFromLeft = this->thisFromLeft;
	HX_STACK_LINE(118)
	c->otherFromBottom = this->thisFromBottom;
	HX_STACK_LINE(119)
	c->otherFromRight = this->thisFromRight;
	HX_STACK_LINE(120)
	c->otherCollidedWithActor = this->thisCollidedWithActor;
	HX_STACK_LINE(121)
	c->otherCollidedWithTile = this->thisCollidedWithTile;
	HX_STACK_LINE(122)
	c->otherCollidedWithSensor = this->thisCollidedWithSensor;
	HX_STACK_LINE(123)
	c->otherCollidedWithTerrain = this->thisCollidedWithTerrain;
	HX_STACK_LINE(125)
	c->actorA = this->actorA;
	HX_STACK_LINE(126)
	c->actorB = this->actorB;
	HX_STACK_LINE(127)
	c->points = this->points;
	HX_STACK_LINE(129)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC0(Collision_obj,switchData,return )

Void Collision_obj::clear( ){
{
		HX_STACK_PUSH("Collision::clear","com/stencyl/models/actor/Collision.hx",63);
		HX_STACK_THIS(this);
		HX_STACK_LINE(64)
		while(((this->points->length > (int)0))){
			HX_STACK_LINE(65)
			this->points->pop().StaticCast< ::com::stencyl::models::actor::CollisionPoint >();
		}
		HX_STACK_LINE(69)
		this->thisFromTop = false;
		HX_STACK_LINE(70)
		this->thisFromLeft = false;
		HX_STACK_LINE(71)
		this->thisFromBottom = false;
		HX_STACK_LINE(72)
		this->thisFromRight = false;
		HX_STACK_LINE(74)
		this->thisCollidedWithActor = false;
		HX_STACK_LINE(75)
		this->thisCollidedWithTile = false;
		HX_STACK_LINE(76)
		this->thisCollidedWithSensor = false;
		HX_STACK_LINE(77)
		this->thisCollidedWithTerrain = false;
		HX_STACK_LINE(79)
		this->otherFromTop = false;
		HX_STACK_LINE(80)
		this->otherFromLeft = false;
		HX_STACK_LINE(81)
		this->otherFromBottom = false;
		HX_STACK_LINE(82)
		this->otherFromRight = false;
		HX_STACK_LINE(84)
		this->otherCollidedWithActor = false;
		HX_STACK_LINE(85)
		this->otherCollidedWithTile = false;
		HX_STACK_LINE(86)
		this->otherCollidedWithSensor = false;
		HX_STACK_LINE(87)
		this->otherCollidedWithTerrain = false;
		HX_STACK_LINE(89)
		this->thisActor = null();
		HX_STACK_LINE(90)
		this->otherActor = null();
		HX_STACK_LINE(92)
		this->thisShape = null();
		HX_STACK_LINE(93)
		this->otherShape = null();
		HX_STACK_LINE(95)
		this->actorA = null();
		HX_STACK_LINE(96)
		this->actorB = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Collision_obj,clear,(void))

Array< ::Dynamic > Collision_obj::recycledCollisions;

::com::stencyl::models::actor::Collision Collision_obj::get( ){
	HX_STACK_PUSH("Collision::get","com/stencyl/models/actor/Collision.hx",52);
	HX_STACK_LINE(53)
	if (((::com::stencyl::models::actor::Collision_obj::recycledCollisions->length > (int)0))){
		HX_STACK_LINE(55)
		::com::stencyl::models::actor::Collision_obj::recycledCollisions->__get((::com::stencyl::models::actor::Collision_obj::recycledCollisions->length - (int)1)).StaticCast< ::com::stencyl::models::actor::Collision >()->clear();
		HX_STACK_LINE(56)
		return ::com::stencyl::models::actor::Collision_obj::recycledCollisions->pop().StaticCast< ::com::stencyl::models::actor::Collision >();
	}
	HX_STACK_LINE(59)
	return ::com::stencyl::models::actor::Collision_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Collision_obj,get,return )


Collision_obj::Collision_obj()
{
}

void Collision_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Collision);
	HX_MARK_MEMBER_NAME(actorB,"actorB");
	HX_MARK_MEMBER_NAME(actorA,"actorA");
	HX_MARK_MEMBER_NAME(otherShape,"otherShape");
	HX_MARK_MEMBER_NAME(thisShape,"thisShape");
	HX_MARK_MEMBER_NAME(otherActor,"otherActor");
	HX_MARK_MEMBER_NAME(thisActor,"thisActor");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(otherCollidedWithTerrain,"otherCollidedWithTerrain");
	HX_MARK_MEMBER_NAME(otherCollidedWithSensor,"otherCollidedWithSensor");
	HX_MARK_MEMBER_NAME(otherCollidedWithTile,"otherCollidedWithTile");
	HX_MARK_MEMBER_NAME(otherCollidedWithActor,"otherCollidedWithActor");
	HX_MARK_MEMBER_NAME(otherFromRight,"otherFromRight");
	HX_MARK_MEMBER_NAME(otherFromBottom,"otherFromBottom");
	HX_MARK_MEMBER_NAME(otherFromLeft,"otherFromLeft");
	HX_MARK_MEMBER_NAME(otherFromTop,"otherFromTop");
	HX_MARK_MEMBER_NAME(thisCollidedWithTerrain,"thisCollidedWithTerrain");
	HX_MARK_MEMBER_NAME(thisCollidedWithSensor,"thisCollidedWithSensor");
	HX_MARK_MEMBER_NAME(thisCollidedWithTile,"thisCollidedWithTile");
	HX_MARK_MEMBER_NAME(thisCollidedWithActor,"thisCollidedWithActor");
	HX_MARK_MEMBER_NAME(thisFromRight,"thisFromRight");
	HX_MARK_MEMBER_NAME(thisFromBottom,"thisFromBottom");
	HX_MARK_MEMBER_NAME(thisFromLeft,"thisFromLeft");
	HX_MARK_MEMBER_NAME(thisFromTop,"thisFromTop");
	HX_MARK_END_CLASS();
}

void Collision_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(actorB,"actorB");
	HX_VISIT_MEMBER_NAME(actorA,"actorA");
	HX_VISIT_MEMBER_NAME(otherShape,"otherShape");
	HX_VISIT_MEMBER_NAME(thisShape,"thisShape");
	HX_VISIT_MEMBER_NAME(otherActor,"otherActor");
	HX_VISIT_MEMBER_NAME(thisActor,"thisActor");
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(otherCollidedWithTerrain,"otherCollidedWithTerrain");
	HX_VISIT_MEMBER_NAME(otherCollidedWithSensor,"otherCollidedWithSensor");
	HX_VISIT_MEMBER_NAME(otherCollidedWithTile,"otherCollidedWithTile");
	HX_VISIT_MEMBER_NAME(otherCollidedWithActor,"otherCollidedWithActor");
	HX_VISIT_MEMBER_NAME(otherFromRight,"otherFromRight");
	HX_VISIT_MEMBER_NAME(otherFromBottom,"otherFromBottom");
	HX_VISIT_MEMBER_NAME(otherFromLeft,"otherFromLeft");
	HX_VISIT_MEMBER_NAME(otherFromTop,"otherFromTop");
	HX_VISIT_MEMBER_NAME(thisCollidedWithTerrain,"thisCollidedWithTerrain");
	HX_VISIT_MEMBER_NAME(thisCollidedWithSensor,"thisCollidedWithSensor");
	HX_VISIT_MEMBER_NAME(thisCollidedWithTile,"thisCollidedWithTile");
	HX_VISIT_MEMBER_NAME(thisCollidedWithActor,"thisCollidedWithActor");
	HX_VISIT_MEMBER_NAME(thisFromRight,"thisFromRight");
	HX_VISIT_MEMBER_NAME(thisFromBottom,"thisFromBottom");
	HX_VISIT_MEMBER_NAME(thisFromLeft,"thisFromLeft");
	HX_VISIT_MEMBER_NAME(thisFromTop,"thisFromTop");
}

Dynamic Collision_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"actorB") ) { return actorB; }
		if (HX_FIELD_EQ(inName,"actorA") ) { return actorA; }
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thisShape") ) { return thisShape; }
		if (HX_FIELD_EQ(inName,"thisActor") ) { return thisActor; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"switchData") ) { return switchData_dyn(); }
		if (HX_FIELD_EQ(inName,"otherShape") ) { return otherShape; }
		if (HX_FIELD_EQ(inName,"otherActor") ) { return otherActor; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"thisFromTop") ) { return thisFromTop; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"otherFromTop") ) { return otherFromTop; }
		if (HX_FIELD_EQ(inName,"thisFromLeft") ) { return thisFromLeft; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"otherFromLeft") ) { return otherFromLeft; }
		if (HX_FIELD_EQ(inName,"thisFromRight") ) { return thisFromRight; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"otherFromRight") ) { return otherFromRight; }
		if (HX_FIELD_EQ(inName,"thisFromBottom") ) { return thisFromBottom; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"otherFromBottom") ) { return otherFromBottom; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"recycledCollisions") ) { return recycledCollisions; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"thisCollidedWithTile") ) { return thisCollidedWithTile; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"otherCollidedWithTile") ) { return otherCollidedWithTile; }
		if (HX_FIELD_EQ(inName,"thisCollidedWithActor") ) { return thisCollidedWithActor; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"otherCollidedWithActor") ) { return otherCollidedWithActor; }
		if (HX_FIELD_EQ(inName,"thisCollidedWithSensor") ) { return thisCollidedWithSensor; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"otherCollidedWithSensor") ) { return otherCollidedWithSensor; }
		if (HX_FIELD_EQ(inName,"thisCollidedWithTerrain") ) { return thisCollidedWithTerrain; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"otherCollidedWithTerrain") ) { return otherCollidedWithTerrain; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Collision_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"actorB") ) { actorB=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actorA") ) { actorA=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thisShape") ) { thisShape=inValue.Cast< ::box2D::dynamics::B2Fixture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thisActor") ) { thisActor=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"otherShape") ) { otherShape=inValue.Cast< ::box2D::dynamics::B2Fixture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"otherActor") ) { otherActor=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"thisFromTop") ) { thisFromTop=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"otherFromTop") ) { otherFromTop=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thisFromLeft") ) { thisFromLeft=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"otherFromLeft") ) { otherFromLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thisFromRight") ) { thisFromRight=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"otherFromRight") ) { otherFromRight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thisFromBottom") ) { thisFromBottom=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"otherFromBottom") ) { otherFromBottom=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"recycledCollisions") ) { recycledCollisions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"thisCollidedWithTile") ) { thisCollidedWithTile=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"otherCollidedWithTile") ) { otherCollidedWithTile=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thisCollidedWithActor") ) { thisCollidedWithActor=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"otherCollidedWithActor") ) { otherCollidedWithActor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thisCollidedWithSensor") ) { thisCollidedWithSensor=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"otherCollidedWithSensor") ) { otherCollidedWithSensor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thisCollidedWithTerrain") ) { thisCollidedWithTerrain=inValue.Cast< bool >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"otherCollidedWithTerrain") ) { otherCollidedWithTerrain=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Collision_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("actorB"));
	outFields->push(HX_CSTRING("actorA"));
	outFields->push(HX_CSTRING("otherShape"));
	outFields->push(HX_CSTRING("thisShape"));
	outFields->push(HX_CSTRING("otherActor"));
	outFields->push(HX_CSTRING("thisActor"));
	outFields->push(HX_CSTRING("points"));
	outFields->push(HX_CSTRING("otherCollidedWithTerrain"));
	outFields->push(HX_CSTRING("otherCollidedWithSensor"));
	outFields->push(HX_CSTRING("otherCollidedWithTile"));
	outFields->push(HX_CSTRING("otherCollidedWithActor"));
	outFields->push(HX_CSTRING("otherFromRight"));
	outFields->push(HX_CSTRING("otherFromBottom"));
	outFields->push(HX_CSTRING("otherFromLeft"));
	outFields->push(HX_CSTRING("otherFromTop"));
	outFields->push(HX_CSTRING("thisCollidedWithTerrain"));
	outFields->push(HX_CSTRING("thisCollidedWithSensor"));
	outFields->push(HX_CSTRING("thisCollidedWithTile"));
	outFields->push(HX_CSTRING("thisCollidedWithActor"));
	outFields->push(HX_CSTRING("thisFromRight"));
	outFields->push(HX_CSTRING("thisFromBottom"));
	outFields->push(HX_CSTRING("thisFromLeft"));
	outFields->push(HX_CSTRING("thisFromTop"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("recycledCollisions"),
	HX_CSTRING("get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("switchData"),
	HX_CSTRING("clear"),
	HX_CSTRING("actorB"),
	HX_CSTRING("actorA"),
	HX_CSTRING("otherShape"),
	HX_CSTRING("thisShape"),
	HX_CSTRING("otherActor"),
	HX_CSTRING("thisActor"),
	HX_CSTRING("points"),
	HX_CSTRING("otherCollidedWithTerrain"),
	HX_CSTRING("otherCollidedWithSensor"),
	HX_CSTRING("otherCollidedWithTile"),
	HX_CSTRING("otherCollidedWithActor"),
	HX_CSTRING("otherFromRight"),
	HX_CSTRING("otherFromBottom"),
	HX_CSTRING("otherFromLeft"),
	HX_CSTRING("otherFromTop"),
	HX_CSTRING("thisCollidedWithTerrain"),
	HX_CSTRING("thisCollidedWithSensor"),
	HX_CSTRING("thisCollidedWithTile"),
	HX_CSTRING("thisCollidedWithActor"),
	HX_CSTRING("thisFromRight"),
	HX_CSTRING("thisFromBottom"),
	HX_CSTRING("thisFromLeft"),
	HX_CSTRING("thisFromTop"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Collision_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Collision_obj::recycledCollisions,"recycledCollisions");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Collision_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Collision_obj::recycledCollisions,"recycledCollisions");
};

Class Collision_obj::__mClass;

void Collision_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.actor.Collision"), hx::TCanCast< Collision_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Collision_obj::__boot()
{
	recycledCollisions= Array_obj< ::Dynamic >::__new();
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor
