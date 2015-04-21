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
#ifndef INCLUDED_de_polygonal_ds_Collection
#include <de/polygonal/ds/Collection.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Hashable
#include <de/polygonal/ds/Hashable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntHashTable
#include <de/polygonal/ds/IntHashTable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntIntHashTable
#include <de/polygonal/ds/IntIntHashTable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Map
#include <de/polygonal/ds/Map.h>
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
HX_STACK_PUSH("Actor::new","com/stencyl/models/Actor.hx",92);
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
	HX_STACK_LINE(222)
	this->maxMove = (int)40;
	HX_STACK_LINE(221)
	this->minMove = (int)3;
	HX_STACK_LINE(220)
	this->moveYDistance = (int)0;
	HX_STACK_LINE(219)
	this->moveXDistance = (int)0;
	HX_STACK_LINE(217)
	this->drawY = (int)0;
	HX_STACK_LINE(216)
	this->drawX = (int)0;
	HX_STACK_LINE(215)
	this->firstMove = false;
	HX_STACK_LINE(214)
	this->smoothMove = false;
	HX_STACK_LINE(194)
	this->animsBackedUp = false;
	HX_STACK_LINE(317)
	super::__construct();
	HX_STACK_LINE(330)
	this->dummy = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(331)
	this->zero = ::box2D::common::math::B2Vec2_obj::__new((int)0,(int)0);
	HX_STACK_LINE(333)
	this->_point = ::com::stencyl::utils::Utils_obj::point;
	HX_STACK_LINE(334)
	this->_moveX = this->_moveY = (int)0;
	HX_STACK_LINE(336)
	this->HITBOX = ::com::stencyl::models::collision::Mask_obj::__new();
	HX_STACK_LINE(337)
	this->set_shape(this->HITBOX);
	HX_STACK_LINE(339)
	if (((bool(::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::models::Region >())) && bool(::com::stencyl::Engine_obj::NO_PHYSICS)))){
		HX_STACK_LINE(341)
		shape = this->HITBOX = ::com::stencyl::models::collision::Hitbox_obj::__new(::Std_obj::_int(width),::Std_obj::_int(height),(int)0,(int)0,false);
		HX_STACK_LINE(342)
		this->set_shape(shape);
	}
	HX_STACK_LINE(346)
	this->set_x((int)0);
	HX_STACK_LINE(347)
	this->set_y((int)0);
	HX_STACK_LINE(348)
	this->set_rotation((int)0);
	HX_STACK_LINE(350)
	this->realX = (int)0;
	HX_STACK_LINE(351)
	this->realY = (int)0;
	HX_STACK_LINE(352)
	this->realAngle = (int)0;
	HX_STACK_LINE(353)
	this->realScaleX = (int)1;
	HX_STACK_LINE(354)
	this->realScaleY = (int)1;
	HX_STACK_LINE(356)
	this->originX = (int)0;
	HX_STACK_LINE(357)
	this->originY = (int)0;
	HX_STACK_LINE(358)
	this->collidable = true;
	HX_STACK_LINE(359)
	this->solid = !(isSensor);
	HX_STACK_LINE(360)
	this->updateMatrix = true;
	HX_STACK_LINE(362)
	if ((isLightweight)){
		HX_STACK_LINE(364)
		this->set_x((x * ::com::stencyl::Engine_obj::physicsScale));
		HX_STACK_LINE(365)
		this->set_y((y * ::com::stencyl::Engine_obj::physicsScale));
	}
	else{
		HX_STACK_LINE(370)
		this->set_x(x);
		HX_STACK_LINE(371)
		this->set_y(y);
	}
	HX_STACK_LINE(374)
	this->realX = this->colX = x;
	HX_STACK_LINE(375)
	this->realY = this->colY = y;
	HX_STACK_LINE(377)
	this->activeAngleTweens = (int)0;
	HX_STACK_LINE(378)
	this->activePositionTweens = (int)0;
	HX_STACK_LINE(382)
	this->lastScale = ::flash::geom::Point_obj::__new((int)1,(int)1);
	HX_STACK_LINE(383)
	this->lastX = (int)-1000;
	HX_STACK_LINE(384)
	this->lastY = (int)-1000;
	HX_STACK_LINE(385)
	this->lastAngle = (int)0;
	HX_STACK_LINE(387)
	this->tweenLoc = ::flash::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(388)
	this->tweenAngle = ::com::stencyl::models::actor::AngleHolder_obj::__new();
	HX_STACK_LINE(390)
	this->transformPoint = ::flash::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(391)
	this->transformMatrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(392)
	this->drawMatrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(394)
	this->currOrigin = ::flash::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(395)
	this->currOffset = ::flash::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(396)
	this->registry = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(398)
	this->isLightweight = isLightweight;
	HX_STACK_LINE(399)
	this->autoScale = autoScale;
	HX_STACK_LINE(400)
	this->xSpeed = (int)0;
	HX_STACK_LINE(401)
	this->ySpeed = (int)0;
	HX_STACK_LINE(402)
	this->rSpeed = (int)0;
	HX_STACK_LINE(404)
	this->mouseState = (int)0;
	HX_STACK_LINE(406)
	this->lastScreenState = false;
	HX_STACK_LINE(407)
	this->lastSceneState = false;
	HX_STACK_LINE(408)
	this->isOnScreenCache = false;
	HX_STACK_LINE(410)
	this->isCamera = false;
	HX_STACK_LINE(411)
	this->isRegion = false;
	HX_STACK_LINE(412)
	this->isTerrainRegion = false;
	HX_STACK_LINE(413)
	this->drawActor = true;
	HX_STACK_LINE(415)
	this->killLeaveScreen = false;
	HX_STACK_LINE(416)
	this->alwaysSimulate = false;
	HX_STACK_LINE(417)
	this->isHUD = false;
	HX_STACK_LINE(418)
	this->continuousCollision = false;
	HX_STACK_LINE(420)
	this->fixedRotation = false;
	HX_STACK_LINE(421)
	this->ignoreGravity = ignoreGravity;
	HX_STACK_LINE(422)
	this->resetOrigin = true;
	HX_STACK_LINE(426)
	this->allListeners = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(427)
	this->allListenerReferences = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(429)
	this->whenCreatedListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(430)
	this->whenUpdatedListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(431)
	this->whenDrawingListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(432)
	this->whenKilledListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(433)
	this->mouseOverListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(434)
	this->positionListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(435)
	this->collisionListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(439)
	this->recycled = false;
	HX_STACK_LINE(440)
	this->paused = false;
	HX_STACK_LINE(441)
	this->destroyed = false;
	HX_STACK_LINE(443)
	this->set_name(HX_CSTRING("Unknown"));
	HX_STACK_LINE(444)
	this->ID = ID;
	HX_STACK_LINE(445)
	this->groupID = groupID;
	HX_STACK_LINE(446)
	this->layerID = layerID;
	HX_STACK_LINE(447)
	this->typeID = typeID;
	HX_STACK_LINE(448)
	this->engine = engine;
	HX_STACK_LINE(450)
	this->groupsToCollideWith = ::com::stencyl::models::GameModel_obj::get()->groupsCollidesWith->get(groupID);
	HX_STACK_LINE(452)
	this->collisions = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
	HX_STACK_LINE(453)
	this->simpleCollisions = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
	HX_STACK_LINE(454)
	this->contacts = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
	HX_STACK_LINE(455)
	this->regionContacts = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
	HX_STACK_LINE(457)
	this->collisions->reuseIterator = true;
	HX_STACK_LINE(458)
	this->simpleCollisions->reuseIterator = true;
	HX_STACK_LINE(459)
	this->contacts->reuseIterator = true;
	HX_STACK_LINE(460)
	this->regionContacts->reuseIterator = true;
	HX_STACK_LINE(462)
	this->contactCount = (int)0;
	HX_STACK_LINE(463)
	this->collisionsCount = (int)0;
	HX_STACK_LINE(465)
	this->handlesCollisions = true;
	HX_STACK_LINE(469)
	this->behaviors = ::com::stencyl::behavior::BehaviorManager_obj::__new();
	HX_STACK_LINE(473)
	this->currAnimationName = HX_CSTRING("");
	HX_STACK_LINE(474)
	this->animationMap = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(475)
	this->shapeMap = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(476)
	this->originMap = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(478)
	this->sprite = sprite;
	HX_STACK_LINE(482)
	if (((sprite != null()))){
		HX_STACK_LINE(484)
		::com::stencyl::models::actor::Sprite s = hx::TCast< com::stencyl::models::actor::Sprite >::cast(::com::stencyl::Data_obj::get()->resources->get(actorType->spriteID));		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(486)
		if (((s != null()))){
			HX_STACK_LINE(488)
			this->type = hx::TCast< com::stencyl::models::actor::ActorType >::cast(::com::stencyl::Data_obj::get()->resources->get(typeID));
			HX_STACK_LINE(490)
			::String defaultAnim = HX_CSTRING("");		HX_STACK_VAR(defaultAnim,"defaultAnim");
			struct _Function_3_1{
				inline static Dynamic Block( ::com::stencyl::models::actor::Sprite &s){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",492);
					{
						HX_STACK_LINE(492)
						Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(s->animations);		HX_STACK_VAR(_e,"_e");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_e)
						Dynamic run(){
							HX_STACK_PUSH("*::_Function_4_1","com/stencyl/models/Actor.hx",492);
							{
								HX_STACK_LINE(492)
								return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0(return)

						HX_STACK_LINE(492)
						return  Dynamic(new _Function_4_1(_e));
					}
					return null();
				}
			};
			HX_STACK_LINE(492)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::actor::Animation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::actor::Animation >((_Function_3_1::Block(s))());  __it->hasNext(); ){
				::com::stencyl::models::actor::Animation a = __it->next();
				{
					HX_STACK_LINE(494)
					this->addAnim(a->animID,a->animName,a->imgData,a->framesAcross,::Math_obj::floor((Float(a->imgWidth) / Float(a->framesAcross))),::Math_obj::floor((Float(a->imgHeight) / Float(a->framesDown))),a->originX,a->originY,a->durations,a->looping,(  ((isLightweight)) ? ::haxe::ds::IntMap(a->simpleShapes) : ::haxe::ds::IntMap(a->physicsShapes) ));
					HX_STACK_LINE(509)
					if (((a->animID == s->defaultAnimation))){
						HX_STACK_LINE(510)
						defaultAnim = a->animName;
					}
				}
;
			}
		}
	}
	HX_STACK_LINE(519)
	this->addAnim((int)-1,HX_CSTRING("recyclingDefault"),null(),(int)1,(int)1,(int)1,(int)1,(int)1,Array_obj< int >::__new().Add((int)1000),false,null());
	HX_STACK_LINE(521)
	if (((bool((bodyDef != null())) && bool(!(isLightweight))))){
		HX_STACK_LINE(523)
		if ((bodyDef->bullet)){
			HX_STACK_LINE(524)
			::box2D::dynamics::B2World_obj::m_continuousPhysics = true;
		}
		HX_STACK_LINE(528)
		bodyDef->groupID = groupID;
		HX_STACK_LINE(530)
		this->initFromBody(bodyDef);
		HX_STACK_LINE(533)
		::box2D::collision::shapes::B2PolygonShape box = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(box,"box");
		HX_STACK_LINE(534)
		box->setAsBox((int)1,(int)1);
		HX_STACK_LINE(535)
		this->body->createFixture2(box,0.1);
		HX_STACK_LINE(537)
		this->md = ::box2D::collision::shapes::B2MassData_obj::__new();
		HX_STACK_LINE(538)
		this->md->mass = bodyDef->mass;
		HX_STACK_LINE(539)
		this->md->I = bodyDef->aMass;
		HX_STACK_LINE(540)
		this->md->center->x = (int)0;
		HX_STACK_LINE(541)
		this->md->center->y = (int)0;
		HX_STACK_LINE(543)
		this->body->setMassData(this->md);
		HX_STACK_LINE(544)
		this->bodyScale = ::flash::geom::Point_obj::__new((int)1,(int)1);
	}
	else{
		HX_STACK_LINE(549)
		if (((bool((shape == null())) || bool((::Type_obj::_typeof(shape) == ::ValueType_obj::TFloat))))){
			HX_STACK_LINE(550)
			shape = ::com::stencyl::models::Actor_obj::createBox(width,height);
		}
		HX_STACK_LINE(554)
		if (((bodyDef != null()))){
			HX_STACK_LINE(555)
			this->continuousCollision = bodyDef->bullet;
		}
		HX_STACK_LINE(559)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::models::Region >()))){
			HX_STACK_LINE(561)
			isSensor = true;
			HX_STACK_LINE(562)
			canRotate = false;
		}
		HX_STACK_LINE(565)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::models::Terrain >()))){
			HX_STACK_LINE(566)
			canRotate = false;
		}
		HX_STACK_LINE(570)
		if (((bool((shape != null())) && bool(::Std_obj::is(shape,hx::ClassOf< ::com::stencyl::models::collision::Mask >()))))){
			HX_STACK_LINE(572)
			this->set_shape(shape);
			HX_STACK_LINE(573)
			this->isTerrain = true;
		}
		else{
			HX_STACK_LINE(576)
			if ((!(isLightweight))){
				HX_STACK_LINE(577)
				this->initBody(groupID,isSensor,isStationary,isKinematic,canRotate,shape);
			}
		}
	}
	HX_STACK_LINE(582)
	this->switchToDefaultAnimation();
	HX_STACK_LINE(585)
	if (((sprite != null()))){
		HX_STACK_LINE(586)
		this->setLocation(::com::stencyl::Engine_obj::toPixelUnits(x),::com::stencyl::Engine_obj::toPixelUnits(y));
	}
	else{
		HX_STACK_LINE(591)
		if (((bool((shape != null())) && bool(::Std_obj::is(shape,hx::ClassOf< ::com::stencyl::models::collision::Mask >()))))){
			HX_STACK_LINE(595)
			::flash::display::Bitmap dummy = ::flash::display::Bitmap_obj::__new(::flash::display::BitmapData_obj::__new((int)1,(int)1,true,(int)0,null()),null(),null());		HX_STACK_VAR(dummy,"dummy");
			HX_STACK_LINE(596)
			dummy->set_x(width);
			HX_STACK_LINE(597)
			dummy->set_y(height);
			HX_STACK_LINE(598)
			this->addChild(dummy);
			HX_STACK_LINE(599)
			this->cacheWidth = this->set_width(width);
			HX_STACK_LINE(600)
			this->cacheHeight = this->set_height(height);
		}
		else{
			HX_STACK_LINE(603)
			if ((!(isLightweight))){
				HX_STACK_LINE(604)
				this->body->setPosition(::box2D::common::math::B2Vec2_obj::__new(x,y));
			}
		}
	}
	HX_STACK_LINE(610)
	if (((bool((behaviorValues == null())) && bool((actorType != null()))))){
		HX_STACK_LINE(611)
		behaviorValues = actorType->behaviorValues;
	}
	HX_STACK_LINE(615)
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
		HX_STACK_PUSH("Actor::handleCollisionsSimple","com/stencyl/models/Actor.hx",4333);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(fromX,"fromX");
		HX_STACK_ARG(fromY,"fromY");
		HX_STACK_ARG(sign,"sign");
		HX_STACK_LINE(4334)
		if ((::Std_obj::is(a,hx::ClassOf< ::com::stencyl::models::Region >()))){
			HX_STACK_LINE(4336)
			::com::stencyl::models::Region region = hx::TCast< com::stencyl::models::Region >::cast(a);		HX_STACK_VAR(region,"region");
			HX_STACK_LINE(4337)
			region->addActor(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(4338)
			return null();
		}
		struct _Function_1_1{
			inline static ::com::stencyl::models::collision::CollisionInfo Block( ::com::stencyl::models::Actor_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4341);
				{
					HX_STACK_LINE(4341)
					::de::polygonal::ds::IntHashTable _this = __this->simpleCollisions;		HX_STACK_VAR(_this,"_this");
					int key = (__this->collisionsCount - (int)1);		HX_STACK_VAR(key,"key");
					struct _Function_2_1{
						inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4341);
							{
								HX_STACK_LINE(4341)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(4341)
								int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
										HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4341);
										{
											HX_STACK_LINE(4341)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(4341)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(4341)
											while(((i != (int)-1))){
												HX_STACK_LINE(4341)
												if (((_this1->_data->__get(i) == key))){
													HX_STACK_LINE(4341)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(4341)
													break;
												}
												HX_STACK_LINE(4341)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(4341)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(4341)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,key)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(4341)
					int i = _Function_2_1::Block(_this,key);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(4341)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::collision::CollisionInfo(null()) : ::com::stencyl::models::collision::CollisionInfo(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(4341)
		::com::stencyl::models::collision::CollisionInfo info = _Function_1_1::Block(this);		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(4343)
		::com::stencyl::utils::Utils_obj::collision->thisActor = ::com::stencyl::utils::Utils_obj::collision->actorA = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(4344)
		::com::stencyl::utils::Utils_obj::collision->otherActor = ::com::stencyl::utils::Utils_obj::collision->actorB = a;
		HX_STACK_LINE(4346)
		if ((a->isLightweight)){
			HX_STACK_LINE(4347)
			a->clearCollisionList();
		}
		HX_STACK_LINE(4351)
		if ((fromX)){
			HX_STACK_LINE(4354)
			if (((a->ID == ::com::stencyl::utils::Utils_obj::INTEGER_MAX))){
				HX_STACK_LINE(4356)
				::com::stencyl::utils::Utils_obj::collision->thisFromLeft = (sign < (int)0);
				HX_STACK_LINE(4357)
				::com::stencyl::utils::Utils_obj::collision->thisFromRight = (sign > (int)0);
			}
			else{
				HX_STACK_LINE(4361)
				::com::stencyl::utils::Utils_obj::collision->thisFromLeft = (a->colX < this->colX);
				HX_STACK_LINE(4362)
				::com::stencyl::utils::Utils_obj::collision->thisFromRight = (a->colX > this->colX);
			}
			HX_STACK_LINE(4365)
			::com::stencyl::utils::Utils_obj::collision->otherFromLeft = !(::com::stencyl::utils::Utils_obj::collision->thisFromLeft);
			HX_STACK_LINE(4366)
			::com::stencyl::utils::Utils_obj::collision->otherFromRight = !(::com::stencyl::utils::Utils_obj::collision->thisFromRight);
			HX_STACK_LINE(4368)
			::com::stencyl::utils::Utils_obj::collision->thisFromTop = ::com::stencyl::utils::Utils_obj::collision->otherFromTop = false;
			HX_STACK_LINE(4369)
			::com::stencyl::utils::Utils_obj::collision->thisFromBottom = ::com::stencyl::utils::Utils_obj::collision->otherFromBottom = false;
		}
		HX_STACK_LINE(4372)
		if ((fromY)){
			HX_STACK_LINE(4375)
			if (((a->ID == ::com::stencyl::utils::Utils_obj::INTEGER_MAX))){
				HX_STACK_LINE(4377)
				::com::stencyl::utils::Utils_obj::collision->thisFromTop = (sign < (int)0);
				HX_STACK_LINE(4378)
				::com::stencyl::utils::Utils_obj::collision->thisFromBottom = (sign > (int)0);
			}
			else{
				HX_STACK_LINE(4382)
				::com::stencyl::utils::Utils_obj::collision->thisFromTop = (a->colY < this->colY);
				HX_STACK_LINE(4383)
				::com::stencyl::utils::Utils_obj::collision->thisFromBottom = (a->colY > this->colY);
			}
			HX_STACK_LINE(4386)
			::com::stencyl::utils::Utils_obj::collision->otherFromTop = !(::com::stencyl::utils::Utils_obj::collision->thisFromTop);
			HX_STACK_LINE(4387)
			::com::stencyl::utils::Utils_obj::collision->otherFromBottom = !(::com::stencyl::utils::Utils_obj::collision->thisFromBottom);
			HX_STACK_LINE(4389)
			::com::stencyl::utils::Utils_obj::collision->thisFromLeft = ::com::stencyl::utils::Utils_obj::collision->otherFromLeft = false;
			HX_STACK_LINE(4390)
			::com::stencyl::utils::Utils_obj::collision->thisFromRight = ::com::stencyl::utils::Utils_obj::collision->otherFromRight = false;
		}
		HX_STACK_LINE(4394)
		::com::stencyl::utils::Utils_obj::collision->thisCollidedWithActor = true;
		HX_STACK_LINE(4395)
		::com::stencyl::utils::Utils_obj::collision->thisCollidedWithTile = (a->ID == ::com::stencyl::utils::Utils_obj::INTEGER_MAX);
		HX_STACK_LINE(4397)
		if (((info != null()))){
			HX_STACK_LINE(4398)
			::com::stencyl::utils::Utils_obj::collision->thisCollidedWithSensor = !(info->maskB->solid);
		}
		else{
			HX_STACK_LINE(4403)
			::com::stencyl::utils::Utils_obj::collision->thisCollidedWithSensor = false;
		}
		HX_STACK_LINE(4407)
		::com::stencyl::utils::Utils_obj::collision->thisCollidedWithTerrain = false;
		HX_STACK_LINE(4409)
		::com::stencyl::utils::Utils_obj::collision->otherCollidedWithActor = true;
		HX_STACK_LINE(4410)
		::com::stencyl::utils::Utils_obj::collision->otherCollidedWithTile = (a->ID == ::com::stencyl::utils::Utils_obj::INTEGER_MAX);
		HX_STACK_LINE(4412)
		if (((info != null()))){
			HX_STACK_LINE(4413)
			::com::stencyl::utils::Utils_obj::collision->otherCollidedWithSensor = !(info->maskA->solid);
		}
		else{
			HX_STACK_LINE(4418)
			::com::stencyl::utils::Utils_obj::collision->otherCollidedWithSensor = false;
		}
		HX_STACK_LINE(4422)
		::com::stencyl::utils::Utils_obj::collision->otherCollidedWithTerrain = false;
		HX_STACK_LINE(4424)
		::com::stencyl::models::Actor_obj::lastCollided = a;
		HX_STACK_LINE(4425)
		{
			HX_STACK_LINE(4425)
			Dynamic listeners = this->collisionListeners;		HX_STACK_VAR(listeners,"listeners");
			Dynamic value = ::com::stencyl::utils::Utils_obj::collision;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(4425)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(4425)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(4425)
				try{
					HX_STACK_LINE(4425)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(4425)
					f(value,listeners).Cast< Void >();
					HX_STACK_LINE(4425)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(4425)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(4425)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(4425)
				(r)++;
			}
		}
		HX_STACK_LINE(4426)
		this->engine->handleCollision(hx::ObjectPtr<OBJ_>(this),::com::stencyl::utils::Utils_obj::collision);
		HX_STACK_LINE(4428)
		::com::stencyl::models::Actor_obj::lastCollided = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(4429)
		{
			HX_STACK_LINE(4429)
			Dynamic listeners = a->collisionListeners;		HX_STACK_VAR(listeners,"listeners");
			Dynamic value = ::com::stencyl::utils::Utils_obj::collision->switchData();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(4429)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(4429)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(4429)
				try{
					HX_STACK_LINE(4429)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(4429)
					f(value,listeners).Cast< Void >();
					HX_STACK_LINE(4429)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(4429)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(4429)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(4429)
				(r)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,handleCollisionsSimple,(void))

Void Actor_obj::moveCollideY( ::com::stencyl::models::Actor a,Float sign){
{
		HX_STACK_PUSH("Actor::moveCollideY","com/stencyl/models/Actor.hx",4328);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(sign,"sign");
		HX_STACK_LINE(4328)
		this->handleCollisionsSimple(a,false,true,sign);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,moveCollideY,(void))

Void Actor_obj::moveCollideX( ::com::stencyl::models::Actor a,Float sign){
{
		HX_STACK_PUSH("Actor::moveCollideX","com/stencyl/models/Actor.hx",4319);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(sign,"sign");
		HX_STACK_LINE(4319)
		this->handleCollisionsSimple(a,true,false,sign);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,moveCollideX,(void))

Void Actor_obj::moveActorTowards( Float x,Float y,Float amount,Dynamic solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_PUSH("Actor::moveActorTowards","com/stencyl/models/Actor.hx",4307);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(amount,"amount");
	HX_STACK_ARG(solidType,"solidType");
	HX_STACK_ARG(sweep,"sweep");
{
		HX_STACK_LINE(4308)
		this->_point->x = (x - this->realX);
		HX_STACK_LINE(4309)
		this->_point->y = (y - this->realY);
		HX_STACK_LINE(4310)
		this->_point->normalize(amount);
		HX_STACK_LINE(4311)
		this->moveActorBy(this->_point->x,this->_point->y,solidType,sweep);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Actor_obj,moveActorTowards,(void))

Void Actor_obj::moveActorTo( Float x,Float y,Dynamic solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_PUSH("Actor::moveActorTo","com/stencyl/models/Actor.hx",4294);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(solidType,"solidType");
	HX_STACK_ARG(sweep,"sweep");
{
		HX_STACK_LINE(4294)
		this->moveActorBy((x - this->realX),(y - this->realY),solidType,sweep);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,moveActorTo,(void))

Void Actor_obj::moveActorBy( Float x,Float y,Dynamic solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_PUSH("Actor::moveActorBy","com/stencyl/models/Actor.hx",4189);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(solidType,"solidType");
	HX_STACK_ARG(sweep,"sweep");
{
		HX_STACK_LINE(4190)
		if (((bool((x == (int)0)) && bool((y == (int)0))))){
			HX_STACK_LINE(4191)
			return null();
		}
		HX_STACK_LINE(4195)
		this->clearCollisionList();
		HX_STACK_LINE(4197)
		if (((solidType != null()))){
			HX_STACK_LINE(4199)
			Float sign;		HX_STACK_VAR(sign,"sign");
			Float signIncr;		HX_STACK_VAR(signIncr,"signIncr");
			::com::stencyl::models::Actor e;		HX_STACK_VAR(e,"e");
			bool checkMove;		HX_STACK_VAR(checkMove,"checkMove");
			HX_STACK_LINE(4201)
			if (((x != (int)0))){
				HX_STACK_LINE(4203)
				this->allowAdd = false;
				HX_STACK_LINE(4205)
				if (((bool(this->collidable) && bool(((bool(sweep) || bool((this->collideTypes(solidType,(this->realX + x),this->realY) != null())))))))){
					HX_STACK_LINE(4207)
					this->allowAdd = true;
					HX_STACK_LINE(4209)
					while(((x != (int)0))){
						HX_STACK_LINE(4211)
						signIncr = (  (((bool((x >= (int)1)) || bool((x <= (int)-1))))) ? Float((int)1) : Float(x) );
						HX_STACK_LINE(4212)
						sign = (  (((x > (int)0))) ? Float(signIncr) : Float(-(signIncr)) );
						HX_STACK_LINE(4213)
						checkMove = (::Std_obj::_int(this->realX) != ::Std_obj::_int((this->realX + sign)));
						HX_STACK_LINE(4216)
						if (((bool(checkMove) && bool(((e = this->collide(::com::stencyl::models::GameModel_obj::REGION_ID,(this->realX + sign),this->realY)) != null()))))){
							HX_STACK_LINE(4217)
							(hx::TCast< com::stencyl::models::Region >::cast(e))->addActor(hx::ObjectPtr<OBJ_>(this));
						}
						HX_STACK_LINE(4221)
						if (((bool(checkMove) && bool(((e = this->collideTypes(solidType,(this->realX + sign),this->realY)) != null()))))){
							HX_STACK_LINE(4223)
							this->moveCollideX(e,sign);
							struct _Function_6_1{
								inline static ::com::stencyl::models::collision::CollisionInfo Block( ::com::stencyl::models::Actor_obj *__this){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4225);
									{
										HX_STACK_LINE(4225)
										::de::polygonal::ds::IntHashTable _this = __this->simpleCollisions;		HX_STACK_VAR(_this,"_this");
										int key = (__this->collisionsCount - (int)1);		HX_STACK_VAR(key,"key");
										struct _Function_7_1{
											inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4225);
												{
													HX_STACK_LINE(4225)
													::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(4225)
													int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
													struct _Function_8_1{
														inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
															HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4225);
															{
																HX_STACK_LINE(4225)
																int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(4225)
																i = _this1->_data->__get((i + (int)2));
																HX_STACK_LINE(4225)
																while(((i != (int)-1))){
																	HX_STACK_LINE(4225)
																	if (((_this1->_data->__get(i) == key))){
																		HX_STACK_LINE(4225)
																		v = _this1->_data->__get((i + (int)1));
																		HX_STACK_LINE(4225)
																		break;
																	}
																	HX_STACK_LINE(4225)
																	i = _this1->_data->__get((i + (int)2));
																}
																HX_STACK_LINE(4225)
																return v;
															}
															return null();
														}
													};
													HX_STACK_LINE(4225)
													return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_8_1::Block(i,_this1,key)) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(4225)
										int i = _Function_7_1::Block(_this,key);		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(4225)
										return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::collision::CollisionInfo(null()) : ::com::stencyl::models::collision::CollisionInfo(_this->_vals->__GetItem(i)) );
									}
									return null();
								}
							};
							struct _Function_6_2{
								inline static ::com::stencyl::models::collision::CollisionInfo Block( ::com::stencyl::models::Actor_obj *__this){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4225);
									{
										HX_STACK_LINE(4225)
										::de::polygonal::ds::IntHashTable _this = __this->simpleCollisions;		HX_STACK_VAR(_this,"_this");
										int key = (__this->collisionsCount - (int)1);		HX_STACK_VAR(key,"key");
										struct _Function_7_1{
											inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4225);
												{
													HX_STACK_LINE(4225)
													::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(4225)
													int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
													struct _Function_8_1{
														inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
															HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4225);
															{
																HX_STACK_LINE(4225)
																int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(4225)
																i = _this1->_data->__get((i + (int)2));
																HX_STACK_LINE(4225)
																while(((i != (int)-1))){
																	HX_STACK_LINE(4225)
																	if (((_this1->_data->__get(i) == key))){
																		HX_STACK_LINE(4225)
																		v = _this1->_data->__get((i + (int)1));
																		HX_STACK_LINE(4225)
																		break;
																	}
																	HX_STACK_LINE(4225)
																	i = _this1->_data->__get((i + (int)2));
																}
																HX_STACK_LINE(4225)
																return v;
															}
															return null();
														}
													};
													HX_STACK_LINE(4225)
													return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_8_1::Block(i,_this1,key)) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(4225)
										int i = _Function_7_1::Block(_this,key);		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(4225)
										return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::collision::CollisionInfo(null()) : ::com::stencyl::models::collision::CollisionInfo(_this->_vals->__GetItem(i)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(4225)
							if (((bool((_Function_6_1::Block(this) != null())) && bool((_Function_6_2::Block(this))->solidCollision)))){
								HX_STACK_LINE(4227)
								this->xSpeed = (int)0;
								HX_STACK_LINE(4228)
								break;
							}
						}
						HX_STACK_LINE(4232)
						hx::AddEq(this->realX,sign);
						HX_STACK_LINE(4233)
						hx::SubEq(x,sign);
					}
				}
				else{
					HX_STACK_LINE(4236)
					hx::AddEq(this->realX,x);
				}
			}
			HX_STACK_LINE(4238)
			if (((y != (int)0))){
				HX_STACK_LINE(4240)
				this->allowAdd = false;
				HX_STACK_LINE(4242)
				if (((bool(this->collidable) && bool(((bool(sweep) || bool((this->collideTypes(solidType,this->realX,(this->realY + y)) != null())))))))){
					HX_STACK_LINE(4244)
					this->allowAdd = true;
					HX_STACK_LINE(4246)
					while(((y != (int)0))){
						HX_STACK_LINE(4248)
						signIncr = (  (((bool((y >= (int)1)) || bool((y <= (int)-1))))) ? Float((int)1) : Float(y) );
						HX_STACK_LINE(4249)
						sign = (  (((y > (int)0))) ? Float(signIncr) : Float(-(signIncr)) );
						HX_STACK_LINE(4250)
						checkMove = (::Std_obj::_int(this->realY) != ::Std_obj::_int((this->realY + sign)));
						HX_STACK_LINE(4253)
						if (((bool(checkMove) && bool(((e = this->collide(::com::stencyl::models::GameModel_obj::REGION_ID,this->realX,(this->realY + sign))) != null()))))){
							HX_STACK_LINE(4254)
							(hx::TCast< com::stencyl::models::Region >::cast(e))->addActor(hx::ObjectPtr<OBJ_>(this));
						}
						HX_STACK_LINE(4258)
						if (((bool(checkMove) && bool(((e = this->collideTypes(solidType,this->realX,(this->realY + sign))) != null()))))){
							HX_STACK_LINE(4260)
							this->moveCollideY(e,sign);
							struct _Function_6_1{
								inline static ::com::stencyl::models::collision::CollisionInfo Block( ::com::stencyl::models::Actor_obj *__this){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4262);
									{
										HX_STACK_LINE(4262)
										::de::polygonal::ds::IntHashTable _this = __this->simpleCollisions;		HX_STACK_VAR(_this,"_this");
										int key = (__this->collisionsCount - (int)1);		HX_STACK_VAR(key,"key");
										struct _Function_7_1{
											inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4262);
												{
													HX_STACK_LINE(4262)
													::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(4262)
													int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
													struct _Function_8_1{
														inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
															HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4262);
															{
																HX_STACK_LINE(4262)
																int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(4262)
																i = _this1->_data->__get((i + (int)2));
																HX_STACK_LINE(4262)
																while(((i != (int)-1))){
																	HX_STACK_LINE(4262)
																	if (((_this1->_data->__get(i) == key))){
																		HX_STACK_LINE(4262)
																		v = _this1->_data->__get((i + (int)1));
																		HX_STACK_LINE(4262)
																		break;
																	}
																	HX_STACK_LINE(4262)
																	i = _this1->_data->__get((i + (int)2));
																}
																HX_STACK_LINE(4262)
																return v;
															}
															return null();
														}
													};
													HX_STACK_LINE(4262)
													return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_8_1::Block(i,_this1,key)) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(4262)
										int i = _Function_7_1::Block(_this,key);		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(4262)
										return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::collision::CollisionInfo(null()) : ::com::stencyl::models::collision::CollisionInfo(_this->_vals->__GetItem(i)) );
									}
									return null();
								}
							};
							struct _Function_6_2{
								inline static ::com::stencyl::models::collision::CollisionInfo Block( ::com::stencyl::models::Actor_obj *__this){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4262);
									{
										HX_STACK_LINE(4262)
										::de::polygonal::ds::IntHashTable _this = __this->simpleCollisions;		HX_STACK_VAR(_this,"_this");
										int key = (__this->collisionsCount - (int)1);		HX_STACK_VAR(key,"key");
										struct _Function_7_1{
											inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4262);
												{
													HX_STACK_LINE(4262)
													::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(4262)
													int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
													struct _Function_8_1{
														inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
															HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4262);
															{
																HX_STACK_LINE(4262)
																int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(4262)
																i = _this1->_data->__get((i + (int)2));
																HX_STACK_LINE(4262)
																while(((i != (int)-1))){
																	HX_STACK_LINE(4262)
																	if (((_this1->_data->__get(i) == key))){
																		HX_STACK_LINE(4262)
																		v = _this1->_data->__get((i + (int)1));
																		HX_STACK_LINE(4262)
																		break;
																	}
																	HX_STACK_LINE(4262)
																	i = _this1->_data->__get((i + (int)2));
																}
																HX_STACK_LINE(4262)
																return v;
															}
															return null();
														}
													};
													HX_STACK_LINE(4262)
													return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_8_1::Block(i,_this1,key)) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(4262)
										int i = _Function_7_1::Block(_this,key);		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(4262)
										return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::collision::CollisionInfo(null()) : ::com::stencyl::models::collision::CollisionInfo(_this->_vals->__GetItem(i)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(4262)
							if (((bool((_Function_6_1::Block(this) != null())) && bool((_Function_6_2::Block(this))->solidCollision)))){
								HX_STACK_LINE(4264)
								this->ySpeed = (int)0;
								HX_STACK_LINE(4265)
								break;
							}
						}
						HX_STACK_LINE(4269)
						hx::AddEq(this->realY,sign);
						HX_STACK_LINE(4270)
						hx::SubEq(y,sign);
					}
				}
				else{
					HX_STACK_LINE(4274)
					hx::AddEq(this->realY,y);
				}
			}
		}
		else{
			HX_STACK_LINE(4279)
			hx::AddEq(this->realX,x);
			HX_STACK_LINE(4280)
			hx::AddEq(this->realY,y);
		}
		HX_STACK_LINE(4283)
		this->resetReal(this->realX,this->realY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,moveActorBy,(void))

Void Actor_obj::resetReal( Float x,Float y){
{
		HX_STACK_PUSH("Actor::resetReal","com/stencyl/models/Actor.hx",4182);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(4183)
		this->realX = x;
		HX_STACK_LINE(4183)
		this->realY = y;
		HX_STACK_LINE(4184)
		this->colX = ((this->realX - ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) - this->currOffset->x);
		HX_STACK_LINE(4185)
		this->colY = ((this->realY - ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) - this->currOffset->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,resetReal,(void))

bool Actor_obj::alreadyCollided( ::com::stencyl::models::collision::Mask maskA,::com::stencyl::models::collision::Mask maskB){
	HX_STACK_PUSH("Actor::alreadyCollided","com/stencyl/models/Actor.hx",4169);
	HX_STACK_THIS(this);
	HX_STACK_ARG(maskA,"maskA");
	HX_STACK_ARG(maskB,"maskB");
	HX_STACK_LINE(4170)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::collision::CollisionInfo > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::collision::CollisionInfo >(this->simpleCollisions->iterator());  __it->hasNext(); ){
		::com::stencyl::models::collision::CollisionInfo info = __it->next();
		if (((bool((info->maskA == maskA)) && bool((info->maskB == maskB))))){
			HX_STACK_LINE(4173)
			return true;
		}
;
	}
	HX_STACK_LINE(4178)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,alreadyCollided,return )

Void Actor_obj::addCollision( ::com::stencyl::models::collision::CollisionInfo info){
{
		HX_STACK_PUSH("Actor::addCollision","com/stencyl/models/Actor.hx",4161);
		HX_STACK_THIS(this);
		HX_STACK_ARG(info,"info");
		HX_STACK_LINE(4162)
		if ((!(this->allowAdd))){
			HX_STACK_LINE(4162)
			return null();
		}
		HX_STACK_LINE(4164)
		{
			HX_STACK_LINE(4164)
			::de::polygonal::ds::IntHashTable _this = this->simpleCollisions;		HX_STACK_VAR(_this,"_this");
			int key = this->collisionsCount;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(4164)
			_this->_key0 = (int)-2147483647;
			HX_STACK_LINE(4164)
			if (((_this->_h->_size == _this->_h->_capacity))){
				HX_STACK_LINE(4164)
				int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
				HX_STACK_LINE(4164)
				int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
				struct _Function_3_1{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4164);
						{
							HX_STACK_LINE(4164)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(4164)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(4164)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(4164)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(4164)
				Array< int > tmp = _Function_3_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(4164)
				{
					HX_STACK_LINE(4164)
					Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(4164)
					if (((max == (int)-1))){
						HX_STACK_LINE(4164)
						max = src->length;
					}
					HX_STACK_LINE(4164)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(4164)
					{
						HX_STACK_LINE(4164)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(4164)
						while(((_g < max))){
							HX_STACK_LINE(4164)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(4164)
							tmp[(j)++] = src->__get(i);
						}
					}
					HX_STACK_LINE(4164)
					tmp;
				}
				HX_STACK_LINE(4164)
				_this->_next = tmp;
				struct _Function_3_2{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4164);
						{
							HX_STACK_LINE(4164)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(4164)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(4164)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(4164)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(4164)
				Array< int > tmp1 = _Function_3_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(4164)
				{
					HX_STACK_LINE(4164)
					Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(4164)
					if (((max == (int)-1))){
						HX_STACK_LINE(4164)
						max = src->length;
					}
					HX_STACK_LINE(4164)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(4164)
					{
						HX_STACK_LINE(4164)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(4164)
						while(((_g < max))){
							HX_STACK_LINE(4164)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(4164)
							tmp1[(j)++] = src->__get(i);
						}
					}
					HX_STACK_LINE(4164)
					tmp1;
				}
				HX_STACK_LINE(4164)
				_this->_keys = tmp1;
				HX_STACK_LINE(4164)
				{
					HX_STACK_LINE(4164)
					int _g = oldSize;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(4164)
					while(((_g < newSize))){
						HX_STACK_LINE(4164)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(4164)
						_this->_keys[i] = (int)-2147483647;
					}
				}
				HX_STACK_LINE(4164)
				{
					HX_STACK_LINE(4164)
					int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
					int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(4164)
					while(((_g1 < _g))){
						HX_STACK_LINE(4164)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(4164)
						_this->_next[i] = (i + (int)1);
					}
				}
				HX_STACK_LINE(4164)
				_this->_next[(newSize - (int)1)] = (int)-1;
				HX_STACK_LINE(4164)
				_this->_free = oldSize;
				struct _Function_3_3{
					inline static Array< ::Dynamic > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4164);
						{
							HX_STACK_LINE(4164)
							Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(4164)
							a = Array_obj< ::Dynamic >::__new();
							HX_STACK_LINE(4164)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(4164)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(4164)
				Array< ::Dynamic > tmp2 = _Function_3_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4164)
				{
					HX_STACK_LINE(4164)
					Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(4164)
					if (((max == (int)-1))){
						HX_STACK_LINE(4164)
						max = src->length;
					}
					HX_STACK_LINE(4164)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(4164)
					{
						HX_STACK_LINE(4164)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(4164)
						while(((_g < max))){
							HX_STACK_LINE(4164)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(4164)
							tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::collision::CollisionInfo >();
						}
					}
					HX_STACK_LINE(4164)
					tmp2;
				}
				HX_STACK_LINE(4164)
				_this->_vals = tmp2;
				HX_STACK_LINE(4164)
				(_this->_sizeLevel)++;
			}
			HX_STACK_LINE(4164)
			{
				HX_STACK_LINE(4164)
				::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(4164)
				if (((_this1->_size == _this1->_capacity))){
					HX_STACK_LINE(4164)
					if ((_this1->_isResizable)){
						HX_STACK_LINE(4164)
						_this1->_expand();
					}
				}
				HX_STACK_LINE(4164)
				int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(4164)
				_this1->_free = _this1->_next->__get(_this1->_free);
				HX_STACK_LINE(4164)
				_this1->_data[i] = key;
				HX_STACK_LINE(4164)
				_this1->_data[(i + (int)1)] = _this->_free;
				HX_STACK_LINE(4164)
				int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(4164)
				int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(4164)
				if (((j == (int)-1))){
					HX_STACK_LINE(4164)
					_this1->_hash[b] = i;
					HX_STACK_LINE(4164)
					(_this1->_size)++;
					HX_STACK_LINE(4164)
					true;
				}
				else{
					HX_STACK_LINE(4164)
					bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
					HX_STACK_LINE(4164)
					int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(4164)
					while(((t != (int)-1))){
						HX_STACK_LINE(4164)
						if (((_this1->_data->__get(t) == key))){
							HX_STACK_LINE(4164)
							first = false;
						}
						HX_STACK_LINE(4164)
						j = t;
						HX_STACK_LINE(4164)
						t = _this1->_data->__get((t + (int)2));
					}
					HX_STACK_LINE(4164)
					_this1->_data[(j + (int)2)] = i;
					HX_STACK_LINE(4164)
					(_this1->_size)++;
					HX_STACK_LINE(4164)
					first;
				}
			}
			HX_STACK_LINE(4164)
			hx::IndexRef((_this->_vals).mPtr,_this->_free) = info;
			HX_STACK_LINE(4164)
			_this->_keys[_this->_free] = key;
			HX_STACK_LINE(4164)
			_this->_free = _this->_next->__get(_this->_free);
			HX_STACK_LINE(4164)
			true;
		}
		HX_STACK_LINE(4165)
		(this->collisionsCount)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,addCollision,(void))

Void Actor_obj::clearCollisionList( ){
{
		HX_STACK_PUSH("Actor::clearCollisionList","com/stencyl/models/Actor.hx",4148);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4149)
		if (((this->collisionsCount > (int)0))){
			HX_STACK_LINE(4150)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->simpleCollisions->keys());  __it->hasNext(); ){
				int k = __it->next();
				{
					HX_STACK_LINE(4153)
					::de::polygonal::ds::IntHashTable _this = this->simpleCollisions;		HX_STACK_VAR(_this,"_this");
					struct _Function_3_1{
						inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &k){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4153);
							{
								HX_STACK_LINE(4153)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(4153)
								int i = _this1->_hash->__get((int((k * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_4_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &k){
										HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4153);
										{
											HX_STACK_LINE(4153)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(4153)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(4153)
											while(((i != (int)-1))){
												HX_STACK_LINE(4153)
												if (((_this1->_data->__get(i) == k))){
													HX_STACK_LINE(4153)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(4153)
													break;
												}
												HX_STACK_LINE(4153)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(4153)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(4153)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == k))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,k)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(4153)
					int i = _Function_3_1::Block(_this,k);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(4153)
					if (((i == (int)-2147483647))){
						HX_STACK_LINE(4153)
						false;
					}
					else{
						HX_STACK_LINE(4153)
						_this->_key0 = (int)-2147483647;
						HX_STACK_LINE(4153)
						hx::IndexRef((_this->_vals).mPtr,i) = null();
						HX_STACK_LINE(4153)
						_this->_keys[i] = (int)-2147483647;
						HX_STACK_LINE(4153)
						_this->_next[i] = _this->_free;
						HX_STACK_LINE(4153)
						_this->_free = i;
						HX_STACK_LINE(4153)
						bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
						HX_STACK_LINE(4153)
						if (((_this->_sizeLevel > (int)0))){
							HX_STACK_LINE(4153)
							if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
								HX_STACK_LINE(4153)
								if ((_this->_isResizable)){
									HX_STACK_LINE(4153)
									shrink = true;
								}
							}
						}
						HX_STACK_LINE(4153)
						{
							HX_STACK_LINE(4153)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(4153)
							int b = (int((k * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(4153)
							int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(4153)
							if (((i1 == (int)-1))){
								HX_STACK_LINE(4153)
								false;
							}
							else{
								HX_STACK_LINE(4153)
								if (((k == _this1->_data->__get(i1)))){
									HX_STACK_LINE(4153)
									if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
										HX_STACK_LINE(4153)
										_this1->_hash[b] = (int)-1;
									}
									else{
										HX_STACK_LINE(4153)
										_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
									}
									HX_STACK_LINE(4153)
									int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(4153)
									_this1->_next[j] = _this1->_free;
									HX_STACK_LINE(4153)
									_this1->_free = j;
									HX_STACK_LINE(4153)
									_this1->_data[(i1 + (int)1)] = (int)-2147483647;
									HX_STACK_LINE(4153)
									_this1->_data[(i1 + (int)2)] = (int)-1;
									HX_STACK_LINE(4153)
									(_this1->_size)--;
									HX_STACK_LINE(4153)
									if (((_this1->_sizeLevel > (int)0))){
										HX_STACK_LINE(4153)
										if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
											HX_STACK_LINE(4153)
											if ((_this1->_isResizable)){
												HX_STACK_LINE(4153)
												_this1->_shrink();
											}
										}
									}
									HX_STACK_LINE(4153)
									true;
								}
								else{
									HX_STACK_LINE(4153)
									bool exists = false;		HX_STACK_VAR(exists,"exists");
									HX_STACK_LINE(4153)
									int i0 = i1;		HX_STACK_VAR(i0,"i0");
									HX_STACK_LINE(4153)
									i1 = _this1->_data->__get((i1 + (int)2));
									HX_STACK_LINE(4153)
									while(((i1 != (int)-1))){
										HX_STACK_LINE(4153)
										if (((_this1->_data->__get(i1) == k))){
											HX_STACK_LINE(4153)
											exists = true;
											HX_STACK_LINE(4153)
											break;
										}
										HX_STACK_LINE(4153)
										i1 = _this1->_data->__get(((i0 = i1) + (int)2));
									}
									HX_STACK_LINE(4153)
									if ((exists)){
										HX_STACK_LINE(4153)
										_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
										HX_STACK_LINE(4153)
										int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(4153)
										_this1->_next[j] = _this1->_free;
										HX_STACK_LINE(4153)
										_this1->_free = j;
										HX_STACK_LINE(4153)
										_this1->_data[(i1 + (int)1)] = (int)-2147483647;
										HX_STACK_LINE(4153)
										_this1->_data[(i1 + (int)2)] = (int)-1;
										HX_STACK_LINE(4153)
										--(_this1->_size);
										HX_STACK_LINE(4153)
										if (((_this1->_sizeLevel > (int)0))){
											HX_STACK_LINE(4153)
											if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
												HX_STACK_LINE(4153)
												if ((_this1->_isResizable)){
													HX_STACK_LINE(4153)
													_this1->_shrink();
												}
											}
										}
										HX_STACK_LINE(4153)
										true;
									}
									else{
										HX_STACK_LINE(4153)
										false;
									}
								}
							}
						}
						HX_STACK_LINE(4153)
						if ((shrink)){
							HX_STACK_LINE(4153)
							(_this->_sizeLevel)--;
							HX_STACK_LINE(4153)
							int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
							HX_STACK_LINE(4153)
							int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
							struct _Function_5_1{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4153);
									{
										HX_STACK_LINE(4153)
										Array< int > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(4153)
										a = Array_obj< int >::__new();
										HX_STACK_LINE(4153)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(4153)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(4153)
							_this->_next = _Function_5_1::Block(newSize);
							HX_STACK_LINE(4153)
							{
								HX_STACK_LINE(4153)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(4153)
								while(((_g1 < _g))){
									HX_STACK_LINE(4153)
									int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(4153)
									_this->_next[i1] = (i1 + (int)1);
								}
							}
							HX_STACK_LINE(4153)
							_this->_next[(newSize - (int)1)] = (int)-1;
							HX_STACK_LINE(4153)
							_this->_free = (int)0;
							struct _Function_5_2{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4153);
									{
										HX_STACK_LINE(4153)
										Array< int > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(4153)
										a = Array_obj< int >::__new();
										HX_STACK_LINE(4153)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(4153)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(4153)
							Array< int > tmpKeys = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
							HX_STACK_LINE(4153)
							{
								HX_STACK_LINE(4153)
								int k1 = newSize;		HX_STACK_VAR(k1,"k1");
								HX_STACK_LINE(4153)
								if (((k1 == (int)-1))){
									HX_STACK_LINE(4153)
									k1 = tmpKeys->length;
								}
								HX_STACK_LINE(4153)
								{
									HX_STACK_LINE(4153)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(4153)
									while(((_g < k1))){
										HX_STACK_LINE(4153)
										int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(4153)
										tmpKeys[i1] = (int)-2147483647;
									}
								}
							}
							struct _Function_5_3{
								inline static Array< ::Dynamic > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4153);
									{
										HX_STACK_LINE(4153)
										Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(4153)
										a = Array_obj< ::Dynamic >::__new();
										HX_STACK_LINE(4153)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(4153)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(4153)
							Array< ::Dynamic > tmpVals = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
							HX_STACK_LINE(4153)
							for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
								int i1 = __it->next();
								{
									HX_STACK_LINE(4153)
									tmpKeys[_this->_free] = _this->_keys->__get(i1);
									HX_STACK_LINE(4153)
									tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
									HX_STACK_LINE(4153)
									_this->_free = _this->_next->__get(_this->_free);
								}
;
							}
							HX_STACK_LINE(4153)
							_this->_keys = tmpKeys;
							HX_STACK_LINE(4153)
							_this->_vals = tmpVals;
							HX_STACK_LINE(4153)
							{
								HX_STACK_LINE(4153)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(4153)
								while(((_g1 < _g))){
									HX_STACK_LINE(4153)
									int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(4153)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									int key = _this->_keys->__get(i1);		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(4153)
									int i2 = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
									HX_STACK_LINE(4153)
									if (((i2 == (int)-1))){
										HX_STACK_LINE(4153)
										false;
									}
									else{
										HX_STACK_LINE(4153)
										if (((_this1->_data->__get(i2) == key))){
											HX_STACK_LINE(4153)
											_this1->_data[(i2 + (int)1)] = i1;
											HX_STACK_LINE(4153)
											true;
										}
										else{
											HX_STACK_LINE(4153)
											i2 = _this1->_data->__get((i2 + (int)2));
											HX_STACK_LINE(4153)
											while(((i2 != (int)-1))){
												HX_STACK_LINE(4153)
												if (((_this1->_data->__get(i2) == key))){
													HX_STACK_LINE(4153)
													_this1->_data[(i2 + (int)1)] = i1;
													HX_STACK_LINE(4153)
													break;
												}
												HX_STACK_LINE(4153)
												i2 = _this1->_data->__get((i2 + (int)2));
											}
											HX_STACK_LINE(4153)
											(i2 != (int)-1);
										}
									}
								}
							}
						}
						HX_STACK_LINE(4153)
						true;
					}
				}
;
			}
		}
		HX_STACK_LINE(4157)
		this->collisionsCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,clearCollisionList,(void))

Void Actor_obj::collideTypesInto( Array< int > types,Float x,Float y,Array< ::Dynamic > array){
{
		HX_STACK_PUSH("Actor::collideTypesInto","com/stencyl/models/Actor.hx",4142);
		HX_STACK_THIS(this);
		HX_STACK_ARG(types,"types");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(array,"array");
		HX_STACK_LINE(4143)
		::String type;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(4144)
		{
			HX_STACK_LINE(4144)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(4144)
			while(((_g < types->length))){
				HX_STACK_LINE(4144)
				int type1 = types->__get(_g);		HX_STACK_VAR(type1,"type1");
				HX_STACK_LINE(4144)
				++(_g);
				HX_STACK_LINE(4144)
				this->collideInto(type1,x,y,array);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,collideTypesInto,(void))

Void Actor_obj::collideInto( int groupID,Float x,Float y,Array< ::Dynamic > array){
{
		HX_STACK_PUSH("Actor::collideInto","com/stencyl/models/Actor.hx",4084);
		HX_STACK_THIS(this);
		HX_STACK_ARG(groupID,"groupID");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(array,"array");
		HX_STACK_LINE(4086)
		::com::stencyl::models::actor::Group actorList = this->engine->getGroup(groupID,null());		HX_STACK_VAR(actorList,"actorList");
		HX_STACK_LINE(4088)
		this->_x = this->realX;
		HX_STACK_LINE(4088)
		this->_y = this->realY;
		HX_STACK_LINE(4089)
		this->resetReal(x,y);
		HX_STACK_LINE(4090)
		int n = array->length;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(4092)
		if (((this->_mask == null()))){
			HX_STACK_LINE(4094)
			{
				HX_STACK_LINE(4094)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = actorList->list;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(4094)
				while(((_g < _g1->length))){
					HX_STACK_LINE(4094)
					::com::stencyl::models::Actor actor = _g1->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
					HX_STACK_LINE(4094)
					++(_g);
					HX_STACK_LINE(4096)
					::com::stencyl::models::Actor e = actor;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(4098)
					if ((e->recycled)){
						HX_STACK_LINE(4099)
						continue;
					}
					HX_STACK_LINE(4103)
					if (((bool((bool((bool((bool((bool(((this->colX + this->cacheWidth) >= e->colX)) && bool(((this->colY + this->cacheHeight) >= e->colY)))) && bool((this->colX <= (e->colX + e->cacheWidth))))) && bool((this->colY <= (e->colY + e->cacheHeight))))) && bool(e->collidable))) && bool((e != hx::ObjectPtr<OBJ_>(this)))))){
						HX_STACK_LINE(4108)
						if (((bool((e->_mask == null())) || bool(e->_mask->collide(this->HITBOX))))){
							HX_STACK_LINE(4109)
							array[(n)++] = e;
						}
					}
				}
			}
			HX_STACK_LINE(4112)
			this->resetReal(this->_x,this->_y);
			HX_STACK_LINE(4113)
			return null();
		}
		HX_STACK_LINE(4116)
		{
			HX_STACK_LINE(4116)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = actorList->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(4116)
			while(((_g < _g1->length))){
				HX_STACK_LINE(4116)
				::com::stencyl::models::Actor actor = _g1->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
				HX_STACK_LINE(4116)
				++(_g);
				HX_STACK_LINE(4118)
				::com::stencyl::models::Actor e = actor;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(4120)
				if (((bool((bool((bool((bool((bool(((this->colX + this->cacheWidth) >= e->colX)) && bool(((this->colY + this->cacheHeight) >= e->colY)))) && bool((this->colX <= (e->colX + e->cacheWidth))))) && bool((this->colY <= (e->colY + e->cacheHeight))))) && bool(e->collidable))) && bool((e != hx::ObjectPtr<OBJ_>(this)))))){
					HX_STACK_LINE(4125)
					if ((this->_mask->collide((  (((e->_mask != null()))) ? ::com::stencyl::models::collision::Mask(e->_mask) : ::com::stencyl::models::collision::Mask(e->HITBOX) )))){
						HX_STACK_LINE(4126)
						array[(n)++] = e;
					}
				}
			}
		}
		HX_STACK_LINE(4129)
		this->resetReal(this->_x,this->_y);
		HX_STACK_LINE(4130)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,collideInto,(void))

::com::stencyl::models::Actor Actor_obj::collideWith( ::com::stencyl::models::Actor e,Float x,Float y){
	HX_STACK_PUSH("Actor::collideWith","com/stencyl/models/Actor.hx",4045);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(4046)
	this->_x = this->realX;
	HX_STACK_LINE(4046)
	this->_y = this->realY;
	HX_STACK_LINE(4047)
	this->resetReal(x,y);
	HX_STACK_LINE(4049)
	if (((bool((bool((bool((bool((bool(((this->colX + this->cacheWidth) >= e->colX)) && bool(((this->colY + this->cacheHeight) >= e->colY)))) && bool((this->colX <= (e->colX + e->cacheWidth))))) && bool((this->colY <= (e->colY + e->cacheHeight))))) && bool(this->collidable))) && bool(e->collidable)))){
		HX_STACK_LINE(4055)
		if (((this->_mask == null()))){
			HX_STACK_LINE(4057)
			if (((bool((e->_mask == null())) || bool(e->_mask->collide(this->HITBOX))))){
				HX_STACK_LINE(4059)
				this->resetReal(this->_x,this->_y);
				HX_STACK_LINE(4060)
				return e;
			}
			HX_STACK_LINE(4062)
			this->resetReal(this->_x,this->_y);
			HX_STACK_LINE(4063)
			return null();
		}
		HX_STACK_LINE(4065)
		if ((this->_mask->collide((  (((e->_mask != null()))) ? ::com::stencyl::models::collision::Mask(e->_mask) : ::com::stencyl::models::collision::Mask(e->HITBOX) )))){
			HX_STACK_LINE(4067)
			this->resetReal(this->_x,this->_y);
			HX_STACK_LINE(4068)
			return e;
		}
	}
	HX_STACK_LINE(4071)
	this->resetReal(this->_x,this->_y);
	HX_STACK_LINE(4072)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,collideWith,return )

::com::stencyl::models::Actor Actor_obj::collideTypes( Dynamic types,Float x,Float y){
	HX_STACK_PUSH("Actor::collideTypes","com/stencyl/models/Actor.hx",4012);
	HX_STACK_THIS(this);
	HX_STACK_ARG(types,"types");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(4013)
	if ((::Std_obj::is(types,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(4014)
		return this->collide(types,x,y);
	}
	else{
		HX_STACK_LINE(4019)
		Array< int > a = types;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(4020)
		if (((a != null()))){
			HX_STACK_LINE(4022)
			::com::stencyl::models::Actor e;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(4023)
			int type;		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(4024)
			{
				HX_STACK_LINE(4024)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(4024)
				while(((_g < a->length))){
					HX_STACK_LINE(4024)
					int type1 = a->__get(_g);		HX_STACK_VAR(type1,"type1");
					HX_STACK_LINE(4024)
					++(_g);
					HX_STACK_LINE(4026)
					if (((type1 == ::com::stencyl::models::GameModel_obj::REGION_ID))){
						HX_STACK_LINE(4026)
						continue;
					}
					HX_STACK_LINE(4028)
					e = this->collide(type1,x,y);
					HX_STACK_LINE(4029)
					if (((e != null()))){
						HX_STACK_LINE(4029)
						return e;
					}
				}
			}
		}
	}
	HX_STACK_LINE(4034)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,collideTypes,return )

::com::stencyl::models::Actor Actor_obj::collide( int groupID,Float x,Float y){
	HX_STACK_PUSH("Actor::collide","com/stencyl/models/Actor.hx",3940);
	HX_STACK_THIS(this);
	HX_STACK_ARG(groupID,"groupID");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(3942)
	::com::stencyl::models::actor::Group actorList = this->engine->getGroup(groupID,null());		HX_STACK_VAR(actorList,"actorList");
	HX_STACK_LINE(3944)
	this->_x = this->realX;
	HX_STACK_LINE(3944)
	this->_y = this->realY;
	HX_STACK_LINE(3945)
	this->resetReal(x,y);
	HX_STACK_LINE(3947)
	if (((this->_mask == null()))){
		HX_STACK_LINE(3949)
		{
			HX_STACK_LINE(3949)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = actorList->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(3949)
			while(((_g < _g1->length))){
				HX_STACK_LINE(3949)
				::com::stencyl::models::Actor actor = _g1->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
				HX_STACK_LINE(3949)
				++(_g);
				HX_STACK_LINE(3951)
				::com::stencyl::models::Actor e = actor;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(3953)
				if ((e->recycled)){
					HX_STACK_LINE(3954)
					continue;
				}
				HX_STACK_LINE(3958)
				if (((bool((bool((bool((bool((bool(((this->colX + this->cacheWidth) >= e->colX)) && bool(((this->colY + this->cacheHeight) >= e->colY)))) && bool((this->colX <= (e->colX + e->cacheWidth))))) && bool((this->colY <= (e->colY + e->cacheHeight))))) && bool(e->collidable))) && bool((e != hx::ObjectPtr<OBJ_>(this)))))){
					HX_STACK_LINE(3963)
					if (((bool((e->_mask == null())) || bool(e->_mask->collide(this->HITBOX))))){
						HX_STACK_LINE(3966)
						this->resetReal(this->_x,this->_y);
						HX_STACK_LINE(3968)
						return e;
					}
				}
			}
		}
		HX_STACK_LINE(3973)
		this->resetReal(this->_x,this->_y);
		HX_STACK_LINE(3974)
		return null();
	}
	HX_STACK_LINE(3977)
	{
		HX_STACK_LINE(3977)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = actorList->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(3977)
		while(((_g < _g1->length))){
			HX_STACK_LINE(3977)
			::com::stencyl::models::Actor actor = _g1->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
			HX_STACK_LINE(3977)
			++(_g);
			HX_STACK_LINE(3979)
			::com::stencyl::models::Actor e = actor;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(3981)
			if ((e->recycled)){
				HX_STACK_LINE(3982)
				continue;
			}
			HX_STACK_LINE(3986)
			if (((bool((bool((bool((bool((bool(((this->colX + this->cacheWidth) >= e->colX)) && bool(((this->colY + this->cacheHeight) >= e->colY)))) && bool((this->colX <= (e->colX + e->cacheWidth))))) && bool((this->colY <= (e->colY + e->cacheHeight))))) && bool(e->collidable))) && bool((e != hx::ObjectPtr<OBJ_>(this)))))){
				HX_STACK_LINE(3991)
				if ((this->_mask->collide((  (((e->_mask != null()))) ? ::com::stencyl::models::collision::Mask(e->_mask) : ::com::stencyl::models::collision::Mask(e->HITBOX) )))){
					HX_STACK_LINE(3994)
					this->resetReal(this->_x,this->_y);
					HX_STACK_LINE(3996)
					return e;
				}
			}
		}
	}
	HX_STACK_LINE(4000)
	this->resetReal(this->_x,this->_y);
	HX_STACK_LINE(4001)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,collide,return )

::com::stencyl::models::collision::Mask Actor_obj::set_shape( ::com::stencyl::models::collision::Mask value){
	HX_STACK_PUSH("Actor::set_shape","com/stencyl/models/Actor.hx",3924);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(3925)
	if (((this->_mask == value))){
		HX_STACK_LINE(3925)
		return value;
	}
	HX_STACK_LINE(3926)
	if (((this->_mask != null()))){
		HX_STACK_LINE(3926)
		this->_mask->assignTo(null());
	}
	HX_STACK_LINE(3927)
	this->_mask = value;
	HX_STACK_LINE(3928)
	if (((value != null()))){
		HX_STACK_LINE(3928)
		this->_mask->assignTo(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(3929)
	return this->_mask;
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,set_shape,return )

::com::stencyl::models::collision::Mask Actor_obj::get_shape( ){
	HX_STACK_PUSH("Actor::get_shape","com/stencyl/models/Actor.hx",3922);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3922)
	return this->_mask;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,get_shape,return )

Void Actor_obj::setLocation( Float x,Float y){
{
		HX_STACK_PUSH("Actor::setLocation","com/stencyl/models/Actor.hx",3905);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(3906)
		this->realX = x;
		HX_STACK_LINE(3907)
		this->realY = y;
		HX_STACK_LINE(3909)
		this->setX(x,false,true);
		HX_STACK_LINE(3910)
		this->setY(y,false,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,setLocation,(void))

::String Actor_obj::toString( ){
	HX_STACK_PUSH("Actor::toString","com/stencyl/models/Actor.hx",3891);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3892)
	if (((this->get_name() == null()))){
		HX_STACK_LINE(3893)
		return (HX_CSTRING("Unknown Actor ") + this->ID);
	}
	HX_STACK_LINE(3897)
	return ((((HX_CSTRING("[Actor ") + this->ID) + HX_CSTRING(",")) + this->get_name()) + HX_CSTRING("]"));
}


Void Actor_obj::killSelfAfterLeavingScreen( ){
{
		HX_STACK_PUSH("Actor::killSelfAfterLeavingScreen","com/stencyl/models/Actor.hx",3886);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3886)
		this->killLeaveScreen = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,killSelfAfterLeavingScreen,(void))

::com::stencyl::models::Actor Actor_obj::getLastCollidedActor( ){
	HX_STACK_PUSH("Actor::getLastCollidedActor","com/stencyl/models/Actor.hx",3879);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3879)
	return ::com::stencyl::models::Actor_obj::lastCollided;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getLastCollidedActor,return )

bool Actor_obj::isInScene( ){
	HX_STACK_PUSH("Actor::isInScene","com/stencyl/models/Actor.hx",3870);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3870)
	return (bool((bool((bool((bool(((bool(this->isLightweight) || bool(this->body->isActive())))) && bool((this->getX(null()) >= (int)0)))) && bool((this->getY(null()) >= (int)0)))) && bool((this->getX(null()) < ::com::stencyl::Engine_obj::sceneWidth)))) && bool((this->getY(null()) < ::com::stencyl::Engine_obj::sceneHeight)));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isInScene,return )

bool Actor_obj::isOnScreen( ){
	HX_STACK_PUSH("Actor::isOnScreen","com/stencyl/models/Actor.hx",3853);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3854)
	Float cameraX = (Float(::com::stencyl::Engine_obj::cameraX) / Float(::com::stencyl::Engine_obj::SCALE));		HX_STACK_VAR(cameraX,"cameraX");
	HX_STACK_LINE(3855)
	Float cameraY = (Float(::com::stencyl::Engine_obj::cameraY) / Float(::com::stencyl::Engine_obj::SCALE));		HX_STACK_VAR(cameraY,"cameraY");
	HX_STACK_LINE(3857)
	int left = ::com::stencyl::Engine_obj::paddingLeft;		HX_STACK_VAR(left,"left");
	HX_STACK_LINE(3858)
	int top = ::com::stencyl::Engine_obj::paddingTop;		HX_STACK_VAR(top,"top");
	HX_STACK_LINE(3859)
	int right = ::com::stencyl::Engine_obj::paddingRight;		HX_STACK_VAR(right,"right");
	HX_STACK_LINE(3860)
	int bottom = ::com::stencyl::Engine_obj::paddingBottom;		HX_STACK_VAR(bottom,"bottom");
	HX_STACK_LINE(3862)
	return (bool((bool((bool((bool(((bool(this->isLightweight) || bool(this->body->isActive())))) && bool((this->getX(null()) >= (-(cameraX) - left))))) && bool((this->getY(null()) >= (-(cameraY) - top))))) && bool((this->getX(null()) < ((-(cameraX) + ::com::stencyl::Engine_obj::screenWidth) + right))))) && bool((this->getY(null()) < ((-(cameraY) + ::com::stencyl::Engine_obj::screenHeight) + bottom))));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isOnScreen,return )

bool Actor_obj::isAlive( ){
	HX_STACK_PUSH("Actor::isAlive","com/stencyl/models/Actor.hx",3847);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3847)
	return !(((bool((bool(this->dead) || bool(this->dying))) || bool(this->recycled))));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isAlive,return )

bool Actor_obj::isDying( ){
	HX_STACK_PUSH("Actor::isDying","com/stencyl/models/Actor.hx",3842);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3842)
	return this->dying;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isDying,return )

Void Actor_obj::die( ){
{
		HX_STACK_PUSH("Actor::die","com/stencyl/models/Actor.hx",3820);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3821)
		this->dying = true;
		HX_STACK_LINE(3823)
		Dynamic a = this->engine->whenTypeGroupDiesListeners->get(this->getType());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(3824)
		Dynamic b = this->engine->whenTypeGroupDiesListeners->get(this->getGroup());		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(3826)
		{
			HX_STACK_LINE(3826)
			Dynamic listeners = this->whenKilledListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(3826)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(3826)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(3826)
				try{
					HX_STACK_LINE(3826)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(3826)
					f(listeners).Cast< Void >();
					HX_STACK_LINE(3826)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(3826)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(3826)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3829,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(3826)
				(r)++;
			}
		}
		HX_STACK_LINE(3828)
		if (((a != null()))){
			HX_STACK_LINE(3830)
			Dynamic listeners = a;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(3830)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(3830)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(3830)
				try{
					HX_STACK_LINE(3830)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(3830)
					f(hx::ObjectPtr<OBJ_>(this),listeners).Cast< Void >();
					HX_STACK_LINE(3830)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(3830)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(3830)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(3830)
				(r)++;
			}
		}
		HX_STACK_LINE(3833)
		if (((b != null()))){
			HX_STACK_LINE(3835)
			Dynamic listeners = b;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(3835)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(3835)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(3835)
				try{
					HX_STACK_LINE(3835)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(3835)
					f(hx::ObjectPtr<OBJ_>(this),listeners).Cast< Void >();
					HX_STACK_LINE(3835)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(3835)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(3835)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(3835)
				(r)++;
			}
		}
		HX_STACK_LINE(3838)
		this->removeAllListeners();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,die,(void))

bool Actor_obj::alwaysSimulates( ){
	HX_STACK_PUSH("Actor::alwaysSimulates","com/stencyl/models/Actor.hx",3815);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3815)
	return this->alwaysSimulate;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,alwaysSimulates,return )

Void Actor_obj::makeSometimesSimulate( hx::Null< bool >  __o_alterBody){
bool alterBody = __o_alterBody.Default(true);
	HX_STACK_PUSH("Actor::makeSometimesSimulate","com/stencyl/models/Actor.hx",3804);
	HX_STACK_THIS(this);
	HX_STACK_ARG(alterBody,"alterBody");
{
		HX_STACK_LINE(3805)
		if (((bool(!(this->isLightweight)) && bool(alterBody)))){
			HX_STACK_LINE(3806)
			this->body->setAlwaysActive(false);
		}
		HX_STACK_LINE(3810)
		this->alwaysSimulate = false;
		HX_STACK_LINE(3811)
		this->engine->removeHUDActor(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,makeSometimesSimulate,(void))

Void Actor_obj::makeAlwaysSimulate( hx::Null< bool >  __o_alterBody){
bool alterBody = __o_alterBody.Default(true);
	HX_STACK_PUSH("Actor::makeAlwaysSimulate","com/stencyl/models/Actor.hx",3793);
	HX_STACK_THIS(this);
	HX_STACK_ARG(alterBody,"alterBody");
{
		HX_STACK_LINE(3794)
		if (((bool(!(this->isLightweight)) && bool(alterBody)))){
			HX_STACK_LINE(3795)
			this->body->setAlwaysActive(true);
		}
		HX_STACK_LINE(3799)
		this->alwaysSimulate = true;
		HX_STACK_LINE(3800)
		this->engine->addHUDActor(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,makeAlwaysSimulate,(void))

bool Actor_obj::isAnchoredToScreen( ){
	HX_STACK_PUSH("Actor::isAnchoredToScreen","com/stencyl/models/Actor.hx",3788);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3788)
	return this->isHUD;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isAnchoredToScreen,return )

Void Actor_obj::unanchorFromScreen( ){
{
		HX_STACK_PUSH("Actor::unanchorFromScreen","com/stencyl/models/Actor.hx",3773);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3774)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(3775)
			this->body->setAlwaysActive(this->alwaysSimulate);
		}
		HX_STACK_LINE(3779)
		this->isHUD = false;
		HX_STACK_LINE(3780)
		this->engine->removeHUDActor(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(3781)
		this->engine->hudLayer->removeChild(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(3782)
		this->engine->moveActorToLayer(hx::ObjectPtr<OBJ_>(this),this->layerID);
		HX_STACK_LINE(3784)
		this->updateMatrix = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,unanchorFromScreen,(void))

Void Actor_obj::anchorToScreen( ){
{
		HX_STACK_PUSH("Actor::anchorToScreen","com/stencyl/models/Actor.hx",3758);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3759)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(3760)
			this->body->setAlwaysActive(true);
		}
		HX_STACK_LINE(3764)
		this->isHUD = true;
		HX_STACK_LINE(3765)
		this->engine->removeActorFromLayer(hx::ObjectPtr<OBJ_>(this),this->layerID);
		HX_STACK_LINE(3766)
		this->engine->addHUDActor(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(3767)
		this->engine->hudLayer->addChild(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(3769)
		this->updateMatrix = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,anchorToScreen,(void))

Void Actor_obj::removeAllListeners( ){
{
		HX_STACK_PUSH("Actor::removeAllListeners","com/stencyl/models/Actor.hx",3731);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3732)
		{
			HX_STACK_LINE(3732)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->allListenerReferences->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(3732)
			while(((_g1 < _g))){
				HX_STACK_LINE(3732)
				int k = (_g1)++;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(3734)
				Dynamic listener = this->allListenerReferences->__GetItem(k);		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(3736)
				if (((listener != null()))){
					HX_STACK_LINE(3738)
					Dynamic list = hx::TCastToArray(this->allListeners->get(k));		HX_STACK_VAR(list,"list");
					HX_STACK_LINE(3740)
					if (((list != null()))){
						HX_STACK_LINE(3742)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						int _g2 = list->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(3742)
						while(((_g3 < _g2))){
							HX_STACK_LINE(3742)
							int r = (_g3)++;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(3744)
							{
								HX_STACK_LINE(3744)
								Dynamic value = list->__GetItem(r);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(3744)
								int len = listener->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(3744)
								int i = len;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(3744)
								while(((i > (int)-1))){
									HX_STACK_LINE(3744)
									if (((listener->__GetItem(i) == value))){
										HX_STACK_LINE(3744)
										listener->__Field(HX_CSTRING("slice"),true)(i,(int)1);
									}
									HX_STACK_LINE(3744)
									(i)--;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(3750)
		{
			HX_STACK_LINE(3750)
			Dynamic arr = this->allListenerReferences;		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(3750)
			arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,removeAllListeners,(void))

Void Actor_obj::registerListener( Dynamic type,Dynamic listener){
{
		HX_STACK_PUSH("Actor::registerListener","com/stencyl/models/Actor.hx",3708);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(listener,"listener");
		HX_STACK_LINE(3709)
		int ePos = ::com::stencyl::utils::Utils_obj::indexOf(this->allListenerReferences,type);		HX_STACK_VAR(ePos,"ePos");
		HX_STACK_LINE(3711)
		Dynamic listenerList = null();		HX_STACK_VAR(listenerList,"listenerList");
		HX_STACK_LINE(3713)
		if (((ePos != (int)-1))){
			HX_STACK_LINE(3714)
			listenerList = this->allListeners->get(ePos);
		}
		else{
			HX_STACK_LINE(3720)
			this->allListenerReferences->__Field(HX_CSTRING("push"),true)(type);
			HX_STACK_LINE(3721)
			ePos = (this->allListenerReferences->__Field(HX_CSTRING("length"),true) - (int)1);
			HX_STACK_LINE(3723)
			listenerList = Dynamic( Array_obj<Dynamic>::__new() );
			HX_STACK_LINE(3724)
			this->allListeners->set(ePos,listenerList);
		}
		HX_STACK_LINE(3727)
		listenerList->__Field(HX_CSTRING("push"),true)(listener);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,registerListener,(void))

Dynamic Actor_obj::hasActorValue( ::String name){
	HX_STACK_PUSH("Actor::hasActorValue","com/stencyl/models/Actor.hx",3694);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(3695)
	if (((this->registry == null()))){
		HX_STACK_LINE(3696)
		return null();
	}
	HX_STACK_LINE(3700)
	return (this->registry->get(name) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,hasActorValue,return )

Dynamic Actor_obj::getActorValue( ::String name){
	HX_STACK_PUSH("Actor::getActorValue","com/stencyl/models/Actor.hx",3681);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(3681)
	if (((this->registry == null()))){
		HX_STACK_LINE(3683)
		return null();
	}
	else{
		HX_STACK_LINE(3688)
		return this->registry->get(name);
	}
	HX_STACK_LINE(3681)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,getActorValue,return )

Void Actor_obj::setActorValue( ::String name,Dynamic value){
{
		HX_STACK_PUSH("Actor::setActorValue","com/stencyl/models/Actor.hx",3673);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(3673)
		if (((this->registry != null()))){
			HX_STACK_LINE(3676)
			Dynamic value1 = value;		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(3676)
			this->registry->set(name,value1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,setActorValue,(void))

Dynamic Actor_obj::say( ::String behaviorName,::String msg,Dynamic args){
	HX_STACK_PUSH("Actor::say","com/stencyl/models/Actor.hx",3664);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(3664)
	return this->behaviors->call2(behaviorName,msg,args);
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,say,return )

Dynamic Actor_obj::shout( ::String msg,Dynamic args){
	HX_STACK_PUSH("Actor::shout","com/stencyl/models/Actor.hx",3659);
	HX_STACK_THIS(this);
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(3659)
	return this->behaviors->call(msg,args);
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,shout,return )

Void Actor_obj::setValue( ::String behaviorName,::String attributeName,Dynamic value){
{
		HX_STACK_PUSH("Actor::setValue","com/stencyl/models/Actor.hx",3654);
		HX_STACK_THIS(this);
		HX_STACK_ARG(behaviorName,"behaviorName");
		HX_STACK_ARG(attributeName,"attributeName");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(3654)
		this->behaviors->setAttribute(behaviorName,attributeName,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,setValue,(void))

Dynamic Actor_obj::getValue( ::String behaviorName,::String attributeName){
	HX_STACK_PUSH("Actor::getValue","com/stencyl/models/Actor.hx",3649);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(attributeName,"attributeName");
	HX_STACK_LINE(3649)
	return this->behaviors->getAttribute(behaviorName,attributeName);
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,getValue,return )

Void Actor_obj::enableAllBehaviors( ){
{
		HX_STACK_PUSH("Actor::enableAllBehaviors","com/stencyl/models/Actor.hx",3634);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3634)
		if (((this->behaviors != null()))){
			HX_STACK_LINE(3637)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->behaviors->behaviors;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(3637)
			while(((_g < _g1->length))){
				HX_STACK_LINE(3637)
				::com::stencyl::behavior::Behavior b = _g1->__get(_g).StaticCast< ::com::stencyl::behavior::Behavior >();		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(3637)
				++(_g);
				HX_STACK_LINE(3639)
				b->enabled = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,enableAllBehaviors,(void))

bool Actor_obj::isBehaviorEnabled( ::String name){
	HX_STACK_PUSH("Actor::isBehaviorEnabled","com/stencyl/models/Actor.hx",3624);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(3625)
	if (((this->behaviors != null()))){
		HX_STACK_LINE(3626)
		return this->behaviors->isBehaviorEnabled(name);
	}
	HX_STACK_LINE(3630)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,isBehaviorEnabled,return )

Void Actor_obj::disableBehavior( ::String name){
{
		HX_STACK_PUSH("Actor::disableBehavior","com/stencyl/models/Actor.hx",3616);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(3616)
		if (((this->behaviors != null()))){
			HX_STACK_LINE(3618)
			this->behaviors->disableBehavior(name);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,disableBehavior,(void))

Void Actor_obj::enableBehavior( ::String name){
{
		HX_STACK_PUSH("Actor::enableBehavior","com/stencyl/models/Actor.hx",3608);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(3608)
		if (((this->behaviors != null()))){
			HX_STACK_LINE(3610)
			this->behaviors->enableBehavior(name);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,enableBehavior,(void))

bool Actor_obj::hasBehavior( ::String name){
	HX_STACK_PUSH("Actor::hasBehavior","com/stencyl/models/Actor.hx",3598);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(3599)
	if (((this->behaviors != null()))){
		HX_STACK_LINE(3600)
		return this->behaviors->hasBehavior(name);
	}
	HX_STACK_LINE(3604)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,hasBehavior,return )

Void Actor_obj::addBehavior( ::com::stencyl::behavior::Behavior b){
{
		HX_STACK_PUSH("Actor::addBehavior","com/stencyl/models/Actor.hx",3590);
		HX_STACK_THIS(this);
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(3590)
		if (((this->behaviors != null()))){
			HX_STACK_LINE(3592)
			this->behaviors->add(b);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,addBehavior,(void))

Void Actor_obj::clearFilters( ){
{
		HX_STACK_PUSH("Actor::clearFilters","com/stencyl/models/Actor.hx",3559);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3559)
		if ((this->animsBackedUp)){
			HX_STACK_LINE(3567)
			::flash::geom::Point pt = ::flash::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(pt,"pt");
			HX_STACK_LINE(3569)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->backupAnimationMap->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(3571)
					Dynamic imageData = this->backupAnimationMap->get(key);		HX_STACK_VAR(imageData,"imageData");
					HX_STACK_LINE(3572)
					Dynamic sheetValue = this->animationMap->get(key);		HX_STACK_VAR(sheetValue,"sheetValue");
					HX_STACK_LINE(3573)
					sheetValue->__Field(HX_CSTRING("tilesheet"),true)->__Field(HX_CSTRING("__bitmap"),true)->__Field(HX_CSTRING("copyPixels"),true)(imageData,imageData->__Field(HX_CSTRING("rect"),true),pt);
					HX_STACK_LINE(3574)
					sheetValue->__FieldRef(HX_CSTRING("tint")) = false;
					HX_STACK_LINE(3575)
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
		HX_STACK_PUSH("Actor::setFilter","com/stencyl/models/Actor.hx",3298);
		HX_STACK_THIS(this);
		HX_STACK_ARG(filter,"filter");
		HX_STACK_LINE(3299)
		::String filterName;		HX_STACK_VAR(filterName,"filterName");
		HX_STACK_LINE(3300)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(3301)
		int srcA;		HX_STACK_VAR(srcA,"srcA");
		HX_STACK_LINE(3302)
		int srcR;		HX_STACK_VAR(srcR,"srcR");
		HX_STACK_LINE(3303)
		int srcG;		HX_STACK_VAR(srcG,"srcG");
		HX_STACK_LINE(3304)
		int srcB;		HX_STACK_VAR(srcB,"srcB");
		HX_STACK_LINE(3305)
		Float redResult;		HX_STACK_VAR(redResult,"redResult");
		HX_STACK_LINE(3306)
		Float greenResult;		HX_STACK_VAR(greenResult,"greenResult");
		HX_STACK_LINE(3307)
		Float blueResult;		HX_STACK_VAR(blueResult,"blueResult");
		HX_STACK_LINE(3310)
		if ((!(this->animsBackedUp))){
			HX_STACK_LINE(3312)
			this->backupAnimationMap = ::haxe::ds::StringMap_obj::__new();
			HX_STACK_LINE(3314)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->animationMap->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(3316)
					Dynamic anim = this->animationMap->get(key);		HX_STACK_VAR(anim,"anim");
					HX_STACK_LINE(3318)
					if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
						HX_STACK_LINE(3320)
						{
							HX_STACK_LINE(3320)
							Dynamic value = anim->__Field(HX_CSTRING("tilesheet"),true)->__Field(HX_CSTRING("__bitmap"),true)->__Field(HX_CSTRING("clone"),true)();		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(3320)
							this->backupAnimationMap->set(key,value);
						}
						HX_STACK_LINE(3322)
						int frameWidth = ::Std_obj::_int((Float(anim->__Field(HX_CSTRING("tilesheet"),true)->__Field(HX_CSTRING("__bitmap"),true)->__Field(HX_CSTRING("width"),true)) / Float(anim->__Field(HX_CSTRING("numFrames"),true))));		HX_STACK_VAR(frameWidth,"frameWidth");
						HX_STACK_LINE(3323)
						Float frameHeight = anim->__Field(HX_CSTRING("tilesheet"),true)->__Field(HX_CSTRING("__bitmap"),true)->__Field(HX_CSTRING("height"),true);		HX_STACK_VAR(frameHeight,"frameHeight");
						HX_STACK_LINE(3324)
						::flash::display::BitmapData tempData = anim->__Field(HX_CSTRING("tilesheet"),true)->__Field(HX_CSTRING("__bitmap"),true)->__Field(HX_CSTRING("clone"),true)();		HX_STACK_VAR(tempData,"tempData");
						HX_STACK_LINE(3325)
						::openfl::display::Tilesheet tempTilesheet = ::openfl::display::Tilesheet_obj::__new(tempData);		HX_STACK_VAR(tempTilesheet,"tempTilesheet");
						HX_STACK_LINE(3327)
						int i1 = (int)0;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(3328)
						while(((i1 < anim->__Field(HX_CSTRING("numFrames"),true)))){
							HX_STACK_LINE(3330)
							tempTilesheet->addTileRect(::flash::geom::Rectangle_obj::__new((frameWidth * i1),(int)0,frameWidth,frameHeight),null());
							HX_STACK_LINE(3331)
							(i1)++;
						}
						HX_STACK_LINE(3334)
						anim->__FieldRef(HX_CSTRING("tilesheet")) = tempTilesheet;
						HX_STACK_LINE(3335)
						anim->__Field(HX_CSTRING("updateBitmap"),true)();
					}
				}
;
			}
			HX_STACK_LINE(3338)
			this->animsBackedUp = true;
		}
		HX_STACK_LINE(3342)
		Dynamic defaultMatrix = filter->__GetItem((int)0);		HX_STACK_VAR(defaultMatrix,"defaultMatrix");
		HX_STACK_LINE(3344)
		filterName = defaultMatrix->__GetItem((int)0);
		HX_STACK_LINE(3346)
		if (((filterName == HX_CSTRING("NegativeFilter")))){
			struct _Function_2_1{
				inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3348);
					{
						HX_STACK_LINE(3348)
						Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_e)
						Dynamic run(){
							HX_STACK_PUSH("*::_Function_3_1","com/stencyl/models/Actor.hx",3348);
							{
								HX_STACK_LINE(3348)
								return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0(return)

						HX_STACK_LINE(3348)
						return  Dynamic(new _Function_3_1(_e));
					}
					return null();
				}
			};
			HX_STACK_LINE(3347)
			for(::cpp::FastIterator_obj< ::com::stencyl::graphics::SheetAnimation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::graphics::SheetAnimation >((_Function_2_1::Block(this))());  __it->hasNext(); ){
				::com::stencyl::graphics::SheetAnimation anim = __it->next();
				if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
					HX_STACK_LINE(3352)
					::flash::display::BitmapData imageData = anim->tilesheet->__bitmap;		HX_STACK_VAR(imageData,"imageData");
					HX_STACK_LINE(3353)
					::flash::utils::ByteArray byteArray = imageData->getPixels(imageData->get_rect());		HX_STACK_VAR(byteArray,"byteArray");
					HX_STACK_LINE(3354)
					int len = byteArray->length;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(3357)
					::flash::Memory_obj::select(byteArray);
					HX_STACK_LINE(3359)
					i = (int)0;
					HX_STACK_LINE(3360)
					while(((i < len))){
						HX_STACK_LINE(3362)
						srcA = ::flash::Memory_obj::getByte(i);
						HX_STACK_LINE(3363)
						if (((srcA == (int)0))){
							HX_STACK_LINE(3366)
							i = (i + (int)4);
							HX_STACK_LINE(3367)
							continue;
						}
						HX_STACK_LINE(3370)
						srcR = ::flash::Memory_obj::getByte((i + (int)1));
						HX_STACK_LINE(3371)
						srcG = ::flash::Memory_obj::getByte((i + (int)2));
						HX_STACK_LINE(3372)
						srcB = ::flash::Memory_obj::getByte((i + (int)3));
						HX_STACK_LINE(3374)
						::flash::Memory_obj::setByte((i + (int)1),((int)255 - srcR));
						HX_STACK_LINE(3375)
						::flash::Memory_obj::setByte((i + (int)2),((int)255 - srcG));
						HX_STACK_LINE(3376)
						::flash::Memory_obj::setByte((i + (int)3),((int)255 - srcB));
						HX_STACK_LINE(3378)
						i = (i + (int)4);
					}
					HX_STACK_LINE(3382)
					byteArray->position = (int)0;
					HX_STACK_LINE(3384)
					imageData->setPixels(imageData->get_rect(),byteArray);
				}
;
			}
		}
		else{
			HX_STACK_LINE(3389)
			if (((filterName == HX_CSTRING("TintFilter")))){
				struct _Function_3_1{
					inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3391);
						{
							HX_STACK_LINE(3391)
							Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

							HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_e)
							Dynamic run(){
								HX_STACK_PUSH("*::_Function_4_1","com/stencyl/models/Actor.hx",3391);
								{
									HX_STACK_LINE(3391)
									return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(3391)
							return  Dynamic(new _Function_4_1(_e));
						}
						return null();
					}
				};
				HX_STACK_LINE(3390)
				for(::cpp::FastIterator_obj< ::com::stencyl::graphics::SheetAnimation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::graphics::SheetAnimation >((_Function_3_1::Block(this))());  __it->hasNext(); ){
					::com::stencyl::graphics::SheetAnimation anim = __it->next();
					if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
						HX_STACK_LINE(3396)
						anim->tint = true;
						HX_STACK_LINE(3397)
						Float tintAmount = ((int)1 - defaultMatrix->__GetItem((int)4));		HX_STACK_VAR(tintAmount,"tintAmount");
						HX_STACK_LINE(3398)
						anim->redValue = ::Math_obj::min((defaultMatrix->__GetItem((int)1) + tintAmount),(int)1);
						HX_STACK_LINE(3399)
						anim->greenValue = ::Math_obj::min((defaultMatrix->__GetItem((int)2) + tintAmount),(int)1);
						HX_STACK_LINE(3400)
						anim->blueValue = ::Math_obj::min((defaultMatrix->__GetItem((int)3) + tintAmount),(int)1);
						HX_STACK_LINE(3401)
						{
							HX_STACK_LINE(3401)
							anim->data[(int)0] = (int)0;
							HX_STACK_LINE(3401)
							anim->data[(int)1] = (int)0;
							HX_STACK_LINE(3401)
							anim->data[(int)2] = anim->frameIndex;
							HX_STACK_LINE(3401)
							if ((anim->tint)){
								HX_STACK_LINE(3401)
								anim->data[(int)3] = anim->redValue;
								HX_STACK_LINE(3401)
								anim->data[(int)4] = anim->greenValue;
								HX_STACK_LINE(3401)
								anim->data[(int)5] = anim->blueValue;
								HX_STACK_LINE(3401)
								anim->get_graphics()->clear();
								HX_STACK_LINE(3401)
								anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)4);
							}
							else{
								HX_STACK_LINE(3401)
								anim->get_graphics()->clear();
								HX_STACK_LINE(3401)
								anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,null());
							}
							HX_STACK_LINE(3401)
							anim->needsUpdate = false;
						}
					}
;
				}
			}
			else{
				HX_STACK_LINE(3405)
				if (((filterName == HX_CSTRING("GrayscaleFilter")))){
					struct _Function_4_1{
						inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3407);
							{
								HX_STACK_LINE(3407)
								Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_1,Array< ::Dynamic >,_e)
								Dynamic run(){
									HX_STACK_PUSH("*::_Function_5_1","com/stencyl/models/Actor.hx",3407);
									{
										HX_STACK_LINE(3407)
										return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
									}
									return null();
								}
								HX_END_LOCAL_FUNC0(return)

								HX_STACK_LINE(3407)
								return  Dynamic(new _Function_5_1(_e));
							}
							return null();
						}
					};
					HX_STACK_LINE(3406)
					for(::cpp::FastIterator_obj< ::com::stencyl::graphics::SheetAnimation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::graphics::SheetAnimation >((_Function_4_1::Block(this))());  __it->hasNext(); ){
						::com::stencyl::graphics::SheetAnimation anim = __it->next();
						if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
							HX_STACK_LINE(3411)
							::flash::display::BitmapData imageData = anim->tilesheet->__bitmap;		HX_STACK_VAR(imageData,"imageData");
							HX_STACK_LINE(3412)
							::flash::utils::ByteArray byteArray = imageData->getPixels(imageData->get_rect());		HX_STACK_VAR(byteArray,"byteArray");
							HX_STACK_LINE(3413)
							int len = byteArray->length;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(3414)
							int greyResult;		HX_STACK_VAR(greyResult,"greyResult");
							HX_STACK_LINE(3417)
							::flash::Memory_obj::select(byteArray);
							HX_STACK_LINE(3419)
							i = (int)0;
							HX_STACK_LINE(3420)
							while(((i < len))){
								HX_STACK_LINE(3422)
								srcA = ::flash::Memory_obj::getByte(i);
								HX_STACK_LINE(3423)
								if (((srcA == (int)0))){
									HX_STACK_LINE(3426)
									i = (i + (int)4);
									HX_STACK_LINE(3427)
									continue;
								}
								HX_STACK_LINE(3430)
								srcR = ::flash::Memory_obj::getByte((i + (int)1));
								HX_STACK_LINE(3431)
								srcG = ::flash::Memory_obj::getByte((i + (int)2));
								HX_STACK_LINE(3432)
								srcB = ::flash::Memory_obj::getByte((i + (int)3));
								HX_STACK_LINE(3435)
								greyResult = ::Std_obj::_int((((srcR * 0.5) + (srcG * 0.5)) + (srcB * 0.5)));
								HX_STACK_LINE(3437)
								if (((greyResult > (int)254))){
									HX_STACK_LINE(3438)
									greyResult = (int)255;
								}
								else{
									HX_STACK_LINE(3441)
									if (((greyResult < (int)1))){
										HX_STACK_LINE(3442)
										greyResult = (int)0;
									}
								}
								HX_STACK_LINE(3446)
								::flash::Memory_obj::setByte((i + (int)1),greyResult);
								HX_STACK_LINE(3447)
								::flash::Memory_obj::setByte((i + (int)2),greyResult);
								HX_STACK_LINE(3448)
								::flash::Memory_obj::setByte((i + (int)3),greyResult);
								HX_STACK_LINE(3450)
								i = (i + (int)4);
							}
							HX_STACK_LINE(3454)
							byteArray->position = (int)0;
							HX_STACK_LINE(3456)
							imageData->setPixels(imageData->get_rect(),byteArray);
						}
;
					}
				}
				else{
					HX_STACK_LINE(3463)
					Array< Float > matrix = Array_obj< Float >::__new();		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(3464)
					matrix[(int)0] = defaultMatrix->__GetItem((int)1);
					HX_STACK_LINE(3465)
					matrix[(int)1] = defaultMatrix->__GetItem((int)2);
					HX_STACK_LINE(3466)
					matrix[(int)2] = defaultMatrix->__GetItem((int)3);
					HX_STACK_LINE(3467)
					matrix[(int)3] = defaultMatrix->__GetItem((int)5);
					HX_STACK_LINE(3468)
					matrix[(int)4] = defaultMatrix->__GetItem((int)6);
					HX_STACK_LINE(3469)
					matrix[(int)5] = defaultMatrix->__GetItem((int)7);
					HX_STACK_LINE(3470)
					matrix[(int)6] = defaultMatrix->__GetItem((int)8);
					HX_STACK_LINE(3471)
					matrix[(int)7] = defaultMatrix->__GetItem((int)10);
					HX_STACK_LINE(3472)
					matrix[(int)8] = defaultMatrix->__GetItem((int)11);
					HX_STACK_LINE(3473)
					matrix[(int)9] = defaultMatrix->__GetItem((int)12);
					HX_STACK_LINE(3474)
					matrix[(int)10] = defaultMatrix->__GetItem((int)13);
					HX_STACK_LINE(3475)
					matrix[(int)11] = defaultMatrix->__GetItem((int)15);
					struct _Function_4_1{
						inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3477);
							{
								HX_STACK_LINE(3477)
								Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_1,Array< ::Dynamic >,_e)
								Dynamic run(){
									HX_STACK_PUSH("*::_Function_5_1","com/stencyl/models/Actor.hx",3477);
									{
										HX_STACK_LINE(3477)
										return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
									}
									return null();
								}
								HX_END_LOCAL_FUNC0(return)

								HX_STACK_LINE(3477)
								return  Dynamic(new _Function_5_1(_e));
							}
							return null();
						}
					};
					HX_STACK_LINE(3477)
					for(::cpp::FastIterator_obj< ::com::stencyl::graphics::SheetAnimation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::graphics::SheetAnimation >((_Function_4_1::Block(this))());  __it->hasNext(); ){
						::com::stencyl::graphics::SheetAnimation anim = __it->next();
						if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
							HX_STACK_LINE(3481)
							::flash::display::BitmapData imageData = anim->tilesheet->__bitmap;		HX_STACK_VAR(imageData,"imageData");
							HX_STACK_LINE(3482)
							::flash::utils::ByteArray byteArray = imageData->getPixels(imageData->get_rect());		HX_STACK_VAR(byteArray,"byteArray");
							HX_STACK_LINE(3483)
							int len = byteArray->length;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(3486)
							::flash::Memory_obj::select(byteArray);
							HX_STACK_LINE(3488)
							i = (int)0;
							HX_STACK_LINE(3489)
							while(((i < len))){
								HX_STACK_LINE(3491)
								srcA = ::flash::Memory_obj::getByte(i);
								HX_STACK_LINE(3492)
								if (((srcA == (int)0))){
									HX_STACK_LINE(3495)
									i = (i + (int)4);
									HX_STACK_LINE(3496)
									continue;
								}
								HX_STACK_LINE(3499)
								srcR = ::flash::Memory_obj::getByte((i + (int)1));
								HX_STACK_LINE(3500)
								srcG = ::flash::Memory_obj::getByte((i + (int)2));
								HX_STACK_LINE(3501)
								srcB = ::flash::Memory_obj::getByte((i + (int)3));
								HX_STACK_LINE(3503)
								redResult = ((((matrix->__get((int)0) * srcR) + (matrix->__get((int)1) * srcG)) + (matrix->__get((int)2) * srcB)) + matrix->__get((int)3));
								HX_STACK_LINE(3504)
								if (((redResult > (int)254))){
									HX_STACK_LINE(3505)
									::flash::Memory_obj::setByte((i + (int)1),(int)255);
								}
								else{
									HX_STACK_LINE(3508)
									if (((redResult < (int)1))){
										HX_STACK_LINE(3509)
										::flash::Memory_obj::setByte((i + (int)1),(int)0);
									}
									else{
										HX_STACK_LINE(3513)
										::flash::Memory_obj::setByte((i + (int)1),::Std_obj::_int(redResult));
									}
								}
								HX_STACK_LINE(3517)
								greenResult = ((((matrix->__get((int)4) * srcR) + (matrix->__get((int)5) * srcG)) + (matrix->__get((int)6) * srcB)) + matrix->__get((int)7));
								HX_STACK_LINE(3518)
								if (((greenResult > (int)254))){
									HX_STACK_LINE(3519)
									::flash::Memory_obj::setByte((i + (int)2),(int)255);
								}
								else{
									HX_STACK_LINE(3522)
									if (((greenResult < (int)1))){
										HX_STACK_LINE(3523)
										::flash::Memory_obj::setByte((i + (int)2),(int)0);
									}
									else{
										HX_STACK_LINE(3527)
										::flash::Memory_obj::setByte((i + (int)2),::Std_obj::_int(greenResult));
									}
								}
								HX_STACK_LINE(3531)
								blueResult = ((((matrix->__get((int)8) * srcR) + (matrix->__get((int)9) * srcG)) + (matrix->__get((int)10) * srcB)) + matrix->__get((int)11));
								HX_STACK_LINE(3532)
								if (((blueResult > (int)254))){
									HX_STACK_LINE(3533)
									::flash::Memory_obj::setByte((i + (int)3),(int)255);
								}
								else{
									HX_STACK_LINE(3536)
									if (((blueResult < (int)1))){
										HX_STACK_LINE(3537)
										::flash::Memory_obj::setByte((i + (int)3),(int)0);
									}
									else{
										HX_STACK_LINE(3541)
										::flash::Memory_obj::setByte((i + (int)3),::Std_obj::_int(blueResult));
									}
								}
								HX_STACK_LINE(3545)
								i = (i + (int)4);
							}
							HX_STACK_LINE(3549)
							byteArray->position = (int)0;
							HX_STACK_LINE(3551)
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
	HX_STACK_PUSH("Actor::drawsImage","com/stencyl/models/Actor.hx",3272);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3272)
	return this->drawActor;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,drawsImage,return )

Void Actor_obj::disableActorDrawing( ){
{
		HX_STACK_PUSH("Actor::disableActorDrawing","com/stencyl/models/Actor.hx",3254);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3255)
		this->drawActor = false;
		HX_STACK_LINE(3257)
		if (((this->currAnimation != null()))){
			HX_STACK_LINE(3258)
			this->currAnimation->set_visible(false);
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3262);
				{
					HX_STACK_LINE(3262)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/models/Actor.hx",3262);
						{
							HX_STACK_LINE(3262)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(3262)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(3262)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			Dynamic anim = __it->next();
			if (((anim != null()))){
				HX_STACK_LINE(3265)
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
		HX_STACK_PUSH("Actor::enableActorDrawing","com/stencyl/models/Actor.hx",3236);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3237)
		this->drawActor = true;
		HX_STACK_LINE(3239)
		if (((this->currAnimation != null()))){
			HX_STACK_LINE(3240)
			this->currAnimation->set_visible(true);
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3244);
				{
					HX_STACK_LINE(3244)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/models/Actor.hx",3244);
						{
							HX_STACK_LINE(3244)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(3244)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(3244)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			Dynamic anim = __it->next();
			if (((anim != null()))){
				HX_STACK_LINE(3247)
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
		HX_STACK_PUSH("Actor::drawImage","com/stencyl/models/Actor.hx",3194);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_LINE(3194)
		if (((this->currAnimation != null()))){
			HX_STACK_LINE(3197)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(3198)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(3201)
			if ((g->drawActor)){
				HX_STACK_LINE(3203)
				x = (g->x + ::com::stencyl::Engine_obj::cameraX);
				HX_STACK_LINE(3204)
				y = (g->y + ::com::stencyl::Engine_obj::cameraY);
			}
			else{
				HX_STACK_LINE(3209)
				x = g->x;
				HX_STACK_LINE(3210)
				y = g->y;
			}
			HX_STACK_LINE(3215)
			if (((this->realAngle > (int)0))){
				HX_STACK_LINE(3217)
				this->drawMatrix->identity();
				HX_STACK_LINE(3218)
				this->transformPoint->x = ((int)0 - (Float((this->cacheWidth * ::com::stencyl::Engine_obj::SCALE)) / Float((int)2)));
				HX_STACK_LINE(3219)
				this->transformPoint->y = ((int)0 - (Float((this->cacheHeight * ::com::stencyl::Engine_obj::SCALE)) / Float((int)2)));
				HX_STACK_LINE(3221)
				this->drawMatrix->translate((-(this->transformPoint->x) * ::com::stencyl::Engine_obj::SCALE),(-(this->transformPoint->y) * ::com::stencyl::Engine_obj::SCALE));
				HX_STACK_LINE(3222)
				this->drawMatrix->scale(this->realScaleX,this->realScaleY);
				HX_STACK_LINE(3223)
				this->drawMatrix->rotate((this->realAngle * ((Float(3.14159) / Float((int)180)))));
				HX_STACK_LINE(3225)
				this->drawMatrix->translate((this->colX * ::com::stencyl::Engine_obj::SCALE),(this->colY * ::com::stencyl::Engine_obj::SCALE));
				HX_STACK_LINE(3227)
				hx::AddEq(x,(this->transformMatrix->tx - this->drawMatrix->tx));
				HX_STACK_LINE(3228)
				hx::AddEq(y,(this->transformMatrix->ty - this->drawMatrix->ty));
			}
			HX_STACK_LINE(3231)
			(hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->draw(g,x,y,(-(this->realAngle) * ((Float(3.14159) / Float((int)180)))),g->alpha);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,drawImage,(void))

Void Actor_obj::onTweenPositionComplete( ){
{
		HX_STACK_PUSH("Actor::onTweenPositionComplete","com/stencyl/models/Actor.hx",3178);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3179)
		this->updateTweenProperties();
		HX_STACK_LINE(3180)
		(this->activePositionTweens)--;
		HX_STACK_LINE(3182)
		if (((this->currOffset != null()))){
			HX_STACK_LINE(3183)
			this->resetReal(this->realX,this->realY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,onTweenPositionComplete,(void))

Void Actor_obj::onTweenAngleComplete( ){
{
		HX_STACK_PUSH("Actor::onTweenAngleComplete","com/stencyl/models/Actor.hx",3172);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3173)
		this->updateTweenProperties();
		HX_STACK_LINE(3174)
		(this->activeAngleTweens)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,onTweenAngleComplete,(void))

Void Actor_obj::moveBy( Float x,Float y,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::moveBy","com/stencyl/models/Actor.hx",3167);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(3167)
		this->moveTo((this->getX(false) + x),(this->getY(false) + y),duration,easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,moveBy,(void))

Void Actor_obj::spinBy( Float angle,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::spinBy","com/stencyl/models/Actor.hx",3162);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(3162)
		this->spinTo((this->realAngle + angle),duration,easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,spinBy,(void))

Void Actor_obj::moveTo( Float x,Float y,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::moveTo","com/stencyl/models/Actor.hx",3146);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(3147)
		this->tweenLoc->x = this->getX(false);
		HX_STACK_LINE(3148)
		this->tweenLoc->y = this->getY(false);
		HX_STACK_LINE(3150)
		if (((easing == null()))){
			HX_STACK_LINE(3151)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		HX_STACK_LINE(3155)
		(this->activePositionTweens)++;
		struct _Function_1_1{
			inline static Dynamic Block( Float &x,Float &y){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3157);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(3157)
		::motion::Actuate_obj::tween(this->tweenLoc,duration,_Function_1_1::Block(x,y),null(),null())->ease(easing)->onComplete(this->onTweenPositionComplete_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,moveTo,(void))

Void Actor_obj::spinTo( Float angle,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::spinTo","com/stencyl/models/Actor.hx",3132);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(3133)
		this->tweenAngle->angle = this->realAngle;
		HX_STACK_LINE(3135)
		if (((easing == null()))){
			HX_STACK_LINE(3136)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		HX_STACK_LINE(3140)
		(this->activeAngleTweens)++;
		struct _Function_1_1{
			inline static Dynamic Block( Float &angle){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3142);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("angle") , angle,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(3142)
		::motion::Actuate_obj::tween(this->tweenAngle,duration,_Function_1_1::Block(angle),null(),null())->ease(easing)->onComplete(this->onTweenAngleComplete_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,spinTo,(void))

Void Actor_obj::growTo( hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_duration,Dynamic easing){
Float scaleX = __o_scaleX.Default(1);
Float scaleY = __o_scaleY.Default(1);
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::growTo","com/stencyl/models/Actor.hx",3121);
	HX_STACK_THIS(this);
	HX_STACK_ARG(scaleX,"scaleX");
	HX_STACK_ARG(scaleY,"scaleY");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(3122)
		if (((easing == null()))){
			HX_STACK_LINE(3123)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &scaleY,Float &scaleX){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3127);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("realScaleX") , scaleX,false);
					__result->Add(HX_CSTRING("realScaleY") , scaleY,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(3127)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,_Function_1_1::Block(scaleY,scaleX),null(),null())->ease(easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,growTo,(void))

Void Actor_obj::fadeTo( Float value,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::fadeTo","com/stencyl/models/Actor.hx",3111);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(3112)
		if (((easing == null()))){
			HX_STACK_LINE(3113)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &value){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3117);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , value,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(3117)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,_Function_1_1::Block(value),null(),null())->ease(easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,fadeTo,(void))

Void Actor_obj::cancelTweens( ){
{
		HX_STACK_PUSH("Actor::cancelTweens","com/stencyl/models/Actor.hx",3097);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3098)
		::motion::Actuate_obj::stop(hx::ObjectPtr<OBJ_>(this),Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("alpha")).Add(HX_CSTRING("realScaleX")).Add(HX_CSTRING("realScaleY"))),false,false);
		HX_STACK_LINE(3099)
		::motion::Actuate_obj::stop(this->tweenAngle,null(),false,false);
		HX_STACK_LINE(3100)
		::motion::Actuate_obj::stop(this->tweenLoc,null(),false,false);
		HX_STACK_LINE(3102)
		this->activePositionTweens = (int)0;
		HX_STACK_LINE(3103)
		this->activeAngleTweens = (int)0;
		HX_STACK_LINE(3105)
		::motion::Actuate_obj::unloadForTarget(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(3106)
		::motion::Actuate_obj::unloadForTarget(this->tweenAngle);
		HX_STACK_LINE(3107)
		::motion::Actuate_obj::unloadForTarget(this->tweenLoc);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,cancelTweens,(void))

bool Actor_obj::isMouseReleased( ){
	HX_STACK_PUSH("Actor::isMouseReleased","com/stencyl/models/Actor.hx",3088);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3088)
	return (bool(this->isMouseOver()) && bool(::com::stencyl::Input_obj::mouseReleased));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isMouseReleased,return )

bool Actor_obj::isMousePressed( ){
	HX_STACK_PUSH("Actor::isMousePressed","com/stencyl/models/Actor.hx",3083);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3083)
	return (bool(this->isMouseOver()) && bool(::com::stencyl::Input_obj::mousePressed));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isMousePressed,return )

bool Actor_obj::isMouseDown( ){
	HX_STACK_PUSH("Actor::isMouseDown","com/stencyl/models/Actor.hx",3078);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3078)
	return (bool(this->isMouseOver()) && bool(::com::stencyl::Input_obj::mouseDown));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isMouseDown,return )

bool Actor_obj::isMouseHover( ){
	HX_STACK_PUSH("Actor::isMouseHover","com/stencyl/models/Actor.hx",3073);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3073)
	return (bool(this->isMouseOver()) && bool(::com::stencyl::Input_obj::mouseUp));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isMouseHover,return )

bool Actor_obj::isMouseOver( ){
	HX_STACK_PUSH("Actor::isMouseOver","com/stencyl/models/Actor.hx",3029);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3030)
	Float mx;		HX_STACK_VAR(mx,"mx");
	HX_STACK_LINE(3031)
	Float my;		HX_STACK_VAR(my,"my");
	HX_STACK_LINE(3033)
	if ((this->isHUD)){
		HX_STACK_LINE(3040)
		mx = (Float(::com::stencyl::Input_obj::mouseX) / Float(::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(3041)
		my = (Float(::com::stencyl::Input_obj::mouseY) / Float(::com::stencyl::Engine_obj::SCALE));
	}
	else{
		HX_STACK_LINE(3052)
		mx = (Float(((::com::stencyl::Input_obj::mouseX - ::com::stencyl::Engine_obj::cameraX))) / Float(::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(3053)
		my = (Float(((::com::stencyl::Input_obj::mouseY - ::com::stencyl::Engine_obj::cameraY))) / Float(::com::stencyl::Engine_obj::SCALE));
	}
	HX_STACK_LINE(3060)
	Float offsetX = (((this->get_scaleX() - (int)1)) * ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2))));		HX_STACK_VAR(offsetX,"offsetX");
	HX_STACK_LINE(3061)
	Float offsetY = (((this->get_scaleY() - (int)1)) * ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2))));		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(3063)
	Float xPos = (this->colX - offsetX);		HX_STACK_VAR(xPos,"xPos");
	HX_STACK_LINE(3064)
	Float yPos = (this->colY - offsetY);		HX_STACK_VAR(yPos,"yPos");
	HX_STACK_LINE(3066)
	return (bool((bool((bool((mx >= xPos)) && bool((my >= yPos)))) && bool((mx < ((xPos + this->cacheWidth) + (offsetX * (int)2)))))) && bool((my < ((yPos + this->cacheHeight) + (offsetY * (int)2)))));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isMouseOver,return )

bool Actor_obj::ignoresGravity( ){
	HX_STACK_PUSH("Actor::ignoresGravity","com/stencyl/models/Actor.hx",3015);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3016)
	if ((this->isLightweight)){
		HX_STACK_LINE(3017)
		return this->ignoreGravity;
	}
	HX_STACK_LINE(3021)
	return this->body->isIgnoringGravity();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,ignoresGravity,return )

Void Actor_obj::setIgnoreGravity( bool state){
{
		HX_STACK_PUSH("Actor::setIgnoreGravity","com/stencyl/models/Actor.hx",3005);
		HX_STACK_THIS(this);
		HX_STACK_ARG(state,"state");
		HX_STACK_LINE(3006)
		this->ignoreGravity = state;
		HX_STACK_LINE(3008)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(3009)
			this->body->setIgnoreGravity(state);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setIgnoreGravity,(void))

Void Actor_obj::disableRotation( ){
{
		HX_STACK_PUSH("Actor::disableRotation","com/stencyl/models/Actor.hx",2992);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2992)
		if ((this->isLightweight)){
			HX_STACK_LINE(2994)
			this->fixedRotation = true;
		}
		else{
			HX_STACK_LINE(2999)
			this->body->setFixedRotation(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,disableRotation,(void))

Void Actor_obj::enableRotation( ){
{
		HX_STACK_PUSH("Actor::enableRotation","com/stencyl/models/Actor.hx",2979);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2979)
		if ((this->isLightweight)){
			HX_STACK_LINE(2981)
			this->fixedRotation = false;
		}
		else{
			HX_STACK_LINE(2986)
			this->body->setFixedRotation(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,enableRotation,(void))

Void Actor_obj::setBounciness( Float value){
{
		HX_STACK_PUSH("Actor::setBounciness","com/stencyl/models/Actor.hx",2971);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(2971)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(2973)
			this->body->setBounciness(value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setBounciness,(void))

Void Actor_obj::setFriction( Float value){
{
		HX_STACK_PUSH("Actor::setFriction","com/stencyl/models/Actor.hx",2963);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(2963)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(2965)
			this->body->setFriction(value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setFriction,(void))

::box2D::dynamics::B2Body Actor_obj::getBody( ){
	HX_STACK_PUSH("Actor::getBody","com/stencyl/models/Actor.hx",2958);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2958)
	return this->body;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getBody,return )

Float Actor_obj::getPhysicsHeight( ){
	HX_STACK_PUSH("Actor::getPhysicsHeight","com/stencyl/models/Actor.hx",2949);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2949)
	return (Float(this->cacheHeight) / Float(::com::stencyl::Engine_obj::physicsScale));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getPhysicsHeight,return )

Float Actor_obj::getPhysicsWidth( ){
	HX_STACK_PUSH("Actor::getPhysicsWidth","com/stencyl/models/Actor.hx",2944);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2944)
	return (Float(this->cacheWidth) / Float(::com::stencyl::Engine_obj::physicsScale));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getPhysicsWidth,return )

Float Actor_obj::getHeight( ){
	HX_STACK_PUSH("Actor::getHeight","com/stencyl/models/Actor.hx",2939);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2939)
	return this->cacheHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getHeight,return )

Float Actor_obj::getWidth( ){
	HX_STACK_PUSH("Actor::getWidth","com/stencyl/models/Actor.hx",2934);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2934)
	return this->cacheWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getWidth,return )

Void Actor_obj::applyTorque( Float torque){
{
		HX_STACK_PUSH("Actor::applyTorque","com/stencyl/models/Actor.hx",2913);
		HX_STACK_THIS(this);
		HX_STACK_ARG(torque,"torque");
		HX_STACK_LINE(2913)
		if ((this->isLightweight)){
			HX_STACK_LINE(2915)
			if ((!(this->fixedRotation))){
				HX_STACK_LINE(2917)
				hx::SubEq(this->rSpeed,torque);
			}
		}
		else{
			HX_STACK_LINE(2924)
			this->body->applyTorque(torque);
			HX_STACK_LINE(2925)
			this->body->setAwake(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,applyTorque,(void))

Void Actor_obj::applyImpulseInDirection( Float angle,Float speed){
{
		HX_STACK_PUSH("Actor::applyImpulseInDirection","com/stencyl/models/Actor.hx",2903);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_ARG(speed,"speed");
		HX_STACK_LINE(2903)
		this->applyImpulse(::Math_obj::cos(((Float(3.14159) / Float((int)180)) * angle)),::Math_obj::sin(((Float(3.14159) / Float((int)180)) * angle)),speed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,applyImpulseInDirection,(void))

Void Actor_obj::applyImpulse( Float dirX,Float dirY,Float magnitude){
{
		HX_STACK_PUSH("Actor::applyImpulse","com/stencyl/models/Actor.hx",2869);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dirX,"dirX");
		HX_STACK_ARG(dirY,"dirY");
		HX_STACK_ARG(magnitude,"magnitude");
		HX_STACK_LINE(2870)
		if ((this->isLightweight)){
			HX_STACK_LINE(2872)
			this->dummy->x = dirX;
			HX_STACK_LINE(2873)
			this->dummy->y = dirY;
			HX_STACK_LINE(2874)
			this->dummy->normalize();
			HX_STACK_LINE(2877)
			this->accelerateX((this->dummy->x * magnitude));
			HX_STACK_LINE(2878)
			this->accelerateY((this->dummy->y * magnitude));
			HX_STACK_LINE(2881)
			return null();
		}
		HX_STACK_LINE(2884)
		if (((bool((dirX == (int)0)) && bool((dirY == (int)0))))){
			HX_STACK_LINE(2885)
			return null();
		}
		HX_STACK_LINE(2889)
		this->dummy->x = dirX;
		HX_STACK_LINE(2890)
		this->dummy->y = dirY;
		HX_STACK_LINE(2891)
		this->dummy->normalize();
		HX_STACK_LINE(2893)
		if (((magnitude > (int)0))){
			HX_STACK_LINE(2894)
			this->dummy->multiply(magnitude);
		}
		HX_STACK_LINE(2898)
		this->body->applyImpulse(this->dummy,this->body->getWorldCenter());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,applyImpulse,(void))

Void Actor_obj::pushInDirection( Float angle,Float speed){
{
		HX_STACK_PUSH("Actor::pushInDirection","com/stencyl/models/Actor.hx",2859);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_ARG(speed,"speed");
		HX_STACK_LINE(2859)
		this->push(::Math_obj::cos(((Float(3.14159) / Float((int)180)) * angle)),::Math_obj::sin(((Float(3.14159) / Float((int)180)) * angle)),speed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,pushInDirection,(void))

Void Actor_obj::push( Float dirX,Float dirY,Float magnitude){
{
		HX_STACK_PUSH("Actor::push","com/stencyl/models/Actor.hx",2828);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dirX,"dirX");
		HX_STACK_ARG(dirY,"dirY");
		HX_STACK_ARG(magnitude,"magnitude");
		HX_STACK_LINE(2829)
		if ((this->isLightweight)){
			HX_STACK_LINE(2831)
			this->dummy->x = dirX;
			HX_STACK_LINE(2832)
			this->dummy->y = dirY;
			HX_STACK_LINE(2833)
			this->dummy->normalize();
			HX_STACK_LINE(2835)
			this->accelerateX(((this->dummy->x * magnitude) * 0.01));
			HX_STACK_LINE(2836)
			this->accelerateY(((this->dummy->y * magnitude) * 0.01));
			HX_STACK_LINE(2837)
			return null();
		}
		HX_STACK_LINE(2840)
		if (((bool((dirX == (int)0)) && bool((dirY == (int)0))))){
			HX_STACK_LINE(2841)
			return null();
		}
		HX_STACK_LINE(2845)
		this->dummy->x = dirX;
		HX_STACK_LINE(2846)
		this->dummy->y = dirY;
		HX_STACK_LINE(2847)
		this->dummy->normalize();
		HX_STACK_LINE(2849)
		if (((magnitude > (int)0))){
			HX_STACK_LINE(2850)
			this->dummy->multiply(magnitude);
		}
		HX_STACK_LINE(2854)
		this->body->applyForce(this->dummy,this->body->getWorldCenter());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,push,(void))

Void Actor_obj::changeAngularVelocity( Float omega){
{
		HX_STACK_PUSH("Actor::changeAngularVelocity","com/stencyl/models/Actor.hx",2810);
		HX_STACK_THIS(this);
		HX_STACK_ARG(omega,"omega");
		HX_STACK_LINE(2810)
		if ((this->isLightweight)){
			HX_STACK_LINE(2812)
			hx::AddEq(this->rSpeed,((Float((int)180) / Float(3.14159)) * omega));
		}
		else{
			HX_STACK_LINE(2818)
			this->body->setAngularVelocity((this->body->getAngularVelocity() + omega));
			HX_STACK_LINE(2819)
			this->body->setAwake(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,changeAngularVelocity,(void))

Void Actor_obj::setAngularVelocity( Float omega){
{
		HX_STACK_PUSH("Actor::setAngularVelocity","com/stencyl/models/Actor.hx",2796);
		HX_STACK_THIS(this);
		HX_STACK_ARG(omega,"omega");
		HX_STACK_LINE(2796)
		if ((this->isLightweight)){
			HX_STACK_LINE(2798)
			this->rSpeed = ((Float((int)180) / Float(3.14159)) * omega);
		}
		else{
			HX_STACK_LINE(2804)
			this->body->setAngularVelocity(omega);
			HX_STACK_LINE(2805)
			this->body->setAwake(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setAngularVelocity,(void))

Float Actor_obj::getAngularVelocity( ){
	HX_STACK_PUSH("Actor::getAngularVelocity","com/stencyl/models/Actor.hx",2786);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2787)
	if ((this->isLightweight)){
		HX_STACK_LINE(2788)
		return ((Float(3.14159) / Float((int)180)) * this->rSpeed);
	}
	HX_STACK_LINE(2792)
	return this->body->getAngularVelocity();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAngularVelocity,return )

Void Actor_obj::rotate( Float angle,hx::Null< bool >  __o_inRadians){
bool inRadians = __o_inRadians.Default(true);
	HX_STACK_PUSH("Actor::rotate","com/stencyl/models/Actor.hx",2757);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(inRadians,"inRadians");
{
		HX_STACK_LINE(2757)
		if ((inRadians)){
			HX_STACK_LINE(2759)
			if ((this->isLightweight)){
				HX_STACK_LINE(2761)
				hx::AddEq(this->realAngle,((Float((int)180) / Float(3.14159)) * angle));
			}
			else{
				HX_STACK_LINE(2766)
				this->body->setAngle((this->body->getAngle() + angle));
			}
		}
		else{
			HX_STACK_LINE(2772)
			if ((this->isLightweight)){
				HX_STACK_LINE(2774)
				hx::AddEq(this->realAngle,angle);
			}
			else{
				HX_STACK_LINE(2779)
				this->body->setAngle((this->body->getAngle() + ((Float(3.14159) / Float((int)180)) * angle)));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,rotate,(void))

Void Actor_obj::setAngle( Float angle,hx::Null< bool >  __o_inRadians){
bool inRadians = __o_inRadians.Default(true);
	HX_STACK_PUSH("Actor::setAngle","com/stencyl/models/Actor.hx",2726);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(inRadians,"inRadians");
{
		HX_STACK_LINE(2727)
		if ((inRadians)){
			HX_STACK_LINE(2728)
			if ((this->isLightweight)){
				HX_STACK_LINE(2730)
				this->realAngle = ((Float((int)180) / Float(3.14159)) * angle);
			}
			else{
				HX_STACK_LINE(2735)
				this->body->setAngle(angle);
			}
		}
		else{
			HX_STACK_LINE(2741)
			if ((this->isLightweight)){
				HX_STACK_LINE(2743)
				this->realAngle = angle;
			}
			else{
				HX_STACK_LINE(2748)
				this->body->setAngle(((Float(3.14159) / Float((int)180)) * angle));
			}
		}
		HX_STACK_LINE(2753)
		this->updateMatrix = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,setAngle,(void))

Float Actor_obj::getAngleInDegrees( ){
	HX_STACK_PUSH("Actor::getAngleInDegrees","com/stencyl/models/Actor.hx",2716);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2717)
	if ((this->isLightweight)){
		HX_STACK_LINE(2718)
		return this->realAngle;
	}
	HX_STACK_LINE(2722)
	return ((Float((int)180) / Float(3.14159)) * this->body->getAngle());
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAngleInDegrees,return )

Float Actor_obj::getAngle( ){
	HX_STACK_PUSH("Actor::getAngle","com/stencyl/models/Actor.hx",2706);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2707)
	if ((this->isLightweight)){
		HX_STACK_LINE(2708)
		return ((Float(3.14159) / Float((int)180)) * this->realAngle);
	}
	HX_STACK_LINE(2712)
	return this->body->getAngle();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAngle,return )

Void Actor_obj::accelerate( Float angle,Float speed){
{
		HX_STACK_PUSH("Actor::accelerate","com/stencyl/models/Actor.hx",2696);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_ARG(speed,"speed");
		HX_STACK_LINE(2697)
		this->setXVelocity((this->getXVelocity() + (speed * ::Math_obj::cos(((Float(3.14159) / Float((int)180)) * angle)))));
		HX_STACK_LINE(2698)
		this->setYVelocity((this->getYVelocity() + (speed * ::Math_obj::sin(((Float(3.14159) / Float((int)180)) * angle)))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,accelerate,(void))

Void Actor_obj::accelerateY( Float dy){
{
		HX_STACK_PUSH("Actor::accelerateY","com/stencyl/models/Actor.hx",2691);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dy,"dy");
		HX_STACK_LINE(2691)
		this->setYVelocity((this->getYVelocity() + dy));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,accelerateY,(void))

Void Actor_obj::accelerateX( Float dx){
{
		HX_STACK_PUSH("Actor::accelerateX","com/stencyl/models/Actor.hx",2686);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dx,"dx");
		HX_STACK_LINE(2686)
		this->setXVelocity((this->getXVelocity() + dx));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,accelerateX,(void))

Void Actor_obj::setVelocity( Float angle,Float speed){
{
		HX_STACK_PUSH("Actor::setVelocity","com/stencyl/models/Actor.hx",2680);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_ARG(speed,"speed");
		HX_STACK_LINE(2681)
		this->setXVelocity((speed * ::Math_obj::cos(((Float(3.14159) / Float((int)180)) * angle))));
		HX_STACK_LINE(2682)
		this->setYVelocity((speed * ::Math_obj::sin(((Float(3.14159) / Float((int)180)) * angle))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,setVelocity,(void))

Void Actor_obj::setYVelocity( Float dy){
{
		HX_STACK_PUSH("Actor::setYVelocity","com/stencyl/models/Actor.hx",2666);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dy,"dy");
		HX_STACK_LINE(2667)
		if ((this->isLightweight)){
			HX_STACK_LINE(2669)
			this->ySpeed = dy;
			HX_STACK_LINE(2670)
			return null();
		}
		HX_STACK_LINE(2673)
		::box2D::common::math::B2Vec2 v = this->body->getLinearVelocity();		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(2674)
		v->y = dy;
		HX_STACK_LINE(2675)
		this->body->setLinearVelocity(v);
		HX_STACK_LINE(2676)
		this->body->setAwake(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setYVelocity,(void))

Void Actor_obj::setXVelocity( Float dx){
{
		HX_STACK_PUSH("Actor::setXVelocity","com/stencyl/models/Actor.hx",2652);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dx,"dx");
		HX_STACK_LINE(2653)
		if ((this->isLightweight)){
			HX_STACK_LINE(2655)
			this->xSpeed = dx;
			HX_STACK_LINE(2656)
			return null();
		}
		HX_STACK_LINE(2659)
		::box2D::common::math::B2Vec2 v = this->body->getLinearVelocity();		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(2660)
		v->x = dx;
		HX_STACK_LINE(2661)
		this->body->setLinearVelocity(v);
		HX_STACK_LINE(2662)
		this->body->setAwake(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setXVelocity,(void))

Float Actor_obj::getYVelocity( ){
	HX_STACK_PUSH("Actor::getYVelocity","com/stencyl/models/Actor.hx",2642);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2643)
	if ((this->isLightweight)){
		HX_STACK_LINE(2644)
		return this->ySpeed;
	}
	HX_STACK_LINE(2648)
	return this->body->getLinearVelocity()->y;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getYVelocity,return )

Float Actor_obj::getXVelocity( ){
	HX_STACK_PUSH("Actor::getXVelocity","com/stencyl/models/Actor.hx",2632);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2633)
	if ((this->isLightweight)){
		HX_STACK_LINE(2634)
		return this->xSpeed;
	}
	HX_STACK_LINE(2638)
	return this->body->getLinearVelocity()->x;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getXVelocity,return )

Void Actor_obj::setOriginPoint( int x,int y){
{
		HX_STACK_PUSH("Actor::setOriginPoint","com/stencyl/models/Actor.hx",2562);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(2563)
		::box2D::common::math::B2Vec2 resetPosition = null();		HX_STACK_VAR(resetPosition,"resetPosition");
		HX_STACK_LINE(2565)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(2566)
			resetPosition = this->body->getPosition();
		}
		else{
			HX_STACK_LINE(2571)
			resetPosition = ::box2D::common::math::B2Vec2_obj::__new(::com::stencyl::Engine_obj::toPhysicalUnits(this->realX),::com::stencyl::Engine_obj::toPhysicalUnits(this->realY));
		}
		HX_STACK_LINE(2575)
		::box2D::common::math::B2Vec2 offsetDiff = ::box2D::common::math::B2Vec2_obj::__new(this->currOffset->x,this->currOffset->y);		HX_STACK_VAR(offsetDiff,"offsetDiff");
		HX_STACK_LINE(2576)
		Float radians = this->getAngle();		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(2578)
		bool rotated = (::Std_obj::_int((radians * ((Float((int)180) / Float(3.14159))))) != (int)0);		HX_STACK_VAR(rotated,"rotated");
		HX_STACK_LINE(2580)
		Float w = this->cacheWidth;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(2581)
		Float h = this->cacheHeight;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(2583)
		int newOffX = ::Std_obj::_int((x - (Float(w) / Float((int)2))));		HX_STACK_VAR(newOffX,"newOffX");
		HX_STACK_LINE(2584)
		int newOffY = ::Std_obj::_int((y - (Float(h) / Float((int)2))));		HX_STACK_VAR(newOffY,"newOffY");
		HX_STACK_LINE(2586)
		if (((bool((bool((this->currOrigin != null())) && bool(((bool((::Std_obj::_int(this->currOffset->x) != newOffX)) || bool((::Std_obj::_int(this->currOffset->y) != newOffY))))))) && bool(rotated)))){
			HX_STACK_LINE(2588)
			Float oldAng = (radians + ::Math_obj::atan2(-(this->currOffset->y),-(this->currOffset->x)));		HX_STACK_VAR(oldAng,"oldAng");
			HX_STACK_LINE(2589)
			Float newAng = (radians + ::Math_obj::atan2(-(newOffY),-(newOffX)));		HX_STACK_VAR(newAng,"newAng");
			HX_STACK_LINE(2590)
			Float oldDist = ::Math_obj::sqrt((::Math_obj::pow(this->currOffset->x,(int)2) + ::Math_obj::pow(this->currOffset->y,(int)2)));		HX_STACK_VAR(oldDist,"oldDist");
			HX_STACK_LINE(2591)
			Float newDist = ::Math_obj::sqrt((::Math_obj::pow(newOffX,(int)2) + ::Math_obj::pow(newOffY,(int)2)));		HX_STACK_VAR(newDist,"newDist");
			HX_STACK_LINE(2593)
			int oldFixCenterX = ::Math_obj::round((this->currOrigin->x + (::Math_obj::cos(oldAng) * oldDist)));		HX_STACK_VAR(oldFixCenterX,"oldFixCenterX");
			HX_STACK_LINE(2594)
			int oldFixCenterY = ::Math_obj::round((this->currOrigin->y + (::Math_obj::sin(oldAng) * oldDist)));		HX_STACK_VAR(oldFixCenterY,"oldFixCenterY");
			HX_STACK_LINE(2595)
			int newFixCenterX = ::Math_obj::round((x + (::Math_obj::cos(newAng) * newDist)));		HX_STACK_VAR(newFixCenterX,"newFixCenterX");
			HX_STACK_LINE(2596)
			int newFixCenterY = ::Math_obj::round((y + (::Math_obj::sin(newAng) * newDist)));		HX_STACK_VAR(newFixCenterY,"newFixCenterY");
			HX_STACK_LINE(2598)
			hx::AddEq(resetPosition->x,::com::stencyl::Engine_obj::toPhysicalUnits((oldFixCenterX - newFixCenterX)));
			HX_STACK_LINE(2599)
			hx::AddEq(resetPosition->y,::com::stencyl::Engine_obj::toPhysicalUnits((oldFixCenterY - newFixCenterY)));
		}
		HX_STACK_LINE(2602)
		this->currOrigin->x = x;
		HX_STACK_LINE(2603)
		this->currOrigin->y = y;
		HX_STACK_LINE(2604)
		this->originX = this->currOffset->x = newOffX;
		HX_STACK_LINE(2605)
		this->originY = this->currOffset->y = newOffY;
		HX_STACK_LINE(2607)
		offsetDiff->x = (this->currOffset->x - offsetDiff->x);
		HX_STACK_LINE(2608)
		offsetDiff->y = (this->currOffset->y - offsetDiff->y);
		HX_STACK_LINE(2610)
		hx::AddEq(resetPosition->x,::com::stencyl::Engine_obj::toPhysicalUnits(offsetDiff->x));
		HX_STACK_LINE(2611)
		hx::AddEq(resetPosition->y,::com::stencyl::Engine_obj::toPhysicalUnits(offsetDiff->y));
		HX_STACK_LINE(2613)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(2614)
			this->body->setPosition(resetPosition);
		}
		else{
			HX_STACK_LINE(2620)
			this->realX = ::com::stencyl::Engine_obj::toPixelUnits(resetPosition->x);
			HX_STACK_LINE(2621)
			this->realY = ::com::stencyl::Engine_obj::toPixelUnits(resetPosition->y);
		}
		HX_STACK_LINE(2624)
		this->resetOrigin = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,setOriginPoint,(void))

Void Actor_obj::followWithOffset( ::com::stencyl::models::Actor a,int ox,int oy){
{
		HX_STACK_PUSH("Actor::followWithOffset","com/stencyl/models/Actor.hx",2546);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(ox,"ox");
		HX_STACK_ARG(oy,"oy");
		HX_STACK_LINE(2547)
		if ((this->isLightweight)){
			HX_STACK_LINE(2549)
			{
				HX_STACK_LINE(2549)
				bool sweep = false;		HX_STACK_VAR(sweep,"sweep");
				HX_STACK_LINE(2549)
				this->moveActorBy(((a->getXCenter() + ox) - this->realX),((a->getYCenter() + oy) - this->realY),null(),sweep);
			}
			HX_STACK_LINE(2550)
			return null();
		}
		HX_STACK_LINE(2553)
		::box2D::common::math::B2Vec2 pt = a->body->getWorldCenter();		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(2555)
		hx::AddEq(pt->x,::com::stencyl::Engine_obj::toPhysicalUnits(ox));
		HX_STACK_LINE(2556)
		hx::AddEq(pt->y,::com::stencyl::Engine_obj::toPhysicalUnits(oy));
		HX_STACK_LINE(2558)
		this->body->setPosition(pt);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,followWithOffset,(void))

Void Actor_obj::follow( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Actor::follow","com/stencyl/models/Actor.hx",2530);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(2531)
		if (((a == null()))){
			HX_STACK_LINE(2532)
			return null();
		}
		HX_STACK_LINE(2536)
		if ((this->isLightweight)){
			HX_STACK_LINE(2538)
			{
				HX_STACK_LINE(2538)
				bool sweep = false;		HX_STACK_VAR(sweep,"sweep");
				HX_STACK_LINE(2538)
				this->moveActorBy((a->getXCenter() - this->realX),(a->getYCenter() - this->realY),null(),sweep);
			}
			HX_STACK_LINE(2539)
			return null();
		}
		HX_STACK_LINE(2542)
		this->body->setPosition(a->body->getWorldCenter());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,follow,(void))

Void Actor_obj::setY( Float y,hx::Null< bool >  __o_resetSpeed,hx::Null< bool >  __o_noCollision){
bool resetSpeed = __o_resetSpeed.Default(false);
bool noCollision = __o_noCollision.Default(false);
	HX_STACK_PUSH("Actor::setY","com/stencyl/models/Actor.hx",2498);
	HX_STACK_THIS(this);
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(resetSpeed,"resetSpeed");
	HX_STACK_ARG(noCollision,"noCollision");
{
		HX_STACK_LINE(2499)
		if ((this->isLightweight)){
			HX_STACK_LINE(2501)
			bool sweep = false;		HX_STACK_VAR(sweep,"sweep");
			HX_STACK_LINE(2501)
			this->moveActorBy((this->realX - this->realX),(((y + ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) + this->currOffset->y) - this->realY),(  (((bool(!(noCollision)) && bool(this->continuousCollision)))) ? Dynamic(this->groupsToCollideWith) : Dynamic(null()) ),sweep);
		}
		else{
			HX_STACK_LINE(2506)
			if (((bool(this->isRegion) || bool(this->isTerrainRegion)))){
				HX_STACK_LINE(2507)
				this->dummy->y = ::com::stencyl::Engine_obj::toPhysicalUnits(y);
			}
			else{
				HX_STACK_LINE(2512)
				this->dummy->y = ::com::stencyl::Engine_obj::toPhysicalUnits(((y + ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) + this->currOffset->y));
			}
			HX_STACK_LINE(2516)
			this->dummy->x = this->body->getPosition()->x;
			HX_STACK_LINE(2518)
			this->body->setPosition(this->dummy);
			HX_STACK_LINE(2520)
			if ((resetSpeed)){
				HX_STACK_LINE(2521)
				this->body->setLinearVelocity(this->zero);
			}
		}
		HX_STACK_LINE(2526)
		this->updateMatrix = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,setY,(void))

Void Actor_obj::setX( Float x,hx::Null< bool >  __o_resetSpeed,hx::Null< bool >  __o_noCollision){
bool resetSpeed = __o_resetSpeed.Default(false);
bool noCollision = __o_noCollision.Default(false);
	HX_STACK_PUSH("Actor::setX","com/stencyl/models/Actor.hx",2466);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(resetSpeed,"resetSpeed");
	HX_STACK_ARG(noCollision,"noCollision");
{
		HX_STACK_LINE(2467)
		if ((this->isLightweight)){
			HX_STACK_LINE(2469)
			bool sweep = false;		HX_STACK_VAR(sweep,"sweep");
			HX_STACK_LINE(2469)
			this->moveActorBy((((x + ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) + this->currOffset->x) - this->realX),(this->realY - this->realY),(  (((bool(!(noCollision)) && bool(this->continuousCollision)))) ? Dynamic(this->groupsToCollideWith) : Dynamic(null()) ),sweep);
		}
		else{
			HX_STACK_LINE(2474)
			if (((bool(this->isRegion) || bool(this->isTerrainRegion)))){
				HX_STACK_LINE(2475)
				this->dummy->x = ::com::stencyl::Engine_obj::toPhysicalUnits(x);
			}
			else{
				HX_STACK_LINE(2480)
				this->dummy->x = ::com::stencyl::Engine_obj::toPhysicalUnits(((x + ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) + this->currOffset->x));
			}
			HX_STACK_LINE(2484)
			this->dummy->y = this->body->getPosition()->y;
			HX_STACK_LINE(2486)
			this->body->setPosition(this->dummy);
			HX_STACK_LINE(2488)
			if ((resetSpeed)){
				HX_STACK_LINE(2489)
				this->body->setLinearVelocity(this->zero);
			}
		}
		HX_STACK_LINE(2494)
		this->updateMatrix = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,setX,(void))

Float Actor_obj::getScreenY( ){
	HX_STACK_PUSH("Actor::getScreenY","com/stencyl/models/Actor.hx",2453);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2453)
	if ((this->isHUD)){
		HX_STACK_LINE(2455)
		return this->getY(null());
	}
	else{
		HX_STACK_LINE(2460)
		return (this->getY(null()) + (Float(::com::stencyl::Engine_obj::cameraY) / Float(::com::stencyl::Engine_obj::SCALE)));
	}
	HX_STACK_LINE(2453)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getScreenY,return )

Float Actor_obj::getScreenX( ){
	HX_STACK_PUSH("Actor::getScreenX","com/stencyl/models/Actor.hx",2440);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2440)
	if ((this->isHUD)){
		HX_STACK_LINE(2442)
		return this->getX(null());
	}
	else{
		HX_STACK_LINE(2447)
		return (this->getX(null()) + (Float(::com::stencyl::Engine_obj::cameraX) / Float(::com::stencyl::Engine_obj::SCALE)));
	}
	HX_STACK_LINE(2440)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getScreenX,return )

Float Actor_obj::getYCenter( ){
	HX_STACK_PUSH("Actor::getYCenter","com/stencyl/models/Actor.hx",2427);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2427)
	if ((!(this->isLightweight))){
		HX_STACK_LINE(2429)
		return ::Math_obj::round((::com::stencyl::Engine_obj::toPixelUnits(this->body->getWorldCenter()->y) - this->currOffset->y));
	}
	else{
		HX_STACK_LINE(2434)
		return (this->realY - this->currOffset->y);
	}
	HX_STACK_LINE(2427)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getYCenter,return )

Float Actor_obj::getXCenter( ){
	HX_STACK_PUSH("Actor::getXCenter","com/stencyl/models/Actor.hx",2413);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2413)
	if ((!(this->isLightweight))){
		HX_STACK_LINE(2415)
		return ::Math_obj::round((::com::stencyl::Engine_obj::toPixelUnits(this->body->getWorldCenter()->x) - this->currOffset->x));
	}
	else{
		HX_STACK_LINE(2420)
		return (this->realX - this->currOffset->x);
	}
	HX_STACK_LINE(2413)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getXCenter,return )

Float Actor_obj::getY( hx::Null< bool >  __o_round){
bool round = __o_round.Default(true);
	HX_STACK_PUSH("Actor::getY","com/stencyl/models/Actor.hx",2387);
	HX_STACK_THIS(this);
	HX_STACK_ARG(round,"round");
{
		HX_STACK_LINE(2388)
		Float toReturn = (int)-1;		HX_STACK_VAR(toReturn,"toReturn");
		HX_STACK_LINE(2390)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2391)
			if (((bool(this->isRegion) || bool(this->isTerrainRegion)))){
				HX_STACK_LINE(2393)
				toReturn = (::com::stencyl::Engine_obj::toPixelUnits(this->body->getPosition()->y) - (Float(this->cacheHeight) / Float((int)2)));
			}
			else{
				HX_STACK_LINE(2397)
				if ((!(this->isLightweight))){
					HX_STACK_LINE(2398)
					toReturn = (((this->body->getPosition()->y * ::com::stencyl::Engine_obj::physicsScale) - ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) - this->currOffset->y);
				}
			}
		}
		HX_STACK_LINE(2403)
		if (((bool(::com::stencyl::Engine_obj::NO_PHYSICS) || bool(this->isLightweight)))){
			HX_STACK_LINE(2404)
			toReturn = ((this->realY - ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) - this->currOffset->y);
		}
		HX_STACK_LINE(2408)
		return (  ((round)) ? Float(::Math_obj::round(toReturn)) : Float(toReturn) );
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,getY,return )

Float Actor_obj::getX( hx::Null< bool >  __o_round){
bool round = __o_round.Default(true);
	HX_STACK_PUSH("Actor::getX","com/stencyl/models/Actor.hx",2362);
	HX_STACK_THIS(this);
	HX_STACK_ARG(round,"round");
{
		HX_STACK_LINE(2363)
		Float toReturn = (int)-1;		HX_STACK_VAR(toReturn,"toReturn");
		HX_STACK_LINE(2365)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2366)
			if (((bool(this->isRegion) || bool(this->isTerrainRegion)))){
				HX_STACK_LINE(2368)
				toReturn = (::com::stencyl::Engine_obj::toPixelUnits(this->body->getPosition()->x) - (Float(this->cacheWidth) / Float((int)2)));
			}
			else{
				HX_STACK_LINE(2372)
				if ((!(this->isLightweight))){
					HX_STACK_LINE(2373)
					toReturn = (((this->body->getPosition()->x * ::com::stencyl::Engine_obj::physicsScale) - ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) - this->currOffset->x);
				}
			}
		}
		HX_STACK_LINE(2378)
		if (((bool(::com::stencyl::Engine_obj::NO_PHYSICS) || bool(this->isLightweight)))){
			HX_STACK_LINE(2379)
			toReturn = ((this->realX - ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) - this->currOffset->x);
		}
		HX_STACK_LINE(2383)
		return (  ((round)) ? Float(::Math_obj::round(toReturn)) : Float(toReturn) );
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,getX,return )

Void Actor_obj::enableSmoothMotion( ){
{
		HX_STACK_PUSH("Actor::enableSmoothMotion","com/stencyl/models/Actor.hx",2355);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2355)
		this->smoothMove = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,enableSmoothMotion,(void))

Void Actor_obj::sendBackward( ){
{
		HX_STACK_PUSH("Actor::sendBackward","com/stencyl/models/Actor.hx",2343);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2343)
		if ((!(this->isHUD))){
			HX_STACK_LINE(2345)
			this->engine->sendBackward(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,sendBackward,(void))

Void Actor_obj::sendToBack( ){
{
		HX_STACK_PUSH("Actor::sendToBack","com/stencyl/models/Actor.hx",2335);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2335)
		if ((!(this->isHUD))){
			HX_STACK_LINE(2337)
			this->engine->sendToBack(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,sendToBack,(void))

Void Actor_obj::bringForward( ){
{
		HX_STACK_PUSH("Actor::bringForward","com/stencyl/models/Actor.hx",2327);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2327)
		if ((!(this->isHUD))){
			HX_STACK_LINE(2329)
			this->engine->bringForward(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,bringForward,(void))

Void Actor_obj::bringToFront( ){
{
		HX_STACK_PUSH("Actor::bringToFront","com/stencyl/models/Actor.hx",2319);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2319)
		if ((!(this->isHUD))){
			HX_STACK_LINE(2321)
			this->engine->bringToFront(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,bringToFront,(void))

Void Actor_obj::moveToLayer( Float layerID){
{
		HX_STACK_PUSH("Actor::moveToLayer","com/stencyl/models/Actor.hx",2311);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_LINE(2311)
		if ((!(this->isHUD))){
			HX_STACK_LINE(2313)
			this->engine->moveToLayer(hx::ObjectPtr<OBJ_>(this),::Std_obj::_int(layerID));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,moveToLayer,(void))

bool Actor_obj::getIsTerrainRegion( ){
	HX_STACK_PUSH("Actor::getIsTerrainRegion","com/stencyl/models/Actor.hx",2302);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2302)
	return this->isTerrainRegion;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getIsTerrainRegion,return )

bool Actor_obj::getIsRegion( ){
	HX_STACK_PUSH("Actor::getIsRegion","com/stencyl/models/Actor.hx",2297);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2297)
	return this->isRegion;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getIsRegion,return )

::com::stencyl::models::actor::Group Actor_obj::getGroup( ){
	HX_STACK_PUSH("Actor::getGroup","com/stencyl/models/Actor.hx",2292);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2292)
	return this->engine->groups->get(this->getGroupID());
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getGroup,return )

Void Actor_obj::unpause( ){
{
		HX_STACK_PUSH("Actor::unpause","com/stencyl/models/Actor.hx",2275);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2275)
		if ((this->isPausable())){
			HX_STACK_LINE(2278)
			this->paused = false;
			HX_STACK_LINE(2280)
			if ((!(this->isLightweight))){
				HX_STACK_LINE(2281)
				this->body->setPaused(false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,unpause,(void))

Void Actor_obj::pause( ){
{
		HX_STACK_PUSH("Actor::pause","com/stencyl/models/Actor.hx",2262);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2262)
		if ((this->isPausable())){
			HX_STACK_LINE(2265)
			this->paused = true;
			HX_STACK_LINE(2267)
			if ((!(this->isLightweight))){
				HX_STACK_LINE(2268)
				this->body->setPaused(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,pause,(void))

bool Actor_obj::isPaused( ){
	HX_STACK_PUSH("Actor::isPaused","com/stencyl/models/Actor.hx",2257);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2257)
	return this->paused;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isPaused,return )

bool Actor_obj::isPausable( ){
	HX_STACK_PUSH("Actor::isPausable","com/stencyl/models/Actor.hx",2252);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2252)
	return this->getType()->pausable;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isPausable,return )

::com::stencyl::models::actor::ActorType Actor_obj::getType( ){
	HX_STACK_PUSH("Actor::getType","com/stencyl/models/Actor.hx",2238);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2239)
	if (((this->typeID == (int)-1))){
		HX_STACK_LINE(2240)
		return null();
	}
	HX_STACK_LINE(2244)
	return hx::TCast< com::stencyl::models::actor::ActorType >::cast(::com::stencyl::Data_obj::get()->resources->get(this->typeID));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getType,return )

int Actor_obj::getLayerOrder( ){
	HX_STACK_PUSH("Actor::getLayerOrder","com/stencyl/models/Actor.hx",2233);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2233)
	return (this->engine->getOrderForLayerID(this->layerID) + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getLayerOrder,return )

int Actor_obj::getLayerID( ){
	HX_STACK_PUSH("Actor::getLayerID","com/stencyl/models/Actor.hx",2228);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2228)
	return this->layerID;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getLayerID,return )

int Actor_obj::getGroupID( ){
	HX_STACK_PUSH("Actor::getGroupID","com/stencyl/models/Actor.hx",2215);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2215)
	if ((this->isLightweight)){
		HX_STACK_LINE(2217)
		return this->groupID;
	}
	else{
		HX_STACK_LINE(2222)
		return this->body->groupID;
	}
	HX_STACK_LINE(2215)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getGroupID,return )

::String Actor_obj::getName( ){
	HX_STACK_PUSH("Actor::getName","com/stencyl/models/Actor.hx",2210);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2210)
	return this->get_name();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getName,return )

int Actor_obj::getID( ){
	HX_STACK_PUSH("Actor::getID","com/stencyl/models/Actor.hx",2205);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2205)
	return this->ID;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getID,return )

Void Actor_obj::removeRegionContact( ::box2D::dynamics::contacts::B2Contact point){
{
		HX_STACK_PUSH("Actor::removeRegionContact","com/stencyl/models/Actor.hx",2193);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(2193)
		if (((this->regionContacts != null()))){
			HX_STACK_LINE(2196)
			::de::polygonal::ds::IntHashTable _this = this->regionContacts;		HX_STACK_VAR(_this,"_this");
			int key = point->key;		HX_STACK_VAR(key,"key");
			struct _Function_2_1{
				inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2196);
					{
						HX_STACK_LINE(2196)
						::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(2196)
						int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
						struct _Function_3_1{
							inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2196);
								{
									HX_STACK_LINE(2196)
									int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(2196)
									i = _this1->_data->__get((i + (int)2));
									HX_STACK_LINE(2196)
									while(((i != (int)-1))){
										HX_STACK_LINE(2196)
										if (((_this1->_data->__get(i) == key))){
											HX_STACK_LINE(2196)
											v = _this1->_data->__get((i + (int)1));
											HX_STACK_LINE(2196)
											break;
										}
										HX_STACK_LINE(2196)
										i = _this1->_data->__get((i + (int)2));
									}
									HX_STACK_LINE(2196)
									return v;
								}
								return null();
							}
						};
						HX_STACK_LINE(2196)
						return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,key)) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(2196)
			int i = _Function_2_1::Block(_this,key);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2196)
			if (((i == (int)-2147483647))){
				HX_STACK_LINE(2196)
				false;
			}
			else{
				HX_STACK_LINE(2196)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(2196)
				hx::IndexRef((_this->_vals).mPtr,i) = null();
				HX_STACK_LINE(2196)
				_this->_keys[i] = (int)-2147483647;
				HX_STACK_LINE(2196)
				_this->_next[i] = _this->_free;
				HX_STACK_LINE(2196)
				_this->_free = i;
				HX_STACK_LINE(2196)
				bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
				HX_STACK_LINE(2196)
				if (((_this->_sizeLevel > (int)0))){
					HX_STACK_LINE(2196)
					if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
						HX_STACK_LINE(2196)
						if ((_this->_isResizable)){
							HX_STACK_LINE(2196)
							shrink = true;
						}
					}
				}
				HX_STACK_LINE(2196)
				{
					HX_STACK_LINE(2196)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(2196)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(2196)
					int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(2196)
					if (((i1 == (int)-1))){
						HX_STACK_LINE(2196)
						false;
					}
					else{
						HX_STACK_LINE(2196)
						if (((key == _this1->_data->__get(i1)))){
							HX_STACK_LINE(2196)
							if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
								HX_STACK_LINE(2196)
								_this1->_hash[b] = (int)-1;
							}
							else{
								HX_STACK_LINE(2196)
								_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
							}
							HX_STACK_LINE(2196)
							int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(2196)
							_this1->_next[j] = _this1->_free;
							HX_STACK_LINE(2196)
							_this1->_free = j;
							HX_STACK_LINE(2196)
							_this1->_data[(i1 + (int)1)] = (int)-2147483647;
							HX_STACK_LINE(2196)
							_this1->_data[(i1 + (int)2)] = (int)-1;
							HX_STACK_LINE(2196)
							(_this1->_size)--;
							HX_STACK_LINE(2196)
							if (((_this1->_sizeLevel > (int)0))){
								HX_STACK_LINE(2196)
								if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
									HX_STACK_LINE(2196)
									if ((_this1->_isResizable)){
										HX_STACK_LINE(2196)
										_this1->_shrink();
									}
								}
							}
							HX_STACK_LINE(2196)
							true;
						}
						else{
							HX_STACK_LINE(2196)
							bool exists = false;		HX_STACK_VAR(exists,"exists");
							HX_STACK_LINE(2196)
							int i0 = i1;		HX_STACK_VAR(i0,"i0");
							HX_STACK_LINE(2196)
							i1 = _this1->_data->__get((i1 + (int)2));
							HX_STACK_LINE(2196)
							while(((i1 != (int)-1))){
								HX_STACK_LINE(2196)
								if (((_this1->_data->__get(i1) == key))){
									HX_STACK_LINE(2196)
									exists = true;
									HX_STACK_LINE(2196)
									break;
								}
								HX_STACK_LINE(2196)
								i1 = _this1->_data->__get(((i0 = i1) + (int)2));
							}
							HX_STACK_LINE(2196)
							if ((exists)){
								HX_STACK_LINE(2196)
								_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
								HX_STACK_LINE(2196)
								int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(2196)
								_this1->_next[j] = _this1->_free;
								HX_STACK_LINE(2196)
								_this1->_free = j;
								HX_STACK_LINE(2196)
								_this1->_data[(i1 + (int)1)] = (int)-2147483647;
								HX_STACK_LINE(2196)
								_this1->_data[(i1 + (int)2)] = (int)-1;
								HX_STACK_LINE(2196)
								--(_this1->_size);
								HX_STACK_LINE(2196)
								if (((_this1->_sizeLevel > (int)0))){
									HX_STACK_LINE(2196)
									if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
										HX_STACK_LINE(2196)
										if ((_this1->_isResizable)){
											HX_STACK_LINE(2196)
											_this1->_shrink();
										}
									}
								}
								HX_STACK_LINE(2196)
								true;
							}
							else{
								HX_STACK_LINE(2196)
								false;
							}
						}
					}
				}
				HX_STACK_LINE(2196)
				if ((shrink)){
					HX_STACK_LINE(2196)
					(_this->_sizeLevel)--;
					HX_STACK_LINE(2196)
					int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(2196)
					int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2196);
							{
								HX_STACK_LINE(2196)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(2196)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(2196)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(2196)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(2196)
					_this->_next = _Function_4_1::Block(newSize);
					HX_STACK_LINE(2196)
					{
						HX_STACK_LINE(2196)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2196)
						while(((_g1 < _g))){
							HX_STACK_LINE(2196)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(2196)
							_this->_next[i1] = (i1 + (int)1);
						}
					}
					HX_STACK_LINE(2196)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(2196)
					_this->_free = (int)0;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2196);
							{
								HX_STACK_LINE(2196)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(2196)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(2196)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(2196)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(2196)
					Array< int > tmpKeys = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
					HX_STACK_LINE(2196)
					{
						HX_STACK_LINE(2196)
						int k = newSize;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(2196)
						if (((k == (int)-1))){
							HX_STACK_LINE(2196)
							k = tmpKeys->length;
						}
						HX_STACK_LINE(2196)
						{
							HX_STACK_LINE(2196)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2196)
							while(((_g < k))){
								HX_STACK_LINE(2196)
								int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(2196)
								tmpKeys[i1] = (int)-2147483647;
							}
						}
					}
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2196);
							{
								HX_STACK_LINE(2196)
								Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(2196)
								a = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(2196)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(2196)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(2196)
					Array< ::Dynamic > tmpVals = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
					HX_STACK_LINE(2196)
					for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
						int i1 = __it->next();
						{
							HX_STACK_LINE(2196)
							tmpKeys[_this->_free] = _this->_keys->__get(i1);
							HX_STACK_LINE(2196)
							tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
							HX_STACK_LINE(2196)
							_this->_free = _this->_next->__get(_this->_free);
						}
;
					}
					HX_STACK_LINE(2196)
					_this->_keys = tmpKeys;
					HX_STACK_LINE(2196)
					_this->_vals = tmpVals;
					HX_STACK_LINE(2196)
					{
						HX_STACK_LINE(2196)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2196)
						while(((_g1 < _g))){
							HX_STACK_LINE(2196)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(2196)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
							HX_STACK_LINE(2196)
							int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
							HX_STACK_LINE(2196)
							if (((i2 == (int)-1))){
								HX_STACK_LINE(2196)
								false;
							}
							else{
								HX_STACK_LINE(2196)
								if (((_this1->_data->__get(i2) == key1))){
									HX_STACK_LINE(2196)
									_this1->_data[(i2 + (int)1)] = i1;
									HX_STACK_LINE(2196)
									true;
								}
								else{
									HX_STACK_LINE(2196)
									i2 = _this1->_data->__get((i2 + (int)2));
									HX_STACK_LINE(2196)
									while(((i2 != (int)-1))){
										HX_STACK_LINE(2196)
										if (((_this1->_data->__get(i2) == key1))){
											HX_STACK_LINE(2196)
											_this1->_data[(i2 + (int)1)] = i1;
											HX_STACK_LINE(2196)
											break;
										}
										HX_STACK_LINE(2196)
										i2 = _this1->_data->__get((i2 + (int)2));
									}
									HX_STACK_LINE(2196)
									(i2 != (int)-1);
								}
							}
						}
					}
				}
				HX_STACK_LINE(2196)
				true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,removeRegionContact,(void))

Void Actor_obj::addRegionContact( ::box2D::dynamics::contacts::B2Contact point){
{
		HX_STACK_PUSH("Actor::addRegionContact","com/stencyl/models/Actor.hx",2185);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(2185)
		if (((this->regionContacts != null()))){
			HX_STACK_LINE(2188)
			::de::polygonal::ds::IntHashTable _this = this->regionContacts;		HX_STACK_VAR(_this,"_this");
			int key = point->key;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(2188)
			_this->_key0 = (int)-2147483647;
			HX_STACK_LINE(2188)
			if (((_this->_h->_size == _this->_h->_capacity))){
				HX_STACK_LINE(2188)
				int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
				HX_STACK_LINE(2188)
				int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
				struct _Function_3_1{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2188);
						{
							HX_STACK_LINE(2188)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(2188)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(2188)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(2188)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(2188)
				Array< int > tmp = _Function_3_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(2188)
				{
					HX_STACK_LINE(2188)
					Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(2188)
					if (((max == (int)-1))){
						HX_STACK_LINE(2188)
						max = src->length;
					}
					HX_STACK_LINE(2188)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(2188)
					{
						HX_STACK_LINE(2188)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2188)
						while(((_g < max))){
							HX_STACK_LINE(2188)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2188)
							tmp[(j)++] = src->__get(i);
						}
					}
					HX_STACK_LINE(2188)
					tmp;
				}
				HX_STACK_LINE(2188)
				_this->_next = tmp;
				struct _Function_3_2{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2188);
						{
							HX_STACK_LINE(2188)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(2188)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(2188)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(2188)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(2188)
				Array< int > tmp1 = _Function_3_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2188)
				{
					HX_STACK_LINE(2188)
					Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(2188)
					if (((max == (int)-1))){
						HX_STACK_LINE(2188)
						max = src->length;
					}
					HX_STACK_LINE(2188)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(2188)
					{
						HX_STACK_LINE(2188)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2188)
						while(((_g < max))){
							HX_STACK_LINE(2188)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2188)
							tmp1[(j)++] = src->__get(i);
						}
					}
					HX_STACK_LINE(2188)
					tmp1;
				}
				HX_STACK_LINE(2188)
				_this->_keys = tmp1;
				HX_STACK_LINE(2188)
				{
					HX_STACK_LINE(2188)
					int _g = oldSize;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(2188)
					while(((_g < newSize))){
						HX_STACK_LINE(2188)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2188)
						_this->_keys[i] = (int)-2147483647;
					}
				}
				HX_STACK_LINE(2188)
				{
					HX_STACK_LINE(2188)
					int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
					int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(2188)
					while(((_g1 < _g))){
						HX_STACK_LINE(2188)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2188)
						_this->_next[i] = (i + (int)1);
					}
				}
				HX_STACK_LINE(2188)
				_this->_next[(newSize - (int)1)] = (int)-1;
				HX_STACK_LINE(2188)
				_this->_free = oldSize;
				struct _Function_3_3{
					inline static Array< ::Dynamic > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2188);
						{
							HX_STACK_LINE(2188)
							Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(2188)
							a = Array_obj< ::Dynamic >::__new();
							HX_STACK_LINE(2188)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(2188)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(2188)
				Array< ::Dynamic > tmp2 = _Function_3_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2188)
				{
					HX_STACK_LINE(2188)
					Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(2188)
					if (((max == (int)-1))){
						HX_STACK_LINE(2188)
						max = src->length;
					}
					HX_STACK_LINE(2188)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(2188)
					{
						HX_STACK_LINE(2188)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2188)
						while(((_g < max))){
							HX_STACK_LINE(2188)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2188)
							tmp2[(j)++] = src->__get(i).StaticCast< ::box2D::dynamics::contacts::B2Contact >();
						}
					}
					HX_STACK_LINE(2188)
					tmp2;
				}
				HX_STACK_LINE(2188)
				_this->_vals = tmp2;
				HX_STACK_LINE(2188)
				(_this->_sizeLevel)++;
			}
			HX_STACK_LINE(2188)
			{
				HX_STACK_LINE(2188)
				::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(2188)
				if (((_this1->_size == _this1->_capacity))){
					HX_STACK_LINE(2188)
					if ((_this1->_isResizable)){
						HX_STACK_LINE(2188)
						_this1->_expand();
					}
				}
				HX_STACK_LINE(2188)
				int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2188)
				_this1->_free = _this1->_next->__get(_this1->_free);
				HX_STACK_LINE(2188)
				_this1->_data[i] = key;
				HX_STACK_LINE(2188)
				_this1->_data[(i + (int)1)] = _this->_free;
				HX_STACK_LINE(2188)
				int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(2188)
				int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(2188)
				if (((j == (int)-1))){
					HX_STACK_LINE(2188)
					_this1->_hash[b] = i;
					HX_STACK_LINE(2188)
					(_this1->_size)++;
					HX_STACK_LINE(2188)
					true;
				}
				else{
					HX_STACK_LINE(2188)
					bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
					HX_STACK_LINE(2188)
					int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2188)
					while(((t != (int)-1))){
						HX_STACK_LINE(2188)
						if (((_this1->_data->__get(t) == key))){
							HX_STACK_LINE(2188)
							first = false;
						}
						HX_STACK_LINE(2188)
						j = t;
						HX_STACK_LINE(2188)
						t = _this1->_data->__get((t + (int)2));
					}
					HX_STACK_LINE(2188)
					_this1->_data[(j + (int)2)] = i;
					HX_STACK_LINE(2188)
					(_this1->_size)++;
					HX_STACK_LINE(2188)
					first;
				}
			}
			HX_STACK_LINE(2188)
			hx::IndexRef((_this->_vals).mPtr,_this->_free) = point;
			HX_STACK_LINE(2188)
			_this->_keys[_this->_free] = key;
			HX_STACK_LINE(2188)
			_this->_free = _this->_next->__get(_this->_free);
			HX_STACK_LINE(2188)
			true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,addRegionContact,(void))

Void Actor_obj::removeContact( ::box2D::dynamics::contacts::B2Contact point){
{
		HX_STACK_PUSH("Actor::removeContact","com/stencyl/models/Actor.hx",2166);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(2167)
		if (((this->collisions != null()))){
			struct _Function_2_1{
				inline static bool Block( ::com::stencyl::models::Actor_obj *__this,::box2D::dynamics::contacts::B2Contact &point){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2169);
					{
						HX_STACK_LINE(2169)
						::de::polygonal::ds::IntHashTable _this = __this->collisions;		HX_STACK_VAR(_this,"_this");
						int key = point->key;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2169);
								{
									HX_STACK_LINE(2169)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(2169)
									int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2169);
											{
												HX_STACK_LINE(2169)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2169)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(2169)
												while(((i != (int)-1))){
													HX_STACK_LINE(2169)
													if (((_this1->_data->__get(i) == key))){
														HX_STACK_LINE(2169)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(2169)
														break;
													}
													HX_STACK_LINE(2169)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2169)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(2169)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2169)
						int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
						struct _Function_3_2{
							inline static bool Block( int &i,::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2169);
								{
									HX_STACK_LINE(2169)
									_this->_key0 = (int)-2147483647;
									HX_STACK_LINE(2169)
									hx::IndexRef((_this->_vals).mPtr,i) = null();
									HX_STACK_LINE(2169)
									_this->_keys[i] = (int)-2147483647;
									HX_STACK_LINE(2169)
									_this->_next[i] = _this->_free;
									HX_STACK_LINE(2169)
									_this->_free = i;
									HX_STACK_LINE(2169)
									bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
									HX_STACK_LINE(2169)
									if (((_this->_sizeLevel > (int)0))){
										HX_STACK_LINE(2169)
										if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
											HX_STACK_LINE(2169)
											if ((_this->_isResizable)){
												HX_STACK_LINE(2169)
												shrink = true;
											}
										}
									}
									HX_STACK_LINE(2169)
									{
										HX_STACK_LINE(2169)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(2169)
										int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(2169)
										int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(2169)
										if (((i1 == (int)-1))){
											HX_STACK_LINE(2169)
											false;
										}
										else{
											HX_STACK_LINE(2169)
											if (((key == _this1->_data->__get(i1)))){
												HX_STACK_LINE(2169)
												if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
													HX_STACK_LINE(2169)
													_this1->_hash[b] = (int)-1;
												}
												else{
													HX_STACK_LINE(2169)
													_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
												}
												HX_STACK_LINE(2169)
												int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
												HX_STACK_LINE(2169)
												_this1->_next[j] = _this1->_free;
												HX_STACK_LINE(2169)
												_this1->_free = j;
												HX_STACK_LINE(2169)
												_this1->_data[(i1 + (int)1)] = (int)-2147483647;
												HX_STACK_LINE(2169)
												_this1->_data[(i1 + (int)2)] = (int)-1;
												HX_STACK_LINE(2169)
												(_this1->_size)--;
												HX_STACK_LINE(2169)
												if (((_this1->_sizeLevel > (int)0))){
													HX_STACK_LINE(2169)
													if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
														HX_STACK_LINE(2169)
														if ((_this1->_isResizable)){
															HX_STACK_LINE(2169)
															_this1->_shrink();
														}
													}
												}
												HX_STACK_LINE(2169)
												true;
											}
											else{
												HX_STACK_LINE(2169)
												bool exists = false;		HX_STACK_VAR(exists,"exists");
												HX_STACK_LINE(2169)
												int i0 = i1;		HX_STACK_VAR(i0,"i0");
												HX_STACK_LINE(2169)
												i1 = _this1->_data->__get((i1 + (int)2));
												HX_STACK_LINE(2169)
												while(((i1 != (int)-1))){
													HX_STACK_LINE(2169)
													if (((_this1->_data->__get(i1) == key))){
														HX_STACK_LINE(2169)
														exists = true;
														HX_STACK_LINE(2169)
														break;
													}
													HX_STACK_LINE(2169)
													i1 = _this1->_data->__get(((i0 = i1) + (int)2));
												}
												HX_STACK_LINE(2169)
												if ((exists)){
													HX_STACK_LINE(2169)
													_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
													HX_STACK_LINE(2169)
													int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
													HX_STACK_LINE(2169)
													_this1->_next[j] = _this1->_free;
													HX_STACK_LINE(2169)
													_this1->_free = j;
													HX_STACK_LINE(2169)
													_this1->_data[(i1 + (int)1)] = (int)-2147483647;
													HX_STACK_LINE(2169)
													_this1->_data[(i1 + (int)2)] = (int)-1;
													HX_STACK_LINE(2169)
													--(_this1->_size);
													HX_STACK_LINE(2169)
													if (((_this1->_sizeLevel > (int)0))){
														HX_STACK_LINE(2169)
														if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
															HX_STACK_LINE(2169)
															if ((_this1->_isResizable)){
																HX_STACK_LINE(2169)
																_this1->_shrink();
															}
														}
													}
													HX_STACK_LINE(2169)
													true;
												}
												else{
													HX_STACK_LINE(2169)
													false;
												}
											}
										}
									}
									HX_STACK_LINE(2169)
									if ((shrink)){
										HX_STACK_LINE(2169)
										(_this->_sizeLevel)--;
										HX_STACK_LINE(2169)
										int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
										HX_STACK_LINE(2169)
										int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
										struct _Function_5_1{
											inline static Array< int > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2169);
												{
													HX_STACK_LINE(2169)
													Array< int > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2169)
													a = Array_obj< int >::__new();
													HX_STACK_LINE(2169)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2169)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2169)
										_this->_next = _Function_5_1::Block(newSize);
										HX_STACK_LINE(2169)
										{
											HX_STACK_LINE(2169)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(2169)
											while(((_g1 < _g))){
												HX_STACK_LINE(2169)
												int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(2169)
												_this->_next[i1] = (i1 + (int)1);
											}
										}
										HX_STACK_LINE(2169)
										_this->_next[(newSize - (int)1)] = (int)-1;
										HX_STACK_LINE(2169)
										_this->_free = (int)0;
										struct _Function_5_2{
											inline static Array< int > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2169);
												{
													HX_STACK_LINE(2169)
													Array< int > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2169)
													a = Array_obj< int >::__new();
													HX_STACK_LINE(2169)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2169)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2169)
										Array< int > tmpKeys = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
										HX_STACK_LINE(2169)
										{
											HX_STACK_LINE(2169)
											int k = newSize;		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(2169)
											if (((k == (int)-1))){
												HX_STACK_LINE(2169)
												k = tmpKeys->length;
											}
											HX_STACK_LINE(2169)
											{
												HX_STACK_LINE(2169)
												int _g = (int)0;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(2169)
												while(((_g < k))){
													HX_STACK_LINE(2169)
													int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(2169)
													tmpKeys[i1] = (int)-2147483647;
												}
											}
										}
										struct _Function_5_3{
											inline static Array< ::Dynamic > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2169);
												{
													HX_STACK_LINE(2169)
													Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2169)
													a = Array_obj< ::Dynamic >::__new();
													HX_STACK_LINE(2169)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2169)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2169)
										Array< ::Dynamic > tmpVals = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
										HX_STACK_LINE(2169)
										for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
											int i1 = __it->next();
											{
												HX_STACK_LINE(2169)
												tmpKeys[_this->_free] = _this->_keys->__get(i1);
												HX_STACK_LINE(2169)
												tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
												HX_STACK_LINE(2169)
												_this->_free = _this->_next->__get(_this->_free);
											}
;
										}
										HX_STACK_LINE(2169)
										_this->_keys = tmpKeys;
										HX_STACK_LINE(2169)
										_this->_vals = tmpVals;
										HX_STACK_LINE(2169)
										{
											HX_STACK_LINE(2169)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(2169)
											while(((_g1 < _g))){
												HX_STACK_LINE(2169)
												int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(2169)
												::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
												int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
												HX_STACK_LINE(2169)
												int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
												HX_STACK_LINE(2169)
												if (((i2 == (int)-1))){
													HX_STACK_LINE(2169)
													false;
												}
												else{
													HX_STACK_LINE(2169)
													if (((_this1->_data->__get(i2) == key1))){
														HX_STACK_LINE(2169)
														_this1->_data[(i2 + (int)1)] = i1;
														HX_STACK_LINE(2169)
														true;
													}
													else{
														HX_STACK_LINE(2169)
														i2 = _this1->_data->__get((i2 + (int)2));
														HX_STACK_LINE(2169)
														while(((i2 != (int)-1))){
															HX_STACK_LINE(2169)
															if (((_this1->_data->__get(i2) == key1))){
																HX_STACK_LINE(2169)
																_this1->_data[(i2 + (int)1)] = i1;
																HX_STACK_LINE(2169)
																break;
															}
															HX_STACK_LINE(2169)
															i2 = _this1->_data->__get((i2 + (int)2));
														}
														HX_STACK_LINE(2169)
														(i2 != (int)-1);
													}
												}
											}
										}
									}
									HX_STACK_LINE(2169)
									return true;
								}
								return null();
							}
						};
						HX_STACK_LINE(2169)
						return (  (((i == (int)-2147483647))) ? bool(false) : bool(_Function_3_2::Block(i,_this,key)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(2168)
			if ((_Function_2_1::Block(this,point))){
				HX_STACK_LINE(2170)
				(this->collisionsCount)--;
			}
		}
		HX_STACK_LINE(2175)
		if (((this->contacts != null()))){
			struct _Function_2_1{
				inline static bool Block( ::com::stencyl::models::Actor_obj *__this,::box2D::dynamics::contacts::B2Contact &point){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2177);
					{
						HX_STACK_LINE(2177)
						::de::polygonal::ds::IntHashTable _this = __this->contacts;		HX_STACK_VAR(_this,"_this");
						int key = point->key;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2177);
								{
									HX_STACK_LINE(2177)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(2177)
									int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2177);
											{
												HX_STACK_LINE(2177)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2177)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(2177)
												while(((i != (int)-1))){
													HX_STACK_LINE(2177)
													if (((_this1->_data->__get(i) == key))){
														HX_STACK_LINE(2177)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(2177)
														break;
													}
													HX_STACK_LINE(2177)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2177)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(2177)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2177)
						int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
						struct _Function_3_2{
							inline static bool Block( int &i,::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2177);
								{
									HX_STACK_LINE(2177)
									_this->_key0 = (int)-2147483647;
									HX_STACK_LINE(2177)
									hx::IndexRef((_this->_vals).mPtr,i) = null();
									HX_STACK_LINE(2177)
									_this->_keys[i] = (int)-2147483647;
									HX_STACK_LINE(2177)
									_this->_next[i] = _this->_free;
									HX_STACK_LINE(2177)
									_this->_free = i;
									HX_STACK_LINE(2177)
									bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
									HX_STACK_LINE(2177)
									if (((_this->_sizeLevel > (int)0))){
										HX_STACK_LINE(2177)
										if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
											HX_STACK_LINE(2177)
											if ((_this->_isResizable)){
												HX_STACK_LINE(2177)
												shrink = true;
											}
										}
									}
									HX_STACK_LINE(2177)
									{
										HX_STACK_LINE(2177)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(2177)
										int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(2177)
										int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(2177)
										if (((i1 == (int)-1))){
											HX_STACK_LINE(2177)
											false;
										}
										else{
											HX_STACK_LINE(2177)
											if (((key == _this1->_data->__get(i1)))){
												HX_STACK_LINE(2177)
												if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
													HX_STACK_LINE(2177)
													_this1->_hash[b] = (int)-1;
												}
												else{
													HX_STACK_LINE(2177)
													_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
												}
												HX_STACK_LINE(2177)
												int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
												HX_STACK_LINE(2177)
												_this1->_next[j] = _this1->_free;
												HX_STACK_LINE(2177)
												_this1->_free = j;
												HX_STACK_LINE(2177)
												_this1->_data[(i1 + (int)1)] = (int)-2147483647;
												HX_STACK_LINE(2177)
												_this1->_data[(i1 + (int)2)] = (int)-1;
												HX_STACK_LINE(2177)
												(_this1->_size)--;
												HX_STACK_LINE(2177)
												if (((_this1->_sizeLevel > (int)0))){
													HX_STACK_LINE(2177)
													if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
														HX_STACK_LINE(2177)
														if ((_this1->_isResizable)){
															HX_STACK_LINE(2177)
															_this1->_shrink();
														}
													}
												}
												HX_STACK_LINE(2177)
												true;
											}
											else{
												HX_STACK_LINE(2177)
												bool exists = false;		HX_STACK_VAR(exists,"exists");
												HX_STACK_LINE(2177)
												int i0 = i1;		HX_STACK_VAR(i0,"i0");
												HX_STACK_LINE(2177)
												i1 = _this1->_data->__get((i1 + (int)2));
												HX_STACK_LINE(2177)
												while(((i1 != (int)-1))){
													HX_STACK_LINE(2177)
													if (((_this1->_data->__get(i1) == key))){
														HX_STACK_LINE(2177)
														exists = true;
														HX_STACK_LINE(2177)
														break;
													}
													HX_STACK_LINE(2177)
													i1 = _this1->_data->__get(((i0 = i1) + (int)2));
												}
												HX_STACK_LINE(2177)
												if ((exists)){
													HX_STACK_LINE(2177)
													_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
													HX_STACK_LINE(2177)
													int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
													HX_STACK_LINE(2177)
													_this1->_next[j] = _this1->_free;
													HX_STACK_LINE(2177)
													_this1->_free = j;
													HX_STACK_LINE(2177)
													_this1->_data[(i1 + (int)1)] = (int)-2147483647;
													HX_STACK_LINE(2177)
													_this1->_data[(i1 + (int)2)] = (int)-1;
													HX_STACK_LINE(2177)
													--(_this1->_size);
													HX_STACK_LINE(2177)
													if (((_this1->_sizeLevel > (int)0))){
														HX_STACK_LINE(2177)
														if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
															HX_STACK_LINE(2177)
															if ((_this1->_isResizable)){
																HX_STACK_LINE(2177)
																_this1->_shrink();
															}
														}
													}
													HX_STACK_LINE(2177)
													true;
												}
												else{
													HX_STACK_LINE(2177)
													false;
												}
											}
										}
									}
									HX_STACK_LINE(2177)
									if ((shrink)){
										HX_STACK_LINE(2177)
										(_this->_sizeLevel)--;
										HX_STACK_LINE(2177)
										int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
										HX_STACK_LINE(2177)
										int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
										struct _Function_5_1{
											inline static Array< int > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2177);
												{
													HX_STACK_LINE(2177)
													Array< int > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2177)
													a = Array_obj< int >::__new();
													HX_STACK_LINE(2177)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2177)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2177)
										_this->_next = _Function_5_1::Block(newSize);
										HX_STACK_LINE(2177)
										{
											HX_STACK_LINE(2177)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(2177)
											while(((_g1 < _g))){
												HX_STACK_LINE(2177)
												int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(2177)
												_this->_next[i1] = (i1 + (int)1);
											}
										}
										HX_STACK_LINE(2177)
										_this->_next[(newSize - (int)1)] = (int)-1;
										HX_STACK_LINE(2177)
										_this->_free = (int)0;
										struct _Function_5_2{
											inline static Array< int > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2177);
												{
													HX_STACK_LINE(2177)
													Array< int > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2177)
													a = Array_obj< int >::__new();
													HX_STACK_LINE(2177)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2177)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2177)
										Array< int > tmpKeys = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
										HX_STACK_LINE(2177)
										{
											HX_STACK_LINE(2177)
											int k = newSize;		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(2177)
											if (((k == (int)-1))){
												HX_STACK_LINE(2177)
												k = tmpKeys->length;
											}
											HX_STACK_LINE(2177)
											{
												HX_STACK_LINE(2177)
												int _g = (int)0;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(2177)
												while(((_g < k))){
													HX_STACK_LINE(2177)
													int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(2177)
													tmpKeys[i1] = (int)-2147483647;
												}
											}
										}
										struct _Function_5_3{
											inline static Array< ::Dynamic > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2177);
												{
													HX_STACK_LINE(2177)
													Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2177)
													a = Array_obj< ::Dynamic >::__new();
													HX_STACK_LINE(2177)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2177)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2177)
										Array< ::Dynamic > tmpVals = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
										HX_STACK_LINE(2177)
										for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
											int i1 = __it->next();
											{
												HX_STACK_LINE(2177)
												tmpKeys[_this->_free] = _this->_keys->__get(i1);
												HX_STACK_LINE(2177)
												tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
												HX_STACK_LINE(2177)
												_this->_free = _this->_next->__get(_this->_free);
											}
;
										}
										HX_STACK_LINE(2177)
										_this->_keys = tmpKeys;
										HX_STACK_LINE(2177)
										_this->_vals = tmpVals;
										HX_STACK_LINE(2177)
										{
											HX_STACK_LINE(2177)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(2177)
											while(((_g1 < _g))){
												HX_STACK_LINE(2177)
												int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(2177)
												::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
												int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
												HX_STACK_LINE(2177)
												int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
												HX_STACK_LINE(2177)
												if (((i2 == (int)-1))){
													HX_STACK_LINE(2177)
													false;
												}
												else{
													HX_STACK_LINE(2177)
													if (((_this1->_data->__get(i2) == key1))){
														HX_STACK_LINE(2177)
														_this1->_data[(i2 + (int)1)] = i1;
														HX_STACK_LINE(2177)
														true;
													}
													else{
														HX_STACK_LINE(2177)
														i2 = _this1->_data->__get((i2 + (int)2));
														HX_STACK_LINE(2177)
														while(((i2 != (int)-1))){
															HX_STACK_LINE(2177)
															if (((_this1->_data->__get(i2) == key1))){
																HX_STACK_LINE(2177)
																_this1->_data[(i2 + (int)1)] = i1;
																HX_STACK_LINE(2177)
																break;
															}
															HX_STACK_LINE(2177)
															i2 = _this1->_data->__get((i2 + (int)2));
														}
														HX_STACK_LINE(2177)
														(i2 != (int)-1);
													}
												}
											}
										}
									}
									HX_STACK_LINE(2177)
									return true;
								}
								return null();
							}
						};
						HX_STACK_LINE(2177)
						return (  (((i == (int)-2147483647))) ? bool(false) : bool(_Function_3_2::Block(i,_this,key)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(2176)
			if ((_Function_2_1::Block(this,point))){
				HX_STACK_LINE(2178)
				(this->contactCount)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,removeContact,(void))

Void Actor_obj::addContact( ::box2D::dynamics::contacts::B2Contact point){
{
		HX_STACK_PUSH("Actor::addContact","com/stencyl/models/Actor.hx",2152);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(2152)
		if (((this->contacts != null()))){
			HX_STACK_LINE(2155)
			{
				HX_STACK_LINE(2155)
				::de::polygonal::ds::IntHashTable _this = this->contacts;		HX_STACK_VAR(_this,"_this");
				int key = point->key;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(2155)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(2155)
				if (((_this->_h->_size == _this->_h->_capacity))){
					HX_STACK_LINE(2155)
					int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(2155)
					int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2155);
							{
								HX_STACK_LINE(2155)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(2155)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(2155)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(2155)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(2155)
					Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(2155)
					{
						HX_STACK_LINE(2155)
						Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2155)
						if (((max == (int)-1))){
							HX_STACK_LINE(2155)
							max = src->length;
						}
						HX_STACK_LINE(2155)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2155)
						{
							HX_STACK_LINE(2155)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2155)
							while(((_g < max))){
								HX_STACK_LINE(2155)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2155)
								tmp[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(2155)
						tmp;
					}
					HX_STACK_LINE(2155)
					_this->_next = tmp;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2155);
							{
								HX_STACK_LINE(2155)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(2155)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(2155)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(2155)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(2155)
					Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(2155)
					{
						HX_STACK_LINE(2155)
						Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2155)
						if (((max == (int)-1))){
							HX_STACK_LINE(2155)
							max = src->length;
						}
						HX_STACK_LINE(2155)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2155)
						{
							HX_STACK_LINE(2155)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2155)
							while(((_g < max))){
								HX_STACK_LINE(2155)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2155)
								tmp1[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(2155)
						tmp1;
					}
					HX_STACK_LINE(2155)
					_this->_keys = tmp1;
					HX_STACK_LINE(2155)
					{
						HX_STACK_LINE(2155)
						int _g = oldSize;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2155)
						while(((_g < newSize))){
							HX_STACK_LINE(2155)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2155)
							_this->_keys[i] = (int)-2147483647;
						}
					}
					HX_STACK_LINE(2155)
					{
						HX_STACK_LINE(2155)
						int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2155)
						while(((_g1 < _g))){
							HX_STACK_LINE(2155)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2155)
							_this->_next[i] = (i + (int)1);
						}
					}
					HX_STACK_LINE(2155)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(2155)
					_this->_free = oldSize;
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2155);
							{
								HX_STACK_LINE(2155)
								Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(2155)
								a = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(2155)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(2155)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(2155)
					Array< ::Dynamic > tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(2155)
					{
						HX_STACK_LINE(2155)
						Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2155)
						if (((max == (int)-1))){
							HX_STACK_LINE(2155)
							max = src->length;
						}
						HX_STACK_LINE(2155)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2155)
						{
							HX_STACK_LINE(2155)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2155)
							while(((_g < max))){
								HX_STACK_LINE(2155)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2155)
								tmp2[(j)++] = src->__get(i).StaticCast< ::box2D::dynamics::contacts::B2Contact >();
							}
						}
						HX_STACK_LINE(2155)
						tmp2;
					}
					HX_STACK_LINE(2155)
					_this->_vals = tmp2;
					HX_STACK_LINE(2155)
					(_this->_sizeLevel)++;
				}
				HX_STACK_LINE(2155)
				{
					HX_STACK_LINE(2155)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(2155)
					if (((_this1->_size == _this1->_capacity))){
						HX_STACK_LINE(2155)
						if ((_this1->_isResizable)){
							HX_STACK_LINE(2155)
							_this1->_expand();
						}
					}
					HX_STACK_LINE(2155)
					int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(2155)
					_this1->_free = _this1->_next->__get(_this1->_free);
					HX_STACK_LINE(2155)
					_this1->_data[i] = key;
					HX_STACK_LINE(2155)
					_this1->_data[(i + (int)1)] = _this->_free;
					HX_STACK_LINE(2155)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(2155)
					int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(2155)
					if (((j == (int)-1))){
						HX_STACK_LINE(2155)
						_this1->_hash[b] = i;
						HX_STACK_LINE(2155)
						(_this1->_size)++;
						HX_STACK_LINE(2155)
						true;
					}
					else{
						HX_STACK_LINE(2155)
						bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
						HX_STACK_LINE(2155)
						int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2155)
						while(((t != (int)-1))){
							HX_STACK_LINE(2155)
							if (((_this1->_data->__get(t) == key))){
								HX_STACK_LINE(2155)
								first = false;
							}
							HX_STACK_LINE(2155)
							j = t;
							HX_STACK_LINE(2155)
							t = _this1->_data->__get((t + (int)2));
						}
						HX_STACK_LINE(2155)
						_this1->_data[(j + (int)2)] = i;
						HX_STACK_LINE(2155)
						(_this1->_size)++;
						HX_STACK_LINE(2155)
						first;
					}
				}
				HX_STACK_LINE(2155)
				hx::IndexRef((_this->_vals).mPtr,_this->_free) = point;
				HX_STACK_LINE(2155)
				_this->_keys[_this->_free] = key;
				HX_STACK_LINE(2155)
				_this->_free = _this->_next->__get(_this->_free);
				HX_STACK_LINE(2155)
				true;
			}
			HX_STACK_LINE(2156)
			(this->contactCount)++;
			struct _Function_2_1{
				inline static bool Block( ::com::stencyl::models::Actor_obj *__this,::box2D::dynamics::contacts::B2Contact &point){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2158);
					{
						HX_STACK_LINE(2158)
						::de::polygonal::ds::IntHashTable _this = __this->collisions;		HX_STACK_VAR(_this,"_this");
						int key = point->key;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2158);
								{
									HX_STACK_LINE(2158)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(2158)
									int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2158);
											{
												HX_STACK_LINE(2158)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2158)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(2158)
												while(((i != (int)-1))){
													HX_STACK_LINE(2158)
													if (((_this1->_data->__get(i) == key))){
														HX_STACK_LINE(2158)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(2158)
														break;
													}
													HX_STACK_LINE(2158)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2158)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(2158)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2158)
						int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
						struct _Function_3_2{
							inline static bool Block( int &i,::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2158);
								{
									HX_STACK_LINE(2158)
									_this->_key0 = (int)-2147483647;
									HX_STACK_LINE(2158)
									hx::IndexRef((_this->_vals).mPtr,i) = null();
									HX_STACK_LINE(2158)
									_this->_keys[i] = (int)-2147483647;
									HX_STACK_LINE(2158)
									_this->_next[i] = _this->_free;
									HX_STACK_LINE(2158)
									_this->_free = i;
									HX_STACK_LINE(2158)
									bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
									HX_STACK_LINE(2158)
									if (((_this->_sizeLevel > (int)0))){
										HX_STACK_LINE(2158)
										if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
											HX_STACK_LINE(2158)
											if ((_this->_isResizable)){
												HX_STACK_LINE(2158)
												shrink = true;
											}
										}
									}
									HX_STACK_LINE(2158)
									{
										HX_STACK_LINE(2158)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(2158)
										int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(2158)
										int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(2158)
										if (((i1 == (int)-1))){
											HX_STACK_LINE(2158)
											false;
										}
										else{
											HX_STACK_LINE(2158)
											if (((key == _this1->_data->__get(i1)))){
												HX_STACK_LINE(2158)
												if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
													HX_STACK_LINE(2158)
													_this1->_hash[b] = (int)-1;
												}
												else{
													HX_STACK_LINE(2158)
													_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
												}
												HX_STACK_LINE(2158)
												int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
												HX_STACK_LINE(2158)
												_this1->_next[j] = _this1->_free;
												HX_STACK_LINE(2158)
												_this1->_free = j;
												HX_STACK_LINE(2158)
												_this1->_data[(i1 + (int)1)] = (int)-2147483647;
												HX_STACK_LINE(2158)
												_this1->_data[(i1 + (int)2)] = (int)-1;
												HX_STACK_LINE(2158)
												(_this1->_size)--;
												HX_STACK_LINE(2158)
												if (((_this1->_sizeLevel > (int)0))){
													HX_STACK_LINE(2158)
													if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
														HX_STACK_LINE(2158)
														if ((_this1->_isResizable)){
															HX_STACK_LINE(2158)
															_this1->_shrink();
														}
													}
												}
												HX_STACK_LINE(2158)
												true;
											}
											else{
												HX_STACK_LINE(2158)
												bool exists = false;		HX_STACK_VAR(exists,"exists");
												HX_STACK_LINE(2158)
												int i0 = i1;		HX_STACK_VAR(i0,"i0");
												HX_STACK_LINE(2158)
												i1 = _this1->_data->__get((i1 + (int)2));
												HX_STACK_LINE(2158)
												while(((i1 != (int)-1))){
													HX_STACK_LINE(2158)
													if (((_this1->_data->__get(i1) == key))){
														HX_STACK_LINE(2158)
														exists = true;
														HX_STACK_LINE(2158)
														break;
													}
													HX_STACK_LINE(2158)
													i1 = _this1->_data->__get(((i0 = i1) + (int)2));
												}
												HX_STACK_LINE(2158)
												if ((exists)){
													HX_STACK_LINE(2158)
													_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
													HX_STACK_LINE(2158)
													int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
													HX_STACK_LINE(2158)
													_this1->_next[j] = _this1->_free;
													HX_STACK_LINE(2158)
													_this1->_free = j;
													HX_STACK_LINE(2158)
													_this1->_data[(i1 + (int)1)] = (int)-2147483647;
													HX_STACK_LINE(2158)
													_this1->_data[(i1 + (int)2)] = (int)-1;
													HX_STACK_LINE(2158)
													--(_this1->_size);
													HX_STACK_LINE(2158)
													if (((_this1->_sizeLevel > (int)0))){
														HX_STACK_LINE(2158)
														if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
															HX_STACK_LINE(2158)
															if ((_this1->_isResizable)){
																HX_STACK_LINE(2158)
																_this1->_shrink();
															}
														}
													}
													HX_STACK_LINE(2158)
													true;
												}
												else{
													HX_STACK_LINE(2158)
													false;
												}
											}
										}
									}
									HX_STACK_LINE(2158)
									if ((shrink)){
										HX_STACK_LINE(2158)
										(_this->_sizeLevel)--;
										HX_STACK_LINE(2158)
										int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
										HX_STACK_LINE(2158)
										int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
										struct _Function_5_1{
											inline static Array< int > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2158);
												{
													HX_STACK_LINE(2158)
													Array< int > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2158)
													a = Array_obj< int >::__new();
													HX_STACK_LINE(2158)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2158)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2158)
										_this->_next = _Function_5_1::Block(newSize);
										HX_STACK_LINE(2158)
										{
											HX_STACK_LINE(2158)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(2158)
											while(((_g1 < _g))){
												HX_STACK_LINE(2158)
												int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(2158)
												_this->_next[i1] = (i1 + (int)1);
											}
										}
										HX_STACK_LINE(2158)
										_this->_next[(newSize - (int)1)] = (int)-1;
										HX_STACK_LINE(2158)
										_this->_free = (int)0;
										struct _Function_5_2{
											inline static Array< int > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2158);
												{
													HX_STACK_LINE(2158)
													Array< int > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2158)
													a = Array_obj< int >::__new();
													HX_STACK_LINE(2158)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2158)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2158)
										Array< int > tmpKeys = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
										HX_STACK_LINE(2158)
										{
											HX_STACK_LINE(2158)
											int k = newSize;		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(2158)
											if (((k == (int)-1))){
												HX_STACK_LINE(2158)
												k = tmpKeys->length;
											}
											HX_STACK_LINE(2158)
											{
												HX_STACK_LINE(2158)
												int _g = (int)0;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(2158)
												while(((_g < k))){
													HX_STACK_LINE(2158)
													int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(2158)
													tmpKeys[i1] = (int)-2147483647;
												}
											}
										}
										struct _Function_5_3{
											inline static Array< ::Dynamic > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2158);
												{
													HX_STACK_LINE(2158)
													Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2158)
													a = Array_obj< ::Dynamic >::__new();
													HX_STACK_LINE(2158)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2158)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2158)
										Array< ::Dynamic > tmpVals = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
										HX_STACK_LINE(2158)
										for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
											int i1 = __it->next();
											{
												HX_STACK_LINE(2158)
												tmpKeys[_this->_free] = _this->_keys->__get(i1);
												HX_STACK_LINE(2158)
												tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
												HX_STACK_LINE(2158)
												_this->_free = _this->_next->__get(_this->_free);
											}
;
										}
										HX_STACK_LINE(2158)
										_this->_keys = tmpKeys;
										HX_STACK_LINE(2158)
										_this->_vals = tmpVals;
										HX_STACK_LINE(2158)
										{
											HX_STACK_LINE(2158)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(2158)
											while(((_g1 < _g))){
												HX_STACK_LINE(2158)
												int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(2158)
												::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
												int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
												HX_STACK_LINE(2158)
												int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
												HX_STACK_LINE(2158)
												if (((i2 == (int)-1))){
													HX_STACK_LINE(2158)
													false;
												}
												else{
													HX_STACK_LINE(2158)
													if (((_this1->_data->__get(i2) == key1))){
														HX_STACK_LINE(2158)
														_this1->_data[(i2 + (int)1)] = i1;
														HX_STACK_LINE(2158)
														true;
													}
													else{
														HX_STACK_LINE(2158)
														i2 = _this1->_data->__get((i2 + (int)2));
														HX_STACK_LINE(2158)
														while(((i2 != (int)-1))){
															HX_STACK_LINE(2158)
															if (((_this1->_data->__get(i2) == key1))){
																HX_STACK_LINE(2158)
																_this1->_data[(i2 + (int)1)] = i1;
																HX_STACK_LINE(2158)
																break;
															}
															HX_STACK_LINE(2158)
															i2 = _this1->_data->__get((i2 + (int)2));
														}
														HX_STACK_LINE(2158)
														(i2 != (int)-1);
													}
												}
											}
										}
									}
									HX_STACK_LINE(2158)
									return true;
								}
								return null();
							}
						};
						HX_STACK_LINE(2158)
						return (  (((i == (int)-2147483647))) ? bool(false) : bool(_Function_3_2::Block(i,_this,key)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(2158)
			if ((_Function_2_1::Block(this,point))){
				HX_STACK_LINE(2159)
				(this->collisionsCount)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,addContact,(void))

Void Actor_obj::handleCollisions( ){
{
		HX_STACK_PUSH("Actor::handleCollisions","com/stencyl/models/Actor.hx",1888);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1889)
		::com::stencyl::models::Actor otherActor;		HX_STACK_VAR(otherActor,"otherActor");
		HX_STACK_LINE(1890)
		::box2D::dynamics::B2Fixture otherShape;		HX_STACK_VAR(otherShape,"otherShape");
		HX_STACK_LINE(1891)
		::box2D::dynamics::B2Fixture thisShape;		HX_STACK_VAR(thisShape,"thisShape");
		HX_STACK_LINE(1894)
		if (((this->contactCount > (int)0))){
			HX_STACK_LINE(1895)
			for(::cpp::FastIterator_obj< ::box2D::dynamics::contacts::B2Contact > *__it = ::cpp::CreateFastIterator< ::box2D::dynamics::contacts::B2Contact >(this->contacts->iterator());  __it->hasNext(); ){
				::box2D::dynamics::contacts::B2Contact p = __it->next();
				{
					HX_STACK_LINE(1898)
					int key = p->key;		HX_STACK_VAR(key,"key");
					struct _Function_3_1{
						inline static ::com::stencyl::models::actor::Collision Block( ::com::stencyl::models::Actor_obj *__this,int &key){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1900);
							{
								HX_STACK_LINE(1900)
								::de::polygonal::ds::IntHashTable _this = __this->collisions;		HX_STACK_VAR(_this,"_this");
								struct _Function_4_1{
									inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
										HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1900);
										{
											HX_STACK_LINE(1900)
											::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1900)
											int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
											struct _Function_5_1{
												inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
													HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1900);
													{
														HX_STACK_LINE(1900)
														int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(1900)
														i = _this1->_data->__get((i + (int)2));
														HX_STACK_LINE(1900)
														while(((i != (int)-1))){
															HX_STACK_LINE(1900)
															if (((_this1->_data->__get(i) == key))){
																HX_STACK_LINE(1900)
																v = _this1->_data->__get((i + (int)1));
																HX_STACK_LINE(1900)
																break;
															}
															HX_STACK_LINE(1900)
															i = _this1->_data->__get((i + (int)2));
														}
														HX_STACK_LINE(1900)
														return v;
													}
													return null();
												}
											};
											HX_STACK_LINE(1900)
											return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,_this1,key)) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1900)
								int i = _Function_4_1::Block(_this,key);		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1900)
								return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::actor::Collision(null()) : ::com::stencyl::models::actor::Collision(_this->_vals->__GetItem(i)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1900)
					if (((_Function_3_1::Block(this,key) != null()))){
						HX_STACK_LINE(1901)
						continue;
					}
					HX_STACK_LINE(1905)
					::com::stencyl::models::Actor a1 = hx::TCast< com::stencyl::models::Actor >::cast(p->getFixtureA()->getUserData());		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(1906)
					::com::stencyl::models::Actor a2 = hx::TCast< com::stencyl::models::Actor >::cast(p->getFixtureB()->getUserData());		HX_STACK_VAR(a2,"a2");
					HX_STACK_LINE(1908)
					if (((a1 == hx::ObjectPtr<OBJ_>(this)))){
						HX_STACK_LINE(1910)
						otherActor = a2;
						HX_STACK_LINE(1911)
						otherShape = p->getFixtureB();
						HX_STACK_LINE(1912)
						thisShape = p->getFixtureA();
					}
					else{
						HX_STACK_LINE(1917)
						otherActor = a1;
						HX_STACK_LINE(1918)
						otherShape = p->getFixtureA();
						HX_STACK_LINE(1919)
						thisShape = p->getFixtureB();
					}
					HX_STACK_LINE(1923)
					::com::stencyl::models::actor::Collision d = ::com::stencyl::models::actor::Collision_obj::__new();		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(1924)
					d->otherActor = otherActor;
					HX_STACK_LINE(1925)
					d->otherShape = otherShape;
					HX_STACK_LINE(1926)
					d->thisActor = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(1927)
					d->thisShape = thisShape;
					HX_STACK_LINE(1928)
					d->actorA = a1;
					HX_STACK_LINE(1929)
					d->actorB = a2;
					HX_STACK_LINE(1933)
					p->getWorldManifold(::com::stencyl::models::Actor_obj::manifold);
					HX_STACK_LINE(1935)
					::box2D::common::math::B2Vec2 pt = ::com::stencyl::models::Actor_obj::manifold->getPoint();		HX_STACK_VAR(pt,"pt");
					HX_STACK_LINE(1936)
					::com::stencyl::models::actor::CollisionPoint cp;		HX_STACK_VAR(cp,"cp");
					HX_STACK_LINE(1940)
					if (((pt == null()))){
						HX_STACK_LINE(1941)
						cp = ::com::stencyl::models::actor::CollisionPoint_obj::__new((int)-9999,(int)-9999,::com::stencyl::models::Actor_obj::manifold->m_normal->x,::com::stencyl::models::Actor_obj::manifold->m_normal->y);
					}
					else{
						HX_STACK_LINE(1952)
						if ((::Std_obj::is(thisShape->getShape(),hx::ClassOf< ::box2D::collision::shapes::B2CircleShape >()))){
							HX_STACK_LINE(1956)
							cp = ::com::stencyl::models::actor::CollisionPoint_obj::__new((::com::stencyl::models::Actor_obj::manifold->getPoint()->x * (int)2),(::com::stencyl::models::Actor_obj::manifold->getPoint()->y * (int)2),::com::stencyl::models::Actor_obj::manifold->m_normal->x,::com::stencyl::models::Actor_obj::manifold->m_normal->y);
						}
						else{
							HX_STACK_LINE(1967)
							cp = ::com::stencyl::models::actor::CollisionPoint_obj::__new(::com::stencyl::models::Actor_obj::manifold->getPoint()->x,::com::stencyl::models::Actor_obj::manifold->getPoint()->y,::com::stencyl::models::Actor_obj::manifold->m_normal->x,::com::stencyl::models::Actor_obj::manifold->m_normal->y);
						}
					}
					HX_STACK_LINE(1978)
					{
						HX_STACK_LINE(1978)
						::de::polygonal::ds::IntHashTable _this = this->collisions;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1978)
						_this->_key0 = (int)-2147483647;
						HX_STACK_LINE(1978)
						if (((_this->_h->_size == _this->_h->_capacity))){
							HX_STACK_LINE(1978)
							int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
							HX_STACK_LINE(1978)
							int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
							struct _Function_5_1{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1978);
									{
										HX_STACK_LINE(1978)
										Array< int > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1978)
										a = Array_obj< int >::__new();
										HX_STACK_LINE(1978)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1978)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1978)
							Array< int > tmp = _Function_5_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(1978)
							{
								HX_STACK_LINE(1978)
								Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(1978)
								if (((max == (int)-1))){
									HX_STACK_LINE(1978)
									max = src->length;
								}
								HX_STACK_LINE(1978)
								int j = (int)0;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(1978)
								{
									HX_STACK_LINE(1978)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1978)
									while(((_g < max))){
										HX_STACK_LINE(1978)
										int i = (_g)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1978)
										tmp[(j)++] = src->__get(i);
									}
								}
								HX_STACK_LINE(1978)
								tmp;
							}
							HX_STACK_LINE(1978)
							_this->_next = tmp;
							struct _Function_5_2{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1978);
									{
										HX_STACK_LINE(1978)
										Array< int > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1978)
										a = Array_obj< int >::__new();
										HX_STACK_LINE(1978)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1978)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1978)
							Array< int > tmp1 = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(1978)
							{
								HX_STACK_LINE(1978)
								Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(1978)
								if (((max == (int)-1))){
									HX_STACK_LINE(1978)
									max = src->length;
								}
								HX_STACK_LINE(1978)
								int j = (int)0;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(1978)
								{
									HX_STACK_LINE(1978)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1978)
									while(((_g < max))){
										HX_STACK_LINE(1978)
										int i = (_g)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1978)
										tmp1[(j)++] = src->__get(i);
									}
								}
								HX_STACK_LINE(1978)
								tmp1;
							}
							HX_STACK_LINE(1978)
							_this->_keys = tmp1;
							HX_STACK_LINE(1978)
							{
								HX_STACK_LINE(1978)
								int _g = oldSize;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1978)
								while(((_g < newSize))){
									HX_STACK_LINE(1978)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1978)
									_this->_keys[i] = (int)-2147483647;
								}
							}
							HX_STACK_LINE(1978)
							{
								HX_STACK_LINE(1978)
								int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
								int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1978)
								while(((_g1 < _g))){
									HX_STACK_LINE(1978)
									int i = (_g1)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1978)
									_this->_next[i] = (i + (int)1);
								}
							}
							HX_STACK_LINE(1978)
							_this->_next[(newSize - (int)1)] = (int)-1;
							HX_STACK_LINE(1978)
							_this->_free = oldSize;
							struct _Function_5_3{
								inline static Array< ::Dynamic > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1978);
									{
										HX_STACK_LINE(1978)
										Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1978)
										a = Array_obj< ::Dynamic >::__new();
										HX_STACK_LINE(1978)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1978)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1978)
							Array< ::Dynamic > tmp2 = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(1978)
							{
								HX_STACK_LINE(1978)
								Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(1978)
								if (((max == (int)-1))){
									HX_STACK_LINE(1978)
									max = src->length;
								}
								HX_STACK_LINE(1978)
								int j = (int)0;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(1978)
								{
									HX_STACK_LINE(1978)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1978)
									while(((_g < max))){
										HX_STACK_LINE(1978)
										int i = (_g)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1978)
										tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::actor::Collision >();
									}
								}
								HX_STACK_LINE(1978)
								tmp2;
							}
							HX_STACK_LINE(1978)
							_this->_vals = tmp2;
							HX_STACK_LINE(1978)
							(_this->_sizeLevel)++;
						}
						HX_STACK_LINE(1978)
						{
							HX_STACK_LINE(1978)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1978)
							if (((_this1->_size == _this1->_capacity))){
								HX_STACK_LINE(1978)
								if ((_this1->_isResizable)){
									HX_STACK_LINE(1978)
									_this1->_expand();
								}
							}
							HX_STACK_LINE(1978)
							int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1978)
							_this1->_free = _this1->_next->__get(_this1->_free);
							HX_STACK_LINE(1978)
							_this1->_data[i] = key;
							HX_STACK_LINE(1978)
							_this1->_data[(i + (int)1)] = _this->_free;
							HX_STACK_LINE(1978)
							int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(1978)
							int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(1978)
							if (((j == (int)-1))){
								HX_STACK_LINE(1978)
								_this1->_hash[b] = i;
								HX_STACK_LINE(1978)
								(_this1->_size)++;
								HX_STACK_LINE(1978)
								true;
							}
							else{
								HX_STACK_LINE(1978)
								bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
								HX_STACK_LINE(1978)
								int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1978)
								while(((t != (int)-1))){
									HX_STACK_LINE(1978)
									if (((_this1->_data->__get(t) == key))){
										HX_STACK_LINE(1978)
										first = false;
									}
									HX_STACK_LINE(1978)
									j = t;
									HX_STACK_LINE(1978)
									t = _this1->_data->__get((t + (int)2));
								}
								HX_STACK_LINE(1978)
								_this1->_data[(j + (int)2)] = i;
								HX_STACK_LINE(1978)
								(_this1->_size)++;
								HX_STACK_LINE(1978)
								first;
							}
						}
						HX_STACK_LINE(1978)
						hx::IndexRef((_this->_vals).mPtr,_this->_free) = d;
						HX_STACK_LINE(1978)
						_this->_keys[_this->_free] = key;
						HX_STACK_LINE(1978)
						_this->_free = _this->_next->__get(_this->_free);
						HX_STACK_LINE(1978)
						true;
					}
					HX_STACK_LINE(1979)
					(this->collisionsCount)++;
					HX_STACK_LINE(1981)
					if (((bool((cp->x != (int)-9999)) && bool((cp->y != (int)-9999))))){
						HX_STACK_LINE(1983)
						d->points->push(cp);
						HX_STACK_LINE(1985)
						::com::stencyl::models::Actor thisActor = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(thisActor,"thisActor");
						HX_STACK_LINE(1986)
						::box2D::dynamics::B2Body body = thisActor->getBody();		HX_STACK_VAR(body,"body");
						HX_STACK_LINE(1987)
						::box2D::dynamics::B2Body otherBody = otherActor->getBody();		HX_STACK_VAR(otherBody,"otherBody");
						HX_STACK_LINE(1988)
						::box2D::dynamics::B2Body body1 = p->getFixtureA()->getBody();		HX_STACK_VAR(body1,"body1");
						HX_STACK_LINE(1989)
						::box2D::dynamics::B2Body body2 = p->getFixtureB()->getBody();		HX_STACK_VAR(body2,"body2");
						HX_STACK_LINE(1991)
						d->thisFromBottom = false;
						HX_STACK_LINE(1992)
						d->thisFromTop = false;
						HX_STACK_LINE(1993)
						d->thisFromLeft = false;
						HX_STACK_LINE(1994)
						d->thisFromRight = false;
						HX_STACK_LINE(1997)
						if (((body1 == body))){
							HX_STACK_LINE(1998)
							d->thisFromBottom = (cp->normalY > (int)0);
						}
						else{
							HX_STACK_LINE(2002)
							if (((body2 == body))){
								HX_STACK_LINE(2003)
								d->thisFromBottom = (cp->normalY < (int)0);
							}
						}
						HX_STACK_LINE(2008)
						if (((body1 == body))){
							HX_STACK_LINE(2009)
							d->thisFromTop = (cp->normalY < (int)0);
						}
						else{
							HX_STACK_LINE(2013)
							if (((body2 == body))){
								HX_STACK_LINE(2014)
								d->thisFromTop = (cp->normalY > (int)0);
							}
						}
						HX_STACK_LINE(2019)
						if (((body1 == body))){
							HX_STACK_LINE(2020)
							d->thisFromLeft = (cp->normalX < (int)0);
						}
						else{
							HX_STACK_LINE(2024)
							if (((body2 == body))){
								HX_STACK_LINE(2025)
								d->thisFromLeft = (cp->normalX > (int)0);
							}
						}
						HX_STACK_LINE(2030)
						if (((body1 == body))){
							HX_STACK_LINE(2031)
							d->thisFromRight = (cp->normalX > (int)0);
						}
						else{
							HX_STACK_LINE(2035)
							if (((body2 == body))){
								HX_STACK_LINE(2036)
								d->thisFromRight = (cp->normalX < (int)0);
							}
						}
						HX_STACK_LINE(2042)
						d->otherFromBottom = false;
						HX_STACK_LINE(2043)
						d->otherFromTop = false;
						HX_STACK_LINE(2044)
						d->otherFromLeft = false;
						HX_STACK_LINE(2045)
						d->otherFromRight = false;
						HX_STACK_LINE(2048)
						if (((body1 == otherBody))){
							HX_STACK_LINE(2049)
							d->otherFromBottom = (cp->normalY > (int)0);
						}
						else{
							HX_STACK_LINE(2053)
							if (((body2 == otherBody))){
								HX_STACK_LINE(2054)
								d->otherFromBottom = (cp->normalY < (int)0);
							}
						}
						HX_STACK_LINE(2059)
						if (((body1 == otherBody))){
							HX_STACK_LINE(2060)
							d->otherFromTop = (cp->normalY < (int)0);
						}
						else{
							HX_STACK_LINE(2064)
							if (((body2 == otherBody))){
								HX_STACK_LINE(2065)
								d->otherFromTop = (cp->normalY > (int)0);
							}
						}
						HX_STACK_LINE(2070)
						if (((body1 == otherBody))){
							HX_STACK_LINE(2071)
							d->otherFromLeft = (cp->normalX < (int)0);
						}
						else{
							HX_STACK_LINE(2075)
							if (((body2 == otherBody))){
								HX_STACK_LINE(2076)
								d->otherFromLeft = (cp->normalX > (int)0);
							}
						}
						HX_STACK_LINE(2081)
						if (((body1 == otherBody))){
							HX_STACK_LINE(2082)
							d->otherFromRight = (cp->normalX > (int)0);
						}
						else{
							HX_STACK_LINE(2086)
							if (((body2 == otherBody))){
								HX_STACK_LINE(2087)
								d->otherFromRight = (cp->normalX < (int)0);
							}
						}
					}
					HX_STACK_LINE(2094)
					d->thisCollidedWithActor = false;
					HX_STACK_LINE(2095)
					d->thisCollidedWithTerrain = false;
					HX_STACK_LINE(2096)
					d->thisCollidedWithTile = false;
					HX_STACK_LINE(2097)
					d->thisCollidedWithSensor = false;
					HX_STACK_LINE(2099)
					d->otherCollidedWithActor = false;
					HX_STACK_LINE(2100)
					d->otherCollidedWithTerrain = false;
					HX_STACK_LINE(2101)
					d->otherCollidedWithTile = false;
					HX_STACK_LINE(2102)
					d->otherCollidedWithSensor = false;
					HX_STACK_LINE(2106)
					if (((otherActor != null()))){
						HX_STACK_LINE(2108)
						d->thisCollidedWithActor = (bool((bool((otherActor->groupID != (int)1)) && bool((otherActor->groupID != (int)-2)))) && bool(!(otherActor->isTerrainRegion)));
						HX_STACK_LINE(2109)
						d->thisCollidedWithTerrain = otherActor->isTerrainRegion;
						HX_STACK_LINE(2110)
						d->thisCollidedWithTile = (otherActor->groupID == (int)1);
					}
					HX_STACK_LINE(2113)
					d->otherCollidedWithActor = (bool((bool((this->groupID != (int)1)) && bool((this->groupID != (int)-2)))) && bool(!(this->isTerrainRegion)));
					HX_STACK_LINE(2114)
					d->otherCollidedWithTerrain = this->isTerrainRegion;
					HX_STACK_LINE(2115)
					d->otherCollidedWithTile = (this->groupID == (int)1);
					HX_STACK_LINE(2117)
					d->thisCollidedWithSensor = otherShape->isSensor();
					HX_STACK_LINE(2118)
					d->otherCollidedWithSensor = thisShape->isSensor();
				}
;
			}
		}
		HX_STACK_LINE(2123)
		if (((this->collisionsCount > (int)0))){
			HX_STACK_LINE(2124)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::actor::Collision > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::actor::Collision >(this->collisions->iterator());  __it->hasNext(); ){
				::com::stencyl::models::actor::Collision collision = __it->next();
				{
					HX_STACK_LINE(2129)
					if (((bool((bool((bool((bool((collision == null())) || bool((collision->thisActor == null())))) || bool((collision->otherActor == null())))) || bool(!(collision->thisActor->handlesCollisions)))) || bool(!(collision->otherActor->handlesCollisions))))){
						HX_STACK_LINE(2134)
						continue;
					}
					HX_STACK_LINE(2138)
					::com::stencyl::models::Actor_obj::lastCollided = collision->otherActor;
					HX_STACK_LINE(2139)
					{
						HX_STACK_LINE(2139)
						Dynamic listeners = this->collisionListeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(2139)
						int r = (int)0;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(2139)
						while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
							HX_STACK_LINE(2139)
							try{
								HX_STACK_LINE(2139)
								Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(2139)
								f(collision,listeners).Cast< Void >();
								HX_STACK_LINE(2139)
								if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
									HX_STACK_LINE(2139)
									(r)--;
								}
							}
							catch(Dynamic __e){
								if (__e.IsClass< ::String >() ){
									HX_STACK_BEGIN_CATCH
									::String e = __e;{
										HX_STACK_LINE(2139)
										::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
									}
								}
								else throw(__e);
							}
							HX_STACK_LINE(2139)
							(r)++;
						}
					}
					HX_STACK_LINE(2141)
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
		HX_STACK_PUSH("Actor::checkScreenState","com/stencyl/models/Actor.hx",1851);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1852)
		bool onScreen = this->isOnScreen();		HX_STACK_VAR(onScreen,"onScreen");
		HX_STACK_LINE(1853)
		bool inScene = (bool(onScreen) || bool(this->isInScene()));		HX_STACK_VAR(inScene,"inScene");
		HX_STACK_LINE(1855)
		bool enteredScreen = (bool(!(this->lastScreenState)) && bool(onScreen));		HX_STACK_VAR(enteredScreen,"enteredScreen");
		HX_STACK_LINE(1856)
		bool enteredScene = (bool(!(this->lastSceneState)) && bool(inScene));		HX_STACK_VAR(enteredScene,"enteredScene");
		HX_STACK_LINE(1857)
		bool exitedScreen = (bool(this->lastScreenState) && bool(!(onScreen)));		HX_STACK_VAR(exitedScreen,"exitedScreen");
		HX_STACK_LINE(1858)
		bool exitedScene = (bool(this->lastSceneState) && bool(!(inScene)));		HX_STACK_VAR(exitedScene,"exitedScene");
		HX_STACK_LINE(1860)
		{
			HX_STACK_LINE(1860)
			Dynamic listeners = this->positionListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1860)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1860)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1860)
				try{
					HX_STACK_LINE(1860)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1860)
					f(enteredScreen,exitedScreen,enteredScene,exitedScene,listeners).Cast< Void >();
					HX_STACK_LINE(1860)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1860)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1860)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3937,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners5")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1860)
				(r)++;
			}
		}
		HX_STACK_LINE(1862)
		Dynamic typeListeners = this->engine->typeGroupPositionListeners->get((this->groupID + ::com::stencyl::models::Actor_obj::GROUP_OFFSET));		HX_STACK_VAR(typeListeners,"typeListeners");
		HX_STACK_LINE(1863)
		Dynamic groupListeners = this->engine->typeGroupPositionListeners->get(this->typeID);		HX_STACK_VAR(groupListeners,"groupListeners");
		HX_STACK_LINE(1865)
		if (((typeListeners != null()))){
			HX_STACK_LINE(1867)
			Dynamic listeners = typeListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1867)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1867)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1867)
				try{
					HX_STACK_LINE(1867)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1867)
					f(hx::ObjectPtr<OBJ_>(this),enteredScreen,exitedScreen,enteredScene,exitedScene,listeners).Cast< Void >();
					HX_STACK_LINE(1867)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1867)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1867)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3964,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners6")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1867)
				(r)++;
			}
		}
		HX_STACK_LINE(1870)
		if (((groupListeners != null()))){
			HX_STACK_LINE(1872)
			Dynamic listeners = groupListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1872)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1872)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1872)
				try{
					HX_STACK_LINE(1872)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1872)
					f(hx::ObjectPtr<OBJ_>(this),enteredScreen,exitedScreen,enteredScene,exitedScene,listeners).Cast< Void >();
					HX_STACK_LINE(1872)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1872)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1872)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3964,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners6")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1872)
				(r)++;
			}
		}
		HX_STACK_LINE(1875)
		this->lastScreenState = onScreen;
		HX_STACK_LINE(1876)
		this->lastSceneState = inScene;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,checkScreenState,(void))

Void Actor_obj::scaleBody( Float width,Float height){
{
		HX_STACK_PUSH("Actor::scaleBody","com/stencyl/models/Actor.hx",1781);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(1782)
		Array< ::Dynamic > fixtureList = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(fixtureList,"fixtureList");
		HX_STACK_LINE(1783)
		::box2D::dynamics::B2Fixture fixture = this->body->getFixtureList();		HX_STACK_VAR(fixture,"fixture");
		HX_STACK_LINE(1785)
		while(((fixture != null()))){
			HX_STACK_LINE(1787)
			fixtureList->push(fixture);
			HX_STACK_LINE(1788)
			fixture = fixture->getNext();
		}
		HX_STACK_LINE(1791)
		{
			HX_STACK_LINE(1791)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1791)
			while(((_g < fixtureList->length))){
				HX_STACK_LINE(1791)
				::box2D::dynamics::B2Fixture f = fixtureList->__get(_g).StaticCast< ::box2D::dynamics::B2Fixture >();		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(1791)
				++(_g);
				HX_STACK_LINE(1793)
				::box2D::collision::shapes::B2Shape poly = f->getShape();		HX_STACK_VAR(poly,"poly");
				HX_STACK_LINE(1794)
				::box2D::common::math::B2Vec2 center = this->body->getLocalCenter();		HX_STACK_VAR(center,"center");
				HX_STACK_LINE(1795)
				if ((::Std_obj::is(poly,hx::ClassOf< ::box2D::collision::shapes::B2CircleShape >()))){
					HX_STACK_LINE(1797)
					Float factorX = ((Float((int)1) / Float(this->bodyScale->x)) * width);		HX_STACK_VAR(factorX,"factorX");
					HX_STACK_LINE(1798)
					Float factorY = ((Float((int)1) / Float(this->bodyScale->y)) * height);		HX_STACK_VAR(factorY,"factorY");
					HX_STACK_LINE(1800)
					::box2D::common::math::B2Vec2 p = (hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(poly))->m_p;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1801)
					p->subtract(center);
					HX_STACK_LINE(1802)
					p->x = (p->x * factorX);
					HX_STACK_LINE(1803)
					p->y = (p->y * factorY);
					HX_STACK_LINE(1805)
					(hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(poly))->m_p = center->copy(null());
					HX_STACK_LINE(1806)
					(hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(poly))->m_p->add(p);
					HX_STACK_LINE(1807)
					poly->m_radius = (poly->m_radius * ::Math_obj::abs(factorX));
				}
				else{
					HX_STACK_LINE(1810)
					if ((::Std_obj::is(poly,hx::ClassOf< ::box2D::collision::shapes::B2PolygonShape >()))){
						HX_STACK_LINE(1812)
						Array< ::Dynamic > verts = (hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(poly))->m_vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(1813)
						Array< ::Dynamic > newVerts = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(newVerts,"newVerts");
						HX_STACK_LINE(1815)
						{
							HX_STACK_LINE(1815)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1815)
							while(((_g1 < verts->length))){
								HX_STACK_LINE(1815)
								::box2D::common::math::B2Vec2 v = verts->__get(_g1).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(1815)
								++(_g1);
								HX_STACK_LINE(1817)
								v->subtract(center);
								HX_STACK_LINE(1818)
								v->x = ((v->x * ((Float((int)1) / Float(::Math_obj::abs(this->bodyScale->x))))) * ::Math_obj::abs(width));
								HX_STACK_LINE(1819)
								v->y = ((v->y * ((Float((int)1) / Float(::Math_obj::abs(this->bodyScale->y))))) * ::Math_obj::abs(height));
								HX_STACK_LINE(1821)
								if (((bool((bool((this->bodyScale->x > (int)0)) && bool((width < (int)0)))) || bool((bool((this->bodyScale->x < (int)0)) && bool((width > (int)0))))))){
									HX_STACK_LINE(1822)
									v->x = -(v->x);
								}
								HX_STACK_LINE(1826)
								if (((bool((bool((this->bodyScale->y > (int)0)) && bool((height < (int)0)))) || bool((bool((this->bodyScale->y < (int)0)) && bool((height > (int)0))))))){
									HX_STACK_LINE(1827)
									v->y = -(v->y);
								}
								HX_STACK_LINE(1831)
								::box2D::common::math::B2Vec2 newVert = center->copy(null());		HX_STACK_VAR(newVert,"newVert");
								HX_STACK_LINE(1832)
								newVert->add(v);
								HX_STACK_LINE(1834)
								newVerts->push(newVert);
							}
						}
						HX_STACK_LINE(1837)
						if (((bool((bool((bool((bool((this->bodyScale->x > (int)0)) && bool((width < (int)0)))) || bool((bool((this->bodyScale->x < (int)0)) && bool((width > (int)0)))))) || bool((bool((this->bodyScale->y > (int)0)) && bool((height < (int)0)))))) || bool((bool((this->bodyScale->y < (int)0)) && bool((height > (int)0))))))){
							HX_STACK_LINE(1838)
							newVerts->reverse();
						}
						HX_STACK_LINE(1842)
						(hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(poly))->setAsArray(newVerts,newVerts->length);
					}
				}
			}
		}
		HX_STACK_LINE(1846)
		this->bodyScale->x = width;
		HX_STACK_LINE(1847)
		this->bodyScale->y = height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,scaleBody,(void))

Void Actor_obj::updateTweenProperties( ){
{
		HX_STACK_PUSH("Actor::updateTweenProperties","com/stencyl/models/Actor.hx",1710);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1713)
		bool a = (this->activePositionTweens > (int)0);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1714)
		bool b = (this->activeAngleTweens > (int)0);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1716)
		if (((bool((bool((bool((bool(this->autoScale) && bool(!(this->isLightweight)))) && bool((this->body != null())))) && bool((this->bodyDef->type != ::box2D::dynamics::B2Body_obj::b2_staticBody)))) && bool(((bool((this->bodyScale->x != this->realScaleX)) || bool((this->bodyScale->y != this->realScaleY)))))))){
			HX_STACK_LINE(1717)
			if (((bool((this->realScaleX != (int)0)) && bool((this->realScaleY != (int)0))))){
				HX_STACK_LINE(1719)
				this->scaleBody(this->realScaleX,this->realScaleY);
			}
		}
		HX_STACK_LINE(1724)
		if (((bool(a) && bool(b)))){
			HX_STACK_LINE(1726)
			if ((!(this->isLightweight))){
				HX_STACK_LINE(1728)
				this->realX = this->tweenLoc->x;
				HX_STACK_LINE(1729)
				this->realY = this->tweenLoc->y;
				HX_STACK_LINE(1730)
				this->realAngle = this->tweenAngle->angle;
				HX_STACK_LINE(1732)
				this->dummy->x = ::com::stencyl::Engine_obj::toPhysicalUnits(((this->realX + ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) + this->currOffset->x));
				HX_STACK_LINE(1733)
				this->dummy->y = ::com::stencyl::Engine_obj::toPhysicalUnits(((this->realY + ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) + this->currOffset->y));
				HX_STACK_LINE(1735)
				this->body->setPositionAndAngle(this->dummy,((Float(3.14159) / Float((int)180)) * this->realAngle));
			}
			else{
				HX_STACK_LINE(1744)
				this->moveActorBy((this->tweenLoc->x - this->getX(false)),(this->tweenLoc->y - this->getY(false)),this->groupsToCollideWith,null());
				HX_STACK_LINE(1745)
				this->setAngle(this->tweenAngle->angle,false);
			}
			HX_STACK_LINE(1748)
			this->updateMatrix = true;
		}
		else{
			HX_STACK_LINE(1753)
			if ((a)){
				HX_STACK_LINE(1754)
				if ((!(this->isLightweight))){
					HX_STACK_LINE(1757)
					this->setX(this->tweenLoc->x,null(),null());
					HX_STACK_LINE(1758)
					this->setY(this->tweenLoc->y,null(),null());
				}
				else{
					HX_STACK_LINE(1763)
					this->moveActorBy((this->tweenLoc->x - this->getX(false)),(this->tweenLoc->y - this->getY(false)),this->groupsToCollideWith,null());
					HX_STACK_LINE(1764)
					this->updateMatrix = true;
				}
			}
			HX_STACK_LINE(1768)
			if ((b)){
				HX_STACK_LINE(1769)
				this->setAngle(this->tweenAngle->angle,false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,updateTweenProperties,(void))

Void Actor_obj::updateDrawingMatrix( ){
{
		HX_STACK_PUSH("Actor::updateDrawingMatrix","com/stencyl/models/Actor.hx",1546);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1547)
		if ((this->paused)){
			HX_STACK_LINE(1548)
			return null();
		}
		HX_STACK_LINE(1552)
		if ((this->smoothMove)){
			HX_STACK_LINE(1554)
			if ((!(this->firstMove))){
				HX_STACK_LINE(1556)
				this->drawX = this->realX;
				HX_STACK_LINE(1557)
				this->drawY = this->realY;
				HX_STACK_LINE(1558)
				this->firstMove = true;
			}
			HX_STACK_LINE(1561)
			this->moveXDistance = (this->realX - this->drawX);
			HX_STACK_LINE(1562)
			this->moveYDistance = (this->realY - this->drawY);
			HX_STACK_LINE(1565)
			if (((this->moveXDistance > this->minMove))){
				HX_STACK_LINE(1566)
				if ((((this->moveXDistance * ::com::stencyl::models::Actor_obj::moveMultiplier) > this->minMove))){
					HX_STACK_LINE(1568)
					if (((this->moveXDistance > this->maxMove))){
						HX_STACK_LINE(1570)
						this->drawX = this->realX;
					}
					else{
						HX_STACK_LINE(1575)
						hx::AddEq(this->drawX,(this->moveXDistance * ::com::stencyl::models::Actor_obj::moveMultiplier));
					}
				}
				else{
					HX_STACK_LINE(1581)
					hx::AddEq(this->drawX,this->minMove);
				}
			}
			else{
				HX_STACK_LINE(1586)
				if (((this->moveXDistance < (this->minMove * (int)-1)))){
					HX_STACK_LINE(1587)
					if ((((this->moveXDistance * ::com::stencyl::models::Actor_obj::moveMultiplier) < (this->minMove * (int)-1)))){
						HX_STACK_LINE(1589)
						if (((this->moveXDistance < (this->maxMove * (int)-1)))){
							HX_STACK_LINE(1591)
							this->drawX = this->realX;
						}
						else{
							HX_STACK_LINE(1596)
							hx::AddEq(this->drawX,(this->moveXDistance * ::com::stencyl::models::Actor_obj::moveMultiplier));
						}
					}
					else{
						HX_STACK_LINE(1602)
						hx::SubEq(this->drawX,this->minMove);
					}
				}
				else{
					HX_STACK_LINE(1608)
					this->drawX = this->realX;
				}
			}
			HX_STACK_LINE(1613)
			if (((this->moveYDistance > this->minMove))){
				HX_STACK_LINE(1614)
				if ((((this->moveYDistance * ::com::stencyl::models::Actor_obj::moveMultiplier) > this->minMove))){
					HX_STACK_LINE(1616)
					if (((this->moveYDistance > this->maxMove))){
						HX_STACK_LINE(1618)
						this->drawY = this->realY;
					}
					else{
						HX_STACK_LINE(1623)
						hx::AddEq(this->drawY,(this->moveYDistance * ::com::stencyl::models::Actor_obj::moveMultiplier));
					}
				}
				else{
					HX_STACK_LINE(1629)
					hx::AddEq(this->drawY,this->minMove);
				}
			}
			else{
				HX_STACK_LINE(1634)
				if (((this->moveYDistance < (this->minMove * (int)-1)))){
					HX_STACK_LINE(1635)
					if ((((this->moveYDistance * ::com::stencyl::models::Actor_obj::moveMultiplier) < (this->minMove * (int)-1)))){
						HX_STACK_LINE(1637)
						if (((this->moveYDistance < (this->maxMove * (int)-1)))){
							HX_STACK_LINE(1639)
							this->drawY = this->realY;
						}
						else{
							HX_STACK_LINE(1644)
							hx::AddEq(this->drawY,(this->moveYDistance * ::com::stencyl::models::Actor_obj::moveMultiplier));
						}
					}
					else{
						HX_STACK_LINE(1650)
						hx::SubEq(this->drawY,this->minMove);
					}
				}
				else{
					HX_STACK_LINE(1656)
					this->drawY = this->realY;
				}
			}
		}
		else{
			HX_STACK_LINE(1663)
			if ((this->isLightweight)){
				HX_STACK_LINE(1666)
				this->drawX = this->realX;
				HX_STACK_LINE(1667)
				this->drawY = this->realY;
			}
			else{
				HX_STACK_LINE(1671)
				::box2D::common::math::B2Vec2 p = this->body->getPosition();		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1673)
				this->drawX = (p->x * ::com::stencyl::Engine_obj::physicsScale);
				HX_STACK_LINE(1674)
				this->drawY = (p->y * ::com::stencyl::Engine_obj::physicsScale);
			}
		}
		HX_STACK_LINE(1678)
		Float trueScaleX = (::com::stencyl::Engine_obj::SCALE * this->realScaleX);		HX_STACK_VAR(trueScaleX,"trueScaleX");
		HX_STACK_LINE(1679)
		Float trueScaleY = (::com::stencyl::Engine_obj::SCALE * this->realScaleY);		HX_STACK_VAR(trueScaleY,"trueScaleY");
		HX_STACK_LINE(1681)
		this->transformPoint->x = (this->currOrigin->x - (Float((this->cacheWidth * ::com::stencyl::Engine_obj::SCALE)) / Float((int)2)));
		HX_STACK_LINE(1682)
		this->transformPoint->y = (this->currOrigin->y - (Float((this->cacheHeight * ::com::stencyl::Engine_obj::SCALE)) / Float((int)2)));
		HX_STACK_LINE(1684)
		this->transformMatrix->identity();
		HX_STACK_LINE(1685)
		this->transformMatrix->translate((-(this->transformPoint->x) * ::com::stencyl::Engine_obj::SCALE),(-(this->transformPoint->y) * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(1686)
		this->transformMatrix->scale(this->realScaleX,this->realScaleY);
		HX_STACK_LINE(1688)
		if (((this->realAngle != (int)0))){
			HX_STACK_LINE(1689)
			this->transformMatrix->rotate((this->realAngle * ((Float(3.14159) / Float((int)180)))));
		}
		HX_STACK_LINE(1693)
		this->transformMatrix->translate((this->drawX * ::com::stencyl::Engine_obj::SCALE),(this->drawY * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(1696)
		if (((this->transformObj == null()))){
			HX_STACK_LINE(1697)
			this->transformObj = this->get_transform();
		}
		HX_STACK_LINE(1701)
		this->transformObj->set_matrix(this->transformMatrix);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,updateDrawingMatrix,(void))

Void Actor_obj::internalUpdate( Float elapsedTime,bool doAll){
{
		HX_STACK_PUSH("Actor::internalUpdate","com/stencyl/models/Actor.hx",1472);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_ARG(doAll,"doAll");
		HX_STACK_LINE(1473)
		if ((this->paused)){
			HX_STACK_LINE(1474)
			return null();
		}
		HX_STACK_LINE(1478)
		if ((this->isLightweight)){
			HX_STACK_LINE(1480)
			if (((bool(!(this->ignoreGravity)) && bool(!(this->isHUD))))){
				HX_STACK_LINE(1483)
				hx::AddEq(this->xSpeed,((elapsedTime * this->engine->gravityX) * 0.001));
				HX_STACK_LINE(1484)
				hx::AddEq(this->ySpeed,((elapsedTime * this->engine->gravityY) * 0.001));
			}
			HX_STACK_LINE(1487)
			if (((bool((this->xSpeed != (int)0)) || bool((this->ySpeed != (int)0))))){
				HX_STACK_LINE(1489)
				this->resetReal(this->realX,this->realY);
				HX_STACK_LINE(1491)
				this->moveActorBy(((elapsedTime * this->xSpeed) * 0.01),((elapsedTime * this->ySpeed) * 0.01),this->groupsToCollideWith,null());
			}
			HX_STACK_LINE(1494)
			if (((this->rSpeed != (int)0))){
				HX_STACK_LINE(1495)
				hx::AddEq(this->realAngle,((elapsedTime * this->rSpeed) * 0.001));
			}
			HX_STACK_LINE(1499)
			if ((this->fixedRotation)){
				HX_STACK_LINE(1501)
				this->realAngle = (int)0;
				HX_STACK_LINE(1502)
				this->rSpeed = (int)0;
			}
		}
		else{
			HX_STACK_LINE(1508)
			::box2D::common::math::B2Vec2 p = this->body->getPosition();		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(1516)
			this->realX = (p->x * ::com::stencyl::Engine_obj::physicsScale);
			HX_STACK_LINE(1517)
			this->realY = (p->y * ::com::stencyl::Engine_obj::physicsScale);
			HX_STACK_LINE(1520)
			this->resetReal(this->realX,this->realY);
			HX_STACK_LINE(1522)
			this->realAngle = (this->body->getAngle() * ((Float((int)180) / Float(3.14159))));
		}
		HX_STACK_LINE(1525)
		if (((bool((bool((bool((bool((this->lastX != this->realX)) || bool((this->lastY != this->realY)))) || bool((this->lastAngle != this->realAngle)))) || bool((this->lastScale->x != this->realScaleX)))) || bool((this->lastScale->y != this->realScaleY))))){
			HX_STACK_LINE(1526)
			this->updateMatrix = true;
		}
		HX_STACK_LINE(1530)
		this->lastX = this->realX;
		HX_STACK_LINE(1531)
		this->lastY = this->realY;
		HX_STACK_LINE(1532)
		this->lastAngle = this->realAngle;
		HX_STACK_LINE(1533)
		this->lastScale->x = this->realScaleX;
		HX_STACK_LINE(1534)
		this->lastScale->y = this->realScaleY;
		HX_STACK_LINE(1536)
		if (((bool(doAll) && bool((this->currAnimationAsAnim != null()))))){
			HX_STACK_LINE(1537)
			this->currAnimationAsAnim->__Field(HX_CSTRING("update"),true)(elapsedTime);
		}
		HX_STACK_LINE(1542)
		this->updateTweenProperties();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,internalUpdate,(void))

Void Actor_obj::innerUpdate( Float elapsedTime,bool hudCheck){
{
		HX_STACK_PUSH("Actor::innerUpdate","com/stencyl/models/Actor.hx",1372);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_ARG(hudCheck,"hudCheck");
		HX_STACK_LINE(1374)
		if (((bool((bool((bool((bool((bool(this->paused) || bool(this->isCamera))) || bool(this->dying))) || bool(this->dead))) || bool(this->destroyed))) || bool((bool(hudCheck) && bool(((bool(this->isHUD) || bool(this->alwaysSimulate))))))))){
			HX_STACK_LINE(1375)
			return null();
		}
		HX_STACK_LINE(1379)
		if (((this->mouseOverListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(1382)
			bool mouseOver = this->isMouseOver();		HX_STACK_VAR(mouseOver,"mouseOver");
			HX_STACK_LINE(1384)
			if (((bool((this->mouseState <= (int)0)) && bool(mouseOver)))){
				HX_STACK_LINE(1385)
				this->mouseState = (int)1;
			}
			HX_STACK_LINE(1396)
			if ((mouseOver)){
				HX_STACK_LINE(1400)
				this->mouseState = (int)2;
				HX_STACK_LINE(1402)
				if ((::com::stencyl::Input_obj::mousePressed)){
					HX_STACK_LINE(1403)
					this->mouseState = (int)3;
				}
				else{
					HX_STACK_LINE(1408)
					if ((::com::stencyl::Input_obj::mouseDown)){
						HX_STACK_LINE(1409)
						this->mouseState = (int)4;
					}
				}
				HX_STACK_LINE(1414)
				if ((::com::stencyl::Input_obj::mouseReleased)){
					HX_STACK_LINE(1415)
					this->mouseState = (int)5;
				}
			}
			else{
				HX_STACK_LINE(1421)
				if (((bool((this->mouseState > (int)0)) && bool(!(mouseOver))))){
					HX_STACK_LINE(1422)
					this->mouseState = (int)-1;
				}
				else{
					HX_STACK_LINE(1427)
					if (((bool((this->mouseState == (int)-1)) && bool(!(mouseOver))))){
						HX_STACK_LINE(1428)
						this->mouseState = (int)0;
					}
				}
			}
			HX_STACK_LINE(1432)
			{
				HX_STACK_LINE(1432)
				Dynamic listeners = this->mouseOverListeners;		HX_STACK_VAR(listeners,"listeners");
				Dynamic value = this->mouseState;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(1432)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(1432)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(1432)
					try{
						HX_STACK_LINE(1432)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(1432)
						f(value,listeners).Cast< Void >();
						HX_STACK_LINE(1432)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(1432)
							(r)--;
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(1432)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(1432)
					(r)++;
				}
			}
		}
		HX_STACK_LINE(1435)
		int checkType = this->type->ID;		HX_STACK_VAR(checkType,"checkType");
		HX_STACK_LINE(1436)
		int groupType = (::com::stencyl::models::Actor_obj::GROUP_OFFSET + this->groupID);		HX_STACK_VAR(groupType,"groupType");
		HX_STACK_LINE(1438)
		::haxe::ds::IntMap ec = this->engine->collisionListeners;		HX_STACK_VAR(ec,"ec");
		HX_STACK_LINE(1439)
		::haxe::ds::IntMap ep = this->engine->typeGroupPositionListeners;		HX_STACK_VAR(ep,"ep");
		HX_STACK_LINE(1441)
		if ((!(this->isLightweight))){
			HX_STACK_LINE(1442)
			if (((bool((bool((this->collisionListenerCount > (int)0)) || bool((ec->get(checkType) != null())))) || bool((ec->get(groupType) != null()))))){
				HX_STACK_LINE(1448)
				::com::stencyl::models::Actor otherActor;		HX_STACK_VAR(otherActor,"otherActor");
				HX_STACK_LINE(1448)
				::box2D::dynamics::B2Fixture otherShape;		HX_STACK_VAR(otherShape,"otherShape");
				HX_STACK_LINE(1448)
				::box2D::dynamics::B2Fixture thisShape;		HX_STACK_VAR(thisShape,"thisShape");
				HX_STACK_LINE(1448)
				if (((this->contactCount > (int)0))){
					HX_STACK_LINE(1448)
					for(::cpp::FastIterator_obj< ::box2D::dynamics::contacts::B2Contact > *__it = ::cpp::CreateFastIterator< ::box2D::dynamics::contacts::B2Contact >(this->contacts->iterator());  __it->hasNext(); ){
						::box2D::dynamics::contacts::B2Contact p = __it->next();
						{
							HX_STACK_LINE(1448)
							int key = p->key;		HX_STACK_VAR(key,"key");
							struct _Function_5_1{
								inline static ::com::stencyl::models::actor::Collision Block( ::com::stencyl::models::Actor_obj *__this,int &key){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1448);
									{
										HX_STACK_LINE(1448)
										::de::polygonal::ds::IntHashTable _this = __this->collisions;		HX_STACK_VAR(_this,"_this");
										struct _Function_6_1{
											inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1448);
												{
													HX_STACK_LINE(1448)
													::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1448)
													int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
													struct _Function_7_1{
														inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
															HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1448);
															{
																HX_STACK_LINE(1448)
																int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(1448)
																i = _this1->_data->__get((i + (int)2));
																HX_STACK_LINE(1448)
																while(((i != (int)-1))){
																	HX_STACK_LINE(1448)
																	if (((_this1->_data->__get(i) == key))){
																		HX_STACK_LINE(1448)
																		v = _this1->_data->__get((i + (int)1));
																		HX_STACK_LINE(1448)
																		break;
																	}
																	HX_STACK_LINE(1448)
																	i = _this1->_data->__get((i + (int)2));
																}
																HX_STACK_LINE(1448)
																return v;
															}
															return null();
														}
													};
													HX_STACK_LINE(1448)
													return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_7_1::Block(i,_this1,key)) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(1448)
										int i = _Function_6_1::Block(_this,key);		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1448)
										return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::actor::Collision(null()) : ::com::stencyl::models::actor::Collision(_this->_vals->__GetItem(i)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(1448)
							if (((_Function_5_1::Block(this,key) != null()))){
								HX_STACK_LINE(1448)
								continue;
							}
							HX_STACK_LINE(1448)
							::com::stencyl::models::Actor a1 = hx::TCast< com::stencyl::models::Actor >::cast(p->getFixtureA()->getUserData());		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(1448)
							::com::stencyl::models::Actor a2 = hx::TCast< com::stencyl::models::Actor >::cast(p->getFixtureB()->getUserData());		HX_STACK_VAR(a2,"a2");
							HX_STACK_LINE(1448)
							if (((a1 == hx::ObjectPtr<OBJ_>(this)))){
								HX_STACK_LINE(1448)
								otherActor = a2;
								HX_STACK_LINE(1448)
								otherShape = p->getFixtureB();
								HX_STACK_LINE(1448)
								thisShape = p->getFixtureA();
							}
							else{
								HX_STACK_LINE(1448)
								otherActor = a1;
								HX_STACK_LINE(1448)
								otherShape = p->getFixtureA();
								HX_STACK_LINE(1448)
								thisShape = p->getFixtureB();
							}
							HX_STACK_LINE(1448)
							::com::stencyl::models::actor::Collision d = ::com::stencyl::models::actor::Collision_obj::__new();		HX_STACK_VAR(d,"d");
							HX_STACK_LINE(1448)
							d->otherActor = otherActor;
							HX_STACK_LINE(1448)
							d->otherShape = otherShape;
							HX_STACK_LINE(1448)
							d->thisActor = hx::ObjectPtr<OBJ_>(this);
							HX_STACK_LINE(1448)
							d->thisShape = thisShape;
							HX_STACK_LINE(1448)
							d->actorA = a1;
							HX_STACK_LINE(1448)
							d->actorB = a2;
							HX_STACK_LINE(1448)
							p->getWorldManifold(::com::stencyl::models::Actor_obj::manifold);
							HX_STACK_LINE(1448)
							::box2D::common::math::B2Vec2 pt = ::com::stencyl::models::Actor_obj::manifold->getPoint();		HX_STACK_VAR(pt,"pt");
							HX_STACK_LINE(1448)
							::com::stencyl::models::actor::CollisionPoint cp;		HX_STACK_VAR(cp,"cp");
							HX_STACK_LINE(1448)
							if (((pt == null()))){
								HX_STACK_LINE(1448)
								cp = ::com::stencyl::models::actor::CollisionPoint_obj::__new((int)-9999,(int)-9999,::com::stencyl::models::Actor_obj::manifold->m_normal->x,::com::stencyl::models::Actor_obj::manifold->m_normal->y);
							}
							else{
								HX_STACK_LINE(1448)
								if ((::Std_obj::is(thisShape->getShape(),hx::ClassOf< ::box2D::collision::shapes::B2CircleShape >()))){
									HX_STACK_LINE(1448)
									cp = ::com::stencyl::models::actor::CollisionPoint_obj::__new((::com::stencyl::models::Actor_obj::manifold->getPoint()->x * (int)2),(::com::stencyl::models::Actor_obj::manifold->getPoint()->y * (int)2),::com::stencyl::models::Actor_obj::manifold->m_normal->x,::com::stencyl::models::Actor_obj::manifold->m_normal->y);
								}
								else{
									HX_STACK_LINE(1448)
									cp = ::com::stencyl::models::actor::CollisionPoint_obj::__new(::com::stencyl::models::Actor_obj::manifold->getPoint()->x,::com::stencyl::models::Actor_obj::manifold->getPoint()->y,::com::stencyl::models::Actor_obj::manifold->m_normal->x,::com::stencyl::models::Actor_obj::manifold->m_normal->y);
								}
							}
							HX_STACK_LINE(1448)
							{
								HX_STACK_LINE(1448)
								::de::polygonal::ds::IntHashTable _this = this->collisions;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1448)
								_this->_key0 = (int)-2147483647;
								HX_STACK_LINE(1448)
								if (((_this->_h->_size == _this->_h->_capacity))){
									HX_STACK_LINE(1448)
									int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
									HX_STACK_LINE(1448)
									int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
									struct _Function_7_1{
										inline static Array< int > Block( int &newSize){
											HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1448);
											{
												HX_STACK_LINE(1448)
												Array< int > a;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(1448)
												a = Array_obj< int >::__new();
												HX_STACK_LINE(1448)
												a[(newSize - (int)1)] = null();
												HX_STACK_LINE(1448)
												return a;
											}
											return null();
										}
									};
									HX_STACK_LINE(1448)
									Array< int > tmp = _Function_7_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
									HX_STACK_LINE(1448)
									{
										HX_STACK_LINE(1448)
										Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
										int max = oldSize;		HX_STACK_VAR(max,"max");
										HX_STACK_LINE(1448)
										if (((max == (int)-1))){
											HX_STACK_LINE(1448)
											max = src->length;
										}
										HX_STACK_LINE(1448)
										int j = (int)0;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(1448)
										{
											HX_STACK_LINE(1448)
											int _g = (int)0;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(1448)
											while(((_g < max))){
												HX_STACK_LINE(1448)
												int i = (_g)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(1448)
												tmp[(j)++] = src->__get(i);
											}
										}
										HX_STACK_LINE(1448)
										tmp;
									}
									HX_STACK_LINE(1448)
									_this->_next = tmp;
									struct _Function_7_2{
										inline static Array< int > Block( int &newSize){
											HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1448);
											{
												HX_STACK_LINE(1448)
												Array< int > a;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(1448)
												a = Array_obj< int >::__new();
												HX_STACK_LINE(1448)
												a[(newSize - (int)1)] = null();
												HX_STACK_LINE(1448)
												return a;
											}
											return null();
										}
									};
									HX_STACK_LINE(1448)
									Array< int > tmp1 = _Function_7_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
									HX_STACK_LINE(1448)
									{
										HX_STACK_LINE(1448)
										Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
										int max = oldSize;		HX_STACK_VAR(max,"max");
										HX_STACK_LINE(1448)
										if (((max == (int)-1))){
											HX_STACK_LINE(1448)
											max = src->length;
										}
										HX_STACK_LINE(1448)
										int j = (int)0;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(1448)
										{
											HX_STACK_LINE(1448)
											int _g = (int)0;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(1448)
											while(((_g < max))){
												HX_STACK_LINE(1448)
												int i = (_g)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(1448)
												tmp1[(j)++] = src->__get(i);
											}
										}
										HX_STACK_LINE(1448)
										tmp1;
									}
									HX_STACK_LINE(1448)
									_this->_keys = tmp1;
									HX_STACK_LINE(1448)
									{
										HX_STACK_LINE(1448)
										int _g = oldSize;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(1448)
										while(((_g < newSize))){
											HX_STACK_LINE(1448)
											int i = (_g)++;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(1448)
											_this->_keys[i] = (int)-2147483647;
										}
									}
									HX_STACK_LINE(1448)
									{
										HX_STACK_LINE(1448)
										int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
										int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(1448)
										while(((_g1 < _g))){
											HX_STACK_LINE(1448)
											int i = (_g1)++;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(1448)
											_this->_next[i] = (i + (int)1);
										}
									}
									HX_STACK_LINE(1448)
									_this->_next[(newSize - (int)1)] = (int)-1;
									HX_STACK_LINE(1448)
									_this->_free = oldSize;
									struct _Function_7_3{
										inline static Array< ::Dynamic > Block( int &newSize){
											HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1448);
											{
												HX_STACK_LINE(1448)
												Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(1448)
												a = Array_obj< ::Dynamic >::__new();
												HX_STACK_LINE(1448)
												a[(newSize - (int)1)] = null();
												HX_STACK_LINE(1448)
												return a;
											}
											return null();
										}
									};
									HX_STACK_LINE(1448)
									Array< ::Dynamic > tmp2 = _Function_7_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
									HX_STACK_LINE(1448)
									{
										HX_STACK_LINE(1448)
										Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
										int max = oldSize;		HX_STACK_VAR(max,"max");
										HX_STACK_LINE(1448)
										if (((max == (int)-1))){
											HX_STACK_LINE(1448)
											max = src->length;
										}
										HX_STACK_LINE(1448)
										int j = (int)0;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(1448)
										{
											HX_STACK_LINE(1448)
											int _g = (int)0;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(1448)
											while(((_g < max))){
												HX_STACK_LINE(1448)
												int i = (_g)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(1448)
												tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::actor::Collision >();
											}
										}
										HX_STACK_LINE(1448)
										tmp2;
									}
									HX_STACK_LINE(1448)
									_this->_vals = tmp2;
									HX_STACK_LINE(1448)
									(_this->_sizeLevel)++;
								}
								HX_STACK_LINE(1448)
								{
									HX_STACK_LINE(1448)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1448)
									if (((_this1->_size == _this1->_capacity))){
										HX_STACK_LINE(1448)
										if ((_this1->_isResizable)){
											HX_STACK_LINE(1448)
											_this1->_expand();
										}
									}
									HX_STACK_LINE(1448)
									int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1448)
									_this1->_free = _this1->_next->__get(_this1->_free);
									HX_STACK_LINE(1448)
									_this1->_data[i] = key;
									HX_STACK_LINE(1448)
									_this1->_data[(i + (int)1)] = _this->_free;
									HX_STACK_LINE(1448)
									int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1448)
									int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(1448)
									if (((j == (int)-1))){
										HX_STACK_LINE(1448)
										_this1->_hash[b] = i;
										HX_STACK_LINE(1448)
										(_this1->_size)++;
										HX_STACK_LINE(1448)
										true;
									}
									else{
										HX_STACK_LINE(1448)
										bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
										HX_STACK_LINE(1448)
										int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(1448)
										while(((t != (int)-1))){
											HX_STACK_LINE(1448)
											if (((_this1->_data->__get(t) == key))){
												HX_STACK_LINE(1448)
												first = false;
											}
											HX_STACK_LINE(1448)
											j = t;
											HX_STACK_LINE(1448)
											t = _this1->_data->__get((t + (int)2));
										}
										HX_STACK_LINE(1448)
										_this1->_data[(j + (int)2)] = i;
										HX_STACK_LINE(1448)
										(_this1->_size)++;
										HX_STACK_LINE(1448)
										first;
									}
								}
								HX_STACK_LINE(1448)
								hx::IndexRef((_this->_vals).mPtr,_this->_free) = d;
								HX_STACK_LINE(1448)
								_this->_keys[_this->_free] = key;
								HX_STACK_LINE(1448)
								_this->_free = _this->_next->__get(_this->_free);
								HX_STACK_LINE(1448)
								true;
							}
							HX_STACK_LINE(1448)
							(this->collisionsCount)++;
							HX_STACK_LINE(1448)
							if (((bool((cp->x != (int)-9999)) && bool((cp->y != (int)-9999))))){
								HX_STACK_LINE(1448)
								d->points->push(cp);
								HX_STACK_LINE(1448)
								::com::stencyl::models::Actor thisActor = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(thisActor,"thisActor");
								HX_STACK_LINE(1448)
								::box2D::dynamics::B2Body body = thisActor->getBody();		HX_STACK_VAR(body,"body");
								HX_STACK_LINE(1448)
								::box2D::dynamics::B2Body otherBody = otherActor->getBody();		HX_STACK_VAR(otherBody,"otherBody");
								HX_STACK_LINE(1448)
								::box2D::dynamics::B2Body body1 = p->getFixtureA()->getBody();		HX_STACK_VAR(body1,"body1");
								HX_STACK_LINE(1448)
								::box2D::dynamics::B2Body body2 = p->getFixtureB()->getBody();		HX_STACK_VAR(body2,"body2");
								HX_STACK_LINE(1448)
								d->thisFromBottom = false;
								HX_STACK_LINE(1448)
								d->thisFromTop = false;
								HX_STACK_LINE(1448)
								d->thisFromLeft = false;
								HX_STACK_LINE(1448)
								d->thisFromRight = false;
								HX_STACK_LINE(1448)
								if (((body1 == body))){
									HX_STACK_LINE(1448)
									d->thisFromBottom = (cp->normalY > (int)0);
								}
								else{
									HX_STACK_LINE(1448)
									if (((body2 == body))){
										HX_STACK_LINE(1448)
										d->thisFromBottom = (cp->normalY < (int)0);
									}
								}
								HX_STACK_LINE(1448)
								if (((body1 == body))){
									HX_STACK_LINE(1448)
									d->thisFromTop = (cp->normalY < (int)0);
								}
								else{
									HX_STACK_LINE(1448)
									if (((body2 == body))){
										HX_STACK_LINE(1448)
										d->thisFromTop = (cp->normalY > (int)0);
									}
								}
								HX_STACK_LINE(1448)
								if (((body1 == body))){
									HX_STACK_LINE(1448)
									d->thisFromLeft = (cp->normalX < (int)0);
								}
								else{
									HX_STACK_LINE(1448)
									if (((body2 == body))){
										HX_STACK_LINE(1448)
										d->thisFromLeft = (cp->normalX > (int)0);
									}
								}
								HX_STACK_LINE(1448)
								if (((body1 == body))){
									HX_STACK_LINE(1448)
									d->thisFromRight = (cp->normalX > (int)0);
								}
								else{
									HX_STACK_LINE(1448)
									if (((body2 == body))){
										HX_STACK_LINE(1448)
										d->thisFromRight = (cp->normalX < (int)0);
									}
								}
								HX_STACK_LINE(1448)
								d->otherFromBottom = false;
								HX_STACK_LINE(1448)
								d->otherFromTop = false;
								HX_STACK_LINE(1448)
								d->otherFromLeft = false;
								HX_STACK_LINE(1448)
								d->otherFromRight = false;
								HX_STACK_LINE(1448)
								if (((body1 == otherBody))){
									HX_STACK_LINE(1448)
									d->otherFromBottom = (cp->normalY > (int)0);
								}
								else{
									HX_STACK_LINE(1448)
									if (((body2 == otherBody))){
										HX_STACK_LINE(1448)
										d->otherFromBottom = (cp->normalY < (int)0);
									}
								}
								HX_STACK_LINE(1448)
								if (((body1 == otherBody))){
									HX_STACK_LINE(1448)
									d->otherFromTop = (cp->normalY < (int)0);
								}
								else{
									HX_STACK_LINE(1448)
									if (((body2 == otherBody))){
										HX_STACK_LINE(1448)
										d->otherFromTop = (cp->normalY > (int)0);
									}
								}
								HX_STACK_LINE(1448)
								if (((body1 == otherBody))){
									HX_STACK_LINE(1448)
									d->otherFromLeft = (cp->normalX < (int)0);
								}
								else{
									HX_STACK_LINE(1448)
									if (((body2 == otherBody))){
										HX_STACK_LINE(1448)
										d->otherFromLeft = (cp->normalX > (int)0);
									}
								}
								HX_STACK_LINE(1448)
								if (((body1 == otherBody))){
									HX_STACK_LINE(1448)
									d->otherFromRight = (cp->normalX > (int)0);
								}
								else{
									HX_STACK_LINE(1448)
									if (((body2 == otherBody))){
										HX_STACK_LINE(1448)
										d->otherFromRight = (cp->normalX < (int)0);
									}
								}
							}
							HX_STACK_LINE(1448)
							d->thisCollidedWithActor = false;
							HX_STACK_LINE(1448)
							d->thisCollidedWithTerrain = false;
							HX_STACK_LINE(1448)
							d->thisCollidedWithTile = false;
							HX_STACK_LINE(1448)
							d->thisCollidedWithSensor = false;
							HX_STACK_LINE(1448)
							d->otherCollidedWithActor = false;
							HX_STACK_LINE(1448)
							d->otherCollidedWithTerrain = false;
							HX_STACK_LINE(1448)
							d->otherCollidedWithTile = false;
							HX_STACK_LINE(1448)
							d->otherCollidedWithSensor = false;
							HX_STACK_LINE(1448)
							if (((otherActor != null()))){
								HX_STACK_LINE(1448)
								d->thisCollidedWithActor = (bool((bool((otherActor->groupID != (int)1)) && bool((otherActor->groupID != (int)-2)))) && bool(!(otherActor->isTerrainRegion)));
								HX_STACK_LINE(1448)
								d->thisCollidedWithTerrain = otherActor->isTerrainRegion;
								HX_STACK_LINE(1448)
								d->thisCollidedWithTile = (otherActor->groupID == (int)1);
							}
							HX_STACK_LINE(1448)
							d->otherCollidedWithActor = (bool((bool((this->groupID != (int)1)) && bool((this->groupID != (int)-2)))) && bool(!(this->isTerrainRegion)));
							HX_STACK_LINE(1448)
							d->otherCollidedWithTerrain = this->isTerrainRegion;
							HX_STACK_LINE(1448)
							d->otherCollidedWithTile = (this->groupID == (int)1);
							HX_STACK_LINE(1448)
							d->thisCollidedWithSensor = otherShape->isSensor();
							HX_STACK_LINE(1448)
							d->otherCollidedWithSensor = thisShape->isSensor();
						}
;
					}
				}
				HX_STACK_LINE(1448)
				if (((this->collisionsCount > (int)0))){
					HX_STACK_LINE(1448)
					for(::cpp::FastIterator_obj< ::com::stencyl::models::actor::Collision > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::actor::Collision >(this->collisions->iterator());  __it->hasNext(); ){
						::com::stencyl::models::actor::Collision collision = __it->next();
						{
							HX_STACK_LINE(1448)
							if (((bool((bool((bool((bool((collision == null())) || bool((collision->thisActor == null())))) || bool((collision->otherActor == null())))) || bool(!(collision->thisActor->handlesCollisions)))) || bool(!(collision->otherActor->handlesCollisions))))){
								HX_STACK_LINE(1448)
								continue;
							}
							HX_STACK_LINE(1448)
							::com::stencyl::models::Actor_obj::lastCollided = collision->otherActor;
							HX_STACK_LINE(1448)
							{
								HX_STACK_LINE(1448)
								Dynamic listeners = this->collisionListeners;		HX_STACK_VAR(listeners,"listeners");
								HX_STACK_LINE(1448)
								int r = (int)0;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1448)
								while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
									HX_STACK_LINE(1448)
									try{
										HX_STACK_LINE(1448)
										Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(1448)
										f(collision,listeners).Cast< Void >();
										HX_STACK_LINE(1448)
										if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
											HX_STACK_LINE(1448)
											(r)--;
										}
									}
									catch(Dynamic __e){
										if (__e.IsClass< ::String >() ){
											HX_STACK_BEGIN_CATCH
											::String e = __e;{
												HX_STACK_LINE(1448)
												::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
											}
										}
										else throw(__e);
									}
									HX_STACK_LINE(1448)
									(r)++;
								}
							}
							HX_STACK_LINE(1448)
							this->engine->handleCollision(hx::ObjectPtr<OBJ_>(this),collision);
						}
;
					}
				}
			}
		}
		HX_STACK_LINE(1452)
		this->internalUpdate(elapsedTime,true);
		HX_STACK_LINE(1453)
		{
			HX_STACK_LINE(1453)
			Dynamic listeners = this->whenUpdatedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1453)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1453)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1453)
				try{
					HX_STACK_LINE(1453)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1453)
					f(elapsedTime,listeners).Cast< Void >();
					HX_STACK_LINE(1453)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1453)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1453)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1453)
				(r)++;
			}
		}
		HX_STACK_LINE(1455)
		if (((bool((bool((this->positionListenerCount > (int)0)) || bool((ep->get(checkType) != null())))) || bool((ep->get(groupType) != null()))))){
			HX_STACK_LINE(1458)
			this->checkScreenState();
		}
		HX_STACK_LINE(1463)
		if (((this->label != null()))){
			HX_STACK_LINE(1464)
			this->label->setAlpha(this->get_alpha());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,innerUpdate,(void))

Void Actor_obj::update( Float elapsedTime){
{
		HX_STACK_PUSH("Actor::update","com/stencyl/models/Actor.hx",1367);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_LINE(1367)
		this->innerUpdate(elapsedTime,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,update,(void))

Void Actor_obj::switchAnimation( ::String name){
{
		HX_STACK_PUSH("Actor::switchAnimation","com/stencyl/models/Actor.hx",1044);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(1044)
		if (((name != this->currAnimationName))){
			HX_STACK_LINE(1047)
			Dynamic newAnimation = this->animationMap->get(name);		HX_STACK_VAR(newAnimation,"newAnimation");
			HX_STACK_LINE(1049)
			if (((newAnimation == null()))){
				HX_STACK_LINE(1050)
				return null();
			}
			HX_STACK_LINE(1054)
			if (((this->currAnimation != null()))){
				HX_STACK_LINE(1055)
				this->removeChild(this->currAnimation);
			}
			HX_STACK_LINE(1061)
			bool isDifferentShape = false;		HX_STACK_VAR(isDifferentShape,"isDifferentShape");
			HX_STACK_LINE(1065)
			if (((bool((this->body != null())) && bool(!(this->isLightweight))))){
				HX_STACK_LINE(1067)
				Dynamic arrOld = this->shapeMap->get(this->currAnimationName);		HX_STACK_VAR(arrOld,"arrOld");
				HX_STACK_LINE(1068)
				Dynamic arrNew = this->shapeMap->get(name);		HX_STACK_VAR(arrNew,"arrNew");
				HX_STACK_LINE(1070)
				if (((bool((arrOld == null())) || bool((arrNew == null()))))){
					HX_STACK_LINE(1071)
					isDifferentShape = true;
				}
				else{
					HX_STACK_LINE(1076)
					if (((bool((arrOld->__Field(HX_CSTRING("length"),true) != arrNew->__Field(HX_CSTRING("length"),true))) || bool((arrOld->__Field(HX_CSTRING("length"),true) > (int)1))))){
						HX_STACK_LINE(1078)
						isDifferentShape = true;
					}
					else{
						HX_STACK_LINE(1084)
						::box2D::dynamics::B2FixtureDef oldDef = arrOld->__GetItem((int)0);		HX_STACK_VAR(oldDef,"oldDef");
						HX_STACK_LINE(1085)
						::box2D::dynamics::B2FixtureDef newDef = arrNew->__GetItem((int)0);		HX_STACK_VAR(newDef,"newDef");
						HX_STACK_LINE(1087)
						if (((bool((oldDef == null())) || bool((newDef == null()))))){
							HX_STACK_LINE(1088)
							isDifferentShape = true;
						}
						else{
							HX_STACK_LINE(1094)
							::box2D::collision::shapes::B2Shape oldShape = oldDef->shape;		HX_STACK_VAR(oldShape,"oldShape");
							HX_STACK_LINE(1095)
							::box2D::collision::shapes::B2Shape newShape = newDef->shape;		HX_STACK_VAR(newShape,"newShape");
							HX_STACK_LINE(1097)
							if (((oldDef->isSensor != newDef->isSensor))){
								HX_STACK_LINE(1098)
								isDifferentShape = true;
							}
							else{
								HX_STACK_LINE(1102)
								if (((oldDef->groupID != newDef->groupID))){
									HX_STACK_LINE(1103)
									isDifferentShape = true;
								}
								else{
									HX_STACK_LINE(1107)
									if (((::Type_obj::getClass(oldShape) == ::Type_obj::getClass(newShape)))){
										HX_STACK_LINE(1108)
										if (((::Type_obj::getClass(oldShape) == hx::ClassOf< ::box2D::collision::shapes::B2PolygonShape >()))){
											HX_STACK_LINE(1111)
											::box2D::collision::shapes::B2PolygonShape polyOld = hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(oldShape);		HX_STACK_VAR(polyOld,"polyOld");
											HX_STACK_LINE(1112)
											::box2D::collision::shapes::B2PolygonShape polyNew = hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(newShape);		HX_STACK_VAR(polyNew,"polyNew");
											HX_STACK_LINE(1114)
											if (((polyOld->m_vertexCount != polyNew->m_vertexCount))){
												HX_STACK_LINE(1115)
												isDifferentShape = true;
											}
											else{
												HX_STACK_LINE(1121)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												int _g = polyOld->m_vertexCount;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(1121)
												while(((_g1 < _g))){
													HX_STACK_LINE(1121)
													int i = (_g1)++;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(1123)
													if (((polyOld->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->x != polyNew->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->x))){
														HX_STACK_LINE(1125)
														isDifferentShape = true;
														HX_STACK_LINE(1126)
														break;
													}
													else{
														HX_STACK_LINE(1129)
														if (((polyOld->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->y != polyNew->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->y))){
															HX_STACK_LINE(1131)
															isDifferentShape = true;
															HX_STACK_LINE(1132)
															break;
														}
													}
												}
											}
										}
										else{
											HX_STACK_LINE(1138)
											if (((::Type_obj::getClass(oldShape) == hx::ClassOf< ::box2D::collision::shapes::B2CircleShape >()))){
												HX_STACK_LINE(1140)
												::box2D::collision::shapes::B2CircleShape circleOld = hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(oldShape);		HX_STACK_VAR(circleOld,"circleOld");
												HX_STACK_LINE(1141)
												::box2D::collision::shapes::B2CircleShape circleNew = hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(newShape);		HX_STACK_VAR(circleNew,"circleNew");
												HX_STACK_LINE(1143)
												if (((bool((bool((circleOld->m_radius != circleNew->m_radius)) || bool((circleOld->m_p->x != circleNew->m_p->x)))) || bool((circleOld->m_p->y != circleNew->m_p->y))))){
													HX_STACK_LINE(1146)
													isDifferentShape = true;
												}
											}
										}
									}
									else{
										HX_STACK_LINE(1153)
										isDifferentShape = true;
									}
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(1163)
			this->currAnimationName = name;
			HX_STACK_LINE(1164)
			this->currAnimation = newAnimation;
			HX_STACK_LINE(1166)
			this->currAnimationAsAnim = hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation);
			HX_STACK_LINE(1168)
			this->addChild(newAnimation);
			HX_STACK_LINE(1172)
			::box2D::common::math::B2Vec2 animOrigin = this->originMap->get(name);		HX_STACK_VAR(animOrigin,"animOrigin");
			HX_STACK_LINE(1174)
			if ((!(this->isLightweight))){
				HX_STACK_LINE(1175)
				this->updateTweenProperties();
			}
			HX_STACK_LINE(1179)
			Float centerx = ((Float((Float(this->currAnimation->get_width()) / Float(::com::stencyl::Engine_obj::SCALE))) / Float((int)2)) - animOrigin->x);		HX_STACK_VAR(centerx,"centerx");
			HX_STACK_LINE(1180)
			Float centery = ((Float((Float(this->currAnimation->get_height()) / Float(::com::stencyl::Engine_obj::SCALE))) / Float((int)2)) - animOrigin->y);		HX_STACK_VAR(centery,"centery");
			HX_STACK_LINE(1182)
			if (((bool((bool((this->body != null())) && bool(isDifferentShape))) && bool(!(this->isLightweight))))){
				HX_STACK_LINE(1185)
				Array< ::Dynamic > regions = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(regions,"regions");
				HX_STACK_LINE(1189)
				::box2D::dynamics::contacts::B2ContactEdge contact = this->body->getContactList();		HX_STACK_VAR(contact,"contact");
				HX_STACK_LINE(1191)
				while(((contact != null()))){
					HX_STACK_LINE(1193)
					if (((bool(::Std_obj::is(contact->other->getUserData(),hx::ClassOf< ::com::stencyl::models::Region >())) && bool(contact->contact->isTouching())))){
						HX_STACK_LINE(1194)
						regions->push(contact->other->getUserData());
					}
					HX_STACK_LINE(1198)
					::com::stencyl::Engine_obj::engine->world->m_contactManager->m_contactListener->endContact(contact->contact);
					HX_STACK_LINE(1199)
					contact = contact->next;
				}
				HX_STACK_LINE(1204)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->collisions->keys());  __it->hasNext(); ){
					int k = __it->next();
					{
						HX_STACK_LINE(1206)
						::de::polygonal::ds::IntHashTable _this = this->collisions;		HX_STACK_VAR(_this,"_this");
						struct _Function_4_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &k){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1206);
								{
									HX_STACK_LINE(1206)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1206)
									int i = _this1->_hash->__get((int((k * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_5_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &k){
											HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1206);
											{
												HX_STACK_LINE(1206)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(1206)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(1206)
												while(((i != (int)-1))){
													HX_STACK_LINE(1206)
													if (((_this1->_data->__get(i) == k))){
														HX_STACK_LINE(1206)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(1206)
														break;
													}
													HX_STACK_LINE(1206)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(1206)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(1206)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == k))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,_this1,k)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1206)
						int i = _Function_4_1::Block(_this,k);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(1206)
						if (((i == (int)-2147483647))){
							HX_STACK_LINE(1206)
							false;
						}
						else{
							HX_STACK_LINE(1206)
							_this->_key0 = (int)-2147483647;
							HX_STACK_LINE(1206)
							hx::IndexRef((_this->_vals).mPtr,i) = null();
							HX_STACK_LINE(1206)
							_this->_keys[i] = (int)-2147483647;
							HX_STACK_LINE(1206)
							_this->_next[i] = _this->_free;
							HX_STACK_LINE(1206)
							_this->_free = i;
							HX_STACK_LINE(1206)
							bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
							HX_STACK_LINE(1206)
							if (((_this->_sizeLevel > (int)0))){
								HX_STACK_LINE(1206)
								if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
									HX_STACK_LINE(1206)
									if ((_this->_isResizable)){
										HX_STACK_LINE(1206)
										shrink = true;
									}
								}
							}
							HX_STACK_LINE(1206)
							{
								HX_STACK_LINE(1206)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1206)
								int b = (int((k * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1206)
								int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(1206)
								if (((i1 == (int)-1))){
									HX_STACK_LINE(1206)
									false;
								}
								else{
									HX_STACK_LINE(1206)
									if (((k == _this1->_data->__get(i1)))){
										HX_STACK_LINE(1206)
										if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
											HX_STACK_LINE(1206)
											_this1->_hash[b] = (int)-1;
										}
										else{
											HX_STACK_LINE(1206)
											_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
										}
										HX_STACK_LINE(1206)
										int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(1206)
										_this1->_next[j] = _this1->_free;
										HX_STACK_LINE(1206)
										_this1->_free = j;
										HX_STACK_LINE(1206)
										_this1->_data[(i1 + (int)1)] = (int)-2147483647;
										HX_STACK_LINE(1206)
										_this1->_data[(i1 + (int)2)] = (int)-1;
										HX_STACK_LINE(1206)
										(_this1->_size)--;
										HX_STACK_LINE(1206)
										if (((_this1->_sizeLevel > (int)0))){
											HX_STACK_LINE(1206)
											if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
												HX_STACK_LINE(1206)
												if ((_this1->_isResizable)){
													HX_STACK_LINE(1206)
													_this1->_shrink();
												}
											}
										}
										HX_STACK_LINE(1206)
										true;
									}
									else{
										HX_STACK_LINE(1206)
										bool exists = false;		HX_STACK_VAR(exists,"exists");
										HX_STACK_LINE(1206)
										int i0 = i1;		HX_STACK_VAR(i0,"i0");
										HX_STACK_LINE(1206)
										i1 = _this1->_data->__get((i1 + (int)2));
										HX_STACK_LINE(1206)
										while(((i1 != (int)-1))){
											HX_STACK_LINE(1206)
											if (((_this1->_data->__get(i1) == k))){
												HX_STACK_LINE(1206)
												exists = true;
												HX_STACK_LINE(1206)
												break;
											}
											HX_STACK_LINE(1206)
											i1 = _this1->_data->__get(((i0 = i1) + (int)2));
										}
										HX_STACK_LINE(1206)
										if ((exists)){
											HX_STACK_LINE(1206)
											_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
											HX_STACK_LINE(1206)
											int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(1206)
											_this1->_next[j] = _this1->_free;
											HX_STACK_LINE(1206)
											_this1->_free = j;
											HX_STACK_LINE(1206)
											_this1->_data[(i1 + (int)1)] = (int)-2147483647;
											HX_STACK_LINE(1206)
											_this1->_data[(i1 + (int)2)] = (int)-1;
											HX_STACK_LINE(1206)
											--(_this1->_size);
											HX_STACK_LINE(1206)
											if (((_this1->_sizeLevel > (int)0))){
												HX_STACK_LINE(1206)
												if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
													HX_STACK_LINE(1206)
													if ((_this1->_isResizable)){
														HX_STACK_LINE(1206)
														_this1->_shrink();
													}
												}
											}
											HX_STACK_LINE(1206)
											true;
										}
										else{
											HX_STACK_LINE(1206)
											false;
										}
									}
								}
							}
							HX_STACK_LINE(1206)
							if ((shrink)){
								HX_STACK_LINE(1206)
								(_this->_sizeLevel)--;
								HX_STACK_LINE(1206)
								int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
								HX_STACK_LINE(1206)
								int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
								struct _Function_6_1{
									inline static Array< int > Block( int &newSize){
										HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1206);
										{
											HX_STACK_LINE(1206)
											Array< int > a;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(1206)
											a = Array_obj< int >::__new();
											HX_STACK_LINE(1206)
											a[(newSize - (int)1)] = null();
											HX_STACK_LINE(1206)
											return a;
										}
										return null();
									}
								};
								HX_STACK_LINE(1206)
								_this->_next = _Function_6_1::Block(newSize);
								HX_STACK_LINE(1206)
								{
									HX_STACK_LINE(1206)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1206)
									while(((_g1 < _g))){
										HX_STACK_LINE(1206)
										int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(1206)
										_this->_next[i1] = (i1 + (int)1);
									}
								}
								HX_STACK_LINE(1206)
								_this->_next[(newSize - (int)1)] = (int)-1;
								HX_STACK_LINE(1206)
								_this->_free = (int)0;
								struct _Function_6_2{
									inline static Array< int > Block( int &newSize){
										HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1206);
										{
											HX_STACK_LINE(1206)
											Array< int > a;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(1206)
											a = Array_obj< int >::__new();
											HX_STACK_LINE(1206)
											a[(newSize - (int)1)] = null();
											HX_STACK_LINE(1206)
											return a;
										}
										return null();
									}
								};
								HX_STACK_LINE(1206)
								Array< int > tmpKeys = _Function_6_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
								HX_STACK_LINE(1206)
								{
									HX_STACK_LINE(1206)
									int k1 = newSize;		HX_STACK_VAR(k1,"k1");
									HX_STACK_LINE(1206)
									if (((k1 == (int)-1))){
										HX_STACK_LINE(1206)
										k1 = tmpKeys->length;
									}
									HX_STACK_LINE(1206)
									{
										HX_STACK_LINE(1206)
										int _g = (int)0;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(1206)
										while(((_g < k1))){
											HX_STACK_LINE(1206)
											int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
											HX_STACK_LINE(1206)
											tmpKeys[i1] = (int)-2147483647;
										}
									}
								}
								struct _Function_6_3{
									inline static Array< ::Dynamic > Block( int &newSize){
										HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1206);
										{
											HX_STACK_LINE(1206)
											Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(1206)
											a = Array_obj< ::Dynamic >::__new();
											HX_STACK_LINE(1206)
											a[(newSize - (int)1)] = null();
											HX_STACK_LINE(1206)
											return a;
										}
										return null();
									}
								};
								HX_STACK_LINE(1206)
								Array< ::Dynamic > tmpVals = _Function_6_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
								HX_STACK_LINE(1206)
								for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
									int i1 = __it->next();
									{
										HX_STACK_LINE(1206)
										tmpKeys[_this->_free] = _this->_keys->__get(i1);
										HX_STACK_LINE(1206)
										tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
										HX_STACK_LINE(1206)
										_this->_free = _this->_next->__get(_this->_free);
									}
;
								}
								HX_STACK_LINE(1206)
								_this->_keys = tmpKeys;
								HX_STACK_LINE(1206)
								_this->_vals = tmpVals;
								HX_STACK_LINE(1206)
								{
									HX_STACK_LINE(1206)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1206)
									while(((_g1 < _g))){
										HX_STACK_LINE(1206)
										int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(1206)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										int key = _this->_keys->__get(i1);		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(1206)
										int i2 = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
										HX_STACK_LINE(1206)
										if (((i2 == (int)-1))){
											HX_STACK_LINE(1206)
											false;
										}
										else{
											HX_STACK_LINE(1206)
											if (((_this1->_data->__get(i2) == key))){
												HX_STACK_LINE(1206)
												_this1->_data[(i2 + (int)1)] = i1;
												HX_STACK_LINE(1206)
												true;
											}
											else{
												HX_STACK_LINE(1206)
												i2 = _this1->_data->__get((i2 + (int)2));
												HX_STACK_LINE(1206)
												while(((i2 != (int)-1))){
													HX_STACK_LINE(1206)
													if (((_this1->_data->__get(i2) == key))){
														HX_STACK_LINE(1206)
														_this1->_data[(i2 + (int)1)] = i1;
														HX_STACK_LINE(1206)
														break;
													}
													HX_STACK_LINE(1206)
													i2 = _this1->_data->__get((i2 + (int)2));
												}
												HX_STACK_LINE(1206)
												(i2 != (int)-1);
											}
										}
									}
								}
							}
							HX_STACK_LINE(1206)
							true;
						}
					}
;
				}
				HX_STACK_LINE(1209)
				this->collisions = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
				HX_STACK_LINE(1210)
				this->simpleCollisions = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
				HX_STACK_LINE(1211)
				this->contacts = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
				HX_STACK_LINE(1212)
				this->regionContacts = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
				HX_STACK_LINE(1214)
				this->collisions->reuseIterator = true;
				HX_STACK_LINE(1215)
				this->simpleCollisions->reuseIterator = true;
				HX_STACK_LINE(1216)
				this->contacts->reuseIterator = true;
				HX_STACK_LINE(1217)
				this->regionContacts->reuseIterator = true;
				HX_STACK_LINE(1219)
				this->contactCount = (int)0;
				HX_STACK_LINE(1220)
				this->collisionsCount = (int)0;
				HX_STACK_LINE(1224)
				while(((this->body->m_fixtureCount > (int)0))){
					HX_STACK_LINE(1225)
					this->body->DestroyFixture(this->body->getFixtureList());
				}
				HX_STACK_LINE(1229)
				{
					HX_STACK_LINE(1229)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Dynamic _g1 = hx::TCastToArray(this->shapeMap->get(name));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1229)
					while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(1229)
						Dynamic f = _g1->__GetItem(_g);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(1229)
						++(_g);
						HX_STACK_LINE(1231)
						::box2D::dynamics::B2FixtureDef originFixDef = ::box2D::dynamics::B2FixtureDef_obj::__new();		HX_STACK_VAR(originFixDef,"originFixDef");
						HX_STACK_LINE(1233)
						if (((this->bodyDef->friction < ::com::stencyl::utils::Utils_obj::NUMBER_MAX_VALUE))){
							HX_STACK_LINE(1235)
							originFixDef->friction = this->bodyDef->friction;
							HX_STACK_LINE(1236)
							originFixDef->restitution = this->bodyDef->bounciness;
							HX_STACK_LINE(1238)
							if (((this->bodyDef->mass > (int)0))){
								HX_STACK_LINE(1239)
								originFixDef->density = 0.1;
							}
						}
						HX_STACK_LINE(1244)
						originFixDef->density = f->__Field(HX_CSTRING("density"),true);
						HX_STACK_LINE(1245)
						originFixDef->isSensor = f->__Field(HX_CSTRING("isSensor"),true);
						HX_STACK_LINE(1246)
						originFixDef->groupID = f->__Field(HX_CSTRING("groupID"),true);
						HX_STACK_LINE(1247)
						originFixDef->shape = f->__Field(HX_CSTRING("shape"),true);
						HX_STACK_LINE(1250)
						if (((animOrigin != null()))){
							HX_STACK_LINE(1252)
							this->body->origin->x = ::com::stencyl::Engine_obj::toPhysicalUnits(-(animOrigin->x));
							HX_STACK_LINE(1253)
							this->body->origin->y = ::com::stencyl::Engine_obj::toPhysicalUnits(-(animOrigin->y));
							HX_STACK_LINE(1255)
							if ((::Std_obj::is(f->__Field(HX_CSTRING("shape"),true),hx::ClassOf< ::box2D::collision::shapes::B2PolygonShape >()))){
								HX_STACK_LINE(1257)
								::box2D::common::math::B2Transform xf = ::box2D::common::math::B2Transform_obj::__new(null(),null());		HX_STACK_VAR(xf,"xf");
								HX_STACK_LINE(1258)
								::box2D::collision::shapes::B2PolygonShape oldBox = hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(f->__Field(HX_CSTRING("shape"),true));		HX_STACK_VAR(oldBox,"oldBox");
								HX_STACK_LINE(1259)
								::box2D::collision::shapes::B2PolygonShape newBox = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(newBox,"newBox");
								HX_STACK_LINE(1261)
								newBox->setAsArray(oldBox->m_vertices,oldBox->m_vertices->length);
								HX_STACK_LINE(1263)
								Array< ::Dynamic > vertices = newBox->m_vertices;		HX_STACK_VAR(vertices,"vertices");
								HX_STACK_LINE(1264)
								Array< ::Dynamic > normals = newBox->m_normals;		HX_STACK_VAR(normals,"normals");
								HX_STACK_LINE(1266)
								{
									HX_STACK_LINE(1266)
									::box2D::common::math::B2Vec2 _this = xf->position;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1266)
									_this->x = ::com::stencyl::Engine_obj::toPhysicalUnits(centerx);
									HX_STACK_LINE(1266)
									_this->y = ::com::stencyl::Engine_obj::toPhysicalUnits(centery);
								}
								HX_STACK_LINE(1267)
								xf->R->setAngle((int)0);
								HX_STACK_LINE(1269)
								{
									HX_STACK_LINE(1269)
									int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
									int _g2 = newBox->m_vertexCount;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1269)
									while(((_g3 < _g2))){
										HX_STACK_LINE(1269)
										int i = (_g3)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1271)
										vertices[i] = xf->multiply(vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >());
										HX_STACK_LINE(1272)
										normals[i] = xf->R->multiplyV(normals->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >());
									}
								}
								HX_STACK_LINE(1275)
								newBox->setAsArray(vertices,vertices->length);
								HX_STACK_LINE(1276)
								newBox->m_normals = normals;
								HX_STACK_LINE(1278)
								originFixDef->shape = newBox;
							}
							else{
								HX_STACK_LINE(1281)
								if ((::Std_obj::is(f->__Field(HX_CSTRING("shape"),true),hx::ClassOf< ::box2D::collision::shapes::B2CircleShape >()))){
									HX_STACK_LINE(1283)
									::box2D::collision::shapes::B2CircleShape oldCircle = hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(f->__Field(HX_CSTRING("shape"),true));		HX_STACK_VAR(oldCircle,"oldCircle");
									HX_STACK_LINE(1284)
									::box2D::collision::shapes::B2CircleShape newCircle = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());		HX_STACK_VAR(newCircle,"newCircle");
									HX_STACK_LINE(1286)
									newCircle->setRadius(oldCircle->getRadius());
									HX_STACK_LINE(1287)
									newCircle->m_p->x = (oldCircle->m_p->x + ::com::stencyl::Engine_obj::toPhysicalUnits(centerx));
									HX_STACK_LINE(1288)
									newCircle->m_p->y = (oldCircle->m_p->y + ::com::stencyl::Engine_obj::toPhysicalUnits(centery));
									HX_STACK_LINE(1290)
									originFixDef->shape = newCircle;
								}
							}
						}
						HX_STACK_LINE(1294)
						::box2D::dynamics::B2Fixture fix = this->body->createFixture(originFixDef);		HX_STACK_VAR(fix,"fix");
						HX_STACK_LINE(1295)
						fix->SetUserData(hx::ObjectPtr<OBJ_>(this));
					}
				}
				HX_STACK_LINE(1298)
				if (((this->body->getFixtureList() != null()))){
					HX_STACK_LINE(1300)
					this->bodyScale->x = (int)1;
					HX_STACK_LINE(1301)
					this->bodyScale->y = (int)1;
					HX_STACK_LINE(1303)
					{
						HX_STACK_LINE(1303)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1303)
						while(((_g < regions->length))){
							HX_STACK_LINE(1303)
							::com::stencyl::models::Region r = regions->__get(_g).StaticCast< ::com::stencyl::models::Region >();		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(1303)
							++(_g);
							HX_STACK_LINE(1305)
							::box2D::collision::B2AABB mine = this->body->getFixtureList()->m_aabb;		HX_STACK_VAR(mine,"mine");
							HX_STACK_LINE(1306)
							::box2D::collision::B2AABB other = r->getBody()->getFixtureList()->m_aabb;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(1308)
							if ((other->testOverlap(mine))){
								HX_STACK_LINE(1309)
								r->addActor(hx::ObjectPtr<OBJ_>(this));
							}
						}
					}
				}
				HX_STACK_LINE(1315)
				if (((this->md != null()))){
					HX_STACK_LINE(1316)
					this->body->setMassData(this->md);
				}
			}
			else{
				HX_STACK_LINE(1321)
				if (((bool((this->shapeMap->get(name) != null())) && bool(this->isLightweight)))){
					HX_STACK_LINE(1324)
					this->set_shape(this->shapeMap->get(name));
					HX_STACK_LINE(1325)
					this->HITBOX = this->_mask;
					HX_STACK_LINE(1328)
					isDifferentShape = true;
				}
			}
			HX_STACK_LINE(1331)
			this->cacheWidth = (Float(this->currAnimation->get_width()) / Float(::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(1332)
			this->cacheHeight = (Float(this->currAnimation->get_height()) / Float(::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(1334)
			if (((this->body != null()))){
				HX_STACK_LINE(1336)
				this->body->size->x = ::com::stencyl::Engine_obj::toPhysicalUnits(this->cacheWidth);
				HX_STACK_LINE(1337)
				this->body->size->y = ::com::stencyl::Engine_obj::toPhysicalUnits(this->cacheHeight);
			}
			HX_STACK_LINE(1340)
			if ((!(this->isLightweight))){
				HX_STACK_LINE(1342)
				this->realX = this->getX(false);
				HX_STACK_LINE(1343)
				this->realY = this->getY(false);
			}
			HX_STACK_LINE(1346)
			if (((animOrigin != null()))){
				HX_STACK_LINE(1347)
				this->setOriginPoint(::Std_obj::_int(animOrigin->x),::Std_obj::_int(animOrigin->y));
			}
			HX_STACK_LINE(1351)
			this->updateMatrix = true;
			HX_STACK_LINE(1355)
			if ((::Std_obj::is(this->currAnimation,hx::ClassOf< ::com::stencyl::graphics::AbstractAnimation >()))){
				HX_STACK_LINE(1356)
				(hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->reset();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,switchAnimation,(void))

int Actor_obj::getNumFrames( ){
	HX_STACK_PUSH("Actor::getNumFrames","com/stencyl/models/Actor.hx",1031);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1031)
	if ((::Std_obj::is(this->currAnimation,hx::ClassOf< ::com::stencyl::graphics::AbstractAnimation >()))){
		HX_STACK_LINE(1033)
		return (hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->getNumFrames();
	}
	else{
		HX_STACK_LINE(1038)
		return (int)0;
	}
	HX_STACK_LINE(1031)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getNumFrames,return )

Void Actor_obj::setCurrentFrame( int frame){
{
		HX_STACK_PUSH("Actor::setCurrentFrame","com/stencyl/models/Actor.hx",1023);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frame,"frame");
		HX_STACK_LINE(1023)
		if ((::Std_obj::is(this->currAnimation,hx::ClassOf< ::com::stencyl::graphics::AbstractAnimation >()))){
			HX_STACK_LINE(1025)
			(hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->setFrame(frame);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setCurrentFrame,(void))

int Actor_obj::getCurrentFrame( ){
	HX_STACK_PUSH("Actor::getCurrentFrame","com/stencyl/models/Actor.hx",1010);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1010)
	if ((::Std_obj::is(this->currAnimation,hx::ClassOf< ::com::stencyl::graphics::AbstractAnimation >()))){
		HX_STACK_LINE(1012)
		return (hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->getCurrentFrame();
	}
	else{
		HX_STACK_LINE(1017)
		return (int)0;
	}
	HX_STACK_LINE(1010)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getCurrentFrame,return )

bool Actor_obj::isAnimationPlaying( ){
	HX_STACK_PUSH("Actor::isAnimationPlaying","com/stencyl/models/Actor.hx",997);
	HX_STACK_THIS(this);
	HX_STACK_LINE(997)
	if ((::Std_obj::is(this->currAnimation,hx::ClassOf< ::com::stencyl::graphics::AbstractAnimation >()))){
		HX_STACK_LINE(999)
		return !((hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->isFinished());
	}
	else{
		HX_STACK_LINE(1004)
		return true;
	}
	HX_STACK_LINE(997)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isAnimationPlaying,return )

Void Actor_obj::switchToDefaultAnimation( ){
{
		HX_STACK_PUSH("Actor::switchToDefaultAnimation","com/stencyl/models/Actor.hx",974);
		HX_STACK_THIS(this);
		HX_STACK_LINE(974)
		if (((bool((this->sprite != null())) && bool((::Lambda_obj::count(this->sprite->animations,null()) > (int)0))))){
			HX_STACK_LINE(978)
			::com::stencyl::models::actor::Animation anim = this->sprite->animations->get(this->sprite->defaultAnimation);		HX_STACK_VAR(anim,"anim");
			HX_STACK_LINE(981)
			if (((anim == null()))){
				struct _Function_3_1{
					inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",983);
						{
							HX_STACK_LINE(983)
							Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->sprite->animations);		HX_STACK_VAR(_e,"_e");

							HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_e)
							Dynamic run(){
								HX_STACK_PUSH("*::_Function_4_1","com/stencyl/models/Actor.hx",983);
								{
									HX_STACK_LINE(983)
									return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(983)
							return  Dynamic(new _Function_4_1(_e));
						}
						return null();
					}
				};
				HX_STACK_LINE(982)
				for(::cpp::FastIterator_obj< ::com::stencyl::models::actor::Animation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::actor::Animation >((_Function_3_1::Block(this))());  __it->hasNext(); ){
					::com::stencyl::models::actor::Animation a = __it->next();
					{
						HX_STACK_LINE(985)
						anim = a;
						HX_STACK_LINE(986)
						break;
					}
;
				}
			}
			HX_STACK_LINE(990)
			this->defaultAnim = (hx::TCast< com::stencyl::models::actor::Animation >::cast(anim))->animName;
			HX_STACK_LINE(991)
			this->switchAnimation(this->defaultAnim);
			HX_STACK_LINE(992)
			this->setCurrentFrame((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,switchToDefaultAnimation,(void))

Void Actor_obj::setAnimation( ::String name){
{
		HX_STACK_PUSH("Actor::setAnimation","com/stencyl/models/Actor.hx",969);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(969)
		this->switchAnimation(name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setAnimation,(void))

::String Actor_obj::getAnimation( ){
	HX_STACK_PUSH("Actor::getAnimation","com/stencyl/models/Actor.hx",964);
	HX_STACK_THIS(this);
	HX_STACK_LINE(964)
	return this->currAnimationName;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAnimation,return )

Void Actor_obj::addAnimation( ::String name,::flash::display::DisplayObject sprite){
{
		HX_STACK_PUSH("Actor::addAnimation","com/stencyl/models/Actor.hx",959);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(sprite,"sprite");
		HX_STACK_LINE(959)
		this->animationMap->set(name,sprite);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,addAnimation,(void))

Void Actor_obj::initBody( int groupID,bool isSensor,bool isStationary,bool isKinematic,bool canRotate,Dynamic shape){
{
		HX_STACK_PUSH("Actor::initBody","com/stencyl/models/Actor.hx",887);
		HX_STACK_THIS(this);
		HX_STACK_ARG(groupID,"groupID");
		HX_STACK_ARG(isSensor,"isSensor");
		HX_STACK_ARG(isStationary,"isStationary");
		HX_STACK_ARG(isKinematic,"isKinematic");
		HX_STACK_ARG(canRotate,"canRotate");
		HX_STACK_ARG(shape,"shape");
		HX_STACK_LINE(888)
		::box2D::dynamics::B2BodyDef bodyDef = ::box2D::dynamics::B2BodyDef_obj::__new();		HX_STACK_VAR(bodyDef,"bodyDef");
		HX_STACK_LINE(890)
		bodyDef->groupID = groupID;
		HX_STACK_LINE(891)
		bodyDef->position->x = ::com::stencyl::Engine_obj::toPhysicalUnits(this->get_x());
		HX_STACK_LINE(892)
		bodyDef->position->y = ::com::stencyl::Engine_obj::toPhysicalUnits(this->get_y());
		HX_STACK_LINE(894)
		bodyDef->angle = (int)0;
		HX_STACK_LINE(895)
		bodyDef->fixedRotation = !(canRotate);
		HX_STACK_LINE(896)
		bodyDef->allowSleep = false;
		HX_STACK_LINE(898)
		if ((isStationary)){
			HX_STACK_LINE(899)
			bodyDef->type = ::box2D::dynamics::B2Body_obj::b2_staticBody;
		}
		else{
			HX_STACK_LINE(903)
			if ((isKinematic)){
				HX_STACK_LINE(904)
				bodyDef->type = ::box2D::dynamics::B2Body_obj::b2_kinematicBody;
			}
			else{
				HX_STACK_LINE(909)
				bodyDef->type = ::box2D::dynamics::B2Body_obj::b2_dynamicBody;
			}
		}
		HX_STACK_LINE(913)
		if ((::Std_obj::is(shape,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(915)
			bodyDef->userData = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(916)
			this->body = ::com::stencyl::Engine_obj::engine->world->createBody(bodyDef);
			HX_STACK_LINE(918)
			Dynamic arr = hx::TCastToArray(shape);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(920)
			{
				HX_STACK_LINE(920)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(920)
				while(((_g < arr->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(920)
					Dynamic item = arr->__GetItem(_g);		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(920)
					++(_g);
					HX_STACK_LINE(922)
					::box2D::dynamics::B2FixtureDef fixtureDef = ::box2D::dynamics::B2FixtureDef_obj::__new();		HX_STACK_VAR(fixtureDef,"fixtureDef");
					HX_STACK_LINE(923)
					fixtureDef->shape = item;
					HX_STACK_LINE(924)
					fixtureDef->friction = 1.0;
					HX_STACK_LINE(925)
					fixtureDef->density = 0.1;
					HX_STACK_LINE(926)
					fixtureDef->restitution = (int)0;
					HX_STACK_LINE(927)
					fixtureDef->isSensor = false;
					HX_STACK_LINE(928)
					fixtureDef->groupID = ::com::stencyl::models::GameModel_obj::TERRAIN_ID;
					HX_STACK_LINE(929)
					fixtureDef->userData = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(931)
					this->body->createFixture(fixtureDef);
				}
			}
		}
		else{
			HX_STACK_LINE(937)
			::box2D::dynamics::B2FixtureDef fixtureDef = ::box2D::dynamics::B2FixtureDef_obj::__new();		HX_STACK_VAR(fixtureDef,"fixtureDef");
			HX_STACK_LINE(938)
			fixtureDef->shape = shape;
			HX_STACK_LINE(939)
			fixtureDef->friction = 1.0;
			HX_STACK_LINE(940)
			fixtureDef->density = 0.1;
			HX_STACK_LINE(941)
			fixtureDef->restitution = (int)0;
			HX_STACK_LINE(942)
			fixtureDef->isSensor = isSensor;
			HX_STACK_LINE(943)
			fixtureDef->groupID = ::com::stencyl::models::GameModel_obj::INHERIT_ID;
			HX_STACK_LINE(944)
			fixtureDef->userData = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(946)
			bodyDef->userData = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(947)
			this->body = ::com::stencyl::Engine_obj::engine->world->createBody(bodyDef);
			HX_STACK_LINE(948)
			this->body->createFixture(fixtureDef);
		}
		HX_STACK_LINE(951)
		this->bodyDef = bodyDef;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Actor_obj,initBody,(void))

Void Actor_obj::initFromBody( ::box2D::dynamics::B2BodyDef bodyDef){
{
		HX_STACK_PUSH("Actor::initFromBody","com/stencyl/models/Actor.hx",879);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bodyDef,"bodyDef");
		HX_STACK_LINE(880)
		bodyDef->allowSleep = false;
		HX_STACK_LINE(881)
		bodyDef->userData = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(882)
		this->bodyDef = bodyDef;
		HX_STACK_LINE(883)
		this->body = ::com::stencyl::Engine_obj::engine->world->createBody(bodyDef);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,initFromBody,(void))

Void Actor_obj::initScripts( ){
{
		HX_STACK_PUSH("Actor::initScripts","com/stencyl/models/Actor.hx",843);
		HX_STACK_THIS(this);
		HX_STACK_LINE(844)
		this->handlesCollisions = true;
		HX_STACK_LINE(845)
		this->behaviors->initScripts();
		HX_STACK_LINE(847)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(849)
		while(((r < this->whenCreatedListeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(851)
			try{
				HX_STACK_LINE(853)
				Dynamic f = this->whenCreatedListeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(854)
				f(this->whenCreatedListeners).Cast< Void >();
				HX_STACK_LINE(856)
				if (((::com::stencyl::utils::Utils_obj::indexOf(this->whenCreatedListeners,f) == (int)-1))){
					HX_STACK_LINE(857)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(863)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Actor.hx"),864,HX_CSTRING("com.stencyl.models.Actor"),HX_CSTRING("initScripts")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(867)
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
	HX_STACK_PUSH("Actor::addAnim","com/stencyl/models/Actor.hx",756);
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
		HX_STACK_LINE(757)
		if (((shapes != null()))){
			HX_STACK_LINE(759)
			Dynamic arr = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(761)
			if ((this->isLightweight)){
				struct _Function_3_1{
					inline static Dynamic Block( ::haxe::ds::IntMap &shapes){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",763);
						{
							HX_STACK_LINE(763)
							Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(shapes);		HX_STACK_VAR(_e,"_e");

							HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_e)
							Dynamic run(){
								HX_STACK_PUSH("*::_Function_4_1","com/stencyl/models/Actor.hx",763);
								{
									HX_STACK_LINE(763)
									return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(763)
							return  Dynamic(new _Function_4_1(_e));
						}
						return null();
					}
				};
				HX_STACK_LINE(762)
				for(::cpp::FastIterator_obj< ::com::stencyl::models::collision::Hitbox > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::collision::Hitbox >((_Function_3_1::Block(shapes))());  __it->hasNext(); ){
					::com::stencyl::models::collision::Hitbox s = __it->next();
					{
						HX_STACK_LINE(765)
						if (((bool(::Std_obj::is(s,hx::ClassOf< ::com::stencyl::models::collision::Hitbox >())) && bool(this->isLightweight)))){
							HX_STACK_LINE(767)
							s = (hx::TCast< com::stencyl::models::collision::Hitbox >::cast(s))->clone();
							HX_STACK_LINE(768)
							s->assignTo(hx::ObjectPtr<OBJ_>(this));
						}
						HX_STACK_LINE(771)
						arr->__Field(HX_CSTRING("push"),true)(s);
					}
;
				}
			}
			else{
				struct _Function_3_1{
					inline static Dynamic Block( ::haxe::ds::IntMap &shapes){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",777);
						{
							HX_STACK_LINE(777)
							Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(shapes);		HX_STACK_VAR(_e,"_e");

							HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_e)
							Dynamic run(){
								HX_STACK_PUSH("*::_Function_4_1","com/stencyl/models/Actor.hx",777);
								{
									HX_STACK_LINE(777)
									return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(777)
							return  Dynamic(new _Function_4_1(_e));
						}
						return null();
					}
				};
				HX_STACK_LINE(776)
				for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >((_Function_3_1::Block(shapes))());  __it->hasNext(); ){
					Dynamic s = __it->next();
					arr->__Field(HX_CSTRING("push"),true)(s);
				}
			}
			HX_STACK_LINE(783)
			if ((this->isLightweight)){
				HX_STACK_LINE(784)
				this->shapeMap->set(name,::com::stencyl::models::collision::Masklist_obj::__new(arr));
			}
			else{
				HX_STACK_LINE(789)
				this->shapeMap->set(name,arr);
			}
		}
		HX_STACK_LINE(794)
		if (((bool((bool((imgData == null())) || bool((imgData->get_width() <= (int)0)))) || bool((imgData->get_height() <= (int)0))))){
			HX_STACK_LINE(799)
			this->animationMap->set(name,::com::stencyl::graphics::BitmapAnimation_obj::__new(::flash::display::BitmapData_obj::__new((int)16,(int)16,null(),null(),null()),(int)1,Array_obj< int >::__new().Add((int)1000000),false,null()));
			HX_STACK_LINE(800)
			this->originMap->set(name,::box2D::common::math::B2Vec2_obj::__new(originX,originY));
			HX_STACK_LINE(801)
			return null();
		}
		HX_STACK_LINE(805)
		::openfl::display::Tilesheet tilesheet = ::openfl::display::Tilesheet_obj::__new(imgData);		HX_STACK_VAR(tilesheet,"tilesheet");
		HX_STACK_LINE(807)
		frameWidth = ::Std_obj::_int((Float(imgData->get_width()) / Float(frameCount)));
		HX_STACK_LINE(809)
		{
			HX_STACK_LINE(809)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(809)
			while(((_g < frameCount))){
				HX_STACK_LINE(809)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(811)
				tilesheet->addTileRect(::flash::geom::Rectangle_obj::__new((frameWidth * i),(int)0,frameWidth,(frameHeight * ::com::stencyl::Engine_obj::SCALE)),null());
			}
		}
		HX_STACK_LINE(814)
		::com::stencyl::graphics::SheetAnimation sprite = ::com::stencyl::graphics::SheetAnimation_obj::__new(tilesheet,durations,::Std_obj::_int(frameWidth),::Std_obj::_int((frameHeight * ::com::stencyl::Engine_obj::SCALE)),looping,(  ((this->sprite->animations->get(animID)->__Field(HX_CSTRING("sync"),true))) ? ::com::stencyl::models::actor::Animation(this->sprite->animations->get(animID)) : ::com::stencyl::models::actor::Animation(null()) ));		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(824)
		this->animationMap->set(name,sprite);
		HX_STACK_LINE(839)
		this->originMap->set(name,::box2D::common::math::B2Vec2_obj::__new(originX,originY));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(Actor_obj,addAnim,(void))

Void Actor_obj::resetListeners( ){
{
		HX_STACK_PUSH("Actor::resetListeners","com/stencyl/models/Actor.hx",697);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",698);
				{
					HX_STACK_LINE(698)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->allListeners);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/models/Actor.hx",698);
						{
							HX_STACK_LINE(698)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(698)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(698)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			int key = __it->next();
			this->allListeners->remove(key);
		}
		HX_STACK_LINE(703)
		while(((this->allListenerReferences->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(704)
			this->allListenerReferences->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(708)
		while(((this->whenUpdatedListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(709)
			this->whenUpdatedListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(713)
		while(((this->whenDrawingListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(714)
			this->whenDrawingListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(718)
		while(((this->whenKilledListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(719)
			this->whenKilledListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(723)
		while(((this->mouseOverListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(724)
			this->mouseOverListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(728)
		while(((this->positionListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(729)
			this->positionListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(733)
		while(((this->collisionListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(734)
			this->collisionListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(738)
		this->positionListenerCount = (int)0;
		HX_STACK_LINE(739)
		this->collisionListenerCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,resetListeners,(void))

Void Actor_obj::destroy( ){
{
		HX_STACK_PUSH("Actor::destroy","com/stencyl/models/Actor.hx",619);
		HX_STACK_THIS(this);
		HX_STACK_LINE(620)
		if ((this->destroyed)){
			HX_STACK_LINE(621)
			return null();
		}
		HX_STACK_LINE(625)
		this->destroyed = true;
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",627);
				{
					HX_STACK_LINE(627)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/models/Actor.hx",627);
						{
							HX_STACK_LINE(627)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(627)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(627)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			Dynamic anim = __it->next();
			anim->__FieldRef(HX_CSTRING("visible")) = false;
		}
		HX_STACK_LINE(632)
		::com::stencyl::utils::Utils_obj::removeAllChildren(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(634)
		if (((bool((this->body != null())) && bool(!(this->isLightweight))))){
			HX_STACK_LINE(636)
			::box2D::dynamics::contacts::B2ContactEdge contact = this->body->getContactList();		HX_STACK_VAR(contact,"contact");
			HX_STACK_LINE(638)
			while(((contact != null()))){
				HX_STACK_LINE(640)
				::com::stencyl::Engine_obj::engine->world->m_contactManager->m_contactListener->endContact(contact->contact);
				HX_STACK_LINE(641)
				contact = contact->next;
			}
			HX_STACK_LINE(644)
			::com::stencyl::Engine_obj::engine->world->destroyBody(this->body);
		}
		HX_STACK_LINE(647)
		this->cancelTweens();
		HX_STACK_LINE(649)
		::com::stencyl::models::Actor_obj::lastCollided = null();
		HX_STACK_LINE(651)
		this->shapeMap = null();
		HX_STACK_LINE(652)
		this->originMap = null();
		HX_STACK_LINE(653)
		this->defaultAnim = null();
		HX_STACK_LINE(654)
		this->animationMap = null();
		HX_STACK_LINE(655)
		this->currAnimationAsAnim = null();
		HX_STACK_LINE(656)
		this->currAnimation = null();
		HX_STACK_LINE(657)
		this->currOffset = null();
		HX_STACK_LINE(658)
		this->currOrigin = null();
		HX_STACK_LINE(659)
		this->body = null();
		HX_STACK_LINE(660)
		this->sprite = null();
		HX_STACK_LINE(661)
		this->contacts = null();
		HX_STACK_LINE(662)
		this->regionContacts = null();
		HX_STACK_LINE(663)
		this->contactCount = (int)0;
		HX_STACK_LINE(664)
		this->collisionsCount = (int)0;
		HX_STACK_LINE(666)
		this->transformPoint = null();
		HX_STACK_LINE(667)
		this->transformMatrix = null();
		HX_STACK_LINE(669)
		this->whenCreatedListeners = null();
		HX_STACK_LINE(670)
		this->whenUpdatedListeners = null();
		HX_STACK_LINE(671)
		this->whenDrawingListeners = null();
		HX_STACK_LINE(672)
		this->whenKilledListeners = null();
		HX_STACK_LINE(673)
		this->mouseOverListeners = null();
		HX_STACK_LINE(674)
		this->positionListeners = null();
		HX_STACK_LINE(675)
		this->collisionListeners = null();
		HX_STACK_LINE(676)
		this->allListeners = null();
		HX_STACK_LINE(677)
		this->allListenerReferences = null();
		HX_STACK_LINE(679)
		this->positionListenerCount = (int)0;
		HX_STACK_LINE(680)
		this->collisionListenerCount = (int)0;
		HX_STACK_LINE(682)
		this->registry = null();
		HX_STACK_LINE(684)
		this->collisions = null();
		HX_STACK_LINE(685)
		this->simpleCollisions = null();
		HX_STACK_LINE(687)
		if (((this->bodyDef != null()))){
			HX_STACK_LINE(689)
			this->bodyDef->userData = null();
			HX_STACK_LINE(690)
			this->bodyDef = null();
		}
		HX_STACK_LINE(693)
		this->behaviors->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,destroy,(void))

int Actor_obj::GROUP_OFFSET;

Float Actor_obj::moveMultiplier;

::com::stencyl::models::Actor Actor_obj::lastCollided;

::box2D::collision::shapes::B2PolygonShape Actor_obj::createBox( Float width,Float height){
	HX_STACK_PUSH("Actor::createBox","com/stencyl/models/Actor.hx",872);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_LINE(873)
	::box2D::collision::shapes::B2PolygonShape boxShape = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(boxShape,"boxShape");
	HX_STACK_LINE(874)
	boxShape->setAsBox(::com::stencyl::Engine_obj::toPhysicalUnits((Float(width) / Float((int)2))),::com::stencyl::Engine_obj::toPhysicalUnits((Float(height) / Float((int)2))));
	HX_STACK_LINE(875)
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
	HX_MARK_MEMBER_NAME(maxMove,"maxMove");
	HX_MARK_MEMBER_NAME(minMove,"minMove");
	HX_MARK_MEMBER_NAME(moveYDistance,"moveYDistance");
	HX_MARK_MEMBER_NAME(moveXDistance,"moveXDistance");
	HX_MARK_MEMBER_NAME(drawY,"drawY");
	HX_MARK_MEMBER_NAME(drawX,"drawX");
	HX_MARK_MEMBER_NAME(firstMove,"firstMove");
	HX_MARK_MEMBER_NAME(smoothMove,"smoothMove");
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
	HX_VISIT_MEMBER_NAME(maxMove,"maxMove");
	HX_VISIT_MEMBER_NAME(minMove,"minMove");
	HX_VISIT_MEMBER_NAME(moveYDistance,"moveYDistance");
	HX_VISIT_MEMBER_NAME(moveXDistance,"moveXDistance");
	HX_VISIT_MEMBER_NAME(drawY,"drawY");
	HX_VISIT_MEMBER_NAME(drawX,"drawX");
	HX_VISIT_MEMBER_NAME(firstMove,"firstMove");
	HX_VISIT_MEMBER_NAME(smoothMove,"smoothMove");
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
		if (HX_FIELD_EQ(inName,"drawY") ) { return drawY; }
		if (HX_FIELD_EQ(inName,"drawX") ) { return drawX; }
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
		if (HX_FIELD_EQ(inName,"maxMove") ) { return maxMove; }
		if (HX_FIELD_EQ(inName,"minMove") ) { return minMove; }
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
		if (HX_FIELD_EQ(inName,"firstMove") ) { return firstMove; }
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
		if (HX_FIELD_EQ(inName,"smoothMove") ) { return smoothMove; }
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
		if (HX_FIELD_EQ(inName,"moveYDistance") ) { return moveYDistance; }
		if (HX_FIELD_EQ(inName,"moveXDistance") ) { return moveXDistance; }
		if (HX_FIELD_EQ(inName,"animsBackedUp") ) { return animsBackedUp; }
		if (HX_FIELD_EQ(inName,"currAnimation") ) { return currAnimation; }
		if (HX_FIELD_EQ(inName,"ignoreGravity") ) { return ignoreGravity; }
		if (HX_FIELD_EQ(inName,"fixedRotation") ) { return fixedRotation; }
		if (HX_FIELD_EQ(inName,"isLightweight") ) { return isLightweight; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"moveMultiplier") ) { return moveMultiplier; }
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
		if (HX_FIELD_EQ(inName,"enableSmoothMotion") ) { return enableSmoothMotion_dyn(); }
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
		if (HX_FIELD_EQ(inName,"drawY") ) { drawY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawX") ) { drawX=inValue.Cast< Float >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"maxMove") ) { maxMove=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minMove") ) { minMove=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layerID") ) { layerID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"groupID") ) { groupID=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"manifold") ) { manifold=inValue.Cast< ::box2D::collision::B2WorldManifold >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowAdd") ) { allowAdd=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contacts") ) { contacts=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"firstMove") ) { firstMove=inValue.Cast< bool >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"collisions") ) { collisions=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseState") ) { mouseState=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smoothMove") ) { smoothMove=inValue.Cast< bool >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"moveYDistance") ) { moveYDistance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moveXDistance") ) { moveXDistance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animsBackedUp") ) { animsBackedUp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currAnimation") ) { currAnimation=inValue.Cast< ::flash::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreGravity") ) { ignoreGravity=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixedRotation") ) { fixedRotation=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isLightweight") ) { isLightweight=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"moveMultiplier") ) { moveMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regionContacts") ) { regionContacts=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"simpleCollisions") ) { simpleCollisions=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
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
	outFields->push(HX_CSTRING("maxMove"));
	outFields->push(HX_CSTRING("minMove"));
	outFields->push(HX_CSTRING("moveYDistance"));
	outFields->push(HX_CSTRING("moveXDistance"));
	outFields->push(HX_CSTRING("drawY"));
	outFields->push(HX_CSTRING("drawX"));
	outFields->push(HX_CSTRING("firstMove"));
	outFields->push(HX_CSTRING("smoothMove"));
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
	HX_CSTRING("moveMultiplier"),
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
	HX_CSTRING("enableSmoothMotion"),
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
	HX_CSTRING("maxMove"),
	HX_CSTRING("minMove"),
	HX_CSTRING("moveYDistance"),
	HX_CSTRING("moveXDistance"),
	HX_CSTRING("drawY"),
	HX_CSTRING("drawX"),
	HX_CSTRING("firstMove"),
	HX_CSTRING("smoothMove"),
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
	HX_MARK_MEMBER_NAME(Actor_obj::moveMultiplier,"moveMultiplier");
	HX_MARK_MEMBER_NAME(Actor_obj::lastCollided,"lastCollided");
	HX_MARK_MEMBER_NAME(Actor_obj::manifold,"manifold");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Actor_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Actor_obj::GROUP_OFFSET,"GROUP_OFFSET");
	HX_VISIT_MEMBER_NAME(Actor_obj::moveMultiplier,"moveMultiplier");
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
	moveMultiplier= 0.33;
	manifold= ::box2D::collision::B2WorldManifold_obj::__new();
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
