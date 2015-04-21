#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_box2D_collision_B2AABB
#include <box2D/collision/B2AABB.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2CircleShape
#include <box2D/collision/shapes/B2CircleShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2PolygonShape
#include <box2D/collision/shapes/B2PolygonShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Mat22
#include <box2D/common/math/B2Mat22.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Transform
#include <box2D/common/math/B2Transform.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2BodyDef
#include <box2D/dynamics/B2BodyDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2FixtureDef
#include <box2D/dynamics/B2FixtureDef.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Terrain
#include <com/stencyl/models/Terrain.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Sprite
#include <com/stencyl/models/actor/Sprite.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace stencyl{
namespace models{

Void Terrain_obj::__construct(::com::stencyl::Engine game,Float x,Float y,Array< ::Dynamic > shapes,int groupID,hx::Null< int >  __o_fillColor)
{
HX_STACK_PUSH("Terrain::new","com/stencyl/models/Terrain.hx",29);
int fillColor = __o_fillColor.Default(0);
{
	HX_STACK_LINE(30)
	super::__construct(game,(int)0,groupID,x,y,game->getTopLayer(),(int)1,(int)1,null(),null(),null(),null(),false,true,false,false,shapes->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >(),null(),null(),null(),null());
	HX_STACK_LINE(35)
	if (((fillColor == (int)0))){
		HX_STACK_LINE(35)
		fillColor = (int)0;
	}
	HX_STACK_LINE(36)
	this->fillColor = fillColor;
	HX_STACK_LINE(38)
	this->alwaysSimulate = true;
	HX_STACK_LINE(39)
	this->isRegion = false;
	HX_STACK_LINE(40)
	this->isTerrainRegion = true;
	HX_STACK_LINE(42)
	this->copy = shapes->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >();
	HX_STACK_LINE(44)
	this->body->setSleepingAllowed(true);
	HX_STACK_LINE(45)
	this->body->setAwake(false);
	HX_STACK_LINE(46)
	this->body->setIgnoreGravity(true);
	HX_STACK_LINE(49)
	Float lowerXBound = (int)0;		HX_STACK_VAR(lowerXBound,"lowerXBound");
	HX_STACK_LINE(50)
	Float upperXBound = (int)0;		HX_STACK_VAR(upperXBound,"upperXBound");
	HX_STACK_LINE(51)
	Float lowerYBound = (int)0;		HX_STACK_VAR(lowerYBound,"lowerYBound");
	HX_STACK_LINE(52)
	Float upperYBound = (int)0;		HX_STACK_VAR(upperYBound,"upperYBound");
	HX_STACK_LINE(54)
	if ((::Std_obj::is(shapes->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >(),hx::ClassOf< ::box2D::collision::shapes::B2PolygonShape >()))){
		HX_STACK_LINE(56)
		this->isCircle = false;
		HX_STACK_LINE(57)
		::box2D::common::math::B2Transform trans = ::box2D::common::math::B2Transform_obj::__new(null(),null());		HX_STACK_VAR(trans,"trans");
		HX_STACK_LINE(58)
		trans->setIdentity();
		HX_STACK_LINE(60)
		::box2D::collision::B2AABB aabb = ::box2D::collision::B2AABB_obj::__new();		HX_STACK_VAR(aabb,"aabb");
		HX_STACK_LINE(62)
		(hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(shapes->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >()))->computeAABB(aabb,trans);
		HX_STACK_LINE(64)
		lowerXBound = aabb->lowerBound->x;
		HX_STACK_LINE(65)
		upperXBound = aabb->upperBound->x;
		HX_STACK_LINE(66)
		lowerYBound = aabb->lowerBound->y;
		HX_STACK_LINE(67)
		upperYBound = aabb->upperBound->y;
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = shapes->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(69)
			while(((_g1 < _g))){
				HX_STACK_LINE(69)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(71)
				::box2D::dynamics::B2FixtureDef fixture = ::box2D::dynamics::B2FixtureDef_obj::__new();		HX_STACK_VAR(fixture,"fixture");
				HX_STACK_LINE(72)
				fixture->isSensor = false;
				HX_STACK_LINE(73)
				fixture->userData = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(74)
				fixture->shape = shapes->__get(i).StaticCast< ::box2D::collision::shapes::B2Shape >();
				HX_STACK_LINE(75)
				fixture->friction = 1.0;
				HX_STACK_LINE(76)
				fixture->density = 0.1;
				HX_STACK_LINE(77)
				fixture->restitution = (int)0;
				HX_STACK_LINE(78)
				fixture->groupID = groupID;
				HX_STACK_LINE(80)
				this->body->createFixture(fixture);
				HX_STACK_LINE(82)
				(hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(shapes->__get(i).StaticCast< ::box2D::collision::shapes::B2Shape >()))->computeAABB(aabb,trans);
				HX_STACK_LINE(83)
				lowerXBound = ::Math_obj::min(lowerXBound,aabb->lowerBound->x);
				HX_STACK_LINE(84)
				upperXBound = ::Math_obj::max(upperXBound,aabb->upperBound->x);
				HX_STACK_LINE(85)
				lowerYBound = ::Math_obj::min(lowerYBound,aabb->lowerBound->y);
				HX_STACK_LINE(86)
				upperYBound = ::Math_obj::max(upperYBound,aabb->upperBound->y);
			}
		}
		HX_STACK_LINE(89)
		this->originalWidth = this->regionWidth = ::Math_obj::round(::com::stencyl::Engine_obj::toPixelUnits(::Math_obj::abs((lowerXBound - upperXBound))));
		HX_STACK_LINE(90)
		this->originalHeight = this->regionHeight = ::Math_obj::round(::com::stencyl::Engine_obj::toPixelUnits(::Math_obj::abs((lowerYBound - upperYBound))));
	}
	else{
		HX_STACK_LINE(93)
		if ((::Std_obj::is(shapes->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >(),hx::ClassOf< ::box2D::collision::shapes::B2CircleShape >()))){
			HX_STACK_LINE(95)
			this->isCircle = true;
			HX_STACK_LINE(97)
			this->originalWidth = this->regionWidth = ::com::stencyl::Engine_obj::toPixelUnits(((hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(shapes->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >()))->m_radius * (int)2));
			HX_STACK_LINE(98)
			this->originalHeight = this->regionHeight = ::com::stencyl::Engine_obj::toPixelUnits(((hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(shapes->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >()))->m_radius * (int)2));
		}
	}
}
;
	return null();
}

Terrain_obj::~Terrain_obj() { }

Dynamic Terrain_obj::__CreateEmpty() { return  new Terrain_obj; }
hx::ObjectPtr< Terrain_obj > Terrain_obj::__new(::com::stencyl::Engine game,Float x,Float y,Array< ::Dynamic > shapes,int groupID,hx::Null< int >  __o_fillColor)
{  hx::ObjectPtr< Terrain_obj > result = new Terrain_obj();
	result->__construct(game,x,y,shapes,groupID,__o_fillColor);
	return result;}

Dynamic Terrain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Terrain_obj > result = new Terrain_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

int Terrain_obj::getFillColor( ){
	HX_STACK_PUSH("Terrain::getFillColor","com/stencyl/models/Terrain.hx",187);
	HX_STACK_THIS(this);
	HX_STACK_LINE(187)
	return this->fillColor;
}


HX_DEFINE_DYNAMIC_FUNC0(Terrain_obj,getFillColor,return )

Float Terrain_obj::getHeight( ){
	HX_STACK_PUSH("Terrain::getHeight","com/stencyl/models/Terrain.hx",182);
	HX_STACK_THIS(this);
	HX_STACK_LINE(182)
	return this->regionHeight;
}


Float Terrain_obj::getWidth( ){
	HX_STACK_PUSH("Terrain::getWidth","com/stencyl/models/Terrain.hx",177);
	HX_STACK_THIS(this);
	HX_STACK_LINE(177)
	return this->regionWidth;
}


Void Terrain_obj::setLocation( Float x,Float y){
{
		HX_STACK_PUSH("Terrain::setLocation","com/stencyl/models/Terrain.hx",171);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(172)
		this->setX((x + (Float(this->regionWidth) / Float((int)2))),null(),null());
		HX_STACK_LINE(173)
		this->setY((y + (Float(this->regionHeight) / Float((int)2))),null(),null());
	}
return null();
}


Void Terrain_obj::setRegionSize( Float width,Float height){
{
		HX_STACK_PUSH("Terrain::setRegionSize","com/stencyl/models/Terrain.hx",122);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(123)
		Float oldWidth = this->regionWidth;		HX_STACK_VAR(oldWidth,"oldWidth");
		HX_STACK_LINE(124)
		Float oldHeight = this->regionHeight;		HX_STACK_VAR(oldHeight,"oldHeight");
		HX_STACK_LINE(126)
		width = ::com::stencyl::Engine_obj::toPhysicalUnits(width);
		HX_STACK_LINE(127)
		height = ::com::stencyl::Engine_obj::toPhysicalUnits(height);
		HX_STACK_LINE(129)
		::box2D::collision::shapes::B2Shape shape;		HX_STACK_VAR(shape,"shape");
		HX_STACK_LINE(131)
		if ((this->isCircle)){
			HX_STACK_LINE(133)
			::box2D::collision::shapes::B2CircleShape s = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(134)
			s->m_radius = (Float(width) / Float((int)2));
			HX_STACK_LINE(135)
			shape = s;
		}
		else{
			HX_STACK_LINE(140)
			::box2D::collision::shapes::B2PolygonShape s2 = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(s2,"s2");
			HX_STACK_LINE(141)
			s2->setAsBox((Float(width) / Float((int)2)),(Float(height) / Float((int)2)));
			HX_STACK_LINE(142)
			shape = s2;
		}
		HX_STACK_LINE(145)
		::box2D::dynamics::B2FixtureDef fixture = ::box2D::dynamics::B2FixtureDef_obj::__new();		HX_STACK_VAR(fixture,"fixture");
		HX_STACK_LINE(146)
		fixture->isSensor = true;
		HX_STACK_LINE(147)
		fixture->userData = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(148)
		fixture->shape = shape;
		HX_STACK_LINE(150)
		if (((bool((this->body != null())) && bool((this->body->getFixtureList() != null()))))){
			HX_STACK_LINE(152)
			while(((this->body->m_fixtureCount > (int)0))){
				HX_STACK_LINE(153)
				this->body->DestroyFixture(this->body->getFixtureList());
			}
			HX_STACK_LINE(157)
			this->body->createFixture(fixture);
			HX_STACK_LINE(159)
			this->regionWidth = ::com::stencyl::Engine_obj::toPixelUnits(width);
			HX_STACK_LINE(160)
			this->regionHeight = ::com::stencyl::Engine_obj::toPixelUnits(height);
		}
		HX_STACK_LINE(163)
		Float dw = (this->regionWidth - oldWidth);		HX_STACK_VAR(dw,"dw");
		HX_STACK_LINE(164)
		Float dh = (this->regionHeight - oldHeight);		HX_STACK_VAR(dh,"dh");
		HX_STACK_LINE(167)
		this->setLocation((this->getX(null()) + (Float(dw) / Float((int)2))),(this->getY(null()) + (Float(dh) / Float((int)2))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Terrain_obj,setRegionSize,(void))

Void Terrain_obj::setRegionDiameter( Float diameter){
{
		HX_STACK_PUSH("Terrain::setRegionDiameter","com/stencyl/models/Terrain.hx",117);
		HX_STACK_THIS(this);
		HX_STACK_ARG(diameter,"diameter");
		HX_STACK_LINE(117)
		this->setRegionSize(diameter,diameter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Terrain_obj,setRegionDiameter,(void))

Void Terrain_obj::resetSize( ){
{
		HX_STACK_PUSH("Terrain::resetSize","com/stencyl/models/Terrain.hx",112);
		HX_STACK_THIS(this);
		HX_STACK_LINE(112)
		this->setRegionSize(this->originalWidth,this->originalHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Terrain_obj,resetSize,(void))

Void Terrain_obj::follow( ::com::stencyl::models::Actor actor){
{
		HX_STACK_PUSH("Terrain::follow","com/stencyl/models/Terrain.hx",103);
		HX_STACK_THIS(this);
		HX_STACK_ARG(actor,"actor");
		HX_STACK_LINE(104)
		Float x = (actor->realX + (Float(actor->cacheWidth) / Float((int)2)));		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(105)
		Float y = (actor->realY + (Float(actor->cacheHeight) / Float((int)2)));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(107)
		this->setX(x,null(),null());
		HX_STACK_LINE(108)
		this->setY(y,null(),null());
	}
return null();
}



Terrain_obj::Terrain_obj()
{
}

void Terrain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Terrain);
	HX_MARK_MEMBER_NAME(regionHeight,"regionHeight");
	HX_MARK_MEMBER_NAME(regionWidth,"regionWidth");
	HX_MARK_MEMBER_NAME(originalHeight,"originalHeight");
	HX_MARK_MEMBER_NAME(originalWidth,"originalWidth");
	HX_MARK_MEMBER_NAME(copy,"copy");
	HX_MARK_MEMBER_NAME(fillColor,"fillColor");
	HX_MARK_MEMBER_NAME(isCircle,"isCircle");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Terrain_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(regionHeight,"regionHeight");
	HX_VISIT_MEMBER_NAME(regionWidth,"regionWidth");
	HX_VISIT_MEMBER_NAME(originalHeight,"originalHeight");
	HX_VISIT_MEMBER_NAME(originalWidth,"originalWidth");
	HX_VISIT_MEMBER_NAME(copy,"copy");
	HX_VISIT_MEMBER_NAME(fillColor,"fillColor");
	HX_VISIT_MEMBER_NAME(isCircle,"isCircle");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Terrain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"isCircle") ) { return isCircle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSize") ) { return resetSize_dyn(); }
		if (HX_FIELD_EQ(inName,"fillColor") ) { return fillColor; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setLocation") ) { return setLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"regionWidth") ) { return regionWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFillColor") ) { return getFillColor_dyn(); }
		if (HX_FIELD_EQ(inName,"regionHeight") ) { return regionHeight; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setRegionSize") ) { return setRegionSize_dyn(); }
		if (HX_FIELD_EQ(inName,"originalWidth") ) { return originalWidth; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"originalHeight") ) { return originalHeight; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setRegionDiameter") ) { return setRegionDiameter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Terrain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { copy=inValue.Cast< ::box2D::collision::shapes::B2Shape >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isCircle") ) { isCircle=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fillColor") ) { fillColor=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"regionWidth") ) { regionWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"regionHeight") ) { regionHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalWidth") ) { originalWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"originalHeight") ) { originalHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Terrain_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("regionHeight"));
	outFields->push(HX_CSTRING("regionWidth"));
	outFields->push(HX_CSTRING("originalHeight"));
	outFields->push(HX_CSTRING("originalWidth"));
	outFields->push(HX_CSTRING("copy"));
	outFields->push(HX_CSTRING("fillColor"));
	outFields->push(HX_CSTRING("isCircle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getFillColor"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("setLocation"),
	HX_CSTRING("setRegionSize"),
	HX_CSTRING("setRegionDiameter"),
	HX_CSTRING("resetSize"),
	HX_CSTRING("follow"),
	HX_CSTRING("regionHeight"),
	HX_CSTRING("regionWidth"),
	HX_CSTRING("originalHeight"),
	HX_CSTRING("originalWidth"),
	HX_CSTRING("copy"),
	HX_CSTRING("fillColor"),
	HX_CSTRING("isCircle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Terrain_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Terrain_obj::__mClass,"__mClass");
};

Class Terrain_obj::__mClass;

void Terrain_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.Terrain"), hx::TCanCast< Terrain_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Terrain_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
