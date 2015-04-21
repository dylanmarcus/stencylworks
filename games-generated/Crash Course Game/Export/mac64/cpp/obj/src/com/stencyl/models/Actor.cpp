#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_box2D_collision_B2AABB
#include <box2D/collision/B2AABB.h>
#endif
#ifndef INCLUDED_box2D_collision_B2WorldManifold
#include <box2D/collision/B2WorldManifold.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2CircleShape
#include <box2D/collision/shapes/B2CircleShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2MassData
#include <box2D/collision/shapes/B2MassData.h>
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
#ifndef INCLUDED_box2D_dynamics_B2ContactListener
#include <box2D/dynamics/B2ContactListener.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactManager
#include <box2D/dynamics/B2ContactManager.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2FixtureDef
#include <box2D/dynamics/B2FixtureDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2World
#include <box2D/dynamics/B2World.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2Contact
#include <box2D/dynamics/contacts/B2Contact.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactEdge
#include <box2D/dynamics/contacts/B2ContactEdge.h>
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
#ifndef INCLUDED_com_stencyl_Input
#include <com/stencyl/Input.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Behavior
#include <com/stencyl/behavior/Behavior.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_BehaviorManager
#include <com/stencyl/behavior/BehaviorManager.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_AbstractAnimation
#include <com/stencyl/graphics/AbstractAnimation.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_BitmapAnimation
#include <com/stencyl/graphics/BitmapAnimation.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_G
#include <com/stencyl/graphics/G.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_SheetAnimation
#include <com/stencyl/graphics/SheetAnimation.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_fonts_Label
#include <com/stencyl/graphics/fonts/Label.h>
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
#ifndef INCLUDED_com_stencyl_models_Terrain
#include <com/stencyl/models/Terrain.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_AngleHolder
#include <com/stencyl/models/actor/AngleHolder.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Animation
#include <com/stencyl/models/actor/Animation.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Collision
#include <com/stencyl/models/actor/Collision.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_CollisionPoint
#include <com/stencyl/models/actor/CollisionPoint.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Group
#include <com/stencyl/models/actor/Group.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Sprite
#include <com/stencyl/models/actor/Sprite.h>
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
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
#endif
#ifndef INCLUDED_flash_Memory
#include <flash/Memory.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
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
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
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
#ifndef INCLUDED_flash_geom_Transform
#include <flash/geom/Transform.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif
namespace com{
namespace stencyl{
namespace models{

Void Actor_obj::__construct(::com::stencyl::Engine engine,int ID,int groupID,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_layerID,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,::com::stencyl::models::actor::Sprite sprite,::haxe::ds::StringMap behaviorValues,::com::stencyl::models::actor::ActorType actorType,::box2D::dynamics::B2BodyDef bodyDef,hx::Null< bool >  __o_isSensor,hx::Null< bool >  __o_isStationary,hx::Null< bool >  __o_isKinematic,hx::Null< bool >  __o_canRotate,Dynamic shape,hx::Null< int >  __o_typeID,hx::Null< bool >  __o_isLightweight,hx::Null< bool >  __o_autoScale,hx::Null< bool >  __o_ignoreGravity)
{
HX_STACK_PUSH("Actor::new","com/stencyl/models/Actor.hx",90);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int layerID = __o_layerID.Default(0);
Float width = __o_width.Default(32);
Float height = __o_height.Default(32);
bool isSensor = __o_isSensor.Default(false);
bool isStationary = __o_isStationary.Default(false);
bool isKinematic = __o_isKinematic.Default(false);
bool canRotate = __o_canRotate.Default(false);
int typeID = __o_typeID.Default(0);
bool isLightweight = __o_isLightweight.Default(false);
bool autoScale = __o_autoScale.Default(true);
bool ignoreGravity = __o_ignoreGravity.Default(false);
{
	HX_STACK_LINE(192)
	this->animsBackedUp = false;
	HX_STACK_LINE(304)
	super::__construct();
	HX_STACK_LINE(317)
	this->dummy = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(318)
	this->zero = ::box2D::common::math::B2Vec2_obj::__new((int)0,(int)0);
	HX_STACK_LINE(320)
	this->_point = ::com::stencyl::utils::Utils_obj::point;
	HX_STACK_LINE(321)
	this->_moveX = this->_moveY = (int)0;
	HX_STACK_LINE(323)
	this->HITBOX = ::com::stencyl::models::collision::Mask_obj::__new();
	HX_STACK_LINE(324)
	this->set_shape(this->HITBOX);
	HX_STACK_LINE(326)
	if (((bool(::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::models::Region >())) && bool(::com::stencyl::Engine_obj::NO_PHYSICS)))){
		HX_STACK_LINE(328)
		shape = this->HITBOX = ::com::stencyl::models::collision::Hitbox_obj::__new(::Std_obj::_int(width),::Std_obj::_int(height),(int)0,(int)0,false);
		HX_STACK_LINE(329)
		this->set_shape(shape);
	}
	HX_STACK_LINE(333)
	this->set_x((int)0);
	HX_STACK_LINE(334)
	this->set_y((int)0);
	HX_STACK_LINE(335)
	this->set_rotation((int)0);
	HX_STACK_LINE(337)
	this->realX = (int)0;
	HX_STACK_LINE(338)
	this->realY = (int)0;
	HX_STACK_LINE(339)
	this->realAngle = (int)0;
	HX_STACK_LINE(340)
	this->realScaleX = (int)1;
	HX_STACK_LINE(341)
	this->realScaleY = (int)1;
	HX_STACK_LINE(343)
	this->originX = (int)0;
	HX_STACK_LINE(344)
	this->originY = (int)0;
	HX_STACK_LINE(345)
	this->collidable = true;
	HX_STACK_LINE(346)
	this->solid = !(isSensor);
	HX_STACK_LINE(347)
	this->updateMatrix = true;
	HX_STACK_LINE(349)
	if ((isLightweight)){
		HX_STACK_LINE(351)
		this->set_x((x * ::com::stencyl::Engine_obj::physicsScale));
		HX_STACK_LINE(352)
		this->set_y((y * ::com::stencyl::Engine_obj::physicsScale));
	}
	else{
		HX_STACK_LINE(357)
		this->set_x(x);
		HX_STACK_LINE(358)
		this->set_y(y);
	}
	HX_STACK_LINE(361)
	this->realX = this->colX = x;
	HX_STACK_LINE(362)
	this->realY = this->colY = y;
	HX_STACK_LINE(364)
	this->activeAngleTweens = (int)0;
	HX_STACK_LINE(365)
	this->activePositionTweens = (int)0;
	HX_STACK_LINE(369)
	this->lastScale = ::flash::geom::Point_obj::__new((int)1,(int)1);
	HX_STACK_LINE(370)
	this->lastX = (int)-1000;
	HX_STACK_LINE(371)
	this->lastY = (int)-1000;
	HX_STACK_LINE(372)
	this->lastAngle = (int)0;
	HX_STACK_LINE(374)
	this->tweenLoc = ::flash::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(375)
	this->tweenAngle = ::com::stencyl::models::actor::AngleHolder_obj::__new();
	HX_STACK_LINE(377)
	this->transformPoint = ::flash::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(378)
	this->transformMatrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(379)
	this->drawMatrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(381)
	this->currOrigin = ::flash::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(382)
	this->currOffset = ::flash::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(383)
	this->registry = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(385)
	this->isLightweight = isLightweight;
	HX_STACK_LINE(386)
	this->autoScale = autoScale;
	HX_STACK_LINE(387)
	this->xSpeed = (int)0;
	HX_STACK_LINE(388)
	this->ySpeed = (int)0;
	HX_STACK_LINE(389)
	this->rSpeed = (int)0;
	HX_STACK_LINE(391)
	this->mouseState = (int)0;
	HX_STACK_LINE(393)
	this->lastScreenState = false;
	HX_STACK_LINE(394)
	this->lastSceneState = false;
	HX_STACK_LINE(395)
	this->isOnScreenCache = false;
	HX_STACK_LINE(397)
	this->isCamera = false;
	HX_STACK_LINE(398)
	this->isRegion = false;
	HX_STACK_LINE(399)
	this->isTerrainRegion = false;
	HX_STACK_LINE(400)
	this->drawActor = true;
	HX_STACK_LINE(402)
	this->killLeaveScreen = false;
	HX_STACK_LINE(403)
	this->alwaysSimulate = false;
	HX_STACK_LINE(404)
	this->isHUD = false;
	HX_STACK_LINE(405)
	this->continuousCollision = false;
	HX_STACK_LINE(407)
	this->fixedRotation = false;
	HX_STACK_LINE(408)
	this->ignoreGravity = ignoreGravity;
	HX_STACK_LINE(409)
	this->resetOrigin = true;
	HX_STACK_LINE(413)
	this->allListeners = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(414)
	this->allListenerReferences = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(416)
	this->whenCreatedListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(417)
	this->whenUpdatedListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(418)
	this->whenDrawingListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(419)
	this->whenKilledListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(420)
	this->mouseOverListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(421)
	this->positionListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(422)
	this->collisionListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(426)
	this->recycled = false;
	HX_STACK_LINE(427)
	this->paused = false;
	HX_STACK_LINE(428)
	this->destroyed = false;
	HX_STACK_LINE(430)
	this->set_name(HX_CSTRING("Unknown"));
	HX_STACK_LINE(431)
	this->ID = ID;
	HX_STACK_LINE(432)
	this->groupID = groupID;
	HX_STACK_LINE(433)
	this->layerID = layerID;
	HX_STACK_LINE(434)
	this->typeID = typeID;
	HX_STACK_LINE(435)
	this->engine = engine;
	HX_STACK_LINE(437)
	this->groupsToCollideWith = ::com::stencyl::models::GameModel_obj::get()->groupsCollidesWith->get(groupID);
	HX_STACK_LINE(439)
	this->collisions = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(440)
	this->simpleCollisions = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(441)
	this->contacts = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(442)
	this->regionContacts = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(443)
	this->contactCount = (int)0;
	HX_STACK_LINE(444)
	this->collisionsCount = (int)0;
	HX_STACK_LINE(446)
	this->handlesCollisions = true;
	HX_STACK_LINE(450)
	this->behaviors = ::com::stencyl::behavior::BehaviorManager_obj::__new();
	HX_STACK_LINE(454)
	this->currAnimationName = HX_CSTRING("");
	HX_STACK_LINE(455)
	this->animationMap = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(456)
	this->shapeMap = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(457)
	this->originMap = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(459)
	this->sprite = sprite;
	HX_STACK_LINE(463)
	if (((sprite != null()))){
		HX_STACK_LINE(465)
		::com::stencyl::models::actor::Sprite s = hx::TCast< com::stencyl::models::actor::Sprite >::cast(::com::stencyl::Data_obj::get()->resources->get(actorType->spriteID));		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(467)
		if (((s != null()))){
			HX_STACK_LINE(469)
			this->type = hx::TCast< com::stencyl::models::actor::ActorType >::cast(::com::stencyl::Data_obj::get()->resources->get(typeID));
			HX_STACK_LINE(471)
			::String defaultAnim = HX_CSTRING("");		HX_STACK_VAR(defaultAnim,"defaultAnim");
			struct _Function_3_1{
				inline static Dynamic Block( ::com::stencyl::models::actor::Sprite &s){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",473);
					{
						HX_STACK_LINE(473)
						Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(s->animations);		HX_STACK_VAR(_e,"_e");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_e)
						Dynamic run(){
							HX_STACK_PUSH("*::_Function_4_1","com/stencyl/models/Actor.hx",473);
							{
								HX_STACK_LINE(473)
								return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0(return)

						HX_STACK_LINE(473)
						return  Dynamic(new _Function_4_1(_e));
					}
					return null();
				}
			};
			HX_STACK_LINE(473)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::actor::Animation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::actor::Animation >((_Function_3_1::Block(s))());  __it->hasNext(); ){
				::com::stencyl::models::actor::Animation a = __it->next();
				{
					HX_STACK_LINE(475)
					this->addAnim(a->animID,a->animName,a->imgData,a->framesAcross,::Math_obj::floor((Float(a->imgWidth) / Float(a->framesAcross))),::Math_obj::floor((Float(a->imgHeight) / Float(a->framesDown))),a->originX,a->originY,a->durations,a->looping,(  ((isLightweight)) ? ::haxe::ds::IntMap(a->simpleShapes) : ::haxe::ds::IntMap(a->physicsShapes) ));
					HX_STACK_LINE(490)
					if (((a->animID == s->defaultAnimation))){
						HX_STACK_LINE(491)
						defaultAnim = a->animName;
					}
				}
;
			}
		}
	}
	HX_STACK_LINE(500)
	this->addAnim((int)-1,HX_CSTRING("recyclingDefault"),null(),(int)1,(int)1,(int)1,(int)1,(int)1,Array_obj< int >::__new().Add((int)1000),false,null());
	HX_STACK_LINE(502)
	if (((bool((bodyDef != null())) && bool(!(isLightweight))))){
		HX_STACK_LINE(504)
		if ((bodyDef->bullet)){
			HX_STACK_LINE(505)
			::box2D::dynamics::B2World_obj::m_continuousPhysics = true;
		}
		HX_STACK_LINE(509)
		bodyDef->groupID = groupID;
		HX_STACK_LINE(511)
		this->initFromBody(bodyDef);
		HX_STACK_LINE(514)
		::box2D::collision::shapes::B2PolygonShape box = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(box,"box");
		HX_STACK_LINE(515)
		box->setAsBox((int)1,(int)1);
		HX_STACK_LINE(516)
		this->body->createFixture2(box,0.1);
		HX_STACK_LINE(518)
		this->md = ::box2D::collision::shapes::B2MassData_obj::__new();
		HX_STACK_LINE(519)
		this->md->mass = bodyDef->mass;
		HX_STACK_LINE(520)
		this->md->I = bodyDef->aMass;
		HX_STACK_LINE(521)
		this->md->center->x = (int)0;
		HX_STACK_LINE(522)
		this->md->center->y = (int)0;
		HX_STACK_LINE(524)
		this->body->setMassData(this->md);
		HX_STACK_LINE(525)
		this->bodyScale = ::flash::geom::Point_obj::__new((int)1,(int)1);
	}
	else{
		HX_STACK_LINE(530)
		if (((bool((shape == null())) || bool((::Type_obj::_typeof(shape) == ::ValueType_obj::TFloat))))){
			HX_STACK_LINE(531)
			shape = ::com::stencyl::models::Actor_obj::createBox(width,height);
		}
		HX_STACK_LINE(535)
		if (((bodyDef != null()))){
			HX_STACK_LINE(536)
			this->continuousCollision = bodyDef->bullet;
		}
		HX_STACK_LINE(540)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::models::Region >()))){
			HX_STACK_LINE(542)
			isSensor = true;
			HX_STACK_LINE(543)
			canRotate = false;
		}
		HX_STACK_LINE(546)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::models::Terrain >()))){
			HX_STACK_LINE(547)
			canRotate = false;
		}
		HX_STACK_LINE(551)
		if (((bool((shape != null())) && bool(::Std_obj::is(shape,hx::ClassOf< ::com::stencyl::models::collision::Mask >()))))){
			HX_STACK_LINE(553)
			this->set_shape(shape);
			HX_STACK_LINE(554)
			this->isTerrain = true;
		}
		else{
			HX_STACK_LINE(557)
			if ((!(isLightweight))){
				HX_STACK_LINE(558)
				this->initBody(groupID,isSensor,isStationary,isKinematic,canRotate,shape);
			}
		}
	}
	HX_STACK_LINE(563)
	this->switchToDefaultAnimation();
	HX_STACK_LINE(566)
	if (((sprite != null()))){
		HX_STACK_LINE(567)
		this->setLocation(::com::stencyl::Engine_obj::toPixelUnits(x),::com::stencyl::Engine_obj::toPixelUnits(y));
	}
	else{
		HX_STACK_LINE(572)
		if (((bool((shape != null())) && bool(::Std_obj::is(shape,hx::ClassOf< ::com::stencyl::models::collision::Mask >()))))){
			HX_STACK_LINE(576)
			::flash::display::Bitmap dummy = ::flash::display::Bitmap_obj::__new(::flash::display::BitmapData_obj::__new((int)1,(int)1,true,(int)0,null()),null(),null());		HX_STACK_VAR(dummy,"dummy");
			HX_STACK_LINE(577)
			dummy->set_x(width);
			HX_STACK_LINE(578)
			dummy->set_y(height);
			HX_STACK_LINE(579)
			this->addChild(dummy);
			HX_STACK_LINE(580)
			this->cacheWidth = this->set_width(width);
			HX_STACK_LINE(581)
			this->cacheHeight = this->set_height(height);
		}
		else{
			HX_STACK_LINE(584)
			if ((!(isLightweight))){
				HX_STACK_LINE(585)
				this->body->setPosition(::box2D::common::math::B2Vec2_obj::__new(x,y));
			}
		}
	}
	HX_STACK_LINE(591)
	if (((bool((behaviorValues == null())) && bool((actorType != null()))))){
		HX_STACK_LINE(592)
		behaviorValues = actorType->behaviorValues;
	}
	HX_STACK_LINE(596)
	::com::stencyl::Engine_obj::initBehaviors(this->behaviors,behaviorValues,hx::ObjectPtr<OBJ_>(this),engine,false);
}
;
	return null();
}

Actor_obj::~Actor_obj() { }

Dynamic Actor_obj::__CreateEmpty() { return  new Actor_obj; }
hx::ObjectPtr< Actor_obj > Actor_obj::__new(::com::stencyl::Engine engine,int ID,int groupID,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_layerID,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,::com::stencyl::models::actor::Sprite sprite,::haxe::ds::StringMap behaviorValues,::com::stencyl::models::actor::ActorType actorType,::box2D::dynamics::B2BodyDef bodyDef,hx::Null< bool >  __o_isSensor,hx::Null< bool >  __o_isStationary,hx::Null< bool >  __o_isKinematic,hx::Null< bool >  __o_canRotate,Dynamic shape,hx::Null< int >  __o_typeID,hx::Null< bool >  __o_isLightweight,hx::Null< bool >  __o_autoScale,hx::Null< bool >  __o_ignoreGravity)
{  hx::ObjectPtr< Actor_obj > result = new Actor_obj();
	result->__construct(engine,ID,groupID,__o_x,__o_y,__o_layerID,__o_width,__o_height,sprite,behaviorValues,actorType,bodyDef,__o_isSensor,__o_isStationary,__o_isKinematic,__o_canRotate,shape,__o_typeID,__o_isLightweight,__o_autoScale,__o_ignoreGravity);
	return result;}

Dynamic Actor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Actor_obj > result = new Actor_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14],inArgs[15],inArgs[16],inArgs[17],inArgs[18],inArgs[19],inArgs[20]);
	return result;}

Void Actor_obj::handleCollisionsSimple( ::com::stencyl::models::Actor a,bool fromX,bool fromY,Float sign){
{
		HX_STACK_PUSH("Actor::handleCollisionsSimple","com/stencyl/models/Actor.hx",4189);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(fromX,"fromX");
		HX_STACK_ARG(fromY,"fromY");
		HX_STACK_ARG(sign,"sign");
		HX_STACK_LINE(4190)
		if ((::Std_obj::is(a,hx::ClassOf< ::com::stencyl::models::Region >()))){
			HX_STACK_LINE(4192)
			::com::stencyl::models::Region region = hx::TCast< com::stencyl::models::Region >::cast(a);		HX_STACK_VAR(region,"region");
			HX_STACK_LINE(4193)
			region->addActor(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(4194)
			return null();
		}
		HX_STACK_LINE(4197)
		::com::stencyl::models::collision::CollisionInfo info = this->simpleCollisions->get((this->collisionsCount - (int)1));		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(4199)
		::com::stencyl::utils::Utils_obj::collision->thisActor = ::com::stencyl::utils::Utils_obj::collision->actorA = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(4200)
		::com::stencyl::utils::Utils_obj::collision->otherActor = ::com::stencyl::utils::Utils_obj::collision->actorB = a;
		HX_STACK_LINE(4202)
		if ((a->isLightweight)){
			HX_STACK_LINE(4203)
			a->clearCollisionList();
		}
		HX_STACK_LINE(4207)
		if ((fromX)){
			HX_STACK_LINE(4210)
			if (((a->ID == ::com::stencyl::utils::Utils_obj::INTEGER_MAX))){
				HX_STACK_LINE(4212)
				::com::stencyl::utils::Utils_obj::collision->thisFromLeft = (sign < (int)0);
				HX_STACK_LINE(4213)
				::com::stencyl::utils::Utils_obj::collision->thisFromRight = (sign > (int)0);
			}
			else{
				HX_STACK_LINE(4217)
				::com::stencyl::utils::Utils_obj::collision->thisFromLeft = (a->colX < this->colX);
				HX_STACK_LINE(4218)
				::com::stencyl::utils::Utils_obj::collision->thisFromRight = (a->colX > this->colX);
			}
			HX_STACK_LINE(4221)
			::com::stencyl::utils::Utils_obj::collision->otherFromLeft = !(::com::stencyl::utils::Utils_obj::collision->thisFromLeft);
			HX_STACK_LINE(4222)
			::com::stencyl::utils::Utils_obj::collision->otherFromRight = !(::com::stencyl::utils::Utils_obj::collision->thisFromRight);
			HX_STACK_LINE(4224)
			::com::stencyl::utils::Utils_obj::collision->thisFromTop = ::com::stencyl::utils::Utils_obj::collision->otherFromTop = false;
			HX_STACK_LINE(4225)
			::com::stencyl::utils::Utils_obj::collision->thisFromBottom = ::com::stencyl::utils::Utils_obj::collision->otherFromBottom = false;
		}
		HX_STACK_LINE(4228)
		if ((fromY)){
			HX_STACK_LINE(4231)
			if (((a->ID == ::com::stencyl::utils::Utils_obj::INTEGER_MAX))){
				HX_STACK_LINE(4233)
				::com::stencyl::utils::Utils_obj::collision->thisFromTop = (sign < (int)0);
				HX_STACK_LINE(4234)
				::com::stencyl::utils::Utils_obj::collision->thisFromBottom = (sign > (int)0);
			}
			else{
				HX_STACK_LINE(4238)
				::com::stencyl::utils::Utils_obj::collision->thisFromTop = (a->colY < this->colY);
				HX_STACK_LINE(4239)
				::com::stencyl::utils::Utils_obj::collision->thisFromBottom = (a->colY > this->colY);
			}
			HX_STACK_LINE(4242)
			::com::stencyl::utils::Utils_obj::collision->otherFromTop = !(::com::stencyl::utils::Utils_obj::collision->thisFromTop);
			HX_STACK_LINE(4243)
			::com::stencyl::utils::Utils_obj::collision->otherFromBottom = !(::com::stencyl::utils::Utils_obj::collision->thisFromBottom);
			HX_STACK_LINE(4245)
			::com::stencyl::utils::Utils_obj::collision->thisFromLeft = ::com::stencyl::utils::Utils_obj::collision->otherFromLeft = false;
			HX_STACK_LINE(4246)
			::com::stencyl::utils::Utils_obj::collision->thisFromRight = ::com::stencyl::utils::Utils_obj::collision->otherFromRight = false;
		}
		HX_STACK_LINE(4250)
		::com::stencyl::utils::Utils_obj::collision->thisCollidedWithActor = true;
		HX_STACK_LINE(4251)
		::com::stencyl::utils::Utils_obj::collision->thisCollidedWithTile = (a->ID == ::com::stencyl::utils::Utils_obj::INTEGER_MAX);
		HX_STACK_LINE(4253)
		if (((info != null()))){
			HX_STACK_LINE(4254)
			::com::stencyl::utils::Utils_obj::collision->thisCollidedWithSensor = !(info->maskB->solid);
		}
		else{
			HX_STACK_LINE(4259)
			::com::stencyl::utils::Utils_obj::collision->thisCollidedWithSensor = false;
		}
		HX_STACK_LINE(4263)
		::com::stencyl::utils::Utils_obj::collision->thisCollidedWithTerrain = false;
		HX_STACK_LINE(4265)
		::com::stencyl::utils::Utils_obj::collision->otherCollidedWithActor = true;
		HX_STACK_LINE(4266)
		::com::stencyl::utils::Utils_obj::collision->otherCollidedWithTile = (a->ID == ::com::stencyl::utils::Utils_obj::INTEGER_MAX);
		HX_STACK_LINE(4268)
		if (((info != null()))){
			HX_STACK_LINE(4269)
			::com::stencyl::utils::Utils_obj::collision->otherCollidedWithSensor = !(info->maskA->solid);
		}
		else{
			HX_STACK_LINE(4274)
			::com::stencyl::utils::Utils_obj::collision->otherCollidedWithSensor = false;
		}
		HX_STACK_LINE(4278)
		::com::stencyl::utils::Utils_obj::collision->otherCollidedWithTerrain = false;
		HX_STACK_LINE(4280)
		::com::stencyl::models::Actor_obj::lastCollided = a;
		HX_STACK_LINE(4281)
		{
			HX_STACK_LINE(4281)
			Dynamic listeners = this->collisionListeners;		HX_STACK_VAR(listeners,"listeners");
			Dynamic value = ::com::stencyl::utils::Utils_obj::collision;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(4281)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(4281)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(4281)
				try{
					HX_STACK_LINE(4281)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(4281)
					f(value,listeners).Cast< Void >();
					HX_STACK_LINE(4281)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(4281)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(4281)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(4281)
				(r)++;
			}
		}
		HX_STACK_LINE(4282)
		this->engine->handleCollision(hx::ObjectPtr<OBJ_>(this),::com::stencyl::utils::Utils_obj::collision);
		HX_STACK_LINE(4284)
		::com::stencyl::models::Actor_obj::lastCollided = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(4285)
		{
			HX_STACK_LINE(4285)
			Dynamic listeners = a->collisionListeners;		HX_STACK_VAR(listeners,"listeners");
			Dynamic value = ::com::stencyl::utils::Utils_obj::collision->switchData();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(4285)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(4285)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(4285)
				try{
					HX_STACK_LINE(4285)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(4285)
					f(value,listeners).Cast< Void >();
					HX_STACK_LINE(4285)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(4285)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(4285)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(4285)
				(r)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,handleCollisionsSimple,(void))

Void Actor_obj::moveCollideY( ::com::stencyl::models::Actor a,Float sign){
{
		HX_STACK_PUSH("Actor::moveCollideY","com/stencyl/models/Actor.hx",4184);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(sign,"sign");
		HX_STACK_LINE(4184)
		this->handleCollisionsSimple(a,false,true,sign);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,moveCollideY,(void))

Void Actor_obj::moveCollideX( ::com::stencyl::models::Actor a,Float sign){
{
		HX_STACK_PUSH("Actor::moveCollideX","com/stencyl/models/Actor.hx",4175);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(sign,"sign");
		HX_STACK_LINE(4175)
		this->handleCollisionsSimple(a,true,false,sign);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,moveCollideX,(void))

Void Actor_obj::moveActorTowards( Float x,Float y,Float amount,Dynamic solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_PUSH("Actor::moveActorTowards","com/stencyl/models/Actor.hx",4163);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(amount,"amount");
	HX_STACK_ARG(solidType,"solidType");
	HX_STACK_ARG(sweep,"sweep");
{
		HX_STACK_LINE(4164)
		this->_point->x = (x - this->realX);
		HX_STACK_LINE(4165)
		this->_point->y = (y - this->realY);
		HX_STACK_LINE(4166)
		this->_point->normalize(amount);
		HX_STACK_LINE(4167)
		this->moveActorBy(this->_point->x,this->_point->y,solidType,sweep);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Actor_obj,moveActorTowards,(void))

Void Actor_obj::moveActorTo( Float x,Float y,Dynamic solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_PUSH("Actor::moveActorTo","com/stencyl/models/Actor.hx",4150);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(solidType,"solidType");
	HX_STACK_ARG(sweep,"sweep");
{
		HX_STACK_LINE(4150)
		this->moveActorBy((x - this->realX),(y - this->realY),solidType,sweep);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,moveActorTo,(void))

Void Actor_obj::moveActorBy( Float x,Float y,Dynamic solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_PUSH("Actor::moveActorBy","com/stencyl/models/Actor.hx",4045);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(solidType,"solidType");
	HX_STACK_ARG(sweep,"sweep");
{
		HX_STACK_LINE(4046)
		if (((bool((x == (int)0)) && bool((y == (int)0))))){
			HX_STACK_LINE(4047)
			return null();
		}
		HX_STACK_LINE(4051)
		this->clearCollisionList();
		HX_STACK_LINE(4053)
		if (((solidType != null()))){
			HX_STACK_LINE(4055)
			Float sign;		HX_STACK_VAR(sign,"sign");
			Float signIncr;		HX_STACK_VAR(signIncr,"signIncr");
			::com::stencyl::models::Actor e;		HX_STACK_VAR(e,"e");
			bool checkMove;		HX_STACK_VAR(checkMove,"checkMove");
			HX_STACK_LINE(4057)
			if (((x != (int)0))){
				HX_STACK_LINE(4059)
				this->allowAdd = false;
				HX_STACK_LINE(4061)
				if (((bool(this->collidable) && bool(((bool(sweep) || bool((this->collideTypes(solidType,(this->realX + x),this->realY) != null())))))))){
					HX_STACK_LINE(4063)
					this->allowAdd = true;
					HX_STACK_LINE(4065)
					while(((x != (int)0))){
						HX_STACK_LINE(4067)
						signIncr = (  (((bool((x >= (int)1)) || bool((x <= (int)-1))))) ? Float((int)1) : Float(x) );
						HX_STACK_LINE(4068)
						sign = (  (((x > (int)0))) ? Float(signIncr) : Float(-(signIncr)) );
						HX_STACK_LINE(4069)
						checkMove = (::Std_obj::_int(this->realX) != ::Std_obj::_int((this->realX + sign)));
						HX_STACK_LINE(4072)
						if (((bool(checkMove) && bool(((e = this->collide(::com::stencyl::models::GameModel_obj::REGION_ID,(this->realX + sign),this->realY)) != null()))))){
							HX_STACK_LINE(4073)
							(hx::TCast< com::stencyl::models::Region >::cast(e))->addActor(hx::ObjectPtr<OBJ_>(this));
						}
						HX_STACK_LINE(4077)
						if (((bool(checkMove) && bool(((e = this->collideTypes(solidType,(this->realX + sign),this->realY)) != null()))))){
							HX_STACK_LINE(4079)
							this->moveCollideX(e,sign);
							HX_STACK_LINE(4081)
							if (((bool((this->simpleCollisions->get((this->collisionsCount - (int)1)) != null())) && bool(this->simpleCollisions->get((this->collisionsCount - (int)1))->__Field(HX_CSTRING("solidCollision"),true))))){
								HX_STACK_LINE(4083)
								this->xSpeed = (int)0;
								HX_STACK_LINE(4084)
								break;
							}
						}
						HX_STACK_LINE(4088)
						hx::AddEq(this->realX,sign);
						HX_STACK_LINE(4089)
						hx::SubEq(x,sign);
					}
				}
				else{
					HX_STACK_LINE(4092)
					hx::AddEq(this->realX,x);
				}
			}
			HX_STACK_LINE(4094)
			if (((y != (int)0))){
				HX_STACK_LINE(4096)
				this->allowAdd = false;
				HX_STACK_LINE(4098)
				if (((bool(this->collidable) && bool(((bool(sweep) || bool((this->collideTypes(solidType,this->realX,(this->realY + y)) != null())))))))){
					HX_STACK_LINE(4100)
					this->allowAdd = true;
					HX_STACK_LINE(4102)
					while(((y != (int)0))){
						HX_STACK_LINE(4104)
						signIncr = (  (((bool((y >= (int)1)) || bool((y <= (int)-1))))) ? Float((int)1) : Float(y) );
						HX_STACK_LINE(4105)
						sign = (  (((y > (int)0))) ? Float(signIncr) : Float(-(signIncr)) );
						HX_STACK_LINE(4106)
						checkMove = (::Std_obj::_int(this->realY) != ::Std_obj::_int((this->realY + sign)));
						HX_STACK_LINE(4109)
						if (((bool(checkMove) && bool(((e = this->collide(::com::stencyl::models::GameModel_obj::REGION_ID,this->realX,(this->realY + sign))) != null()))))){
							HX_STACK_LINE(4110)
							(hx::TCast< com::stencyl::models::Region >::cast(e))->addActor(hx::ObjectPtr<OBJ_>(this));
						}
						HX_STACK_LINE(4114)
						if (((bool(checkMove) && bool(((e = this->collideTypes(solidType,this->realX,(this->realY + sign))) != null()))))){
							HX_STACK_LINE(4116)
							this->moveCollideY(e,sign);
							HX_STACK_LINE(4118)
							if (((bool((this->simpleCollisions->get((this->collisionsCount - (int)1)) != null())) && bool(this->simpleCollisions->get((this->collisionsCount - (int)1))->__Field(HX_CSTRING("solidCollision"),true))))){
								HX_STACK_LINE(4120)
								this->ySpeed = (int)0;
								HX_STACK_LINE(4121)
								break;
							}
						}
						HX_STACK_LINE(4125)
						hx::AddEq(this->realY,sign);
						HX_STACK_LINE(4126)
						hx::SubEq(y,sign);
					}
				}
				else{
					HX_STACK_LINE(4130)
					hx::AddEq(this->realY,y);
				}
			}
		}
		else{
			HX_STACK_LINE(4135)
			hx::AddEq(this->realX,x);
			HX_STACK_LINE(4136)
			hx::AddEq(this->realY,y);
		}
		HX_STACK_LINE(4139)
		this->resetReal(this->realX,this->realY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,moveActorBy,(void))

Void Actor_obj::resetReal( Float x,Float y){
{
		HX_STACK_PUSH("Actor::resetReal","com/stencyl/models/Actor.hx",4038);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(4039)
		this->realX = x;
		HX_STACK_LINE(4039)
		this->realY = y;
		HX_STACK_LINE(4040)
		this->colX = ((this->realX - ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) - this->currOffset->x);
		HX_STACK_LINE(4041)
		this->colY = ((this->realY - ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) - this->currOffset->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,resetReal,(void))

bool Actor_obj::alreadyCollided( ::com::stencyl::models::collision::Mask maskA,::com::stencyl::models::collision::Mask maskB){
	HX_STACK_PUSH("Actor::alreadyCollided","com/stencyl/models/Actor.hx",4025);
	HX_STACK_THIS(this);
	HX_STACK_ARG(maskA,"maskA");
	HX_STACK_ARG(maskB,"maskB");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4026);
			{
				HX_STACK_LINE(4026)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->simpleCollisions);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","com/stencyl/models/Actor.hx",4026);
					{
						HX_STACK_LINE(4026)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(4026)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(4026)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::collision::CollisionInfo > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::collision::CollisionInfo >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::com::stencyl::models::collision::CollisionInfo info = __it->next();
		if (((bool((info->maskA == maskA)) && bool((info->maskB == maskB))))){
			HX_STACK_LINE(4029)
			return true;
		}
;
	}
	HX_STACK_LINE(4034)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,alreadyCollided,return )

Void Actor_obj::addCollision( ::com::stencyl::models::collision::CollisionInfo info){
{
		HX_STACK_PUSH("Actor::addCollision","com/stencyl/models/Actor.hx",4017);
		HX_STACK_THIS(this);
		HX_STACK_ARG(info,"info");
		HX_STACK_LINE(4018)
		if ((!(this->allowAdd))){
			HX_STACK_LINE(4018)
			return null();
		}
		HX_STACK_LINE(4020)
		this->simpleCollisions->set(this->collisionsCount,info);
		HX_STACK_LINE(4021)
		(this->collisionsCount)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,addCollision,(void))

Void Actor_obj::clearCollisionList( ){
{
		HX_STACK_PUSH("Actor::clearCollisionList","com/stencyl/models/Actor.hx",4004);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4005)
		if (((this->collisionsCount > (int)0))){
			HX_STACK_LINE(4006)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->simpleCollisions->keys());  __it->hasNext(); ){
				int k = __it->next();
				this->simpleCollisions->remove(k);
			}
		}
		HX_STACK_LINE(4013)
		this->collisionsCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,clearCollisionList,(void))

Void Actor_obj::collideTypesInto( Array< int > types,Float x,Float y,Array< ::Dynamic > array){
{
		HX_STACK_PUSH("Actor::collideTypesInto","com/stencyl/models/Actor.hx",3998);
		HX_STACK_THIS(this);
		HX_STACK_ARG(types,"types");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(array,"array");
		HX_STACK_LINE(3999)
		::String type;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(4000)
		{
			HX_STACK_LINE(4000)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(4000)
			while(((_g < types->length))){
				HX_STACK_LINE(4000)
				int type1 = types->__get(_g);		HX_STACK_VAR(type1,"type1");
				HX_STACK_LINE(4000)
				++(_g);
				HX_STACK_LINE(4000)
				this->collideInto(type1,x,y,array);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,collideTypesInto,(void))

Void Actor_obj::collideInto( int groupID,Float x,Float y,Array< ::Dynamic > array){
{
		HX_STACK_PUSH("Actor::collideInto","com/stencyl/models/Actor.hx",3940);
		HX_STACK_THIS(this);
		HX_STACK_ARG(groupID,"groupID");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(array,"array");
		HX_STACK_LINE(3942)
		::com::stencyl::models::actor::Group actorList = this->engine->getGroup(groupID,null());		HX_STACK_VAR(actorList,"actorList");
		HX_STACK_LINE(3944)
		this->_x = this->realX;
		HX_STACK_LINE(3944)
		this->_y = this->realY;
		HX_STACK_LINE(3945)
		this->resetReal(x,y);
		HX_STACK_LINE(3946)
		int n = array->length;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(3948)
		if (((this->_mask == null()))){
			HX_STACK_LINE(3950)
			{
				HX_STACK_LINE(3950)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = actorList->list;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(3950)
				while(((_g < _g1->length))){
					HX_STACK_LINE(3950)
					::com::stencyl::models::Actor actor = _g1->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
					HX_STACK_LINE(3950)
					++(_g);
					HX_STACK_LINE(3952)
					::com::stencyl::models::Actor e = actor;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(3954)
					if ((e->recycled)){
						HX_STACK_LINE(3955)
						continue;
					}
					HX_STACK_LINE(3959)
					if (((bool((bool((bool((bool((bool(((this->colX + this->cacheWidth) >= e->colX)) && bool(((this->colY + this->cacheHeight) >= e->colY)))) && bool((this->colX <= (e->colX + e->cacheWidth))))) && bool((this->colY <= (e->colY + e->cacheHeight))))) && bool(e->collidable))) && bool((e != hx::ObjectPtr<OBJ_>(this)))))){
						HX_STACK_LINE(3964)
						if (((bool((e->_mask == null())) || bool(e->_mask->collide(this->HITBOX))))){
							HX_STACK_LINE(3965)
							array[(n)++] = e;
						}
					}
				}
			}
			HX_STACK_LINE(3968)
			this->resetReal(this->_x,this->_y);
			HX_STACK_LINE(3969)
			return null();
		}
		HX_STACK_LINE(3972)
		{
			HX_STACK_LINE(3972)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = actorList->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(3972)
			while(((_g < _g1->length))){
				HX_STACK_LINE(3972)
				::com::stencyl::models::Actor actor = _g1->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
				HX_STACK_LINE(3972)
				++(_g);
				HX_STACK_LINE(3974)
				::com::stencyl::models::Actor e = actor;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(3976)
				if (((bool((bool((bool((bool((bool(((this->colX + this->cacheWidth) >= e->colX)) && bool(((this->colY + this->cacheHeight) >= e->colY)))) && bool((this->colX <= (e->colX + e->cacheWidth))))) && bool((this->colY <= (e->colY + e->cacheHeight))))) && bool(e->collidable))) && bool((e != hx::ObjectPtr<OBJ_>(this)))))){
					HX_STACK_LINE(3981)
					if ((this->_mask->collide((  (((e->_mask != null()))) ? ::com::stencyl::models::collision::Mask(e->_mask) : ::com::stencyl::models::collision::Mask(e->HITBOX) )))){
						HX_STACK_LINE(3982)
						array[(n)++] = e;
					}
				}
			}
		}
		HX_STACK_LINE(3985)
		this->resetReal(this->_x,this->_y);
		HX_STACK_LINE(3986)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,collideInto,(void))

::com::stencyl::models::Actor Actor_obj::collideWith( ::com::stencyl::models::Actor e,Float x,Float y){
	HX_STACK_PUSH("Actor::collideWith","com/stencyl/models/Actor.hx",3901);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(3902)
	this->_x = this->realX;
	HX_STACK_LINE(3902)
	this->_y = this->realY;
	HX_STACK_LINE(3903)
	this->resetReal(x,y);
	HX_STACK_LINE(3905)
	if (((bool((bool((bool((bool((bool(((this->colX + this->cacheWidth) >= e->colX)) && bool(((this->colY + this->cacheHeight) >= e->colY)))) && bool((this->colX <= (e->colX + e->cacheWidth))))) && bool((this->colY <= (e->colY + e->cacheHeight))))) && bool(this->collidable))) && bool(e->collidable)))){
		HX_STACK_LINE(3911)
		if (((this->_mask == null()))){
			HX_STACK_LINE(3913)
			if (((bool((e->_mask == null())) || bool(e->_mask->collide(this->HITBOX))))){
				HX_STACK_LINE(3915)
				this->resetReal(this->_x,this->_y);
				HX_STACK_LINE(3916)
				return e;
			}
			HX_STACK_LINE(3918)
			this->resetReal(this->_x,this->_y);
			HX_STACK_LINE(3919)
			return null();
		}
		HX_STACK_LINE(3921)
		if ((this->_mask->collide((  (((e->_mask != null()))) ? ::com::stencyl::models::collision::Mask(e->_mask) : ::com::stencyl::models::collision::Mask(e->HITBOX) )))){
			HX_STACK_LINE(3923)
			this->resetReal(this->_x,this->_y);
			HX_STACK_LINE(3924)
			return e;
		}
	}
	HX_STACK_LINE(3927)
	this->resetReal(this->_x,this->_y);
	HX_STACK_LINE(3928)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,collideWith,return )

::com::stencyl::models::Actor Actor_obj::collideTypes( Dynamic types,Float x,Float y){
	HX_STACK_PUSH("Actor::collideTypes","com/stencyl/models/Actor.hx",3868);
	HX_STACK_THIS(this);
	HX_STACK_ARG(types,"types");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(3869)
	if ((::Std_obj::is(types,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(3870)
		return this->collide(types,x,y);
	}
	else{
		HX_STACK_LINE(3875)
		Array< int > a = types;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(3876)
		if (((a != null()))){
			HX_STACK_LINE(3878)
			::com::stencyl::models::Actor e;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(3879)
			int type;		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(3880)
			{
				HX_STACK_LINE(3880)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3880)
				while(((_g < a->length))){
					HX_STACK_LINE(3880)
					int type1 = a->__get(_g);		HX_STACK_VAR(type1,"type1");
					HX_STACK_LINE(3880)
					++(_g);
					HX_STACK_LINE(3882)
					if (((type1 == ::com::stencyl::models::GameModel_obj::REGION_ID))){
						HX_STACK_LINE(3882)
						continue;
					}
					HX_STACK_LINE(3884)
					e = this->collide(type1,x,y);
					HX_STACK_LINE(3885)
					if (((e != null()))){
						HX_STACK_LINE(3885)
						return e;
					}
				}
			}
		}
	}
	HX_STACK_LINE(3890)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,collideTypes,return )

::com::stencyl::models::Actor Actor_obj::collide( int groupID,Float x,Float y){
	HX_STACK_PUSH("Actor::collide","com/stencyl/models/Actor.hx",3796);
	HX_STACK_THIS(this);
	HX_STACK_ARG(groupID,"groupID");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(3798)
	::com::stencyl::models::actor::Group actorList = this->engine->getGroup(groupID,null());		HX_STACK_VAR(actorList,"actorList");
	HX_STACK_LINE(3800)
	this->_x = this->realX;
	HX_STACK_LINE(3800)
	this->_y = this->realY;
	HX_STACK_LINE(3801)
	this->resetReal(x,y);
	HX_STACK_LINE(3803)
	if (((this->_mask == null()))){
		HX_STACK_LINE(3805)
		{
			HX_STACK_LINE(3805)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = actorList->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(3805)
			while(((_g < _g1->length))){
				HX_STACK_LINE(3805)
				::com::stencyl::models::Actor actor = _g1->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
				HX_STACK_LINE(3805)
				++(_g);
				HX_STACK_LINE(3807)
				::com::stencyl::models::Actor e = actor;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(3809)
				if ((e->recycled)){
					HX_STACK_LINE(3810)
					continue;
				}
				HX_STACK_LINE(3814)
				if (((bool((bool((bool((bool((bool(((this->colX + this->cacheWidth) >= e->colX)) && bool(((this->colY + this->cacheHeight) >= e->colY)))) && bool((this->colX <= (e->colX + e->cacheWidth))))) && bool((this->colY <= (e->colY + e->cacheHeight))))) && bool(e->collidable))) && bool((e != hx::ObjectPtr<OBJ_>(this)))))){
					HX_STACK_LINE(3819)
					if (((bool((e->_mask == null())) || bool(e->_mask->collide(this->HITBOX))))){
						HX_STACK_LINE(3822)
						this->resetReal(this->_x,this->_y);
						HX_STACK_LINE(3824)
						return e;
					}
				}
			}
		}
		HX_STACK_LINE(3829)
		this->resetReal(this->_x,this->_y);
		HX_STACK_LINE(3830)
		return null();
	}
	HX_STACK_LINE(3833)
	{
		HX_STACK_LINE(3833)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = actorList->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(3833)
		while(((_g < _g1->length))){
			HX_STACK_LINE(3833)
			::com::stencyl::models::Actor actor = _g1->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
			HX_STACK_LINE(3833)
			++(_g);
			HX_STACK_LINE(3835)
			::com::stencyl::models::Actor e = actor;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(3837)
			if ((e->recycled)){
				HX_STACK_LINE(3838)
				continue;
			}
			HX_STACK_LINE(3842)
			if (((bool((bool((bool((bool((bool(((this->colX + this->cacheWidth) >= e->colX)) && bool(((this->colY + this->cacheHeight) >= e->colY)))) && bool((this->colX <= (e->colX + e->cacheWidth))))) && bool((this->colY <= (e->colY + e->cacheHeight))))) && bool(e->collidable))) && bool((e != hx::ObjectPtr<OBJ_>(this)))))){
				HX_STACK_LINE(3847)
				if ((this->_mask->collide((  (((e->_mask != null()))) ? ::com::stencyl::models::collision::Mask(e->_mask) : ::com::stencyl::models::collision::Mask(e->HITBOX) )))){
					HX_STACK_LINE(3850)
					this->resetReal(this->_x,this->_y);
					HX_STACK_LINE(3852)
					return e;
				}
			}
		}
	}
	HX_STACK_LINE(3856)
	this->resetReal(this->_x,this->_y);
	HX_STACK_LINE(3857)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,collide,return )

::com::stencyl::models::collision::Mask Actor_obj::set_shape( ::com::stencyl::models::collision::Mask value){
	HX_STACK_PUSH("Actor::set_shape","com/stencyl/models/Actor.hx",3780);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(3781)
	if (((this->_mask == value))){
		HX_STACK_LINE(3781)
		return value;
	}
	HX_STACK_LINE(3782)
	if (((this->_mask != null()))){
		HX_STACK_LINE(3782)
		this->_mask->assignTo(null());
	}
	HX_STACK_LINE(3783)
	this->_mask = value;
	HX_STACK_LINE(3784)
	if (((value != null()))){
		HX_STACK_LINE(3784)
		this->_mask->assignTo(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(3785)
	return this->_mask;
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,set_shape,return )

::com::stencyl::models::collision::Mask Actor_obj::get_shape( ){
	HX_STACK_PUSH("Actor::get_shape","com/stencyl/models/Actor.hx",3778);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3778)
	return this->_mask;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,get_shape,return )

Void Actor_obj::setLocation( Float x,Float y){
{
		HX_STACK_PUSH("Actor::setLocation","com/stencyl/models/Actor.hx",3761);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(3762)
		this->realX = x;
		HX_STACK_LINE(3763)
		this->realY = y;
		HX_STACK_LINE(3765)
		this->setX(x,false,true);
		HX_STACK_LINE(3766)
		this->setY(y,false,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,setLocation,(void))

::String Actor_obj::toString( ){
	HX_STACK_PUSH("Actor::toString","com/stencyl/models/Actor.hx",3747);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3748)
	if (((this->get_name() == null()))){
		HX_STACK_LINE(3749)
		return (HX_CSTRING("Unknown Actor ") + this->ID);
	}
	HX_STACK_LINE(3753)
	return ((((HX_CSTRING("[Actor ") + this->ID) + HX_CSTRING(",")) + this->get_name()) + HX_CSTRING("]"));
}


Void Actor_obj::killSelfAfterLeavingScreen( ){
{
		HX_STACK_PUSH("Actor::killSelfAfterLeavingScreen","com/stencyl/models/Actor.hx",3742);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3742)
		this->killLeaveScreen = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,killSelfAfterLeavingScreen,(void))

::com::stencyl::models::Actor Actor_obj::getLastCollidedActor( ){
	HX_STACK_PUSH("Actor::getLastCollidedActor","com/stencyl/models/Actor.hx",3735);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3735)
	return ::com::stencyl::models::Actor_obj::lastCollided;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getLastCollidedActor,return )

bool Actor_obj::isInScene( ){
	HX_STACK_PUSH("Actor::isInScene","com/stencyl/models/Actor.hx",3726);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3726)
	return (bool((bool((bool((bool(((bool(this->isLightweight) || bool(this->body->isActive())))) && bool((this->getX(null()) >= (int)0)))) && bool((this->getY(null()) >= (int)0)))) && bool((this->getX(null()) < ::com::stencyl::Engine_obj::sceneWidth)))) && bool((this->getY(null()) < ::com::stencyl::Engine_obj::sceneHeight)));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isInScene,return )

bool Actor_obj::isOnScreen( ){
	HX_STACK_PUSH("Actor::isOnScreen","com/stencyl/models/Actor.hx",3709);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3710)
	Float cameraX = (Float(::com::stencyl::Engine_obj::cameraX) / Float(::com::stencyl::Engine_obj::SCALE));		HX_STACK_VAR(cameraX,"cameraX");
	HX_STACK_LINE(3711)
	Float cameraY = (Float(::com::stencyl::Engine_obj::cameraY) / Float(::com::stencyl::Engine_obj::SCALE));		HX_STACK_VAR(cameraY,"cameraY");
	HX_STACK_LINE(3713)
	int left = ::com::stencyl::Engine_obj::paddingLeft;		HX_STACK_VAR(left,"left");
	HX_STACK_LINE(3714)
	int top = ::com::stencyl::Engine_obj::paddingTop;		HX_STACK_VAR(top,"top");
	HX_STACK_LINE(3715)
	int right = ::com::stencyl::Engine_obj::paddingRight;		HX_STACK_VAR(right,"right");
	HX_STACK_LINE(3716)
	int bottom = ::com::stencyl::Engine_obj::paddingBottom;		HX_STACK_VAR(bottom,"bottom");
	HX_STACK_LINE(3718)
	return (bool((bool((bool((bool(((bool(this->isLightweight) || bool(this->body->isActive())))) && bool((this->getX(null()) >= (-(cameraX) - left))))) && bool((this->getY(null()) >= (-(cameraY) - top))))) && bool((this->getX(null()) < ((-(cameraX) + ::com::stencyl::Engine_obj::screenWidth) + right))))) && bool((this->getY(null()) < ((-(cameraY) + ::com::stencyl::Engine_obj::screenHeight) + bottom))));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isOnScreen,return )

bool Actor_obj::isAlive( ){
	HX_STACK_PUSH("Actor::isAlive","com/stencyl/models/Actor.hx",3703);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3703)
	return !(((bool((bool(this->dead) || bool(this->dying))) || bool(this->recycled))));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isAlive,return )

bool Actor_obj::isDying( ){
	HX_STACK_PUSH("Actor::isDying","com/stencyl/models/Actor.hx",3698);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3698)
	return this->dying;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isDying,return )

Void Actor_obj::die( ){
{
		HX_STACK_PUSH("Actor::die","com/stencyl/models/Actor.hx",3676);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3677)
		this->dying = true;
		HX_STACK_LINE(3679)
		Dynamic a = this->engine->whenTypeGroupDiesListeners->get(this->getType());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(3680)
		Dynamic b = this->engine->whenTypeGroupDiesListeners->get(this->getGroup());		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(3682)
		{
			HX_STACK_LINE(3682)
			Dynamic listeners = this->whenKilledListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(3682)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(3682)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(3682)
				try{
					HX_STACK_LINE(3682)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(3682)
					f(listeners).Cast< Void >();
					HX_STACK_LINE(3682)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(3682)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(3682)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3793,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(3682)
				(r)++;
			}
		}
		HX_STACK_LINE(3684)
		if (((a != null()))){
			HX_STACK_LINE(3686)
			Dynamic listeners = a;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(3686)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(3686)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(3686)
				try{
					HX_STACK_LINE(3686)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(3686)
					f(hx::ObjectPtr<OBJ_>(this),listeners).Cast< Void >();
					HX_STACK_LINE(3686)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(3686)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(3686)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(3686)
				(r)++;
			}
		}
		HX_STACK_LINE(3689)
		if (((b != null()))){
			HX_STACK_LINE(3691)
			Dynamic listeners = b;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(3691)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(3691)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(3691)
				try{
					HX_STACK_LINE(3691)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(3691)
					f(hx::ObjectPtr<OBJ_>(this),listeners).Cast< Void >();
					HX_STACK_LINE(3691)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(3691)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(3691)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(3691)
				(r)++;
			}
		}
		HX_STACK_LINE(3694)
		this->removeAllListeners();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,die,(void))

bool Actor_obj::alwaysSimulates( ){
	HX_STACK_PUSH("Actor::alwaysSimulates","com/stencyl/models/Actor.hx",3671);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3671)
	return this->alwaysSimulate;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,alwaysSimulates,return )

Void Actor_obj::makeSometimesSimulate( hx::Null< bool >  __o_alterBody){
bool alterBody = __o_alterBody.Default(true);
	HX_STACK_PUSH("Actor::makeSometimesSimulate","com/stencyl/models/Actor.hx",3660);
	HX_STACK_THIS(this);
	HX_STACK_ARG(alterBody,"alterBody");
{
		HX_STACK_LINE(3661)
		if (((bool(!(this->isLightweight)) && bool(alterBody)))){
			HX_STACK_LINE(3662)
			this->body->setAlwaysActive(false);
		}
		HX_STACK_LINE(3666)
		this->alwaysSimulate = false;
		HX_STACK_LINE(3667)
		this->engine->removeHUDActor(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,makeSometimesSimulate,(void))

Void Actor_obj::makeAlwaysSimulate( hx::Null< bool >  __o_alterBody){
bool alterBody = __o_alterBody.Default(true);
	HX_STACK_PUSH("Actor::makeAlwaysSimulate","com/stencyl/models/Actor.hx",3649);
	HX_STACK_THIS(this);
	HX_STACK_ARG(alterBody,"alterBody");
{
		HX_STACK_LINE(3650)
		if (((bool(!(this->isLightweight)) && bool(alterBody)))){
			HX_STACK_LINE(3651)
			this->body->setAlwaysActive(true);
		}
		HX_STACK_LINE(3655)
		this->alwaysSimulate = true;
		HX_STACK_LINE(3656)
		this->engine->addHUDActor(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,makeAlwaysSimulate,(void))

bool Actor_obj::isAnchoredToScreen( ){
	HX_STACK_PUSH("Actor::isAnchoredToScreen","com/stencyl/models/Actor.hx",3644);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3644)
	return this->isHUD;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isAnchoredToScreen,return )

Void Actor_obj::unanchorFromScreen( ){
{
		HX_STACK_PUSH("Actor::unanchorFromScreen","com/stencyl/models/Actor.hx",3629);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3630)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(3631)
			this->body->setAlwaysActive(this->alwaysSimulate);
		}
		HX_STACK_LINE(3635)
		this->isHUD = false;
		HX_STACK_LINE(3636)
		this->engine->removeHUDActor(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(3637)
		this->engine->hudLayer->removeChild(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(3638)
		this->engine->moveActorToLayer(hx::ObjectPtr<OBJ_>(this),this->layerID);
		HX_STACK_LINE(3640)
		this->updateMatrix = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,unanchorFromScreen,(void))

Void Actor_obj::anchorToScreen( ){
{
		HX_STACK_PUSH("Actor::anchorToScreen","com/stencyl/models/Actor.hx",3614);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3615)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(3616)
			this->body->setAlwaysActive(true);
		}
		HX_STACK_LINE(3620)
		this->isHUD = true;
		HX_STACK_LINE(3621)
		this->engine->removeActorFromLayer(hx::ObjectPtr<OBJ_>(this),this->layerID);
		HX_STACK_LINE(3622)
		this->engine->addHUDActor(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(3623)
		this->engine->hudLayer->addChild(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(3625)
		this->updateMatrix = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,anchorToScreen,(void))

Void Actor_obj::removeAllListeners( ){
{
		HX_STACK_PUSH("Actor::removeAllListeners","com/stencyl/models/Actor.hx",3587);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3588)
		{
			HX_STACK_LINE(3588)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->allListenerReferences->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(3588)
			while(((_g1 < _g))){
				HX_STACK_LINE(3588)
				int k = (_g1)++;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(3590)
				Dynamic listener = this->allListenerReferences->__GetItem(k);		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(3592)
				if (((listener != null()))){
					HX_STACK_LINE(3594)
					Dynamic list = hx::TCastToArray(this->allListeners->get(k));		HX_STACK_VAR(list,"list");
					HX_STACK_LINE(3596)
					if (((list != null()))){
						HX_STACK_LINE(3598)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						int _g2 = list->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(3598)
						while(((_g3 < _g2))){
							HX_STACK_LINE(3598)
							int r = (_g3)++;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(3600)
							{
								HX_STACK_LINE(3600)
								Dynamic value = list->__GetItem(r);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(3600)
								int len = listener->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(3600)
								int i = len;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(3600)
								while(((i > (int)-1))){
									HX_STACK_LINE(3600)
									if (((listener->__GetItem(i) == value))){
										HX_STACK_LINE(3600)
										listener->__Field(HX_CSTRING("slice"),true)(i,(int)1);
									}
									HX_STACK_LINE(3600)
									(i)--;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(3606)
		{
			HX_STACK_LINE(3606)
			Dynamic arr = this->allListenerReferences;		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(3606)
			arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,removeAllListeners,(void))

Void Actor_obj::registerListener( Dynamic type,Dynamic listener){
{
		HX_STACK_PUSH("Actor::registerListener","com/stencyl/models/Actor.hx",3564);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(listener,"listener");
		HX_STACK_LINE(3565)
		int ePos = ::com::stencyl::utils::Utils_obj::indexOf(this->allListenerReferences,type);		HX_STACK_VAR(ePos,"ePos");
		HX_STACK_LINE(3567)
		Dynamic listenerList = null();		HX_STACK_VAR(listenerList,"listenerList");
		HX_STACK_LINE(3569)
		if (((ePos != (int)-1))){
			HX_STACK_LINE(3570)
			listenerList = this->allListeners->get(ePos);
		}
		else{
			HX_STACK_LINE(3576)
			this->allListenerReferences->__Field(HX_CSTRING("push"),true)(type);
			HX_STACK_LINE(3577)
			ePos = (this->allListenerReferences->__Field(HX_CSTRING("length"),true) - (int)1);
			HX_STACK_LINE(3579)
			listenerList = Dynamic( Array_obj<Dynamic>::__new() );
			HX_STACK_LINE(3580)
			this->allListeners->set(ePos,listenerList);
		}
		HX_STACK_LINE(3583)
		listenerList->__Field(HX_CSTRING("push"),true)(listener);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,registerListener,(void))

Dynamic Actor_obj::hasActorValue( ::String name){
	HX_STACK_PUSH("Actor::hasActorValue","com/stencyl/models/Actor.hx",3550);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(3551)
	if (((this->registry == null()))){
		HX_STACK_LINE(3552)
		return null();
	}
	HX_STACK_LINE(3556)
	return (this->registry->get(name) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,hasActorValue,return )

Dynamic Actor_obj::getActorValue( ::String name){
	HX_STACK_PUSH("Actor::getActorValue","com/stencyl/models/Actor.hx",3537);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(3537)
	if (((this->registry == null()))){
		HX_STACK_LINE(3539)
		return null();
	}
	else{
		HX_STACK_LINE(3544)
		return this->registry->get(name);
	}
	HX_STACK_LINE(3537)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,getActorValue,return )

Void Actor_obj::setActorValue( ::String name,Dynamic value){
{
		HX_STACK_PUSH("Actor::setActorValue","com/stencyl/models/Actor.hx",3529);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(3529)
		if (((this->registry != null()))){
			HX_STACK_LINE(3532)
			Dynamic value1 = value;		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(3532)
			this->registry->set(name,value1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,setActorValue,(void))

Dynamic Actor_obj::say( ::String behaviorName,::String msg,Dynamic args){
	HX_STACK_PUSH("Actor::say","com/stencyl/models/Actor.hx",3520);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(3520)
	return this->behaviors->call2(behaviorName,msg,args);
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,say,return )

Dynamic Actor_obj::shout( ::String msg,Dynamic args){
	HX_STACK_PUSH("Actor::shout","com/stencyl/models/Actor.hx",3515);
	HX_STACK_THIS(this);
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(3515)
	return this->behaviors->call(msg,args);
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,shout,return )

Void Actor_obj::setValue( ::String behaviorName,::String attributeName,Dynamic value){
{
		HX_STACK_PUSH("Actor::setValue","com/stencyl/models/Actor.hx",3510);
		HX_STACK_THIS(this);
		HX_STACK_ARG(behaviorName,"behaviorName");
		HX_STACK_ARG(attributeName,"attributeName");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(3510)
		this->behaviors->setAttribute(behaviorName,attributeName,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,setValue,(void))

Dynamic Actor_obj::getValue( ::String behaviorName,::String attributeName){
	HX_STACK_PUSH("Actor::getValue","com/stencyl/models/Actor.hx",3505);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(attributeName,"attributeName");
	HX_STACK_LINE(3505)
	return this->behaviors->getAttribute(behaviorName,attributeName);
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,getValue,return )

Void Actor_obj::enableAllBehaviors( ){
{
		HX_STACK_PUSH("Actor::enableAllBehaviors","com/stencyl/models/Actor.hx",3490);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3490)
		if (((this->behaviors != null()))){
			HX_STACK_LINE(3493)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->behaviors->behaviors;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(3493)
			while(((_g < _g1->length))){
				HX_STACK_LINE(3493)
				::com::stencyl::behavior::Behavior b = _g1->__get(_g).StaticCast< ::com::stencyl::behavior::Behavior >();		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(3493)
				++(_g);
				HX_STACK_LINE(3495)
				b->enabled = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,enableAllBehaviors,(void))

bool Actor_obj::isBehaviorEnabled( ::String name){
	HX_STACK_PUSH("Actor::isBehaviorEnabled","com/stencyl/models/Actor.hx",3480);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(3481)
	if (((this->behaviors != null()))){
		HX_STACK_LINE(3482)
		return this->behaviors->isBehaviorEnabled(name);
	}
	HX_STACK_LINE(3486)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,isBehaviorEnabled,return )

Void Actor_obj::disableBehavior( ::String name){
{
		HX_STACK_PUSH("Actor::disableBehavior","com/stencyl/models/Actor.hx",3472);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(3472)
		if (((this->behaviors != null()))){
			HX_STACK_LINE(3474)
			this->behaviors->disableBehavior(name);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,disableBehavior,(void))

Void Actor_obj::enableBehavior( ::String name){
{
		HX_STACK_PUSH("Actor::enableBehavior","com/stencyl/models/Actor.hx",3464);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(3464)
		if (((this->behaviors != null()))){
			HX_STACK_LINE(3466)
			this->behaviors->enableBehavior(name);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,enableBehavior,(void))

bool Actor_obj::hasBehavior( ::String name){
	HX_STACK_PUSH("Actor::hasBehavior","com/stencyl/models/Actor.hx",3454);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(3455)
	if (((this->behaviors != null()))){
		HX_STACK_LINE(3456)
		return this->behaviors->hasBehavior(name);
	}
	HX_STACK_LINE(3460)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,hasBehavior,return )

Void Actor_obj::addBehavior( ::com::stencyl::behavior::Behavior b){
{
		HX_STACK_PUSH("Actor::addBehavior","com/stencyl/models/Actor.hx",3446);
		HX_STACK_THIS(this);
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(3446)
		if (((this->behaviors != null()))){
			HX_STACK_LINE(3448)
			this->behaviors->add(b);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,addBehavior,(void))

Void Actor_obj::clearFilters( ){
{
		HX_STACK_PUSH("Actor::clearFilters","com/stencyl/models/Actor.hx",3415);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3415)
		if ((this->animsBackedUp)){
			HX_STACK_LINE(3423)
			::flash::geom::Point pt = ::flash::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(pt,"pt");
			HX_STACK_LINE(3425)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->backupAnimationMap->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(3427)
					Dynamic imageData = this->backupAnimationMap->get(key);		HX_STACK_VAR(imageData,"imageData");
					HX_STACK_LINE(3428)
					Dynamic sheetValue = this->animationMap->get(key);		HX_STACK_VAR(sheetValue,"sheetValue");
					HX_STACK_LINE(3429)
					sheetValue->__Field(HX_CSTRING("tilesheet"),true)->__Field(HX_CSTRING("__bitmap"),true)->__Field(HX_CSTRING("copyPixels"),true)(imageData,imageData->__Field(HX_CSTRING("rect"),true),pt);
					HX_STACK_LINE(3430)
					sheetValue->__FieldRef(HX_CSTRING("tint")) = false;
					HX_STACK_LINE(3431)
					sheetValue->__Field(HX_CSTRING("updateBitmap"),true)();
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,clearFilters,(void))

Void Actor_obj::setFilter( Dynamic filter){
{
		HX_STACK_PUSH("Actor::setFilter","com/stencyl/models/Actor.hx",3154);
		HX_STACK_THIS(this);
		HX_STACK_ARG(filter,"filter");
		HX_STACK_LINE(3155)
		::String filterName;		HX_STACK_VAR(filterName,"filterName");
		HX_STACK_LINE(3156)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(3157)
		int srcA;		HX_STACK_VAR(srcA,"srcA");
		HX_STACK_LINE(3158)
		int srcR;		HX_STACK_VAR(srcR,"srcR");
		HX_STACK_LINE(3159)
		int srcG;		HX_STACK_VAR(srcG,"srcG");
		HX_STACK_LINE(3160)
		int srcB;		HX_STACK_VAR(srcB,"srcB");
		HX_STACK_LINE(3161)
		Float redResult;		HX_STACK_VAR(redResult,"redResult");
		HX_STACK_LINE(3162)
		Float greenResult;		HX_STACK_VAR(greenResult,"greenResult");
		HX_STACK_LINE(3163)
		Float blueResult;		HX_STACK_VAR(blueResult,"blueResult");
		HX_STACK_LINE(3166)
		if ((!(this->animsBackedUp))){
			HX_STACK_LINE(3168)
			this->backupAnimationMap = ::haxe::ds::StringMap_obj::__new();
			HX_STACK_LINE(3170)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->animationMap->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(3172)
					Dynamic anim = this->animationMap->get(key);		HX_STACK_VAR(anim,"anim");
					HX_STACK_LINE(3174)
					if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
						HX_STACK_LINE(3176)
						{
							HX_STACK_LINE(3176)
							Dynamic value = anim->__Field(HX_CSTRING("tilesheet"),true)->__Field(HX_CSTRING("__bitmap"),true)->__Field(HX_CSTRING("clone"),true)();		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(3176)
							this->backupAnimationMap->set(key,value);
						}
						HX_STACK_LINE(3178)
						int frameWidth = ::Std_obj::_int((Float(anim->__Field(HX_CSTRING("tilesheet"),true)->__Field(HX_CSTRING("__bitmap"),true)->__Field(HX_CSTRING("width"),true)) / Float(anim->__Field(HX_CSTRING("numFrames"),true))));		HX_STACK_VAR(frameWidth,"frameWidth");
						HX_STACK_LINE(3179)
						Float frameHeight = anim->__Field(HX_CSTRING("tilesheet"),true)->__Field(HX_CSTRING("__bitmap"),true)->__Field(HX_CSTRING("height"),true);		HX_STACK_VAR(frameHeight,"frameHeight");
						HX_STACK_LINE(3180)
						::flash::display::BitmapData tempData = anim->__Field(HX_CSTRING("tilesheet"),true)->__Field(HX_CSTRING("__bitmap"),true)->__Field(HX_CSTRING("clone"),true)();		HX_STACK_VAR(tempData,"tempData");
						HX_STACK_LINE(3181)
						::openfl::display::Tilesheet tempTilesheet = ::openfl::display::Tilesheet_obj::__new(tempData);		HX_STACK_VAR(tempTilesheet,"tempTilesheet");
						HX_STACK_LINE(3183)
						int i1 = (int)0;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(3184)
						while(((i1 < anim->__Field(HX_CSTRING("numFrames"),true)))){
							HX_STACK_LINE(3186)
							tempTilesheet->addTileRect(::flash::geom::Rectangle_obj::__new((frameWidth * i1),(int)0,frameWidth,frameHeight),null());
							HX_STACK_LINE(3187)
							(i1)++;
						}
						HX_STACK_LINE(3190)
						anim->__FieldRef(HX_CSTRING("tilesheet")) = tempTilesheet;
						HX_STACK_LINE(3191)
						anim->__Field(HX_CSTRING("updateBitmap"),true)();
					}
				}
;
			}
			HX_STACK_LINE(3194)
			this->animsBackedUp = true;
		}
		HX_STACK_LINE(3198)
		Dynamic defaultMatrix = filter->__GetItem((int)0);		HX_STACK_VAR(defaultMatrix,"defaultMatrix");
		HX_STACK_LINE(3200)
		filterName = defaultMatrix->__GetItem((int)0);
		HX_STACK_LINE(3202)
		if (((filterName == HX_CSTRING("NegativeFilter")))){
			struct _Function_2_1{
				inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3204);
					{
						HX_STACK_LINE(3204)
						Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_e)
						Dynamic run(){
							HX_STACK_PUSH("*::_Function_3_1","com/stencyl/models/Actor.hx",3204);
							{
								HX_STACK_LINE(3204)
								return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0(return)

						HX_STACK_LINE(3204)
						return  Dynamic(new _Function_3_1(_e));
					}
					return null();
				}
			};
			HX_STACK_LINE(3203)
			for(::cpp::FastIterator_obj< ::com::stencyl::graphics::SheetAnimation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::graphics::SheetAnimation >((_Function_2_1::Block(this))());  __it->hasNext(); ){
				::com::stencyl::graphics::SheetAnimation anim = __it->next();
				if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
					HX_STACK_LINE(3208)
					::flash::display::BitmapData imageData = anim->tilesheet->__bitmap;		HX_STACK_VAR(imageData,"imageData");
					HX_STACK_LINE(3209)
					::flash::utils::ByteArray byteArray = imageData->getPixels(imageData->get_rect());		HX_STACK_VAR(byteArray,"byteArray");
					HX_STACK_LINE(3210)
					int len = byteArray->length;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(3213)
					::flash::Memory_obj::select(byteArray);
					HX_STACK_LINE(3215)
					i = (int)0;
					HX_STACK_LINE(3216)
					while(((i < len))){
						HX_STACK_LINE(3218)
						srcA = ::flash::Memory_obj::getByte(i);
						HX_STACK_LINE(3219)
						if (((srcA == (int)0))){
							HX_STACK_LINE(3222)
							i = (i + (int)4);
							HX_STACK_LINE(3223)
							continue;
						}
						HX_STACK_LINE(3226)
						srcR = ::flash::Memory_obj::getByte((i + (int)1));
						HX_STACK_LINE(3227)
						srcG = ::flash::Memory_obj::getByte((i + (int)2));
						HX_STACK_LINE(3228)
						srcB = ::flash::Memory_obj::getByte((i + (int)3));
						HX_STACK_LINE(3230)
						::flash::Memory_obj::setByte((i + (int)1),((int)255 - srcR));
						HX_STACK_LINE(3231)
						::flash::Memory_obj::setByte((i + (int)2),((int)255 - srcG));
						HX_STACK_LINE(3232)
						::flash::Memory_obj::setByte((i + (int)3),((int)255 - srcB));
						HX_STACK_LINE(3234)
						i = (i + (int)4);
					}
					HX_STACK_LINE(3238)
					byteArray->position = (int)0;
					HX_STACK_LINE(3240)
					imageData->setPixels(imageData->get_rect(),byteArray);
				}
;
			}
		}
		else{
			HX_STACK_LINE(3245)
			if (((filterName == HX_CSTRING("TintFilter")))){
				struct _Function_3_1{
					inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3247);
						{
							HX_STACK_LINE(3247)
							Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

							HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_e)
							Dynamic run(){
								HX_STACK_PUSH("*::_Function_4_1","com/stencyl/models/Actor.hx",3247);
								{
									HX_STACK_LINE(3247)
									return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(3247)
							return  Dynamic(new _Function_4_1(_e));
						}
						return null();
					}
				};
				HX_STACK_LINE(3246)
				for(::cpp::FastIterator_obj< ::com::stencyl::graphics::SheetAnimation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::graphics::SheetAnimation >((_Function_3_1::Block(this))());  __it->hasNext(); ){
					::com::stencyl::graphics::SheetAnimation anim = __it->next();
					if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
						HX_STACK_LINE(3252)
						anim->tint = true;
						HX_STACK_LINE(3253)
						Float tintAmount = ((int)1 - defaultMatrix->__GetItem((int)4));		HX_STACK_VAR(tintAmount,"tintAmount");
						HX_STACK_LINE(3254)
						anim->redValue = ::Math_obj::min((defaultMatrix->__GetItem((int)1) + tintAmount),(int)1);
						HX_STACK_LINE(3255)
						anim->greenValue = ::Math_obj::min((defaultMatrix->__GetItem((int)2) + tintAmount),(int)1);
						HX_STACK_LINE(3256)
						anim->blueValue = ::Math_obj::min((defaultMatrix->__GetItem((int)3) + tintAmount),(int)1);
						HX_STACK_LINE(3257)
						{
							HX_STACK_LINE(3257)
							anim->data[(int)0] = (int)0;
							HX_STACK_LINE(3257)
							anim->data[(int)1] = (int)0;
							HX_STACK_LINE(3257)
							anim->data[(int)2] = anim->frameIndex;
							HX_STACK_LINE(3257)
							if ((anim->tint)){
								HX_STACK_LINE(3257)
								anim->data[(int)3] = anim->redValue;
								HX_STACK_LINE(3257)
								anim->data[(int)4] = anim->greenValue;
								HX_STACK_LINE(3257)
								anim->data[(int)5] = anim->blueValue;
								HX_STACK_LINE(3257)
								anim->get_graphics()->clear();
								HX_STACK_LINE(3257)
								anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)4);
							}
							else{
								HX_STACK_LINE(3257)
								anim->get_graphics()->clear();
								HX_STACK_LINE(3257)
								anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,null());
							}
							HX_STACK_LINE(3257)
							anim->needsUpdate = false;
						}
					}
;
				}
			}
			else{
				HX_STACK_LINE(3261)
				if (((filterName == HX_CSTRING("GrayscaleFilter")))){
					struct _Function_4_1{
						inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3263);
							{
								HX_STACK_LINE(3263)
								Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_1,Array< ::Dynamic >,_e)
								Dynamic run(){
									HX_STACK_PUSH("*::_Function_5_1","com/stencyl/models/Actor.hx",3263);
									{
										HX_STACK_LINE(3263)
										return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
									}
									return null();
								}
								HX_END_LOCAL_FUNC0(return)

								HX_STACK_LINE(3263)
								return  Dynamic(new _Function_5_1(_e));
							}
							return null();
						}
					};
					HX_STACK_LINE(3262)
					for(::cpp::FastIterator_obj< ::com::stencyl::graphics::SheetAnimation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::graphics::SheetAnimation >((_Function_4_1::Block(this))());  __it->hasNext(); ){
						::com::stencyl::graphics::SheetAnimation anim = __it->next();
						if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
							HX_STACK_LINE(3267)
							::flash::display::BitmapData imageData = anim->tilesheet->__bitmap;		HX_STACK_VAR(imageData,"imageData");
							HX_STACK_LINE(3268)
							::flash::utils::ByteArray byteArray = imageData->getPixels(imageData->get_rect());		HX_STACK_VAR(byteArray,"byteArray");
							HX_STACK_LINE(3269)
							int len = byteArray->length;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(3270)
							int greyResult;		HX_STACK_VAR(greyResult,"greyResult");
							HX_STACK_LINE(3273)
							::flash::Memory_obj::select(byteArray);
							HX_STACK_LINE(3275)
							i = (int)0;
							HX_STACK_LINE(3276)
							while(((i < len))){
								HX_STACK_LINE(3278)
								srcA = ::flash::Memory_obj::getByte(i);
								HX_STACK_LINE(3279)
								if (((srcA == (int)0))){
									HX_STACK_LINE(3282)
									i = (i + (int)4);
									HX_STACK_LINE(3283)
									continue;
								}
								HX_STACK_LINE(3286)
								srcR = ::flash::Memory_obj::getByte((i + (int)1));
								HX_STACK_LINE(3287)
								srcG = ::flash::Memory_obj::getByte((i + (int)2));
								HX_STACK_LINE(3288)
								srcB = ::flash::Memory_obj::getByte((i + (int)3));
								HX_STACK_LINE(3291)
								greyResult = ::Std_obj::_int((((srcR * 0.5) + (srcG * 0.5)) + (srcB * 0.5)));
								HX_STACK_LINE(3293)
								if (((greyResult > (int)254))){
									HX_STACK_LINE(3294)
									greyResult = (int)255;
								}
								else{
									HX_STACK_LINE(3297)
									if (((greyResult < (int)1))){
										HX_STACK_LINE(3298)
										greyResult = (int)0;
									}
								}
								HX_STACK_LINE(3302)
								::flash::Memory_obj::setByte((i + (int)1),greyResult);
								HX_STACK_LINE(3303)
								::flash::Memory_obj::setByte((i + (int)2),greyResult);
								HX_STACK_LINE(3304)
								::flash::Memory_obj::setByte((i + (int)3),greyResult);
								HX_STACK_LINE(3306)
								i = (i + (int)4);
							}
							HX_STACK_LINE(3310)
							byteArray->position = (int)0;
							HX_STACK_LINE(3312)
							imageData->setPixels(imageData->get_rect(),byteArray);
						}
;
					}
				}
				else{
					HX_STACK_LINE(3319)
					Array< Float > matrix = Array_obj< Float >::__new();		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(3320)
					matrix[(int)0] = defaultMatrix->__GetItem((int)1);
					HX_STACK_LINE(3321)
					matrix[(int)1] = defaultMatrix->__GetItem((int)2);
					HX_STACK_LINE(3322)
					matrix[(int)2] = defaultMatrix->__GetItem((int)3);
					HX_STACK_LINE(3323)
					matrix[(int)3] = defaultMatrix->__GetItem((int)5);
					HX_STACK_LINE(3324)
					matrix[(int)4] = defaultMatrix->__GetItem((int)6);
					HX_STACK_LINE(3325)
					matrix[(int)5] = defaultMatrix->__GetItem((int)7);
					HX_STACK_LINE(3326)
					matrix[(int)6] = defaultMatrix->__GetItem((int)8);
					HX_STACK_LINE(3327)
					matrix[(int)7] = defaultMatrix->__GetItem((int)10);
					HX_STACK_LINE(3328)
					matrix[(int)8] = defaultMatrix->__GetItem((int)11);
					HX_STACK_LINE(3329)
					matrix[(int)9] = defaultMatrix->__GetItem((int)12);
					HX_STACK_LINE(3330)
					matrix[(int)10] = defaultMatrix->__GetItem((int)13);
					HX_STACK_LINE(3331)
					matrix[(int)11] = defaultMatrix->__GetItem((int)15);
					struct _Function_4_1{
						inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3333);
							{
								HX_STACK_LINE(3333)
								Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_1,Array< ::Dynamic >,_e)
								Dynamic run(){
									HX_STACK_PUSH("*::_Function_5_1","com/stencyl/models/Actor.hx",3333);
									{
										HX_STACK_LINE(3333)
										return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
									}
									return null();
								}
								HX_END_LOCAL_FUNC0(return)

								HX_STACK_LINE(3333)
								return  Dynamic(new _Function_5_1(_e));
							}
							return null();
						}
					};
					HX_STACK_LINE(3333)
					for(::cpp::FastIterator_obj< ::com::stencyl::graphics::SheetAnimation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::graphics::SheetAnimation >((_Function_4_1::Block(this))());  __it->hasNext(); ){
						::com::stencyl::graphics::SheetAnimation anim = __it->next();
						if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
							HX_STACK_LINE(3337)
							::flash::display::BitmapData imageData = anim->tilesheet->__bitmap;		HX_STACK_VAR(imageData,"imageData");
							HX_STACK_LINE(3338)
							::flash::utils::ByteArray byteArray = imageData->getPixels(imageData->get_rect());		HX_STACK_VAR(byteArray,"byteArray");
							HX_STACK_LINE(3339)
							int len = byteArray->length;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(3342)
							::flash::Memory_obj::select(byteArray);
							HX_STACK_LINE(3344)
							i = (int)0;
							HX_STACK_LINE(3345)
							while(((i < len))){
								HX_STACK_LINE(3347)
								srcA = ::flash::Memory_obj::getByte(i);
								HX_STACK_LINE(3348)
								if (((srcA == (int)0))){
									HX_STACK_LINE(3351)
									i = (i + (int)4);
									HX_STACK_LINE(3352)
									continue;
								}
								HX_STACK_LINE(3355)
								srcR = ::flash::Memory_obj::getByte((i + (int)1));
								HX_STACK_LINE(3356)
								srcG = ::flash::Memory_obj::getByte((i + (int)2));
								HX_STACK_LINE(3357)
								srcB = ::flash::Memory_obj::getByte((i + (int)3));
								HX_STACK_LINE(3359)
								redResult = ((((matrix->__get((int)0) * srcR) + (matrix->__get((int)1) * srcG)) + (matrix->__get((int)2) * srcB)) + matrix->__get((int)3));
								HX_STACK_LINE(3360)
								if (((redResult > (int)254))){
									HX_STACK_LINE(3361)
									::flash::Memory_obj::setByte((i + (int)1),(int)255);
								}
								else{
									HX_STACK_LINE(3364)
									if (((redResult < (int)1))){
										HX_STACK_LINE(3365)
										::flash::Memory_obj::setByte((i + (int)1),(int)0);
									}
									else{
										HX_STACK_LINE(3369)
										::flash::Memory_obj::setByte((i + (int)1),::Std_obj::_int(redResult));
									}
								}
								HX_STACK_LINE(3373)
								greenResult = ((((matrix->__get((int)4) * srcR) + (matrix->__get((int)5) * srcG)) + (matrix->__get((int)6) * srcB)) + matrix->__get((int)7));
								HX_STACK_LINE(3374)
								if (((greenResult > (int)254))){
									HX_STACK_LINE(3375)
									::flash::Memory_obj::setByte((i + (int)2),(int)255);
								}
								else{
									HX_STACK_LINE(3378)
									if (((greenResult < (int)1))){
										HX_STACK_LINE(3379)
										::flash::Memory_obj::setByte((i + (int)2),(int)0);
									}
									else{
										HX_STACK_LINE(3383)
										::flash::Memory_obj::setByte((i + (int)2),::Std_obj::_int(greenResult));
									}
								}
								HX_STACK_LINE(3387)
								blueResult = ((((matrix->__get((int)8) * srcR) + (matrix->__get((int)9) * srcG)) + (matrix->__get((int)10) * srcB)) + matrix->__get((int)11));
								HX_STACK_LINE(3388)
								if (((blueResult > (int)254))){
									HX_STACK_LINE(3389)
									::flash::Memory_obj::setByte((i + (int)3),(int)255);
								}
								else{
									HX_STACK_LINE(3392)
									if (((blueResult < (int)1))){
										HX_STACK_LINE(3393)
										::flash::Memory_obj::setByte((i + (int)3),(int)0);
									}
									else{
										HX_STACK_LINE(3397)
										::flash::Memory_obj::setByte((i + (int)3),::Std_obj::_int(blueResult));
									}
								}
								HX_STACK_LINE(3401)
								i = (i + (int)4);
							}
							HX_STACK_LINE(3405)
							byteArray->position = (int)0;
							HX_STACK_LINE(3407)
							imageData->setPixels(imageData->get_rect(),byteArray);
						}
;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setFilter,(void))

bool Actor_obj::drawsImage( ){
	HX_STACK_PUSH("Actor::drawsImage","com/stencyl/models/Actor.hx",3128);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3128)
	return this->drawActor;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,drawsImage,return )

Void Actor_obj::disableActorDrawing( ){
{
		HX_STACK_PUSH("Actor::disableActorDrawing","com/stencyl/models/Actor.hx",3110);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3111)
		this->drawActor = false;
		HX_STACK_LINE(3113)
		if (((this->currAnimation != null()))){
			HX_STACK_LINE(3114)
			this->currAnimation->set_visible(false);
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3118);
				{
					HX_STACK_LINE(3118)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/models/Actor.hx",3118);
						{
							HX_STACK_LINE(3118)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(3118)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(3118)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			Dynamic anim = __it->next();
			if (((anim != null()))){
				HX_STACK_LINE(3121)
				anim->__FieldRef(HX_CSTRING("visible")) = false;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,disableActorDrawing,(void))

Void Actor_obj::enableActorDrawing( ){
{
		HX_STACK_PUSH("Actor::enableActorDrawing","com/stencyl/models/Actor.hx",3092);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3093)
		this->drawActor = true;
		HX_STACK_LINE(3095)
		if (((this->currAnimation != null()))){
			HX_STACK_LINE(3096)
			this->currAnimation->set_visible(true);
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3100);
				{
					HX_STACK_LINE(3100)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/models/Actor.hx",3100);
						{
							HX_STACK_LINE(3100)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(3100)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(3100)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			Dynamic anim = __it->next();
			if (((anim != null()))){
				HX_STACK_LINE(3103)
				anim->__FieldRef(HX_CSTRING("visible")) = true;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,enableActorDrawing,(void))

Void Actor_obj::drawImage( ::com::stencyl::graphics::G g){
{
		HX_STACK_PUSH("Actor::drawImage","com/stencyl/models/Actor.hx",3050);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_LINE(3050)
		if (((this->currAnimation != null()))){
			HX_STACK_LINE(3053)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(3054)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(3057)
			if ((g->drawActor)){
				HX_STACK_LINE(3059)
				x = (g->x + ::com::stencyl::Engine_obj::cameraX);
				HX_STACK_LINE(3060)
				y = (g->y + ::com::stencyl::Engine_obj::cameraY);
			}
			else{
				HX_STACK_LINE(3065)
				x = g->x;
				HX_STACK_LINE(3066)
				y = g->y;
			}
			HX_STACK_LINE(3071)
			if (((this->realAngle > (int)0))){
				HX_STACK_LINE(3073)
				this->drawMatrix->identity();
				HX_STACK_LINE(3074)
				this->transformPoint->x = ((int)0 - (Float((this->cacheWidth * ::com::stencyl::Engine_obj::SCALE)) / Float((int)2)));
				HX_STACK_LINE(3075)
				this->transformPoint->y = ((int)0 - (Float((this->cacheHeight * ::com::stencyl::Engine_obj::SCALE)) / Float((int)2)));
				HX_STACK_LINE(3077)
				this->drawMatrix->translate((-(this->transformPoint->x) * ::com::stencyl::Engine_obj::SCALE),(-(this->transformPoint->y) * ::com::stencyl::Engine_obj::SCALE));
				HX_STACK_LINE(3078)
				this->drawMatrix->scale(this->realScaleX,this->realScaleY);
				HX_STACK_LINE(3079)
				this->drawMatrix->rotate((this->realAngle * ((Float(3.14159) / Float((int)180)))));
				HX_STACK_LINE(3081)
				this->drawMatrix->translate((this->colX * ::com::stencyl::Engine_obj::SCALE),(this->colY * ::com::stencyl::Engine_obj::SCALE));
				HX_STACK_LINE(3083)
				hx::AddEq(x,(this->transformMatrix->tx - this->drawMatrix->tx));
				HX_STACK_LINE(3084)
				hx::AddEq(y,(this->transformMatrix->ty - this->drawMatrix->ty));
			}
			HX_STACK_LINE(3087)
			(hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->draw(g,x,y,(-(this->realAngle) * ((Float(3.14159) / Float((int)180)))),g->alpha);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,drawImage,(void))

Void Actor_obj::onTweenPositionComplete( ){
{
		HX_STACK_PUSH("Actor::onTweenPositionComplete","com/stencyl/models/Actor.hx",3034);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3035)
		this->updateTweenProperties();
		HX_STACK_LINE(3036)
		(this->activePositionTweens)--;
		HX_STACK_LINE(3038)
		if (((this->currOffset != null()))){
			HX_STACK_LINE(3039)
			this->resetReal(this->realX,this->realY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,onTweenPositionComplete,(void))

Void Actor_obj::onTweenAngleComplete( ){
{
		HX_STACK_PUSH("Actor::onTweenAngleComplete","com/stencyl/models/Actor.hx",3028);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3029)
		this->updateTweenProperties();
		HX_STACK_LINE(3030)
		(this->activeAngleTweens)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,onTweenAngleComplete,(void))

Void Actor_obj::moveBy( Float x,Float y,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::moveBy","com/stencyl/models/Actor.hx",3023);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(3023)
		this->moveTo((this->getX(false) + x),(this->getY(false) + y),duration,easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,moveBy,(void))

Void Actor_obj::spinBy( Float angle,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::spinBy","com/stencyl/models/Actor.hx",3018);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(3018)
		this->spinTo((this->realAngle + angle),duration,easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,spinBy,(void))

Void Actor_obj::moveTo( Float x,Float y,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::moveTo","com/stencyl/models/Actor.hx",3002);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(3003)
		this->tweenLoc->x = this->getX(false);
		HX_STACK_LINE(3004)
		this->tweenLoc->y = this->getY(false);
		HX_STACK_LINE(3006)
		if (((easing == null()))){
			HX_STACK_LINE(3007)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		HX_STACK_LINE(3011)
		(this->activePositionTweens)++;
		struct _Function_1_1{
			inline static Dynamic Block( Float &x,Float &y){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3013);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(3013)
		::motion::Actuate_obj::tween(this->tweenLoc,duration,_Function_1_1::Block(x,y),null(),null())->ease(easing)->onComplete(this->onTweenPositionComplete_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,moveTo,(void))

Void Actor_obj::spinTo( Float angle,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::spinTo","com/stencyl/models/Actor.hx",2988);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(2989)
		this->tweenAngle->angle = this->realAngle;
		HX_STACK_LINE(2991)
		if (((easing == null()))){
			HX_STACK_LINE(2992)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		HX_STACK_LINE(2996)
		(this->activeAngleTweens)++;
		struct _Function_1_1{
			inline static Dynamic Block( Float &angle){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2998);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("angle") , angle,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(2998)
		::motion::Actuate_obj::tween(this->tweenAngle,duration,_Function_1_1::Block(angle),null(),null())->ease(easing)->onComplete(this->onTweenAngleComplete_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,spinTo,(void))

Void Actor_obj::growTo( hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_duration,Dynamic easing){
Float scaleX = __o_scaleX.Default(1);
Float scaleY = __o_scaleY.Default(1);
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::growTo","com/stencyl/models/Actor.hx",2977);
	HX_STACK_THIS(this);
	HX_STACK_ARG(scaleX,"scaleX");
	HX_STACK_ARG(scaleY,"scaleY");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(2978)
		if (((easing == null()))){
			HX_STACK_LINE(2979)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &scaleY,Float &scaleX){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2983);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("realScaleX") , scaleX,false);
					__result->Add(HX_CSTRING("realScaleY") , scaleY,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(2983)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,_Function_1_1::Block(scaleY,scaleX),null(),null())->ease(easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,growTo,(void))

Void Actor_obj::fadeTo( Float value,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::fadeTo","com/stencyl/models/Actor.hx",2967);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(2968)
		if (((easing == null()))){
			HX_STACK_LINE(2969)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &value){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2973);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , value,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(2973)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,_Function_1_1::Block(value),null(),null())->ease(easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,fadeTo,(void))

Void Actor_obj::cancelTweens( ){
{
		HX_STACK_PUSH("Actor::cancelTweens","com/stencyl/models/Actor.hx",2953);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2954)
		::motion::Actuate_obj::stop(hx::ObjectPtr<OBJ_>(this),Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("alpha")).Add(HX_CSTRING("realScaleX")).Add(HX_CSTRING("realScaleY"))),false,false);
		HX_STACK_LINE(2955)
		::motion::Actuate_obj::stop(this->tweenAngle,null(),false,false);
		HX_STACK_LINE(2956)
		::motion::Actuate_obj::stop(this->tweenLoc,null(),false,false);
		HX_STACK_LINE(2958)
		this->activePositionTweens = (int)0;
		HX_STACK_LINE(2959)
		this->activeAngleTweens = (int)0;
		HX_STACK_LINE(2961)
		::motion::Actuate_obj::unloadForTarget(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(2962)
		::motion::Actuate_obj::unloadForTarget(this->tweenAngle);
		HX_STACK_LINE(2963)
		::motion::Actuate_obj::unloadForTarget(this->tweenLoc);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,cancelTweens,(void))

bool Actor_obj::isMouseReleased( ){
	HX_STACK_PUSH("Actor::isMouseReleased","com/stencyl/models/Actor.hx",2944);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2944)
	return (bool(this->isMouseOver()) && bool(::com::stencyl::Input_obj::mouseReleased));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isMouseReleased,return )

bool Actor_obj::isMousePressed( ){
	HX_STACK_PUSH("Actor::isMousePressed","com/stencyl/models/Actor.hx",2939);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2939)
	return (bool(this->isMouseOver()) && bool(::com::stencyl::Input_obj::mousePressed));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isMousePressed,return )

bool Actor_obj::isMouseDown( ){
	HX_STACK_PUSH("Actor::isMouseDown","com/stencyl/models/Actor.hx",2934);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2934)
	return (bool(this->isMouseOver()) && bool(::com::stencyl::Input_obj::mouseDown));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isMouseDown,return )

bool Actor_obj::isMouseHover( ){
	HX_STACK_PUSH("Actor::isMouseHover","com/stencyl/models/Actor.hx",2929);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2929)
	return (bool(this->isMouseOver()) && bool(::com::stencyl::Input_obj::mouseUp));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isMouseHover,return )

bool Actor_obj::isMouseOver( ){
	HX_STACK_PUSH("Actor::isMouseOver","com/stencyl/models/Actor.hx",2885);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2886)
	Float mx;		HX_STACK_VAR(mx,"mx");
	HX_STACK_LINE(2887)
	Float my;		HX_STACK_VAR(my,"my");
	HX_STACK_LINE(2889)
	if ((this->isHUD)){
		HX_STACK_LINE(2893)
		mx = (Float((((Float(::com::stencyl::Input_obj::mouseX) / Float(::com::stencyl::Engine_obj::SCALE)) - ::com::stencyl::Engine_obj::engine->root->get_x()))) / Float(::com::stencyl::Engine_obj::engine->root->get_scaleX()));
		HX_STACK_LINE(2894)
		my = (Float((((Float(::com::stencyl::Input_obj::mouseY) / Float(::com::stencyl::Engine_obj::SCALE)) - ::com::stencyl::Engine_obj::engine->root->get_y()))) / Float(::com::stencyl::Engine_obj::engine->root->get_scaleY()));
	}
	else{
		HX_STACK_LINE(2905)
		mx = ((Float((((Float(::com::stencyl::Input_obj::mouseX) / Float(::com::stencyl::Engine_obj::SCALE)) - ::com::stencyl::Engine_obj::engine->root->get_x()))) / Float(::com::stencyl::Engine_obj::engine->root->get_scaleX())) - (Float(::com::stencyl::Engine_obj::cameraX) / Float(::com::stencyl::Engine_obj::SCALE)));
		HX_STACK_LINE(2906)
		my = ((Float((((Float(::com::stencyl::Input_obj::mouseY) / Float(::com::stencyl::Engine_obj::SCALE)) - ::com::stencyl::Engine_obj::engine->root->get_y()))) / Float(::com::stencyl::Engine_obj::engine->root->get_scaleY())) - (Float(::com::stencyl::Engine_obj::cameraY) / Float(::com::stencyl::Engine_obj::SCALE)));
	}
	HX_STACK_LINE(2916)
	Float offsetX = (((this->get_scaleX() - (int)1)) * ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2))));		HX_STACK_VAR(offsetX,"offsetX");
	HX_STACK_LINE(2917)
	Float offsetY = (((this->get_scaleY() - (int)1)) * ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2))));		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(2919)
	Float xPos = (this->colX - offsetX);		HX_STACK_VAR(xPos,"xPos");
	HX_STACK_LINE(2920)
	Float yPos = (this->colY - offsetY);		HX_STACK_VAR(yPos,"yPos");
	HX_STACK_LINE(2922)
	return (bool((bool((bool((mx >= xPos)) && bool((my >= yPos)))) && bool((mx < ((xPos + this->cacheWidth) + (offsetX * (int)2)))))) && bool((my < ((yPos + this->cacheHeight) + (offsetY * (int)2)))));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isMouseOver,return )

bool Actor_obj::ignoresGravity( ){
	HX_STACK_PUSH("Actor::ignoresGravity","com/stencyl/models/Actor.hx",2871);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2872)
	if ((this->isLightweight)){
		HX_STACK_LINE(2873)
		return this->ignoreGravity;
	}
	HX_STACK_LINE(2877)
	return this->body->isIgnoringGravity();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,ignoresGravity,return )

Void Actor_obj::setIgnoreGravity( bool state){
{
		HX_STACK_PUSH("Actor::setIgnoreGravity","com/stencyl/models/Actor.hx",2861);
		HX_STACK_THIS(this);
		HX_STACK_ARG(state,"state");
		HX_STACK_LINE(2862)
		this->ignoreGravity = state;
		HX_STACK_LINE(2864)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(2865)
			this->body->setIgnoreGravity(state);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setIgnoreGravity,(void))

Void Actor_obj::disableRotation( ){
{
		HX_STACK_PUSH("Actor::disableRotation","com/stencyl/models/Actor.hx",2848);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2848)
		if ((this->isLightweight)){
			HX_STACK_LINE(2850)
			this->fixedRotation = true;
		}
		else{
			HX_STACK_LINE(2855)
			this->body->setFixedRotation(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,disableRotation,(void))

Void Actor_obj::enableRotation( ){
{
		HX_STACK_PUSH("Actor::enableRotation","com/stencyl/models/Actor.hx",2835);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2835)
		if ((this->isLightweight)){
			HX_STACK_LINE(2837)
			this->fixedRotation = false;
		}
		else{
			HX_STACK_LINE(2842)
			this->body->setFixedRotation(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,enableRotation,(void))

Void Actor_obj::setBounciness( Float value){
{
		HX_STACK_PUSH("Actor::setBounciness","com/stencyl/models/Actor.hx",2827);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(2827)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(2829)
			this->body->setBounciness(value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setBounciness,(void))

Void Actor_obj::setFriction( Float value){
{
		HX_STACK_PUSH("Actor::setFriction","com/stencyl/models/Actor.hx",2819);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(2819)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(2821)
			this->body->setFriction(value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setFriction,(void))

::box2D::dynamics::B2Body Actor_obj::getBody( ){
	HX_STACK_PUSH("Actor::getBody","com/stencyl/models/Actor.hx",2814);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2814)
	return this->body;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getBody,return )

Float Actor_obj::getPhysicsHeight( ){
	HX_STACK_PUSH("Actor::getPhysicsHeight","com/stencyl/models/Actor.hx",2805);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2805)
	return (Float(this->cacheHeight) / Float(::com::stencyl::Engine_obj::physicsScale));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getPhysicsHeight,return )

Float Actor_obj::getPhysicsWidth( ){
	HX_STACK_PUSH("Actor::getPhysicsWidth","com/stencyl/models/Actor.hx",2800);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2800)
	return (Float(this->cacheWidth) / Float(::com::stencyl::Engine_obj::physicsScale));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getPhysicsWidth,return )

Float Actor_obj::getHeight( ){
	HX_STACK_PUSH("Actor::getHeight","com/stencyl/models/Actor.hx",2795);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2795)
	return this->cacheHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getHeight,return )

Float Actor_obj::getWidth( ){
	HX_STACK_PUSH("Actor::getWidth","com/stencyl/models/Actor.hx",2790);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2790)
	return this->cacheWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getWidth,return )

Void Actor_obj::applyTorque( Float torque){
{
		HX_STACK_PUSH("Actor::applyTorque","com/stencyl/models/Actor.hx",2769);
		HX_STACK_THIS(this);
		HX_STACK_ARG(torque,"torque");
		HX_STACK_LINE(2769)
		if ((this->isLightweight)){
			HX_STACK_LINE(2771)
			if ((!(this->fixedRotation))){
				HX_STACK_LINE(2773)
				hx::SubEq(this->rSpeed,torque);
			}
		}
		else{
			HX_STACK_LINE(2780)
			this->body->applyTorque(torque);
			HX_STACK_LINE(2781)
			this->body->setAwake(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,applyTorque,(void))

Void Actor_obj::applyImpulseInDirection( Float angle,Float speed){
{
		HX_STACK_PUSH("Actor::applyImpulseInDirection","com/stencyl/models/Actor.hx",2759);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_ARG(speed,"speed");
		HX_STACK_LINE(2759)
		this->applyImpulse(::Math_obj::cos(((Float(3.14159) / Float((int)180)) * angle)),::Math_obj::sin(((Float(3.14159) / Float((int)180)) * angle)),speed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,applyImpulseInDirection,(void))

Void Actor_obj::applyImpulse( Float dirX,Float dirY,Float magnitude){
{
		HX_STACK_PUSH("Actor::applyImpulse","com/stencyl/models/Actor.hx",2725);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dirX,"dirX");
		HX_STACK_ARG(dirY,"dirY");
		HX_STACK_ARG(magnitude,"magnitude");
		HX_STACK_LINE(2726)
		if ((this->isLightweight)){
			HX_STACK_LINE(2728)
			this->dummy->x = dirX;
			HX_STACK_LINE(2729)
			this->dummy->y = dirY;
			HX_STACK_LINE(2730)
			this->dummy->normalize();
			HX_STACK_LINE(2733)
			this->accelerateX((this->dummy->x * magnitude));
			HX_STACK_LINE(2734)
			this->accelerateY((this->dummy->y * magnitude));
			HX_STACK_LINE(2737)
			return null();
		}
		HX_STACK_LINE(2740)
		if (((bool((dirX == (int)0)) && bool((dirY == (int)0))))){
			HX_STACK_LINE(2741)
			return null();
		}
		HX_STACK_LINE(2745)
		this->dummy->x = dirX;
		HX_STACK_LINE(2746)
		this->dummy->y = dirY;
		HX_STACK_LINE(2747)
		this->dummy->normalize();
		HX_STACK_LINE(2749)
		if (((magnitude > (int)0))){
			HX_STACK_LINE(2750)
			this->dummy->multiply(magnitude);
		}
		HX_STACK_LINE(2754)
		this->body->applyImpulse(this->dummy,this->body->getWorldCenter());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,applyImpulse,(void))

Void Actor_obj::pushInDirection( Float angle,Float speed){
{
		HX_STACK_PUSH("Actor::pushInDirection","com/stencyl/models/Actor.hx",2715);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_ARG(speed,"speed");
		HX_STACK_LINE(2715)
		this->push(::Math_obj::cos(((Float(3.14159) / Float((int)180)) * angle)),::Math_obj::sin(((Float(3.14159) / Float((int)180)) * angle)),speed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,pushInDirection,(void))

Void Actor_obj::push( Float dirX,Float dirY,Float magnitude){
{
		HX_STACK_PUSH("Actor::push","com/stencyl/models/Actor.hx",2684);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dirX,"dirX");
		HX_STACK_ARG(dirY,"dirY");
		HX_STACK_ARG(magnitude,"magnitude");
		HX_STACK_LINE(2685)
		if ((this->isLightweight)){
			HX_STACK_LINE(2687)
			this->dummy->x = dirX;
			HX_STACK_LINE(2688)
			this->dummy->y = dirY;
			HX_STACK_LINE(2689)
			this->dummy->normalize();
			HX_STACK_LINE(2691)
			this->accelerateX(((this->dummy->x * magnitude) * 0.01));
			HX_STACK_LINE(2692)
			this->accelerateY(((this->dummy->y * magnitude) * 0.01));
			HX_STACK_LINE(2693)
			return null();
		}
		HX_STACK_LINE(2696)
		if (((bool((dirX == (int)0)) && bool((dirY == (int)0))))){
			HX_STACK_LINE(2697)
			return null();
		}
		HX_STACK_LINE(2701)
		this->dummy->x = dirX;
		HX_STACK_LINE(2702)
		this->dummy->y = dirY;
		HX_STACK_LINE(2703)
		this->dummy->normalize();
		HX_STACK_LINE(2705)
		if (((magnitude > (int)0))){
			HX_STACK_LINE(2706)
			this->dummy->multiply(magnitude);
		}
		HX_STACK_LINE(2710)
		this->body->applyForce(this->dummy,this->body->getWorldCenter());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,push,(void))

Void Actor_obj::changeAngularVelocity( Float omega){
{
		HX_STACK_PUSH("Actor::changeAngularVelocity","com/stencyl/models/Actor.hx",2666);
		HX_STACK_THIS(this);
		HX_STACK_ARG(omega,"omega");
		HX_STACK_LINE(2666)
		if ((this->isLightweight)){
			HX_STACK_LINE(2668)
			hx::AddEq(this->rSpeed,((Float((int)180) / Float(3.14159)) * omega));
		}
		else{
			HX_STACK_LINE(2674)
			this->body->setAngularVelocity((this->body->getAngularVelocity() + omega));
			HX_STACK_LINE(2675)
			this->body->setAwake(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,changeAngularVelocity,(void))

Void Actor_obj::setAngularVelocity( Float omega){
{
		HX_STACK_PUSH("Actor::setAngularVelocity","com/stencyl/models/Actor.hx",2652);
		HX_STACK_THIS(this);
		HX_STACK_ARG(omega,"omega");
		HX_STACK_LINE(2652)
		if ((this->isLightweight)){
			HX_STACK_LINE(2654)
			this->rSpeed = ((Float((int)180) / Float(3.14159)) * omega);
		}
		else{
			HX_STACK_LINE(2660)
			this->body->setAngularVelocity(omega);
			HX_STACK_LINE(2661)
			this->body->setAwake(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setAngularVelocity,(void))

Float Actor_obj::getAngularVelocity( ){
	HX_STACK_PUSH("Actor::getAngularVelocity","com/stencyl/models/Actor.hx",2642);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2643)
	if ((this->isLightweight)){
		HX_STACK_LINE(2644)
		return ((Float(3.14159) / Float((int)180)) * this->rSpeed);
	}
	HX_STACK_LINE(2648)
	return this->body->getAngularVelocity();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAngularVelocity,return )

Void Actor_obj::rotate( Float angle,hx::Null< bool >  __o_inRadians){
bool inRadians = __o_inRadians.Default(true);
	HX_STACK_PUSH("Actor::rotate","com/stencyl/models/Actor.hx",2613);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(inRadians,"inRadians");
{
		HX_STACK_LINE(2613)
		if ((inRadians)){
			HX_STACK_LINE(2615)
			if ((this->isLightweight)){
				HX_STACK_LINE(2617)
				hx::AddEq(this->realAngle,((Float((int)180) / Float(3.14159)) * angle));
			}
			else{
				HX_STACK_LINE(2622)
				this->body->setAngle((this->body->getAngle() + angle));
			}
		}
		else{
			HX_STACK_LINE(2628)
			if ((this->isLightweight)){
				HX_STACK_LINE(2630)
				hx::AddEq(this->realAngle,angle);
			}
			else{
				HX_STACK_LINE(2635)
				this->body->setAngle((this->body->getAngle() + ((Float(3.14159) / Float((int)180)) * angle)));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,rotate,(void))

Void Actor_obj::setAngle( Float angle,hx::Null< bool >  __o_inRadians){
bool inRadians = __o_inRadians.Default(true);
	HX_STACK_PUSH("Actor::setAngle","com/stencyl/models/Actor.hx",2582);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(inRadians,"inRadians");
{
		HX_STACK_LINE(2583)
		if ((inRadians)){
			HX_STACK_LINE(2584)
			if ((this->isLightweight)){
				HX_STACK_LINE(2586)
				this->realAngle = ((Float((int)180) / Float(3.14159)) * angle);
			}
			else{
				HX_STACK_LINE(2591)
				this->body->setAngle(angle);
			}
		}
		else{
			HX_STACK_LINE(2597)
			if ((this->isLightweight)){
				HX_STACK_LINE(2599)
				this->realAngle = angle;
			}
			else{
				HX_STACK_LINE(2604)
				this->body->setAngle(((Float(3.14159) / Float((int)180)) * angle));
			}
		}
		HX_STACK_LINE(2609)
		this->updateMatrix = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,setAngle,(void))

Float Actor_obj::getAngleInDegrees( ){
	HX_STACK_PUSH("Actor::getAngleInDegrees","com/stencyl/models/Actor.hx",2572);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2573)
	if ((this->isLightweight)){
		HX_STACK_LINE(2574)
		return this->realAngle;
	}
	HX_STACK_LINE(2578)
	return ((Float((int)180) / Float(3.14159)) * this->body->getAngle());
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAngleInDegrees,return )

Float Actor_obj::getAngle( ){
	HX_STACK_PUSH("Actor::getAngle","com/stencyl/models/Actor.hx",2562);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2563)
	if ((this->isLightweight)){
		HX_STACK_LINE(2564)
		return ((Float(3.14159) / Float((int)180)) * this->realAngle);
	}
	HX_STACK_LINE(2568)
	return this->body->getAngle();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAngle,return )

Void Actor_obj::accelerate( Float angle,Float speed){
{
		HX_STACK_PUSH("Actor::accelerate","com/stencyl/models/Actor.hx",2552);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_ARG(speed,"speed");
		HX_STACK_LINE(2553)
		this->setXVelocity((this->getXVelocity() + (speed * ::Math_obj::cos(((Float(3.14159) / Float((int)180)) * angle)))));
		HX_STACK_LINE(2554)
		this->setYVelocity((this->getYVelocity() + (speed * ::Math_obj::sin(((Float(3.14159) / Float((int)180)) * angle)))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,accelerate,(void))

Void Actor_obj::accelerateY( Float dy){
{
		HX_STACK_PUSH("Actor::accelerateY","com/stencyl/models/Actor.hx",2547);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dy,"dy");
		HX_STACK_LINE(2547)
		this->setYVelocity((this->getYVelocity() + dy));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,accelerateY,(void))

Void Actor_obj::accelerateX( Float dx){
{
		HX_STACK_PUSH("Actor::accelerateX","com/stencyl/models/Actor.hx",2542);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dx,"dx");
		HX_STACK_LINE(2542)
		this->setXVelocity((this->getXVelocity() + dx));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,accelerateX,(void))

Void Actor_obj::setVelocity( Float angle,Float speed){
{
		HX_STACK_PUSH("Actor::setVelocity","com/stencyl/models/Actor.hx",2536);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_ARG(speed,"speed");
		HX_STACK_LINE(2537)
		this->setXVelocity((speed * ::Math_obj::cos(((Float(3.14159) / Float((int)180)) * angle))));
		HX_STACK_LINE(2538)
		this->setYVelocity((speed * ::Math_obj::sin(((Float(3.14159) / Float((int)180)) * angle))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,setVelocity,(void))

Void Actor_obj::setYVelocity( Float dy){
{
		HX_STACK_PUSH("Actor::setYVelocity","com/stencyl/models/Actor.hx",2522);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dy,"dy");
		HX_STACK_LINE(2523)
		if ((this->isLightweight)){
			HX_STACK_LINE(2525)
			this->ySpeed = dy;
			HX_STACK_LINE(2526)
			return null();
		}
		HX_STACK_LINE(2529)
		::box2D::common::math::B2Vec2 v = this->body->getLinearVelocity();		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(2530)
		v->y = dy;
		HX_STACK_LINE(2531)
		this->body->setLinearVelocity(v);
		HX_STACK_LINE(2532)
		this->body->setAwake(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setYVelocity,(void))

Void Actor_obj::setXVelocity( Float dx){
{
		HX_STACK_PUSH("Actor::setXVelocity","com/stencyl/models/Actor.hx",2508);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dx,"dx");
		HX_STACK_LINE(2509)
		if ((this->isLightweight)){
			HX_STACK_LINE(2511)
			this->xSpeed = dx;
			HX_STACK_LINE(2512)
			return null();
		}
		HX_STACK_LINE(2515)
		::box2D::common::math::B2Vec2 v = this->body->getLinearVelocity();		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(2516)
		v->x = dx;
		HX_STACK_LINE(2517)
		this->body->setLinearVelocity(v);
		HX_STACK_LINE(2518)
		this->body->setAwake(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setXVelocity,(void))

Float Actor_obj::getYVelocity( ){
	HX_STACK_PUSH("Actor::getYVelocity","com/stencyl/models/Actor.hx",2498);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2499)
	if ((this->isLightweight)){
		HX_STACK_LINE(2500)
		return this->ySpeed;
	}
	HX_STACK_LINE(2504)
	return this->body->getLinearVelocity()->y;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getYVelocity,return )

Float Actor_obj::getXVelocity( ){
	HX_STACK_PUSH("Actor::getXVelocity","com/stencyl/models/Actor.hx",2488);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2489)
	if ((this->isLightweight)){
		HX_STACK_LINE(2490)
		return this->xSpeed;
	}
	HX_STACK_LINE(2494)
	return this->body->getLinearVelocity()->x;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getXVelocity,return )

Void Actor_obj::setOriginPoint( int x,int y){
{
		HX_STACK_PUSH("Actor::setOriginPoint","com/stencyl/models/Actor.hx",2418);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(2419)
		::box2D::common::math::B2Vec2 resetPosition = null();		HX_STACK_VAR(resetPosition,"resetPosition");
		HX_STACK_LINE(2421)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(2422)
			resetPosition = this->body->getPosition();
		}
		else{
			HX_STACK_LINE(2427)
			resetPosition = ::box2D::common::math::B2Vec2_obj::__new(::com::stencyl::Engine_obj::toPhysicalUnits(this->realX),::com::stencyl::Engine_obj::toPhysicalUnits(this->realY));
		}
		HX_STACK_LINE(2431)
		::box2D::common::math::B2Vec2 offsetDiff = ::box2D::common::math::B2Vec2_obj::__new(this->currOffset->x,this->currOffset->y);		HX_STACK_VAR(offsetDiff,"offsetDiff");
		HX_STACK_LINE(2432)
		Float radians = this->getAngle();		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(2434)
		bool rotated = (::Std_obj::_int((radians * ((Float((int)180) / Float(3.14159))))) != (int)0);		HX_STACK_VAR(rotated,"rotated");
		HX_STACK_LINE(2436)
		Float w = this->cacheWidth;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(2437)
		Float h = this->cacheHeight;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(2439)
		int newOffX = ::Std_obj::_int((x - (Float(w) / Float((int)2))));		HX_STACK_VAR(newOffX,"newOffX");
		HX_STACK_LINE(2440)
		int newOffY = ::Std_obj::_int((y - (Float(h) / Float((int)2))));		HX_STACK_VAR(newOffY,"newOffY");
		HX_STACK_LINE(2442)
		if (((bool((bool((this->currOrigin != null())) && bool(((bool((::Std_obj::_int(this->currOffset->x) != newOffX)) || bool((::Std_obj::_int(this->currOffset->y) != newOffY))))))) && bool(rotated)))){
			HX_STACK_LINE(2444)
			Float oldAng = (radians + ::Math_obj::atan2(-(this->currOffset->y),-(this->currOffset->x)));		HX_STACK_VAR(oldAng,"oldAng");
			HX_STACK_LINE(2445)
			Float newAng = (radians + ::Math_obj::atan2(-(newOffY),-(newOffX)));		HX_STACK_VAR(newAng,"newAng");
			HX_STACK_LINE(2446)
			Float oldDist = ::Math_obj::sqrt((::Math_obj::pow(this->currOffset->x,(int)2) + ::Math_obj::pow(this->currOffset->y,(int)2)));		HX_STACK_VAR(oldDist,"oldDist");
			HX_STACK_LINE(2447)
			Float newDist = ::Math_obj::sqrt((::Math_obj::pow(newOffX,(int)2) + ::Math_obj::pow(newOffY,(int)2)));		HX_STACK_VAR(newDist,"newDist");
			HX_STACK_LINE(2449)
			int oldFixCenterX = ::Math_obj::round((this->currOrigin->x + (::Math_obj::cos(oldAng) * oldDist)));		HX_STACK_VAR(oldFixCenterX,"oldFixCenterX");
			HX_STACK_LINE(2450)
			int oldFixCenterY = ::Math_obj::round((this->currOrigin->y + (::Math_obj::sin(oldAng) * oldDist)));		HX_STACK_VAR(oldFixCenterY,"oldFixCenterY");
			HX_STACK_LINE(2451)
			int newFixCenterX = ::Math_obj::round((x + (::Math_obj::cos(newAng) * newDist)));		HX_STACK_VAR(newFixCenterX,"newFixCenterX");
			HX_STACK_LINE(2452)
			int newFixCenterY = ::Math_obj::round((y + (::Math_obj::sin(newAng) * newDist)));		HX_STACK_VAR(newFixCenterY,"newFixCenterY");
			HX_STACK_LINE(2454)
			hx::AddEq(resetPosition->x,::com::stencyl::Engine_obj::toPhysicalUnits((oldFixCenterX - newFixCenterX)));
			HX_STACK_LINE(2455)
			hx::AddEq(resetPosition->y,::com::stencyl::Engine_obj::toPhysicalUnits((oldFixCenterY - newFixCenterY)));
		}
		HX_STACK_LINE(2458)
		this->currOrigin->x = x;
		HX_STACK_LINE(2459)
		this->currOrigin->y = y;
		HX_STACK_LINE(2460)
		this->originX = this->currOffset->x = newOffX;
		HX_STACK_LINE(2461)
		this->originY = this->currOffset->y = newOffY;
		HX_STACK_LINE(2463)
		offsetDiff->x = (this->currOffset->x - offsetDiff->x);
		HX_STACK_LINE(2464)
		offsetDiff->y = (this->currOffset->y - offsetDiff->y);
		HX_STACK_LINE(2466)
		hx::AddEq(resetPosition->x,::com::stencyl::Engine_obj::toPhysicalUnits(offsetDiff->x));
		HX_STACK_LINE(2467)
		hx::AddEq(resetPosition->y,::com::stencyl::Engine_obj::toPhysicalUnits(offsetDiff->y));
		HX_STACK_LINE(2469)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(2470)
			this->body->setPosition(resetPosition);
		}
		else{
			HX_STACK_LINE(2476)
			this->realX = ::com::stencyl::Engine_obj::toPixelUnits(resetPosition->x);
			HX_STACK_LINE(2477)
			this->realY = ::com::stencyl::Engine_obj::toPixelUnits(resetPosition->y);
		}
		HX_STACK_LINE(2480)
		this->resetOrigin = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,setOriginPoint,(void))

Void Actor_obj::followWithOffset( ::com::stencyl::models::Actor a,int ox,int oy){
{
		HX_STACK_PUSH("Actor::followWithOffset","com/stencyl/models/Actor.hx",2402);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(ox,"ox");
		HX_STACK_ARG(oy,"oy");
		HX_STACK_LINE(2403)
		if ((this->isLightweight)){
			HX_STACK_LINE(2405)
			{
				HX_STACK_LINE(2405)
				bool sweep = false;		HX_STACK_VAR(sweep,"sweep");
				HX_STACK_LINE(2405)
				this->moveActorBy(((a->getXCenter() + ox) - this->realX),((a->getYCenter() + oy) - this->realY),null(),sweep);
			}
			HX_STACK_LINE(2406)
			return null();
		}
		HX_STACK_LINE(2409)
		::box2D::common::math::B2Vec2 pt = a->body->getWorldCenter();		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(2411)
		hx::AddEq(pt->x,::com::stencyl::Engine_obj::toPhysicalUnits(ox));
		HX_STACK_LINE(2412)
		hx::AddEq(pt->y,::com::stencyl::Engine_obj::toPhysicalUnits(oy));
		HX_STACK_LINE(2414)
		this->body->setPosition(pt);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,followWithOffset,(void))

Void Actor_obj::follow( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Actor::follow","com/stencyl/models/Actor.hx",2386);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(2387)
		if (((a == null()))){
			HX_STACK_LINE(2388)
			return null();
		}
		HX_STACK_LINE(2392)
		if ((this->isLightweight)){
			HX_STACK_LINE(2394)
			{
				HX_STACK_LINE(2394)
				bool sweep = false;		HX_STACK_VAR(sweep,"sweep");
				HX_STACK_LINE(2394)
				this->moveActorBy((a->getXCenter() - this->realX),(a->getYCenter() - this->realY),null(),sweep);
			}
			HX_STACK_LINE(2395)
			return null();
		}
		HX_STACK_LINE(2398)
		this->body->setPosition(a->body->getWorldCenter());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,follow,(void))

Void Actor_obj::setY( Float y,hx::Null< bool >  __o_resetSpeed,hx::Null< bool >  __o_noCollision){
bool resetSpeed = __o_resetSpeed.Default(false);
bool noCollision = __o_noCollision.Default(false);
	HX_STACK_PUSH("Actor::setY","com/stencyl/models/Actor.hx",2354);
	HX_STACK_THIS(this);
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(resetSpeed,"resetSpeed");
	HX_STACK_ARG(noCollision,"noCollision");
{
		HX_STACK_LINE(2355)
		if ((this->isLightweight)){
			HX_STACK_LINE(2357)
			bool sweep = false;		HX_STACK_VAR(sweep,"sweep");
			HX_STACK_LINE(2357)
			this->moveActorBy((this->realX - this->realX),(((y + ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) + this->currOffset->y) - this->realY),(  (((bool(!(noCollision)) && bool(this->continuousCollision)))) ? Dynamic(this->groupsToCollideWith) : Dynamic(null()) ),sweep);
		}
		else{
			HX_STACK_LINE(2362)
			if (((bool(this->isRegion) || bool(this->isTerrainRegion)))){
				HX_STACK_LINE(2363)
				this->dummy->y = ::com::stencyl::Engine_obj::toPhysicalUnits(y);
			}
			else{
				HX_STACK_LINE(2368)
				this->dummy->y = ::com::stencyl::Engine_obj::toPhysicalUnits(((y + ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) + this->currOffset->y));
			}
			HX_STACK_LINE(2372)
			this->dummy->x = this->body->getPosition()->x;
			HX_STACK_LINE(2374)
			this->body->setPosition(this->dummy);
			HX_STACK_LINE(2376)
			if ((resetSpeed)){
				HX_STACK_LINE(2377)
				this->body->setLinearVelocity(this->zero);
			}
		}
		HX_STACK_LINE(2382)
		this->updateMatrix = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,setY,(void))

Void Actor_obj::setX( Float x,hx::Null< bool >  __o_resetSpeed,hx::Null< bool >  __o_noCollision){
bool resetSpeed = __o_resetSpeed.Default(false);
bool noCollision = __o_noCollision.Default(false);
	HX_STACK_PUSH("Actor::setX","com/stencyl/models/Actor.hx",2322);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(resetSpeed,"resetSpeed");
	HX_STACK_ARG(noCollision,"noCollision");
{
		HX_STACK_LINE(2323)
		if ((this->isLightweight)){
			HX_STACK_LINE(2325)
			bool sweep = false;		HX_STACK_VAR(sweep,"sweep");
			HX_STACK_LINE(2325)
			this->moveActorBy((((x + ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) + this->currOffset->x) - this->realX),(this->realY - this->realY),(  (((bool(!(noCollision)) && bool(this->continuousCollision)))) ? Dynamic(this->groupsToCollideWith) : Dynamic(null()) ),sweep);
		}
		else{
			HX_STACK_LINE(2330)
			if (((bool(this->isRegion) || bool(this->isTerrainRegion)))){
				HX_STACK_LINE(2331)
				this->dummy->x = ::com::stencyl::Engine_obj::toPhysicalUnits(x);
			}
			else{
				HX_STACK_LINE(2336)
				this->dummy->x = ::com::stencyl::Engine_obj::toPhysicalUnits(((x + ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) + this->currOffset->x));
			}
			HX_STACK_LINE(2340)
			this->dummy->y = this->body->getPosition()->y;
			HX_STACK_LINE(2342)
			this->body->setPosition(this->dummy);
			HX_STACK_LINE(2344)
			if ((resetSpeed)){
				HX_STACK_LINE(2345)
				this->body->setLinearVelocity(this->zero);
			}
		}
		HX_STACK_LINE(2350)
		this->updateMatrix = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,setX,(void))

Float Actor_obj::getScreenY( ){
	HX_STACK_PUSH("Actor::getScreenY","com/stencyl/models/Actor.hx",2309);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2309)
	if ((this->isHUD)){
		HX_STACK_LINE(2311)
		return this->getY(null());
	}
	else{
		HX_STACK_LINE(2316)
		return (this->getY(null()) + (Float(::com::stencyl::Engine_obj::cameraY) / Float(::com::stencyl::Engine_obj::SCALE)));
	}
	HX_STACK_LINE(2309)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getScreenY,return )

Float Actor_obj::getScreenX( ){
	HX_STACK_PUSH("Actor::getScreenX","com/stencyl/models/Actor.hx",2296);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2296)
	if ((this->isHUD)){
		HX_STACK_LINE(2298)
		return this->getX(null());
	}
	else{
		HX_STACK_LINE(2303)
		return (this->getX(null()) + (Float(::com::stencyl::Engine_obj::cameraX) / Float(::com::stencyl::Engine_obj::SCALE)));
	}
	HX_STACK_LINE(2296)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getScreenX,return )

Float Actor_obj::getYCenter( ){
	HX_STACK_PUSH("Actor::getYCenter","com/stencyl/models/Actor.hx",2283);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2283)
	if ((!(this->isLightweight))){
		HX_STACK_LINE(2285)
		return ::Math_obj::round((::com::stencyl::Engine_obj::toPixelUnits(this->body->getWorldCenter()->y) - this->currOffset->y));
	}
	else{
		HX_STACK_LINE(2290)
		return (this->realY - this->currOffset->y);
	}
	HX_STACK_LINE(2283)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getYCenter,return )

Float Actor_obj::getXCenter( ){
	HX_STACK_PUSH("Actor::getXCenter","com/stencyl/models/Actor.hx",2269);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2269)
	if ((!(this->isLightweight))){
		HX_STACK_LINE(2271)
		return ::Math_obj::round((::com::stencyl::Engine_obj::toPixelUnits(this->body->getWorldCenter()->x) - this->currOffset->x));
	}
	else{
		HX_STACK_LINE(2276)
		return (this->realX - this->currOffset->x);
	}
	HX_STACK_LINE(2269)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getXCenter,return )

Float Actor_obj::getY( hx::Null< bool >  __o_round){
bool round = __o_round.Default(true);
	HX_STACK_PUSH("Actor::getY","com/stencyl/models/Actor.hx",2243);
	HX_STACK_THIS(this);
	HX_STACK_ARG(round,"round");
{
		HX_STACK_LINE(2244)
		Float toReturn = (int)-1;		HX_STACK_VAR(toReturn,"toReturn");
		HX_STACK_LINE(2246)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2247)
			if (((bool(this->isRegion) || bool(this->isTerrainRegion)))){
				HX_STACK_LINE(2249)
				toReturn = (::com::stencyl::Engine_obj::toPixelUnits(this->body->getPosition()->y) - (Float(this->cacheHeight) / Float((int)2)));
			}
			else{
				HX_STACK_LINE(2253)
				if ((!(this->isLightweight))){
					HX_STACK_LINE(2254)
					toReturn = (((this->body->getPosition()->y * ::com::stencyl::Engine_obj::physicsScale) - ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) - this->currOffset->y);
				}
			}
		}
		HX_STACK_LINE(2259)
		if (((bool(::com::stencyl::Engine_obj::NO_PHYSICS) || bool(this->isLightweight)))){
			HX_STACK_LINE(2260)
			toReturn = ((this->realY - ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) - this->currOffset->y);
		}
		HX_STACK_LINE(2264)
		return (  ((round)) ? Float(::Math_obj::round(toReturn)) : Float(toReturn) );
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,getY,return )

Float Actor_obj::getX( hx::Null< bool >  __o_round){
bool round = __o_round.Default(true);
	HX_STACK_PUSH("Actor::getX","com/stencyl/models/Actor.hx",2218);
	HX_STACK_THIS(this);
	HX_STACK_ARG(round,"round");
{
		HX_STACK_LINE(2219)
		Float toReturn = (int)-1;		HX_STACK_VAR(toReturn,"toReturn");
		HX_STACK_LINE(2221)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2222)
			if (((bool(this->isRegion) || bool(this->isTerrainRegion)))){
				HX_STACK_LINE(2224)
				toReturn = (::com::stencyl::Engine_obj::toPixelUnits(this->body->getPosition()->x) - (Float(this->cacheWidth) / Float((int)2)));
			}
			else{
				HX_STACK_LINE(2228)
				if ((!(this->isLightweight))){
					HX_STACK_LINE(2229)
					toReturn = (((this->body->getPosition()->x * ::com::stencyl::Engine_obj::physicsScale) - ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) - this->currOffset->x);
				}
			}
		}
		HX_STACK_LINE(2234)
		if (((bool(::com::stencyl::Engine_obj::NO_PHYSICS) || bool(this->isLightweight)))){
			HX_STACK_LINE(2235)
			toReturn = ((this->realX - ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) - this->currOffset->x);
		}
		HX_STACK_LINE(2239)
		return (  ((round)) ? Float(::Math_obj::round(toReturn)) : Float(toReturn) );
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,getX,return )

Void Actor_obj::sendBackward( ){
{
		HX_STACK_PUSH("Actor::sendBackward","com/stencyl/models/Actor.hx",2204);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2204)
		if ((!(this->isHUD))){
			HX_STACK_LINE(2206)
			this->engine->sendBackward(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,sendBackward,(void))

Void Actor_obj::sendToBack( ){
{
		HX_STACK_PUSH("Actor::sendToBack","com/stencyl/models/Actor.hx",2196);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2196)
		if ((!(this->isHUD))){
			HX_STACK_LINE(2198)
			this->engine->sendToBack(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,sendToBack,(void))

Void Actor_obj::bringForward( ){
{
		HX_STACK_PUSH("Actor::bringForward","com/stencyl/models/Actor.hx",2188);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2188)
		if ((!(this->isHUD))){
			HX_STACK_LINE(2190)
			this->engine->bringForward(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,bringForward,(void))

Void Actor_obj::bringToFront( ){
{
		HX_STACK_PUSH("Actor::bringToFront","com/stencyl/models/Actor.hx",2180);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2180)
		if ((!(this->isHUD))){
			HX_STACK_LINE(2182)
			this->engine->bringToFront(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,bringToFront,(void))

Void Actor_obj::moveToLayer( Float layerID){
{
		HX_STACK_PUSH("Actor::moveToLayer","com/stencyl/models/Actor.hx",2172);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_LINE(2172)
		if ((!(this->isHUD))){
			HX_STACK_LINE(2174)
			this->engine->moveToLayer(hx::ObjectPtr<OBJ_>(this),::Std_obj::_int(layerID));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,moveToLayer,(void))

bool Actor_obj::getIsTerrainRegion( ){
	HX_STACK_PUSH("Actor::getIsTerrainRegion","com/stencyl/models/Actor.hx",2163);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2163)
	return this->isTerrainRegion;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getIsTerrainRegion,return )

bool Actor_obj::getIsRegion( ){
	HX_STACK_PUSH("Actor::getIsRegion","com/stencyl/models/Actor.hx",2158);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2158)
	return this->isRegion;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getIsRegion,return )

::com::stencyl::models::actor::Group Actor_obj::getGroup( ){
	HX_STACK_PUSH("Actor::getGroup","com/stencyl/models/Actor.hx",2153);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2153)
	return this->engine->groups->get(this->getGroupID());
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getGroup,return )

Void Actor_obj::unpause( ){
{
		HX_STACK_PUSH("Actor::unpause","com/stencyl/models/Actor.hx",2136);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2136)
		if ((this->isPausable())){
			HX_STACK_LINE(2139)
			this->paused = false;
			HX_STACK_LINE(2141)
			if ((!(this->isLightweight))){
				HX_STACK_LINE(2142)
				this->body->setPaused(false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,unpause,(void))

Void Actor_obj::pause( ){
{
		HX_STACK_PUSH("Actor::pause","com/stencyl/models/Actor.hx",2123);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2123)
		if ((this->isPausable())){
			HX_STACK_LINE(2126)
			this->paused = true;
			HX_STACK_LINE(2128)
			if ((!(this->isLightweight))){
				HX_STACK_LINE(2129)
				this->body->setPaused(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,pause,(void))

bool Actor_obj::isPaused( ){
	HX_STACK_PUSH("Actor::isPaused","com/stencyl/models/Actor.hx",2118);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2118)
	return this->paused;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isPaused,return )

bool Actor_obj::isPausable( ){
	HX_STACK_PUSH("Actor::isPausable","com/stencyl/models/Actor.hx",2113);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2113)
	return this->getType()->pausable;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isPausable,return )

::com::stencyl::models::actor::ActorType Actor_obj::getType( ){
	HX_STACK_PUSH("Actor::getType","com/stencyl/models/Actor.hx",2099);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2100)
	if (((this->typeID == (int)-1))){
		HX_STACK_LINE(2101)
		return null();
	}
	HX_STACK_LINE(2105)
	return hx::TCast< com::stencyl::models::actor::ActorType >::cast(::com::stencyl::Data_obj::get()->resources->get(this->typeID));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getType,return )

int Actor_obj::getLayerOrder( ){
	HX_STACK_PUSH("Actor::getLayerOrder","com/stencyl/models/Actor.hx",2094);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2094)
	return (this->engine->getOrderForLayerID(this->layerID) + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getLayerOrder,return )

int Actor_obj::getLayerID( ){
	HX_STACK_PUSH("Actor::getLayerID","com/stencyl/models/Actor.hx",2089);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2089)
	return this->layerID;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getLayerID,return )

int Actor_obj::getGroupID( ){
	HX_STACK_PUSH("Actor::getGroupID","com/stencyl/models/Actor.hx",2076);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2076)
	if ((this->isLightweight)){
		HX_STACK_LINE(2078)
		return this->groupID;
	}
	else{
		HX_STACK_LINE(2083)
		return this->body->groupID;
	}
	HX_STACK_LINE(2076)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getGroupID,return )

::String Actor_obj::getName( ){
	HX_STACK_PUSH("Actor::getName","com/stencyl/models/Actor.hx",2071);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2071)
	return this->get_name();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getName,return )

int Actor_obj::getID( ){
	HX_STACK_PUSH("Actor::getID","com/stencyl/models/Actor.hx",2066);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2066)
	return this->ID;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getID,return )

Void Actor_obj::removeRegionContact( ::box2D::dynamics::contacts::B2Contact point){
{
		HX_STACK_PUSH("Actor::removeRegionContact","com/stencyl/models/Actor.hx",2054);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(2054)
		if (((this->regionContacts != null()))){
			HX_STACK_LINE(2056)
			this->regionContacts->remove(point->key);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,removeRegionContact,(void))

Void Actor_obj::addRegionContact( ::box2D::dynamics::contacts::B2Contact point){
{
		HX_STACK_PUSH("Actor::addRegionContact","com/stencyl/models/Actor.hx",2046);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(2046)
		if (((this->regionContacts != null()))){
			HX_STACK_LINE(2048)
			this->regionContacts->set(point->key,point);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,addRegionContact,(void))

Void Actor_obj::removeContact( ::box2D::dynamics::contacts::B2Contact point){
{
		HX_STACK_PUSH("Actor::removeContact","com/stencyl/models/Actor.hx",2027);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(2028)
		if (((this->collisions != null()))){
			HX_STACK_LINE(2029)
			if ((this->collisions->remove(point->key))){
				HX_STACK_LINE(2031)
				(this->collisionsCount)--;
			}
		}
		HX_STACK_LINE(2036)
		if (((this->contacts != null()))){
			HX_STACK_LINE(2037)
			if ((this->contacts->remove(point->key))){
				HX_STACK_LINE(2039)
				(this->contactCount)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,removeContact,(void))

Void Actor_obj::addContact( ::box2D::dynamics::contacts::B2Contact point){
{
		HX_STACK_PUSH("Actor::addContact","com/stencyl/models/Actor.hx",2013);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(2013)
		if (((this->contacts != null()))){
			HX_STACK_LINE(2016)
			this->contacts->set(point->key,point);
			HX_STACK_LINE(2017)
			(this->contactCount)++;
			HX_STACK_LINE(2019)
			if ((this->collisions->remove(point->key))){
				HX_STACK_LINE(2020)
				(this->collisionsCount)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,addContact,(void))

Void Actor_obj::handleCollisions( ){
{
		HX_STACK_PUSH("Actor::handleCollisions","com/stencyl/models/Actor.hx",1749);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1750)
		::com::stencyl::models::Actor otherActor;		HX_STACK_VAR(otherActor,"otherActor");
		HX_STACK_LINE(1751)
		::box2D::dynamics::B2Fixture otherShape;		HX_STACK_VAR(otherShape,"otherShape");
		HX_STACK_LINE(1752)
		::box2D::dynamics::B2Fixture thisShape;		HX_STACK_VAR(thisShape,"thisShape");
		HX_STACK_LINE(1755)
		if (((this->contactCount > (int)0))){
			struct _Function_2_1{
				inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1757);
					{
						HX_STACK_LINE(1757)
						Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->contacts);		HX_STACK_VAR(_e,"_e");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_e)
						Dynamic run(){
							HX_STACK_PUSH("*::_Function_3_1","com/stencyl/models/Actor.hx",1757);
							{
								HX_STACK_LINE(1757)
								return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0(return)

						HX_STACK_LINE(1757)
						return  Dynamic(new _Function_3_1(_e));
					}
					return null();
				}
			};
			HX_STACK_LINE(1756)
			for(::cpp::FastIterator_obj< ::box2D::dynamics::contacts::B2Contact > *__it = ::cpp::CreateFastIterator< ::box2D::dynamics::contacts::B2Contact >((_Function_2_1::Block(this))());  __it->hasNext(); ){
				::box2D::dynamics::contacts::B2Contact p = __it->next();
				{
					HX_STACK_LINE(1759)
					int key = p->key;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1761)
					if (((this->collisions->get(key) != null()))){
						HX_STACK_LINE(1762)
						continue;
					}
					HX_STACK_LINE(1766)
					::com::stencyl::models::Actor a1 = hx::TCast< com::stencyl::models::Actor >::cast(p->getFixtureA()->getUserData());		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(1767)
					::com::stencyl::models::Actor a2 = hx::TCast< com::stencyl::models::Actor >::cast(p->getFixtureB()->getUserData());		HX_STACK_VAR(a2,"a2");
					HX_STACK_LINE(1769)
					if (((a1 == hx::ObjectPtr<OBJ_>(this)))){
						HX_STACK_LINE(1771)
						otherActor = a2;
						HX_STACK_LINE(1772)
						otherShape = p->getFixtureB();
						HX_STACK_LINE(1773)
						thisShape = p->getFixtureA();
					}
					else{
						HX_STACK_LINE(1778)
						otherActor = a1;
						HX_STACK_LINE(1779)
						otherShape = p->getFixtureA();
						HX_STACK_LINE(1780)
						thisShape = p->getFixtureB();
					}
					HX_STACK_LINE(1784)
					::com::stencyl::models::actor::Collision d = ::com::stencyl::models::actor::Collision_obj::__new();		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(1785)
					d->otherActor = otherActor;
					HX_STACK_LINE(1786)
					d->otherShape = otherShape;
					HX_STACK_LINE(1787)
					d->thisActor = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(1788)
					d->thisShape = thisShape;
					HX_STACK_LINE(1789)
					d->actorA = a1;
					HX_STACK_LINE(1790)
					d->actorB = a2;
					HX_STACK_LINE(1794)
					p->getWorldManifold(::com::stencyl::models::Actor_obj::manifold);
					HX_STACK_LINE(1796)
					::box2D::common::math::B2Vec2 pt = ::com::stencyl::models::Actor_obj::manifold->getPoint();		HX_STACK_VAR(pt,"pt");
					HX_STACK_LINE(1797)
					::com::stencyl::models::actor::CollisionPoint cp;		HX_STACK_VAR(cp,"cp");
					HX_STACK_LINE(1801)
					if (((pt == null()))){
						HX_STACK_LINE(1802)
						cp = ::com::stencyl::models::actor::CollisionPoint_obj::__new((int)-9999,(int)-9999,::com::stencyl::models::Actor_obj::manifold->m_normal->x,::com::stencyl::models::Actor_obj::manifold->m_normal->y);
					}
					else{
						HX_STACK_LINE(1813)
						if ((::Std_obj::is(thisShape->getShape(),hx::ClassOf< ::box2D::collision::shapes::B2CircleShape >()))){
							HX_STACK_LINE(1817)
							cp = ::com::stencyl::models::actor::CollisionPoint_obj::__new((::com::stencyl::models::Actor_obj::manifold->getPoint()->x * (int)2),(::com::stencyl::models::Actor_obj::manifold->getPoint()->y * (int)2),::com::stencyl::models::Actor_obj::manifold->m_normal->x,::com::stencyl::models::Actor_obj::manifold->m_normal->y);
						}
						else{
							HX_STACK_LINE(1828)
							cp = ::com::stencyl::models::actor::CollisionPoint_obj::__new(::com::stencyl::models::Actor_obj::manifold->getPoint()->x,::com::stencyl::models::Actor_obj::manifold->getPoint()->y,::com::stencyl::models::Actor_obj::manifold->m_normal->x,::com::stencyl::models::Actor_obj::manifold->m_normal->y);
						}
					}
					HX_STACK_LINE(1839)
					this->collisions->set(key,d);
					HX_STACK_LINE(1840)
					(this->collisionsCount)++;
					HX_STACK_LINE(1842)
					if (((bool((cp->x != (int)-9999)) && bool((cp->y != (int)-9999))))){
						HX_STACK_LINE(1844)
						d->points->push(cp);
						HX_STACK_LINE(1846)
						::com::stencyl::models::Actor thisActor = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(thisActor,"thisActor");
						HX_STACK_LINE(1847)
						::box2D::dynamics::B2Body body = thisActor->getBody();		HX_STACK_VAR(body,"body");
						HX_STACK_LINE(1848)
						::box2D::dynamics::B2Body otherBody = otherActor->getBody();		HX_STACK_VAR(otherBody,"otherBody");
						HX_STACK_LINE(1849)
						::box2D::dynamics::B2Body body1 = p->getFixtureA()->getBody();		HX_STACK_VAR(body1,"body1");
						HX_STACK_LINE(1850)
						::box2D::dynamics::B2Body body2 = p->getFixtureB()->getBody();		HX_STACK_VAR(body2,"body2");
						HX_STACK_LINE(1852)
						d->thisFromBottom = false;
						HX_STACK_LINE(1853)
						d->thisFromTop = false;
						HX_STACK_LINE(1854)
						d->thisFromLeft = false;
						HX_STACK_LINE(1855)
						d->thisFromRight = false;
						HX_STACK_LINE(1858)
						if (((body1 == body))){
							HX_STACK_LINE(1859)
							d->thisFromBottom = (cp->normalY > (int)0);
						}
						else{
							HX_STACK_LINE(1863)
							if (((body2 == body))){
								HX_STACK_LINE(1864)
								d->thisFromBottom = (cp->normalY < (int)0);
							}
						}
						HX_STACK_LINE(1869)
						if (((body1 == body))){
							HX_STACK_LINE(1870)
							d->thisFromTop = (cp->normalY < (int)0);
						}
						else{
							HX_STACK_LINE(1874)
							if (((body2 == body))){
								HX_STACK_LINE(1875)
								d->thisFromTop = (cp->normalY > (int)0);
							}
						}
						HX_STACK_LINE(1880)
						if (((body1 == body))){
							HX_STACK_LINE(1881)
							d->thisFromLeft = (cp->normalX < (int)0);
						}
						else{
							HX_STACK_LINE(1885)
							if (((body2 == body))){
								HX_STACK_LINE(1886)
								d->thisFromLeft = (cp->normalX > (int)0);
							}
						}
						HX_STACK_LINE(1891)
						if (((body1 == body))){
							HX_STACK_LINE(1892)
							d->thisFromRight = (cp->normalX > (int)0);
						}
						else{
							HX_STACK_LINE(1896)
							if (((body2 == body))){
								HX_STACK_LINE(1897)
								d->thisFromRight = (cp->normalX < (int)0);
							}
						}
						HX_STACK_LINE(1903)
						d->otherFromBottom = false;
						HX_STACK_LINE(1904)
						d->otherFromTop = false;
						HX_STACK_LINE(1905)
						d->otherFromLeft = false;
						HX_STACK_LINE(1906)
						d->otherFromRight = false;
						HX_STACK_LINE(1909)
						if (((body1 == otherBody))){
							HX_STACK_LINE(1910)
							d->otherFromBottom = (cp->normalY > (int)0);
						}
						else{
							HX_STACK_LINE(1914)
							if (((body2 == otherBody))){
								HX_STACK_LINE(1915)
								d->otherFromBottom = (cp->normalY < (int)0);
							}
						}
						HX_STACK_LINE(1920)
						if (((body1 == otherBody))){
							HX_STACK_LINE(1921)
							d->otherFromTop = (cp->normalY < (int)0);
						}
						else{
							HX_STACK_LINE(1925)
							if (((body2 == otherBody))){
								HX_STACK_LINE(1926)
								d->otherFromTop = (cp->normalY > (int)0);
							}
						}
						HX_STACK_LINE(1931)
						if (((body1 == otherBody))){
							HX_STACK_LINE(1932)
							d->otherFromLeft = (cp->normalX < (int)0);
						}
						else{
							HX_STACK_LINE(1936)
							if (((body2 == otherBody))){
								HX_STACK_LINE(1937)
								d->otherFromLeft = (cp->normalX > (int)0);
							}
						}
						HX_STACK_LINE(1942)
						if (((body1 == otherBody))){
							HX_STACK_LINE(1943)
							d->otherFromRight = (cp->normalX > (int)0);
						}
						else{
							HX_STACK_LINE(1947)
							if (((body2 == otherBody))){
								HX_STACK_LINE(1948)
								d->otherFromRight = (cp->normalX < (int)0);
							}
						}
					}
					HX_STACK_LINE(1955)
					d->thisCollidedWithActor = false;
					HX_STACK_LINE(1956)
					d->thisCollidedWithTerrain = false;
					HX_STACK_LINE(1957)
					d->thisCollidedWithTile = false;
					HX_STACK_LINE(1958)
					d->thisCollidedWithSensor = false;
					HX_STACK_LINE(1960)
					d->otherCollidedWithActor = false;
					HX_STACK_LINE(1961)
					d->otherCollidedWithTerrain = false;
					HX_STACK_LINE(1962)
					d->otherCollidedWithTile = false;
					HX_STACK_LINE(1963)
					d->otherCollidedWithSensor = false;
					HX_STACK_LINE(1967)
					if (((otherActor != null()))){
						HX_STACK_LINE(1969)
						d->thisCollidedWithActor = (bool((bool((otherActor->groupID != (int)1)) && bool((otherActor->groupID != (int)-2)))) && bool(!(otherActor->isTerrainRegion)));
						HX_STACK_LINE(1970)
						d->thisCollidedWithTerrain = otherActor->isTerrainRegion;
						HX_STACK_LINE(1971)
						d->thisCollidedWithTile = (otherActor->groupID == (int)1);
					}
					HX_STACK_LINE(1974)
					d->otherCollidedWithActor = (bool((bool((this->groupID != (int)1)) && bool((this->groupID != (int)-2)))) && bool(!(this->isTerrainRegion)));
					HX_STACK_LINE(1975)
					d->otherCollidedWithTerrain = this->isTerrainRegion;
					HX_STACK_LINE(1976)
					d->otherCollidedWithTile = (this->groupID == (int)1);
					HX_STACK_LINE(1978)
					d->thisCollidedWithSensor = otherShape->isSensor();
					HX_STACK_LINE(1979)
					d->otherCollidedWithSensor = thisShape->isSensor();
				}
;
			}
		}
		HX_STACK_LINE(1984)
		if (((this->collisionsCount > (int)0))){
			struct _Function_2_1{
				inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1986);
					{
						HX_STACK_LINE(1986)
						Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->collisions);		HX_STACK_VAR(_e,"_e");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_e)
						Dynamic run(){
							HX_STACK_PUSH("*::_Function_3_1","com/stencyl/models/Actor.hx",1986);
							{
								HX_STACK_LINE(1986)
								return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0(return)

						HX_STACK_LINE(1986)
						return  Dynamic(new _Function_3_1(_e));
					}
					return null();
				}
			};
			HX_STACK_LINE(1985)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::actor::Collision > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::actor::Collision >((_Function_2_1::Block(this))());  __it->hasNext(); ){
				::com::stencyl::models::actor::Collision collision = __it->next();
				{
					HX_STACK_LINE(1990)
					if (((bool((bool((bool((bool((collision == null())) || bool((collision->thisActor == null())))) || bool((collision->otherActor == null())))) || bool(!(collision->thisActor->handlesCollisions)))) || bool(!(collision->otherActor->handlesCollisions))))){
						HX_STACK_LINE(1995)
						continue;
					}
					HX_STACK_LINE(1999)
					::com::stencyl::models::Actor_obj::lastCollided = collision->otherActor;
					HX_STACK_LINE(2000)
					{
						HX_STACK_LINE(2000)
						Dynamic listeners = this->collisionListeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(2000)
						int r = (int)0;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(2000)
						while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
							HX_STACK_LINE(2000)
							try{
								HX_STACK_LINE(2000)
								Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(2000)
								f(collision,listeners).Cast< Void >();
								HX_STACK_LINE(2000)
								if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
									HX_STACK_LINE(2000)
									(r)--;
								}
							}
							catch(Dynamic __e){
								if (__e.IsClass< ::String >() ){
									HX_STACK_BEGIN_CATCH
									::String e = __e;{
										HX_STACK_LINE(2000)
										::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
									}
								}
								else throw(__e);
							}
							HX_STACK_LINE(2000)
							(r)++;
						}
					}
					HX_STACK_LINE(2002)
					this->engine->handleCollision(hx::ObjectPtr<OBJ_>(this),collision);
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,handleCollisions,(void))

Void Actor_obj::checkScreenState( ){
{
		HX_STACK_PUSH("Actor::checkScreenState","com/stencyl/models/Actor.hx",1712);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1713)
		bool onScreen = this->isOnScreen();		HX_STACK_VAR(onScreen,"onScreen");
		HX_STACK_LINE(1714)
		bool inScene = (bool(onScreen) || bool(this->isInScene()));		HX_STACK_VAR(inScene,"inScene");
		HX_STACK_LINE(1716)
		bool enteredScreen = (bool(!(this->lastScreenState)) && bool(onScreen));		HX_STACK_VAR(enteredScreen,"enteredScreen");
		HX_STACK_LINE(1717)
		bool enteredScene = (bool(!(this->lastSceneState)) && bool(inScene));		HX_STACK_VAR(enteredScene,"enteredScene");
		HX_STACK_LINE(1718)
		bool exitedScreen = (bool(this->lastScreenState) && bool(!(onScreen)));		HX_STACK_VAR(exitedScreen,"exitedScreen");
		HX_STACK_LINE(1719)
		bool exitedScene = (bool(this->lastSceneState) && bool(!(inScene)));		HX_STACK_VAR(exitedScene,"exitedScene");
		HX_STACK_LINE(1721)
		{
			HX_STACK_LINE(1721)
			Dynamic listeners = this->positionListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1721)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1721)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1721)
				try{
					HX_STACK_LINE(1721)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1721)
					f(enteredScreen,exitedScreen,enteredScene,exitedScene,listeners).Cast< Void >();
					HX_STACK_LINE(1721)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1721)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1721)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3901,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners5")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1721)
				(r)++;
			}
		}
		HX_STACK_LINE(1723)
		Dynamic typeListeners = this->engine->typeGroupPositionListeners->get((this->groupID + ::com::stencyl::models::Actor_obj::GROUP_OFFSET));		HX_STACK_VAR(typeListeners,"typeListeners");
		HX_STACK_LINE(1724)
		Dynamic groupListeners = this->engine->typeGroupPositionListeners->get(this->typeID);		HX_STACK_VAR(groupListeners,"groupListeners");
		HX_STACK_LINE(1726)
		if (((typeListeners != null()))){
			HX_STACK_LINE(1728)
			Dynamic listeners = typeListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1728)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1728)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1728)
				try{
					HX_STACK_LINE(1728)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1728)
					f(hx::ObjectPtr<OBJ_>(this),enteredScreen,exitedScreen,enteredScene,exitedScene,listeners).Cast< Void >();
					HX_STACK_LINE(1728)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1728)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1728)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3928,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners6")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1728)
				(r)++;
			}
		}
		HX_STACK_LINE(1731)
		if (((groupListeners != null()))){
			HX_STACK_LINE(1733)
			Dynamic listeners = groupListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1733)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1733)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1733)
				try{
					HX_STACK_LINE(1733)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1733)
					f(hx::ObjectPtr<OBJ_>(this),enteredScreen,exitedScreen,enteredScene,exitedScene,listeners).Cast< Void >();
					HX_STACK_LINE(1733)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1733)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1733)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3928,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners6")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1733)
				(r)++;
			}
		}
		HX_STACK_LINE(1736)
		this->lastScreenState = onScreen;
		HX_STACK_LINE(1737)
		this->lastSceneState = inScene;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,checkScreenState,(void))

Void Actor_obj::scaleBody( Float width,Float height){
{
		HX_STACK_PUSH("Actor::scaleBody","com/stencyl/models/Actor.hx",1642);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(1643)
		Array< ::Dynamic > fixtureList = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(fixtureList,"fixtureList");
		HX_STACK_LINE(1644)
		::box2D::dynamics::B2Fixture fixture = this->body->getFixtureList();		HX_STACK_VAR(fixture,"fixture");
		HX_STACK_LINE(1646)
		while(((fixture != null()))){
			HX_STACK_LINE(1648)
			fixtureList->push(fixture);
			HX_STACK_LINE(1649)
			fixture = fixture->getNext();
		}
		HX_STACK_LINE(1652)
		{
			HX_STACK_LINE(1652)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1652)
			while(((_g < fixtureList->length))){
				HX_STACK_LINE(1652)
				::box2D::dynamics::B2Fixture f = fixtureList->__get(_g).StaticCast< ::box2D::dynamics::B2Fixture >();		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(1652)
				++(_g);
				HX_STACK_LINE(1654)
				::box2D::collision::shapes::B2Shape poly = f->getShape();		HX_STACK_VAR(poly,"poly");
				HX_STACK_LINE(1655)
				::box2D::common::math::B2Vec2 center = this->body->getLocalCenter();		HX_STACK_VAR(center,"center");
				HX_STACK_LINE(1656)
				if ((::Std_obj::is(poly,hx::ClassOf< ::box2D::collision::shapes::B2CircleShape >()))){
					HX_STACK_LINE(1658)
					Float factorX = ((Float((int)1) / Float(this->bodyScale->x)) * width);		HX_STACK_VAR(factorX,"factorX");
					HX_STACK_LINE(1659)
					Float factorY = ((Float((int)1) / Float(this->bodyScale->y)) * height);		HX_STACK_VAR(factorY,"factorY");
					HX_STACK_LINE(1661)
					::box2D::common::math::B2Vec2 p = (hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(poly))->m_p;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1662)
					p->subtract(center);
					HX_STACK_LINE(1663)
					p->x = (p->x * factorX);
					HX_STACK_LINE(1664)
					p->y = (p->y * factorY);
					HX_STACK_LINE(1666)
					(hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(poly))->m_p = center->copy(null());
					HX_STACK_LINE(1667)
					(hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(poly))->m_p->add(p);
					HX_STACK_LINE(1668)
					poly->m_radius = (poly->m_radius * ::Math_obj::abs(factorX));
				}
				else{
					HX_STACK_LINE(1671)
					if ((::Std_obj::is(poly,hx::ClassOf< ::box2D::collision::shapes::B2PolygonShape >()))){
						HX_STACK_LINE(1673)
						Array< ::Dynamic > verts = (hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(poly))->m_vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(1674)
						Array< ::Dynamic > newVerts = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(newVerts,"newVerts");
						HX_STACK_LINE(1676)
						{
							HX_STACK_LINE(1676)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1676)
							while(((_g1 < verts->length))){
								HX_STACK_LINE(1676)
								::box2D::common::math::B2Vec2 v = verts->__get(_g1).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(1676)
								++(_g1);
								HX_STACK_LINE(1678)
								v->subtract(center);
								HX_STACK_LINE(1679)
								v->x = ((v->x * ((Float((int)1) / Float(::Math_obj::abs(this->bodyScale->x))))) * ::Math_obj::abs(width));
								HX_STACK_LINE(1680)
								v->y = ((v->y * ((Float((int)1) / Float(::Math_obj::abs(this->bodyScale->y))))) * ::Math_obj::abs(height));
								HX_STACK_LINE(1682)
								if (((bool((bool((this->bodyScale->x > (int)0)) && bool((width < (int)0)))) || bool((bool((this->bodyScale->x < (int)0)) && bool((width > (int)0))))))){
									HX_STACK_LINE(1683)
									v->x = -(v->x);
								}
								HX_STACK_LINE(1687)
								if (((bool((bool((this->bodyScale->y > (int)0)) && bool((height < (int)0)))) || bool((bool((this->bodyScale->y < (int)0)) && bool((height > (int)0))))))){
									HX_STACK_LINE(1688)
									v->y = -(v->y);
								}
								HX_STACK_LINE(1692)
								::box2D::common::math::B2Vec2 newVert = center->copy(null());		HX_STACK_VAR(newVert,"newVert");
								HX_STACK_LINE(1693)
								newVert->add(v);
								HX_STACK_LINE(1695)
								newVerts->push(newVert);
							}
						}
						HX_STACK_LINE(1698)
						if (((bool((bool((bool((bool((this->bodyScale->x > (int)0)) && bool((width < (int)0)))) || bool((bool((this->bodyScale->x < (int)0)) && bool((width > (int)0)))))) || bool((bool((this->bodyScale->y > (int)0)) && bool((height < (int)0)))))) || bool((bool((this->bodyScale->y < (int)0)) && bool((height > (int)0))))))){
							HX_STACK_LINE(1699)
							newVerts->reverse();
						}
						HX_STACK_LINE(1703)
						(hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(poly))->setAsArray(newVerts,newVerts->length);
					}
				}
			}
		}
		HX_STACK_LINE(1707)
		this->bodyScale->x = width;
		HX_STACK_LINE(1708)
		this->bodyScale->y = height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,scaleBody,(void))

Void Actor_obj::updateTweenProperties( ){
{
		HX_STACK_PUSH("Actor::updateTweenProperties","com/stencyl/models/Actor.hx",1570);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1574)
		bool a = (this->activePositionTweens > (int)0);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1575)
		bool b = (this->activeAngleTweens > (int)0);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1577)
		if (((bool((bool((bool((bool(this->autoScale) && bool(!(this->isLightweight)))) && bool((this->body != null())))) && bool((this->bodyDef->type != ::box2D::dynamics::B2Body_obj::b2_staticBody)))) && bool(((bool((this->bodyScale->x != this->realScaleX)) || bool((this->bodyScale->y != this->realScaleY)))))))){
			HX_STACK_LINE(1578)
			if (((bool((this->realScaleX != (int)0)) && bool((this->realScaleY != (int)0))))){
				HX_STACK_LINE(1580)
				this->scaleBody(this->realScaleX,this->realScaleY);
			}
		}
		HX_STACK_LINE(1585)
		if (((bool(a) && bool(b)))){
			HX_STACK_LINE(1587)
			if ((!(this->isLightweight))){
				HX_STACK_LINE(1589)
				this->realX = this->tweenLoc->x;
				HX_STACK_LINE(1590)
				this->realY = this->tweenLoc->y;
				HX_STACK_LINE(1591)
				this->realAngle = this->tweenAngle->angle;
				HX_STACK_LINE(1593)
				this->dummy->x = ::com::stencyl::Engine_obj::toPhysicalUnits(((this->realX + ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) + this->currOffset->x));
				HX_STACK_LINE(1594)
				this->dummy->y = ::com::stencyl::Engine_obj::toPhysicalUnits(((this->realY + ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) + this->currOffset->y));
				HX_STACK_LINE(1596)
				this->body->setPositionAndAngle(this->dummy,((Float(3.14159) / Float((int)180)) * this->realAngle));
			}
			else{
				HX_STACK_LINE(1605)
				this->moveActorBy((this->tweenLoc->x - this->getX(false)),(this->tweenLoc->y - this->getY(false)),this->groupsToCollideWith,null());
				HX_STACK_LINE(1606)
				this->setAngle(this->tweenAngle->angle,false);
			}
			HX_STACK_LINE(1609)
			this->updateMatrix = true;
		}
		else{
			HX_STACK_LINE(1614)
			if ((a)){
				HX_STACK_LINE(1615)
				if ((!(this->isLightweight))){
					HX_STACK_LINE(1618)
					this->setX(this->tweenLoc->x,null(),null());
					HX_STACK_LINE(1619)
					this->setY(this->tweenLoc->y,null(),null());
				}
				else{
					HX_STACK_LINE(1624)
					this->moveActorBy((this->tweenLoc->x - this->getX(false)),(this->tweenLoc->y - this->getY(false)),this->groupsToCollideWith,null());
					HX_STACK_LINE(1625)
					this->updateMatrix = true;
				}
			}
			HX_STACK_LINE(1629)
			if ((b)){
				HX_STACK_LINE(1630)
				this->setAngle(this->tweenAngle->angle,false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,updateTweenProperties,(void))

Void Actor_obj::updateDrawingMatrix( ){
{
		HX_STACK_PUSH("Actor::updateDrawingMatrix","com/stencyl/models/Actor.hx",1521);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1522)
		if ((this->paused)){
			HX_STACK_LINE(1523)
			return null();
		}
		HX_STACK_LINE(1527)
		Float drawX = this->realX;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(1528)
		Float drawY = this->realY;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(1530)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(1532)
			::box2D::common::math::B2Vec2 p = this->body->getPosition();		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(1534)
			drawX = (p->x * ::com::stencyl::Engine_obj::physicsScale);
			HX_STACK_LINE(1535)
			drawY = (p->y * ::com::stencyl::Engine_obj::physicsScale);
		}
		HX_STACK_LINE(1538)
		Float trueScaleX = (::com::stencyl::Engine_obj::SCALE * this->realScaleX);		HX_STACK_VAR(trueScaleX,"trueScaleX");
		HX_STACK_LINE(1539)
		Float trueScaleY = (::com::stencyl::Engine_obj::SCALE * this->realScaleY);		HX_STACK_VAR(trueScaleY,"trueScaleY");
		HX_STACK_LINE(1541)
		this->transformPoint->x = (this->currOrigin->x - (Float((this->cacheWidth * ::com::stencyl::Engine_obj::SCALE)) / Float((int)2)));
		HX_STACK_LINE(1542)
		this->transformPoint->y = (this->currOrigin->y - (Float((this->cacheHeight * ::com::stencyl::Engine_obj::SCALE)) / Float((int)2)));
		HX_STACK_LINE(1544)
		this->transformMatrix->identity();
		HX_STACK_LINE(1545)
		this->transformMatrix->translate((-(this->transformPoint->x) * ::com::stencyl::Engine_obj::SCALE),(-(this->transformPoint->y) * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(1546)
		this->transformMatrix->scale(this->realScaleX,this->realScaleY);
		HX_STACK_LINE(1548)
		if (((this->realAngle != (int)0))){
			HX_STACK_LINE(1549)
			this->transformMatrix->rotate((this->realAngle * ((Float(3.14159) / Float((int)180)))));
		}
		HX_STACK_LINE(1553)
		this->transformMatrix->translate((drawX * ::com::stencyl::Engine_obj::SCALE),(drawY * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(1556)
		if (((this->transformObj == null()))){
			HX_STACK_LINE(1557)
			this->transformObj = this->get_transform();
		}
		HX_STACK_LINE(1561)
		this->transformObj->set_matrix(this->transformMatrix);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,updateDrawingMatrix,(void))

Void Actor_obj::internalUpdate( Float elapsedTime,bool doAll){
{
		HX_STACK_PUSH("Actor::internalUpdate","com/stencyl/models/Actor.hx",1447);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_ARG(doAll,"doAll");
		HX_STACK_LINE(1448)
		if ((this->paused)){
			HX_STACK_LINE(1449)
			return null();
		}
		HX_STACK_LINE(1453)
		if ((this->isLightweight)){
			HX_STACK_LINE(1455)
			if (((bool(!(this->ignoreGravity)) && bool(!(this->isHUD))))){
				HX_STACK_LINE(1458)
				hx::AddEq(this->xSpeed,((elapsedTime * this->engine->gravityX) * 0.001));
				HX_STACK_LINE(1459)
				hx::AddEq(this->ySpeed,((elapsedTime * this->engine->gravityY) * 0.001));
			}
			HX_STACK_LINE(1462)
			if (((bool((this->xSpeed != (int)0)) || bool((this->ySpeed != (int)0))))){
				HX_STACK_LINE(1464)
				this->resetReal(this->realX,this->realY);
				HX_STACK_LINE(1466)
				this->moveActorBy(((elapsedTime * this->xSpeed) * 0.01),((elapsedTime * this->ySpeed) * 0.01),this->groupsToCollideWith,null());
			}
			HX_STACK_LINE(1469)
			if (((this->rSpeed != (int)0))){
				HX_STACK_LINE(1470)
				hx::AddEq(this->realAngle,((elapsedTime * this->rSpeed) * 0.001));
			}
			HX_STACK_LINE(1474)
			if ((this->fixedRotation)){
				HX_STACK_LINE(1476)
				this->realAngle = (int)0;
				HX_STACK_LINE(1477)
				this->rSpeed = (int)0;
			}
		}
		else{
			HX_STACK_LINE(1483)
			::box2D::common::math::B2Vec2 p = this->body->getPosition();		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(1491)
			this->realX = (p->x * ::com::stencyl::Engine_obj::physicsScale);
			HX_STACK_LINE(1492)
			this->realY = (p->y * ::com::stencyl::Engine_obj::physicsScale);
			HX_STACK_LINE(1495)
			this->resetReal(this->realX,this->realY);
			HX_STACK_LINE(1497)
			this->realAngle = (this->body->getAngle() * ((Float((int)180) / Float(3.14159))));
		}
		HX_STACK_LINE(1500)
		if (((bool((bool((bool((bool((this->lastX != this->realX)) || bool((this->lastY != this->realY)))) || bool((this->lastAngle != this->realAngle)))) || bool((this->lastScale->x != this->realScaleX)))) || bool((this->lastScale->y != this->realScaleY))))){
			HX_STACK_LINE(1501)
			this->updateMatrix = true;
		}
		HX_STACK_LINE(1505)
		this->lastX = this->realX;
		HX_STACK_LINE(1506)
		this->lastY = this->realY;
		HX_STACK_LINE(1507)
		this->lastAngle = this->realAngle;
		HX_STACK_LINE(1508)
		this->lastScale->x = this->realScaleX;
		HX_STACK_LINE(1509)
		this->lastScale->y = this->realScaleY;
		HX_STACK_LINE(1511)
		if (((bool(doAll) && bool((this->currAnimationAsAnim != null()))))){
			HX_STACK_LINE(1512)
			this->currAnimationAsAnim->__Field(HX_CSTRING("update"),true)(elapsedTime);
		}
		HX_STACK_LINE(1517)
		this->updateTweenProperties();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,internalUpdate,(void))

Void Actor_obj::innerUpdate( Float elapsedTime,bool hudCheck){
{
		HX_STACK_PUSH("Actor::innerUpdate","com/stencyl/models/Actor.hx",1347);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_ARG(hudCheck,"hudCheck");
		HX_STACK_LINE(1349)
		if (((bool((bool((bool((bool((bool(this->paused) || bool(this->isCamera))) || bool(this->dying))) || bool(this->dead))) || bool(this->destroyed))) || bool((bool(hudCheck) && bool(((bool(this->isHUD) || bool(this->alwaysSimulate))))))))){
			HX_STACK_LINE(1350)
			return null();
		}
		HX_STACK_LINE(1354)
		if (((this->mouseOverListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(1357)
			bool mouseOver = this->isMouseOver();		HX_STACK_VAR(mouseOver,"mouseOver");
			HX_STACK_LINE(1359)
			if (((bool((this->mouseState <= (int)0)) && bool(mouseOver)))){
				HX_STACK_LINE(1360)
				this->mouseState = (int)1;
			}
			else{
				HX_STACK_LINE(1366)
				if (((bool((this->mouseState >= (int)1)) && bool(mouseOver)))){
					HX_STACK_LINE(1375)
					this->mouseState = (int)2;
					HX_STACK_LINE(1377)
					if ((::com::stencyl::Input_obj::mousePressed)){
						HX_STACK_LINE(1378)
						this->mouseState = (int)3;
					}
					else{
						HX_STACK_LINE(1383)
						if ((::com::stencyl::Input_obj::mouseDown)){
							HX_STACK_LINE(1384)
							this->mouseState = (int)4;
						}
					}
					HX_STACK_LINE(1389)
					if ((::com::stencyl::Input_obj::mouseReleased)){
						HX_STACK_LINE(1390)
						this->mouseState = (int)5;
					}
				}
				else{
					HX_STACK_LINE(1396)
					if (((bool((this->mouseState > (int)0)) && bool(!(mouseOver))))){
						HX_STACK_LINE(1397)
						this->mouseState = (int)-1;
					}
					else{
						HX_STACK_LINE(1402)
						if (((bool((this->mouseState == (int)-1)) && bool(!(mouseOver))))){
							HX_STACK_LINE(1403)
							this->mouseState = (int)0;
						}
					}
				}
			}
			HX_STACK_LINE(1407)
			{
				HX_STACK_LINE(1407)
				Dynamic listeners = this->mouseOverListeners;		HX_STACK_VAR(listeners,"listeners");
				Dynamic value = this->mouseState;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(1407)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(1407)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(1407)
					try{
						HX_STACK_LINE(1407)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(1407)
						f(value,listeners).Cast< Void >();
						HX_STACK_LINE(1407)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(1407)
							(r)--;
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(1407)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(1407)
					(r)++;
				}
			}
		}
		HX_STACK_LINE(1410)
		int checkType = this->type->ID;		HX_STACK_VAR(checkType,"checkType");
		HX_STACK_LINE(1411)
		int groupType = (::com::stencyl::models::Actor_obj::GROUP_OFFSET + this->groupID);		HX_STACK_VAR(groupType,"groupType");
		HX_STACK_LINE(1413)
		::haxe::ds::IntMap ec = this->engine->collisionListeners;		HX_STACK_VAR(ec,"ec");
		HX_STACK_LINE(1414)
		::haxe::ds::IntMap ep = this->engine->typeGroupPositionListeners;		HX_STACK_VAR(ep,"ep");
		HX_STACK_LINE(1416)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(1417)
			if (((bool((bool((this->collisionListenerCount > (int)0)) || bool((ec->get(checkType) != null())))) || bool((ec->get(groupType) != null()))))){
				HX_STACK_LINE(1423)
				::com::stencyl::models::Actor otherActor;		HX_STACK_VAR(otherActor,"otherActor");
				HX_STACK_LINE(1423)
				::box2D::dynamics::B2Fixture otherShape;		HX_STACK_VAR(otherShape,"otherShape");
				HX_STACK_LINE(1423)
				::box2D::dynamics::B2Fixture thisShape;		HX_STACK_VAR(thisShape,"thisShape");
				HX_STACK_LINE(1423)
				if (((this->contactCount > (int)0))){
					struct _Function_4_1{
						inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1423);
							{
								HX_STACK_LINE(1423)
								Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->contacts);		HX_STACK_VAR(_e,"_e");

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_1,Array< ::Dynamic >,_e)
								Dynamic run(){
									HX_STACK_PUSH("*::_Function_5_1","com/stencyl/models/Actor.hx",1423);
									{
										HX_STACK_LINE(1423)
										return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
									}
									return null();
								}
								HX_END_LOCAL_FUNC0(return)

								HX_STACK_LINE(1423)
								return  Dynamic(new _Function_5_1(_e));
							}
							return null();
						}
					};
					HX_STACK_LINE(1423)
					for(::cpp::FastIterator_obj< ::box2D::dynamics::contacts::B2Contact > *__it = ::cpp::CreateFastIterator< ::box2D::dynamics::contacts::B2Contact >((_Function_4_1::Block(this))());  __it->hasNext(); ){
						::box2D::dynamics::contacts::B2Contact p = __it->next();
						{
							HX_STACK_LINE(1423)
							int key = p->key;		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(1423)
							if (((this->collisions->get(key) != null()))){
								HX_STACK_LINE(1423)
								continue;
							}
							HX_STACK_LINE(1423)
							::com::stencyl::models::Actor a1 = hx::TCast< com::stencyl::models::Actor >::cast(p->getFixtureA()->getUserData());		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(1423)
							::com::stencyl::models::Actor a2 = hx::TCast< com::stencyl::models::Actor >::cast(p->getFixtureB()->getUserData());		HX_STACK_VAR(a2,"a2");
							HX_STACK_LINE(1423)
							if (((a1 == hx::ObjectPtr<OBJ_>(this)))){
								HX_STACK_LINE(1423)
								otherActor = a2;
								HX_STACK_LINE(1423)
								otherShape = p->getFixtureB();
								HX_STACK_LINE(1423)
								thisShape = p->getFixtureA();
							}
							else{
								HX_STACK_LINE(1423)
								otherActor = a1;
								HX_STACK_LINE(1423)
								otherShape = p->getFixtureA();
								HX_STACK_LINE(1423)
								thisShape = p->getFixtureB();
							}
							HX_STACK_LINE(1423)
							::com::stencyl::models::actor::Collision d = ::com::stencyl::models::actor::Collision_obj::__new();		HX_STACK_VAR(d,"d");
							HX_STACK_LINE(1423)
							d->otherActor = otherActor;
							HX_STACK_LINE(1423)
							d->otherShape = otherShape;
							HX_STACK_LINE(1423)
							d->thisActor = hx::ObjectPtr<OBJ_>(this);
							HX_STACK_LINE(1423)
							d->thisShape = thisShape;
							HX_STACK_LINE(1423)
							d->actorA = a1;
							HX_STACK_LINE(1423)
							d->actorB = a2;
							HX_STACK_LINE(1423)
							p->getWorldManifold(::com::stencyl::models::Actor_obj::manifold);
							HX_STACK_LINE(1423)
							::box2D::common::math::B2Vec2 pt = ::com::stencyl::models::Actor_obj::manifold->getPoint();		HX_STACK_VAR(pt,"pt");
							HX_STACK_LINE(1423)
							::com::stencyl::models::actor::CollisionPoint cp;		HX_STACK_VAR(cp,"cp");
							HX_STACK_LINE(1423)
							if (((pt == null()))){
								HX_STACK_LINE(1423)
								cp = ::com::stencyl::models::actor::CollisionPoint_obj::__new((int)-9999,(int)-9999,::com::stencyl::models::Actor_obj::manifold->m_normal->x,::com::stencyl::models::Actor_obj::manifold->m_normal->y);
							}
							else{
								HX_STACK_LINE(1423)
								if ((::Std_obj::is(thisShape->getShape(),hx::ClassOf< ::box2D::collision::shapes::B2CircleShape >()))){
									HX_STACK_LINE(1423)
									cp = ::com::stencyl::models::actor::CollisionPoint_obj::__new((::com::stencyl::models::Actor_obj::manifold->getPoint()->x * (int)2),(::com::stencyl::models::Actor_obj::manifold->getPoint()->y * (int)2),::com::stencyl::models::Actor_obj::manifold->m_normal->x,::com::stencyl::models::Actor_obj::manifold->m_normal->y);
								}
								else{
									HX_STACK_LINE(1423)
									cp = ::com::stencyl::models::actor::CollisionPoint_obj::__new(::com::stencyl::models::Actor_obj::manifold->getPoint()->x,::com::stencyl::models::Actor_obj::manifold->getPoint()->y,::com::stencyl::models::Actor_obj::manifold->m_normal->x,::com::stencyl::models::Actor_obj::manifold->m_normal->y);
								}
							}
							HX_STACK_LINE(1423)
							this->collisions->set(key,d);
							HX_STACK_LINE(1423)
							(this->collisionsCount)++;
							HX_STACK_LINE(1423)
							if (((bool((cp->x != (int)-9999)) && bool((cp->y != (int)-9999))))){
								HX_STACK_LINE(1423)
								d->points->push(cp);
								HX_STACK_LINE(1423)
								::com::stencyl::models::Actor thisActor = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(thisActor,"thisActor");
								HX_STACK_LINE(1423)
								::box2D::dynamics::B2Body body = thisActor->getBody();		HX_STACK_VAR(body,"body");
								HX_STACK_LINE(1423)
								::box2D::dynamics::B2Body otherBody = otherActor->getBody();		HX_STACK_VAR(otherBody,"otherBody");
								HX_STACK_LINE(1423)
								::box2D::dynamics::B2Body body1 = p->getFixtureA()->getBody();		HX_STACK_VAR(body1,"body1");
								HX_STACK_LINE(1423)
								::box2D::dynamics::B2Body body2 = p->getFixtureB()->getBody();		HX_STACK_VAR(body2,"body2");
								HX_STACK_LINE(1423)
								d->thisFromBottom = false;
								HX_STACK_LINE(1423)
								d->thisFromTop = false;
								HX_STACK_LINE(1423)
								d->thisFromLeft = false;
								HX_STACK_LINE(1423)
								d->thisFromRight = false;
								HX_STACK_LINE(1423)
								if (((body1 == body))){
									HX_STACK_LINE(1423)
									d->thisFromBottom = (cp->normalY > (int)0);
								}
								else{
									HX_STACK_LINE(1423)
									if (((body2 == body))){
										HX_STACK_LINE(1423)
										d->thisFromBottom = (cp->normalY < (int)0);
									}
								}
								HX_STACK_LINE(1423)
								if (((body1 == body))){
									HX_STACK_LINE(1423)
									d->thisFromTop = (cp->normalY < (int)0);
								}
								else{
									HX_STACK_LINE(1423)
									if (((body2 == body))){
										HX_STACK_LINE(1423)
										d->thisFromTop = (cp->normalY > (int)0);
									}
								}
								HX_STACK_LINE(1423)
								if (((body1 == body))){
									HX_STACK_LINE(1423)
									d->thisFromLeft = (cp->normalX < (int)0);
								}
								else{
									HX_STACK_LINE(1423)
									if (((body2 == body))){
										HX_STACK_LINE(1423)
										d->thisFromLeft = (cp->normalX > (int)0);
									}
								}
								HX_STACK_LINE(1423)
								if (((body1 == body))){
									HX_STACK_LINE(1423)
									d->thisFromRight = (cp->normalX > (int)0);
								}
								else{
									HX_STACK_LINE(1423)
									if (((body2 == body))){
										HX_STACK_LINE(1423)
										d->thisFromRight = (cp->normalX < (int)0);
									}
								}
								HX_STACK_LINE(1423)
								d->otherFromBottom = false;
								HX_STACK_LINE(1423)
								d->otherFromTop = false;
								HX_STACK_LINE(1423)
								d->otherFromLeft = false;
								HX_STACK_LINE(1423)
								d->otherFromRight = false;
								HX_STACK_LINE(1423)
								if (((body1 == otherBody))){
									HX_STACK_LINE(1423)
									d->otherFromBottom = (cp->normalY > (int)0);
								}
								else{
									HX_STACK_LINE(1423)
									if (((body2 == otherBody))){
										HX_STACK_LINE(1423)
										d->otherFromBottom = (cp->normalY < (int)0);
									}
								}
								HX_STACK_LINE(1423)
								if (((body1 == otherBody))){
									HX_STACK_LINE(1423)
									d->otherFromTop = (cp->normalY < (int)0);
								}
								else{
									HX_STACK_LINE(1423)
									if (((body2 == otherBody))){
										HX_STACK_LINE(1423)
										d->otherFromTop = (cp->normalY > (int)0);
									}
								}
								HX_STACK_LINE(1423)
								if (((body1 == otherBody))){
									HX_STACK_LINE(1423)
									d->otherFromLeft = (cp->normalX < (int)0);
								}
								else{
									HX_STACK_LINE(1423)
									if (((body2 == otherBody))){
										HX_STACK_LINE(1423)
										d->otherFromLeft = (cp->normalX > (int)0);
									}
								}
								HX_STACK_LINE(1423)
								if (((body1 == otherBody))){
									HX_STACK_LINE(1423)
									d->otherFromRight = (cp->normalX > (int)0);
								}
								else{
									HX_STACK_LINE(1423)
									if (((body2 == otherBody))){
										HX_STACK_LINE(1423)
										d->otherFromRight = (cp->normalX < (int)0);
									}
								}
							}
							HX_STACK_LINE(1423)
							d->thisCollidedWithActor = false;
							HX_STACK_LINE(1423)
							d->thisCollidedWithTerrain = false;
							HX_STACK_LINE(1423)
							d->thisCollidedWithTile = false;
							HX_STACK_LINE(1423)
							d->thisCollidedWithSensor = false;
							HX_STACK_LINE(1423)
							d->otherCollidedWithActor = false;
							HX_STACK_LINE(1423)
							d->otherCollidedWithTerrain = false;
							HX_STACK_LINE(1423)
							d->otherCollidedWithTile = false;
							HX_STACK_LINE(1423)
							d->otherCollidedWithSensor = false;
							HX_STACK_LINE(1423)
							if (((otherActor != null()))){
								HX_STACK_LINE(1423)
								d->thisCollidedWithActor = (bool((bool((otherActor->groupID != (int)1)) && bool((otherActor->groupID != (int)-2)))) && bool(!(otherActor->isTerrainRegion)));
								HX_STACK_LINE(1423)
								d->thisCollidedWithTerrain = otherActor->isTerrainRegion;
								HX_STACK_LINE(1423)
								d->thisCollidedWithTile = (otherActor->groupID == (int)1);
							}
							HX_STACK_LINE(1423)
							d->otherCollidedWithActor = (bool((bool((this->groupID != (int)1)) && bool((this->groupID != (int)-2)))) && bool(!(this->isTerrainRegion)));
							HX_STACK_LINE(1423)
							d->otherCollidedWithTerrain = this->isTerrainRegion;
							HX_STACK_LINE(1423)
							d->otherCollidedWithTile = (this->groupID == (int)1);
							HX_STACK_LINE(1423)
							d->thisCollidedWithSensor = otherShape->isSensor();
							HX_STACK_LINE(1423)
							d->otherCollidedWithSensor = thisShape->isSensor();
						}
;
					}
				}
				HX_STACK_LINE(1423)
				if (((this->collisionsCount > (int)0))){
					struct _Function_4_1{
						inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1423);
							{
								HX_STACK_LINE(1423)
								Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->collisions);		HX_STACK_VAR(_e,"_e");

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_1,Array< ::Dynamic >,_e)
								Dynamic run(){
									HX_STACK_PUSH("*::_Function_5_1","com/stencyl/models/Actor.hx",1423);
									{
										HX_STACK_LINE(1423)
										return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
									}
									return null();
								}
								HX_END_LOCAL_FUNC0(return)

								HX_STACK_LINE(1423)
								return  Dynamic(new _Function_5_1(_e));
							}
							return null();
						}
					};
					HX_STACK_LINE(1423)
					for(::cpp::FastIterator_obj< ::com::stencyl::models::actor::Collision > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::actor::Collision >((_Function_4_1::Block(this))());  __it->hasNext(); ){
						::com::stencyl::models::actor::Collision collision = __it->next();
						{
							HX_STACK_LINE(1423)
							if (((bool((bool((bool((bool((collision == null())) || bool((collision->thisActor == null())))) || bool((collision->otherActor == null())))) || bool(!(collision->thisActor->handlesCollisions)))) || bool(!(collision->otherActor->handlesCollisions))))){
								HX_STACK_LINE(1423)
								continue;
							}
							HX_STACK_LINE(1423)
							::com::stencyl::models::Actor_obj::lastCollided = collision->otherActor;
							HX_STACK_LINE(1423)
							{
								HX_STACK_LINE(1423)
								Dynamic listeners = this->collisionListeners;		HX_STACK_VAR(listeners,"listeners");
								HX_STACK_LINE(1423)
								int r = (int)0;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1423)
								while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
									HX_STACK_LINE(1423)
									try{
										HX_STACK_LINE(1423)
										Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(1423)
										f(collision,listeners).Cast< Void >();
										HX_STACK_LINE(1423)
										if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
											HX_STACK_LINE(1423)
											(r)--;
										}
									}
									catch(Dynamic __e){
										if (__e.IsClass< ::String >() ){
											HX_STACK_BEGIN_CATCH
											::String e = __e;{
												HX_STACK_LINE(1423)
												::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
											}
										}
										else throw(__e);
									}
									HX_STACK_LINE(1423)
									(r)++;
								}
							}
							HX_STACK_LINE(1423)
							this->engine->handleCollision(hx::ObjectPtr<OBJ_>(this),collision);
						}
;
					}
				}
			}
		}
		HX_STACK_LINE(1427)
		this->internalUpdate(elapsedTime,true);
		HX_STACK_LINE(1428)
		{
			HX_STACK_LINE(1428)
			Dynamic listeners = this->whenUpdatedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1428)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1428)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1428)
				try{
					HX_STACK_LINE(1428)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1428)
					f(elapsedTime,listeners).Cast< Void >();
					HX_STACK_LINE(1428)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1428)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1428)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1428)
				(r)++;
			}
		}
		HX_STACK_LINE(1430)
		if (((bool((bool((this->positionListenerCount > (int)0)) || bool((ep->get(checkType) != null())))) || bool((ep->get(groupType) != null()))))){
			HX_STACK_LINE(1433)
			this->checkScreenState();
		}
		HX_STACK_LINE(1438)
		if (((this->label != null()))){
			HX_STACK_LINE(1439)
			this->label->setAlpha(this->get_alpha());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,innerUpdate,(void))

Void Actor_obj::update( Float elapsedTime){
{
		HX_STACK_PUSH("Actor::update","com/stencyl/models/Actor.hx",1342);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_LINE(1342)
		this->innerUpdate(elapsedTime,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,update,(void))

Void Actor_obj::switchAnimation( ::String name){
{
		HX_STACK_PUSH("Actor::switchAnimation","com/stencyl/models/Actor.hx",1025);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(1025)
		if (((name != this->currAnimationName))){
			HX_STACK_LINE(1028)
			Dynamic newAnimation = this->animationMap->get(name);		HX_STACK_VAR(newAnimation,"newAnimation");
			HX_STACK_LINE(1030)
			if (((newAnimation == null()))){
				HX_STACK_LINE(1031)
				return null();
			}
			HX_STACK_LINE(1035)
			if (((this->currAnimation != null()))){
				HX_STACK_LINE(1036)
				this->removeChild(this->currAnimation);
			}
			HX_STACK_LINE(1042)
			bool isDifferentShape = false;		HX_STACK_VAR(isDifferentShape,"isDifferentShape");
			HX_STACK_LINE(1046)
			if (((bool((this->body != null())) && bool(!(this->isLightweight))))){
				HX_STACK_LINE(1048)
				Dynamic arrOld = this->shapeMap->get(this->currAnimationName);		HX_STACK_VAR(arrOld,"arrOld");
				HX_STACK_LINE(1049)
				Dynamic arrNew = this->shapeMap->get(name);		HX_STACK_VAR(arrNew,"arrNew");
				HX_STACK_LINE(1051)
				if (((bool((arrOld == null())) || bool((arrNew == null()))))){
					HX_STACK_LINE(1052)
					isDifferentShape = true;
				}
				else{
					HX_STACK_LINE(1057)
					if (((bool((arrOld->__Field(HX_CSTRING("length"),true) != arrNew->__Field(HX_CSTRING("length"),true))) || bool((arrOld->__Field(HX_CSTRING("length"),true) > (int)1))))){
						HX_STACK_LINE(1059)
						isDifferentShape = true;
					}
					else{
						HX_STACK_LINE(1065)
						::box2D::dynamics::B2FixtureDef oldDef = arrOld->__GetItem((int)0);		HX_STACK_VAR(oldDef,"oldDef");
						HX_STACK_LINE(1066)
						::box2D::dynamics::B2FixtureDef newDef = arrNew->__GetItem((int)0);		HX_STACK_VAR(newDef,"newDef");
						HX_STACK_LINE(1068)
						if (((bool((oldDef == null())) || bool((newDef == null()))))){
							HX_STACK_LINE(1069)
							isDifferentShape = true;
						}
						else{
							HX_STACK_LINE(1075)
							::box2D::collision::shapes::B2Shape oldShape = oldDef->shape;		HX_STACK_VAR(oldShape,"oldShape");
							HX_STACK_LINE(1076)
							::box2D::collision::shapes::B2Shape newShape = newDef->shape;		HX_STACK_VAR(newShape,"newShape");
							HX_STACK_LINE(1078)
							if (((oldDef->isSensor != newDef->isSensor))){
								HX_STACK_LINE(1079)
								isDifferentShape = true;
							}
							else{
								HX_STACK_LINE(1083)
								if (((oldDef->groupID != newDef->groupID))){
									HX_STACK_LINE(1084)
									isDifferentShape = true;
								}
								else{
									HX_STACK_LINE(1088)
									if (((::Type_obj::getClass(oldShape) == ::Type_obj::getClass(newShape)))){
										HX_STACK_LINE(1089)
										if (((::Type_obj::getClass(oldShape) == hx::ClassOf< ::box2D::collision::shapes::B2PolygonShape >()))){
											HX_STACK_LINE(1092)
											::box2D::collision::shapes::B2PolygonShape polyOld = hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(oldShape);		HX_STACK_VAR(polyOld,"polyOld");
											HX_STACK_LINE(1093)
											::box2D::collision::shapes::B2PolygonShape polyNew = hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(newShape);		HX_STACK_VAR(polyNew,"polyNew");
											HX_STACK_LINE(1095)
											if (((polyOld->m_vertexCount != polyNew->m_vertexCount))){
												HX_STACK_LINE(1096)
												isDifferentShape = true;
											}
											else{
												HX_STACK_LINE(1102)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												int _g = polyOld->m_vertexCount;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(1102)
												while(((_g1 < _g))){
													HX_STACK_LINE(1102)
													int i = (_g1)++;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(1104)
													if (((polyOld->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->x != polyNew->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->x))){
														HX_STACK_LINE(1106)
														isDifferentShape = true;
														HX_STACK_LINE(1107)
														break;
													}
													else{
														HX_STACK_LINE(1110)
														if (((polyOld->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->y != polyNew->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->y))){
															HX_STACK_LINE(1112)
															isDifferentShape = true;
															HX_STACK_LINE(1113)
															break;
														}
													}
												}
											}
										}
										else{
											HX_STACK_LINE(1119)
											if (((::Type_obj::getClass(oldShape) == hx::ClassOf< ::box2D::collision::shapes::B2CircleShape >()))){
												HX_STACK_LINE(1121)
												::box2D::collision::shapes::B2CircleShape circleOld = hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(oldShape);		HX_STACK_VAR(circleOld,"circleOld");
												HX_STACK_LINE(1122)
												::box2D::collision::shapes::B2CircleShape circleNew = hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(newShape);		HX_STACK_VAR(circleNew,"circleNew");
												HX_STACK_LINE(1124)
												if (((bool((bool((circleOld->m_radius != circleNew->m_radius)) || bool((circleOld->m_p->x != circleNew->m_p->x)))) || bool((circleOld->m_p->y != circleNew->m_p->y))))){
													HX_STACK_LINE(1127)
													isDifferentShape = true;
												}
											}
										}
									}
									else{
										HX_STACK_LINE(1134)
										isDifferentShape = true;
									}
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(1144)
			this->currAnimationName = name;
			HX_STACK_LINE(1145)
			this->currAnimation = newAnimation;
			HX_STACK_LINE(1147)
			this->currAnimationAsAnim = hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation);
			HX_STACK_LINE(1149)
			this->addChild(newAnimation);
			HX_STACK_LINE(1153)
			::box2D::common::math::B2Vec2 animOrigin = this->originMap->get(name);		HX_STACK_VAR(animOrigin,"animOrigin");
			HX_STACK_LINE(1155)
			if ((!(this->isLightweight))){
				HX_STACK_LINE(1156)
				this->updateTweenProperties();
			}
			HX_STACK_LINE(1160)
			Float centerx = ((Float((Float(this->currAnimation->get_width()) / Float(::com::stencyl::Engine_obj::SCALE))) / Float((int)2)) - animOrigin->x);		HX_STACK_VAR(centerx,"centerx");
			HX_STACK_LINE(1161)
			Float centery = ((Float((Float(this->currAnimation->get_height()) / Float(::com::stencyl::Engine_obj::SCALE))) / Float((int)2)) - animOrigin->y);		HX_STACK_VAR(centery,"centery");
			HX_STACK_LINE(1163)
			if (((bool((bool((this->body != null())) && bool(isDifferentShape))) && bool(!(this->isLightweight))))){
				HX_STACK_LINE(1166)
				Array< ::Dynamic > regions = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(regions,"regions");
				HX_STACK_LINE(1170)
				::box2D::dynamics::contacts::B2ContactEdge contact = this->body->getContactList();		HX_STACK_VAR(contact,"contact");
				HX_STACK_LINE(1172)
				while(((contact != null()))){
					HX_STACK_LINE(1174)
					if (((bool(::Std_obj::is(contact->other->getUserData(),hx::ClassOf< ::com::stencyl::models::Region >())) && bool(contact->contact->isTouching())))){
						HX_STACK_LINE(1175)
						regions->push(contact->other->getUserData());
					}
					HX_STACK_LINE(1179)
					::com::stencyl::Engine_obj::engine->world->m_contactManager->m_contactListener->endContact(contact->contact);
					HX_STACK_LINE(1180)
					contact = contact->next;
				}
				HX_STACK_LINE(1185)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->collisions->keys());  __it->hasNext(); ){
					int k = __it->next();
					this->collisions->remove(k);
				}
				HX_STACK_LINE(1190)
				this->collisions = ::haxe::ds::IntMap_obj::__new();
				HX_STACK_LINE(1191)
				this->simpleCollisions = ::haxe::ds::IntMap_obj::__new();
				HX_STACK_LINE(1192)
				this->contacts = ::haxe::ds::IntMap_obj::__new();
				HX_STACK_LINE(1193)
				this->regionContacts = ::haxe::ds::IntMap_obj::__new();
				HX_STACK_LINE(1194)
				this->contactCount = (int)0;
				HX_STACK_LINE(1195)
				this->collisionsCount = (int)0;
				HX_STACK_LINE(1199)
				while(((this->body->m_fixtureCount > (int)0))){
					HX_STACK_LINE(1200)
					this->body->DestroyFixture(this->body->getFixtureList());
				}
				HX_STACK_LINE(1204)
				{
					HX_STACK_LINE(1204)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Dynamic _g1 = hx::TCastToArray(this->shapeMap->get(name));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1204)
					while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(1204)
						Dynamic f = _g1->__GetItem(_g);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(1204)
						++(_g);
						HX_STACK_LINE(1206)
						::box2D::dynamics::B2FixtureDef originFixDef = ::box2D::dynamics::B2FixtureDef_obj::__new();		HX_STACK_VAR(originFixDef,"originFixDef");
						HX_STACK_LINE(1208)
						if (((this->bodyDef->friction < ::com::stencyl::utils::Utils_obj::NUMBER_MAX_VALUE))){
							HX_STACK_LINE(1210)
							originFixDef->friction = this->bodyDef->friction;
							HX_STACK_LINE(1211)
							originFixDef->restitution = this->bodyDef->bounciness;
							HX_STACK_LINE(1213)
							if (((this->bodyDef->mass > (int)0))){
								HX_STACK_LINE(1214)
								originFixDef->density = 0.1;
							}
						}
						HX_STACK_LINE(1219)
						originFixDef->density = f->__Field(HX_CSTRING("density"),true);
						HX_STACK_LINE(1220)
						originFixDef->isSensor = f->__Field(HX_CSTRING("isSensor"),true);
						HX_STACK_LINE(1221)
						originFixDef->groupID = f->__Field(HX_CSTRING("groupID"),true);
						HX_STACK_LINE(1222)
						originFixDef->shape = f->__Field(HX_CSTRING("shape"),true);
						HX_STACK_LINE(1225)
						if (((animOrigin != null()))){
							HX_STACK_LINE(1227)
							this->body->origin->x = ::com::stencyl::Engine_obj::toPhysicalUnits(-(animOrigin->x));
							HX_STACK_LINE(1228)
							this->body->origin->y = ::com::stencyl::Engine_obj::toPhysicalUnits(-(animOrigin->y));
							HX_STACK_LINE(1230)
							if ((::Std_obj::is(f->__Field(HX_CSTRING("shape"),true),hx::ClassOf< ::box2D::collision::shapes::B2PolygonShape >()))){
								HX_STACK_LINE(1232)
								::box2D::common::math::B2Transform xf = ::box2D::common::math::B2Transform_obj::__new(null(),null());		HX_STACK_VAR(xf,"xf");
								HX_STACK_LINE(1233)
								::box2D::collision::shapes::B2PolygonShape oldBox = hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(f->__Field(HX_CSTRING("shape"),true));		HX_STACK_VAR(oldBox,"oldBox");
								HX_STACK_LINE(1234)
								::box2D::collision::shapes::B2PolygonShape newBox = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(newBox,"newBox");
								HX_STACK_LINE(1236)
								newBox->setAsArray(oldBox->m_vertices,oldBox->m_vertices->length);
								HX_STACK_LINE(1238)
								Array< ::Dynamic > vertices = newBox->m_vertices;		HX_STACK_VAR(vertices,"vertices");
								HX_STACK_LINE(1239)
								Array< ::Dynamic > normals = newBox->m_normals;		HX_STACK_VAR(normals,"normals");
								HX_STACK_LINE(1241)
								{
									HX_STACK_LINE(1241)
									::box2D::common::math::B2Vec2 _this = xf->position;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1241)
									_this->x = ::com::stencyl::Engine_obj::toPhysicalUnits(centerx);
									HX_STACK_LINE(1241)
									_this->y = ::com::stencyl::Engine_obj::toPhysicalUnits(centery);
								}
								HX_STACK_LINE(1242)
								xf->R->setAngle((int)0);
								HX_STACK_LINE(1244)
								{
									HX_STACK_LINE(1244)
									int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
									int _g2 = newBox->m_vertexCount;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1244)
									while(((_g3 < _g2))){
										HX_STACK_LINE(1244)
										int i = (_g3)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1246)
										vertices[i] = xf->multiply(vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >());
										HX_STACK_LINE(1247)
										normals[i] = xf->R->multiplyV(normals->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >());
									}
								}
								HX_STACK_LINE(1250)
								newBox->setAsArray(vertices,vertices->length);
								HX_STACK_LINE(1251)
								newBox->m_normals = normals;
								HX_STACK_LINE(1253)
								originFixDef->shape = newBox;
							}
							else{
								HX_STACK_LINE(1256)
								if ((::Std_obj::is(f->__Field(HX_CSTRING("shape"),true),hx::ClassOf< ::box2D::collision::shapes::B2CircleShape >()))){
									HX_STACK_LINE(1258)
									::box2D::collision::shapes::B2CircleShape oldCircle = hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(f->__Field(HX_CSTRING("shape"),true));		HX_STACK_VAR(oldCircle,"oldCircle");
									HX_STACK_LINE(1259)
									::box2D::collision::shapes::B2CircleShape newCircle = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());		HX_STACK_VAR(newCircle,"newCircle");
									HX_STACK_LINE(1261)
									newCircle->setRadius(oldCircle->getRadius());
									HX_STACK_LINE(1262)
									newCircle->m_p->x = (oldCircle->m_p->x + ::com::stencyl::Engine_obj::toPhysicalUnits(centerx));
									HX_STACK_LINE(1263)
									newCircle->m_p->y = (oldCircle->m_p->y + ::com::stencyl::Engine_obj::toPhysicalUnits(centery));
									HX_STACK_LINE(1265)
									originFixDef->shape = newCircle;
								}
							}
						}
						HX_STACK_LINE(1269)
						::box2D::dynamics::B2Fixture fix = this->body->createFixture(originFixDef);		HX_STACK_VAR(fix,"fix");
						HX_STACK_LINE(1270)
						fix->SetUserData(hx::ObjectPtr<OBJ_>(this));
					}
				}
				HX_STACK_LINE(1273)
				if (((this->body->getFixtureList() != null()))){
					HX_STACK_LINE(1275)
					this->bodyScale->x = (int)1;
					HX_STACK_LINE(1276)
					this->bodyScale->y = (int)1;
					HX_STACK_LINE(1278)
					{
						HX_STACK_LINE(1278)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1278)
						while(((_g < regions->length))){
							HX_STACK_LINE(1278)
							::com::stencyl::models::Region r = regions->__get(_g).StaticCast< ::com::stencyl::models::Region >();		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(1278)
							++(_g);
							HX_STACK_LINE(1280)
							::box2D::collision::B2AABB mine = this->body->getFixtureList()->m_aabb;		HX_STACK_VAR(mine,"mine");
							HX_STACK_LINE(1281)
							::box2D::collision::B2AABB other = r->getBody()->getFixtureList()->m_aabb;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(1283)
							if ((other->testOverlap(mine))){
								HX_STACK_LINE(1284)
								r->addActor(hx::ObjectPtr<OBJ_>(this));
							}
						}
					}
				}
				HX_STACK_LINE(1290)
				if (((this->md != null()))){
					HX_STACK_LINE(1291)
					this->body->setMassData(this->md);
				}
			}
			else{
				HX_STACK_LINE(1296)
				if (((bool((this->shapeMap->get(name) != null())) && bool(this->isLightweight)))){
					HX_STACK_LINE(1299)
					this->set_shape(this->shapeMap->get(name));
					HX_STACK_LINE(1300)
					this->HITBOX = this->_mask;
					HX_STACK_LINE(1303)
					isDifferentShape = true;
				}
			}
			HX_STACK_LINE(1306)
			this->cacheWidth = (Float(this->currAnimation->get_width()) / Float(::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(1307)
			this->cacheHeight = (Float(this->currAnimation->get_height()) / Float(::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(1309)
			if (((this->body != null()))){
				HX_STACK_LINE(1311)
				this->body->size->x = ::com::stencyl::Engine_obj::toPhysicalUnits(this->cacheWidth);
				HX_STACK_LINE(1312)
				this->body->size->y = ::com::stencyl::Engine_obj::toPhysicalUnits(this->cacheHeight);
			}
			HX_STACK_LINE(1315)
			if ((!(this->isLightweight))){
				HX_STACK_LINE(1317)
				this->realX = this->getX(false);
				HX_STACK_LINE(1318)
				this->realY = this->getY(false);
			}
			HX_STACK_LINE(1321)
			if (((animOrigin != null()))){
				HX_STACK_LINE(1322)
				this->setOriginPoint(::Std_obj::_int(animOrigin->x),::Std_obj::_int(animOrigin->y));
			}
			HX_STACK_LINE(1326)
			this->updateMatrix = true;
			HX_STACK_LINE(1330)
			if ((::Std_obj::is(this->currAnimation,hx::ClassOf< ::com::stencyl::graphics::AbstractAnimation >()))){
				HX_STACK_LINE(1331)
				(hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->reset();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,switchAnimation,(void))

int Actor_obj::getNumFrames( ){
	HX_STACK_PUSH("Actor::getNumFrames","com/stencyl/models/Actor.hx",1012);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1012)
	if ((::Std_obj::is(this->currAnimation,hx::ClassOf< ::com::stencyl::graphics::AbstractAnimation >()))){
		HX_STACK_LINE(1014)
		return (hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->getNumFrames();
	}
	else{
		HX_STACK_LINE(1019)
		return (int)0;
	}
	HX_STACK_LINE(1012)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getNumFrames,return )

Void Actor_obj::setCurrentFrame( int frame){
{
		HX_STACK_PUSH("Actor::setCurrentFrame","com/stencyl/models/Actor.hx",1004);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frame,"frame");
		HX_STACK_LINE(1004)
		if ((::Std_obj::is(this->currAnimation,hx::ClassOf< ::com::stencyl::graphics::AbstractAnimation >()))){
			HX_STACK_LINE(1006)
			(hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->setFrame(frame);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setCurrentFrame,(void))

int Actor_obj::getCurrentFrame( ){
	HX_STACK_PUSH("Actor::getCurrentFrame","com/stencyl/models/Actor.hx",991);
	HX_STACK_THIS(this);
	HX_STACK_LINE(991)
	if ((::Std_obj::is(this->currAnimation,hx::ClassOf< ::com::stencyl::graphics::AbstractAnimation >()))){
		HX_STACK_LINE(993)
		return (hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->getCurrentFrame();
	}
	else{
		HX_STACK_LINE(998)
		return (int)0;
	}
	HX_STACK_LINE(991)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getCurrentFrame,return )

bool Actor_obj::isAnimationPlaying( ){
	HX_STACK_PUSH("Actor::isAnimationPlaying","com/stencyl/models/Actor.hx",978);
	HX_STACK_THIS(this);
	HX_STACK_LINE(978)
	if ((::Std_obj::is(this->currAnimation,hx::ClassOf< ::com::stencyl::graphics::AbstractAnimation >()))){
		HX_STACK_LINE(980)
		return !((hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->isFinished());
	}
	else{
		HX_STACK_LINE(985)
		return true;
	}
	HX_STACK_LINE(978)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isAnimationPlaying,return )

Void Actor_obj::switchToDefaultAnimation( ){
{
		HX_STACK_PUSH("Actor::switchToDefaultAnimation","com/stencyl/models/Actor.hx",955);
		HX_STACK_THIS(this);
		HX_STACK_LINE(955)
		if (((bool((this->sprite != null())) && bool((::Lambda_obj::count(this->sprite->animations,null()) > (int)0))))){
			HX_STACK_LINE(959)
			::com::stencyl::models::actor::Animation anim = this->sprite->animations->get(this->sprite->defaultAnimation);		HX_STACK_VAR(anim,"anim");
			HX_STACK_LINE(962)
			if (((anim == null()))){
				struct _Function_3_1{
					inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",964);
						{
							HX_STACK_LINE(964)
							Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->sprite->animations);		HX_STACK_VAR(_e,"_e");

							HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_e)
							Dynamic run(){
								HX_STACK_PUSH("*::_Function_4_1","com/stencyl/models/Actor.hx",964);
								{
									HX_STACK_LINE(964)
									return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(964)
							return  Dynamic(new _Function_4_1(_e));
						}
						return null();
					}
				};
				HX_STACK_LINE(963)
				for(::cpp::FastIterator_obj< ::com::stencyl::models::actor::Animation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::actor::Animation >((_Function_3_1::Block(this))());  __it->hasNext(); ){
					::com::stencyl::models::actor::Animation a = __it->next();
					{
						HX_STACK_LINE(966)
						anim = a;
						HX_STACK_LINE(967)
						break;
					}
;
				}
			}
			HX_STACK_LINE(971)
			this->defaultAnim = (hx::TCast< com::stencyl::models::actor::Animation >::cast(anim))->animName;
			HX_STACK_LINE(972)
			this->switchAnimation(this->defaultAnim);
			HX_STACK_LINE(973)
			this->setCurrentFrame((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,switchToDefaultAnimation,(void))

Void Actor_obj::setAnimation( ::String name){
{
		HX_STACK_PUSH("Actor::setAnimation","com/stencyl/models/Actor.hx",950);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(950)
		this->switchAnimation(name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setAnimation,(void))

::String Actor_obj::getAnimation( ){
	HX_STACK_PUSH("Actor::getAnimation","com/stencyl/models/Actor.hx",945);
	HX_STACK_THIS(this);
	HX_STACK_LINE(945)
	return this->currAnimationName;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAnimation,return )

Void Actor_obj::addAnimation( ::String name,::flash::display::DisplayObject sprite){
{
		HX_STACK_PUSH("Actor::addAnimation","com/stencyl/models/Actor.hx",940);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(sprite,"sprite");
		HX_STACK_LINE(940)
		this->animationMap->set(name,sprite);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,addAnimation,(void))

Void Actor_obj::initBody( int groupID,bool isSensor,bool isStationary,bool isKinematic,bool canRotate,Dynamic shape){
{
		HX_STACK_PUSH("Actor::initBody","com/stencyl/models/Actor.hx",868);
		HX_STACK_THIS(this);
		HX_STACK_ARG(groupID,"groupID");
		HX_STACK_ARG(isSensor,"isSensor");
		HX_STACK_ARG(isStationary,"isStationary");
		HX_STACK_ARG(isKinematic,"isKinematic");
		HX_STACK_ARG(canRotate,"canRotate");
		HX_STACK_ARG(shape,"shape");
		HX_STACK_LINE(869)
		::box2D::dynamics::B2BodyDef bodyDef = ::box2D::dynamics::B2BodyDef_obj::__new();		HX_STACK_VAR(bodyDef,"bodyDef");
		HX_STACK_LINE(871)
		bodyDef->groupID = groupID;
		HX_STACK_LINE(872)
		bodyDef->position->x = ::com::stencyl::Engine_obj::toPhysicalUnits(this->get_x());
		HX_STACK_LINE(873)
		bodyDef->position->y = ::com::stencyl::Engine_obj::toPhysicalUnits(this->get_y());
		HX_STACK_LINE(875)
		bodyDef->angle = (int)0;
		HX_STACK_LINE(876)
		bodyDef->fixedRotation = !(canRotate);
		HX_STACK_LINE(877)
		bodyDef->allowSleep = false;
		HX_STACK_LINE(879)
		if ((isStationary)){
			HX_STACK_LINE(880)
			bodyDef->type = ::box2D::dynamics::B2Body_obj::b2_staticBody;
		}
		else{
			HX_STACK_LINE(884)
			if ((isKinematic)){
				HX_STACK_LINE(885)
				bodyDef->type = ::box2D::dynamics::B2Body_obj::b2_kinematicBody;
			}
			else{
				HX_STACK_LINE(890)
				bodyDef->type = ::box2D::dynamics::B2Body_obj::b2_dynamicBody;
			}
		}
		HX_STACK_LINE(894)
		if ((::Std_obj::is(shape,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(896)
			bodyDef->userData = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(897)
			this->body = ::com::stencyl::Engine_obj::engine->world->createBody(bodyDef);
			HX_STACK_LINE(899)
			Dynamic arr = hx::TCastToArray(shape);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(901)
			{
				HX_STACK_LINE(901)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(901)
				while(((_g < arr->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(901)
					Dynamic item = arr->__GetItem(_g);		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(901)
					++(_g);
					HX_STACK_LINE(903)
					::box2D::dynamics::B2FixtureDef fixtureDef = ::box2D::dynamics::B2FixtureDef_obj::__new();		HX_STACK_VAR(fixtureDef,"fixtureDef");
					HX_STACK_LINE(904)
					fixtureDef->shape = item;
					HX_STACK_LINE(905)
					fixtureDef->friction = 1.0;
					HX_STACK_LINE(906)
					fixtureDef->density = 0.1;
					HX_STACK_LINE(907)
					fixtureDef->restitution = (int)0;
					HX_STACK_LINE(908)
					fixtureDef->isSensor = false;
					HX_STACK_LINE(909)
					fixtureDef->groupID = ::com::stencyl::models::GameModel_obj::TERRAIN_ID;
					HX_STACK_LINE(910)
					fixtureDef->userData = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(912)
					this->body->createFixture(fixtureDef);
				}
			}
		}
		else{
			HX_STACK_LINE(918)
			::box2D::dynamics::B2FixtureDef fixtureDef = ::box2D::dynamics::B2FixtureDef_obj::__new();		HX_STACK_VAR(fixtureDef,"fixtureDef");
			HX_STACK_LINE(919)
			fixtureDef->shape = shape;
			HX_STACK_LINE(920)
			fixtureDef->friction = 1.0;
			HX_STACK_LINE(921)
			fixtureDef->density = 0.1;
			HX_STACK_LINE(922)
			fixtureDef->restitution = (int)0;
			HX_STACK_LINE(923)
			fixtureDef->isSensor = isSensor;
			HX_STACK_LINE(924)
			fixtureDef->groupID = ::com::stencyl::models::GameModel_obj::INHERIT_ID;
			HX_STACK_LINE(925)
			fixtureDef->userData = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(927)
			bodyDef->userData = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(928)
			this->body = ::com::stencyl::Engine_obj::engine->world->createBody(bodyDef);
			HX_STACK_LINE(929)
			this->body->createFixture(fixtureDef);
		}
		HX_STACK_LINE(932)
		this->bodyDef = bodyDef;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Actor_obj,initBody,(void))

Void Actor_obj::initFromBody( ::box2D::dynamics::B2BodyDef bodyDef){
{
		HX_STACK_PUSH("Actor::initFromBody","com/stencyl/models/Actor.hx",860);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bodyDef,"bodyDef");
		HX_STACK_LINE(861)
		bodyDef->allowSleep = false;
		HX_STACK_LINE(862)
		bodyDef->userData = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(863)
		this->bodyDef = bodyDef;
		HX_STACK_LINE(864)
		this->body = ::com::stencyl::Engine_obj::engine->world->createBody(bodyDef);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,initFromBody,(void))

Void Actor_obj::initScripts( ){
{
		HX_STACK_PUSH("Actor::initScripts","com/stencyl/models/Actor.hx",824);
		HX_STACK_THIS(this);
		HX_STACK_LINE(825)
		this->handlesCollisions = true;
		HX_STACK_LINE(826)
		this->behaviors->initScripts();
		HX_STACK_LINE(828)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(830)
		while(((r < this->whenCreatedListeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(832)
			try{
				HX_STACK_LINE(834)
				Dynamic f = this->whenCreatedListeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(835)
				f(this->whenCreatedListeners).Cast< Void >();
				HX_STACK_LINE(837)
				if (((::com::stencyl::utils::Utils_obj::indexOf(this->whenCreatedListeners,f) == (int)-1))){
					HX_STACK_LINE(838)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(844)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Actor.hx"),845,HX_CSTRING("com.stencyl.models.Actor"),HX_CSTRING("initScripts")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(848)
			(r)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,initScripts,(void))

Void Actor_obj::addAnim( int animID,::String name,::flash::display::BitmapData imgData,hx::Null< int >  __o_frameCount,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY,Array< int > durations,hx::Null< bool >  __o_looping,::haxe::ds::IntMap shapes){
int frameCount = __o_frameCount.Default(1);
int frameWidth = __o_frameWidth.Default(0);
int frameHeight = __o_frameHeight.Default(0);
Float originX = __o_originX.Default(0);
Float originY = __o_originY.Default(0);
bool looping = __o_looping.Default(true);
	HX_STACK_PUSH("Actor::addAnim","com/stencyl/models/Actor.hx",737);
	HX_STACK_THIS(this);
	HX_STACK_ARG(animID,"animID");
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(imgData,"imgData");
	HX_STACK_ARG(frameCount,"frameCount");
	HX_STACK_ARG(frameWidth,"frameWidth");
	HX_STACK_ARG(frameHeight,"frameHeight");
	HX_STACK_ARG(originX,"originX");
	HX_STACK_ARG(originY,"originY");
	HX_STACK_ARG(durations,"durations");
	HX_STACK_ARG(looping,"looping");
	HX_STACK_ARG(shapes,"shapes");
{
		HX_STACK_LINE(738)
		if (((shapes != null()))){
			HX_STACK_LINE(740)
			Dynamic arr = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(742)
			if ((this->isLightweight)){
				struct _Function_3_1{
					inline static Dynamic Block( ::haxe::ds::IntMap &shapes){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",744);
						{
							HX_STACK_LINE(744)
							Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(shapes);		HX_STACK_VAR(_e,"_e");

							HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_e)
							Dynamic run(){
								HX_STACK_PUSH("*::_Function_4_1","com/stencyl/models/Actor.hx",744);
								{
									HX_STACK_LINE(744)
									return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(744)
							return  Dynamic(new _Function_4_1(_e));
						}
						return null();
					}
				};
				HX_STACK_LINE(743)
				for(::cpp::FastIterator_obj< ::com::stencyl::models::collision::Hitbox > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::collision::Hitbox >((_Function_3_1::Block(shapes))());  __it->hasNext(); ){
					::com::stencyl::models::collision::Hitbox s = __it->next();
					{
						HX_STACK_LINE(746)
						if (((bool(::Std_obj::is(s,hx::ClassOf< ::com::stencyl::models::collision::Hitbox >())) && bool(this->isLightweight)))){
							HX_STACK_LINE(748)
							s = (hx::TCast< com::stencyl::models::collision::Hitbox >::cast(s))->clone();
							HX_STACK_LINE(749)
							s->assignTo(hx::ObjectPtr<OBJ_>(this));
						}
						HX_STACK_LINE(752)
						arr->__Field(HX_CSTRING("push"),true)(s);
					}
;
				}
			}
			else{
				struct _Function_3_1{
					inline static Dynamic Block( ::haxe::ds::IntMap &shapes){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",758);
						{
							HX_STACK_LINE(758)
							Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(shapes);		HX_STACK_VAR(_e,"_e");

							HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_e)
							Dynamic run(){
								HX_STACK_PUSH("*::_Function_4_1","com/stencyl/models/Actor.hx",758);
								{
									HX_STACK_LINE(758)
									return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(758)
							return  Dynamic(new _Function_4_1(_e));
						}
						return null();
					}
				};
				HX_STACK_LINE(757)
				for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >((_Function_3_1::Block(shapes))());  __it->hasNext(); ){
					Dynamic s = __it->next();
					arr->__Field(HX_CSTRING("push"),true)(s);
				}
			}
			HX_STACK_LINE(764)
			if ((this->isLightweight)){
				HX_STACK_LINE(765)
				this->shapeMap->set(name,::com::stencyl::models::collision::Masklist_obj::__new(arr));
			}
			else{
				HX_STACK_LINE(770)
				this->shapeMap->set(name,arr);
			}
		}
		HX_STACK_LINE(775)
		if (((bool((bool((imgData == null())) || bool((imgData->get_width() <= (int)0)))) || bool((imgData->get_height() <= (int)0))))){
			HX_STACK_LINE(780)
			this->animationMap->set(name,::com::stencyl::graphics::BitmapAnimation_obj::__new(::flash::display::BitmapData_obj::__new((int)16,(int)16,null(),null(),null()),(int)1,Array_obj< int >::__new().Add((int)1000000),false,null()));
			HX_STACK_LINE(781)
			this->originMap->set(name,::box2D::common::math::B2Vec2_obj::__new(originX,originY));
			HX_STACK_LINE(782)
			return null();
		}
		HX_STACK_LINE(786)
		::openfl::display::Tilesheet tilesheet = ::openfl::display::Tilesheet_obj::__new(imgData);		HX_STACK_VAR(tilesheet,"tilesheet");
		HX_STACK_LINE(788)
		frameWidth = ::Std_obj::_int((Float(imgData->get_width()) / Float(frameCount)));
		HX_STACK_LINE(790)
		{
			HX_STACK_LINE(790)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(790)
			while(((_g < frameCount))){
				HX_STACK_LINE(790)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(792)
				tilesheet->addTileRect(::flash::geom::Rectangle_obj::__new((frameWidth * i),(int)0,frameWidth,(frameHeight * ::com::stencyl::Engine_obj::SCALE)),null());
			}
		}
		HX_STACK_LINE(795)
		::com::stencyl::graphics::SheetAnimation sprite = ::com::stencyl::graphics::SheetAnimation_obj::__new(tilesheet,durations,::Std_obj::_int(frameWidth),::Std_obj::_int((frameHeight * ::com::stencyl::Engine_obj::SCALE)),looping,(  ((this->sprite->animations->get(animID)->__Field(HX_CSTRING("sync"),true))) ? ::com::stencyl::models::actor::Animation(this->sprite->animations->get(animID)) : ::com::stencyl::models::actor::Animation(null()) ));		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(805)
		this->animationMap->set(name,sprite);
		HX_STACK_LINE(820)
		this->originMap->set(name,::box2D::common::math::B2Vec2_obj::__new(originX,originY));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(Actor_obj,addAnim,(void))

Void Actor_obj::resetListeners( ){
{
		HX_STACK_PUSH("Actor::resetListeners","com/stencyl/models/Actor.hx",678);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",679);
				{
					HX_STACK_LINE(679)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->allListeners);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/models/Actor.hx",679);
						{
							HX_STACK_LINE(679)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(679)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(679)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			int key = __it->next();
			this->allListeners->remove(key);
		}
		HX_STACK_LINE(684)
		while(((this->allListenerReferences->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(685)
			this->allListenerReferences->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(689)
		while(((this->whenUpdatedListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(690)
			this->whenUpdatedListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(694)
		while(((this->whenDrawingListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(695)
			this->whenDrawingListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(699)
		while(((this->whenKilledListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(700)
			this->whenKilledListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(704)
		while(((this->mouseOverListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(705)
			this->mouseOverListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(709)
		while(((this->positionListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(710)
			this->positionListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(714)
		while(((this->collisionListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(715)
			this->collisionListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(719)
		this->positionListenerCount = (int)0;
		HX_STACK_LINE(720)
		this->collisionListenerCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,resetListeners,(void))

Void Actor_obj::destroy( ){
{
		HX_STACK_PUSH("Actor::destroy","com/stencyl/models/Actor.hx",600);
		HX_STACK_THIS(this);
		HX_STACK_LINE(601)
		if ((this->destroyed)){
			HX_STACK_LINE(602)
			return null();
		}
		HX_STACK_LINE(606)
		this->destroyed = true;
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",608);
				{
					HX_STACK_LINE(608)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/models/Actor.hx",608);
						{
							HX_STACK_LINE(608)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(608)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(608)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			Dynamic anim = __it->next();
			anim->__FieldRef(HX_CSTRING("visible")) = false;
		}
		HX_STACK_LINE(613)
		::com::stencyl::utils::Utils_obj::removeAllChildren(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(615)
		if (((bool((this->body != null())) && bool(!(this->isLightweight))))){
			HX_STACK_LINE(617)
			::box2D::dynamics::contacts::B2ContactEdge contact = this->body->getContactList();		HX_STACK_VAR(contact,"contact");
			HX_STACK_LINE(619)
			while(((contact != null()))){
				HX_STACK_LINE(621)
				::com::stencyl::Engine_obj::engine->world->m_contactManager->m_contactListener->endContact(contact->contact);
				HX_STACK_LINE(622)
				contact = contact->next;
			}
			HX_STACK_LINE(625)
			::com::stencyl::Engine_obj::engine->world->destroyBody(this->body);
		}
		HX_STACK_LINE(628)
		this->cancelTweens();
		HX_STACK_LINE(630)
		::com::stencyl::models::Actor_obj::lastCollided = null();
		HX_STACK_LINE(632)
		this->shapeMap = null();
		HX_STACK_LINE(633)
		this->originMap = null();
		HX_STACK_LINE(634)
		this->defaultAnim = null();
		HX_STACK_LINE(635)
		this->animationMap = null();
		HX_STACK_LINE(636)
		this->currAnimationAsAnim = null();
		HX_STACK_LINE(637)
		this->currAnimation = null();
		HX_STACK_LINE(638)
		this->currOffset = null();
		HX_STACK_LINE(639)
		this->currOrigin = null();
		HX_STACK_LINE(640)
		this->body = null();
		HX_STACK_LINE(641)
		this->sprite = null();
		HX_STACK_LINE(642)
		this->contacts = null();
		HX_STACK_LINE(643)
		this->regionContacts = null();
		HX_STACK_LINE(644)
		this->contactCount = (int)0;
		HX_STACK_LINE(645)
		this->collisionsCount = (int)0;
		HX_STACK_LINE(647)
		this->transformPoint = null();
		HX_STACK_LINE(648)
		this->transformMatrix = null();
		HX_STACK_LINE(650)
		this->whenCreatedListeners = null();
		HX_STACK_LINE(651)
		this->whenUpdatedListeners = null();
		HX_STACK_LINE(652)
		this->whenDrawingListeners = null();
		HX_STACK_LINE(653)
		this->whenKilledListeners = null();
		HX_STACK_LINE(654)
		this->mouseOverListeners = null();
		HX_STACK_LINE(655)
		this->positionListeners = null();
		HX_STACK_LINE(656)
		this->collisionListeners = null();
		HX_STACK_LINE(657)
		this->allListeners = null();
		HX_STACK_LINE(658)
		this->allListenerReferences = null();
		HX_STACK_LINE(660)
		this->positionListenerCount = (int)0;
		HX_STACK_LINE(661)
		this->collisionListenerCount = (int)0;
		HX_STACK_LINE(663)
		this->registry = null();
		HX_STACK_LINE(665)
		this->collisions = null();
		HX_STACK_LINE(666)
		this->simpleCollisions = null();
		HX_STACK_LINE(668)
		if (((this->bodyDef != null()))){
			HX_STACK_LINE(670)
			this->bodyDef->userData = null();
			HX_STACK_LINE(671)
			this->bodyDef = null();
		}
		HX_STACK_LINE(674)
		this->behaviors->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,destroy,(void))

int Actor_obj::GROUP_OFFSET;

::com::stencyl::models::Actor Actor_obj::lastCollided;

::box2D::collision::shapes::B2PolygonShape Actor_obj::createBox( Float width,Float height){
	HX_STACK_PUSH("Actor::createBox","com/stencyl/models/Actor.hx",853);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_LINE(854)
	::box2D::collision::shapes::B2PolygonShape boxShape = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(boxShape,"boxShape");
	HX_STACK_LINE(855)
	boxShape->setAsBox(::com::stencyl::Engine_obj::toPhysicalUnits((Float(width) / Float((int)2))),::com::stencyl::Engine_obj::toPhysicalUnits((Float(height) / Float((int)2))));
	HX_STACK_LINE(856)
	return boxShape;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,createBox,return )

::box2D::collision::B2WorldManifold Actor_obj::manifold;


Actor_obj::Actor_obj()
{
}

void Actor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Actor);
	HX_MARK_MEMBER_NAME(allowAdd,"allowAdd");
	HX_MARK_MEMBER_NAME(simpleCollisions,"simpleCollisions");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_moveY,"_moveY");
	HX_MARK_MEMBER_NAME(_moveX,"_moveX");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_mask,"_mask");
	HX_MARK_MEMBER_NAME(HITBOX,"HITBOX");
	HX_MARK_MEMBER_NAME(collisionsCount,"collisionsCount");
	HX_MARK_MEMBER_NAME(contactCount,"contactCount");
	HX_MARK_MEMBER_NAME(zero,"zero");
	HX_MARK_MEMBER_NAME(dummy,"dummy");
	HX_MARK_MEMBER_NAME(collisions,"collisions");
	HX_MARK_MEMBER_NAME(regionContacts,"regionContacts");
	HX_MARK_MEMBER_NAME(contacts,"contacts");
	HX_MARK_MEMBER_NAME(handlesCollisions,"handlesCollisions");
	HX_MARK_MEMBER_NAME(bodyScale,"bodyScale");
	HX_MARK_MEMBER_NAME(md,"md");
	HX_MARK_MEMBER_NAME(bodyDef,"bodyDef");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(isOnScreenCache,"isOnScreenCache");
	HX_MARK_MEMBER_NAME(lastSceneState,"lastSceneState");
	HX_MARK_MEMBER_NAME(lastScreenState,"lastScreenState");
	HX_MARK_MEMBER_NAME(mouseState,"mouseState");
	HX_MARK_MEMBER_NAME(collisionListenerCount,"collisionListenerCount");
	HX_MARK_MEMBER_NAME(positionListenerCount,"positionListenerCount");
	HX_MARK_MEMBER_NAME(collisionListeners,"collisionListeners");
	HX_MARK_MEMBER_NAME(positionListeners,"positionListeners");
	HX_MARK_MEMBER_NAME(mouseOverListeners,"mouseOverListeners");
	HX_MARK_MEMBER_NAME(whenKilledListeners,"whenKilledListeners");
	HX_MARK_MEMBER_NAME(whenDrawingListeners,"whenDrawingListeners");
	HX_MARK_MEMBER_NAME(whenUpdatedListeners,"whenUpdatedListeners");
	HX_MARK_MEMBER_NAME(whenCreatedListeners,"whenCreatedListeners");
	HX_MARK_MEMBER_NAME(allListenerReferences,"allListenerReferences");
	HX_MARK_MEMBER_NAME(allListeners,"allListeners");
	HX_MARK_MEMBER_NAME(registry,"registry");
	HX_MARK_MEMBER_NAME(behaviors,"behaviors");
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(drawMatrix,"drawMatrix");
	HX_MARK_MEMBER_NAME(updateMatrix,"updateMatrix");
	HX_MARK_MEMBER_NAME(transformMatrix,"transformMatrix");
	HX_MARK_MEMBER_NAME(transformPoint,"transformPoint");
	HX_MARK_MEMBER_NAME(transformObj,"transformObj");
	HX_MARK_MEMBER_NAME(currOffset,"currOffset");
	HX_MARK_MEMBER_NAME(currOrigin,"currOrigin");
	HX_MARK_MEMBER_NAME(defaultAnim,"defaultAnim");
	HX_MARK_MEMBER_NAME(originMap,"originMap");
	HX_MARK_MEMBER_NAME(shapeMap,"shapeMap");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(animsBackedUp,"animsBackedUp");
	HX_MARK_MEMBER_NAME(backupAnimationMap,"backupAnimationMap");
	HX_MARK_MEMBER_NAME(animationMap,"animationMap");
	HX_MARK_MEMBER_NAME(currAnimationName,"currAnimationName");
	HX_MARK_MEMBER_NAME(currAnimation,"currAnimation");
	HX_MARK_MEMBER_NAME(currAnimationAsAnim,"currAnimationAsAnim");
	HX_MARK_MEMBER_NAME(cacheHeight,"cacheHeight");
	HX_MARK_MEMBER_NAME(cacheWidth,"cacheWidth");
	HX_MARK_MEMBER_NAME(activePositionTweens,"activePositionTweens");
	HX_MARK_MEMBER_NAME(activeAngleTweens,"activeAngleTweens");
	HX_MARK_MEMBER_NAME(tweenAngle,"tweenAngle");
	HX_MARK_MEMBER_NAME(tweenLoc,"tweenLoc");
	HX_MARK_MEMBER_NAME(continuousCollision,"continuousCollision");
	HX_MARK_MEMBER_NAME(rSpeed,"rSpeed");
	HX_MARK_MEMBER_NAME(ySpeed,"ySpeed");
	HX_MARK_MEMBER_NAME(xSpeed,"xSpeed");
	HX_MARK_MEMBER_NAME(colY,"colY");
	HX_MARK_MEMBER_NAME(colX,"colX");
	HX_MARK_MEMBER_NAME(lastScale,"lastScale");
	HX_MARK_MEMBER_NAME(lastAngle,"lastAngle");
	HX_MARK_MEMBER_NAME(lastY,"lastY");
	HX_MARK_MEMBER_NAME(lastX,"lastX");
	HX_MARK_MEMBER_NAME(realScaleY,"realScaleY");
	HX_MARK_MEMBER_NAME(realScaleX,"realScaleX");
	HX_MARK_MEMBER_NAME(realAngle,"realAngle");
	HX_MARK_MEMBER_NAME(realY,"realY");
	HX_MARK_MEMBER_NAME(realX,"realX");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(resetOrigin,"resetOrigin");
	HX_MARK_MEMBER_NAME(solid,"solid");
	HX_MARK_MEMBER_NAME(collidable,"collidable");
	HX_MARK_MEMBER_NAME(ignoreGravity,"ignoreGravity");
	HX_MARK_MEMBER_NAME(fixedRotation,"fixedRotation");
	HX_MARK_MEMBER_NAME(dying,"dying");
	HX_MARK_MEMBER_NAME(dead,"dead");
	HX_MARK_MEMBER_NAME(autoScale,"autoScale");
	HX_MARK_MEMBER_NAME(isLightweight,"isLightweight");
	HX_MARK_MEMBER_NAME(killLeaveScreen,"killLeaveScreen");
	HX_MARK_MEMBER_NAME(isCamera,"isCamera");
	HX_MARK_MEMBER_NAME(alwaysSimulate,"alwaysSimulate");
	HX_MARK_MEMBER_NAME(isHUD,"isHUD");
	HX_MARK_MEMBER_NAME(drawActor,"drawActor");
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_MEMBER_NAME(isTerrain,"isTerrain");
	HX_MARK_MEMBER_NAME(isTerrainRegion,"isTerrainRegion");
	HX_MARK_MEMBER_NAME(isRegion,"isRegion");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(recycled,"recycled");
	HX_MARK_MEMBER_NAME(groupsToCollideWith,"groupsToCollideWith");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(typeID,"typeID");
	HX_MARK_MEMBER_NAME(layerID,"layerID");
	HX_MARK_MEMBER_NAME(groupID,"groupID");
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(createTime,"createTime");
	HX_MARK_MEMBER_NAME(engine,"engine");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Actor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(allowAdd,"allowAdd");
	HX_VISIT_MEMBER_NAME(simpleCollisions,"simpleCollisions");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_moveY,"_moveY");
	HX_VISIT_MEMBER_NAME(_moveX,"_moveX");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_mask,"_mask");
	HX_VISIT_MEMBER_NAME(HITBOX,"HITBOX");
	HX_VISIT_MEMBER_NAME(collisionsCount,"collisionsCount");
	HX_VISIT_MEMBER_NAME(contactCount,"contactCount");
	HX_VISIT_MEMBER_NAME(zero,"zero");
	HX_VISIT_MEMBER_NAME(dummy,"dummy");
	HX_VISIT_MEMBER_NAME(collisions,"collisions");
	HX_VISIT_MEMBER_NAME(regionContacts,"regionContacts");
	HX_VISIT_MEMBER_NAME(contacts,"contacts");
	HX_VISIT_MEMBER_NAME(handlesCollisions,"handlesCollisions");
	HX_VISIT_MEMBER_NAME(bodyScale,"bodyScale");
	HX_VISIT_MEMBER_NAME(md,"md");
	HX_VISIT_MEMBER_NAME(bodyDef,"bodyDef");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(isOnScreenCache,"isOnScreenCache");
	HX_VISIT_MEMBER_NAME(lastSceneState,"lastSceneState");
	HX_VISIT_MEMBER_NAME(lastScreenState,"lastScreenState");
	HX_VISIT_MEMBER_NAME(mouseState,"mouseState");
	HX_VISIT_MEMBER_NAME(collisionListenerCount,"collisionListenerCount");
	HX_VISIT_MEMBER_NAME(positionListenerCount,"positionListenerCount");
	HX_VISIT_MEMBER_NAME(collisionListeners,"collisionListeners");
	HX_VISIT_MEMBER_NAME(positionListeners,"positionListeners");
	HX_VISIT_MEMBER_NAME(mouseOverListeners,"mouseOverListeners");
	HX_VISIT_MEMBER_NAME(whenKilledListeners,"whenKilledListeners");
	HX_VISIT_MEMBER_NAME(whenDrawingListeners,"whenDrawingListeners");
	HX_VISIT_MEMBER_NAME(whenUpdatedListeners,"whenUpdatedListeners");
	HX_VISIT_MEMBER_NAME(whenCreatedListeners,"whenCreatedListeners");
	HX_VISIT_MEMBER_NAME(allListenerReferences,"allListenerReferences");
	HX_VISIT_MEMBER_NAME(allListeners,"allListeners");
	HX_VISIT_MEMBER_NAME(registry,"registry");
	HX_VISIT_MEMBER_NAME(behaviors,"behaviors");
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(drawMatrix,"drawMatrix");
	HX_VISIT_MEMBER_NAME(updateMatrix,"updateMatrix");
	HX_VISIT_MEMBER_NAME(transformMatrix,"transformMatrix");
	HX_VISIT_MEMBER_NAME(transformPoint,"transformPoint");
	HX_VISIT_MEMBER_NAME(transformObj,"transformObj");
	HX_VISIT_MEMBER_NAME(currOffset,"currOffset");
	HX_VISIT_MEMBER_NAME(currOrigin,"currOrigin");
	HX_VISIT_MEMBER_NAME(defaultAnim,"defaultAnim");
	HX_VISIT_MEMBER_NAME(originMap,"originMap");
	HX_VISIT_MEMBER_NAME(shapeMap,"shapeMap");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(animsBackedUp,"animsBackedUp");
	HX_VISIT_MEMBER_NAME(backupAnimationMap,"backupAnimationMap");
	HX_VISIT_MEMBER_NAME(animationMap,"animationMap");
	HX_VISIT_MEMBER_NAME(currAnimationName,"currAnimationName");
	HX_VISIT_MEMBER_NAME(currAnimation,"currAnimation");
	HX_VISIT_MEMBER_NAME(currAnimationAsAnim,"currAnimationAsAnim");
	HX_VISIT_MEMBER_NAME(cacheHeight,"cacheHeight");
	HX_VISIT_MEMBER_NAME(cacheWidth,"cacheWidth");
	HX_VISIT_MEMBER_NAME(activePositionTweens,"activePositionTweens");
	HX_VISIT_MEMBER_NAME(activeAngleTweens,"activeAngleTweens");
	HX_VISIT_MEMBER_NAME(tweenAngle,"tweenAngle");
	HX_VISIT_MEMBER_NAME(tweenLoc,"tweenLoc");
	HX_VISIT_MEMBER_NAME(continuousCollision,"continuousCollision");
	HX_VISIT_MEMBER_NAME(rSpeed,"rSpeed");
	HX_VISIT_MEMBER_NAME(ySpeed,"ySpeed");
	HX_VISIT_MEMBER_NAME(xSpeed,"xSpeed");
	HX_VISIT_MEMBER_NAME(colY,"colY");
	HX_VISIT_MEMBER_NAME(colX,"colX");
	HX_VISIT_MEMBER_NAME(lastScale,"lastScale");
	HX_VISIT_MEMBER_NAME(lastAngle,"lastAngle");
	HX_VISIT_MEMBER_NAME(lastY,"lastY");
	HX_VISIT_MEMBER_NAME(lastX,"lastX");
	HX_VISIT_MEMBER_NAME(realScaleY,"realScaleY");
	HX_VISIT_MEMBER_NAME(realScaleX,"realScaleX");
	HX_VISIT_MEMBER_NAME(realAngle,"realAngle");
	HX_VISIT_MEMBER_NAME(realY,"realY");
	HX_VISIT_MEMBER_NAME(realX,"realX");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(resetOrigin,"resetOrigin");
	HX_VISIT_MEMBER_NAME(solid,"solid");
	HX_VISIT_MEMBER_NAME(collidable,"collidable");
	HX_VISIT_MEMBER_NAME(ignoreGravity,"ignoreGravity");
	HX_VISIT_MEMBER_NAME(fixedRotation,"fixedRotation");
	HX_VISIT_MEMBER_NAME(dying,"dying");
	HX_VISIT_MEMBER_NAME(dead,"dead");
	HX_VISIT_MEMBER_NAME(autoScale,"autoScale");
	HX_VISIT_MEMBER_NAME(isLightweight,"isLightweight");
	HX_VISIT_MEMBER_NAME(killLeaveScreen,"killLeaveScreen");
	HX_VISIT_MEMBER_NAME(isCamera,"isCamera");
	HX_VISIT_MEMBER_NAME(alwaysSimulate,"alwaysSimulate");
	HX_VISIT_MEMBER_NAME(isHUD,"isHUD");
	HX_VISIT_MEMBER_NAME(drawActor,"drawActor");
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
	HX_VISIT_MEMBER_NAME(isTerrain,"isTerrain");
	HX_VISIT_MEMBER_NAME(isTerrainRegion,"isTerrainRegion");
	HX_VISIT_MEMBER_NAME(isRegion,"isRegion");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(recycled,"recycled");
	HX_VISIT_MEMBER_NAME(groupsToCollideWith,"groupsToCollideWith");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(typeID,"typeID");
	HX_VISIT_MEMBER_NAME(layerID,"layerID");
	HX_VISIT_MEMBER_NAME(groupID,"groupID");
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(createTime,"createTime");
	HX_VISIT_MEMBER_NAME(engine,"engine");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Actor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		if (HX_FIELD_EQ(inName,"md") ) { return md; }
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"die") ) { return die_dyn(); }
		if (HX_FIELD_EQ(inName,"say") ) { return say_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"setY") ) { return setY_dyn(); }
		if (HX_FIELD_EQ(inName,"setX") ) { return setX_dyn(); }
		if (HX_FIELD_EQ(inName,"getY") ) { return getY_dyn(); }
		if (HX_FIELD_EQ(inName,"getX") ) { return getX_dyn(); }
		if (HX_FIELD_EQ(inName,"zero") ) { return zero; }
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		if (HX_FIELD_EQ(inName,"colY") ) { return colY; }
		if (HX_FIELD_EQ(inName,"colX") ) { return colX; }
		if (HX_FIELD_EQ(inName,"dead") ) { return dead; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mask") ) { return _mask; }
		if (HX_FIELD_EQ(inName,"shape") ) { return get_shape(); }
		if (HX_FIELD_EQ(inName,"shout") ) { return shout_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"getID") ) { return getID_dyn(); }
		if (HX_FIELD_EQ(inName,"dummy") ) { return dummy; }
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		if (HX_FIELD_EQ(inName,"lastY") ) { return lastY; }
		if (HX_FIELD_EQ(inName,"lastX") ) { return lastX; }
		if (HX_FIELD_EQ(inName,"realY") ) { return realY; }
		if (HX_FIELD_EQ(inName,"realX") ) { return realX; }
		if (HX_FIELD_EQ(inName,"solid") ) { return solid; }
		if (HX_FIELD_EQ(inName,"dying") ) { return dying; }
		if (HX_FIELD_EQ(inName,"isHUD") ) { return isHUD; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { return _moveY; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { return _moveX; }
		if (HX_FIELD_EQ(inName,"HITBOX") ) { return HITBOX; }
		if (HX_FIELD_EQ(inName,"moveBy") ) { return moveBy_dyn(); }
		if (HX_FIELD_EQ(inName,"spinBy") ) { return spinBy_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"spinTo") ) { return spinTo_dyn(); }
		if (HX_FIELD_EQ(inName,"growTo") ) { return growTo_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeTo") ) { return fadeTo_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"rSpeed") ) { return rSpeed; }
		if (HX_FIELD_EQ(inName,"ySpeed") ) { return ySpeed; }
		if (HX_FIELD_EQ(inName,"xSpeed") ) { return xSpeed; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"typeID") ) { return typeID; }
		if (HX_FIELD_EQ(inName,"engine") ) { return engine; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		if (HX_FIELD_EQ(inName,"isAlive") ) { return isAlive_dyn(); }
		if (HX_FIELD_EQ(inName,"isDying") ) { return isDying_dyn(); }
		if (HX_FIELD_EQ(inName,"getBody") ) { return getBody_dyn(); }
		if (HX_FIELD_EQ(inName,"unpause") ) { return unpause_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		if (HX_FIELD_EQ(inName,"addAnim") ) { return addAnim_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyDef") ) { return bodyDef; }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"layerID") ) { return layerID; }
		if (HX_FIELD_EQ(inName,"groupID") ) { return groupID; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"manifold") ) { return manifold; }
		if (HX_FIELD_EQ(inName,"allowAdd") ) { return allowAdd; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue") ) { return setValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getValue") ) { return getValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngle") ) { return setAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"getAngle") ) { return getAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"getGroup") ) { return getGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"isPaused") ) { return isPaused_dyn(); }
		if (HX_FIELD_EQ(inName,"initBody") ) { return initBody_dyn(); }
		if (HX_FIELD_EQ(inName,"contacts") ) { return contacts; }
		if (HX_FIELD_EQ(inName,"registry") ) { return registry; }
		if (HX_FIELD_EQ(inName,"shapeMap") ) { return shapeMap; }
		if (HX_FIELD_EQ(inName,"tweenLoc") ) { return tweenLoc; }
		if (HX_FIELD_EQ(inName,"isCamera") ) { return isCamera; }
		if (HX_FIELD_EQ(inName,"isRegion") ) { return isRegion; }
		if (HX_FIELD_EQ(inName,"recycled") ) { return recycled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"createBox") ) { return createBox_dyn(); }
		if (HX_FIELD_EQ(inName,"resetReal") ) { return resetReal_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shape") ) { return set_shape_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shape") ) { return get_shape_dyn(); }
		if (HX_FIELD_EQ(inName,"isInScene") ) { return isInScene_dyn(); }
		if (HX_FIELD_EQ(inName,"setFilter") ) { return setFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"drawImage") ) { return drawImage_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleBody") ) { return scaleBody_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyScale") ) { return bodyScale; }
		if (HX_FIELD_EQ(inName,"behaviors") ) { return behaviors; }
		if (HX_FIELD_EQ(inName,"originMap") ) { return originMap; }
		if (HX_FIELD_EQ(inName,"lastScale") ) { return lastScale; }
		if (HX_FIELD_EQ(inName,"lastAngle") ) { return lastAngle; }
		if (HX_FIELD_EQ(inName,"realAngle") ) { return realAngle; }
		if (HX_FIELD_EQ(inName,"autoScale") ) { return autoScale; }
		if (HX_FIELD_EQ(inName,"drawActor") ) { return drawActor; }
		if (HX_FIELD_EQ(inName,"destroyed") ) { return destroyed; }
		if (HX_FIELD_EQ(inName,"isTerrain") ) { return isTerrain; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return isOnScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"drawsImage") ) { return drawsImage_dyn(); }
		if (HX_FIELD_EQ(inName,"accelerate") ) { return accelerate_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenY") ) { return getScreenY_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenX") ) { return getScreenX_dyn(); }
		if (HX_FIELD_EQ(inName,"getYCenter") ) { return getYCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"getXCenter") ) { return getXCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"sendToBack") ) { return sendToBack_dyn(); }
		if (HX_FIELD_EQ(inName,"isPausable") ) { return isPausable_dyn(); }
		if (HX_FIELD_EQ(inName,"getLayerID") ) { return getLayerID_dyn(); }
		if (HX_FIELD_EQ(inName,"getGroupID") ) { return getGroupID_dyn(); }
		if (HX_FIELD_EQ(inName,"addContact") ) { return addContact_dyn(); }
		if (HX_FIELD_EQ(inName,"collisions") ) { return collisions; }
		if (HX_FIELD_EQ(inName,"mouseState") ) { return mouseState; }
		if (HX_FIELD_EQ(inName,"drawMatrix") ) { return drawMatrix; }
		if (HX_FIELD_EQ(inName,"currOffset") ) { return currOffset; }
		if (HX_FIELD_EQ(inName,"currOrigin") ) { return currOrigin; }
		if (HX_FIELD_EQ(inName,"cacheWidth") ) { return cacheWidth; }
		if (HX_FIELD_EQ(inName,"tweenAngle") ) { return tweenAngle; }
		if (HX_FIELD_EQ(inName,"realScaleY") ) { return realScaleY; }
		if (HX_FIELD_EQ(inName,"realScaleX") ) { return realScaleX; }
		if (HX_FIELD_EQ(inName,"collidable") ) { return collidable; }
		if (HX_FIELD_EQ(inName,"createTime") ) { return createTime; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"moveActorTo") ) { return moveActorTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveActorBy") ) { return moveActorBy_dyn(); }
		if (HX_FIELD_EQ(inName,"collideInto") ) { return collideInto_dyn(); }
		if (HX_FIELD_EQ(inName,"collideWith") ) { return collideWith_dyn(); }
		if (HX_FIELD_EQ(inName,"setLocation") ) { return setLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"hasBehavior") ) { return hasBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"addBehavior") ) { return addBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"isMouseDown") ) { return isMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"isMouseOver") ) { return isMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"setFriction") ) { return setFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"applyTorque") ) { return applyTorque_dyn(); }
		if (HX_FIELD_EQ(inName,"accelerateY") ) { return accelerateY_dyn(); }
		if (HX_FIELD_EQ(inName,"accelerateX") ) { return accelerateX_dyn(); }
		if (HX_FIELD_EQ(inName,"setVelocity") ) { return setVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"moveToLayer") ) { return moveToLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getIsRegion") ) { return getIsRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"innerUpdate") ) { return innerUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"initScripts") ) { return initScripts_dyn(); }
		if (HX_FIELD_EQ(inName,"defaultAnim") ) { return defaultAnim; }
		if (HX_FIELD_EQ(inName,"cacheHeight") ) { return cacheHeight; }
		if (HX_FIELD_EQ(inName,"resetOrigin") ) { return resetOrigin; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"GROUP_OFFSET") ) { return GROUP_OFFSET; }
		if (HX_FIELD_EQ(inName,"lastCollided") ) { return lastCollided; }
		if (HX_FIELD_EQ(inName,"moveCollideY") ) { return moveCollideY_dyn(); }
		if (HX_FIELD_EQ(inName,"moveCollideX") ) { return moveCollideX_dyn(); }
		if (HX_FIELD_EQ(inName,"addCollision") ) { return addCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"collideTypes") ) { return collideTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"clearFilters") ) { return clearFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"cancelTweens") ) { return cancelTweens_dyn(); }
		if (HX_FIELD_EQ(inName,"isMouseHover") ) { return isMouseHover_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulse") ) { return applyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"setYVelocity") ) { return setYVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"setXVelocity") ) { return setXVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"getYVelocity") ) { return getYVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"getXVelocity") ) { return getXVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"sendBackward") ) { return sendBackward_dyn(); }
		if (HX_FIELD_EQ(inName,"bringForward") ) { return bringForward_dyn(); }
		if (HX_FIELD_EQ(inName,"bringToFront") ) { return bringToFront_dyn(); }
		if (HX_FIELD_EQ(inName,"contactCount") ) { return contactCount; }
		if (HX_FIELD_EQ(inName,"getNumFrames") ) { return getNumFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"setAnimation") ) { return setAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnimation") ) { return getAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return addAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"initFromBody") ) { return initFromBody_dyn(); }
		if (HX_FIELD_EQ(inName,"allListeners") ) { return allListeners; }
		if (HX_FIELD_EQ(inName,"updateMatrix") ) { return updateMatrix; }
		if (HX_FIELD_EQ(inName,"transformObj") ) { return transformObj; }
		if (HX_FIELD_EQ(inName,"animationMap") ) { return animationMap; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hasActorValue") ) { return hasActorValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getActorValue") ) { return getActorValue_dyn(); }
		if (HX_FIELD_EQ(inName,"setActorValue") ) { return setActorValue_dyn(); }
		if (HX_FIELD_EQ(inName,"setBounciness") ) { return setBounciness_dyn(); }
		if (HX_FIELD_EQ(inName,"getLayerOrder") ) { return getLayerOrder_dyn(); }
		if (HX_FIELD_EQ(inName,"removeContact") ) { return removeContact_dyn(); }
		if (HX_FIELD_EQ(inName,"animsBackedUp") ) { return animsBackedUp; }
		if (HX_FIELD_EQ(inName,"currAnimation") ) { return currAnimation; }
		if (HX_FIELD_EQ(inName,"ignoreGravity") ) { return ignoreGravity; }
		if (HX_FIELD_EQ(inName,"fixedRotation") ) { return fixedRotation; }
		if (HX_FIELD_EQ(inName,"isLightweight") ) { return isLightweight; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"anchorToScreen") ) { return anchorToScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"enableBehavior") ) { return enableBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"isMousePressed") ) { return isMousePressed_dyn(); }
		if (HX_FIELD_EQ(inName,"ignoresGravity") ) { return ignoresGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"enableRotation") ) { return enableRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"setOriginPoint") ) { return setOriginPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"internalUpdate") ) { return internalUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"resetListeners") ) { return resetListeners_dyn(); }
		if (HX_FIELD_EQ(inName,"regionContacts") ) { return regionContacts; }
		if (HX_FIELD_EQ(inName,"lastSceneState") ) { return lastSceneState; }
		if (HX_FIELD_EQ(inName,"transformPoint") ) { return transformPoint; }
		if (HX_FIELD_EQ(inName,"alwaysSimulate") ) { return alwaysSimulate; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alreadyCollided") ) { return alreadyCollided_dyn(); }
		if (HX_FIELD_EQ(inName,"alwaysSimulates") ) { return alwaysSimulates_dyn(); }
		if (HX_FIELD_EQ(inName,"disableBehavior") ) { return disableBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"isMouseReleased") ) { return isMouseReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"disableRotation") ) { return disableRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"getPhysicsWidth") ) { return getPhysicsWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"pushInDirection") ) { return pushInDirection_dyn(); }
		if (HX_FIELD_EQ(inName,"collisionsCount") ) { return collisionsCount; }
		if (HX_FIELD_EQ(inName,"switchAnimation") ) { return switchAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"setCurrentFrame") ) { return setCurrentFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentFrame") ) { return getCurrentFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"isOnScreenCache") ) { return isOnScreenCache; }
		if (HX_FIELD_EQ(inName,"lastScreenState") ) { return lastScreenState; }
		if (HX_FIELD_EQ(inName,"transformMatrix") ) { return transformMatrix; }
		if (HX_FIELD_EQ(inName,"killLeaveScreen") ) { return killLeaveScreen; }
		if (HX_FIELD_EQ(inName,"isTerrainRegion") ) { return isTerrainRegion; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"simpleCollisions") ) { return simpleCollisions; }
		if (HX_FIELD_EQ(inName,"moveActorTowards") ) { return moveActorTowards_dyn(); }
		if (HX_FIELD_EQ(inName,"collideTypesInto") ) { return collideTypesInto_dyn(); }
		if (HX_FIELD_EQ(inName,"registerListener") ) { return registerListener_dyn(); }
		if (HX_FIELD_EQ(inName,"setIgnoreGravity") ) { return setIgnoreGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"getPhysicsHeight") ) { return getPhysicsHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"followWithOffset") ) { return followWithOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"addRegionContact") ) { return addRegionContact_dyn(); }
		if (HX_FIELD_EQ(inName,"handleCollisions") ) { return handleCollisions_dyn(); }
		if (HX_FIELD_EQ(inName,"checkScreenState") ) { return checkScreenState_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isBehaviorEnabled") ) { return isBehaviorEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"getAngleInDegrees") ) { return getAngleInDegrees_dyn(); }
		if (HX_FIELD_EQ(inName,"handlesCollisions") ) { return handlesCollisions; }
		if (HX_FIELD_EQ(inName,"positionListeners") ) { return positionListeners; }
		if (HX_FIELD_EQ(inName,"currAnimationName") ) { return currAnimationName; }
		if (HX_FIELD_EQ(inName,"activeAngleTweens") ) { return activeAngleTweens; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"clearCollisionList") ) { return clearCollisionList_dyn(); }
		if (HX_FIELD_EQ(inName,"makeAlwaysSimulate") ) { return makeAlwaysSimulate_dyn(); }
		if (HX_FIELD_EQ(inName,"isAnchoredToScreen") ) { return isAnchoredToScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"unanchorFromScreen") ) { return unanchorFromScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAllListeners") ) { return removeAllListeners_dyn(); }
		if (HX_FIELD_EQ(inName,"enableAllBehaviors") ) { return enableAllBehaviors_dyn(); }
		if (HX_FIELD_EQ(inName,"enableActorDrawing") ) { return enableActorDrawing_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngularVelocity") ) { return setAngularVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"getAngularVelocity") ) { return getAngularVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"getIsTerrainRegion") ) { return getIsTerrainRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"isAnimationPlaying") ) { return isAnimationPlaying_dyn(); }
		if (HX_FIELD_EQ(inName,"collisionListeners") ) { return collisionListeners; }
		if (HX_FIELD_EQ(inName,"mouseOverListeners") ) { return mouseOverListeners; }
		if (HX_FIELD_EQ(inName,"backupAnimationMap") ) { return backupAnimationMap; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"disableActorDrawing") ) { return disableActorDrawing_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRegionContact") ) { return removeRegionContact_dyn(); }
		if (HX_FIELD_EQ(inName,"updateDrawingMatrix") ) { return updateDrawingMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"whenKilledListeners") ) { return whenKilledListeners; }
		if (HX_FIELD_EQ(inName,"currAnimationAsAnim") ) { return currAnimationAsAnim; }
		if (HX_FIELD_EQ(inName,"continuousCollision") ) { return continuousCollision; }
		if (HX_FIELD_EQ(inName,"groupsToCollideWith") ) { return groupsToCollideWith; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getLastCollidedActor") ) { return getLastCollidedActor_dyn(); }
		if (HX_FIELD_EQ(inName,"onTweenAngleComplete") ) { return onTweenAngleComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"whenDrawingListeners") ) { return whenDrawingListeners; }
		if (HX_FIELD_EQ(inName,"whenUpdatedListeners") ) { return whenUpdatedListeners; }
		if (HX_FIELD_EQ(inName,"whenCreatedListeners") ) { return whenCreatedListeners; }
		if (HX_FIELD_EQ(inName,"activePositionTweens") ) { return activePositionTweens; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"makeSometimesSimulate") ) { return makeSometimesSimulate_dyn(); }
		if (HX_FIELD_EQ(inName,"changeAngularVelocity") ) { return changeAngularVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTweenProperties") ) { return updateTweenProperties_dyn(); }
		if (HX_FIELD_EQ(inName,"positionListenerCount") ) { return positionListenerCount; }
		if (HX_FIELD_EQ(inName,"allListenerReferences") ) { return allListenerReferences; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"handleCollisionsSimple") ) { return handleCollisionsSimple_dyn(); }
		if (HX_FIELD_EQ(inName,"collisionListenerCount") ) { return collisionListenerCount; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onTweenPositionComplete") ) { return onTweenPositionComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulseInDirection") ) { return applyImpulseInDirection_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"switchToDefaultAnimation") ) { return switchToDefaultAnimation_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"killSelfAfterLeavingScreen") ) { return killSelfAfterLeavingScreen_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Actor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"md") ) { md=inValue.Cast< ::box2D::collision::shapes::B2MassData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zero") ) { zero=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::box2D::dynamics::B2Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colY") ) { colY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colX") ) { colX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dead") ) { dead=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::com::stencyl::models::actor::ActorType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mask") ) { _mask=inValue.Cast< ::com::stencyl::models::collision::Mask >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shape") ) { return set_shape(inValue); }
		if (HX_FIELD_EQ(inName,"dummy") ) { dummy=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::com::stencyl::graphics::fonts::Label >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastY") ) { lastY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastX") ) { lastX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"realY") ) { realY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"realX") ) { realX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { solid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dying") ) { dying=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isHUD") ) { isHUD=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { _moveY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { _moveX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HITBOX") ) { HITBOX=inValue.Cast< ::com::stencyl::models::collision::Mask >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::com::stencyl::models::actor::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rSpeed") ) { rSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ySpeed") ) { ySpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xSpeed") ) { xSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typeID") ) { typeID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"engine") ) { engine=inValue.Cast< ::com::stencyl::Engine >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bodyDef") ) { bodyDef=inValue.Cast< ::box2D::dynamics::B2BodyDef >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layerID") ) { layerID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"groupID") ) { groupID=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"manifold") ) { manifold=inValue.Cast< ::box2D::collision::B2WorldManifold >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowAdd") ) { allowAdd=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contacts") ) { contacts=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"registry") ) { registry=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shapeMap") ) { shapeMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tweenLoc") ) { tweenLoc=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isCamera") ) { isCamera=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isRegion") ) { isRegion=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"recycled") ) { recycled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bodyScale") ) { bodyScale=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"behaviors") ) { behaviors=inValue.Cast< ::com::stencyl::behavior::BehaviorManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originMap") ) { originMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastScale") ) { lastScale=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastAngle") ) { lastAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"realAngle") ) { realAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoScale") ) { autoScale=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawActor") ) { drawActor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isTerrain") ) { isTerrain=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"collisions") ) { collisions=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseState") ) { mouseState=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawMatrix") ) { drawMatrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currOffset") ) { currOffset=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currOrigin") ) { currOrigin=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cacheWidth") ) { cacheWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tweenAngle") ) { tweenAngle=inValue.Cast< ::com::stencyl::models::actor::AngleHolder >(); return inValue; }
		if (HX_FIELD_EQ(inName,"realScaleY") ) { realScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"realScaleX") ) { realScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collidable") ) { collidable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"createTime") ) { createTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultAnim") ) { defaultAnim=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cacheHeight") ) { cacheHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resetOrigin") ) { resetOrigin=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"GROUP_OFFSET") ) { GROUP_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastCollided") ) { lastCollided=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contactCount") ) { contactCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allListeners") ) { allListeners=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"updateMatrix") ) { updateMatrix=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transformObj") ) { transformObj=inValue.Cast< ::flash::geom::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animationMap") ) { animationMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"animsBackedUp") ) { animsBackedUp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currAnimation") ) { currAnimation=inValue.Cast< ::flash::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreGravity") ) { ignoreGravity=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixedRotation") ) { fixedRotation=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isLightweight") ) { isLightweight=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"regionContacts") ) { regionContacts=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastSceneState") ) { lastSceneState=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transformPoint") ) { transformPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alwaysSimulate") ) { alwaysSimulate=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collisionsCount") ) { collisionsCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isOnScreenCache") ) { isOnScreenCache=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastScreenState") ) { lastScreenState=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transformMatrix") ) { transformMatrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"killLeaveScreen") ) { killLeaveScreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isTerrainRegion") ) { isTerrainRegion=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"simpleCollisions") ) { simpleCollisions=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"handlesCollisions") ) { handlesCollisions=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"positionListeners") ) { positionListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currAnimationName") ) { currAnimationName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"activeAngleTweens") ) { activeAngleTweens=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"collisionListeners") ) { collisionListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseOverListeners") ) { mouseOverListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backupAnimationMap") ) { backupAnimationMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"whenKilledListeners") ) { whenKilledListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currAnimationAsAnim") ) { currAnimationAsAnim=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"continuousCollision") ) { continuousCollision=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"groupsToCollideWith") ) { groupsToCollideWith=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"whenDrawingListeners") ) { whenDrawingListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenUpdatedListeners") ) { whenUpdatedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenCreatedListeners") ) { whenCreatedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"activePositionTweens") ) { activePositionTweens=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"positionListenerCount") ) { positionListenerCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allListenerReferences") ) { allListenerReferences=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collisionListenerCount") ) { collisionListenerCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Actor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("allowAdd"));
	outFields->push(HX_CSTRING("simpleCollisions"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_moveY"));
	outFields->push(HX_CSTRING("_moveX"));
	outFields->push(HX_CSTRING("_y"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("_mask"));
	outFields->push(HX_CSTRING("HITBOX"));
	outFields->push(HX_CSTRING("shape"));
	outFields->push(HX_CSTRING("collisionsCount"));
	outFields->push(HX_CSTRING("contactCount"));
	outFields->push(HX_CSTRING("zero"));
	outFields->push(HX_CSTRING("dummy"));
	outFields->push(HX_CSTRING("collisions"));
	outFields->push(HX_CSTRING("regionContacts"));
	outFields->push(HX_CSTRING("contacts"));
	outFields->push(HX_CSTRING("handlesCollisions"));
	outFields->push(HX_CSTRING("bodyScale"));
	outFields->push(HX_CSTRING("md"));
	outFields->push(HX_CSTRING("bodyDef"));
	outFields->push(HX_CSTRING("body"));
	outFields->push(HX_CSTRING("isOnScreenCache"));
	outFields->push(HX_CSTRING("lastSceneState"));
	outFields->push(HX_CSTRING("lastScreenState"));
	outFields->push(HX_CSTRING("mouseState"));
	outFields->push(HX_CSTRING("collisionListenerCount"));
	outFields->push(HX_CSTRING("positionListenerCount"));
	outFields->push(HX_CSTRING("collisionListeners"));
	outFields->push(HX_CSTRING("positionListeners"));
	outFields->push(HX_CSTRING("mouseOverListeners"));
	outFields->push(HX_CSTRING("whenKilledListeners"));
	outFields->push(HX_CSTRING("whenDrawingListeners"));
	outFields->push(HX_CSTRING("whenUpdatedListeners"));
	outFields->push(HX_CSTRING("whenCreatedListeners"));
	outFields->push(HX_CSTRING("allListenerReferences"));
	outFields->push(HX_CSTRING("allListeners"));
	outFields->push(HX_CSTRING("registry"));
	outFields->push(HX_CSTRING("behaviors"));
	outFields->push(HX_CSTRING("label"));
	outFields->push(HX_CSTRING("drawMatrix"));
	outFields->push(HX_CSTRING("updateMatrix"));
	outFields->push(HX_CSTRING("transformMatrix"));
	outFields->push(HX_CSTRING("transformPoint"));
	outFields->push(HX_CSTRING("transformObj"));
	outFields->push(HX_CSTRING("currOffset"));
	outFields->push(HX_CSTRING("currOrigin"));
	outFields->push(HX_CSTRING("defaultAnim"));
	outFields->push(HX_CSTRING("originMap"));
	outFields->push(HX_CSTRING("shapeMap"));
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("animsBackedUp"));
	outFields->push(HX_CSTRING("backupAnimationMap"));
	outFields->push(HX_CSTRING("animationMap"));
	outFields->push(HX_CSTRING("currAnimationName"));
	outFields->push(HX_CSTRING("currAnimation"));
	outFields->push(HX_CSTRING("currAnimationAsAnim"));
	outFields->push(HX_CSTRING("cacheHeight"));
	outFields->push(HX_CSTRING("cacheWidth"));
	outFields->push(HX_CSTRING("activePositionTweens"));
	outFields->push(HX_CSTRING("activeAngleTweens"));
	outFields->push(HX_CSTRING("tweenAngle"));
	outFields->push(HX_CSTRING("tweenLoc"));
	outFields->push(HX_CSTRING("continuousCollision"));
	outFields->push(HX_CSTRING("rSpeed"));
	outFields->push(HX_CSTRING("ySpeed"));
	outFields->push(HX_CSTRING("xSpeed"));
	outFields->push(HX_CSTRING("colY"));
	outFields->push(HX_CSTRING("colX"));
	outFields->push(HX_CSTRING("lastScale"));
	outFields->push(HX_CSTRING("lastAngle"));
	outFields->push(HX_CSTRING("lastY"));
	outFields->push(HX_CSTRING("lastX"));
	outFields->push(HX_CSTRING("realScaleY"));
	outFields->push(HX_CSTRING("realScaleX"));
	outFields->push(HX_CSTRING("realAngle"));
	outFields->push(HX_CSTRING("realY"));
	outFields->push(HX_CSTRING("realX"));
	outFields->push(HX_CSTRING("originY"));
	outFields->push(HX_CSTRING("originX"));
	outFields->push(HX_CSTRING("resetOrigin"));
	outFields->push(HX_CSTRING("solid"));
	outFields->push(HX_CSTRING("collidable"));
	outFields->push(HX_CSTRING("ignoreGravity"));
	outFields->push(HX_CSTRING("fixedRotation"));
	outFields->push(HX_CSTRING("dying"));
	outFields->push(HX_CSTRING("dead"));
	outFields->push(HX_CSTRING("autoScale"));
	outFields->push(HX_CSTRING("isLightweight"));
	outFields->push(HX_CSTRING("killLeaveScreen"));
	outFields->push(HX_CSTRING("isCamera"));
	outFields->push(HX_CSTRING("alwaysSimulate"));
	outFields->push(HX_CSTRING("isHUD"));
	outFields->push(HX_CSTRING("drawActor"));
	outFields->push(HX_CSTRING("destroyed"));
	outFields->push(HX_CSTRING("isTerrain"));
	outFields->push(HX_CSTRING("isTerrainRegion"));
	outFields->push(HX_CSTRING("isRegion"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("recycled"));
	outFields->push(HX_CSTRING("groupsToCollideWith"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("typeID"));
	outFields->push(HX_CSTRING("layerID"));
	outFields->push(HX_CSTRING("groupID"));
	outFields->push(HX_CSTRING("ID"));
	outFields->push(HX_CSTRING("createTime"));
	outFields->push(HX_CSTRING("engine"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("GROUP_OFFSET"),
	HX_CSTRING("lastCollided"),
	HX_CSTRING("createBox"),
	HX_CSTRING("manifold"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("allowAdd"),
	HX_CSTRING("simpleCollisions"),
	HX_CSTRING("_point"),
	HX_CSTRING("_moveY"),
	HX_CSTRING("_moveX"),
	HX_CSTRING("_y"),
	HX_CSTRING("_x"),
	HX_CSTRING("_mask"),
	HX_CSTRING("HITBOX"),
	HX_CSTRING("handleCollisionsSimple"),
	HX_CSTRING("moveCollideY"),
	HX_CSTRING("moveCollideX"),
	HX_CSTRING("moveActorTowards"),
	HX_CSTRING("moveActorTo"),
	HX_CSTRING("moveActorBy"),
	HX_CSTRING("resetReal"),
	HX_CSTRING("alreadyCollided"),
	HX_CSTRING("addCollision"),
	HX_CSTRING("clearCollisionList"),
	HX_CSTRING("collideTypesInto"),
	HX_CSTRING("collideInto"),
	HX_CSTRING("collideWith"),
	HX_CSTRING("collideTypes"),
	HX_CSTRING("collide"),
	HX_CSTRING("set_shape"),
	HX_CSTRING("get_shape"),
	HX_CSTRING("setLocation"),
	HX_CSTRING("toString"),
	HX_CSTRING("killSelfAfterLeavingScreen"),
	HX_CSTRING("getLastCollidedActor"),
	HX_CSTRING("isInScene"),
	HX_CSTRING("isOnScreen"),
	HX_CSTRING("isAlive"),
	HX_CSTRING("isDying"),
	HX_CSTRING("die"),
	HX_CSTRING("alwaysSimulates"),
	HX_CSTRING("makeSometimesSimulate"),
	HX_CSTRING("makeAlwaysSimulate"),
	HX_CSTRING("isAnchoredToScreen"),
	HX_CSTRING("unanchorFromScreen"),
	HX_CSTRING("anchorToScreen"),
	HX_CSTRING("removeAllListeners"),
	HX_CSTRING("registerListener"),
	HX_CSTRING("hasActorValue"),
	HX_CSTRING("getActorValue"),
	HX_CSTRING("setActorValue"),
	HX_CSTRING("say"),
	HX_CSTRING("shout"),
	HX_CSTRING("setValue"),
	HX_CSTRING("getValue"),
	HX_CSTRING("enableAllBehaviors"),
	HX_CSTRING("isBehaviorEnabled"),
	HX_CSTRING("disableBehavior"),
	HX_CSTRING("enableBehavior"),
	HX_CSTRING("hasBehavior"),
	HX_CSTRING("addBehavior"),
	HX_CSTRING("clearFilters"),
	HX_CSTRING("setFilter"),
	HX_CSTRING("drawsImage"),
	HX_CSTRING("disableActorDrawing"),
	HX_CSTRING("enableActorDrawing"),
	HX_CSTRING("drawImage"),
	HX_CSTRING("onTweenPositionComplete"),
	HX_CSTRING("onTweenAngleComplete"),
	HX_CSTRING("moveBy"),
	HX_CSTRING("spinBy"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("spinTo"),
	HX_CSTRING("growTo"),
	HX_CSTRING("fadeTo"),
	HX_CSTRING("cancelTweens"),
	HX_CSTRING("isMouseReleased"),
	HX_CSTRING("isMousePressed"),
	HX_CSTRING("isMouseDown"),
	HX_CSTRING("isMouseHover"),
	HX_CSTRING("isMouseOver"),
	HX_CSTRING("ignoresGravity"),
	HX_CSTRING("setIgnoreGravity"),
	HX_CSTRING("disableRotation"),
	HX_CSTRING("enableRotation"),
	HX_CSTRING("setBounciness"),
	HX_CSTRING("setFriction"),
	HX_CSTRING("getBody"),
	HX_CSTRING("getPhysicsHeight"),
	HX_CSTRING("getPhysicsWidth"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("applyTorque"),
	HX_CSTRING("applyImpulseInDirection"),
	HX_CSTRING("applyImpulse"),
	HX_CSTRING("pushInDirection"),
	HX_CSTRING("push"),
	HX_CSTRING("changeAngularVelocity"),
	HX_CSTRING("setAngularVelocity"),
	HX_CSTRING("getAngularVelocity"),
	HX_CSTRING("rotate"),
	HX_CSTRING("setAngle"),
	HX_CSTRING("getAngleInDegrees"),
	HX_CSTRING("getAngle"),
	HX_CSTRING("accelerate"),
	HX_CSTRING("accelerateY"),
	HX_CSTRING("accelerateX"),
	HX_CSTRING("setVelocity"),
	HX_CSTRING("setYVelocity"),
	HX_CSTRING("setXVelocity"),
	HX_CSTRING("getYVelocity"),
	HX_CSTRING("getXVelocity"),
	HX_CSTRING("setOriginPoint"),
	HX_CSTRING("followWithOffset"),
	HX_CSTRING("follow"),
	HX_CSTRING("setY"),
	HX_CSTRING("setX"),
	HX_CSTRING("getScreenY"),
	HX_CSTRING("getScreenX"),
	HX_CSTRING("getYCenter"),
	HX_CSTRING("getXCenter"),
	HX_CSTRING("getY"),
	HX_CSTRING("getX"),
	HX_CSTRING("sendBackward"),
	HX_CSTRING("sendToBack"),
	HX_CSTRING("bringForward"),
	HX_CSTRING("bringToFront"),
	HX_CSTRING("moveToLayer"),
	HX_CSTRING("getIsTerrainRegion"),
	HX_CSTRING("getIsRegion"),
	HX_CSTRING("getGroup"),
	HX_CSTRING("unpause"),
	HX_CSTRING("pause"),
	HX_CSTRING("isPaused"),
	HX_CSTRING("isPausable"),
	HX_CSTRING("getType"),
	HX_CSTRING("getLayerOrder"),
	HX_CSTRING("getLayerID"),
	HX_CSTRING("getGroupID"),
	HX_CSTRING("getName"),
	HX_CSTRING("getID"),
	HX_CSTRING("removeRegionContact"),
	HX_CSTRING("addRegionContact"),
	HX_CSTRING("removeContact"),
	HX_CSTRING("addContact"),
	HX_CSTRING("handleCollisions"),
	HX_CSTRING("collisionsCount"),
	HX_CSTRING("contactCount"),
	HX_CSTRING("checkScreenState"),
	HX_CSTRING("scaleBody"),
	HX_CSTRING("updateTweenProperties"),
	HX_CSTRING("updateDrawingMatrix"),
	HX_CSTRING("internalUpdate"),
	HX_CSTRING("innerUpdate"),
	HX_CSTRING("update"),
	HX_CSTRING("switchAnimation"),
	HX_CSTRING("getNumFrames"),
	HX_CSTRING("setCurrentFrame"),
	HX_CSTRING("getCurrentFrame"),
	HX_CSTRING("isAnimationPlaying"),
	HX_CSTRING("switchToDefaultAnimation"),
	HX_CSTRING("setAnimation"),
	HX_CSTRING("getAnimation"),
	HX_CSTRING("addAnimation"),
	HX_CSTRING("initBody"),
	HX_CSTRING("initFromBody"),
	HX_CSTRING("initScripts"),
	HX_CSTRING("addAnim"),
	HX_CSTRING("resetListeners"),
	HX_CSTRING("destroy"),
	HX_CSTRING("zero"),
	HX_CSTRING("dummy"),
	HX_CSTRING("collisions"),
	HX_CSTRING("regionContacts"),
	HX_CSTRING("contacts"),
	HX_CSTRING("handlesCollisions"),
	HX_CSTRING("bodyScale"),
	HX_CSTRING("md"),
	HX_CSTRING("bodyDef"),
	HX_CSTRING("body"),
	HX_CSTRING("isOnScreenCache"),
	HX_CSTRING("lastSceneState"),
	HX_CSTRING("lastScreenState"),
	HX_CSTRING("mouseState"),
	HX_CSTRING("collisionListenerCount"),
	HX_CSTRING("positionListenerCount"),
	HX_CSTRING("collisionListeners"),
	HX_CSTRING("positionListeners"),
	HX_CSTRING("mouseOverListeners"),
	HX_CSTRING("whenKilledListeners"),
	HX_CSTRING("whenDrawingListeners"),
	HX_CSTRING("whenUpdatedListeners"),
	HX_CSTRING("whenCreatedListeners"),
	HX_CSTRING("allListenerReferences"),
	HX_CSTRING("allListeners"),
	HX_CSTRING("registry"),
	HX_CSTRING("behaviors"),
	HX_CSTRING("label"),
	HX_CSTRING("drawMatrix"),
	HX_CSTRING("updateMatrix"),
	HX_CSTRING("transformMatrix"),
	HX_CSTRING("transformPoint"),
	HX_CSTRING("transformObj"),
	HX_CSTRING("currOffset"),
	HX_CSTRING("currOrigin"),
	HX_CSTRING("defaultAnim"),
	HX_CSTRING("originMap"),
	HX_CSTRING("shapeMap"),
	HX_CSTRING("sprite"),
	HX_CSTRING("animsBackedUp"),
	HX_CSTRING("backupAnimationMap"),
	HX_CSTRING("animationMap"),
	HX_CSTRING("currAnimationName"),
	HX_CSTRING("currAnimation"),
	HX_CSTRING("currAnimationAsAnim"),
	HX_CSTRING("cacheHeight"),
	HX_CSTRING("cacheWidth"),
	HX_CSTRING("activePositionTweens"),
	HX_CSTRING("activeAngleTweens"),
	HX_CSTRING("tweenAngle"),
	HX_CSTRING("tweenLoc"),
	HX_CSTRING("continuousCollision"),
	HX_CSTRING("rSpeed"),
	HX_CSTRING("ySpeed"),
	HX_CSTRING("xSpeed"),
	HX_CSTRING("colY"),
	HX_CSTRING("colX"),
	HX_CSTRING("lastScale"),
	HX_CSTRING("lastAngle"),
	HX_CSTRING("lastY"),
	HX_CSTRING("lastX"),
	HX_CSTRING("realScaleY"),
	HX_CSTRING("realScaleX"),
	HX_CSTRING("realAngle"),
	HX_CSTRING("realY"),
	HX_CSTRING("realX"),
	HX_CSTRING("originY"),
	HX_CSTRING("originX"),
	HX_CSTRING("resetOrigin"),
	HX_CSTRING("solid"),
	HX_CSTRING("collidable"),
	HX_CSTRING("ignoreGravity"),
	HX_CSTRING("fixedRotation"),
	HX_CSTRING("dying"),
	HX_CSTRING("dead"),
	HX_CSTRING("autoScale"),
	HX_CSTRING("isLightweight"),
	HX_CSTRING("killLeaveScreen"),
	HX_CSTRING("isCamera"),
	HX_CSTRING("alwaysSimulate"),
	HX_CSTRING("isHUD"),
	HX_CSTRING("drawActor"),
	HX_CSTRING("destroyed"),
	HX_CSTRING("isTerrain"),
	HX_CSTRING("isTerrainRegion"),
	HX_CSTRING("isRegion"),
	HX_CSTRING("paused"),
	HX_CSTRING("recycled"),
	HX_CSTRING("groupsToCollideWith"),
	HX_CSTRING("type"),
	HX_CSTRING("typeID"),
	HX_CSTRING("layerID"),
	HX_CSTRING("groupID"),
	HX_CSTRING("ID"),
	HX_CSTRING("createTime"),
	HX_CSTRING("engine"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Actor_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Actor_obj::GROUP_OFFSET,"GROUP_OFFSET");
	HX_MARK_MEMBER_NAME(Actor_obj::lastCollided,"lastCollided");
	HX_MARK_MEMBER_NAME(Actor_obj::manifold,"manifold");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Actor_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Actor_obj::GROUP_OFFSET,"GROUP_OFFSET");
	HX_VISIT_MEMBER_NAME(Actor_obj::lastCollided,"lastCollided");
	HX_VISIT_MEMBER_NAME(Actor_obj::manifold,"manifold");
};

Class Actor_obj::__mClass;

void Actor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.Actor"), hx::TCanCast< Actor_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Actor_obj::__boot()
{
	GROUP_OFFSET= (int)1000000;
	manifold= ::box2D::collision::B2WorldManifold_obj::__new();
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
