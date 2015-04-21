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
#ifndef INCLUDED_com_stencyl_Input
#include <com/stencyl/Input.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Region
#include <com/stencyl/models/Region.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Sprite
#include <com/stencyl/models/actor/Sprite.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Mask
#include <com/stencyl/models/collision/Mask.h>
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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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

Void Region_obj::__construct(::com::stencyl::Engine game,Float x,Float y,Array< ::Dynamic > shapes,::flash::geom::Rectangle simpleBounds)
{
HX_STACK_PUSH("Region::new","com/stencyl/models/Region.hx",43);
{
	HX_STACK_LINE(44)
	super::__construct(game,(int)0,(int)-2,x,y,game->getTopLayer(),(  ((::com::stencyl::Engine_obj::NO_PHYSICS)) ? Float(simpleBounds->width) : Float((int)1) ),(  ((::com::stencyl::Engine_obj::NO_PHYSICS)) ? Float(simpleBounds->height) : Float((int)1) ),null(),null(),null(),null(),false,false,false,false,(  ((::com::stencyl::Engine_obj::NO_PHYSICS)) ? Dynamic(null()) : Dynamic(shapes->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >()) ),(int)0,::com::stencyl::Engine_obj::NO_PHYSICS,null(),null());
	HX_STACK_LINE(51)
	this->alwaysSimulate = true;
	HX_STACK_LINE(52)
	this->isRegion = true;
	HX_STACK_LINE(53)
	this->isTerrainRegion = false;
	HX_STACK_LINE(54)
	this->solid = false;
	HX_STACK_LINE(56)
	this->set_name(HX_CSTRING("Region"));
	HX_STACK_LINE(58)
	this->simpleBounds = simpleBounds;
	HX_STACK_LINE(59)
	this->copy = shapes->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >();
	HX_STACK_LINE(61)
	this->containedActors = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(62)
	this->whenActorEntersListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(63)
	this->whenActorExitsListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(65)
	this->justAdded = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(66)
	this->justRemoved = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(68)
	if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
		HX_STACK_LINE(70)
		this->body->setSleepingAllowed(true);
		HX_STACK_LINE(71)
		this->body->setAwake(false);
		HX_STACK_LINE(72)
		this->body->setIgnoreGravity(true);
	}
	HX_STACK_LINE(75)
	Float lowerXBound = (int)0;		HX_STACK_VAR(lowerXBound,"lowerXBound");
	HX_STACK_LINE(76)
	Float upperXBound = (int)0;		HX_STACK_VAR(upperXBound,"upperXBound");
	HX_STACK_LINE(77)
	Float lowerYBound = (int)0;		HX_STACK_VAR(lowerYBound,"lowerYBound");
	HX_STACK_LINE(78)
	Float upperYBound = (int)0;		HX_STACK_VAR(upperYBound,"upperYBound");
	HX_STACK_LINE(80)
	if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
		HX_STACK_LINE(82)
		upperXBound = simpleBounds->width;
		HX_STACK_LINE(83)
		upperYBound = simpleBounds->height;
		HX_STACK_LINE(85)
		this->cacheWidth = this->originalWidth = this->regionWidth = ::Math_obj::round(::Math_obj::abs((lowerXBound - upperXBound)));
		HX_STACK_LINE(86)
		this->cacheHeight = this->originalHeight = this->regionHeight = ::Math_obj::round(::Math_obj::abs((lowerYBound - upperYBound)));
		HX_STACK_LINE(88)
		this->currOffset->x = -(((Float(this->cacheWidth) / Float((int)2))));
		HX_STACK_LINE(89)
		this->currOffset->y = -(((Float(this->cacheHeight) / Float((int)2))));
		HX_STACK_LINE(90)
		this->resetReal((x * ::com::stencyl::Engine_obj::physicsScale),(y * ::com::stencyl::Engine_obj::physicsScale));
	}
	else{
		HX_STACK_LINE(94)
		if ((::Std_obj::is(shapes->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >(),hx::ClassOf< ::box2D::collision::shapes::B2PolygonShape >()))){
			HX_STACK_LINE(97)
			this->isCircle = false;
			HX_STACK_LINE(98)
			::box2D::common::math::B2Transform trans = ::box2D::common::math::B2Transform_obj::__new(null(),null());		HX_STACK_VAR(trans,"trans");
			HX_STACK_LINE(99)
			trans->setIdentity();
			HX_STACK_LINE(101)
			::box2D::collision::B2AABB aabb = ::box2D::collision::B2AABB_obj::__new();		HX_STACK_VAR(aabb,"aabb");
			HX_STACK_LINE(103)
			(hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(shapes->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >()))->computeAABB(aabb,trans);
			HX_STACK_LINE(105)
			lowerXBound = aabb->lowerBound->x;
			HX_STACK_LINE(106)
			upperXBound = aabb->upperBound->x;
			HX_STACK_LINE(107)
			lowerYBound = aabb->lowerBound->y;
			HX_STACK_LINE(108)
			upperYBound = aabb->upperBound->y;
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = shapes->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(110)
				while(((_g1 < _g))){
					HX_STACK_LINE(110)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(112)
					::box2D::dynamics::B2FixtureDef fixture = ::box2D::dynamics::B2FixtureDef_obj::__new();		HX_STACK_VAR(fixture,"fixture");
					HX_STACK_LINE(113)
					fixture->isSensor = true;
					HX_STACK_LINE(114)
					fixture->userData = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(115)
					fixture->shape = shapes->__get(i).StaticCast< ::box2D::collision::shapes::B2Shape >();
					HX_STACK_LINE(116)
					fixture->friction = 1.0;
					HX_STACK_LINE(117)
					fixture->density = 0.1;
					HX_STACK_LINE(118)
					fixture->restitution = (int)0;
					HX_STACK_LINE(119)
					fixture->groupID = ::com::stencyl::models::GameModel_obj::INHERIT_ID;
					HX_STACK_LINE(121)
					this->body->createFixture(fixture);
					HX_STACK_LINE(123)
					(hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(shapes->__get(i).StaticCast< ::box2D::collision::shapes::B2Shape >()))->computeAABB(aabb,trans);
					HX_STACK_LINE(124)
					lowerXBound = ::Math_obj::min(lowerXBound,aabb->lowerBound->x);
					HX_STACK_LINE(125)
					upperXBound = ::Math_obj::max(upperXBound,aabb->upperBound->x);
					HX_STACK_LINE(126)
					lowerYBound = ::Math_obj::min(lowerYBound,aabb->lowerBound->y);
					HX_STACK_LINE(127)
					upperYBound = ::Math_obj::max(upperYBound,aabb->upperBound->y);
				}
			}
			HX_STACK_LINE(130)
			this->cacheWidth = this->originalWidth = this->regionWidth = ::Math_obj::round(::com::stencyl::Engine_obj::toPixelUnits(::Math_obj::abs((lowerXBound - upperXBound))));
			HX_STACK_LINE(131)
			this->cacheHeight = this->originalHeight = this->regionHeight = ::Math_obj::round(::com::stencyl::Engine_obj::toPixelUnits(::Math_obj::abs((lowerYBound - upperYBound))));
		}
		else{
			HX_STACK_LINE(134)
			if ((::Std_obj::is(shapes->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >(),hx::ClassOf< ::box2D::collision::shapes::B2CircleShape >()))){
				HX_STACK_LINE(136)
				this->isCircle = true;
				HX_STACK_LINE(138)
				this->cacheWidth = this->originalWidth = this->regionWidth = ::com::stencyl::Engine_obj::toPixelUnits(((hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(shapes->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >()))->m_radius * (int)2));
				HX_STACK_LINE(139)
				this->cacheHeight = this->originalHeight = this->regionHeight = ::com::stencyl::Engine_obj::toPixelUnits(((hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(shapes->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >()))->m_radius * (int)2));
			}
		}
	}
}
;
	return null();
}

Region_obj::~Region_obj() { }

Dynamic Region_obj::__CreateEmpty() { return  new Region_obj; }
hx::ObjectPtr< Region_obj > Region_obj::__new(::com::stencyl::Engine game,Float x,Float y,Array< ::Dynamic > shapes,::flash::geom::Rectangle simpleBounds)
{  hx::ObjectPtr< Region_obj > result = new Region_obj();
	result->__construct(game,x,y,shapes,simpleBounds);
	return result;}

Dynamic Region_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Region_obj > result = new Region_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void Region_obj::innerUpdate( Float elapsedTime,bool hudCheck){
{
		HX_STACK_PUSH("Region::innerUpdate","com/stencyl/models/Region.hx",310);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_ARG(hudCheck,"hudCheck");
		HX_STACK_LINE(311)
		this->clearCollisionList();
		HX_STACK_LINE(313)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			struct _Function_2_1{
				inline static Dynamic Block( ::com::stencyl::models::Region_obj *__this){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Region.hx",315);
					{
						HX_STACK_LINE(315)
						Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->containedActors);		HX_STACK_VAR(_e,"_e");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_e)
						Dynamic run(){
							HX_STACK_PUSH("*::_Function_3_1","com/stencyl/models/Region.hx",315);
							{
								HX_STACK_LINE(315)
								return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0(return)

						HX_STACK_LINE(315)
						return  Dynamic(new _Function_3_1(_e));
					}
					return null();
				}
			};
			HX_STACK_LINE(314)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >((_Function_2_1::Block(this))());  __it->hasNext(); ){
				int id = __it->next();
				{
					HX_STACK_LINE(317)
					::com::stencyl::models::Actor a = ::com::stencyl::Engine_obj::engine->getActor(id);		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(319)
					if ((!(this->HITBOX->collide(a->HITBOX)))){
						HX_STACK_LINE(320)
						this->removeActor(a);
					}
				}
;
			}
		}
		HX_STACK_LINE(326)
		while(((bool((this->justAdded != null())) && bool((this->justAdded->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(328)
			::com::stencyl::models::Actor a = hx::TCast< com::stencyl::models::Actor >::cast(this->justAdded->__Field(HX_CSTRING("pop"),true)());		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(329)
			{
				HX_STACK_LINE(329)
				Dynamic listeners = this->whenActorEntersListeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(329)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(329)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(329)
					try{
						HX_STACK_LINE(329)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(329)
						f(a,listeners).Cast< Void >();
						HX_STACK_LINE(329)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(329)
							(r)--;
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(329)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(329)
					(r)++;
				}
			}
		}
		HX_STACK_LINE(332)
		while(((bool((this->justRemoved != null())) && bool((this->justRemoved->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(334)
			::com::stencyl::models::Actor a = hx::TCast< com::stencyl::models::Actor >::cast(this->justRemoved->__Field(HX_CSTRING("pop"),true)());		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				Dynamic listeners = this->whenActorExitsListeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(335)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(335)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(335)
					try{
						HX_STACK_LINE(335)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(335)
						f(a,listeners).Cast< Void >();
						HX_STACK_LINE(335)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(335)
							(r)--;
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(335)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(335)
					(r)++;
				}
			}
		}
		HX_STACK_LINE(338)
		if (((bool((this->mouseOverListeners != null())) && bool((this->mouseOverListeners->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(341)
			bool mouseOver = this->isMouseOver();		HX_STACK_VAR(mouseOver,"mouseOver");
			HX_STACK_LINE(343)
			if (((bool((this->mouseState <= (int)0)) && bool(mouseOver)))){
				HX_STACK_LINE(344)
				this->mouseState = (int)1;
			}
			else{
				HX_STACK_LINE(349)
				if (((bool((this->mouseState >= (int)1)) && bool(mouseOver)))){
					HX_STACK_LINE(352)
					this->mouseState = (int)2;
					HX_STACK_LINE(354)
					if ((::com::stencyl::Input_obj::mousePressed)){
						HX_STACK_LINE(355)
						this->mouseState = (int)3;
					}
					else{
						HX_STACK_LINE(360)
						if ((::com::stencyl::Input_obj::mouseDown)){
							HX_STACK_LINE(361)
							this->mouseState = (int)4;
						}
					}
					HX_STACK_LINE(366)
					if ((::com::stencyl::Input_obj::mouseReleased)){
						HX_STACK_LINE(367)
						this->mouseState = (int)5;
					}
				}
				else{
					HX_STACK_LINE(373)
					if (((bool((this->mouseState > (int)0)) && bool(!(mouseOver))))){
						HX_STACK_LINE(374)
						this->mouseState = (int)-1;
					}
					else{
						HX_STACK_LINE(379)
						if (((bool((this->mouseState == (int)-1)) && bool(!(mouseOver))))){
							HX_STACK_LINE(380)
							this->mouseState = (int)0;
						}
					}
				}
			}
			HX_STACK_LINE(384)
			{
				HX_STACK_LINE(384)
				Dynamic listeners = this->mouseOverListeners;		HX_STACK_VAR(listeners,"listeners");
				Dynamic value = this->mouseState;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(384)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(384)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(384)
					try{
						HX_STACK_LINE(384)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(384)
						f(value,listeners).Cast< Void >();
						HX_STACK_LINE(384)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(384)
							(r)--;
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(384)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(384)
					(r)++;
				}
			}
		}
	}
return null();
}


bool Region_obj::isMouseOver( ){
	HX_STACK_PUSH("Region::isMouseOver","com/stencyl/models/Region.hx",293);
	HX_STACK_THIS(this);
	HX_STACK_LINE(294)
	Float mx = (Float(((::com::stencyl::Input_obj::mouseX - ::com::stencyl::Engine_obj::cameraX))) / Float(::com::stencyl::Engine_obj::SCALE));		HX_STACK_VAR(mx,"mx");
	HX_STACK_LINE(295)
	Float my = (Float(((::com::stencyl::Input_obj::mouseY - ::com::stencyl::Engine_obj::cameraY))) / Float(::com::stencyl::Engine_obj::SCALE));		HX_STACK_VAR(my,"my");
	HX_STACK_LINE(297)
	Float xPos = this->getX(null());		HX_STACK_VAR(xPos,"xPos");
	HX_STACK_LINE(298)
	Float yPos = this->getY(null());		HX_STACK_VAR(yPos,"yPos");
	HX_STACK_LINE(303)
	return (bool((bool((bool((mx >= xPos)) && bool((my >= yPos)))) && bool((mx < (xPos + this->regionWidth))))) && bool((my < (yPos + this->regionHeight))));
}


Float Region_obj::getHeight( ){
	HX_STACK_PUSH("Region::getHeight","com/stencyl/models/Region.hx",288);
	HX_STACK_THIS(this);
	HX_STACK_LINE(288)
	return this->regionHeight;
}


Float Region_obj::getWidth( ){
	HX_STACK_PUSH("Region::getWidth","com/stencyl/models/Region.hx",283);
	HX_STACK_THIS(this);
	HX_STACK_LINE(283)
	return this->regionWidth;
}


Void Region_obj::setLocation( Float x,Float y){
{
		HX_STACK_PUSH("Region::setLocation","com/stencyl/models/Region.hx",277);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(278)
		this->setX((x + (Float(this->regionWidth) / Float((int)2))),null(),null());
		HX_STACK_LINE(279)
		this->setY((y + (Float(this->regionHeight) / Float((int)2))),null(),null());
	}
return null();
}


Void Region_obj::setRegionSize( Float width,Float height){
{
		HX_STACK_PUSH("Region::setRegionSize","com/stencyl/models/Region.hx",228);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(229)
		Float oldWidth = this->regionWidth;		HX_STACK_VAR(oldWidth,"oldWidth");
		HX_STACK_LINE(230)
		Float oldHeight = this->regionHeight;		HX_STACK_VAR(oldHeight,"oldHeight");
		HX_STACK_LINE(232)
		width = ::com::stencyl::Engine_obj::toPhysicalUnits(width);
		HX_STACK_LINE(233)
		height = ::com::stencyl::Engine_obj::toPhysicalUnits(height);
		HX_STACK_LINE(235)
		::box2D::collision::shapes::B2Shape shape;		HX_STACK_VAR(shape,"shape");
		HX_STACK_LINE(237)
		if ((this->isCircle)){
			HX_STACK_LINE(239)
			::box2D::collision::shapes::B2CircleShape s = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(240)
			s->m_radius = (Float(width) / Float((int)2));
			HX_STACK_LINE(241)
			shape = s;
		}
		else{
			HX_STACK_LINE(246)
			::box2D::collision::shapes::B2PolygonShape s2 = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(s2,"s2");
			HX_STACK_LINE(247)
			s2->setAsBox((Float(width) / Float((int)2)),(Float(height) / Float((int)2)));
			HX_STACK_LINE(248)
			shape = s2;
		}
		HX_STACK_LINE(251)
		::box2D::dynamics::B2FixtureDef fixture = ::box2D::dynamics::B2FixtureDef_obj::__new();		HX_STACK_VAR(fixture,"fixture");
		HX_STACK_LINE(252)
		fixture->isSensor = true;
		HX_STACK_LINE(253)
		fixture->userData = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(254)
		fixture->shape = shape;
		HX_STACK_LINE(256)
		if (((bool((this->body != null())) && bool((this->body->getFixtureList() != null()))))){
			HX_STACK_LINE(258)
			while(((this->body->m_fixtureCount > (int)0))){
				HX_STACK_LINE(259)
				this->body->DestroyFixture(this->body->getFixtureList());
			}
			HX_STACK_LINE(263)
			this->body->createFixture(fixture);
			HX_STACK_LINE(265)
			this->cacheWidth = this->regionWidth = ::com::stencyl::Engine_obj::toPixelUnits(width);
			HX_STACK_LINE(266)
			this->cacheHeight = this->regionHeight = ::com::stencyl::Engine_obj::toPixelUnits(height);
		}
		HX_STACK_LINE(269)
		Float dw = (this->regionWidth - oldWidth);		HX_STACK_VAR(dw,"dw");
		HX_STACK_LINE(270)
		Float dh = (this->regionHeight - oldHeight);		HX_STACK_VAR(dh,"dh");
		HX_STACK_LINE(273)
		this->setLocation((this->getX(null()) + (Float(dw) / Float((int)2))),(this->getY(null()) + (Float(dh) / Float((int)2))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Region_obj,setRegionSize,(void))

Void Region_obj::setRegionDiameter( Float diameter){
{
		HX_STACK_PUSH("Region::setRegionDiameter","com/stencyl/models/Region.hx",223);
		HX_STACK_THIS(this);
		HX_STACK_ARG(diameter,"diameter");
		HX_STACK_LINE(223)
		this->setRegionSize(diameter,diameter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Region_obj,setRegionDiameter,(void))

Void Region_obj::resetSize( ){
{
		HX_STACK_PUSH("Region::resetSize","com/stencyl/models/Region.hx",218);
		HX_STACK_THIS(this);
		HX_STACK_LINE(218)
		this->setRegionSize(this->originalWidth,this->originalHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,resetSize,(void))

Void Region_obj::follow( ::com::stencyl::models::Actor actor){
{
		HX_STACK_PUSH("Region::follow","com/stencyl/models/Region.hx",207);
		HX_STACK_THIS(this);
		HX_STACK_ARG(actor,"actor");
		HX_STACK_LINE(208)
		Float x = (actor->realX + (Float(actor->cacheWidth) / Float((int)2)));		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(209)
		Float y = (actor->realY + (Float(actor->cacheHeight) / Float((int)2)));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(211)
		this->setX(x,null(),null());
		HX_STACK_LINE(212)
		this->setY(y,null(),null());
	}
return null();
}


Void Region_obj::removeActor( ::com::stencyl::models::Actor actor){
{
		HX_STACK_PUSH("Region::removeActor","com/stencyl/models/Region.hx",188);
		HX_STACK_THIS(this);
		HX_STACK_ARG(actor,"actor");
		HX_STACK_LINE(189)
		if (((actor == null()))){
			HX_STACK_LINE(190)
			return null();
		}
		HX_STACK_LINE(194)
		if (((actor->ID != (int)-1))){
			HX_STACK_LINE(196)
			int index = ::com::stencyl::utils::Utils_obj::indexOf(this->justRemoved,actor);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(198)
			if (((index == (int)-1))){
				HX_STACK_LINE(200)
				this->containedActors->remove(actor->ID);
				HX_STACK_LINE(201)
				this->justRemoved->__Field(HX_CSTRING("push"),true)(actor);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Region_obj,removeActor,(void))

Void Region_obj::addActor( ::com::stencyl::models::Actor actor){
{
		HX_STACK_PUSH("Region::addActor","com/stencyl/models/Region.hx",163);
		HX_STACK_THIS(this);
		HX_STACK_ARG(actor,"actor");
		HX_STACK_LINE(164)
		if (((actor == null()))){
			HX_STACK_LINE(165)
			return null();
		}
		HX_STACK_LINE(169)
		if (((bool((actor->ID != (int)-1)) && bool(!(this->containedActors->exists(actor->ID)))))){
			HX_STACK_LINE(171)
			this->containedActors->set(actor->ID,actor->ID);
			HX_STACK_LINE(173)
			int index = ::com::stencyl::utils::Utils_obj::indexOf(this->justRemoved,actor);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(175)
			if (((index == (int)-1))){
				HX_STACK_LINE(176)
				this->justAdded->__Field(HX_CSTRING("push"),true)(actor);
			}
			else{
				HX_STACK_LINE(181)
				this->justRemoved->__Field(HX_CSTRING("splice"),true)(index,(int)1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Region_obj,addActor,(void))

::haxe::ds::IntMap Region_obj::getContainedActors( ){
	HX_STACK_PUSH("Region::getContainedActors","com/stencyl/models/Region.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_LINE(158)
	return this->containedActors;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,getContainedActors,return )

bool Region_obj::containsActor( ::com::stencyl::models::Actor actor){
	HX_STACK_PUSH("Region::containsActor","com/stencyl/models/Region.hx",145);
	HX_STACK_THIS(this);
	HX_STACK_ARG(actor,"actor");
	HX_STACK_LINE(145)
	if (((actor != null()))){
		HX_STACK_LINE(147)
		return this->containedActors->exists(actor->ID);
	}
	else{
		HX_STACK_LINE(152)
		return false;
	}
	HX_STACK_LINE(145)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Region_obj,containsActor,return )


Region_obj::Region_obj()
{
}

void Region_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Region);
	HX_MARK_MEMBER_NAME(justRemoved,"justRemoved");
	HX_MARK_MEMBER_NAME(justAdded,"justAdded");
	HX_MARK_MEMBER_NAME(whenActorExitsListeners,"whenActorExitsListeners");
	HX_MARK_MEMBER_NAME(whenActorEntersListeners,"whenActorEntersListeners");
	HX_MARK_MEMBER_NAME(originalHeight,"originalHeight");
	HX_MARK_MEMBER_NAME(originalWidth,"originalWidth");
	HX_MARK_MEMBER_NAME(regionHeight,"regionHeight");
	HX_MARK_MEMBER_NAME(regionWidth,"regionWidth");
	HX_MARK_MEMBER_NAME(simpleBounds,"simpleBounds");
	HX_MARK_MEMBER_NAME(copy,"copy");
	HX_MARK_MEMBER_NAME(containedActors,"containedActors");
	HX_MARK_MEMBER_NAME(isCircle,"isCircle");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Region_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(justRemoved,"justRemoved");
	HX_VISIT_MEMBER_NAME(justAdded,"justAdded");
	HX_VISIT_MEMBER_NAME(whenActorExitsListeners,"whenActorExitsListeners");
	HX_VISIT_MEMBER_NAME(whenActorEntersListeners,"whenActorEntersListeners");
	HX_VISIT_MEMBER_NAME(originalHeight,"originalHeight");
	HX_VISIT_MEMBER_NAME(originalWidth,"originalWidth");
	HX_VISIT_MEMBER_NAME(regionHeight,"regionHeight");
	HX_VISIT_MEMBER_NAME(regionWidth,"regionWidth");
	HX_VISIT_MEMBER_NAME(simpleBounds,"simpleBounds");
	HX_VISIT_MEMBER_NAME(copy,"copy");
	HX_VISIT_MEMBER_NAME(containedActors,"containedActors");
	HX_VISIT_MEMBER_NAME(isCircle,"isCircle");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Region_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"addActor") ) { return addActor_dyn(); }
		if (HX_FIELD_EQ(inName,"isCircle") ) { return isCircle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSize") ) { return resetSize_dyn(); }
		if (HX_FIELD_EQ(inName,"justAdded") ) { return justAdded; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"innerUpdate") ) { return innerUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"isMouseOver") ) { return isMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"setLocation") ) { return setLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"removeActor") ) { return removeActor_dyn(); }
		if (HX_FIELD_EQ(inName,"justRemoved") ) { return justRemoved; }
		if (HX_FIELD_EQ(inName,"regionWidth") ) { return regionWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"regionHeight") ) { return regionHeight; }
		if (HX_FIELD_EQ(inName,"simpleBounds") ) { return simpleBounds; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setRegionSize") ) { return setRegionSize_dyn(); }
		if (HX_FIELD_EQ(inName,"containsActor") ) { return containsActor_dyn(); }
		if (HX_FIELD_EQ(inName,"originalWidth") ) { return originalWidth; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"originalHeight") ) { return originalHeight; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"containedActors") ) { return containedActors; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setRegionDiameter") ) { return setRegionDiameter_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getContainedActors") ) { return getContainedActors_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"whenActorExitsListeners") ) { return whenActorExitsListeners; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"whenActorEntersListeners") ) { return whenActorEntersListeners; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Region_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { copy=inValue.Cast< ::box2D::collision::shapes::B2Shape >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isCircle") ) { isCircle=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"justAdded") ) { justAdded=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justRemoved") ) { justRemoved=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regionWidth") ) { regionWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"regionHeight") ) { regionHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"simpleBounds") ) { simpleBounds=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalWidth") ) { originalWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"originalHeight") ) { originalHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"containedActors") ) { containedActors=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"whenActorExitsListeners") ) { whenActorExitsListeners=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"whenActorEntersListeners") ) { whenActorEntersListeners=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Region_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("justRemoved"));
	outFields->push(HX_CSTRING("justAdded"));
	outFields->push(HX_CSTRING("whenActorExitsListeners"));
	outFields->push(HX_CSTRING("whenActorEntersListeners"));
	outFields->push(HX_CSTRING("originalHeight"));
	outFields->push(HX_CSTRING("originalWidth"));
	outFields->push(HX_CSTRING("regionHeight"));
	outFields->push(HX_CSTRING("regionWidth"));
	outFields->push(HX_CSTRING("simpleBounds"));
	outFields->push(HX_CSTRING("copy"));
	outFields->push(HX_CSTRING("containedActors"));
	outFields->push(HX_CSTRING("isCircle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("innerUpdate"),
	HX_CSTRING("isMouseOver"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("setLocation"),
	HX_CSTRING("setRegionSize"),
	HX_CSTRING("setRegionDiameter"),
	HX_CSTRING("resetSize"),
	HX_CSTRING("follow"),
	HX_CSTRING("removeActor"),
	HX_CSTRING("addActor"),
	HX_CSTRING("getContainedActors"),
	HX_CSTRING("containsActor"),
	HX_CSTRING("justRemoved"),
	HX_CSTRING("justAdded"),
	HX_CSTRING("whenActorExitsListeners"),
	HX_CSTRING("whenActorEntersListeners"),
	HX_CSTRING("originalHeight"),
	HX_CSTRING("originalWidth"),
	HX_CSTRING("regionHeight"),
	HX_CSTRING("regionWidth"),
	HX_CSTRING("simpleBounds"),
	HX_CSTRING("copy"),
	HX_CSTRING("containedActors"),
	HX_CSTRING("isCircle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Region_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Region_obj::__mClass,"__mClass");
};

Class Region_obj::__mClass;

void Region_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.Region"), hx::TCanCast< Region_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Region_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
