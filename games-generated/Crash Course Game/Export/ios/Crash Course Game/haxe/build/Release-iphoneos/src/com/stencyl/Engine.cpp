#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_JoystickController
#include <JoystickController.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Purchases
#include <Purchases.h>
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
#ifndef INCLUDED_box2D_dynamics_B2DebugDraw
#include <box2D/dynamics/B2DebugDraw.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
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
#ifndef INCLUDED_box2D_dynamics_joints_B2DistanceJoint
#include <box2D/dynamics/joints/B2DistanceJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2DistanceJointDef
#include <box2D/dynamics/joints/B2DistanceJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2JointDef
#include <box2D/dynamics/joints/B2JointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2LineJoint
#include <box2D/dynamics/joints/B2LineJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2LineJointDef
#include <box2D/dynamics/joints/B2LineJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2RevoluteJoint
#include <box2D/dynamics/joints/B2RevoluteJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2RevoluteJointDef
#include <box2D/dynamics/joints/B2RevoluteJointDef.h>
#endif
#ifndef INCLUDED_com_nmefermmmtools_debug_Stats
#include <com/nmefermmmtools/debug/Stats.h>
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
#ifndef INCLUDED_com_stencyl_behavior_Attribute
#include <com/stencyl/behavior/Attribute.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Behavior
#include <com/stencyl/behavior/Behavior.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_BehaviorInstance
#include <com/stencyl/behavior/BehaviorInstance.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_BehaviorManager
#include <com/stencyl/behavior/BehaviorManager.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_TimedTask
#include <com/stencyl/behavior/TimedTask.h>
#endif
#ifndef INCLUDED_com_stencyl_event_EventMaster
#include <com/stencyl/event/EventMaster.h>
#endif
#ifndef INCLUDED_com_stencyl_event_NativeListener
#include <com/stencyl/event/NativeListener.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_G
#include <com/stencyl/graphics/G.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_FadeInTransition
#include <com/stencyl/graphics/transitions/FadeInTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_Transition
#include <com/stencyl/graphics/transitions/Transition.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Background
#include <com/stencyl/models/Background.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Font
#include <com/stencyl/models/Font.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GroupDef
#include <com/stencyl/models/GroupDef.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Region
#include <com/stencyl/models/Region.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Scene
#include <com/stencyl/models/Scene.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Sound
#include <com/stencyl/models/Sound.h>
#endif
#ifndef INCLUDED_com_stencyl_models_SoundChannel
#include <com/stencyl/models/SoundChannel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Terrain
#include <com/stencyl/models/Terrain.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Animation
#include <com/stencyl/models/actor/Animation.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Collision
#include <com/stencyl/models/actor/Collision.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Group
#include <com/stencyl/models/actor/Group.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Sprite
#include <com/stencyl/models/actor/Sprite.h>
#endif
#ifndef INCLUDED_com_stencyl_models_background_ImageBackground
#include <com/stencyl/models/background/ImageBackground.h>
#endif
#ifndef INCLUDED_com_stencyl_models_background_ScrollingBackground
#include <com/stencyl/models/background/ScrollingBackground.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_ActorInstance
#include <com/stencyl/models/scene/ActorInstance.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_DeferredActor
#include <com/stencyl/models/scene/DeferredActor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Layer
#include <com/stencyl/models/scene/Layer.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_RegionDef
#include <com/stencyl/models/scene/RegionDef.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_ScrollingBitmap
#include <com/stencyl/models/scene/ScrollingBitmap.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_TerrainDef
#include <com/stencyl/models/scene/TerrainDef.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Tile
#include <com/stencyl/models/scene/Tile.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_TileLayer
#include <com/stencyl/models/scene/TileLayer.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Wireframe
#include <com/stencyl/models/scene/Wireframe.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_layers_BackgroundLayer
#include <com/stencyl/models/scene/layers/BackgroundLayer.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_layers_RegularLayer
#include <com/stencyl/models/scene/layers/RegularLayer.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
#endif
#ifndef INCLUDED_cpp_vm_Gc
#include <cpp/vm/Gc.h>
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
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Shape
#include <flash/display/Shape.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
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
#ifndef INCLUDED_flash_media_SoundChannel
#include <flash/media/SoundChannel.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif
namespace com{
namespace stencyl{

Void Engine_obj::__construct(::flash::display::Sprite root)
{
HX_STACK_PUSH("Engine::new","com/stencyl/Engine.hx",103);
{
	HX_STACK_LINE(372)
	this->isFullScreen = false;
	HX_STACK_LINE(447)
	root->set_mouseChildren(false);
	HX_STACK_LINE(448)
	root->set_mouseEnabled(false);
	HX_STACK_LINE(451)
	if ((::scripts::MyAssets_obj::debugDraw)){
		HX_STACK_LINE(452)
		::com::stencyl::Engine_obj::DEBUG_DRAW = true;
	}
	HX_STACK_LINE(456)
	::com::stencyl::Engine_obj::engine = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(457)
	this->root = root;
	HX_STACK_LINE(459)
	::com::stencyl::Engine_obj::screenScaleX = root->get_scaleX();
	HX_STACK_LINE(460)
	::com::stencyl::Engine_obj::screenScaleY = root->get_scaleY();
	HX_STACK_LINE(461)
	::com::stencyl::Engine_obj::screenOffsetX = ::Std_obj::_int(root->get_x());
	HX_STACK_LINE(462)
	::com::stencyl::Engine_obj::screenOffsetY = ::Std_obj::_int(root->get_y());
	HX_STACK_LINE(464)
	::com::stencyl::Engine_obj::NO_PHYSICS = (::scripts::MyAssets_obj::physicsMode == (int)1);
	HX_STACK_LINE(466)
	::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->onUpdate_dyn(),null(),null(),null());
	HX_STACK_LINE(467)
	::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::Event_obj::DEACTIVATE,this->onFocusLost_dyn(),null(),null(),null());
	HX_STACK_LINE(468)
	::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::Event_obj::ACTIVATE,this->onFocus_dyn(),null(),null(),null());
	HX_STACK_LINE(469)
	this->begin(::scripts::MyAssets_obj::initSceneID);
}
;
	return null();
}

Engine_obj::~Engine_obj() { }

Dynamic Engine_obj::__CreateEmpty() { return  new Engine_obj; }
hx::ObjectPtr< Engine_obj > Engine_obj::__new(::flash::display::Sprite root)
{  hx::ObjectPtr< Engine_obj > result = new Engine_obj();
	result->__construct(root);
	return result;}

Dynamic Engine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Engine_obj > result = new Engine_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Engine_obj::setOffscreenTolerance( int top,int left,int bottom,int right){
{
		HX_STACK_PUSH("Engine::setOffscreenTolerance","com/stencyl/Engine.hx",3798);
		HX_STACK_THIS(this);
		HX_STACK_ARG(top,"top");
		HX_STACK_ARG(left,"left");
		HX_STACK_ARG(bottom,"bottom");
		HX_STACK_ARG(right,"right");
		HX_STACK_LINE(3799)
		::com::stencyl::Engine_obj::paddingTop = top;
		HX_STACK_LINE(3800)
		::com::stencyl::Engine_obj::paddingLeft = left;
		HX_STACK_LINE(3801)
		::com::stencyl::Engine_obj::paddingBottom = bottom;
		HX_STACK_LINE(3802)
		::com::stencyl::Engine_obj::paddingRight = right;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,setOffscreenTolerance,(void))

Dynamic Engine_obj::getGameAttribute( ::String name){
	HX_STACK_PUSH("Engine::getGameAttribute","com/stencyl/Engine.hx",3789);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(3789)
	return this->gameAttributes->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getGameAttribute,return )

Void Engine_obj::setGameAttribute( ::String name,Dynamic value){
{
		HX_STACK_PUSH("Engine::setGameAttribute","com/stencyl/Engine.hx",3784);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(3785)
		Dynamic value1 = value;		HX_STACK_VAR(value1,"value1");
		HX_STACK_LINE(3785)
		this->gameAttributes->set(name,value1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,setGameAttribute,(void))

int Engine_obj::nextTerrainRegionID( ){
	HX_STACK_PUSH("Engine::nextTerrainRegionID","com/stencyl/Engine.hx",3767);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3768)
	int ID = (int)-1;		HX_STACK_VAR(ID,"ID");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3770);
			{
				HX_STACK_LINE(3770)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->terrainRegions);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",3770);
					{
						HX_STACK_LINE(3770)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(3770)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(3770)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::Terrain > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Terrain >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::com::stencyl::models::Terrain r = __it->next();
		{
			HX_STACK_LINE(3772)
			if (((r == null()))){
				HX_STACK_LINE(3772)
				continue;
			}
			HX_STACK_LINE(3773)
			ID = ::Std_obj::_int(::Math_obj::max(ID,r->ID));
		}
;
	}
	HX_STACK_LINE(3776)
	return (ID + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,nextTerrainRegionID,return )

::haxe::ds::IntMap Engine_obj::getTerrainRegions( ){
	HX_STACK_PUSH("Engine::getTerrainRegions","com/stencyl/Engine.hx",3762);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3762)
	return this->terrainRegions;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getTerrainRegions,return )

::com::stencyl::models::Terrain Engine_obj::getTerrainRegion( int ID){
	HX_STACK_PUSH("Engine::getTerrainRegion","com/stencyl/Engine.hx",3757);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_LINE(3757)
	return this->terrainRegions->get(ID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getTerrainRegion,return )

Void Engine_obj::removeTerrainRegion( int ID){
{
		HX_STACK_PUSH("Engine::removeTerrainRegion","com/stencyl/Engine.hx",3750);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ID,"ID");
		HX_STACK_LINE(3751)
		::com::stencyl::models::Terrain t = this->getTerrainRegion(ID);		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(3752)
		this->terrainRegions->remove(ID);
		HX_STACK_LINE(3753)
		t->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,removeTerrainRegion,(void))

Void Engine_obj::addTerrainRegion( ::com::stencyl::models::Terrain r){
{
		HX_STACK_PUSH("Engine::addTerrainRegion","com/stencyl/Engine.hx",3743);
		HX_STACK_THIS(this);
		HX_STACK_ARG(r,"r");
		HX_STACK_LINE(3744)
		int nextID = this->nextTerrainRegionID();		HX_STACK_VAR(nextID,"nextID");
		HX_STACK_LINE(3745)
		r->ID = nextID;
		HX_STACK_LINE(3746)
		this->terrainRegions->set(nextID,r);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,addTerrainRegion,(void))

::com::stencyl::models::Terrain Engine_obj::createCircularTerrainRegion( Float x,Float y,Float r,hx::Null< int >  __o_groupID){
int groupID = __o_groupID.Default(1);
	HX_STACK_PUSH("Engine::createCircularTerrainRegion","com/stencyl/Engine.hx",3731);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(groupID,"groupID");
{
		HX_STACK_LINE(3732)
		x = ::com::stencyl::Engine_obj::toPhysicalUnits(x);
		HX_STACK_LINE(3733)
		y = ::com::stencyl::Engine_obj::toPhysicalUnits(y);
		HX_STACK_LINE(3734)
		r = ::com::stencyl::Engine_obj::toPhysicalUnits(r);
		HX_STACK_LINE(3736)
		::box2D::collision::shapes::B2CircleShape cShape = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());		HX_STACK_VAR(cShape,"cShape");
		HX_STACK_LINE(3737)
		cShape->m_radius = r;
		HX_STACK_LINE(3739)
		return this->createTerrainRegion(x,y,cShape,true,groupID);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,createCircularTerrainRegion,return )

::com::stencyl::models::Terrain Engine_obj::createBoxTerrainRegion( Float x,Float y,Float w,Float h,hx::Null< int >  __o_groupID){
int groupID = __o_groupID.Default(1);
	HX_STACK_PUSH("Engine::createBoxTerrainRegion","com/stencyl/Engine.hx",3718);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(w,"w");
	HX_STACK_ARG(h,"h");
	HX_STACK_ARG(groupID,"groupID");
{
		HX_STACK_LINE(3719)
		x = ::com::stencyl::Engine_obj::toPhysicalUnits(x);
		HX_STACK_LINE(3720)
		y = ::com::stencyl::Engine_obj::toPhysicalUnits(y);
		HX_STACK_LINE(3721)
		w = ::com::stencyl::Engine_obj::toPhysicalUnits(w);
		HX_STACK_LINE(3722)
		h = ::com::stencyl::Engine_obj::toPhysicalUnits(h);
		HX_STACK_LINE(3724)
		::box2D::collision::shapes::B2PolygonShape p = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(3725)
		p->setAsBox((Float(w) / Float((int)2)),(Float(h) / Float((int)2)));
		HX_STACK_LINE(3727)
		return this->createTerrainRegion(x,y,p,true,groupID);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Engine_obj,createBoxTerrainRegion,return )

::com::stencyl::models::Terrain Engine_obj::createTerrainRegion( Float x,Float y,::box2D::collision::shapes::B2Shape shape,hx::Null< bool >  __o_offset,hx::Null< int >  __o_groupID){
bool offset = __o_offset.Default(false);
int groupID = __o_groupID.Default(1);
	HX_STACK_PUSH("Engine::createTerrainRegion","com/stencyl/Engine.hx",3702);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(shape,"shape");
	HX_STACK_ARG(offset,"offset");
	HX_STACK_ARG(groupID,"groupID");
{
		HX_STACK_LINE(3703)
		Array< ::Dynamic > shapeList = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(shapeList,"shapeList");
		HX_STACK_LINE(3704)
		shapeList->push(shape);
		HX_STACK_LINE(3705)
		::com::stencyl::models::Terrain region = ::com::stencyl::models::Terrain_obj::__new(hx::ObjectPtr<OBJ_>(this),x,y,shapeList,groupID,null());		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(3707)
		if ((offset)){
			HX_STACK_LINE(3709)
			region->setX((::com::stencyl::Engine_obj::toPixelUnits(x) + (Float(region->regionWidth) / Float((int)2))),null(),null());
			HX_STACK_LINE(3710)
			region->setY((::com::stencyl::Engine_obj::toPixelUnits(y) + (Float(region->regionHeight) / Float((int)2))),null(),null());
		}
		HX_STACK_LINE(3713)
		this->addTerrainRegion(region);
		HX_STACK_LINE(3714)
		return region;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Engine_obj,createTerrainRegion,return )

bool Engine_obj::isInRegion( ::com::stencyl::models::Actor a,::com::stencyl::models::Region r){
	HX_STACK_PUSH("Engine::isInRegion","com/stencyl/Engine.hx",3684);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(r,"r");
	struct _Function_1_1{
		inline static ::com::stencyl::models::Region Block( ::com::stencyl::Engine_obj *__this,::com::stencyl::models::Region &r){
			HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3685);
			{
				HX_STACK_LINE(3685)
				::de::polygonal::ds::IntHashTable _this = __this->regions;		HX_STACK_VAR(_this,"_this");
				int key = r->getID();		HX_STACK_VAR(key,"key");
				struct _Function_2_1{
					inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3685);
						{
							HX_STACK_LINE(3685)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(3685)
							int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
							struct _Function_3_1{
								inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3685);
									{
										HX_STACK_LINE(3685)
										int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(3685)
										i = _this1->_data->__get((i + (int)2));
										HX_STACK_LINE(3685)
										while(((i != (int)-1))){
											HX_STACK_LINE(3685)
											if (((_this1->_data->__get(i) == key))){
												HX_STACK_LINE(3685)
												v = _this1->_data->__get((i + (int)1));
												HX_STACK_LINE(3685)
												break;
											}
											HX_STACK_LINE(3685)
											i = _this1->_data->__get((i + (int)2));
										}
										HX_STACK_LINE(3685)
										return v;
									}
									return null();
								}
							};
							HX_STACK_LINE(3685)
							return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,key)) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(3685)
				int i = _Function_2_1::Block(_this,key);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(3685)
				return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::Region(null()) : ::com::stencyl::models::Region(_this->_vals->__GetItem(i)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(3684)
	if (((bool((r != null())) && bool((_Function_1_1::Block(this,r) != null()))))){
		HX_STACK_LINE(3686)
		return r->containsActor(a);
	}
	else{
		HX_STACK_LINE(3692)
		::haxe::Log_obj::trace(HX_CSTRING("Region does not exist."),hx::SourceInfo(HX_CSTRING("Engine.hx"),3692,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("isInRegion")));
		HX_STACK_LINE(3693)
		return false;
	}
	HX_STACK_LINE(3684)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,isInRegion,return )

int Engine_obj::nextRegionID( ){
	HX_STACK_PUSH("Engine::nextRegionID","com/stencyl/Engine.hx",3667);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3668)
	int ID = (int)-1;		HX_STACK_VAR(ID,"ID");
	HX_STACK_LINE(3670)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::Region > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Region >(this->regions->iterator());  __it->hasNext(); ){
		::com::stencyl::models::Region r = __it->next();
		{
			HX_STACK_LINE(3672)
			if (((r == null()))){
				HX_STACK_LINE(3673)
				continue;
			}
			HX_STACK_LINE(3677)
			ID = ::Std_obj::_int(::Math_obj::max(ID,r->ID));
		}
;
	}
	HX_STACK_LINE(3680)
	return (ID + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,nextRegionID,return )

::de::polygonal::ds::IntHashTable Engine_obj::getRegions( ){
	HX_STACK_PUSH("Engine::getRegions","com/stencyl/Engine.hx",3662);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3662)
	return this->regions;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getRegions,return )

::com::stencyl::models::Region Engine_obj::getRegion( int ID){
	HX_STACK_PUSH("Engine::getRegion","com/stencyl/Engine.hx",3657);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	struct _Function_1_1{
		inline static ::com::stencyl::models::Region Block( ::com::stencyl::Engine_obj *__this,int &ID){
			HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3658);
			{
				HX_STACK_LINE(3658)
				::de::polygonal::ds::IntHashTable _this = __this->regions;		HX_STACK_VAR(_this,"_this");
				struct _Function_2_1{
					inline static int Block( int &ID,::de::polygonal::ds::IntHashTable _this){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3658);
						{
							HX_STACK_LINE(3658)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(3658)
							int i = _this1->_hash->__get((int((ID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
							struct _Function_3_1{
								inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &ID){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3658);
									{
										HX_STACK_LINE(3658)
										int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(3658)
										i = _this1->_data->__get((i + (int)2));
										HX_STACK_LINE(3658)
										while(((i != (int)-1))){
											HX_STACK_LINE(3658)
											if (((_this1->_data->__get(i) == ID))){
												HX_STACK_LINE(3658)
												v = _this1->_data->__get((i + (int)1));
												HX_STACK_LINE(3658)
												break;
											}
											HX_STACK_LINE(3658)
											i = _this1->_data->__get((i + (int)2));
										}
										HX_STACK_LINE(3658)
										return v;
									}
									return null();
								}
							};
							HX_STACK_LINE(3658)
							return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == ID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,ID)) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(3658)
				int i = _Function_2_1::Block(ID,_this);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(3658)
				return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::Region(null()) : ::com::stencyl::models::Region(_this->_vals->__GetItem(i)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(3657)
	return _Function_1_1::Block(this,ID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getRegion,return )

Void Engine_obj::removeRegion( int ID){
{
		HX_STACK_PUSH("Engine::removeRegion","com/stencyl/Engine.hx",3645);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ID,"ID");
		HX_STACK_LINE(3646)
		::com::stencyl::models::Region r = this->getRegion(ID);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(3647)
		{
			HX_STACK_LINE(3647)
			::de::polygonal::ds::IntHashTable _this = this->regions;		HX_STACK_VAR(_this,"_this");
			int key = r->ID;		HX_STACK_VAR(key,"key");
			struct _Function_2_1{
				inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3647);
					{
						HX_STACK_LINE(3647)
						::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(3647)
						int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
						struct _Function_3_1{
							inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3647);
								{
									HX_STACK_LINE(3647)
									int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(3647)
									i = _this1->_data->__get((i + (int)2));
									HX_STACK_LINE(3647)
									while(((i != (int)-1))){
										HX_STACK_LINE(3647)
										if (((_this1->_data->__get(i) == key))){
											HX_STACK_LINE(3647)
											v = _this1->_data->__get((i + (int)1));
											HX_STACK_LINE(3647)
											break;
										}
										HX_STACK_LINE(3647)
										i = _this1->_data->__get((i + (int)2));
									}
									HX_STACK_LINE(3647)
									return v;
								}
								return null();
							}
						};
						HX_STACK_LINE(3647)
						return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,key)) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(3647)
			int i = _Function_2_1::Block(_this,key);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(3647)
			if (((i == (int)-2147483647))){
				HX_STACK_LINE(3647)
				false;
			}
			else{
				HX_STACK_LINE(3647)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(3647)
				hx::IndexRef((_this->_vals).mPtr,i) = null();
				HX_STACK_LINE(3647)
				_this->_keys[i] = (int)-2147483647;
				HX_STACK_LINE(3647)
				_this->_next[i] = _this->_free;
				HX_STACK_LINE(3647)
				_this->_free = i;
				HX_STACK_LINE(3647)
				bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
				HX_STACK_LINE(3647)
				if (((_this->_sizeLevel > (int)0))){
					HX_STACK_LINE(3647)
					if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
						HX_STACK_LINE(3647)
						if ((_this->_isResizable)){
							HX_STACK_LINE(3647)
							shrink = true;
						}
					}
				}
				HX_STACK_LINE(3647)
				{
					HX_STACK_LINE(3647)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(3647)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(3647)
					int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(3647)
					if (((i1 == (int)-1))){
						HX_STACK_LINE(3647)
						false;
					}
					else{
						HX_STACK_LINE(3647)
						if (((key == _this1->_data->__get(i1)))){
							HX_STACK_LINE(3647)
							if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
								HX_STACK_LINE(3647)
								_this1->_hash[b] = (int)-1;
							}
							else{
								HX_STACK_LINE(3647)
								_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
							}
							HX_STACK_LINE(3647)
							int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(3647)
							_this1->_next[j] = _this1->_free;
							HX_STACK_LINE(3647)
							_this1->_free = j;
							HX_STACK_LINE(3647)
							_this1->_data[(i1 + (int)1)] = (int)-2147483647;
							HX_STACK_LINE(3647)
							_this1->_data[(i1 + (int)2)] = (int)-1;
							HX_STACK_LINE(3647)
							(_this1->_size)--;
							HX_STACK_LINE(3647)
							if (((_this1->_sizeLevel > (int)0))){
								HX_STACK_LINE(3647)
								if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
									HX_STACK_LINE(3647)
									if ((_this1->_isResizable)){
										HX_STACK_LINE(3647)
										_this1->_shrink();
									}
								}
							}
							HX_STACK_LINE(3647)
							true;
						}
						else{
							HX_STACK_LINE(3647)
							bool exists = false;		HX_STACK_VAR(exists,"exists");
							HX_STACK_LINE(3647)
							int i0 = i1;		HX_STACK_VAR(i0,"i0");
							HX_STACK_LINE(3647)
							i1 = _this1->_data->__get((i1 + (int)2));
							HX_STACK_LINE(3647)
							while(((i1 != (int)-1))){
								HX_STACK_LINE(3647)
								if (((_this1->_data->__get(i1) == key))){
									HX_STACK_LINE(3647)
									exists = true;
									HX_STACK_LINE(3647)
									break;
								}
								HX_STACK_LINE(3647)
								i1 = _this1->_data->__get(((i0 = i1) + (int)2));
							}
							HX_STACK_LINE(3647)
							if ((exists)){
								HX_STACK_LINE(3647)
								_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
								HX_STACK_LINE(3647)
								int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(3647)
								_this1->_next[j] = _this1->_free;
								HX_STACK_LINE(3647)
								_this1->_free = j;
								HX_STACK_LINE(3647)
								_this1->_data[(i1 + (int)1)] = (int)-2147483647;
								HX_STACK_LINE(3647)
								_this1->_data[(i1 + (int)2)] = (int)-1;
								HX_STACK_LINE(3647)
								--(_this1->_size);
								HX_STACK_LINE(3647)
								if (((_this1->_sizeLevel > (int)0))){
									HX_STACK_LINE(3647)
									if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
										HX_STACK_LINE(3647)
										if ((_this1->_isResizable)){
											HX_STACK_LINE(3647)
											_this1->_shrink();
										}
									}
								}
								HX_STACK_LINE(3647)
								true;
							}
							else{
								HX_STACK_LINE(3647)
								false;
							}
						}
					}
				}
				HX_STACK_LINE(3647)
				if ((shrink)){
					HX_STACK_LINE(3647)
					(_this->_sizeLevel)--;
					HX_STACK_LINE(3647)
					int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(3647)
					int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3647);
							{
								HX_STACK_LINE(3647)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(3647)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(3647)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(3647)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(3647)
					_this->_next = _Function_4_1::Block(newSize);
					HX_STACK_LINE(3647)
					{
						HX_STACK_LINE(3647)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(3647)
						while(((_g1 < _g))){
							HX_STACK_LINE(3647)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(3647)
							_this->_next[i1] = (i1 + (int)1);
						}
					}
					HX_STACK_LINE(3647)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(3647)
					_this->_free = (int)0;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3647);
							{
								HX_STACK_LINE(3647)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(3647)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(3647)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(3647)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(3647)
					Array< int > tmpKeys = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
					HX_STACK_LINE(3647)
					{
						HX_STACK_LINE(3647)
						int k = newSize;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(3647)
						if (((k == (int)-1))){
							HX_STACK_LINE(3647)
							k = tmpKeys->length;
						}
						HX_STACK_LINE(3647)
						{
							HX_STACK_LINE(3647)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(3647)
							while(((_g < k))){
								HX_STACK_LINE(3647)
								int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(3647)
								tmpKeys[i1] = (int)-2147483647;
							}
						}
					}
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3647);
							{
								HX_STACK_LINE(3647)
								Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(3647)
								a = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(3647)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(3647)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(3647)
					Array< ::Dynamic > tmpVals = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
					HX_STACK_LINE(3647)
					for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
						int i1 = __it->next();
						{
							HX_STACK_LINE(3647)
							tmpKeys[_this->_free] = _this->_keys->__get(i1);
							HX_STACK_LINE(3647)
							tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
							HX_STACK_LINE(3647)
							_this->_free = _this->_next->__get(_this->_free);
						}
;
					}
					HX_STACK_LINE(3647)
					_this->_keys = tmpKeys;
					HX_STACK_LINE(3647)
					_this->_vals = tmpVals;
					HX_STACK_LINE(3647)
					{
						HX_STACK_LINE(3647)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(3647)
						while(((_g1 < _g))){
							HX_STACK_LINE(3647)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(3647)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
							HX_STACK_LINE(3647)
							int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
							HX_STACK_LINE(3647)
							if (((i2 == (int)-1))){
								HX_STACK_LINE(3647)
								false;
							}
							else{
								HX_STACK_LINE(3647)
								if (((_this1->_data->__get(i2) == key1))){
									HX_STACK_LINE(3647)
									_this1->_data[(i2 + (int)1)] = i1;
									HX_STACK_LINE(3647)
									true;
								}
								else{
									HX_STACK_LINE(3647)
									i2 = _this1->_data->__get((i2 + (int)2));
									HX_STACK_LINE(3647)
									while(((i2 != (int)-1))){
										HX_STACK_LINE(3647)
										if (((_this1->_data->__get(i2) == key1))){
											HX_STACK_LINE(3647)
											_this1->_data[(i2 + (int)1)] = i1;
											HX_STACK_LINE(3647)
											break;
										}
										HX_STACK_LINE(3647)
										i2 = _this1->_data->__get((i2 + (int)2));
									}
									HX_STACK_LINE(3647)
									(i2 != (int)-1);
								}
							}
						}
					}
				}
				HX_STACK_LINE(3647)
				true;
			}
		}
		HX_STACK_LINE(3648)
		r->destroy();
		HX_STACK_LINE(3650)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(3651)
			this->groups->get(::com::stencyl::models::GameModel_obj::REGION_ID)->__Field(HX_CSTRING("removeChild"),true)(r);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,removeRegion,(void))

Void Engine_obj::addRegion( ::com::stencyl::models::Region r){
{
		HX_STACK_PUSH("Engine::addRegion","com/stencyl/Engine.hx",3633);
		HX_STACK_THIS(this);
		HX_STACK_ARG(r,"r");
		HX_STACK_LINE(3634)
		int nextID = this->nextRegionID();		HX_STACK_VAR(nextID,"nextID");
		HX_STACK_LINE(3635)
		r->ID = nextID;
		HX_STACK_LINE(3636)
		{
			HX_STACK_LINE(3636)
			::de::polygonal::ds::IntHashTable _this = this->regions;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(3636)
			_this->_key0 = (int)-2147483647;
			HX_STACK_LINE(3636)
			if (((_this->_h->_size == _this->_h->_capacity))){
				HX_STACK_LINE(3636)
				int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
				HX_STACK_LINE(3636)
				int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
				struct _Function_3_1{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3636);
						{
							HX_STACK_LINE(3636)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(3636)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(3636)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(3636)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(3636)
				Array< int > tmp = _Function_3_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(3636)
				{
					HX_STACK_LINE(3636)
					Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(3636)
					if (((max == (int)-1))){
						HX_STACK_LINE(3636)
						max = src->length;
					}
					HX_STACK_LINE(3636)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(3636)
					{
						HX_STACK_LINE(3636)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(3636)
						while(((_g < max))){
							HX_STACK_LINE(3636)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(3636)
							tmp[(j)++] = src->__get(i);
						}
					}
					HX_STACK_LINE(3636)
					tmp;
				}
				HX_STACK_LINE(3636)
				_this->_next = tmp;
				struct _Function_3_2{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3636);
						{
							HX_STACK_LINE(3636)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(3636)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(3636)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(3636)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(3636)
				Array< int > tmp1 = _Function_3_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(3636)
				{
					HX_STACK_LINE(3636)
					Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(3636)
					if (((max == (int)-1))){
						HX_STACK_LINE(3636)
						max = src->length;
					}
					HX_STACK_LINE(3636)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(3636)
					{
						HX_STACK_LINE(3636)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(3636)
						while(((_g < max))){
							HX_STACK_LINE(3636)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(3636)
							tmp1[(j)++] = src->__get(i);
						}
					}
					HX_STACK_LINE(3636)
					tmp1;
				}
				HX_STACK_LINE(3636)
				_this->_keys = tmp1;
				HX_STACK_LINE(3636)
				{
					HX_STACK_LINE(3636)
					int _g = oldSize;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(3636)
					while(((_g < newSize))){
						HX_STACK_LINE(3636)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(3636)
						_this->_keys[i] = (int)-2147483647;
					}
				}
				HX_STACK_LINE(3636)
				{
					HX_STACK_LINE(3636)
					int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
					int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(3636)
					while(((_g1 < _g))){
						HX_STACK_LINE(3636)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(3636)
						_this->_next[i] = (i + (int)1);
					}
				}
				HX_STACK_LINE(3636)
				_this->_next[(newSize - (int)1)] = (int)-1;
				HX_STACK_LINE(3636)
				_this->_free = oldSize;
				struct _Function_3_3{
					inline static Array< ::Dynamic > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3636);
						{
							HX_STACK_LINE(3636)
							Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(3636)
							a = Array_obj< ::Dynamic >::__new();
							HX_STACK_LINE(3636)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(3636)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(3636)
				Array< ::Dynamic > tmp2 = _Function_3_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3636)
				{
					HX_STACK_LINE(3636)
					Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(3636)
					if (((max == (int)-1))){
						HX_STACK_LINE(3636)
						max = src->length;
					}
					HX_STACK_LINE(3636)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(3636)
					{
						HX_STACK_LINE(3636)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(3636)
						while(((_g < max))){
							HX_STACK_LINE(3636)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(3636)
							tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::Region >();
						}
					}
					HX_STACK_LINE(3636)
					tmp2;
				}
				HX_STACK_LINE(3636)
				_this->_vals = tmp2;
				HX_STACK_LINE(3636)
				(_this->_sizeLevel)++;
			}
			HX_STACK_LINE(3636)
			{
				HX_STACK_LINE(3636)
				::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(3636)
				if (((_this1->_size == _this1->_capacity))){
					HX_STACK_LINE(3636)
					if ((_this1->_isResizable)){
						HX_STACK_LINE(3636)
						_this1->_expand();
					}
				}
				HX_STACK_LINE(3636)
				int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(3636)
				_this1->_free = _this1->_next->__get(_this1->_free);
				HX_STACK_LINE(3636)
				_this1->_data[i] = nextID;
				HX_STACK_LINE(3636)
				_this1->_data[(i + (int)1)] = _this->_free;
				HX_STACK_LINE(3636)
				int b = (int((nextID * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(3636)
				int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(3636)
				if (((j == (int)-1))){
					HX_STACK_LINE(3636)
					_this1->_hash[b] = i;
					HX_STACK_LINE(3636)
					(_this1->_size)++;
					HX_STACK_LINE(3636)
					true;
				}
				else{
					HX_STACK_LINE(3636)
					bool first = (_this1->_data->__get(j) != nextID);		HX_STACK_VAR(first,"first");
					HX_STACK_LINE(3636)
					int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(3636)
					while(((t != (int)-1))){
						HX_STACK_LINE(3636)
						if (((_this1->_data->__get(t) == nextID))){
							HX_STACK_LINE(3636)
							first = false;
						}
						HX_STACK_LINE(3636)
						j = t;
						HX_STACK_LINE(3636)
						t = _this1->_data->__get((t + (int)2));
					}
					HX_STACK_LINE(3636)
					_this1->_data[(j + (int)2)] = i;
					HX_STACK_LINE(3636)
					(_this1->_size)++;
					HX_STACK_LINE(3636)
					first;
				}
			}
			HX_STACK_LINE(3636)
			hx::IndexRef((_this->_vals).mPtr,_this->_free) = r;
			HX_STACK_LINE(3636)
			_this->_keys[_this->_free] = nextID;
			HX_STACK_LINE(3636)
			_this->_free = _this->_next->__get(_this->_free);
			HX_STACK_LINE(3636)
			true;
		}
		HX_STACK_LINE(3638)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(3639)
			this->groups->get(::com::stencyl::models::GameModel_obj::REGION_ID)->__Field(HX_CSTRING("addChild"),true)(r);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,addRegion,(void))

::com::stencyl::models::Region Engine_obj::createCircularRegion( Float x,Float y,Float r){
	HX_STACK_PUSH("Engine::createCircularRegion","com/stencyl/Engine.hx",3612);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(r,"r");
	HX_STACK_LINE(3613)
	x = ::com::stencyl::Engine_obj::toPhysicalUnits(x);
	HX_STACK_LINE(3614)
	y = ::com::stencyl::Engine_obj::toPhysicalUnits(y);
	HX_STACK_LINE(3615)
	r = ::com::stencyl::Engine_obj::toPhysicalUnits(r);
	HX_STACK_LINE(3617)
	if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
		HX_STACK_LINE(3619)
		::com::stencyl::models::Region region = ::com::stencyl::models::Region_obj::__new(hx::ObjectPtr<OBJ_>(this),x,y,Array_obj< ::Dynamic >::__new(),::flash::geom::Rectangle_obj::__new((int)0,(int)0,(r * (int)2),(r * (int)2)));		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(3620)
		this->addRegion(region);
		HX_STACK_LINE(3621)
		return region;
	}
	else{
		HX_STACK_LINE(3626)
		::box2D::collision::shapes::B2CircleShape cShape = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());		HX_STACK_VAR(cShape,"cShape");
		HX_STACK_LINE(3627)
		cShape->m_radius = r;
		HX_STACK_LINE(3628)
		return this->createRegion(x,y,cShape,true);
	}
	HX_STACK_LINE(3617)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,createCircularRegion,return )

::com::stencyl::models::Region Engine_obj::createBoxRegion( Float x,Float y,Float w,Float h){
	HX_STACK_PUSH("Engine::createBoxRegion","com/stencyl/Engine.hx",3590);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(w,"w");
	HX_STACK_ARG(h,"h");
	HX_STACK_LINE(3591)
	x = ::com::stencyl::Engine_obj::toPhysicalUnits(x);
	HX_STACK_LINE(3592)
	y = ::com::stencyl::Engine_obj::toPhysicalUnits(y);
	HX_STACK_LINE(3593)
	w = ::com::stencyl::Engine_obj::toPhysicalUnits(w);
	HX_STACK_LINE(3594)
	h = ::com::stencyl::Engine_obj::toPhysicalUnits(h);
	HX_STACK_LINE(3596)
	if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
		HX_STACK_LINE(3598)
		::com::stencyl::models::Region region = ::com::stencyl::models::Region_obj::__new(hx::ObjectPtr<OBJ_>(this),x,y,Array_obj< ::Dynamic >::__new(),::flash::geom::Rectangle_obj::__new((int)0,(int)0,w,h));		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(3599)
		this->addRegion(region);
		HX_STACK_LINE(3600)
		return region;
	}
	else{
		HX_STACK_LINE(3605)
		::box2D::collision::shapes::B2PolygonShape p = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(3606)
		p->setAsBox((Float(w) / Float((int)2)),(Float(h) / Float((int)2)));
		HX_STACK_LINE(3607)
		return this->createRegion(x,y,p,true);
	}
	HX_STACK_LINE(3596)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,createBoxRegion,return )

::com::stencyl::models::Region Engine_obj::createRegion( Float x,Float y,::box2D::collision::shapes::B2Shape shape,hx::Null< bool >  __o_offset){
bool offset = __o_offset.Default(false);
	HX_STACK_PUSH("Engine::createRegion","com/stencyl/Engine.hx",3574);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(shape,"shape");
	HX_STACK_ARG(offset,"offset");
{
		HX_STACK_LINE(3575)
		Array< ::Dynamic > shapeList = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(shapeList,"shapeList");
		HX_STACK_LINE(3576)
		shapeList->push(shape);
		HX_STACK_LINE(3577)
		::com::stencyl::models::Region region = ::com::stencyl::models::Region_obj::__new(hx::ObjectPtr<OBJ_>(this),x,y,shapeList,null());		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(3579)
		if ((offset)){
			HX_STACK_LINE(3581)
			region->setX((::com::stencyl::Engine_obj::toPixelUnits(x) + (Float(region->regionWidth) / Float((int)2))),null(),null());
			HX_STACK_LINE(3582)
			region->setY((::com::stencyl::Engine_obj::toPixelUnits(y) + (Float(region->regionHeight) / Float((int)2))),null(),null());
		}
		HX_STACK_LINE(3585)
		this->addRegion(region);
		HX_STACK_LINE(3586)
		return region;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,createRegion,return )

::box2D::dynamics::joints::B2LineJoint Engine_obj::createSlidingJoint( ::box2D::dynamics::B2Body one,::box2D::dynamics::B2Body two,::box2D::common::math::B2Vec2 dir,hx::Null< int >  __o_jointID,hx::Null< bool >  __o_collide,hx::Null< bool >  __o_limit,hx::Null< bool >  __o_motor,hx::Null< Float >  __o_lower,hx::Null< Float >  __o_upper,hx::Null< Float >  __o_force,hx::Null< Float >  __o_speed){
int jointID = __o_jointID.Default(-1);
bool collide = __o_collide.Default(false);
bool limit = __o_limit.Default(false);
bool motor = __o_motor.Default(false);
Float lower = __o_lower.Default(0);
Float upper = __o_upper.Default(0);
Float force = __o_force.Default(0);
Float speed = __o_speed.Default(0);
	HX_STACK_PUSH("Engine::createSlidingJoint","com/stencyl/Engine.hx",3505);
	HX_STACK_THIS(this);
	HX_STACK_ARG(one,"one");
	HX_STACK_ARG(two,"two");
	HX_STACK_ARG(dir,"dir");
	HX_STACK_ARG(jointID,"jointID");
	HX_STACK_ARG(collide,"collide");
	HX_STACK_ARG(limit,"limit");
	HX_STACK_ARG(motor,"motor");
	HX_STACK_ARG(lower,"lower");
	HX_STACK_ARG(upper,"upper");
	HX_STACK_ARG(force,"force");
	HX_STACK_ARG(speed,"speed");
{
		HX_STACK_LINE(3506)
		if (((two == null()))){
			HX_STACK_LINE(3507)
			two = this->world->m_groundBody;
		}
		HX_STACK_LINE(3511)
		if (((dir == null()))){
			HX_STACK_LINE(3512)
			dir = ::box2D::common::math::B2Vec2_obj::__new((int)1,(int)0);
		}
		HX_STACK_LINE(3516)
		dir->normalize();
		HX_STACK_LINE(3518)
		::box2D::common::math::B2Vec2 pt1 = one->getWorldCenter();		HX_STACK_VAR(pt1,"pt1");
		HX_STACK_LINE(3519)
		::box2D::common::math::B2Vec2 pt2 = two->getWorldCenter();		HX_STACK_VAR(pt2,"pt2");
		HX_STACK_LINE(3522)
		if (((one->getType() == (int)0))){
			HX_STACK_LINE(3523)
			if (((hx::TCast< com::stencyl::models::Actor >::cast(one->getUserData()) != null()))){
				HX_STACK_LINE(3526)
				pt1->x = (Float((hx::TCast< com::stencyl::models::Actor >::cast(one->getUserData()))->getPhysicsWidth()) / Float((int)2));
				HX_STACK_LINE(3527)
				pt1->y = (Float((hx::TCast< com::stencyl::models::Actor >::cast(one->getUserData()))->getPhysicsHeight()) / Float((int)2));
				HX_STACK_LINE(3528)
				pt1 = one->getWorldPoint(pt1);
			}
		}
		HX_STACK_LINE(3532)
		if (((two->getType() == (int)0))){
			HX_STACK_LINE(3533)
			if (((hx::TCast< com::stencyl::models::Actor >::cast(two->getUserData()) != null()))){
				HX_STACK_LINE(3536)
				pt2->x = (Float((hx::TCast< com::stencyl::models::Actor >::cast(two->getUserData()))->getPhysicsWidth()) / Float((int)2));
				HX_STACK_LINE(3537)
				pt2->y = (Float((hx::TCast< com::stencyl::models::Actor >::cast(two->getUserData()))->getPhysicsHeight()) / Float((int)2));
				HX_STACK_LINE(3538)
				pt2 = two->getWorldPoint(pt2);
			}
		}
		HX_STACK_LINE(3542)
		::box2D::dynamics::joints::B2LineJointDef pjd = ::box2D::dynamics::joints::B2LineJointDef_obj::__new();		HX_STACK_VAR(pjd,"pjd");
		HX_STACK_LINE(3543)
		pjd->initialize(one,two,pt1,dir);
		HX_STACK_LINE(3545)
		pjd->collideConnected = collide;
		HX_STACK_LINE(3546)
		pjd->enableLimit = limit;
		HX_STACK_LINE(3547)
		pjd->enableMotor = motor;
		HX_STACK_LINE(3548)
		pjd->lowerTranslation = ::com::stencyl::Engine_obj::toPhysicalUnits(lower);
		HX_STACK_LINE(3549)
		pjd->upperTranslation = ::com::stencyl::Engine_obj::toPhysicalUnits(upper);
		HX_STACK_LINE(3550)
		pjd->maxMotorForce = force;
		HX_STACK_LINE(3551)
		pjd->motorSpeed = ::com::stencyl::Engine_obj::toPhysicalUnits(speed);
		HX_STACK_LINE(3553)
		::box2D::dynamics::joints::B2Joint toReturn = this->world->createJoint(pjd);		HX_STACK_VAR(toReturn,"toReturn");
		HX_STACK_LINE(3555)
		if (((jointID == (int)-1))){
			HX_STACK_LINE(3556)
			this->addJoint(toReturn);
		}
		else{
			HX_STACK_LINE(3562)
			this->joints->set(jointID,toReturn);
			HX_STACK_LINE(3563)
			toReturn->ID = jointID;
		}
		HX_STACK_LINE(3566)
		return hx::TCast< box2D::dynamics::joints::B2LineJoint >::cast(toReturn);
	}
}


HX_DEFINE_DYNAMIC_FUNC11(Engine_obj,createSlidingJoint,return )

::box2D::dynamics::joints::B2RevoluteJoint Engine_obj::createHingeJoint( ::box2D::dynamics::B2Body one,::box2D::dynamics::B2Body two,::box2D::common::math::B2Vec2 pt,hx::Null< int >  __o_jointID,hx::Null< bool >  __o_collide,hx::Null< bool >  __o_limit,hx::Null< bool >  __o_motor,hx::Null< Float >  __o_lower,hx::Null< Float >  __o_upper,hx::Null< Float >  __o_torque,hx::Null< Float >  __o_speed){
int jointID = __o_jointID.Default(-1);
bool collide = __o_collide.Default(false);
bool limit = __o_limit.Default(false);
bool motor = __o_motor.Default(false);
Float lower = __o_lower.Default(0);
Float upper = __o_upper.Default(0);
Float torque = __o_torque.Default(0);
Float speed = __o_speed.Default(0);
	HX_STACK_PUSH("Engine::createHingeJoint","com/stencyl/Engine.hx",3444);
	HX_STACK_THIS(this);
	HX_STACK_ARG(one,"one");
	HX_STACK_ARG(two,"two");
	HX_STACK_ARG(pt,"pt");
	HX_STACK_ARG(jointID,"jointID");
	HX_STACK_ARG(collide,"collide");
	HX_STACK_ARG(limit,"limit");
	HX_STACK_ARG(motor,"motor");
	HX_STACK_ARG(lower,"lower");
	HX_STACK_ARG(upper,"upper");
	HX_STACK_ARG(torque,"torque");
	HX_STACK_ARG(speed,"speed");
{
		HX_STACK_LINE(3445)
		if (((two == null()))){
			HX_STACK_LINE(3446)
			two = this->world->m_groundBody;
		}
		HX_STACK_LINE(3450)
		if (((pt == null()))){
			HX_STACK_LINE(3451)
			pt = one->getLocalCenter();
		}
		HX_STACK_LINE(3455)
		::box2D::dynamics::joints::B2RevoluteJointDef jd = ::box2D::dynamics::joints::B2RevoluteJointDef_obj::__new();		HX_STACK_VAR(jd,"jd");
		HX_STACK_LINE(3457)
		jd->bodyA = one;
		HX_STACK_LINE(3458)
		jd->bodyB = two;
		HX_STACK_LINE(3460)
		pt->x = ::com::stencyl::Engine_obj::toPhysicalUnits(pt->x);
		HX_STACK_LINE(3461)
		pt->y = ::com::stencyl::Engine_obj::toPhysicalUnits(pt->y);
		HX_STACK_LINE(3463)
		jd->localAnchorA = pt;
		HX_STACK_LINE(3464)
		jd->localAnchorB = two->getLocalPoint(one->getWorldPoint(pt));
		HX_STACK_LINE(3465)
		jd->collideConnected = collide;
		HX_STACK_LINE(3466)
		jd->enableLimit = limit;
		HX_STACK_LINE(3467)
		jd->enableMotor = motor;
		HX_STACK_LINE(3468)
		jd->lowerAngle = lower;
		HX_STACK_LINE(3469)
		jd->upperAngle = upper;
		HX_STACK_LINE(3470)
		jd->maxMotorTorque = torque;
		HX_STACK_LINE(3471)
		jd->motorSpeed = speed;
		HX_STACK_LINE(3473)
		::box2D::dynamics::joints::B2Joint toReturn = this->world->createJoint(jd);		HX_STACK_VAR(toReturn,"toReturn");
		HX_STACK_LINE(3475)
		if (((jointID == (int)-1))){
			HX_STACK_LINE(3476)
			this->addJoint(toReturn);
		}
		else{
			HX_STACK_LINE(3482)
			this->joints->set(jointID,toReturn);
			HX_STACK_LINE(3483)
			toReturn->ID = jointID;
		}
		HX_STACK_LINE(3486)
		return hx::TCast< box2D::dynamics::joints::B2RevoluteJoint >::cast(toReturn);
	}
}


HX_DEFINE_DYNAMIC_FUNC11(Engine_obj,createHingeJoint,return )

::box2D::dynamics::joints::B2DistanceJoint Engine_obj::createCustomStickJoint( ::box2D::dynamics::B2Body one,Float x1,Float y1,::box2D::dynamics::B2Body two,Float x2,Float y2){
	HX_STACK_PUSH("Engine::createCustomStickJoint","com/stencyl/Engine.hx",3407);
	HX_STACK_THIS(this);
	HX_STACK_ARG(one,"one");
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(two,"two");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
	HX_STACK_LINE(3408)
	::box2D::common::math::B2Vec2 v1 = ::box2D::common::math::B2Vec2_obj::__new(x1,y1);		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(3409)
	::box2D::common::math::B2Vec2 v2 = ::box2D::common::math::B2Vec2_obj::__new(x2,y2);		HX_STACK_VAR(v2,"v2");
	HX_STACK_LINE(3411)
	v1->x = ::com::stencyl::Engine_obj::toPhysicalUnits(v1->x);
	HX_STACK_LINE(3412)
	v1->y = ::com::stencyl::Engine_obj::toPhysicalUnits(v1->y);
	HX_STACK_LINE(3413)
	v2->x = ::com::stencyl::Engine_obj::toPhysicalUnits(v2->x);
	HX_STACK_LINE(3414)
	v2->y = ::com::stencyl::Engine_obj::toPhysicalUnits(v2->y);
	HX_STACK_LINE(3416)
	v1 = one->getWorldPoint(v1);
	HX_STACK_LINE(3417)
	v2 = two->getWorldPoint(v2);
	HX_STACK_LINE(3419)
	::box2D::dynamics::joints::B2DistanceJointDef jd = ::box2D::dynamics::joints::B2DistanceJointDef_obj::__new();		HX_STACK_VAR(jd,"jd");
	HX_STACK_LINE(3420)
	jd->initialize(one,two,v1,v2);
	HX_STACK_LINE(3422)
	::box2D::dynamics::joints::B2Joint toReturn = this->world->createJoint(jd);		HX_STACK_VAR(toReturn,"toReturn");
	HX_STACK_LINE(3423)
	this->addJoint(toReturn);
	HX_STACK_LINE(3425)
	return hx::TCast< box2D::dynamics::joints::B2DistanceJoint >::cast(toReturn);
}


HX_DEFINE_DYNAMIC_FUNC6(Engine_obj,createCustomStickJoint,return )

::box2D::dynamics::joints::B2DistanceJoint Engine_obj::createStickJoint( ::box2D::dynamics::B2Body one,::box2D::dynamics::B2Body two,hx::Null< int >  __o_jointID,hx::Null< bool >  __o_collide,hx::Null< Float >  __o_damping,hx::Null< Float >  __o_frequencyHz){
int jointID = __o_jointID.Default(-1);
bool collide = __o_collide.Default(false);
Float damping = __o_damping.Default(0);
Float frequencyHz = __o_frequencyHz.Default(0);
	HX_STACK_PUSH("Engine::createStickJoint","com/stencyl/Engine.hx",3357);
	HX_STACK_THIS(this);
	HX_STACK_ARG(one,"one");
	HX_STACK_ARG(two,"two");
	HX_STACK_ARG(jointID,"jointID");
	HX_STACK_ARG(collide,"collide");
	HX_STACK_ARG(damping,"damping");
	HX_STACK_ARG(frequencyHz,"frequencyHz");
{
		HX_STACK_LINE(3358)
		::box2D::common::math::B2Vec2 v1 = one->getLocalCenter();		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(3359)
		::box2D::common::math::B2Vec2 v2 = two->getLocalCenter();		HX_STACK_VAR(v2,"v2");
		HX_STACK_LINE(3361)
		if (((one->getType() == (int)0))){
			HX_STACK_LINE(3363)
			v1->x = (Float((hx::TCast< com::stencyl::models::Actor >::cast(one->getUserData()))->getPhysicsWidth()) / Float((int)2));
			HX_STACK_LINE(3364)
			v1->y = (Float((hx::TCast< com::stencyl::models::Actor >::cast(one->getUserData()))->getPhysicsHeight()) / Float((int)2));
		}
		HX_STACK_LINE(3367)
		if (((two->getType() == (int)0))){
			HX_STACK_LINE(3369)
			v2->x = (Float((hx::TCast< com::stencyl::models::Actor >::cast(two->getUserData()))->getPhysicsWidth()) / Float((int)2));
			HX_STACK_LINE(3370)
			v2->y = (Float((hx::TCast< com::stencyl::models::Actor >::cast(two->getUserData()))->getPhysicsHeight()) / Float((int)2));
		}
		HX_STACK_LINE(3373)
		v1 = one->getWorldPoint(v1);
		HX_STACK_LINE(3374)
		v2 = two->getWorldPoint(v2);
		HX_STACK_LINE(3376)
		::box2D::dynamics::joints::B2DistanceJointDef jd = ::box2D::dynamics::joints::B2DistanceJointDef_obj::__new();		HX_STACK_VAR(jd,"jd");
		HX_STACK_LINE(3377)
		jd->initialize(one,two,v1,v2);
		HX_STACK_LINE(3378)
		jd->collideConnected = collide;
		HX_STACK_LINE(3379)
		jd->dampingRatio = damping;
		HX_STACK_LINE(3380)
		jd->frequencyHz = frequencyHz;
		HX_STACK_LINE(3382)
		::box2D::dynamics::joints::B2Joint toReturn = this->world->createJoint(jd);		HX_STACK_VAR(toReturn,"toReturn");
		HX_STACK_LINE(3384)
		if (((jointID == (int)-1))){
			HX_STACK_LINE(3385)
			this->addJoint(toReturn);
		}
		else{
			HX_STACK_LINE(3391)
			this->joints->set(jointID,toReturn);
			HX_STACK_LINE(3392)
			toReturn->ID = jointID;
		}
		HX_STACK_LINE(3395)
		return hx::TCast< box2D::dynamics::joints::B2DistanceJoint >::cast(toReturn);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(Engine_obj,createStickJoint,return )

Void Engine_obj::destroyJoint( ::box2D::dynamics::joints::B2Joint j){
{
		HX_STACK_PUSH("Engine::destroyJoint","com/stencyl/Engine.hx",3341);
		HX_STACK_THIS(this);
		HX_STACK_ARG(j,"j");
		HX_STACK_LINE(3342)
		this->joints->remove(j->ID);
		HX_STACK_LINE(3343)
		this->world->destroyJoint(j);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,destroyJoint,(void))

::box2D::dynamics::joints::B2Joint Engine_obj::getJoint( int ID){
	HX_STACK_PUSH("Engine::getJoint","com/stencyl/Engine.hx",3336);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_LINE(3336)
	return this->joints->get(ID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getJoint,return )

Void Engine_obj::addJoint( ::box2D::dynamics::joints::B2Joint j){
{
		HX_STACK_PUSH("Engine::addJoint","com/stencyl/Engine.hx",3329);
		HX_STACK_THIS(this);
		HX_STACK_ARG(j,"j");
		HX_STACK_LINE(3330)
		int nextID = this->nextJointID();		HX_STACK_VAR(nextID,"nextID");
		HX_STACK_LINE(3331)
		j->ID = nextID;
		HX_STACK_LINE(3332)
		this->joints->set(nextID,j);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,addJoint,(void))

int Engine_obj::nextJointID( ){
	HX_STACK_PUSH("Engine::nextJointID","com/stencyl/Engine.hx",3312);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3313)
	int ID = (int)-1;		HX_STACK_VAR(ID,"ID");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3315);
			{
				HX_STACK_LINE(3315)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->joints);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",3315);
					{
						HX_STACK_LINE(3315)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(3315)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(3315)
	for(::cpp::FastIterator_obj< ::box2D::dynamics::joints::B2Joint > *__it = ::cpp::CreateFastIterator< ::box2D::dynamics::joints::B2Joint >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::box2D::dynamics::joints::B2Joint j = __it->next();
		{
			HX_STACK_LINE(3317)
			if (((j == null()))){
				HX_STACK_LINE(3318)
				continue;
			}
			HX_STACK_LINE(3322)
			ID = ::Std_obj::_int(::Math_obj::max(ID,j->ID));
		}
;
	}
	HX_STACK_LINE(3325)
	return (ID + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,nextJointID,return )

::com::stencyl::models::actor::Group Engine_obj::getGroupByName( ::String groupName){
	HX_STACK_PUSH("Engine::getGroupByName","com/stencyl/Engine.hx",3296);
	HX_STACK_THIS(this);
	HX_STACK_ARG(groupName,"groupName");
	HX_STACK_LINE(3297)
	::com::stencyl::models::actor::Group group = this->reverseGroups->get(groupName);		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(3299)
	if (((group == null()))){
		HX_STACK_LINE(3300)
		return this->groups->get(::com::stencyl::models::GameModel_obj::ACTOR_ID);
	}
	HX_STACK_LINE(3304)
	return group;
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getGroupByName,return )

::com::stencyl::models::actor::Group Engine_obj::getGroup( int ID,::com::stencyl::models::Actor a){
	HX_STACK_PUSH("Engine::getGroup","com/stencyl/Engine.hx",3286);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_ARG(a,"a");
	HX_STACK_LINE(3287)
	if (((bool((ID == ::com::stencyl::models::GameModel_obj::INHERIT_ID)) && bool((a != null()))))){
		HX_STACK_LINE(3288)
		return this->groups->get(a->getGroupID());
	}
	HX_STACK_LINE(3292)
	return this->groups->get(ID);
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,getGroup,return )

Void Engine_obj::disableGlobalSleeping( ){
{
		HX_STACK_PUSH("Engine::disableGlobalSleeping","com/stencyl/Engine.hx",3277);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3277)
		this->world->m_allowSleep = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,disableGlobalSleeping,(void))

Void Engine_obj::enableGlobalSleeping( ){
{
		HX_STACK_PUSH("Engine::enableGlobalSleeping","com/stencyl/Engine.hx",3272);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3272)
		this->world->m_allowSleep = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,enableGlobalSleeping,(void))

Float Engine_obj::getPhysicalHeight( ){
	HX_STACK_PUSH("Engine::getPhysicalHeight","com/stencyl/Engine.hx",3237);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3237)
	return this->physicalHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getPhysicalHeight,return )

Float Engine_obj::getPhysicalWidth( ){
	HX_STACK_PUSH("Engine::getPhysicalWidth","com/stencyl/Engine.hx",3232);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3232)
	return this->physicalWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getPhysicalWidth,return )

int Engine_obj::getIDFromLayerOrder( int layerOrder){
	HX_STACK_PUSH("Engine::getIDFromLayerOrder","com/stencyl/Engine.hx",3223);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layerOrder,"layerOrder");
	HX_STACK_LINE(3223)
	return this->layersToDraw->get((layerOrder - (int)1));
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getIDFromLayerOrder,return )

int Engine_obj::getOrderForLayerID( int layerID){
	HX_STACK_PUSH("Engine::getOrderForLayerID","com/stencyl/Engine.hx",3218);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layerID,"layerID");
	HX_STACK_LINE(3218)
	return this->layerOrders->get(layerID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getOrderForLayerID,return )

Void Engine_obj::bringForward( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::bringForward","com/stencyl/Engine.hx",3204);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3205)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(3207)
		int order = this->getOrderForLayerID(a->layerID);		HX_STACK_VAR(order,"order");
		HX_STACK_LINE(3209)
		if (((order > (int)0))){
			HX_STACK_LINE(3210)
			a->layerID = this->layersToDraw->get((order - (int)1));
		}
		HX_STACK_LINE(3214)
		this->moveActorToLayer(a,a->layerID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,bringForward,(void))

Void Engine_obj::bringToFront( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::bringToFront","com/stencyl/Engine.hx",3197);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3198)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(3199)
		a->layerID = this->getTopLayer();
		HX_STACK_LINE(3200)
		this->moveActorToLayer(a,a->layerID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,bringToFront,(void))

Void Engine_obj::sendBackward( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::sendBackward","com/stencyl/Engine.hx",3182);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3183)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(3185)
		int order = this->getOrderForLayerID(a->layerID);		HX_STACK_VAR(order,"order");
		HX_STACK_LINE(3188)
		if (((order < (::Lambda_obj::count(this->layersToDraw,null()) - (int)1)))){
			HX_STACK_LINE(3189)
			a->layerID = this->layersToDraw->get((order + (int)1));
		}
		HX_STACK_LINE(3193)
		this->moveActorToLayer(a,a->layerID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,sendBackward,(void))

Void Engine_obj::sendToBack( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::sendToBack","com/stencyl/Engine.hx",3175);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3176)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(3177)
		a->layerID = this->getBottomLayer();
		HX_STACK_LINE(3178)
		this->moveActorToLayer(a,a->layerID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,sendToBack,(void))

Void Engine_obj::moveToLayer( ::com::stencyl::models::Actor a,int layerID){
{
		HX_STACK_PUSH("Engine::moveToLayer","com/stencyl/Engine.hx",3155);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_LINE(3156)
		int lID = layerID;		HX_STACK_VAR(lID,"lID");
		HX_STACK_LINE(3159)
		if (((bool((lID < (int)0)) || bool((lID > (::Lambda_obj::count(this->layersToDraw,null()) - (int)1)))))){
			HX_STACK_LINE(3160)
			return null();
		}
		HX_STACK_LINE(3164)
		if (((a->layerID == layerID))){
			HX_STACK_LINE(3165)
			return null();
		}
		HX_STACK_LINE(3169)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(3170)
		a->layerID = lID;
		HX_STACK_LINE(3171)
		this->moveActorToLayer(a,lID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,moveToLayer,(void))

Void Engine_obj::removeHUDActor( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::removeHUDActor","com/stencyl/Engine.hx",3145);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3146)
		::de::polygonal::ds::IntHashTable _this = this->hudActors;		HX_STACK_VAR(_this,"_this");
		int key = a->ID;		HX_STACK_VAR(key,"key");
		struct _Function_1_1{
			inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3146);
				{
					HX_STACK_LINE(3146)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(3146)
					int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
					struct _Function_2_1{
						inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3146);
							{
								HX_STACK_LINE(3146)
								int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(3146)
								i = _this1->_data->__get((i + (int)2));
								HX_STACK_LINE(3146)
								while(((i != (int)-1))){
									HX_STACK_LINE(3146)
									if (((_this1->_data->__get(i) == key))){
										HX_STACK_LINE(3146)
										v = _this1->_data->__get((i + (int)1));
										HX_STACK_LINE(3146)
										break;
									}
									HX_STACK_LINE(3146)
									i = _this1->_data->__get((i + (int)2));
								}
								HX_STACK_LINE(3146)
								return v;
							}
							return null();
						}
					};
					HX_STACK_LINE(3146)
					return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_2_1::Block(i,_this1,key)) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(3146)
		int i = _Function_1_1::Block(_this,key);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(3146)
		if (((i == (int)-2147483647))){
			HX_STACK_LINE(3146)
			false;
		}
		else{
			HX_STACK_LINE(3146)
			_this->_key0 = (int)-2147483647;
			HX_STACK_LINE(3146)
			hx::IndexRef((_this->_vals).mPtr,i) = null();
			HX_STACK_LINE(3146)
			_this->_keys[i] = (int)-2147483647;
			HX_STACK_LINE(3146)
			_this->_next[i] = _this->_free;
			HX_STACK_LINE(3146)
			_this->_free = i;
			HX_STACK_LINE(3146)
			bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
			HX_STACK_LINE(3146)
			if (((_this->_sizeLevel > (int)0))){
				HX_STACK_LINE(3146)
				if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
					HX_STACK_LINE(3146)
					if ((_this->_isResizable)){
						HX_STACK_LINE(3146)
						shrink = true;
					}
				}
			}
			HX_STACK_LINE(3146)
			{
				HX_STACK_LINE(3146)
				::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(3146)
				int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(3146)
				int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(3146)
				if (((i1 == (int)-1))){
					HX_STACK_LINE(3146)
					false;
				}
				else{
					HX_STACK_LINE(3146)
					if (((key == _this1->_data->__get(i1)))){
						HX_STACK_LINE(3146)
						if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
							HX_STACK_LINE(3146)
							_this1->_hash[b] = (int)-1;
						}
						else{
							HX_STACK_LINE(3146)
							_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
						}
						HX_STACK_LINE(3146)
						int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(3146)
						_this1->_next[j] = _this1->_free;
						HX_STACK_LINE(3146)
						_this1->_free = j;
						HX_STACK_LINE(3146)
						_this1->_data[(i1 + (int)1)] = (int)-2147483647;
						HX_STACK_LINE(3146)
						_this1->_data[(i1 + (int)2)] = (int)-1;
						HX_STACK_LINE(3146)
						(_this1->_size)--;
						HX_STACK_LINE(3146)
						if (((_this1->_sizeLevel > (int)0))){
							HX_STACK_LINE(3146)
							if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
								HX_STACK_LINE(3146)
								if ((_this1->_isResizable)){
									HX_STACK_LINE(3146)
									_this1->_shrink();
								}
							}
						}
						HX_STACK_LINE(3146)
						true;
					}
					else{
						HX_STACK_LINE(3146)
						bool exists = false;		HX_STACK_VAR(exists,"exists");
						HX_STACK_LINE(3146)
						int i0 = i1;		HX_STACK_VAR(i0,"i0");
						HX_STACK_LINE(3146)
						i1 = _this1->_data->__get((i1 + (int)2));
						HX_STACK_LINE(3146)
						while(((i1 != (int)-1))){
							HX_STACK_LINE(3146)
							if (((_this1->_data->__get(i1) == key))){
								HX_STACK_LINE(3146)
								exists = true;
								HX_STACK_LINE(3146)
								break;
							}
							HX_STACK_LINE(3146)
							i1 = _this1->_data->__get(((i0 = i1) + (int)2));
						}
						HX_STACK_LINE(3146)
						if ((exists)){
							HX_STACK_LINE(3146)
							_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
							HX_STACK_LINE(3146)
							int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(3146)
							_this1->_next[j] = _this1->_free;
							HX_STACK_LINE(3146)
							_this1->_free = j;
							HX_STACK_LINE(3146)
							_this1->_data[(i1 + (int)1)] = (int)-2147483647;
							HX_STACK_LINE(3146)
							_this1->_data[(i1 + (int)2)] = (int)-1;
							HX_STACK_LINE(3146)
							--(_this1->_size);
							HX_STACK_LINE(3146)
							if (((_this1->_sizeLevel > (int)0))){
								HX_STACK_LINE(3146)
								if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
									HX_STACK_LINE(3146)
									if ((_this1->_isResizable)){
										HX_STACK_LINE(3146)
										_this1->_shrink();
									}
								}
							}
							HX_STACK_LINE(3146)
							true;
						}
						else{
							HX_STACK_LINE(3146)
							false;
						}
					}
				}
			}
			HX_STACK_LINE(3146)
			if ((shrink)){
				HX_STACK_LINE(3146)
				(_this->_sizeLevel)--;
				HX_STACK_LINE(3146)
				int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
				HX_STACK_LINE(3146)
				int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
				struct _Function_3_1{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3146);
						{
							HX_STACK_LINE(3146)
							Array< int > a1;		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(3146)
							a1 = Array_obj< int >::__new();
							HX_STACK_LINE(3146)
							a1[(newSize - (int)1)] = null();
							HX_STACK_LINE(3146)
							return a1;
						}
						return null();
					}
				};
				HX_STACK_LINE(3146)
				_this->_next = _Function_3_1::Block(newSize);
				HX_STACK_LINE(3146)
				{
					HX_STACK_LINE(3146)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(3146)
					while(((_g1 < _g))){
						HX_STACK_LINE(3146)
						int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(3146)
						_this->_next[i1] = (i1 + (int)1);
					}
				}
				HX_STACK_LINE(3146)
				_this->_next[(newSize - (int)1)] = (int)-1;
				HX_STACK_LINE(3146)
				_this->_free = (int)0;
				struct _Function_3_2{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3146);
						{
							HX_STACK_LINE(3146)
							Array< int > a1;		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(3146)
							a1 = Array_obj< int >::__new();
							HX_STACK_LINE(3146)
							a1[(newSize - (int)1)] = null();
							HX_STACK_LINE(3146)
							return a1;
						}
						return null();
					}
				};
				HX_STACK_LINE(3146)
				Array< int > tmpKeys = _Function_3_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
				HX_STACK_LINE(3146)
				{
					HX_STACK_LINE(3146)
					int k = newSize;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(3146)
					if (((k == (int)-1))){
						HX_STACK_LINE(3146)
						k = tmpKeys->length;
					}
					HX_STACK_LINE(3146)
					{
						HX_STACK_LINE(3146)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(3146)
						while(((_g < k))){
							HX_STACK_LINE(3146)
							int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(3146)
							tmpKeys[i1] = (int)-2147483647;
						}
					}
				}
				struct _Function_3_3{
					inline static Array< ::Dynamic > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3146);
						{
							HX_STACK_LINE(3146)
							Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(3146)
							a1 = Array_obj< ::Dynamic >::__new();
							HX_STACK_LINE(3146)
							a1[(newSize - (int)1)] = null();
							HX_STACK_LINE(3146)
							return a1;
						}
						return null();
					}
				};
				HX_STACK_LINE(3146)
				Array< ::Dynamic > tmpVals = _Function_3_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
				HX_STACK_LINE(3146)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
					int i1 = __it->next();
					{
						HX_STACK_LINE(3146)
						tmpKeys[_this->_free] = _this->_keys->__get(i1);
						HX_STACK_LINE(3146)
						tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
						HX_STACK_LINE(3146)
						_this->_free = _this->_next->__get(_this->_free);
					}
;
				}
				HX_STACK_LINE(3146)
				_this->_keys = tmpKeys;
				HX_STACK_LINE(3146)
				_this->_vals = tmpVals;
				HX_STACK_LINE(3146)
				{
					HX_STACK_LINE(3146)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(3146)
					while(((_g1 < _g))){
						HX_STACK_LINE(3146)
						int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(3146)
						::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
						int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
						HX_STACK_LINE(3146)
						int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
						HX_STACK_LINE(3146)
						if (((i2 == (int)-1))){
							HX_STACK_LINE(3146)
							false;
						}
						else{
							HX_STACK_LINE(3146)
							if (((_this1->_data->__get(i2) == key1))){
								HX_STACK_LINE(3146)
								_this1->_data[(i2 + (int)1)] = i1;
								HX_STACK_LINE(3146)
								true;
							}
							else{
								HX_STACK_LINE(3146)
								i2 = _this1->_data->__get((i2 + (int)2));
								HX_STACK_LINE(3146)
								while(((i2 != (int)-1))){
									HX_STACK_LINE(3146)
									if (((_this1->_data->__get(i2) == key1))){
										HX_STACK_LINE(3146)
										_this1->_data[(i2 + (int)1)] = i1;
										HX_STACK_LINE(3146)
										break;
									}
									HX_STACK_LINE(3146)
									i2 = _this1->_data->__get((i2 + (int)2));
								}
								HX_STACK_LINE(3146)
								(i2 != (int)-1);
							}
						}
					}
				}
			}
			HX_STACK_LINE(3146)
			true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,removeHUDActor,(void))

Void Engine_obj::addHUDActor( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::addHUDActor","com/stencyl/Engine.hx",3140);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3141)
		::de::polygonal::ds::IntHashTable _this = this->hudActors;		HX_STACK_VAR(_this,"_this");
		int key = a->ID;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(3141)
		_this->_key0 = (int)-2147483647;
		HX_STACK_LINE(3141)
		if (((_this->_h->_size == _this->_h->_capacity))){
			HX_STACK_LINE(3141)
			int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
			HX_STACK_LINE(3141)
			int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
			struct _Function_2_1{
				inline static Array< int > Block( int &newSize){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3141);
					{
						HX_STACK_LINE(3141)
						Array< int > a1;		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(3141)
						a1 = Array_obj< int >::__new();
						HX_STACK_LINE(3141)
						a1[(newSize - (int)1)] = null();
						HX_STACK_LINE(3141)
						return a1;
					}
					return null();
				}
			};
			HX_STACK_LINE(3141)
			Array< int > tmp = _Function_2_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(3141)
			{
				HX_STACK_LINE(3141)
				Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
				int max = oldSize;		HX_STACK_VAR(max,"max");
				HX_STACK_LINE(3141)
				if (((max == (int)-1))){
					HX_STACK_LINE(3141)
					max = src->length;
				}
				HX_STACK_LINE(3141)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(3141)
				{
					HX_STACK_LINE(3141)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(3141)
					while(((_g < max))){
						HX_STACK_LINE(3141)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(3141)
						tmp[(j)++] = src->__get(i);
					}
				}
				HX_STACK_LINE(3141)
				tmp;
			}
			HX_STACK_LINE(3141)
			_this->_next = tmp;
			struct _Function_2_2{
				inline static Array< int > Block( int &newSize){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3141);
					{
						HX_STACK_LINE(3141)
						Array< int > a1;		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(3141)
						a1 = Array_obj< int >::__new();
						HX_STACK_LINE(3141)
						a1[(newSize - (int)1)] = null();
						HX_STACK_LINE(3141)
						return a1;
					}
					return null();
				}
			};
			HX_STACK_LINE(3141)
			Array< int > tmp1 = _Function_2_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3141)
			{
				HX_STACK_LINE(3141)
				Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
				int max = oldSize;		HX_STACK_VAR(max,"max");
				HX_STACK_LINE(3141)
				if (((max == (int)-1))){
					HX_STACK_LINE(3141)
					max = src->length;
				}
				HX_STACK_LINE(3141)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(3141)
				{
					HX_STACK_LINE(3141)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(3141)
					while(((_g < max))){
						HX_STACK_LINE(3141)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(3141)
						tmp1[(j)++] = src->__get(i);
					}
				}
				HX_STACK_LINE(3141)
				tmp1;
			}
			HX_STACK_LINE(3141)
			_this->_keys = tmp1;
			HX_STACK_LINE(3141)
			{
				HX_STACK_LINE(3141)
				int _g = oldSize;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3141)
				while(((_g < newSize))){
					HX_STACK_LINE(3141)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(3141)
					_this->_keys[i] = (int)-2147483647;
				}
			}
			HX_STACK_LINE(3141)
			{
				HX_STACK_LINE(3141)
				int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
				int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3141)
				while(((_g1 < _g))){
					HX_STACK_LINE(3141)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(3141)
					_this->_next[i] = (i + (int)1);
				}
			}
			HX_STACK_LINE(3141)
			_this->_next[(newSize - (int)1)] = (int)-1;
			HX_STACK_LINE(3141)
			_this->_free = oldSize;
			struct _Function_2_3{
				inline static Array< ::Dynamic > Block( int &newSize){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3141);
					{
						HX_STACK_LINE(3141)
						Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(3141)
						a1 = Array_obj< ::Dynamic >::__new();
						HX_STACK_LINE(3141)
						a1[(newSize - (int)1)] = null();
						HX_STACK_LINE(3141)
						return a1;
					}
					return null();
				}
			};
			HX_STACK_LINE(3141)
			Array< ::Dynamic > tmp2 = _Function_2_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3141)
			{
				HX_STACK_LINE(3141)
				Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
				int max = oldSize;		HX_STACK_VAR(max,"max");
				HX_STACK_LINE(3141)
				if (((max == (int)-1))){
					HX_STACK_LINE(3141)
					max = src->length;
				}
				HX_STACK_LINE(3141)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(3141)
				{
					HX_STACK_LINE(3141)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(3141)
					while(((_g < max))){
						HX_STACK_LINE(3141)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(3141)
						tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::Actor >();
					}
				}
				HX_STACK_LINE(3141)
				tmp2;
			}
			HX_STACK_LINE(3141)
			_this->_vals = tmp2;
			HX_STACK_LINE(3141)
			(_this->_sizeLevel)++;
		}
		HX_STACK_LINE(3141)
		{
			HX_STACK_LINE(3141)
			::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(3141)
			if (((_this1->_size == _this1->_capacity))){
				HX_STACK_LINE(3141)
				if ((_this1->_isResizable)){
					HX_STACK_LINE(3141)
					_this1->_expand();
				}
			}
			HX_STACK_LINE(3141)
			int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(3141)
			_this1->_free = _this1->_next->__get(_this1->_free);
			HX_STACK_LINE(3141)
			_this1->_data[i] = key;
			HX_STACK_LINE(3141)
			_this1->_data[(i + (int)1)] = _this->_free;
			HX_STACK_LINE(3141)
			int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(3141)
			int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(3141)
			if (((j == (int)-1))){
				HX_STACK_LINE(3141)
				_this1->_hash[b] = i;
				HX_STACK_LINE(3141)
				(_this1->_size)++;
				HX_STACK_LINE(3141)
				true;
			}
			else{
				HX_STACK_LINE(3141)
				bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
				HX_STACK_LINE(3141)
				int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(3141)
				while(((t != (int)-1))){
					HX_STACK_LINE(3141)
					if (((_this1->_data->__get(t) == key))){
						HX_STACK_LINE(3141)
						first = false;
					}
					HX_STACK_LINE(3141)
					j = t;
					HX_STACK_LINE(3141)
					t = _this1->_data->__get((t + (int)2));
				}
				HX_STACK_LINE(3141)
				_this1->_data[(j + (int)2)] = i;
				HX_STACK_LINE(3141)
				(_this1->_size)++;
				HX_STACK_LINE(3141)
				first;
			}
		}
		HX_STACK_LINE(3141)
		hx::IndexRef((_this->_vals).mPtr,_this->_free) = a;
		HX_STACK_LINE(3141)
		_this->_keys[_this->_free] = key;
		HX_STACK_LINE(3141)
		_this->_free = _this->_next->__get(_this->_free);
		HX_STACK_LINE(3141)
		true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,addHUDActor,(void))

Array< ::Dynamic > Engine_obj::getRecycledActorsOfType( ::com::stencyl::models::actor::ActorType type){
	HX_STACK_PUSH("Engine::getRecycledActorsOfType","com/stencyl/Engine.hx",3135);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(3135)
	return this->recycledActorsOfType->get(type->ID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getRecycledActorsOfType,return )

Array< ::Dynamic > Engine_obj::getActorsOfType( ::com::stencyl::models::actor::ActorType type){
	HX_STACK_PUSH("Engine::getActorsOfType","com/stencyl/Engine.hx",3114);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(3115)
	if (((type == null()))){
		HX_STACK_LINE(3117)
		::haxe::Log_obj::trace(HX_CSTRING("Error: getActorsOfType was passed a null type"),hx::SourceInfo(HX_CSTRING("Engine.hx"),3117,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("getActorsOfType")));
		HX_STACK_LINE(3118)
		return Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(3121)
	Array< ::Dynamic > result = this->actorsOfType->get(type->ID);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(3123)
	if (((result != null()))){
		HX_STACK_LINE(3124)
		return this->actorsOfType->get(type->ID);
	}
	else{
		HX_STACK_LINE(3129)
		return Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(3123)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getActorsOfType,return )

::com::stencyl::models::Actor Engine_obj::getActor( int ID){
	HX_STACK_PUSH("Engine::getActor","com/stencyl/Engine.hx",3109);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	struct _Function_1_1{
		inline static ::com::stencyl::models::Actor Block( ::com::stencyl::Engine_obj *__this,int &ID){
			HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3110);
			{
				HX_STACK_LINE(3110)
				::de::polygonal::ds::IntHashTable _this = __this->allActors;		HX_STACK_VAR(_this,"_this");
				struct _Function_2_1{
					inline static int Block( int &ID,::de::polygonal::ds::IntHashTable _this){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3110);
						{
							HX_STACK_LINE(3110)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(3110)
							int i = _this1->_hash->__get((int((ID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
							struct _Function_3_1{
								inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &ID){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3110);
									{
										HX_STACK_LINE(3110)
										int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(3110)
										i = _this1->_data->__get((i + (int)2));
										HX_STACK_LINE(3110)
										while(((i != (int)-1))){
											HX_STACK_LINE(3110)
											if (((_this1->_data->__get(i) == ID))){
												HX_STACK_LINE(3110)
												v = _this1->_data->__get((i + (int)1));
												HX_STACK_LINE(3110)
												break;
											}
											HX_STACK_LINE(3110)
											i = _this1->_data->__get((i + (int)2));
										}
										HX_STACK_LINE(3110)
										return v;
									}
									return null();
								}
							};
							HX_STACK_LINE(3110)
							return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == ID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,ID)) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(3110)
				int i = _Function_2_1::Block(ID,_this);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(3110)
				return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::Actor(null()) : ::com::stencyl::models::Actor(_this->_vals->__GetItem(i)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(3109)
	return _Function_1_1::Block(this,ID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getActor,return )

Dynamic Engine_obj::shout( ::String msg,Dynamic args){
	HX_STACK_PUSH("Engine::shout","com/stencyl/Engine.hx",3100);
	HX_STACK_THIS(this);
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(3100)
	return this->behaviors->call(msg,args);
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,shout,return )

Dynamic Engine_obj::say( ::String behaviorName,::String msg,Dynamic args){
	HX_STACK_PUSH("Engine::say","com/stencyl/Engine.hx",3095);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(3095)
	return this->behaviors->call2(behaviorName,msg,args);
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,say,return )

Void Engine_obj::setValue( ::String behaviorName,::String attributeName,Dynamic value){
{
		HX_STACK_PUSH("Engine::setValue","com/stencyl/Engine.hx",3090);
		HX_STACK_THIS(this);
		HX_STACK_ARG(behaviorName,"behaviorName");
		HX_STACK_ARG(attributeName,"attributeName");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(3090)
		this->behaviors->setAttribute(behaviorName,attributeName,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,setValue,(void))

Dynamic Engine_obj::getValue( ::String behaviorName,::String attributeName){
	HX_STACK_PUSH("Engine::getValue","com/stencyl/Engine.hx",3085);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(attributeName,"attributeName");
	HX_STACK_LINE(3085)
	return this->behaviors->getAttribute(behaviorName,attributeName);
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,getValue,return )

Void Engine_obj::draw( ){
{
		HX_STACK_PUSH("Engine::draw","com/stencyl/Engine.hx",2963);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2964)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::Layer > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::Layer >(this->layers->iterator());  __it->hasNext(); ){
			::com::stencyl::models::scene::Layer l = __it->next();
			{
				HX_STACK_LINE(2966)
				l->overlay->get_graphics()->clear();
				HX_STACK_LINE(2978)
				l->bitmapOverlay->__Field(HX_CSTRING("graphics"),true)->__Field(HX_CSTRING("clear"),true)();
			}
;
		}
		HX_STACK_LINE(2983)
		if ((!(((this->hudActors->_h->_size == (int)0))))){
			HX_STACK_LINE(2984)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >(this->hudActors->iterator());  __it->hasNext(); ){
				::com::stencyl::models::Actor a = __it->next();
				if (((bool(a->dead) || bool(a->recycled)))){
					HX_STACK_LINE(2989)
					::de::polygonal::ds::IntHashTable _this = this->hudActors;		HX_STACK_VAR(_this,"_this");
					int key = a->ID;		HX_STACK_VAR(key,"key");
					struct _Function_3_1{
						inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2989);
							{
								HX_STACK_LINE(2989)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(2989)
								int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_4_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2989);
										{
											HX_STACK_LINE(2989)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(2989)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(2989)
											while(((i != (int)-1))){
												HX_STACK_LINE(2989)
												if (((_this1->_data->__get(i) == key))){
													HX_STACK_LINE(2989)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(2989)
													break;
												}
												HX_STACK_LINE(2989)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(2989)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(2989)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2989)
					int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(2989)
					if (((i == (int)-2147483647))){
						HX_STACK_LINE(2989)
						false;
					}
					else{
						HX_STACK_LINE(2989)
						_this->_key0 = (int)-2147483647;
						HX_STACK_LINE(2989)
						hx::IndexRef((_this->_vals).mPtr,i) = null();
						HX_STACK_LINE(2989)
						_this->_keys[i] = (int)-2147483647;
						HX_STACK_LINE(2989)
						_this->_next[i] = _this->_free;
						HX_STACK_LINE(2989)
						_this->_free = i;
						HX_STACK_LINE(2989)
						bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
						HX_STACK_LINE(2989)
						if (((_this->_sizeLevel > (int)0))){
							HX_STACK_LINE(2989)
							if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
								HX_STACK_LINE(2989)
								if ((_this->_isResizable)){
									HX_STACK_LINE(2989)
									shrink = true;
								}
							}
						}
						HX_STACK_LINE(2989)
						{
							HX_STACK_LINE(2989)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(2989)
							int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(2989)
							int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(2989)
							if (((i1 == (int)-1))){
								HX_STACK_LINE(2989)
								false;
							}
							else{
								HX_STACK_LINE(2989)
								if (((key == _this1->_data->__get(i1)))){
									HX_STACK_LINE(2989)
									if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
										HX_STACK_LINE(2989)
										_this1->_hash[b] = (int)-1;
									}
									else{
										HX_STACK_LINE(2989)
										_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
									}
									HX_STACK_LINE(2989)
									int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(2989)
									_this1->_next[j] = _this1->_free;
									HX_STACK_LINE(2989)
									_this1->_free = j;
									HX_STACK_LINE(2989)
									_this1->_data[(i1 + (int)1)] = (int)-2147483647;
									HX_STACK_LINE(2989)
									_this1->_data[(i1 + (int)2)] = (int)-1;
									HX_STACK_LINE(2989)
									(_this1->_size)--;
									HX_STACK_LINE(2989)
									if (((_this1->_sizeLevel > (int)0))){
										HX_STACK_LINE(2989)
										if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
											HX_STACK_LINE(2989)
											if ((_this1->_isResizable)){
												HX_STACK_LINE(2989)
												_this1->_shrink();
											}
										}
									}
									HX_STACK_LINE(2989)
									true;
								}
								else{
									HX_STACK_LINE(2989)
									bool exists = false;		HX_STACK_VAR(exists,"exists");
									HX_STACK_LINE(2989)
									int i0 = i1;		HX_STACK_VAR(i0,"i0");
									HX_STACK_LINE(2989)
									i1 = _this1->_data->__get((i1 + (int)2));
									HX_STACK_LINE(2989)
									while(((i1 != (int)-1))){
										HX_STACK_LINE(2989)
										if (((_this1->_data->__get(i1) == key))){
											HX_STACK_LINE(2989)
											exists = true;
											HX_STACK_LINE(2989)
											break;
										}
										HX_STACK_LINE(2989)
										i1 = _this1->_data->__get(((i0 = i1) + (int)2));
									}
									HX_STACK_LINE(2989)
									if ((exists)){
										HX_STACK_LINE(2989)
										_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
										HX_STACK_LINE(2989)
										int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(2989)
										_this1->_next[j] = _this1->_free;
										HX_STACK_LINE(2989)
										_this1->_free = j;
										HX_STACK_LINE(2989)
										_this1->_data[(i1 + (int)1)] = (int)-2147483647;
										HX_STACK_LINE(2989)
										_this1->_data[(i1 + (int)2)] = (int)-1;
										HX_STACK_LINE(2989)
										--(_this1->_size);
										HX_STACK_LINE(2989)
										if (((_this1->_sizeLevel > (int)0))){
											HX_STACK_LINE(2989)
											if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
												HX_STACK_LINE(2989)
												if ((_this1->_isResizable)){
													HX_STACK_LINE(2989)
													_this1->_shrink();
												}
											}
										}
										HX_STACK_LINE(2989)
										true;
									}
									else{
										HX_STACK_LINE(2989)
										false;
									}
								}
							}
						}
						HX_STACK_LINE(2989)
						if ((shrink)){
							HX_STACK_LINE(2989)
							(_this->_sizeLevel)--;
							HX_STACK_LINE(2989)
							int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
							HX_STACK_LINE(2989)
							int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
							struct _Function_5_1{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2989);
									{
										HX_STACK_LINE(2989)
										Array< int > a1;		HX_STACK_VAR(a1,"a1");
										HX_STACK_LINE(2989)
										a1 = Array_obj< int >::__new();
										HX_STACK_LINE(2989)
										a1[(newSize - (int)1)] = null();
										HX_STACK_LINE(2989)
										return a1;
									}
									return null();
								}
							};
							HX_STACK_LINE(2989)
							_this->_next = _Function_5_1::Block(newSize);
							HX_STACK_LINE(2989)
							{
								HX_STACK_LINE(2989)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(2989)
								while(((_g1 < _g))){
									HX_STACK_LINE(2989)
									int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(2989)
									_this->_next[i1] = (i1 + (int)1);
								}
							}
							HX_STACK_LINE(2989)
							_this->_next[(newSize - (int)1)] = (int)-1;
							HX_STACK_LINE(2989)
							_this->_free = (int)0;
							struct _Function_5_2{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2989);
									{
										HX_STACK_LINE(2989)
										Array< int > a1;		HX_STACK_VAR(a1,"a1");
										HX_STACK_LINE(2989)
										a1 = Array_obj< int >::__new();
										HX_STACK_LINE(2989)
										a1[(newSize - (int)1)] = null();
										HX_STACK_LINE(2989)
										return a1;
									}
									return null();
								}
							};
							HX_STACK_LINE(2989)
							Array< int > tmpKeys = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
							HX_STACK_LINE(2989)
							{
								HX_STACK_LINE(2989)
								int k = newSize;		HX_STACK_VAR(k,"k");
								HX_STACK_LINE(2989)
								if (((k == (int)-1))){
									HX_STACK_LINE(2989)
									k = tmpKeys->length;
								}
								HX_STACK_LINE(2989)
								{
									HX_STACK_LINE(2989)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(2989)
									while(((_g < k))){
										HX_STACK_LINE(2989)
										int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(2989)
										tmpKeys[i1] = (int)-2147483647;
									}
								}
							}
							struct _Function_5_3{
								inline static Array< ::Dynamic > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2989);
									{
										HX_STACK_LINE(2989)
										Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
										HX_STACK_LINE(2989)
										a1 = Array_obj< ::Dynamic >::__new();
										HX_STACK_LINE(2989)
										a1[(newSize - (int)1)] = null();
										HX_STACK_LINE(2989)
										return a1;
									}
									return null();
								}
							};
							HX_STACK_LINE(2989)
							Array< ::Dynamic > tmpVals = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
							HX_STACK_LINE(2989)
							for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
								int i1 = __it->next();
								{
									HX_STACK_LINE(2989)
									tmpKeys[_this->_free] = _this->_keys->__get(i1);
									HX_STACK_LINE(2989)
									tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
									HX_STACK_LINE(2989)
									_this->_free = _this->_next->__get(_this->_free);
								}
;
							}
							HX_STACK_LINE(2989)
							_this->_keys = tmpKeys;
							HX_STACK_LINE(2989)
							_this->_vals = tmpVals;
							HX_STACK_LINE(2989)
							{
								HX_STACK_LINE(2989)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(2989)
								while(((_g1 < _g))){
									HX_STACK_LINE(2989)
									int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(2989)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
									HX_STACK_LINE(2989)
									int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
									HX_STACK_LINE(2989)
									if (((i2 == (int)-1))){
										HX_STACK_LINE(2989)
										false;
									}
									else{
										HX_STACK_LINE(2989)
										if (((_this1->_data->__get(i2) == key1))){
											HX_STACK_LINE(2989)
											_this1->_data[(i2 + (int)1)] = i1;
											HX_STACK_LINE(2989)
											true;
										}
										else{
											HX_STACK_LINE(2989)
											i2 = _this1->_data->__get((i2 + (int)2));
											HX_STACK_LINE(2989)
											while(((i2 != (int)-1))){
												HX_STACK_LINE(2989)
												if (((_this1->_data->__get(i2) == key1))){
													HX_STACK_LINE(2989)
													_this1->_data[(i2 + (int)1)] = i1;
													HX_STACK_LINE(2989)
													break;
												}
												HX_STACK_LINE(2989)
												i2 = _this1->_data->__get((i2 + (int)2));
											}
											HX_STACK_LINE(2989)
											(i2 != (int)-1);
										}
									}
								}
							}
						}
						HX_STACK_LINE(2989)
						true;
					}
				}
;
			}
		}
		HX_STACK_LINE(2996)
		if ((!(((this->allActors->_h->_size == (int)0))))){
			HX_STACK_LINE(2997)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >(this->allActors->iterator());  __it->hasNext(); ){
				::com::stencyl::models::Actor a = __it->next();
				if (((a->whenDrawingListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
					struct _Function_3_1{
						inline static ::com::stencyl::models::scene::Layer Block( ::com::stencyl::Engine_obj *__this,::com::stencyl::models::Actor &a){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3002);
							{
								HX_STACK_LINE(3002)
								::de::polygonal::ds::IntHashTable _this = __this->layers;		HX_STACK_VAR(_this,"_this");
								int key = a->layerID;		HX_STACK_VAR(key,"key");
								struct _Function_4_1{
									inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3002);
										{
											HX_STACK_LINE(3002)
											::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(3002)
											int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
											struct _Function_5_1{
												inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
													HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3002);
													{
														HX_STACK_LINE(3002)
														int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(3002)
														i = _this1->_data->__get((i + (int)2));
														HX_STACK_LINE(3002)
														while(((i != (int)-1))){
															HX_STACK_LINE(3002)
															if (((_this1->_data->__get(i) == key))){
																HX_STACK_LINE(3002)
																v = _this1->_data->__get((i + (int)1));
																HX_STACK_LINE(3002)
																break;
															}
															HX_STACK_LINE(3002)
															i = _this1->_data->__get((i + (int)2));
														}
														HX_STACK_LINE(3002)
														return v;
													}
													return null();
												}
											};
											HX_STACK_LINE(3002)
											return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,_this1,key)) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(3002)
								int i = _Function_4_1::Block(_this,key);		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(3002)
								return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::Layer(null()) : ::com::stencyl::models::scene::Layer(_this->_vals->__GetItem(i)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(3002)
					::com::stencyl::models::scene::Layer layer = _Function_3_1::Block(this,a);		HX_STACK_VAR(layer,"layer");
					HX_STACK_LINE(3004)
					if (((layer != null()))){
						HX_STACK_LINE(3006)
						layer->drawnOn = true;
						HX_STACK_LINE(3008)
						this->g->graphics = layer->overlay->get_graphics();
						HX_STACK_LINE(3015)
						this->g->canvas = layer->bitmapOverlay;
						HX_STACK_LINE(3018)
						{
							HX_STACK_LINE(3018)
							::com::stencyl::graphics::G _this = this->g;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(3018)
							_this->drawActor = true;
							HX_STACK_LINE(3018)
							_this->actor = a;
							HX_STACK_LINE(3018)
							if ((a->smoothMove)){
								HX_STACK_LINE(3018)
								Float drawX = ((a->drawX - ::Math_obj::floor((Float(a->cacheWidth) / Float((int)2)))) - a->currOffset->x);		HX_STACK_VAR(drawX,"drawX");
								HX_STACK_LINE(3018)
								Float drawY = ((a->drawY - ::Math_obj::floor((Float(a->cacheHeight) / Float((int)2)))) - a->currOffset->y);		HX_STACK_VAR(drawY,"drawY");
								HX_STACK_LINE(3018)
								if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
									HX_STACK_LINE(3018)
									_this->x = (drawX * _this->scaleX);
									HX_STACK_LINE(3018)
									_this->y = (drawY * _this->scaleY);
								}
								else{
									HX_STACK_LINE(3018)
									_this->x = (drawX * _this->scaleX);
									HX_STACK_LINE(3018)
									_this->y = (drawY * _this->scaleY);
								}
							}
							else{
								HX_STACK_LINE(3018)
								if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
									HX_STACK_LINE(3018)
									_this->x = (a->colX * _this->scaleX);
									HX_STACK_LINE(3018)
									_this->y = (a->colY * _this->scaleY);
								}
								else{
									HX_STACK_LINE(3018)
									_this->x = (a->colX * _this->scaleX);
									HX_STACK_LINE(3018)
									_this->y = (a->colY * _this->scaleY);
								}
							}
						}
						HX_STACK_LINE(3019)
						{
							HX_STACK_LINE(3019)
							::com::stencyl::graphics::G _this = this->g;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(3019)
							_this->alpha = (int)1;
							HX_STACK_LINE(3019)
							_this->strokeSize = (int)0;
							HX_STACK_LINE(3019)
							_this->fillColor = (int)0;
							HX_STACK_LINE(3019)
							_this->strokeColor = (int)0;
							HX_STACK_LINE(3019)
							_this->font = _this->defaultFont;
						}
						HX_STACK_LINE(3020)
						{
							HX_STACK_LINE(3020)
							Dynamic listeners = a->whenDrawingListeners;		HX_STACK_VAR(listeners,"listeners");
							Dynamic value = this->g;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(3020)
							int r = (int)0;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(3020)
							while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
								HX_STACK_LINE(3020)
								try{
									HX_STACK_LINE(3020)
									Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
									HX_STACK_LINE(3020)
									f(value,(int)0,(int)0,listeners).Cast< Void >();
									HX_STACK_LINE(3020)
									if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
										HX_STACK_LINE(3020)
										(r)--;
									}
								}
								catch(Dynamic __e){
									if (__e.IsClass< ::String >() ){
										HX_STACK_BEGIN_CATCH
										::String e = __e;{
											HX_STACK_LINE(3020)
											::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3910,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners4")));
										}
									}
									else throw(__e);
								}
								HX_STACK_LINE(3020)
								(r)++;
							}
						}
					}
				}
;
			}
		}
		HX_STACK_LINE(3029)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::TileLayer > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::TileLayer >(this->tileLayers->iterator());  __it->hasNext(); ){
			::com::stencyl::models::scene::TileLayer layer = __it->next();
			{
				HX_STACK_LINE(3031)
				if (((bool(this->cameraMoved) || bool(this->tileUpdated)))){
					HX_STACK_LINE(3032)
					layer->draw(::Std_obj::_int(::com::stencyl::Engine_obj::cameraX),::Std_obj::_int(::com::stencyl::Engine_obj::cameraY));
				}
				HX_STACK_LINE(3036)
				layer->setPosition(::com::stencyl::Engine_obj::cameraX,::com::stencyl::Engine_obj::cameraY);
			}
;
		}
		HX_STACK_LINE(3039)
		this->tileUpdated = false;
		HX_STACK_LINE(3043)
		this->g->graphics = this->transitionLayer->get_graphics();
		HX_STACK_LINE(3050)
		this->g->canvas = this->transitionBitmapLayer;
		HX_STACK_LINE(3053)
		{
			HX_STACK_LINE(3053)
			::com::stencyl::graphics::G _this = this->g;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(3053)
			_this->drawActor = false;
			HX_STACK_LINE(3053)
			_this->actor = null();
			HX_STACK_LINE(3053)
			_this->x = (int)0;
			HX_STACK_LINE(3053)
			_this->y = (int)0;
		}
		HX_STACK_LINE(3054)
		this->g->graphics->clear();
		HX_STACK_LINE(3061)
		this->g->canvas->__Field(HX_CSTRING("graphics"),true)->__Field(HX_CSTRING("clear"),true)();
		HX_STACK_LINE(3064)
		{
			HX_STACK_LINE(3064)
			::com::stencyl::graphics::G _this = this->g;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(3064)
			_this->alpha = (int)1;
			HX_STACK_LINE(3064)
			_this->strokeSize = (int)0;
			HX_STACK_LINE(3064)
			_this->fillColor = (int)0;
			HX_STACK_LINE(3064)
			_this->strokeColor = (int)0;
			HX_STACK_LINE(3064)
			_this->font = _this->defaultFont;
		}
		HX_STACK_LINE(3065)
		{
			HX_STACK_LINE(3065)
			Dynamic listeners = this->whenDrawingListeners;		HX_STACK_VAR(listeners,"listeners");
			Dynamic value = this->g;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(3065)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(3065)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(3065)
				try{
					HX_STACK_LINE(3065)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(3065)
					f(value,(int)0,(int)0,listeners).Cast< Void >();
					HX_STACK_LINE(3065)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(3065)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(3065)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3910,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners4")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(3065)
				(r)++;
			}
		}
		HX_STACK_LINE(3068)
		if (((bool((this->leave != null())) && bool(this->leave->isActive())))){
			HX_STACK_LINE(3069)
			this->leave->draw(null());
		}
		else{
			HX_STACK_LINE(3074)
			if (((bool((this->enter != null())) && bool(this->enter->isActive())))){
				HX_STACK_LINE(3075)
				this->enter->draw(null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,draw,(void))

bool Engine_obj::isPaused( ){
	HX_STACK_PUSH("Engine::isPaused","com/stencyl/Engine.hx",2927);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2927)
	return ::com::stencyl::Engine_obj::paused;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,isPaused,return )

Void Engine_obj::unpause( ){
{
		HX_STACK_PUSH("Engine::unpause","com/stencyl/Engine.hx",2907);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2908)
		::com::stencyl::Engine_obj::paused = false;
		HX_STACK_LINE(2910)
		if ((!(((this->allActors->_h->_size == (int)0))))){
			HX_STACK_LINE(2911)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->allActors->keys());  __it->hasNext(); ){
				int actorID = __it->next();
				{
					struct _Function_3_1{
						inline static ::com::stencyl::models::Actor Block( ::com::stencyl::Engine_obj *__this,int &actorID){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2914);
							{
								HX_STACK_LINE(2914)
								::de::polygonal::ds::IntHashTable _this = __this->allActors;		HX_STACK_VAR(_this,"_this");
								struct _Function_4_1{
									inline static int Block( int &actorID,::de::polygonal::ds::IntHashTable _this){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2914);
										{
											HX_STACK_LINE(2914)
											::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(2914)
											int i = _this1->_hash->__get((int((actorID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
											struct _Function_5_1{
												inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &actorID){
													HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2914);
													{
														HX_STACK_LINE(2914)
														int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(2914)
														i = _this1->_data->__get((i + (int)2));
														HX_STACK_LINE(2914)
														while(((i != (int)-1))){
															HX_STACK_LINE(2914)
															if (((_this1->_data->__get(i) == actorID))){
																HX_STACK_LINE(2914)
																v = _this1->_data->__get((i + (int)1));
																HX_STACK_LINE(2914)
																break;
															}
															HX_STACK_LINE(2914)
															i = _this1->_data->__get((i + (int)2));
														}
														HX_STACK_LINE(2914)
														return v;
													}
													return null();
												}
											};
											HX_STACK_LINE(2914)
											return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == actorID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,_this1,actorID)) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(2914)
								int i = _Function_4_1::Block(actorID,_this);		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2914)
								return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::Actor(null()) : ::com::stencyl::models::Actor(_this->_vals->__GetItem(i)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2914)
					::com::stencyl::models::Actor a = _Function_3_1::Block(this,actorID);		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(2916)
					if (((a != null()))){
						HX_STACK_LINE(2917)
						a->unpause();
					}
				}
;
			}
		}
		HX_STACK_LINE(2923)
		{
			HX_STACK_LINE(2923)
			Dynamic listeners = this->whenPausedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2923)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2923)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2923)
				try{
					HX_STACK_LINE(2923)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2923)
					f(false,listeners).Cast< Void >();
					HX_STACK_LINE(2923)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2923)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2923)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2923)
				(r)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,unpause,(void))

Void Engine_obj::pause( ){
{
		HX_STACK_PUSH("Engine::pause","com/stencyl/Engine.hx",2882);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2883)
		if ((this->isTransitioning())){
			HX_STACK_LINE(2884)
			return null();
		}
		HX_STACK_LINE(2888)
		::com::stencyl::Engine_obj::paused = true;
		HX_STACK_LINE(2890)
		if ((!(((this->allActors->_h->_size == (int)0))))){
			HX_STACK_LINE(2891)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->allActors->keys());  __it->hasNext(); ){
				int actorID = __it->next();
				{
					struct _Function_3_1{
						inline static ::com::stencyl::models::Actor Block( ::com::stencyl::Engine_obj *__this,int &actorID){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2894);
							{
								HX_STACK_LINE(2894)
								::de::polygonal::ds::IntHashTable _this = __this->allActors;		HX_STACK_VAR(_this,"_this");
								struct _Function_4_1{
									inline static int Block( int &actorID,::de::polygonal::ds::IntHashTable _this){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2894);
										{
											HX_STACK_LINE(2894)
											::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(2894)
											int i = _this1->_hash->__get((int((actorID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
											struct _Function_5_1{
												inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &actorID){
													HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2894);
													{
														HX_STACK_LINE(2894)
														int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(2894)
														i = _this1->_data->__get((i + (int)2));
														HX_STACK_LINE(2894)
														while(((i != (int)-1))){
															HX_STACK_LINE(2894)
															if (((_this1->_data->__get(i) == actorID))){
																HX_STACK_LINE(2894)
																v = _this1->_data->__get((i + (int)1));
																HX_STACK_LINE(2894)
																break;
															}
															HX_STACK_LINE(2894)
															i = _this1->_data->__get((i + (int)2));
														}
														HX_STACK_LINE(2894)
														return v;
													}
													return null();
												}
											};
											HX_STACK_LINE(2894)
											return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == actorID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,_this1,actorID)) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(2894)
								int i = _Function_4_1::Block(actorID,_this);		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2894)
								return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::Actor(null()) : ::com::stencyl::models::Actor(_this->_vals->__GetItem(i)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2894)
					::com::stencyl::models::Actor a = _Function_3_1::Block(this,actorID);		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(2896)
					if (((a != null()))){
						HX_STACK_LINE(2897)
						a->pause();
					}
				}
;
			}
		}
		HX_STACK_LINE(2903)
		{
			HX_STACK_LINE(2903)
			Dynamic listeners = this->whenPausedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2903)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2903)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2903)
				try{
					HX_STACK_LINE(2903)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2903)
					f(true,listeners).Cast< Void >();
					HX_STACK_LINE(2903)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2903)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2903)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2903)
				(r)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,pause,(void))

Void Engine_obj::cameraFollow( ::com::stencyl::models::Actor actor,hx::Null< bool >  __o_lockX,hx::Null< bool >  __o_lockY){
bool lockX = __o_lockX.Default(true);
bool lockY = __o_lockY.Default(true);
	HX_STACK_PUSH("Engine::cameraFollow","com/stencyl/Engine.hx",2869);
	HX_STACK_THIS(this);
	HX_STACK_ARG(actor,"actor");
	HX_STACK_ARG(lockX,"lockX");
	HX_STACK_ARG(lockY,"lockY");
{
		HX_STACK_LINE(2869)
		this->camera->setLocation((actor->colX + (Float(actor->cacheWidth) / Float((int)2))),(actor->colY + (Float(actor->cacheHeight) / Float((int)2))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,cameraFollow,(void))

Void Engine_obj::stopShakingScreen( ){
{
		HX_STACK_PUSH("Engine::stopShakingScreen","com/stencyl/Engine.hx",2856);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2857)
		this->shakeTimer = (int)0;
		HX_STACK_LINE(2858)
		this->isShaking = false;
		HX_STACK_LINE(2860)
		this->master->set_x((int)0);
		HX_STACK_LINE(2861)
		this->master->set_y((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,stopShakingScreen,(void))

Void Engine_obj::shakeScreen( Float intensity,Float duration){
{
		HX_STACK_PUSH("Engine::shakeScreen","com/stencyl/Engine.hx",2849);
		HX_STACK_THIS(this);
		HX_STACK_ARG(intensity,"intensity");
		HX_STACK_ARG(duration,"duration");
		HX_STACK_LINE(2850)
		this->shakeTimer = ::Std_obj::_int((::com::stencyl::Engine_obj::MS_PER_SEC * duration));
		HX_STACK_LINE(2851)
		this->isShaking = true;
		HX_STACK_LINE(2852)
		this->shakeIntensity = intensity;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,shakeScreen,(void))

Void Engine_obj::removeTask( ::com::stencyl::behavior::TimedTask taskToRemove){
{
		HX_STACK_PUSH("Engine::removeTask","com/stencyl/Engine.hx",2840);
		HX_STACK_THIS(this);
		HX_STACK_ARG(taskToRemove,"taskToRemove");
		HX_STACK_LINE(2840)
		this->tasks->remove(taskToRemove);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,removeTask,(void))

Void Engine_obj::addTask( ::com::stencyl::behavior::TimedTask task){
{
		HX_STACK_PUSH("Engine::addTask","com/stencyl/Engine.hx",2835);
		HX_STACK_THIS(this);
		HX_STACK_ARG(task,"task");
		HX_STACK_LINE(2835)
		this->tasks->push(task);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,addTask,(void))

Void Engine_obj::soundFinished( int channelNum){
{
		HX_STACK_PUSH("Engine::soundFinished","com/stencyl/Engine.hx",2808);
		HX_STACK_THIS(this);
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_LINE(2809)
		::com::stencyl::models::SoundChannel sc = hx::TCast< com::stencyl::models::SoundChannel >::cast(this->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >());		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(2811)
		Dynamic channelListeners = this->soundListeners->get(channelNum);		HX_STACK_VAR(channelListeners,"channelListeners");
		HX_STACK_LINE(2812)
		Dynamic clipListeners = this->soundListeners->get(sc->currentClip);		HX_STACK_VAR(clipListeners,"clipListeners");
		HX_STACK_LINE(2817)
		if (((channelListeners != null()))){
			HX_STACK_LINE(2819)
			Dynamic listeners = channelListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2819)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2819)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2819)
				try{
					HX_STACK_LINE(2819)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2819)
					f(listeners).Cast< Void >();
					HX_STACK_LINE(2819)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2819)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2819)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3829,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2819)
				(r)++;
			}
		}
		HX_STACK_LINE(2822)
		if (((clipListeners != null()))){
			HX_STACK_LINE(2824)
			Dynamic listeners = clipListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2824)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2824)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2824)
				try{
					HX_STACK_LINE(2824)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2824)
					f(listeners).Cast< Void >();
					HX_STACK_LINE(2824)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2824)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2824)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3829,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2824)
				(r)++;
			}
		}
		HX_STACK_LINE(2827)
		sc->currentSound = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,soundFinished,(void))

Void Engine_obj::handleCollision( ::com::stencyl::models::Actor a,::com::stencyl::models::actor::Collision event){
{
		HX_STACK_PUSH("Engine::handleCollision","com/stencyl/Engine.hx",2666);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(2667)
		int type1 = a->typeID;		HX_STACK_VAR(type1,"type1");
		HX_STACK_LINE(2668)
		int type2 = event->otherActor->typeID;		HX_STACK_VAR(type2,"type2");
		HX_STACK_LINE(2670)
		int group1 = (int)0;		HX_STACK_VAR(group1,"group1");
		HX_STACK_LINE(2671)
		int group2 = (int)0;		HX_STACK_VAR(group2,"group2");
		HX_STACK_LINE(2673)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(2675)
			group1 = event->thisActor->groupID;
			HX_STACK_LINE(2676)
			group2 = event->otherActor->groupID;
		}
		else{
			HX_STACK_LINE(2681)
			if (((event->thisShape != null()))){
				HX_STACK_LINE(2683)
				int value = event->thisShape->groupID;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(2685)
				if (((value == ::com::stencyl::models::GameModel_obj::INHERIT_ID))){
					HX_STACK_LINE(2687)
					::box2D::dynamics::B2Body body = event->thisShape->getBody();		HX_STACK_VAR(body,"body");
					HX_STACK_LINE(2689)
					if (((body != null()))){
						HX_STACK_LINE(2690)
						value = body->getUserData()->__Field(HX_CSTRING("groupID"),true);
					}
				}
				HX_STACK_LINE(2695)
				group1 = (::com::stencyl::models::Actor_obj::GROUP_OFFSET + value);
			}
			else{
				HX_STACK_LINE(2699)
				group1 = (::com::stencyl::models::Actor_obj::GROUP_OFFSET + event->thisActor->groupID);
			}
			HX_STACK_LINE(2703)
			if (((event->otherShape != null()))){
				HX_STACK_LINE(2705)
				int value = event->otherShape->groupID;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(2707)
				if (((value == ::com::stencyl::models::GameModel_obj::INHERIT_ID))){
					HX_STACK_LINE(2709)
					::box2D::dynamics::B2Body body = event->otherShape->getBody();		HX_STACK_VAR(body,"body");
					HX_STACK_LINE(2711)
					if (((body != null()))){
						HX_STACK_LINE(2712)
						value = body->getUserData()->__Field(HX_CSTRING("groupID"),true);
					}
				}
				HX_STACK_LINE(2717)
				group2 = (::com::stencyl::models::Actor_obj::GROUP_OFFSET + value);
			}
			else{
				HX_STACK_LINE(2721)
				group2 = (::com::stencyl::models::Actor_obj::GROUP_OFFSET + event->otherActor->groupID);
			}
		}
		HX_STACK_LINE(2727)
		if (((this->collisionPairs != null()))){
			struct _Function_2_1{
				inline static bool Block( ::com::stencyl::Engine_obj *__this,::com::stencyl::models::Actor &a){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2729);
					{
						HX_STACK_LINE(2729)
						int key = a->ID;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static bool Block( ::com::stencyl::Engine_obj *__this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2729);
								{
									HX_STACK_LINE(2729)
									::de::polygonal::ds::IntIntHashTable _this = __this->collisionPairs->_h;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2729)
									int i = _this->_hash->__get((int((key * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static bool Block( int &i,::de::polygonal::ds::IntIntHashTable _this,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2729);
											{
												HX_STACK_LINE(2729)
												bool exists = false;		HX_STACK_VAR(exists,"exists");
												HX_STACK_LINE(2729)
												i = _this->_data->__get((i + (int)2));
												HX_STACK_LINE(2729)
												while(((i != (int)-1))){
													HX_STACK_LINE(2729)
													if (((_this->_data->__get(i) == key))){
														HX_STACK_LINE(2729)
														exists = true;
														HX_STACK_LINE(2729)
														break;
													}
													HX_STACK_LINE(2729)
													i = _this->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2729)
												return exists;
											}
											return null();
										}
									};
									HX_STACK_LINE(2729)
									return (  (((i == (int)-1))) ? bool(false) : bool((  (((_this->_data->__get(i) == key))) ? bool(true) : bool(_Function_4_1::Block(i,_this,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2729)
						return _Function_3_1::Block(__this,key);
					}
					return null();
				}
			};
			HX_STACK_LINE(2729)
			if ((!(_Function_2_1::Block(this,a)))){
				HX_STACK_LINE(2731)
				::de::polygonal::ds::IntHashTable _this = this->collisionPairs;		HX_STACK_VAR(_this,"_this");
				int key = a->ID;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(2731)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(2731)
				if (((_this->_h->_size == _this->_h->_capacity))){
					HX_STACK_LINE(2731)
					int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(2731)
					int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2731);
							{
								HX_STACK_LINE(2731)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(2731)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(2731)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(2731)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(2731)
					Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(2731)
					{
						HX_STACK_LINE(2731)
						Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2731)
						if (((max == (int)-1))){
							HX_STACK_LINE(2731)
							max = src->length;
						}
						HX_STACK_LINE(2731)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2731)
						{
							HX_STACK_LINE(2731)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2731)
							while(((_g < max))){
								HX_STACK_LINE(2731)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2731)
								tmp[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(2731)
						tmp;
					}
					HX_STACK_LINE(2731)
					_this->_next = tmp;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2731);
							{
								HX_STACK_LINE(2731)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(2731)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(2731)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(2731)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(2731)
					Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(2731)
					{
						HX_STACK_LINE(2731)
						Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2731)
						if (((max == (int)-1))){
							HX_STACK_LINE(2731)
							max = src->length;
						}
						HX_STACK_LINE(2731)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2731)
						{
							HX_STACK_LINE(2731)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2731)
							while(((_g < max))){
								HX_STACK_LINE(2731)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2731)
								tmp1[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(2731)
						tmp1;
					}
					HX_STACK_LINE(2731)
					_this->_keys = tmp1;
					HX_STACK_LINE(2731)
					{
						HX_STACK_LINE(2731)
						int _g = oldSize;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2731)
						while(((_g < newSize))){
							HX_STACK_LINE(2731)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2731)
							_this->_keys[i] = (int)-2147483647;
						}
					}
					HX_STACK_LINE(2731)
					{
						HX_STACK_LINE(2731)
						int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2731)
						while(((_g1 < _g))){
							HX_STACK_LINE(2731)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2731)
							_this->_next[i] = (i + (int)1);
						}
					}
					HX_STACK_LINE(2731)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(2731)
					_this->_free = oldSize;
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2731);
							{
								HX_STACK_LINE(2731)
								Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(2731)
								a1 = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(2731)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(2731)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(2731)
					Array< ::Dynamic > tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(2731)
					{
						HX_STACK_LINE(2731)
						Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2731)
						if (((max == (int)-1))){
							HX_STACK_LINE(2731)
							max = src->length;
						}
						HX_STACK_LINE(2731)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2731)
						{
							HX_STACK_LINE(2731)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2731)
							while(((_g < max))){
								HX_STACK_LINE(2731)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2731)
								tmp2[(j)++] = src->__get(i).StaticCast< ::haxe::ds::IntMap >();
							}
						}
						HX_STACK_LINE(2731)
						tmp2;
					}
					HX_STACK_LINE(2731)
					_this->_vals = tmp2;
					HX_STACK_LINE(2731)
					(_this->_sizeLevel)++;
				}
				HX_STACK_LINE(2731)
				{
					HX_STACK_LINE(2731)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(2731)
					if (((_this1->_size == _this1->_capacity))){
						HX_STACK_LINE(2731)
						if ((_this1->_isResizable)){
							HX_STACK_LINE(2731)
							_this1->_expand();
						}
					}
					HX_STACK_LINE(2731)
					int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(2731)
					_this1->_free = _this1->_next->__get(_this1->_free);
					HX_STACK_LINE(2731)
					_this1->_data[i] = key;
					HX_STACK_LINE(2731)
					_this1->_data[(i + (int)1)] = _this->_free;
					HX_STACK_LINE(2731)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(2731)
					int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(2731)
					if (((j == (int)-1))){
						HX_STACK_LINE(2731)
						_this1->_hash[b] = i;
						HX_STACK_LINE(2731)
						(_this1->_size)++;
						HX_STACK_LINE(2731)
						true;
					}
					else{
						HX_STACK_LINE(2731)
						bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
						HX_STACK_LINE(2731)
						int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2731)
						while(((t != (int)-1))){
							HX_STACK_LINE(2731)
							if (((_this1->_data->__get(t) == key))){
								HX_STACK_LINE(2731)
								first = false;
							}
							HX_STACK_LINE(2731)
							j = t;
							HX_STACK_LINE(2731)
							t = _this1->_data->__get((t + (int)2));
						}
						HX_STACK_LINE(2731)
						_this1->_data[(j + (int)2)] = i;
						HX_STACK_LINE(2731)
						(_this1->_size)++;
						HX_STACK_LINE(2731)
						first;
					}
				}
				HX_STACK_LINE(2731)
				hx::IndexRef((_this->_vals).mPtr,_this->_free) = ::haxe::ds::IntMap_obj::__new();
				HX_STACK_LINE(2731)
				_this->_keys[_this->_free] = key;
				HX_STACK_LINE(2731)
				_this->_free = _this->_next->__get(_this->_free);
				HX_STACK_LINE(2731)
				true;
			}
			struct _Function_2_2{
				inline static bool Block( ::com::stencyl::Engine_obj *__this,::com::stencyl::models::actor::Collision &event){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2734);
					{
						HX_STACK_LINE(2734)
						int key = event->otherActor->ID;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static bool Block( ::com::stencyl::Engine_obj *__this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2734);
								{
									HX_STACK_LINE(2734)
									::de::polygonal::ds::IntIntHashTable _this = __this->collisionPairs->_h;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2734)
									int i = _this->_hash->__get((int((key * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static bool Block( int &i,::de::polygonal::ds::IntIntHashTable _this,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2734);
											{
												HX_STACK_LINE(2734)
												bool exists = false;		HX_STACK_VAR(exists,"exists");
												HX_STACK_LINE(2734)
												i = _this->_data->__get((i + (int)2));
												HX_STACK_LINE(2734)
												while(((i != (int)-1))){
													HX_STACK_LINE(2734)
													if (((_this->_data->__get(i) == key))){
														HX_STACK_LINE(2734)
														exists = true;
														HX_STACK_LINE(2734)
														break;
													}
													HX_STACK_LINE(2734)
													i = _this->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2734)
												return exists;
											}
											return null();
										}
									};
									HX_STACK_LINE(2734)
									return (  (((i == (int)-1))) ? bool(false) : bool((  (((_this->_data->__get(i) == key))) ? bool(true) : bool(_Function_4_1::Block(i,_this,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2734)
						return _Function_3_1::Block(__this,key);
					}
					return null();
				}
			};
			HX_STACK_LINE(2734)
			if ((!(_Function_2_2::Block(this,event)))){
				HX_STACK_LINE(2736)
				::de::polygonal::ds::IntHashTable _this = this->collisionPairs;		HX_STACK_VAR(_this,"_this");
				int key = event->otherActor->ID;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(2736)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(2736)
				if (((_this->_h->_size == _this->_h->_capacity))){
					HX_STACK_LINE(2736)
					int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(2736)
					int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2736);
							{
								HX_STACK_LINE(2736)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(2736)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(2736)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(2736)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(2736)
					Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(2736)
					{
						HX_STACK_LINE(2736)
						Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2736)
						if (((max == (int)-1))){
							HX_STACK_LINE(2736)
							max = src->length;
						}
						HX_STACK_LINE(2736)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2736)
						{
							HX_STACK_LINE(2736)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2736)
							while(((_g < max))){
								HX_STACK_LINE(2736)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2736)
								tmp[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(2736)
						tmp;
					}
					HX_STACK_LINE(2736)
					_this->_next = tmp;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2736);
							{
								HX_STACK_LINE(2736)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(2736)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(2736)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(2736)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(2736)
					Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(2736)
					{
						HX_STACK_LINE(2736)
						Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2736)
						if (((max == (int)-1))){
							HX_STACK_LINE(2736)
							max = src->length;
						}
						HX_STACK_LINE(2736)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2736)
						{
							HX_STACK_LINE(2736)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2736)
							while(((_g < max))){
								HX_STACK_LINE(2736)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2736)
								tmp1[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(2736)
						tmp1;
					}
					HX_STACK_LINE(2736)
					_this->_keys = tmp1;
					HX_STACK_LINE(2736)
					{
						HX_STACK_LINE(2736)
						int _g = oldSize;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2736)
						while(((_g < newSize))){
							HX_STACK_LINE(2736)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2736)
							_this->_keys[i] = (int)-2147483647;
						}
					}
					HX_STACK_LINE(2736)
					{
						HX_STACK_LINE(2736)
						int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2736)
						while(((_g1 < _g))){
							HX_STACK_LINE(2736)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2736)
							_this->_next[i] = (i + (int)1);
						}
					}
					HX_STACK_LINE(2736)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(2736)
					_this->_free = oldSize;
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2736);
							{
								HX_STACK_LINE(2736)
								Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(2736)
								a1 = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(2736)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(2736)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(2736)
					Array< ::Dynamic > tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(2736)
					{
						HX_STACK_LINE(2736)
						Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2736)
						if (((max == (int)-1))){
							HX_STACK_LINE(2736)
							max = src->length;
						}
						HX_STACK_LINE(2736)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2736)
						{
							HX_STACK_LINE(2736)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2736)
							while(((_g < max))){
								HX_STACK_LINE(2736)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2736)
								tmp2[(j)++] = src->__get(i).StaticCast< ::haxe::ds::IntMap >();
							}
						}
						HX_STACK_LINE(2736)
						tmp2;
					}
					HX_STACK_LINE(2736)
					_this->_vals = tmp2;
					HX_STACK_LINE(2736)
					(_this->_sizeLevel)++;
				}
				HX_STACK_LINE(2736)
				{
					HX_STACK_LINE(2736)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(2736)
					if (((_this1->_size == _this1->_capacity))){
						HX_STACK_LINE(2736)
						if ((_this1->_isResizable)){
							HX_STACK_LINE(2736)
							_this1->_expand();
						}
					}
					HX_STACK_LINE(2736)
					int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(2736)
					_this1->_free = _this1->_next->__get(_this1->_free);
					HX_STACK_LINE(2736)
					_this1->_data[i] = key;
					HX_STACK_LINE(2736)
					_this1->_data[(i + (int)1)] = _this->_free;
					HX_STACK_LINE(2736)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(2736)
					int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(2736)
					if (((j == (int)-1))){
						HX_STACK_LINE(2736)
						_this1->_hash[b] = i;
						HX_STACK_LINE(2736)
						(_this1->_size)++;
						HX_STACK_LINE(2736)
						true;
					}
					else{
						HX_STACK_LINE(2736)
						bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
						HX_STACK_LINE(2736)
						int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2736)
						while(((t != (int)-1))){
							HX_STACK_LINE(2736)
							if (((_this1->_data->__get(t) == key))){
								HX_STACK_LINE(2736)
								first = false;
							}
							HX_STACK_LINE(2736)
							j = t;
							HX_STACK_LINE(2736)
							t = _this1->_data->__get((t + (int)2));
						}
						HX_STACK_LINE(2736)
						_this1->_data[(j + (int)2)] = i;
						HX_STACK_LINE(2736)
						(_this1->_size)++;
						HX_STACK_LINE(2736)
						first;
					}
				}
				HX_STACK_LINE(2736)
				hx::IndexRef((_this->_vals).mPtr,_this->_free) = ::haxe::ds::IntMap_obj::__new();
				HX_STACK_LINE(2736)
				_this->_keys[_this->_free] = key;
				HX_STACK_LINE(2736)
				_this->_free = _this->_next->__get(_this->_free);
				HX_STACK_LINE(2736)
				true;
			}
			struct _Function_2_3{
				inline static ::haxe::ds::IntMap Block( ::com::stencyl::Engine_obj *__this,::com::stencyl::models::Actor &a){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2739);
					{
						HX_STACK_LINE(2739)
						::de::polygonal::ds::IntHashTable _this = __this->collisionPairs;		HX_STACK_VAR(_this,"_this");
						int key = a->ID;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2739);
								{
									HX_STACK_LINE(2739)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(2739)
									int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2739);
											{
												HX_STACK_LINE(2739)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2739)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(2739)
												while(((i != (int)-1))){
													HX_STACK_LINE(2739)
													if (((_this1->_data->__get(i) == key))){
														HX_STACK_LINE(2739)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(2739)
														break;
													}
													HX_STACK_LINE(2739)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2739)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(2739)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2739)
						int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2739)
						return (  (((i == (int)-2147483647))) ? ::haxe::ds::IntMap(null()) : ::haxe::ds::IntMap(_this->_vals->__GetItem(i)) );
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static ::haxe::ds::IntMap Block( ::com::stencyl::Engine_obj *__this,::com::stencyl::models::actor::Collision &event){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2739);
					{
						HX_STACK_LINE(2739)
						::de::polygonal::ds::IntHashTable _this = __this->collisionPairs;		HX_STACK_VAR(_this,"_this");
						int key = event->otherActor->ID;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2739);
								{
									HX_STACK_LINE(2739)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(2739)
									int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2739);
											{
												HX_STACK_LINE(2739)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2739)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(2739)
												while(((i != (int)-1))){
													HX_STACK_LINE(2739)
													if (((_this1->_data->__get(i) == key))){
														HX_STACK_LINE(2739)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(2739)
														break;
													}
													HX_STACK_LINE(2739)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2739)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(2739)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2739)
						int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2739)
						return (  (((i == (int)-2147483647))) ? ::haxe::ds::IntMap(null()) : ::haxe::ds::IntMap(_this->_vals->__GetItem(i)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(2739)
			if (((bool((_Function_2_3::Block(this,a))->exists(event->otherActor->ID)) || bool((_Function_2_4::Block(this,event))->exists(a->ID))))){
				HX_STACK_LINE(2740)
				return null();
			}
		}
		HX_STACK_LINE(2745)
		if (((bool((type1 > (int)-1)) || bool((type2 > (int)-1))))){
			HX_STACK_LINE(2747)
			if (((bool((bool(!(event->otherCollidedWithTerrain)) && bool(this->collisionListeners->exists(type1)))) && bool(this->collisionListeners->get(type1)->__Field(HX_CSTRING("exists"),true)(type2))))){
				HX_STACK_LINE(2749)
				Dynamic listeners = this->collisionListeners->get(type1)->__Field(HX_CSTRING("get"),true)(type2);		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2750)
				{
					HX_STACK_LINE(2750)
					int r = (int)0;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(2750)
					while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(2750)
						try{
							HX_STACK_LINE(2750)
							Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(2750)
							f(event,listeners).Cast< Void >();
							HX_STACK_LINE(2750)
							if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
								HX_STACK_LINE(2750)
								(r)--;
							}
						}
						catch(Dynamic __e){
							if (__e.IsClass< ::String >() ){
								HX_STACK_BEGIN_CATCH
								::String e = __e;{
									HX_STACK_LINE(2750)
									::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
								}
							}
							else throw(__e);
						}
						HX_STACK_LINE(2750)
						(r)++;
					}
				}
				HX_STACK_LINE(2752)
				if (((listeners->__Field(HX_CSTRING("length"),true) == (int)0))){
					HX_STACK_LINE(2753)
					this->collisionListeners->get(type1)->__Field(HX_CSTRING("delete"),true)(type2);
				}
			}
			HX_STACK_LINE(2758)
			if (((bool((bool((type1 != type2)) && bool(this->collisionListeners->exists(type2)))) && bool(this->collisionListeners->get(type2)->__Field(HX_CSTRING("exists"),true)(type1))))){
				HX_STACK_LINE(2760)
				Dynamic listeners = this->collisionListeners->get(type2)->__Field(HX_CSTRING("get"),true)(type1);		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2761)
				::com::stencyl::models::actor::Collision reverseEvent = event->switchData();		HX_STACK_VAR(reverseEvent,"reverseEvent");
				HX_STACK_LINE(2763)
				{
					HX_STACK_LINE(2763)
					int r = (int)0;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(2763)
					while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(2763)
						try{
							HX_STACK_LINE(2763)
							Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(2763)
							f(reverseEvent,listeners).Cast< Void >();
							HX_STACK_LINE(2763)
							if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
								HX_STACK_LINE(2763)
								(r)--;
							}
						}
						catch(Dynamic __e){
							if (__e.IsClass< ::String >() ){
								HX_STACK_BEGIN_CATCH
								::String e = __e;{
									HX_STACK_LINE(2763)
									::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
								}
							}
							else throw(__e);
						}
						HX_STACK_LINE(2763)
						(r)++;
					}
				}
				HX_STACK_LINE(2765)
				if (((listeners->__Field(HX_CSTRING("length"),true) == (int)0))){
					HX_STACK_LINE(2766)
					this->collisionListeners->get(type2)->__Field(HX_CSTRING("delete"),true)(type1);
				}
			}
		}
		HX_STACK_LINE(2772)
		if (((bool((group1 > (int)0)) && bool((group2 > (int)0))))){
			HX_STACK_LINE(2774)
			if (((bool(this->collisionListeners->exists(group1)) && bool(this->collisionListeners->get(group1)->__Field(HX_CSTRING("exists"),true)(group2))))){
				HX_STACK_LINE(2776)
				Dynamic listeners = this->collisionListeners->get(group1)->__Field(HX_CSTRING("get"),true)(group2);		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2777)
				{
					HX_STACK_LINE(2777)
					int r = (int)0;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(2777)
					while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(2777)
						try{
							HX_STACK_LINE(2777)
							Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(2777)
							f(event,listeners).Cast< Void >();
							HX_STACK_LINE(2777)
							if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
								HX_STACK_LINE(2777)
								(r)--;
							}
						}
						catch(Dynamic __e){
							if (__e.IsClass< ::String >() ){
								HX_STACK_BEGIN_CATCH
								::String e = __e;{
									HX_STACK_LINE(2777)
									::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
								}
							}
							else throw(__e);
						}
						HX_STACK_LINE(2777)
						(r)++;
					}
				}
				HX_STACK_LINE(2779)
				if (((listeners->__Field(HX_CSTRING("length"),true) == (int)0))){
					HX_STACK_LINE(2780)
					this->collisionListeners->get(group1)->__Field(HX_CSTRING("delete"),true)(group2);
				}
			}
			HX_STACK_LINE(2785)
			if (((bool((bool((group1 != group2)) && bool(this->collisionListeners->exists(group2)))) && bool(this->collisionListeners->get(group2)->__Field(HX_CSTRING("exists"),true)(group1))))){
				HX_STACK_LINE(2787)
				Dynamic listeners = this->collisionListeners->get(group2)->__Field(HX_CSTRING("get"),true)(group1);		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2788)
				::com::stencyl::models::actor::Collision reverseEvent = event->switchData();		HX_STACK_VAR(reverseEvent,"reverseEvent");
				HX_STACK_LINE(2790)
				{
					HX_STACK_LINE(2790)
					int r = (int)0;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(2790)
					while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(2790)
						try{
							HX_STACK_LINE(2790)
							Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(2790)
							f(reverseEvent,listeners).Cast< Void >();
							HX_STACK_LINE(2790)
							if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
								HX_STACK_LINE(2790)
								(r)--;
							}
						}
						catch(Dynamic __e){
							if (__e.IsClass< ::String >() ){
								HX_STACK_BEGIN_CATCH
								::String e = __e;{
									HX_STACK_LINE(2790)
									::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
								}
							}
							else throw(__e);
						}
						HX_STACK_LINE(2790)
						(r)++;
					}
				}
				HX_STACK_LINE(2792)
				if (((listeners->__Field(HX_CSTRING("length"),true) == (int)0))){
					HX_STACK_LINE(2793)
					this->collisionListeners->get(group2)->__Field(HX_CSTRING("delete"),true)(group1);
				}
			}
		}
		HX_STACK_LINE(2800)
		if (((this->collisionPairs != null()))){
			struct _Function_2_1{
				inline static ::haxe::ds::IntMap Block( ::com::stencyl::Engine_obj *__this,::com::stencyl::models::Actor &a){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2802);
					{
						HX_STACK_LINE(2802)
						::de::polygonal::ds::IntHashTable _this = __this->collisionPairs;		HX_STACK_VAR(_this,"_this");
						int key = a->ID;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2802);
								{
									HX_STACK_LINE(2802)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(2802)
									int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2802);
											{
												HX_STACK_LINE(2802)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2802)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(2802)
												while(((i != (int)-1))){
													HX_STACK_LINE(2802)
													if (((_this1->_data->__get(i) == key))){
														HX_STACK_LINE(2802)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(2802)
														break;
													}
													HX_STACK_LINE(2802)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2802)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(2802)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2802)
						int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2802)
						return (  (((i == (int)-2147483647))) ? ::haxe::ds::IntMap(null()) : ::haxe::ds::IntMap(_this->_vals->__GetItem(i)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(2802)
			(_Function_2_1::Block(this,a))->set(event->otherActor->ID,false);
			struct _Function_2_2{
				inline static ::haxe::ds::IntMap Block( ::com::stencyl::Engine_obj *__this,::com::stencyl::models::actor::Collision &event){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2803);
					{
						HX_STACK_LINE(2803)
						::de::polygonal::ds::IntHashTable _this = __this->collisionPairs;		HX_STACK_VAR(_this,"_this");
						int key = event->otherActor->ID;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2803);
								{
									HX_STACK_LINE(2803)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(2803)
									int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2803);
											{
												HX_STACK_LINE(2803)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2803)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(2803)
												while(((i != (int)-1))){
													HX_STACK_LINE(2803)
													if (((_this1->_data->__get(i) == key))){
														HX_STACK_LINE(2803)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(2803)
														break;
													}
													HX_STACK_LINE(2803)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2803)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(2803)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2803)
						int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2803)
						return (  (((i == (int)-2147483647))) ? ::haxe::ds::IntMap(null()) : ::haxe::ds::IntMap(_this->_vals->__GetItem(i)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(2803)
			(_Function_2_2::Block(this,event))->set(a->ID,false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,handleCollision,(void))

Void Engine_obj::focusChanged( bool lost){
{
		HX_STACK_PUSH("Engine::focusChanged","com/stencyl/Engine.hx",2655);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lost,"lost");
		HX_STACK_LINE(2656)
		if (((this->whenFocusChangedListeners == null()))){
			HX_STACK_LINE(2657)
			return null();
		}
		HX_STACK_LINE(2661)
		{
			HX_STACK_LINE(2661)
			Dynamic listeners = this->whenFocusChangedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2661)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2661)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2661)
				try{
					HX_STACK_LINE(2661)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2661)
					f(lost,listeners).Cast< Void >();
					HX_STACK_LINE(2661)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2661)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2661)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2661)
				(r)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,focusChanged,(void))

Void Engine_obj::onFocusLost( ::flash::events::Event event){
{
		HX_STACK_PUSH("Engine::onFocusLost","com/stencyl/Engine.hx",2650);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(2650)
		this->focusChanged(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onFocusLost,(void))

Void Engine_obj::onFocus( ::flash::events::Event event){
{
		HX_STACK_PUSH("Engine::onFocus","com/stencyl/Engine.hx",2645);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(2645)
		this->focusChanged(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onFocus,(void))

Void Engine_obj::postUpdate( Float currTime){
{
		HX_STACK_PUSH("Engine::postUpdate","com/stencyl/Engine.hx",2582);
		HX_STACK_THIS(this);
		HX_STACK_ARG(currTime,"currTime");
		HX_STACK_LINE(2583)
		while(((this->acc > ::com::stencyl::Engine_obj::STEP_SIZE))){
			HX_STACK_LINE(2585)
			this->update(::com::stencyl::Engine_obj::STEP_SIZE);
			HX_STACK_LINE(2586)
			hx::SubEq(this->acc,::com::stencyl::Engine_obj::STEP_SIZE);
			HX_STACK_LINE(2587)
			::com::stencyl::Input_obj::update();
		}
		HX_STACK_LINE(2590)
		this->lastTime = currTime;
		HX_STACK_LINE(2593)
		if ((!(((this->allActors->_h->_size == (int)0))))){
			HX_STACK_LINE(2594)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >(this->allActors->iterator());  __it->hasNext(); ){
				::com::stencyl::models::Actor a = __it->next();
				{
					HX_STACK_LINE(2597)
					if (((bool((a == null())) || bool((bool(!(a->isLightweight)) && bool((a->body == null()))))))){
						HX_STACK_LINE(2598)
						continue;
					}
					HX_STACK_LINE(2602)
					if (((bool((a->currAnimationAsAnim != null())) && bool(a->currAnimationAsAnim->__Field(HX_CSTRING("needsBitmapUpdate"),true)())))){
						HX_STACK_LINE(2603)
						a->currAnimationAsAnim->__Field(HX_CSTRING("updateBitmap"),true)();
					}
					HX_STACK_LINE(2607)
					if (((bool(a->dead) || bool(a->dying)))){
						HX_STACK_LINE(2609)
						this->removeActor(a);
						HX_STACK_LINE(2610)
						continue;
					}
					else{
						HX_STACK_LINE(2613)
						if (((bool(a->updateMatrix) || bool(a->resetOrigin)))){
							HX_STACK_LINE(2615)
							a->updateDrawingMatrix();
							HX_STACK_LINE(2616)
							a->updateMatrix = false;
							HX_STACK_LINE(2617)
							a->resetOrigin = false;
						}
					}
					HX_STACK_LINE(2620)
					if (((a->body == null()))){
						HX_STACK_LINE(2621)
						continue;
					}
				}
;
			}
		}
		HX_STACK_LINE(2629)
		int tempX = ::Std_obj::_int((Float(::com::stencyl::Engine_obj::cameraX) / Float(this->scene->tileWidth)));		HX_STACK_VAR(tempX,"tempX");
		HX_STACK_LINE(2630)
		int tempY = ::Std_obj::_int((Float(::com::stencyl::Engine_obj::cameraY) / Float(this->scene->tileHeight)));		HX_STACK_VAR(tempY,"tempY");
		HX_STACK_LINE(2632)
		this->cameraMoved = !(((bool((this->cameraOldX == tempX)) && bool((this->cameraOldY == tempY)))));
		HX_STACK_LINE(2634)
		this->cameraOldX = tempX;
		HX_STACK_LINE(2635)
		this->cameraOldY = tempY;
		HX_STACK_LINE(2637)
		this->draw();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,postUpdate,(void))

Void Engine_obj::onUpdate( ::flash::events::Event event){
{
		HX_STACK_PUSH("Engine::onUpdate","com/stencyl/Engine.hx",2535);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(2536)
		Float currTime = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(currTime,"currTime");
		HX_STACK_LINE(2537)
		Float elapsedTime = (currTime - this->lastTime);		HX_STACK_VAR(elapsedTime,"elapsedTime");
		HX_STACK_LINE(2541)
		if (((elapsedTime >= (int)200))){
			HX_STACK_LINE(2542)
			elapsedTime = (int)200;
		}
		HX_STACK_LINE(2546)
		hx::AddEq(this->acc,elapsedTime);
		HX_STACK_LINE(2548)
		::com::stencyl::Engine_obj::elapsedTime = elapsedTime;
		HX_STACK_LINE(2550)
		if (((this->leave != null()))){
			HX_STACK_LINE(2553)
			::motion::actuators::SimpleActuator_obj::stage_onEnterFrame(null());
			HX_STACK_LINE(2555)
			if ((this->leave->isComplete())){
				HX_STACK_LINE(2557)
				this->leave->deactivate();
				HX_STACK_LINE(2558)
				this->enterScene();
			}
			HX_STACK_LINE(2561)
			this->postUpdate(currTime);
			HX_STACK_LINE(2563)
			return null();
		}
		HX_STACK_LINE(2566)
		if (((this->enter != null()))){
			HX_STACK_LINE(2567)
			if ((this->enter->isComplete())){
				HX_STACK_LINE(2570)
				this->enter->deactivate();
				HX_STACK_LINE(2571)
				this->enter->cleanup();
				HX_STACK_LINE(2572)
				this->enter = null();
			}
		}
		HX_STACK_LINE(2578)
		this->postUpdate(currTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onUpdate,(void))

Void Engine_obj::update( Float elapsedTime){
{
		HX_STACK_PUSH("Engine::update","com/stencyl/Engine.hx",2199);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_LINE(2200)
		if (((this->scene == null()))){
			HX_STACK_LINE(2201)
			return null();
		}
		HX_STACK_LINE(2207)
		::motion::actuators::SimpleActuator_obj::stage_onEnterFrame(null());
		HX_STACK_LINE(2209)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2211)
			::box2D::collision::B2AABB aabb = this->world->getScreenBounds();		HX_STACK_VAR(aabb,"aabb");
			HX_STACK_LINE(2212)
			aabb->lowerBound->x = (Float(((::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraX) / Float(::com::stencyl::Engine_obj::SCALE))) - ::com::stencyl::Engine_obj::paddingLeft))) / Float(::com::stencyl::Engine_obj::physicsScale));
			HX_STACK_LINE(2213)
			aabb->lowerBound->y = (Float(((::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraY) / Float(::com::stencyl::Engine_obj::SCALE))) - ::com::stencyl::Engine_obj::paddingTop))) / Float(::com::stencyl::Engine_obj::physicsScale));
			HX_STACK_LINE(2214)
			aabb->upperBound->x = (aabb->lowerBound->x + (Float((((::com::stencyl::Engine_obj::screenWidth + ::com::stencyl::Engine_obj::paddingRight) + ::com::stencyl::Engine_obj::paddingLeft))) / Float(::com::stencyl::Engine_obj::physicsScale)));
			HX_STACK_LINE(2215)
			aabb->upperBound->y = (aabb->lowerBound->y + (Float((((::com::stencyl::Engine_obj::screenHeight + ::com::stencyl::Engine_obj::paddingBottom) + ::com::stencyl::Engine_obj::paddingTop))) / Float(::com::stencyl::Engine_obj::physicsScale)));
		}
		HX_STACK_LINE(2218)
		int inputx = ::Std_obj::_int((Float(::com::stencyl::Input_obj::mouseX) / Float(::com::stencyl::Engine_obj::SCALE)));		HX_STACK_VAR(inputx,"inputx");
		HX_STACK_LINE(2219)
		int inputy = ::Std_obj::_int((Float(::com::stencyl::Input_obj::mouseY) / Float(::com::stencyl::Engine_obj::SCALE)));		HX_STACK_VAR(inputy,"inputy");
		HX_STACK_LINE(2221)
		if ((::com::stencyl::Input_obj::mousePressed)){
			HX_STACK_LINE(2223)
			::com::stencyl::behavior::Script_obj::mpx = inputx;
			HX_STACK_LINE(2224)
			::com::stencyl::behavior::Script_obj::mpy = inputy;
			HX_STACK_LINE(2225)
			{
				HX_STACK_LINE(2225)
				Dynamic listeners = this->whenMousePressedListeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2225)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(2225)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(2225)
					try{
						HX_STACK_LINE(2225)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(2225)
						f(listeners).Cast< Void >();
						HX_STACK_LINE(2225)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(2225)
							(r)--;
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(2225)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3829,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(2225)
					(r)++;
				}
			}
		}
		HX_STACK_LINE(2228)
		if ((::com::stencyl::Input_obj::mouseReleased)){
			HX_STACK_LINE(2230)
			::com::stencyl::behavior::Script_obj::mrx = inputx;
			HX_STACK_LINE(2231)
			::com::stencyl::behavior::Script_obj::mry = inputy;
			HX_STACK_LINE(2232)
			{
				HX_STACK_LINE(2232)
				Dynamic listeners = this->whenMouseReleasedListeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2232)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(2232)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(2232)
					try{
						HX_STACK_LINE(2232)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(2232)
						f(listeners).Cast< Void >();
						HX_STACK_LINE(2232)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(2232)
							(r)--;
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(2232)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3829,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(2232)
					(r)++;
				}
			}
		}
		HX_STACK_LINE(2235)
		if (((bool((this->mx != inputx)) || bool((this->my != inputy))))){
			HX_STACK_LINE(2237)
			this->mx = inputx;
			HX_STACK_LINE(2238)
			this->my = inputy;
			HX_STACK_LINE(2240)
			{
				HX_STACK_LINE(2240)
				Dynamic listeners = this->whenMouseMovedListeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2240)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(2240)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(2240)
					try{
						HX_STACK_LINE(2240)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(2240)
						f(listeners).Cast< Void >();
						HX_STACK_LINE(2240)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(2240)
							(r)--;
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(2240)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3829,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(2240)
					(r)++;
				}
			}
			HX_STACK_LINE(2242)
			if (((bool(::com::stencyl::Input_obj::mouseDown) && bool(!(::com::stencyl::Input_obj::mousePressed))))){
				HX_STACK_LINE(2244)
				Dynamic listeners = this->whenMouseDraggedListeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2244)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(2244)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(2244)
					try{
						HX_STACK_LINE(2244)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(2244)
						f(listeners).Cast< Void >();
						HX_STACK_LINE(2244)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(2244)
							(r)--;
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(2244)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3829,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(2244)
					(r)++;
				}
			}
		}
		HX_STACK_LINE(2249)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(2251)
		while(((i < this->tasks->length))){
			HX_STACK_LINE(2253)
			::com::stencyl::behavior::TimedTask t = this->tasks->__get(i).StaticCast< ::com::stencyl::behavior::TimedTask >();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(2255)
			if ((!(t->done))){
				HX_STACK_LINE(2256)
				t->update(::com::stencyl::Engine_obj::STEP_SIZE);
			}
			HX_STACK_LINE(2260)
			if ((t->done)){
				HX_STACK_LINE(2262)
				this->tasks->remove(t);
				HX_STACK_LINE(2263)
				(i)--;
			}
			HX_STACK_LINE(2266)
			(i)++;
		}
		HX_STACK_LINE(2270)
		if ((this->hasKeyPressedListeners)){
			HX_STACK_LINE(2271)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->whenKeyPressedListeners->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(2275)
					bool pressed = ::com::stencyl::Input_obj::pressed(key);		HX_STACK_VAR(pressed,"pressed");
					HX_STACK_LINE(2276)
					bool released = ::com::stencyl::Input_obj::released(key);		HX_STACK_VAR(released,"released");
					HX_STACK_LINE(2278)
					if (((bool(pressed) || bool(released)))){
						HX_STACK_LINE(2280)
						Dynamic listeners = this->whenKeyPressedListeners->get(key);		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(2281)
						{
							HX_STACK_LINE(2281)
							Dynamic listeners1 = listeners;		HX_STACK_VAR(listeners1,"listeners1");
							HX_STACK_LINE(2281)
							int r = (int)0;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(2281)
							while(((r < listeners1->__Field(HX_CSTRING("length"),true)))){
								HX_STACK_LINE(2281)
								try{
									HX_STACK_LINE(2281)
									Dynamic f = listeners1->__GetItem(r);		HX_STACK_VAR(f,"f");
									HX_STACK_LINE(2281)
									f(pressed,released,listeners1).Cast< Void >();
									HX_STACK_LINE(2281)
									if (((::com::stencyl::utils::Utils_obj::indexOf(listeners1,f) == (int)-1))){
										HX_STACK_LINE(2281)
										(r)--;
									}
								}
								catch(Dynamic __e){
									if (__e.IsClass< ::String >() ){
										HX_STACK_BEGIN_CATCH
										::String e = __e;{
											HX_STACK_LINE(2281)
											::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3883,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners3")));
										}
									}
									else throw(__e);
								}
								HX_STACK_LINE(2281)
								(r)++;
							}
						}
					}
				}
;
			}
		}
		HX_STACK_LINE(2288)
		{
			HX_STACK_LINE(2288)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->nativeListeners->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2288)
			while(((_g1 < _g))){
				HX_STACK_LINE(2288)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(2290)
				::com::stencyl::event::NativeListener listener = this->nativeListeners->__get(n).StaticCast< ::com::stencyl::event::NativeListener >();		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(2291)
				listener->checkEvents(::com::stencyl::Engine_obj::events);
			}
		}
		HX_STACK_LINE(2294)
		::com::stencyl::Engine_obj::events->clear();
		HX_STACK_LINE(2297)
		{
			HX_STACK_LINE(2297)
			Dynamic listeners = this->whenUpdatedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2297)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2297)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2297)
				try{
					HX_STACK_LINE(2297)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2297)
					f(elapsedTime,listeners).Cast< Void >();
					HX_STACK_LINE(2297)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2297)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2297)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2297)
				(r)++;
			}
		}
		HX_STACK_LINE(2299)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2301)
			this->world->step(0.01,(int)3,(int)3);
			HX_STACK_LINE(2302)
			this->world->clearForces();
			HX_STACK_LINE(2304)
			if ((::com::stencyl::Engine_obj::DEBUG_DRAW)){
				HX_STACK_LINE(2305)
				this->world->drawDebugData();
			}
		}
		HX_STACK_LINE(2310)
		if ((!(((this->regions->_h->_size == (int)0))))){
			HX_STACK_LINE(2311)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::Region > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Region >(this->regions->iterator());  __it->hasNext(); ){
				::com::stencyl::models::Region r = __it->next();
				{
					HX_STACK_LINE(2314)
					if (((r == null()))){
						HX_STACK_LINE(2314)
						continue;
					}
					HX_STACK_LINE(2315)
					r->innerUpdate(elapsedTime,true);
				}
;
			}
		}
		HX_STACK_LINE(2319)
		while(((this->disableCollisionList->length > (int)0))){
			HX_STACK_LINE(2320)
			this->disableCollisionList->pop().StaticCast< ::com::stencyl::models::Actor >();
		}
		HX_STACK_LINE(2324)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2325)
			if ((!(((this->collisionPairs->_h->_size == (int)0))))){
				HX_STACK_LINE(2327)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->collisionPairs->keys());  __it->hasNext(); ){
					int pair = __it->next();
					{
						HX_STACK_LINE(2330)
						::de::polygonal::ds::IntHashTable _this = this->collisionPairs;		HX_STACK_VAR(_this,"_this");
						struct _Function_4_1{
							inline static int Block( int &pair,::de::polygonal::ds::IntHashTable _this){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2330);
								{
									HX_STACK_LINE(2330)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(2330)
									int i1 = _this1->_hash->__get((int((pair * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i1,"i1");
									struct _Function_5_1{
										inline static int Block( int &i1,::de::polygonal::ds::IntIntHashTable &_this1,int &pair){
											HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2330);
											{
												HX_STACK_LINE(2330)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2330)
												i1 = _this1->_data->__get((i1 + (int)2));
												HX_STACK_LINE(2330)
												while(((i1 != (int)-1))){
													HX_STACK_LINE(2330)
													if (((_this1->_data->__get(i1) == pair))){
														HX_STACK_LINE(2330)
														v = _this1->_data->__get((i1 + (int)1));
														HX_STACK_LINE(2330)
														break;
													}
													HX_STACK_LINE(2330)
													i1 = _this1->_data->__get((i1 + (int)2));
												}
												HX_STACK_LINE(2330)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(2330)
									return (  (((i1 == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i1) == pair))) ? int(_this1->_data->__get((i1 + (int)1))) : int(_Function_5_1::Block(i1,_this1,pair)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2330)
						int i1 = _Function_4_1::Block(pair,_this);		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(2330)
						if (((i1 == (int)-2147483647))){
							HX_STACK_LINE(2330)
							false;
						}
						else{
							HX_STACK_LINE(2330)
							_this->_key0 = (int)-2147483647;
							HX_STACK_LINE(2330)
							hx::IndexRef((_this->_vals).mPtr,i1) = null();
							HX_STACK_LINE(2330)
							_this->_keys[i1] = (int)-2147483647;
							HX_STACK_LINE(2330)
							_this->_next[i1] = _this->_free;
							HX_STACK_LINE(2330)
							_this->_free = i1;
							HX_STACK_LINE(2330)
							bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
							HX_STACK_LINE(2330)
							if (((_this->_sizeLevel > (int)0))){
								HX_STACK_LINE(2330)
								if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
									HX_STACK_LINE(2330)
									if ((_this->_isResizable)){
										HX_STACK_LINE(2330)
										shrink = true;
									}
								}
							}
							HX_STACK_LINE(2330)
							{
								HX_STACK_LINE(2330)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(2330)
								int b = (int((pair * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(2330)
								int i2 = _this1->_hash->__get(b);		HX_STACK_VAR(i2,"i2");
								HX_STACK_LINE(2330)
								if (((i2 == (int)-1))){
									HX_STACK_LINE(2330)
									false;
								}
								else{
									HX_STACK_LINE(2330)
									if (((pair == _this1->_data->__get(i2)))){
										HX_STACK_LINE(2330)
										if (((_this1->_data->__get((i2 + (int)2)) == (int)-1))){
											HX_STACK_LINE(2330)
											_this1->_hash[b] = (int)-1;
										}
										else{
											HX_STACK_LINE(2330)
											_this1->_hash[b] = _this1->_data->__get((i2 + (int)2));
										}
										HX_STACK_LINE(2330)
										int j = ::Std_obj::_int((Float(i2) / Float((int)3)));		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(2330)
										_this1->_next[j] = _this1->_free;
										HX_STACK_LINE(2330)
										_this1->_free = j;
										HX_STACK_LINE(2330)
										_this1->_data[(i2 + (int)1)] = (int)-2147483647;
										HX_STACK_LINE(2330)
										_this1->_data[(i2 + (int)2)] = (int)-1;
										HX_STACK_LINE(2330)
										(_this1->_size)--;
										HX_STACK_LINE(2330)
										if (((_this1->_sizeLevel > (int)0))){
											HX_STACK_LINE(2330)
											if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
												HX_STACK_LINE(2330)
												if ((_this1->_isResizable)){
													HX_STACK_LINE(2330)
													_this1->_shrink();
												}
											}
										}
										HX_STACK_LINE(2330)
										true;
									}
									else{
										HX_STACK_LINE(2330)
										bool exists = false;		HX_STACK_VAR(exists,"exists");
										HX_STACK_LINE(2330)
										int i0 = i2;		HX_STACK_VAR(i0,"i0");
										HX_STACK_LINE(2330)
										i2 = _this1->_data->__get((i2 + (int)2));
										HX_STACK_LINE(2330)
										while(((i2 != (int)-1))){
											HX_STACK_LINE(2330)
											if (((_this1->_data->__get(i2) == pair))){
												HX_STACK_LINE(2330)
												exists = true;
												HX_STACK_LINE(2330)
												break;
											}
											HX_STACK_LINE(2330)
											i2 = _this1->_data->__get(((i0 = i2) + (int)2));
										}
										HX_STACK_LINE(2330)
										if ((exists)){
											HX_STACK_LINE(2330)
											_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i2 + (int)2));
											HX_STACK_LINE(2330)
											int j = ::Std_obj::_int((Float(i2) / Float((int)3)));		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(2330)
											_this1->_next[j] = _this1->_free;
											HX_STACK_LINE(2330)
											_this1->_free = j;
											HX_STACK_LINE(2330)
											_this1->_data[(i2 + (int)1)] = (int)-2147483647;
											HX_STACK_LINE(2330)
											_this1->_data[(i2 + (int)2)] = (int)-1;
											HX_STACK_LINE(2330)
											--(_this1->_size);
											HX_STACK_LINE(2330)
											if (((_this1->_sizeLevel > (int)0))){
												HX_STACK_LINE(2330)
												if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
													HX_STACK_LINE(2330)
													if ((_this1->_isResizable)){
														HX_STACK_LINE(2330)
														_this1->_shrink();
													}
												}
											}
											HX_STACK_LINE(2330)
											true;
										}
										else{
											HX_STACK_LINE(2330)
											false;
										}
									}
								}
							}
							HX_STACK_LINE(2330)
							if ((shrink)){
								HX_STACK_LINE(2330)
								(_this->_sizeLevel)--;
								HX_STACK_LINE(2330)
								int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
								HX_STACK_LINE(2330)
								int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
								struct _Function_6_1{
									inline static Array< int > Block( int &newSize){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2330);
										{
											HX_STACK_LINE(2330)
											Array< int > a;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(2330)
											a = Array_obj< int >::__new();
											HX_STACK_LINE(2330)
											a[(newSize - (int)1)] = null();
											HX_STACK_LINE(2330)
											return a;
										}
										return null();
									}
								};
								HX_STACK_LINE(2330)
								_this->_next = _Function_6_1::Block(newSize);
								HX_STACK_LINE(2330)
								{
									HX_STACK_LINE(2330)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(2330)
									while(((_g1 < _g))){
										HX_STACK_LINE(2330)
										int i2 = (_g1)++;		HX_STACK_VAR(i2,"i2");
										HX_STACK_LINE(2330)
										_this->_next[i2] = (i2 + (int)1);
									}
								}
								HX_STACK_LINE(2330)
								_this->_next[(newSize - (int)1)] = (int)-1;
								HX_STACK_LINE(2330)
								_this->_free = (int)0;
								struct _Function_6_2{
									inline static Array< int > Block( int &newSize){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2330);
										{
											HX_STACK_LINE(2330)
											Array< int > a;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(2330)
											a = Array_obj< int >::__new();
											HX_STACK_LINE(2330)
											a[(newSize - (int)1)] = null();
											HX_STACK_LINE(2330)
											return a;
										}
										return null();
									}
								};
								HX_STACK_LINE(2330)
								Array< int > tmpKeys = _Function_6_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
								HX_STACK_LINE(2330)
								{
									HX_STACK_LINE(2330)
									int k = newSize;		HX_STACK_VAR(k,"k");
									HX_STACK_LINE(2330)
									if (((k == (int)-1))){
										HX_STACK_LINE(2330)
										k = tmpKeys->length;
									}
									HX_STACK_LINE(2330)
									{
										HX_STACK_LINE(2330)
										int _g = (int)0;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(2330)
										while(((_g < k))){
											HX_STACK_LINE(2330)
											int i2 = (_g)++;		HX_STACK_VAR(i2,"i2");
											HX_STACK_LINE(2330)
											tmpKeys[i2] = (int)-2147483647;
										}
									}
								}
								struct _Function_6_3{
									inline static Array< ::Dynamic > Block( int &newSize){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2330);
										{
											HX_STACK_LINE(2330)
											Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(2330)
											a = Array_obj< ::Dynamic >::__new();
											HX_STACK_LINE(2330)
											a[(newSize - (int)1)] = null();
											HX_STACK_LINE(2330)
											return a;
										}
										return null();
									}
								};
								HX_STACK_LINE(2330)
								Array< ::Dynamic > tmpVals = _Function_6_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
								HX_STACK_LINE(2330)
								for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
									int i2 = __it->next();
									{
										HX_STACK_LINE(2330)
										tmpKeys[_this->_free] = _this->_keys->__get(i2);
										HX_STACK_LINE(2330)
										tmpVals[_this->_free] = _this->_vals->__GetItem(i2);
										HX_STACK_LINE(2330)
										_this->_free = _this->_next->__get(_this->_free);
									}
;
								}
								HX_STACK_LINE(2330)
								_this->_keys = tmpKeys;
								HX_STACK_LINE(2330)
								_this->_vals = tmpVals;
								HX_STACK_LINE(2330)
								{
									HX_STACK_LINE(2330)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(2330)
									while(((_g1 < _g))){
										HX_STACK_LINE(2330)
										int i2 = (_g1)++;		HX_STACK_VAR(i2,"i2");
										HX_STACK_LINE(2330)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										int key = _this->_keys->__get(i2);		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(2330)
										int i3 = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i3,"i3");
										HX_STACK_LINE(2330)
										if (((i3 == (int)-1))){
											HX_STACK_LINE(2330)
											false;
										}
										else{
											HX_STACK_LINE(2330)
											if (((_this1->_data->__get(i3) == key))){
												HX_STACK_LINE(2330)
												_this1->_data[(i3 + (int)1)] = i2;
												HX_STACK_LINE(2330)
												true;
											}
											else{
												HX_STACK_LINE(2330)
												i3 = _this1->_data->__get((i3 + (int)2));
												HX_STACK_LINE(2330)
												while(((i3 != (int)-1))){
													HX_STACK_LINE(2330)
													if (((_this1->_data->__get(i3) == key))){
														HX_STACK_LINE(2330)
														_this1->_data[(i3 + (int)1)] = i2;
														HX_STACK_LINE(2330)
														break;
													}
													HX_STACK_LINE(2330)
													i3 = _this1->_data->__get((i3 + (int)2));
												}
												HX_STACK_LINE(2330)
												(i3 != (int)-1);
											}
										}
									}
								}
							}
							HX_STACK_LINE(2330)
							true;
						}
					}
;
				}
			}
		}
		HX_STACK_LINE(2335)
		::com::stencyl::models::actor::Animation_obj::updateAll(elapsedTime);
		HX_STACK_LINE(2337)
		if ((!(((this->allActors->_h->_size == (int)0))))){
			HX_STACK_LINE(2338)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >(this->allActors->iterator());  __it->hasNext(); ){
				::com::stencyl::models::Actor a = __it->next();
				if (((bool((bool((a != null())) && bool(!(a->dead)))) && bool(!(a->recycled))))){
					HX_STACK_LINE(2344)
					bool isOnScreen = (bool((bool((bool((bool(((bool(a->isLightweight) || bool(a->body->isActive())))) && bool(((a->colX + a->cacheWidth) >= ((Float(-(::com::stencyl::Engine_obj::cameraX)) / Float(::com::stencyl::Engine_obj::SCALE)) - ::com::stencyl::Engine_obj::paddingLeft))))) && bool(((a->colY + a->cacheHeight) >= ((Float(-(::com::stencyl::Engine_obj::cameraY)) / Float(::com::stencyl::Engine_obj::SCALE)) - ::com::stencyl::Engine_obj::paddingTop))))) && bool((a->colX < (((Float(-(::com::stencyl::Engine_obj::cameraX)) / Float(::com::stencyl::Engine_obj::SCALE)) + ::com::stencyl::Engine_obj::screenWidth) + ::com::stencyl::Engine_obj::paddingRight))))) && bool((a->colY < (((Float(-(::com::stencyl::Engine_obj::cameraY)) / Float(::com::stencyl::Engine_obj::SCALE)) + ::com::stencyl::Engine_obj::screenHeight) + ::com::stencyl::Engine_obj::paddingBottom))));		HX_STACK_VAR(isOnScreen,"isOnScreen");
					HX_STACK_LINE(2350)
					a->isOnScreenCache = isOnScreen;
					HX_STACK_LINE(2354)
					if (((bool(!(a->isLightweight)) && bool((a->body != null()))))){
						HX_STACK_LINE(2355)
						if (((bool(a->killLeaveScreen) && bool(!(isOnScreen))))){
							HX_STACK_LINE(2357)
							this->recycleActor(a);
						}
						else{
							HX_STACK_LINE(2361)
							if (((bool((bool(a->body->isActive()) || bool(a->alwaysSimulate))) || bool(a->isHUD)))){
								HX_STACK_LINE(2362)
								a->innerUpdate(elapsedTime,false);
							}
						}
					}
					else{
						HX_STACK_LINE(2367)
						if ((a->isLightweight)){
							HX_STACK_LINE(2368)
							if (((bool(a->killLeaveScreen) && bool(!(isOnScreen))))){
								HX_STACK_LINE(2370)
								this->recycleActor(a);
							}
							else{
								HX_STACK_LINE(2374)
								if (((bool((bool(isOnScreen) || bool(a->alwaysSimulate))) || bool(a->isHUD)))){
									HX_STACK_LINE(2375)
									a->innerUpdate(elapsedTime,false);
								}
							}
						}
					}
					HX_STACK_LINE(2380)
					if ((a->dead)){
						HX_STACK_LINE(2381)
						this->disableCollisionList->push(a);
					}
				}
;
			}
		}
		HX_STACK_LINE(2388)
		{
			HX_STACK_LINE(2388)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->disableCollisionList->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2388)
			while(((_g1 < _g))){
				HX_STACK_LINE(2388)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(2390)
				::com::stencyl::models::Actor a = this->disableCollisionList->__get(n).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(2392)
				if (((a != null()))){
					HX_STACK_LINE(2393)
					a->handlesCollisions = false;
				}
			}
		}
		HX_STACK_LINE(2398)
		{
			HX_STACK_LINE(2398)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->animatedTiles->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2398)
			while(((_g1 < _g))){
				HX_STACK_LINE(2398)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(2400)
				::com::stencyl::models::scene::Tile tile = this->animatedTiles->__get(n).StaticCast< ::com::stencyl::models::scene::Tile >();		HX_STACK_VAR(tile,"tile");
				HX_STACK_LINE(2401)
				tile->update(elapsedTime);
				HX_STACK_LINE(2402)
				this->tileUpdated = (bool(this->tileUpdated) || bool(tile->updateSource));
			}
		}
		HX_STACK_LINE(2405)
		if (((bool((this->leave != null())) && bool(this->leave->isActive())))){
			HX_STACK_LINE(2406)
			this->leave->update(elapsedTime);
		}
		else{
			HX_STACK_LINE(2410)
			if (((bool((this->enter != null())) && bool(this->enter->isActive())))){
				HX_STACK_LINE(2411)
				this->enter->update(elapsedTime);
			}
		}
		HX_STACK_LINE(2418)
		::com::stencyl::Engine_obj::cameraX = (-(::Math_obj::abs(this->camera->realX)) + ::com::stencyl::Engine_obj::screenWidthHalf);
		HX_STACK_LINE(2419)
		::com::stencyl::Engine_obj::cameraY = (-(::Math_obj::abs(this->camera->realY)) + ::com::stencyl::Engine_obj::screenHeightHalf);
		HX_STACK_LINE(2422)
		int maxCamX = (-(::com::stencyl::Engine_obj::sceneWidth) + ::com::stencyl::Engine_obj::screenWidth);		HX_STACK_VAR(maxCamX,"maxCamX");
		HX_STACK_LINE(2423)
		int maxCamY = (-(::com::stencyl::Engine_obj::sceneHeight) + ::com::stencyl::Engine_obj::screenHeight);		HX_STACK_VAR(maxCamY,"maxCamY");
		HX_STACK_LINE(2425)
		if (((::com::stencyl::Engine_obj::cameraX < maxCamX))){
			HX_STACK_LINE(2426)
			::com::stencyl::Engine_obj::cameraX = maxCamX;
		}
		HX_STACK_LINE(2430)
		if (((::com::stencyl::Engine_obj::cameraY < maxCamY))){
			HX_STACK_LINE(2431)
			::com::stencyl::Engine_obj::cameraY = maxCamY;
		}
		HX_STACK_LINE(2435)
		hx::MultEq(::com::stencyl::Engine_obj::cameraX,::com::stencyl::Engine_obj::SCALE);
		HX_STACK_LINE(2436)
		hx::MultEq(::com::stencyl::Engine_obj::cameraY,::com::stencyl::Engine_obj::SCALE);
		HX_STACK_LINE(2439)
		::com::stencyl::Engine_obj::cameraX = ::Math_obj::min((int)0,::com::stencyl::Engine_obj::cameraX);
		HX_STACK_LINE(2440)
		::com::stencyl::Engine_obj::cameraY = ::Math_obj::min((int)0,::com::stencyl::Engine_obj::cameraY);
		HX_STACK_LINE(2442)
		{
			HX_STACK_LINE(2442)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->master->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2442)
			while(((_g1 < _g))){
				HX_STACK_LINE(2442)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(2444)
				::flash::display::DisplayObject child = this->master->getChildAt(i1);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(2447)
				if ((::Std_obj::is(child,hx::ClassOf< ::com::stencyl::models::scene::layers::BackgroundLayer >()))){
					HX_STACK_LINE(2449)
					::com::stencyl::models::scene::layers::BackgroundLayer bgLayer = hx::TCast< com::stencyl::models::scene::layers::BackgroundLayer >::cast(child);		HX_STACK_VAR(bgLayer,"bgLayer");
					HX_STACK_LINE(2451)
					Float endX = ::Math_obj::abs((bgLayer->cacheWidth - (::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)));		HX_STACK_VAR(endX,"endX");
					HX_STACK_LINE(2452)
					Float endY = ::Math_obj::abs((bgLayer->cacheHeight - (::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)));		HX_STACK_VAR(endY,"endY");
					HX_STACK_LINE(2457)
					if (((maxCamX != (int)0))){
						HX_STACK_LINE(2458)
						child->set_x((-(endX) * ::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraX) / Float(((maxCamX * ::com::stencyl::Engine_obj::SCALE)))))));
					}
					else{
						HX_STACK_LINE(2463)
						child->set_x((int)0);
					}
					HX_STACK_LINE(2467)
					if (((maxCamY != (int)0))){
						HX_STACK_LINE(2468)
						child->set_y((-(endY) * ::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraY) / Float(((maxCamY * ::com::stencyl::Engine_obj::SCALE)))))));
					}
					else{
						HX_STACK_LINE(2473)
						child->set_y((int)0);
					}
					HX_STACK_LINE(2477)
					if ((bgLayer->isAnimated)){
						HX_STACK_LINE(2478)
						bgLayer->updateAnimation(elapsedTime);
					}
				}
				else{
					HX_STACK_LINE(2483)
					if ((::Std_obj::is(child,hx::ClassOf< ::com::stencyl::models::scene::ScrollingBitmap >()))){
						HX_STACK_LINE(2485)
						::com::stencyl::models::scene::ScrollingBitmap bg = hx::TCast< com::stencyl::models::scene::ScrollingBitmap >::cast(child);		HX_STACK_VAR(bg,"bg");
						HX_STACK_LINE(2487)
						if ((bg->parallax)){
							HX_STACK_LINE(2488)
							bg->updateParallax();
						}
						else{
							HX_STACK_LINE(2493)
							bg->updateAuto(elapsedTime);
						}
					}
					else{
						HX_STACK_LINE(2499)
						if ((::Std_obj::is(child,hx::ClassOf< ::com::stencyl::models::scene::layers::RegularLayer >()))){
							HX_STACK_LINE(2501)
							child->set_x(::com::stencyl::Engine_obj::cameraX);
							HX_STACK_LINE(2502)
							child->set_y(::com::stencyl::Engine_obj::cameraY);
						}
					}
				}
			}
		}
		HX_STACK_LINE(2508)
		if (((bool(!(::com::stencyl::Engine_obj::NO_PHYSICS)) && bool(::com::stencyl::Engine_obj::DEBUG_DRAW)))){
			HX_STACK_LINE(2510)
			this->debugLayer->set_x(::com::stencyl::Engine_obj::cameraX);
			HX_STACK_LINE(2511)
			this->debugLayer->set_y(::com::stencyl::Engine_obj::cameraY);
		}
		HX_STACK_LINE(2515)
		if ((this->isShaking)){
			HX_STACK_LINE(2517)
			hx::SubEq(this->shakeTimer,::com::stencyl::Engine_obj::STEP_SIZE);
			HX_STACK_LINE(2519)
			if (((this->shakeTimer <= (int)0))){
				HX_STACK_LINE(2521)
				this->stopShakingScreen();
				HX_STACK_LINE(2522)
				return null();
			}
			HX_STACK_LINE(2525)
			Float randX = ((-(this->shakeIntensity) * ::com::stencyl::Engine_obj::screenWidth) + (::Math_obj::random() * ((((int)2 * this->shakeIntensity) * ::com::stencyl::Engine_obj::screenWidth))));		HX_STACK_VAR(randX,"randX");
			HX_STACK_LINE(2526)
			Float randY = ((-(this->shakeIntensity) * ::com::stencyl::Engine_obj::screenHeight) + (::Math_obj::random() * ((((int)2 * this->shakeIntensity) * ::com::stencyl::Engine_obj::screenHeight))));		HX_STACK_VAR(randY,"randY");
			HX_STACK_LINE(2528)
			this->master->set_x((randX * ::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(2529)
			this->master->set_y((randY * ::com::stencyl::Engine_obj::SCALE));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,update,(void))

int Engine_obj::getMiddleLayer( ){
	HX_STACK_PUSH("Engine::getMiddleLayer","com/stencyl/Engine.hx",2189);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2189)
	return this->layersToDraw->get(this->middleLayer);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getMiddleLayer,return )

int Engine_obj::getBottomLayer( ){
	HX_STACK_PUSH("Engine::getBottomLayer","com/stencyl/Engine.hx",2184);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2184)
	return this->layersToDraw->get(this->bottomLayer);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getBottomLayer,return )

int Engine_obj::getTopLayer( ){
	HX_STACK_PUSH("Engine::getTopLayer","com/stencyl/Engine.hx",2179);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2179)
	return this->layersToDraw->get(this->topLayer);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getTopLayer,return )

::com::stencyl::models::Actor Engine_obj::createActorOfType( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst){
	HX_STACK_PUSH("Engine::createActorOfType","com/stencyl/Engine.hx",2116);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(layerConst,"layerConst");
	HX_STACK_LINE(2117)
	if (((type == null()))){
		HX_STACK_LINE(2119)
		::haxe::Log_obj::trace(HX_CSTRING("Tried to create actor with null or invalid type."),hx::SourceInfo(HX_CSTRING("Engine.hx"),2119,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("createActorOfType")));
		HX_STACK_LINE(2120)
		return null();
	}
	HX_STACK_LINE(2123)
	int layerID = (int)0;		HX_STACK_VAR(layerID,"layerID");
	HX_STACK_LINE(2125)
	if (((layerConst == ::com::stencyl::behavior::Script_obj::FRONT))){
		HX_STACK_LINE(2126)
		layerID = this->getTopLayer();
	}
	else{
		HX_STACK_LINE(2130)
		if (((layerConst == ::com::stencyl::behavior::Script_obj::BACK))){
			HX_STACK_LINE(2131)
			layerID = this->getBottomLayer();
		}
		else{
			HX_STACK_LINE(2136)
			layerID = this->getMiddleLayer();
		}
	}
	HX_STACK_LINE(2140)
	::com::stencyl::models::scene::ActorInstance ai = ::com::stencyl::models::scene::ActorInstance_obj::__new(::com::stencyl::utils::Utils_obj::INTEGER_MAX,::Std_obj::_int(x),::Std_obj::_int(y),(int)1,(int)1,layerID,(int)0,type->groupID,type->ID,null(),false);		HX_STACK_VAR(ai,"ai");
	HX_STACK_LINE(2155)
	::com::stencyl::models::Actor a = this->createActor(ai,true);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(2156)
	a->initScripts();
	HX_STACK_LINE(2158)
	Dynamic f1 = this->whenTypeGroupCreatedListeners->get(type);		HX_STACK_VAR(f1,"f1");
	HX_STACK_LINE(2159)
	Dynamic f2 = this->whenTypeGroupCreatedListeners->get(a->getGroup());		HX_STACK_VAR(f2,"f2");
	HX_STACK_LINE(2161)
	if (((f1 != null()))){
		HX_STACK_LINE(2163)
		Dynamic listeners = f1;		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(2163)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(2163)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(2163)
			try{
				HX_STACK_LINE(2163)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(2163)
				f(a,listeners).Cast< Void >();
				HX_STACK_LINE(2163)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(2163)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(2163)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(2163)
			(r)++;
		}
	}
	HX_STACK_LINE(2166)
	if (((f2 != null()))){
		HX_STACK_LINE(2168)
		Dynamic listeners = f2;		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(2168)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(2168)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(2168)
			try{
				HX_STACK_LINE(2168)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(2168)
				f(a,listeners).Cast< Void >();
				HX_STACK_LINE(2168)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(2168)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(2168)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(2168)
			(r)++;
		}
	}
	HX_STACK_LINE(2171)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,createActorOfType,return )

::com::stencyl::models::Actor Engine_obj::getRecycledActorOfType( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst){
	HX_STACK_PUSH("Engine::getRecycledActorOfType","com/stencyl/Engine.hx",1999);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(layerConst,"layerConst");
	HX_STACK_LINE(2000)
	::com::stencyl::models::Actor a = null();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(2002)
	if (((this->recycledActorsOfType->get(type->ID) == null()))){
		HX_STACK_LINE(2003)
		this->recycledActorsOfType->set(type->ID,Array_obj< ::Dynamic >::__new());
	}
	HX_STACK_LINE(2008)
	Array< ::Dynamic > cache = this->recycledActorsOfType->get(type->ID);		HX_STACK_VAR(cache,"cache");
	HX_STACK_LINE(2010)
	if (((cache != null()))){
		HX_STACK_LINE(2014)
		{
			HX_STACK_LINE(2014)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2014)
			while(((_g < cache->length))){
				HX_STACK_LINE(2014)
				::com::stencyl::models::Actor actor = cache->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
				HX_STACK_LINE(2014)
				++(_g);
				HX_STACK_LINE(2016)
				if (((bool((actor != null())) && bool(actor->recycled)))){
					HX_STACK_LINE(2018)
					actor->createTime = ::flash::Lib_obj::getTimer();
					HX_STACK_LINE(2019)
					{
						HX_STACK_LINE(2019)
						::de::polygonal::ds::IntHashTable _this = this->allActors;		HX_STACK_VAR(_this,"_this");
						int key = actor->ID;		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(2019)
						_this->_key0 = (int)-2147483647;
						HX_STACK_LINE(2019)
						if (((_this->_h->_size == _this->_h->_capacity))){
							HX_STACK_LINE(2019)
							int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
							HX_STACK_LINE(2019)
							int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
							struct _Function_7_1{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2019);
									{
										HX_STACK_LINE(2019)
										Array< int > a1;		HX_STACK_VAR(a1,"a1");
										HX_STACK_LINE(2019)
										a1 = Array_obj< int >::__new();
										HX_STACK_LINE(2019)
										a1[(newSize - (int)1)] = null();
										HX_STACK_LINE(2019)
										return a1;
									}
									return null();
								}
							};
							HX_STACK_LINE(2019)
							Array< int > tmp = _Function_7_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(2019)
							{
								HX_STACK_LINE(2019)
								Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(2019)
								if (((max == (int)-1))){
									HX_STACK_LINE(2019)
									max = src->length;
								}
								HX_STACK_LINE(2019)
								int j = (int)0;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(2019)
								{
									HX_STACK_LINE(2019)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(2019)
									while(((_g1 < max))){
										HX_STACK_LINE(2019)
										int i = (_g1)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(2019)
										tmp[(j)++] = src->__get(i);
									}
								}
								HX_STACK_LINE(2019)
								tmp;
							}
							HX_STACK_LINE(2019)
							_this->_next = tmp;
							struct _Function_7_2{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2019);
									{
										HX_STACK_LINE(2019)
										Array< int > a1;		HX_STACK_VAR(a1,"a1");
										HX_STACK_LINE(2019)
										a1 = Array_obj< int >::__new();
										HX_STACK_LINE(2019)
										a1[(newSize - (int)1)] = null();
										HX_STACK_LINE(2019)
										return a1;
									}
									return null();
								}
							};
							HX_STACK_LINE(2019)
							Array< int > tmp1 = _Function_7_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(2019)
							{
								HX_STACK_LINE(2019)
								Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(2019)
								if (((max == (int)-1))){
									HX_STACK_LINE(2019)
									max = src->length;
								}
								HX_STACK_LINE(2019)
								int j = (int)0;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(2019)
								{
									HX_STACK_LINE(2019)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(2019)
									while(((_g1 < max))){
										HX_STACK_LINE(2019)
										int i = (_g1)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(2019)
										tmp1[(j)++] = src->__get(i);
									}
								}
								HX_STACK_LINE(2019)
								tmp1;
							}
							HX_STACK_LINE(2019)
							_this->_keys = tmp1;
							HX_STACK_LINE(2019)
							{
								HX_STACK_LINE(2019)
								int _g1 = oldSize;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(2019)
								while(((_g1 < newSize))){
									HX_STACK_LINE(2019)
									int i = (_g1)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(2019)
									_this->_keys[i] = (int)-2147483647;
								}
							}
							HX_STACK_LINE(2019)
							{
								HX_STACK_LINE(2019)
								int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
								int _g2 = (newSize - (int)1);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(2019)
								while(((_g1 < _g2))){
									HX_STACK_LINE(2019)
									int i = (_g1)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(2019)
									_this->_next[i] = (i + (int)1);
								}
							}
							HX_STACK_LINE(2019)
							_this->_next[(newSize - (int)1)] = (int)-1;
							HX_STACK_LINE(2019)
							_this->_free = oldSize;
							struct _Function_7_3{
								inline static Array< ::Dynamic > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2019);
									{
										HX_STACK_LINE(2019)
										Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
										HX_STACK_LINE(2019)
										a1 = Array_obj< ::Dynamic >::__new();
										HX_STACK_LINE(2019)
										a1[(newSize - (int)1)] = null();
										HX_STACK_LINE(2019)
										return a1;
									}
									return null();
								}
							};
							HX_STACK_LINE(2019)
							Array< ::Dynamic > tmp2 = _Function_7_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(2019)
							{
								HX_STACK_LINE(2019)
								Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(2019)
								if (((max == (int)-1))){
									HX_STACK_LINE(2019)
									max = src->length;
								}
								HX_STACK_LINE(2019)
								int j = (int)0;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(2019)
								{
									HX_STACK_LINE(2019)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(2019)
									while(((_g1 < max))){
										HX_STACK_LINE(2019)
										int i = (_g1)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(2019)
										tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::Actor >();
									}
								}
								HX_STACK_LINE(2019)
								tmp2;
							}
							HX_STACK_LINE(2019)
							_this->_vals = tmp2;
							HX_STACK_LINE(2019)
							(_this->_sizeLevel)++;
						}
						HX_STACK_LINE(2019)
						{
							HX_STACK_LINE(2019)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(2019)
							if (((_this1->_size == _this1->_capacity))){
								HX_STACK_LINE(2019)
								if ((_this1->_isResizable)){
									HX_STACK_LINE(2019)
									_this1->_expand();
								}
							}
							HX_STACK_LINE(2019)
							int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2019)
							_this1->_free = _this1->_next->__get(_this1->_free);
							HX_STACK_LINE(2019)
							_this1->_data[i] = key;
							HX_STACK_LINE(2019)
							_this1->_data[(i + (int)1)] = _this->_free;
							HX_STACK_LINE(2019)
							int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(2019)
							int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(2019)
							if (((j == (int)-1))){
								HX_STACK_LINE(2019)
								_this1->_hash[b] = i;
								HX_STACK_LINE(2019)
								(_this1->_size)++;
								HX_STACK_LINE(2019)
								true;
							}
							else{
								HX_STACK_LINE(2019)
								bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
								HX_STACK_LINE(2019)
								int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2019)
								while(((t != (int)-1))){
									HX_STACK_LINE(2019)
									if (((_this1->_data->__get(t) == key))){
										HX_STACK_LINE(2019)
										first = false;
									}
									HX_STACK_LINE(2019)
									j = t;
									HX_STACK_LINE(2019)
									t = _this1->_data->__get((t + (int)2));
								}
								HX_STACK_LINE(2019)
								_this1->_data[(j + (int)2)] = i;
								HX_STACK_LINE(2019)
								(_this1->_size)++;
								HX_STACK_LINE(2019)
								first;
							}
						}
						HX_STACK_LINE(2019)
						hx::IndexRef((_this->_vals).mPtr,_this->_free) = actor;
						HX_STACK_LINE(2019)
						_this->_keys[_this->_free] = key;
						HX_STACK_LINE(2019)
						_this->_free = _this->_next->__get(_this->_free);
						HX_STACK_LINE(2019)
						true;
					}
					HX_STACK_LINE(2021)
					actor->dead = false;
					HX_STACK_LINE(2022)
					actor->dying = false;
					HX_STACK_LINE(2023)
					actor->recycled = false;
					HX_STACK_LINE(2024)
					actor->killLeaveScreen = false;
					HX_STACK_LINE(2025)
					actor->switchToDefaultAnimation();
					HX_STACK_LINE(2026)
					actor->enableAllBehaviors();
					HX_STACK_LINE(2028)
					if ((!(actor->isLightweight))){
						HX_STACK_LINE(2030)
						actor->body->setActive(true);
						HX_STACK_LINE(2031)
						actor->body->setAwake(true);
						HX_STACK_LINE(2033)
						actor->body->m_prev = null();
						HX_STACK_LINE(2034)
						actor->body->m_next = this->world->m_bodyList;
						HX_STACK_LINE(2036)
						if (((this->world->m_bodyList != null()))){
							HX_STACK_LINE(2037)
							this->world->m_bodyList->m_prev = actor->body;
						}
						HX_STACK_LINE(2041)
						this->world->m_bodyList = actor->body;
						HX_STACK_LINE(2042)
						++(this->world->m_bodyCount);
					}
					HX_STACK_LINE(2045)
					actor->registry = ::haxe::ds::StringMap_obj::__new();
					HX_STACK_LINE(2046)
					actor->enableActorDrawing();
					HX_STACK_LINE(2047)
					actor->setX(x,false,true);
					HX_STACK_LINE(2048)
					actor->setY(y,false,true);
					HX_STACK_LINE(2050)
					if ((!(actor->isLightweight))){
						HX_STACK_LINE(2052)
						actor->colX = x;
						HX_STACK_LINE(2053)
						actor->colY = y;
					}
					HX_STACK_LINE(2056)
					actor->setAngle((int)0,false);
					HX_STACK_LINE(2057)
					actor->set_alpha((int)1);
					HX_STACK_LINE(2058)
					actor->realScaleX = (int)1;
					HX_STACK_LINE(2059)
					actor->realScaleY = (int)1;
					HX_STACK_LINE(2061)
					if (((actor->bodyDef != null()))){
						HX_STACK_LINE(2062)
						actor->continuousCollision = actor->bodyDef->bullet;
					}
					HX_STACK_LINE(2069)
					int layerID = (int)0;		HX_STACK_VAR(layerID,"layerID");
					HX_STACK_LINE(2071)
					if (((layerConst == ::com::stencyl::behavior::Script_obj::FRONT))){
						HX_STACK_LINE(2072)
						layerID = this->getTopLayer();
					}
					else{
						HX_STACK_LINE(2076)
						if (((layerConst == ::com::stencyl::behavior::Script_obj::BACK))){
							HX_STACK_LINE(2077)
							layerID = this->getBottomLayer();
						}
						else{
							HX_STACK_LINE(2082)
							layerID = this->getMiddleLayer();
						}
					}
					HX_STACK_LINE(2086)
					this->moveActorToLayer(actor,layerID);
					HX_STACK_LINE(2088)
					actor->initScripts();
					HX_STACK_LINE(2090)
					Dynamic f1 = this->whenTypeGroupCreatedListeners->get(type);		HX_STACK_VAR(f1,"f1");
					HX_STACK_LINE(2091)
					Dynamic f2 = this->whenTypeGroupCreatedListeners->get(actor->getGroup());		HX_STACK_VAR(f2,"f2");
					HX_STACK_LINE(2093)
					if (((f1 != null()))){
						HX_STACK_LINE(2095)
						Dynamic listeners = f1;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(2095)
						int r = (int)0;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(2095)
						while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
							HX_STACK_LINE(2095)
							try{
								HX_STACK_LINE(2095)
								Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(2095)
								f(actor,listeners).Cast< Void >();
								HX_STACK_LINE(2095)
								if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
									HX_STACK_LINE(2095)
									(r)--;
								}
							}
							catch(Dynamic __e){
								if (__e.IsClass< ::String >() ){
									HX_STACK_BEGIN_CATCH
									::String e = __e;{
										HX_STACK_LINE(2095)
										::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
									}
								}
								else throw(__e);
							}
							HX_STACK_LINE(2095)
							(r)++;
						}
					}
					HX_STACK_LINE(2098)
					if (((f2 != null()))){
						HX_STACK_LINE(2100)
						Dynamic listeners = f2;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(2100)
						int r = (int)0;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(2100)
						while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
							HX_STACK_LINE(2100)
							try{
								HX_STACK_LINE(2100)
								Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(2100)
								f(actor,listeners).Cast< Void >();
								HX_STACK_LINE(2100)
								if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
									HX_STACK_LINE(2100)
									(r)--;
								}
							}
							catch(Dynamic __e){
								if (__e.IsClass< ::String >() ){
									HX_STACK_BEGIN_CATCH
									::String e = __e;{
										HX_STACK_LINE(2100)
										::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
									}
								}
								else throw(__e);
							}
							HX_STACK_LINE(2100)
							(r)++;
						}
					}
					HX_STACK_LINE(2103)
					return actor;
				}
			}
		}
		HX_STACK_LINE(2108)
		a = this->createActorOfType(type,x,y,layerConst);
	}
	HX_STACK_LINE(2112)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,getRecycledActorOfType,return )

Void Engine_obj::recycleActor( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::recycleActor","com/stencyl/Engine.hx",1888);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(1891)
		if (((bool((a == null())) || bool(a->recycled)))){
			HX_STACK_LINE(1892)
			return null();
		}
		HX_STACK_LINE(1896)
		Dynamic l1 = ::com::stencyl::Engine_obj::engine->whenTypeGroupDiesListeners->get(a->getType());		HX_STACK_VAR(l1,"l1");
		HX_STACK_LINE(1897)
		Dynamic l2 = ::com::stencyl::Engine_obj::engine->whenTypeGroupDiesListeners->get(a->getGroup());		HX_STACK_VAR(l2,"l2");
		HX_STACK_LINE(1899)
		{
			HX_STACK_LINE(1899)
			Dynamic listeners = a->whenKilledListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1899)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1899)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1899)
				try{
					HX_STACK_LINE(1899)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1899)
					f(listeners).Cast< Void >();
					HX_STACK_LINE(1899)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1899)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1899)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3829,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1899)
				(r)++;
			}
		}
		HX_STACK_LINE(1901)
		if (((l1 != null()))){
			HX_STACK_LINE(1903)
			Dynamic listeners = l1;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1903)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1903)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1903)
				try{
					HX_STACK_LINE(1903)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1903)
					f(a,listeners).Cast< Void >();
					HX_STACK_LINE(1903)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1903)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1903)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1903)
				(r)++;
			}
		}
		HX_STACK_LINE(1906)
		if (((l2 != null()))){
			HX_STACK_LINE(1908)
			Dynamic listeners = l2;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1908)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1908)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1908)
				try{
					HX_STACK_LINE(1908)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1908)
					f(a,listeners).Cast< Void >();
					HX_STACK_LINE(1908)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1908)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1908)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1908)
				(r)++;
			}
		}
		HX_STACK_LINE(1911)
		if ((a->isHUD)){
			HX_STACK_LINE(1912)
			a->unanchorFromScreen();
		}
		HX_STACK_LINE(1916)
		if ((a->alwaysSimulate)){
			HX_STACK_LINE(1917)
			a->makeSometimesSimulate(false);
		}
		HX_STACK_LINE(1921)
		a->firstMove = false;
		HX_STACK_LINE(1922)
		a->setX((int)1000000,false,true);
		HX_STACK_LINE(1923)
		a->setY((int)1000000,false,true);
		HX_STACK_LINE(1924)
		a->colX = (int)1000000;
		HX_STACK_LINE(1925)
		a->colY = (int)1000000;
		HX_STACK_LINE(1926)
		a->recycled = true;
		HX_STACK_LINE(1927)
		a->killLeaveScreen = false;
		HX_STACK_LINE(1928)
		a->lastScreenState = false;
		HX_STACK_LINE(1929)
		a->lastSceneState = false;
		HX_STACK_LINE(1932)
		a->cancelTweens();
		HX_STACK_LINE(1938)
		a->fadeTo((int)1,0.01,null());
		HX_STACK_LINE(1940)
		a->realScaleX = (int)1;
		HX_STACK_LINE(1941)
		a->realScaleY = (int)1;
		HX_STACK_LINE(1943)
		a->switchToDefaultAnimation();
		HX_STACK_LINE(1944)
		a->disableActorDrawing();
		HX_STACK_LINE(1947)
		if (((bool(!(a->isLightweight)) && bool((a->body != null()))))){
			HX_STACK_LINE(1949)
			::box2D::dynamics::contacts::B2ContactEdge contact = a->body->getContactList();		HX_STACK_VAR(contact,"contact");
			HX_STACK_LINE(1951)
			while(((contact != null()))){
				HX_STACK_LINE(1953)
				::com::stencyl::Engine_obj::engine->world->m_contactManager->m_contactListener->endContact(contact->contact);
				HX_STACK_LINE(1954)
				contact = contact->next;
			}
		}
		HX_STACK_LINE(1958)
		a->removeAllListeners();
		HX_STACK_LINE(1959)
		a->resetListeners();
		HX_STACK_LINE(1961)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(1963)
		if ((!(a->isLightweight))){
			HX_STACK_LINE(1965)
			a->body->setActive(false);
			HX_STACK_LINE(1966)
			a->body->setAwake(false);
			HX_STACK_LINE(1969)
			if (((a->body->m_prev != null()))){
				HX_STACK_LINE(1970)
				a->body->m_prev->m_next = a->body->m_next;
			}
			HX_STACK_LINE(1974)
			if (((a->body->m_next != null()))){
				HX_STACK_LINE(1975)
				a->body->m_next->m_prev = a->body->m_prev;
			}
			HX_STACK_LINE(1979)
			if (((a->body == this->world->m_bodyList))){
				HX_STACK_LINE(1980)
				this->world->m_bodyList = a->body->m_next;
			}
			HX_STACK_LINE(1984)
			a->body->m_prev = null();
			HX_STACK_LINE(1985)
			a->body->m_next = null();
			HX_STACK_LINE(1987)
			--(this->world->m_bodyCount);
		}
		HX_STACK_LINE(1990)
		a->xSpeed = (int)0;
		HX_STACK_LINE(1991)
		a->ySpeed = (int)0;
		HX_STACK_LINE(1992)
		a->rSpeed = (int)0;
		HX_STACK_LINE(1993)
		a->continuousCollision = false;
		HX_STACK_LINE(1995)
		{
			HX_STACK_LINE(1995)
			::de::polygonal::ds::IntHashTable _this = this->allActors;		HX_STACK_VAR(_this,"_this");
			int key = a->ID;		HX_STACK_VAR(key,"key");
			struct _Function_2_1{
				inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1995);
					{
						HX_STACK_LINE(1995)
						::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1995)
						int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
						struct _Function_3_1{
							inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1995);
								{
									HX_STACK_LINE(1995)
									int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1995)
									i = _this1->_data->__get((i + (int)2));
									HX_STACK_LINE(1995)
									while(((i != (int)-1))){
										HX_STACK_LINE(1995)
										if (((_this1->_data->__get(i) == key))){
											HX_STACK_LINE(1995)
											v = _this1->_data->__get((i + (int)1));
											HX_STACK_LINE(1995)
											break;
										}
										HX_STACK_LINE(1995)
										i = _this1->_data->__get((i + (int)2));
									}
									HX_STACK_LINE(1995)
									return v;
								}
								return null();
							}
						};
						HX_STACK_LINE(1995)
						return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,key)) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(1995)
			int i = _Function_2_1::Block(_this,key);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1995)
			if (((i == (int)-2147483647))){
				HX_STACK_LINE(1995)
				false;
			}
			else{
				HX_STACK_LINE(1995)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(1995)
				hx::IndexRef((_this->_vals).mPtr,i) = null();
				HX_STACK_LINE(1995)
				_this->_keys[i] = (int)-2147483647;
				HX_STACK_LINE(1995)
				_this->_next[i] = _this->_free;
				HX_STACK_LINE(1995)
				_this->_free = i;
				HX_STACK_LINE(1995)
				bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
				HX_STACK_LINE(1995)
				if (((_this->_sizeLevel > (int)0))){
					HX_STACK_LINE(1995)
					if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
						HX_STACK_LINE(1995)
						if ((_this->_isResizable)){
							HX_STACK_LINE(1995)
							shrink = true;
						}
					}
				}
				HX_STACK_LINE(1995)
				{
					HX_STACK_LINE(1995)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(1995)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1995)
					int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1995)
					if (((i1 == (int)-1))){
						HX_STACK_LINE(1995)
						false;
					}
					else{
						HX_STACK_LINE(1995)
						if (((key == _this1->_data->__get(i1)))){
							HX_STACK_LINE(1995)
							if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
								HX_STACK_LINE(1995)
								_this1->_hash[b] = (int)-1;
							}
							else{
								HX_STACK_LINE(1995)
								_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
							}
							HX_STACK_LINE(1995)
							int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(1995)
							_this1->_next[j] = _this1->_free;
							HX_STACK_LINE(1995)
							_this1->_free = j;
							HX_STACK_LINE(1995)
							_this1->_data[(i1 + (int)1)] = (int)-2147483647;
							HX_STACK_LINE(1995)
							_this1->_data[(i1 + (int)2)] = (int)-1;
							HX_STACK_LINE(1995)
							(_this1->_size)--;
							HX_STACK_LINE(1995)
							if (((_this1->_sizeLevel > (int)0))){
								HX_STACK_LINE(1995)
								if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
									HX_STACK_LINE(1995)
									if ((_this1->_isResizable)){
										HX_STACK_LINE(1995)
										_this1->_shrink();
									}
								}
							}
							HX_STACK_LINE(1995)
							true;
						}
						else{
							HX_STACK_LINE(1995)
							bool exists = false;		HX_STACK_VAR(exists,"exists");
							HX_STACK_LINE(1995)
							int i0 = i1;		HX_STACK_VAR(i0,"i0");
							HX_STACK_LINE(1995)
							i1 = _this1->_data->__get((i1 + (int)2));
							HX_STACK_LINE(1995)
							while(((i1 != (int)-1))){
								HX_STACK_LINE(1995)
								if (((_this1->_data->__get(i1) == key))){
									HX_STACK_LINE(1995)
									exists = true;
									HX_STACK_LINE(1995)
									break;
								}
								HX_STACK_LINE(1995)
								i1 = _this1->_data->__get(((i0 = i1) + (int)2));
							}
							HX_STACK_LINE(1995)
							if ((exists)){
								HX_STACK_LINE(1995)
								_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
								HX_STACK_LINE(1995)
								int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(1995)
								_this1->_next[j] = _this1->_free;
								HX_STACK_LINE(1995)
								_this1->_free = j;
								HX_STACK_LINE(1995)
								_this1->_data[(i1 + (int)1)] = (int)-2147483647;
								HX_STACK_LINE(1995)
								_this1->_data[(i1 + (int)2)] = (int)-1;
								HX_STACK_LINE(1995)
								--(_this1->_size);
								HX_STACK_LINE(1995)
								if (((_this1->_sizeLevel > (int)0))){
									HX_STACK_LINE(1995)
									if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
										HX_STACK_LINE(1995)
										if ((_this1->_isResizable)){
											HX_STACK_LINE(1995)
											_this1->_shrink();
										}
									}
								}
								HX_STACK_LINE(1995)
								true;
							}
							else{
								HX_STACK_LINE(1995)
								false;
							}
						}
					}
				}
				HX_STACK_LINE(1995)
				if ((shrink)){
					HX_STACK_LINE(1995)
					(_this->_sizeLevel)--;
					HX_STACK_LINE(1995)
					int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(1995)
					int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1995);
							{
								HX_STACK_LINE(1995)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1995)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1995)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1995)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1995)
					_this->_next = _Function_4_1::Block(newSize);
					HX_STACK_LINE(1995)
					{
						HX_STACK_LINE(1995)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1995)
						while(((_g1 < _g))){
							HX_STACK_LINE(1995)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1995)
							_this->_next[i1] = (i1 + (int)1);
						}
					}
					HX_STACK_LINE(1995)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(1995)
					_this->_free = (int)0;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1995);
							{
								HX_STACK_LINE(1995)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1995)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1995)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1995)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1995)
					Array< int > tmpKeys = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
					HX_STACK_LINE(1995)
					{
						HX_STACK_LINE(1995)
						int k = newSize;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(1995)
						if (((k == (int)-1))){
							HX_STACK_LINE(1995)
							k = tmpKeys->length;
						}
						HX_STACK_LINE(1995)
						{
							HX_STACK_LINE(1995)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1995)
							while(((_g < k))){
								HX_STACK_LINE(1995)
								int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(1995)
								tmpKeys[i1] = (int)-2147483647;
							}
						}
					}
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1995);
							{
								HX_STACK_LINE(1995)
								Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1995)
								a1 = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(1995)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1995)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1995)
					Array< ::Dynamic > tmpVals = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
					HX_STACK_LINE(1995)
					for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
						int i1 = __it->next();
						{
							HX_STACK_LINE(1995)
							tmpKeys[_this->_free] = _this->_keys->__get(i1);
							HX_STACK_LINE(1995)
							tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
							HX_STACK_LINE(1995)
							_this->_free = _this->_next->__get(_this->_free);
						}
;
					}
					HX_STACK_LINE(1995)
					_this->_keys = tmpKeys;
					HX_STACK_LINE(1995)
					_this->_vals = tmpVals;
					HX_STACK_LINE(1995)
					{
						HX_STACK_LINE(1995)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1995)
						while(((_g1 < _g))){
							HX_STACK_LINE(1995)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1995)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
							HX_STACK_LINE(1995)
							int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
							HX_STACK_LINE(1995)
							if (((i2 == (int)-1))){
								HX_STACK_LINE(1995)
								false;
							}
							else{
								HX_STACK_LINE(1995)
								if (((_this1->_data->__get(i2) == key1))){
									HX_STACK_LINE(1995)
									_this1->_data[(i2 + (int)1)] = i1;
									HX_STACK_LINE(1995)
									true;
								}
								else{
									HX_STACK_LINE(1995)
									i2 = _this1->_data->__get((i2 + (int)2));
									HX_STACK_LINE(1995)
									while(((i2 != (int)-1))){
										HX_STACK_LINE(1995)
										if (((_this1->_data->__get(i2) == key1))){
											HX_STACK_LINE(1995)
											_this1->_data[(i2 + (int)1)] = i1;
											HX_STACK_LINE(1995)
											break;
										}
										HX_STACK_LINE(1995)
										i2 = _this1->_data->__get((i2 + (int)2));
									}
									HX_STACK_LINE(1995)
									(i2 != (int)-1);
								}
							}
						}
					}
				}
				HX_STACK_LINE(1995)
				true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,recycleActor,(void))

Void Engine_obj::moveActorToLayer( ::com::stencyl::models::Actor a,int layerID){
{
		HX_STACK_PUSH("Engine::moveActorToLayer","com/stencyl/Engine.hx",1872);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_LINE(1873)
		::flash::display::DisplayObjectContainer layer = this->actorsPerLayer->get(layerID);		HX_STACK_VAR(layer,"layer");
		HX_STACK_LINE(1875)
		if (((layer == null()))){
			HX_STACK_LINE(1877)
			::haxe::Log_obj::trace(((HX_CSTRING("Layer ID: ") + layerID) + HX_CSTRING(" does not exist")),hx::SourceInfo(HX_CSTRING("Engine.hx"),1877,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("moveActorToLayer")));
			HX_STACK_LINE(1878)
			::haxe::Log_obj::trace(HX_CSTRING("Putting actor inside default group"),hx::SourceInfo(HX_CSTRING("Engine.hx"),1878,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("moveActorToLayer")));
			HX_STACK_LINE(1879)
			layer = this->defaultGroup;
		}
		HX_STACK_LINE(1883)
		layer->addChild(a);
		HX_STACK_LINE(1884)
		a->layerID = layerID;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,moveActorToLayer,(void))

Void Engine_obj::removeActorFromLayer( ::com::stencyl::models::Actor a,int layerID){
{
		HX_STACK_PUSH("Engine::removeActorFromLayer","com/stencyl/Engine.hx",1854);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_LINE(1855)
		::flash::display::DisplayObjectContainer layer = this->actorsPerLayer->get(layerID);		HX_STACK_VAR(layer,"layer");
		HX_STACK_LINE(1857)
		if (((layer == null()))){
			HX_STACK_LINE(1859)
			::haxe::Log_obj::trace(((HX_CSTRING("Layer ID: ") + layerID) + HX_CSTRING(" does not exist")),hx::SourceInfo(HX_CSTRING("Engine.hx"),1859,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("removeActorFromLayer")));
			HX_STACK_LINE(1860)
			::haxe::Log_obj::trace(HX_CSTRING("Assuming default group"),hx::SourceInfo(HX_CSTRING("Engine.hx"),1860,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("removeActorFromLayer")));
			HX_STACK_LINE(1861)
			layer = this->defaultGroup;
		}
		HX_STACK_LINE(1865)
		if ((layer->contains(a))){
			HX_STACK_LINE(1866)
			layer->removeChild(a);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,removeActorFromLayer,(void))

Void Engine_obj::removeActor( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::removeActor","com/stencyl/Engine.hx",1823);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(1824)
		{
			HX_STACK_LINE(1824)
			::de::polygonal::ds::IntHashTable _this = this->allActors;		HX_STACK_VAR(_this,"_this");
			int key = a->ID;		HX_STACK_VAR(key,"key");
			struct _Function_2_1{
				inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1824);
					{
						HX_STACK_LINE(1824)
						::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1824)
						int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
						struct _Function_3_1{
							inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1824);
								{
									HX_STACK_LINE(1824)
									int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1824)
									i = _this1->_data->__get((i + (int)2));
									HX_STACK_LINE(1824)
									while(((i != (int)-1))){
										HX_STACK_LINE(1824)
										if (((_this1->_data->__get(i) == key))){
											HX_STACK_LINE(1824)
											v = _this1->_data->__get((i + (int)1));
											HX_STACK_LINE(1824)
											break;
										}
										HX_STACK_LINE(1824)
										i = _this1->_data->__get((i + (int)2));
									}
									HX_STACK_LINE(1824)
									return v;
								}
								return null();
							}
						};
						HX_STACK_LINE(1824)
						return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,key)) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(1824)
			int i = _Function_2_1::Block(_this,key);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1824)
			if (((i == (int)-2147483647))){
				HX_STACK_LINE(1824)
				false;
			}
			else{
				HX_STACK_LINE(1824)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(1824)
				hx::IndexRef((_this->_vals).mPtr,i) = null();
				HX_STACK_LINE(1824)
				_this->_keys[i] = (int)-2147483647;
				HX_STACK_LINE(1824)
				_this->_next[i] = _this->_free;
				HX_STACK_LINE(1824)
				_this->_free = i;
				HX_STACK_LINE(1824)
				bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
				HX_STACK_LINE(1824)
				if (((_this->_sizeLevel > (int)0))){
					HX_STACK_LINE(1824)
					if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
						HX_STACK_LINE(1824)
						if ((_this->_isResizable)){
							HX_STACK_LINE(1824)
							shrink = true;
						}
					}
				}
				HX_STACK_LINE(1824)
				{
					HX_STACK_LINE(1824)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(1824)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1824)
					int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1824)
					if (((i1 == (int)-1))){
						HX_STACK_LINE(1824)
						false;
					}
					else{
						HX_STACK_LINE(1824)
						if (((key == _this1->_data->__get(i1)))){
							HX_STACK_LINE(1824)
							if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
								HX_STACK_LINE(1824)
								_this1->_hash[b] = (int)-1;
							}
							else{
								HX_STACK_LINE(1824)
								_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
							}
							HX_STACK_LINE(1824)
							int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(1824)
							_this1->_next[j] = _this1->_free;
							HX_STACK_LINE(1824)
							_this1->_free = j;
							HX_STACK_LINE(1824)
							_this1->_data[(i1 + (int)1)] = (int)-2147483647;
							HX_STACK_LINE(1824)
							_this1->_data[(i1 + (int)2)] = (int)-1;
							HX_STACK_LINE(1824)
							(_this1->_size)--;
							HX_STACK_LINE(1824)
							if (((_this1->_sizeLevel > (int)0))){
								HX_STACK_LINE(1824)
								if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
									HX_STACK_LINE(1824)
									if ((_this1->_isResizable)){
										HX_STACK_LINE(1824)
										_this1->_shrink();
									}
								}
							}
							HX_STACK_LINE(1824)
							true;
						}
						else{
							HX_STACK_LINE(1824)
							bool exists = false;		HX_STACK_VAR(exists,"exists");
							HX_STACK_LINE(1824)
							int i0 = i1;		HX_STACK_VAR(i0,"i0");
							HX_STACK_LINE(1824)
							i1 = _this1->_data->__get((i1 + (int)2));
							HX_STACK_LINE(1824)
							while(((i1 != (int)-1))){
								HX_STACK_LINE(1824)
								if (((_this1->_data->__get(i1) == key))){
									HX_STACK_LINE(1824)
									exists = true;
									HX_STACK_LINE(1824)
									break;
								}
								HX_STACK_LINE(1824)
								i1 = _this1->_data->__get(((i0 = i1) + (int)2));
							}
							HX_STACK_LINE(1824)
							if ((exists)){
								HX_STACK_LINE(1824)
								_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
								HX_STACK_LINE(1824)
								int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(1824)
								_this1->_next[j] = _this1->_free;
								HX_STACK_LINE(1824)
								_this1->_free = j;
								HX_STACK_LINE(1824)
								_this1->_data[(i1 + (int)1)] = (int)-2147483647;
								HX_STACK_LINE(1824)
								_this1->_data[(i1 + (int)2)] = (int)-1;
								HX_STACK_LINE(1824)
								--(_this1->_size);
								HX_STACK_LINE(1824)
								if (((_this1->_sizeLevel > (int)0))){
									HX_STACK_LINE(1824)
									if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
										HX_STACK_LINE(1824)
										if ((_this1->_isResizable)){
											HX_STACK_LINE(1824)
											_this1->_shrink();
										}
									}
								}
								HX_STACK_LINE(1824)
								true;
							}
							else{
								HX_STACK_LINE(1824)
								false;
							}
						}
					}
				}
				HX_STACK_LINE(1824)
				if ((shrink)){
					HX_STACK_LINE(1824)
					(_this->_sizeLevel)--;
					HX_STACK_LINE(1824)
					int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(1824)
					int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1824);
							{
								HX_STACK_LINE(1824)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1824)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1824)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1824)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1824)
					_this->_next = _Function_4_1::Block(newSize);
					HX_STACK_LINE(1824)
					{
						HX_STACK_LINE(1824)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1824)
						while(((_g1 < _g))){
							HX_STACK_LINE(1824)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1824)
							_this->_next[i1] = (i1 + (int)1);
						}
					}
					HX_STACK_LINE(1824)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(1824)
					_this->_free = (int)0;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1824);
							{
								HX_STACK_LINE(1824)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1824)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1824)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1824)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1824)
					Array< int > tmpKeys = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
					HX_STACK_LINE(1824)
					{
						HX_STACK_LINE(1824)
						int k = newSize;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(1824)
						if (((k == (int)-1))){
							HX_STACK_LINE(1824)
							k = tmpKeys->length;
						}
						HX_STACK_LINE(1824)
						{
							HX_STACK_LINE(1824)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1824)
							while(((_g < k))){
								HX_STACK_LINE(1824)
								int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(1824)
								tmpKeys[i1] = (int)-2147483647;
							}
						}
					}
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1824);
							{
								HX_STACK_LINE(1824)
								Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1824)
								a1 = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(1824)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1824)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1824)
					Array< ::Dynamic > tmpVals = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
					HX_STACK_LINE(1824)
					for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
						int i1 = __it->next();
						{
							HX_STACK_LINE(1824)
							tmpKeys[_this->_free] = _this->_keys->__get(i1);
							HX_STACK_LINE(1824)
							tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
							HX_STACK_LINE(1824)
							_this->_free = _this->_next->__get(_this->_free);
						}
;
					}
					HX_STACK_LINE(1824)
					_this->_keys = tmpKeys;
					HX_STACK_LINE(1824)
					_this->_vals = tmpVals;
					HX_STACK_LINE(1824)
					{
						HX_STACK_LINE(1824)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1824)
						while(((_g1 < _g))){
							HX_STACK_LINE(1824)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1824)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
							HX_STACK_LINE(1824)
							int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
							HX_STACK_LINE(1824)
							if (((i2 == (int)-1))){
								HX_STACK_LINE(1824)
								false;
							}
							else{
								HX_STACK_LINE(1824)
								if (((_this1->_data->__get(i2) == key1))){
									HX_STACK_LINE(1824)
									_this1->_data[(i2 + (int)1)] = i1;
									HX_STACK_LINE(1824)
									true;
								}
								else{
									HX_STACK_LINE(1824)
									i2 = _this1->_data->__get((i2 + (int)2));
									HX_STACK_LINE(1824)
									while(((i2 != (int)-1))){
										HX_STACK_LINE(1824)
										if (((_this1->_data->__get(i2) == key1))){
											HX_STACK_LINE(1824)
											_this1->_data[(i2 + (int)1)] = i1;
											HX_STACK_LINE(1824)
											break;
										}
										HX_STACK_LINE(1824)
										i2 = _this1->_data->__get((i2 + (int)2));
									}
									HX_STACK_LINE(1824)
									(i2 != (int)-1);
								}
							}
						}
					}
				}
				HX_STACK_LINE(1824)
				true;
			}
		}
		HX_STACK_LINE(1827)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(1830)
		this->groups->get(a->getGroupID())->__Field(HX_CSTRING("removeChild"),true)(a);
		HX_STACK_LINE(1832)
		if (((bool(a->isHUD) || bool(a->alwaysSimulate)))){
			HX_STACK_LINE(1834)
			::de::polygonal::ds::IntHashTable _this = this->hudActors;		HX_STACK_VAR(_this,"_this");
			int key = a->ID;		HX_STACK_VAR(key,"key");
			struct _Function_2_1{
				inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1834);
					{
						HX_STACK_LINE(1834)
						::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1834)
						int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
						struct _Function_3_1{
							inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1834);
								{
									HX_STACK_LINE(1834)
									int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1834)
									i = _this1->_data->__get((i + (int)2));
									HX_STACK_LINE(1834)
									while(((i != (int)-1))){
										HX_STACK_LINE(1834)
										if (((_this1->_data->__get(i) == key))){
											HX_STACK_LINE(1834)
											v = _this1->_data->__get((i + (int)1));
											HX_STACK_LINE(1834)
											break;
										}
										HX_STACK_LINE(1834)
										i = _this1->_data->__get((i + (int)2));
									}
									HX_STACK_LINE(1834)
									return v;
								}
								return null();
							}
						};
						HX_STACK_LINE(1834)
						return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,key)) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(1834)
			int i = _Function_2_1::Block(_this,key);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1834)
			if (((i == (int)-2147483647))){
				HX_STACK_LINE(1834)
				false;
			}
			else{
				HX_STACK_LINE(1834)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(1834)
				hx::IndexRef((_this->_vals).mPtr,i) = null();
				HX_STACK_LINE(1834)
				_this->_keys[i] = (int)-2147483647;
				HX_STACK_LINE(1834)
				_this->_next[i] = _this->_free;
				HX_STACK_LINE(1834)
				_this->_free = i;
				HX_STACK_LINE(1834)
				bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
				HX_STACK_LINE(1834)
				if (((_this->_sizeLevel > (int)0))){
					HX_STACK_LINE(1834)
					if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
						HX_STACK_LINE(1834)
						if ((_this->_isResizable)){
							HX_STACK_LINE(1834)
							shrink = true;
						}
					}
				}
				HX_STACK_LINE(1834)
				{
					HX_STACK_LINE(1834)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(1834)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1834)
					int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1834)
					if (((i1 == (int)-1))){
						HX_STACK_LINE(1834)
						false;
					}
					else{
						HX_STACK_LINE(1834)
						if (((key == _this1->_data->__get(i1)))){
							HX_STACK_LINE(1834)
							if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
								HX_STACK_LINE(1834)
								_this1->_hash[b] = (int)-1;
							}
							else{
								HX_STACK_LINE(1834)
								_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
							}
							HX_STACK_LINE(1834)
							int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(1834)
							_this1->_next[j] = _this1->_free;
							HX_STACK_LINE(1834)
							_this1->_free = j;
							HX_STACK_LINE(1834)
							_this1->_data[(i1 + (int)1)] = (int)-2147483647;
							HX_STACK_LINE(1834)
							_this1->_data[(i1 + (int)2)] = (int)-1;
							HX_STACK_LINE(1834)
							(_this1->_size)--;
							HX_STACK_LINE(1834)
							if (((_this1->_sizeLevel > (int)0))){
								HX_STACK_LINE(1834)
								if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
									HX_STACK_LINE(1834)
									if ((_this1->_isResizable)){
										HX_STACK_LINE(1834)
										_this1->_shrink();
									}
								}
							}
							HX_STACK_LINE(1834)
							true;
						}
						else{
							HX_STACK_LINE(1834)
							bool exists = false;		HX_STACK_VAR(exists,"exists");
							HX_STACK_LINE(1834)
							int i0 = i1;		HX_STACK_VAR(i0,"i0");
							HX_STACK_LINE(1834)
							i1 = _this1->_data->__get((i1 + (int)2));
							HX_STACK_LINE(1834)
							while(((i1 != (int)-1))){
								HX_STACK_LINE(1834)
								if (((_this1->_data->__get(i1) == key))){
									HX_STACK_LINE(1834)
									exists = true;
									HX_STACK_LINE(1834)
									break;
								}
								HX_STACK_LINE(1834)
								i1 = _this1->_data->__get(((i0 = i1) + (int)2));
							}
							HX_STACK_LINE(1834)
							if ((exists)){
								HX_STACK_LINE(1834)
								_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
								HX_STACK_LINE(1834)
								int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(1834)
								_this1->_next[j] = _this1->_free;
								HX_STACK_LINE(1834)
								_this1->_free = j;
								HX_STACK_LINE(1834)
								_this1->_data[(i1 + (int)1)] = (int)-2147483647;
								HX_STACK_LINE(1834)
								_this1->_data[(i1 + (int)2)] = (int)-1;
								HX_STACK_LINE(1834)
								--(_this1->_size);
								HX_STACK_LINE(1834)
								if (((_this1->_sizeLevel > (int)0))){
									HX_STACK_LINE(1834)
									if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
										HX_STACK_LINE(1834)
										if ((_this1->_isResizable)){
											HX_STACK_LINE(1834)
											_this1->_shrink();
										}
									}
								}
								HX_STACK_LINE(1834)
								true;
							}
							else{
								HX_STACK_LINE(1834)
								false;
							}
						}
					}
				}
				HX_STACK_LINE(1834)
				if ((shrink)){
					HX_STACK_LINE(1834)
					(_this->_sizeLevel)--;
					HX_STACK_LINE(1834)
					int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(1834)
					int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1834);
							{
								HX_STACK_LINE(1834)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1834)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1834)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1834)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1834)
					_this->_next = _Function_4_1::Block(newSize);
					HX_STACK_LINE(1834)
					{
						HX_STACK_LINE(1834)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1834)
						while(((_g1 < _g))){
							HX_STACK_LINE(1834)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1834)
							_this->_next[i1] = (i1 + (int)1);
						}
					}
					HX_STACK_LINE(1834)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(1834)
					_this->_free = (int)0;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1834);
							{
								HX_STACK_LINE(1834)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1834)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1834)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1834)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1834)
					Array< int > tmpKeys = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
					HX_STACK_LINE(1834)
					{
						HX_STACK_LINE(1834)
						int k = newSize;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(1834)
						if (((k == (int)-1))){
							HX_STACK_LINE(1834)
							k = tmpKeys->length;
						}
						HX_STACK_LINE(1834)
						{
							HX_STACK_LINE(1834)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1834)
							while(((_g < k))){
								HX_STACK_LINE(1834)
								int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(1834)
								tmpKeys[i1] = (int)-2147483647;
							}
						}
					}
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1834);
							{
								HX_STACK_LINE(1834)
								Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1834)
								a1 = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(1834)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1834)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1834)
					Array< ::Dynamic > tmpVals = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
					HX_STACK_LINE(1834)
					for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
						int i1 = __it->next();
						{
							HX_STACK_LINE(1834)
							tmpKeys[_this->_free] = _this->_keys->__get(i1);
							HX_STACK_LINE(1834)
							tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
							HX_STACK_LINE(1834)
							_this->_free = _this->_next->__get(_this->_free);
						}
;
					}
					HX_STACK_LINE(1834)
					_this->_keys = tmpKeys;
					HX_STACK_LINE(1834)
					_this->_vals = tmpVals;
					HX_STACK_LINE(1834)
					{
						HX_STACK_LINE(1834)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1834)
						while(((_g1 < _g))){
							HX_STACK_LINE(1834)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1834)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
							HX_STACK_LINE(1834)
							int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
							HX_STACK_LINE(1834)
							if (((i2 == (int)-1))){
								HX_STACK_LINE(1834)
								false;
							}
							else{
								HX_STACK_LINE(1834)
								if (((_this1->_data->__get(i2) == key1))){
									HX_STACK_LINE(1834)
									_this1->_data[(i2 + (int)1)] = i1;
									HX_STACK_LINE(1834)
									true;
								}
								else{
									HX_STACK_LINE(1834)
									i2 = _this1->_data->__get((i2 + (int)2));
									HX_STACK_LINE(1834)
									while(((i2 != (int)-1))){
										HX_STACK_LINE(1834)
										if (((_this1->_data->__get(i2) == key1))){
											HX_STACK_LINE(1834)
											_this1->_data[(i2 + (int)1)] = i1;
											HX_STACK_LINE(1834)
											break;
										}
										HX_STACK_LINE(1834)
										i2 = _this1->_data->__get((i2 + (int)2));
									}
									HX_STACK_LINE(1834)
									(i2 != (int)-1);
								}
							}
						}
					}
				}
				HX_STACK_LINE(1834)
				true;
			}
		}
		HX_STACK_LINE(1837)
		a->destroy();
		HX_STACK_LINE(1841)
		if (((::com::stencyl::Data_obj::get()->resources->get(a->typeID) != null()))){
			HX_STACK_LINE(1843)
			::com::stencyl::models::actor::ActorType typeID = hx::TCast< com::stencyl::models::actor::ActorType >::cast(::com::stencyl::Data_obj::get()->resources->get(a->typeID));		HX_STACK_VAR(typeID,"typeID");
			HX_STACK_LINE(1844)
			Array< ::Dynamic > cache = this->actorsOfType->get(typeID->ID);		HX_STACK_VAR(cache,"cache");
			HX_STACK_LINE(1846)
			if (((cache != null()))){
				HX_STACK_LINE(1847)
				cache->remove(a);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,removeActor,(void))

::com::stencyl::models::Actor Engine_obj::createActor( ::com::stencyl::models::scene::ActorInstance ai,hx::Null< bool >  __o_offset){
bool offset = __o_offset.Default(false);
	HX_STACK_PUSH("Engine::createActor","com/stencyl/Engine.hx",1704);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ai,"ai");
	HX_STACK_ARG(offset,"offset");
{
		HX_STACK_LINE(1705)
		::com::stencyl::models::actor::Sprite s = hx::TCast< com::stencyl::models::actor::Sprite >::cast(::com::stencyl::Data_obj::get()->resources->get(ai->actorType->spriteID));		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(1707)
		::com::stencyl::models::Actor a = ::com::stencyl::models::Actor_obj::__new(hx::ObjectPtr<OBJ_>(this),ai->elementID,ai->groupID,(Float(ai->x) / Float(::com::stencyl::Engine_obj::physicsScale)),(Float(ai->y) / Float(::com::stencyl::Engine_obj::physicsScale)),ai->layerID,s->width,s->height,s,ai->behaviorValues,ai->actorType,(  ((::com::stencyl::Engine_obj::NO_PHYSICS)) ? ::box2D::dynamics::B2BodyDef(null()) : ::box2D::dynamics::B2BodyDef(ai->actorType->bodyDef) ),false,false,false,false,null(),ai->actorType->ID,(bool(ai->actorType->isLightweight) || bool(::com::stencyl::Engine_obj::NO_PHYSICS)),ai->actorType->autoScale,ai->actorType->ignoreGravity);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1732)
		if (((ai->angle != (int)0))){
			HX_STACK_LINE(1733)
			if (((bool((a->currOffset->x != (int)0)) || bool((a->currOffset->y != (int)0))))){
				HX_STACK_LINE(1736)
				int resetOrigX = ::Std_obj::_int(a->currOrigin->x);		HX_STACK_VAR(resetOrigX,"resetOrigX");
				HX_STACK_LINE(1737)
				int resetOrigY = ::Std_obj::_int(a->currOrigin->y);		HX_STACK_VAR(resetOrigY,"resetOrigY");
				HX_STACK_LINE(1739)
				a->setOriginPoint(::Std_obj::_int((Float(a->cacheWidth) / Float((int)2))),::Std_obj::_int((Float(a->cacheHeight) / Float((int)2))));
				HX_STACK_LINE(1740)
				a->setAngle(ai->angle,false);
				HX_STACK_LINE(1741)
				a->setOriginPoint(resetOrigX,resetOrigY);
			}
			else{
				HX_STACK_LINE(1745)
				a->setAngle(ai->angle,false);
			}
		}
		HX_STACK_LINE(1750)
		if (((bool((ai->scaleX != (int)1)) || bool((ai->scaleY != (int)1))))){
			HX_STACK_LINE(1751)
			a->growTo(ai->scaleX,ai->scaleY,(int)0,null());
		}
		HX_STACK_LINE(1755)
		a->set_name(ai->actorType->name);
		HX_STACK_LINE(1757)
		this->moveActorToLayer(a,ai->layerID);
		HX_STACK_LINE(1763)
		if (((this->recycledActorsOfType->get(ai->actorType->ID) == null()))){
			HX_STACK_LINE(1764)
			this->recycledActorsOfType->set(ai->actorType->ID,Array_obj< ::Dynamic >::__new());
		}
		HX_STACK_LINE(1769)
		Array< ::Dynamic > cache = this->recycledActorsOfType->get(ai->actorType->ID);		HX_STACK_VAR(cache,"cache");
		HX_STACK_LINE(1770)
		cache->push(a);
		HX_STACK_LINE(1774)
		::com::stencyl::models::actor::Group group = this->groups->get(ai->groupID);		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(1776)
		if (((group != null()))){
			HX_STACK_LINE(1777)
			group->addChild(a);
		}
		HX_STACK_LINE(1784)
		if (((ai->elementID == ::com::stencyl::utils::Utils_obj::INTEGER_MAX))){
			HX_STACK_LINE(1786)
			(this->nextID)++;
			HX_STACK_LINE(1787)
			a->ID = this->nextID;
			HX_STACK_LINE(1788)
			{
				HX_STACK_LINE(1788)
				::de::polygonal::ds::IntHashTable _this = this->allActors;		HX_STACK_VAR(_this,"_this");
				int key = a->ID;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(1788)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(1788)
				if (((_this->_h->_size == _this->_h->_capacity))){
					HX_STACK_LINE(1788)
					int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(1788)
					int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1788);
							{
								HX_STACK_LINE(1788)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1788)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1788)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1788)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1788)
					Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(1788)
					{
						HX_STACK_LINE(1788)
						Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(1788)
						if (((max == (int)-1))){
							HX_STACK_LINE(1788)
							max = src->length;
						}
						HX_STACK_LINE(1788)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1788)
						{
							HX_STACK_LINE(1788)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1788)
							while(((_g < max))){
								HX_STACK_LINE(1788)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1788)
								tmp[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(1788)
						tmp;
					}
					HX_STACK_LINE(1788)
					_this->_next = tmp;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1788);
							{
								HX_STACK_LINE(1788)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1788)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1788)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1788)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1788)
					Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(1788)
					{
						HX_STACK_LINE(1788)
						Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(1788)
						if (((max == (int)-1))){
							HX_STACK_LINE(1788)
							max = src->length;
						}
						HX_STACK_LINE(1788)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1788)
						{
							HX_STACK_LINE(1788)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1788)
							while(((_g < max))){
								HX_STACK_LINE(1788)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1788)
								tmp1[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(1788)
						tmp1;
					}
					HX_STACK_LINE(1788)
					_this->_keys = tmp1;
					HX_STACK_LINE(1788)
					{
						HX_STACK_LINE(1788)
						int _g = oldSize;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1788)
						while(((_g < newSize))){
							HX_STACK_LINE(1788)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1788)
							_this->_keys[i] = (int)-2147483647;
						}
					}
					HX_STACK_LINE(1788)
					{
						HX_STACK_LINE(1788)
						int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1788)
						while(((_g1 < _g))){
							HX_STACK_LINE(1788)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1788)
							_this->_next[i] = (i + (int)1);
						}
					}
					HX_STACK_LINE(1788)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(1788)
					_this->_free = oldSize;
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1788);
							{
								HX_STACK_LINE(1788)
								Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1788)
								a1 = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(1788)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1788)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1788)
					Array< ::Dynamic > tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1788)
					{
						HX_STACK_LINE(1788)
						Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(1788)
						if (((max == (int)-1))){
							HX_STACK_LINE(1788)
							max = src->length;
						}
						HX_STACK_LINE(1788)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1788)
						{
							HX_STACK_LINE(1788)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1788)
							while(((_g < max))){
								HX_STACK_LINE(1788)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1788)
								tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::Actor >();
							}
						}
						HX_STACK_LINE(1788)
						tmp2;
					}
					HX_STACK_LINE(1788)
					_this->_vals = tmp2;
					HX_STACK_LINE(1788)
					(_this->_sizeLevel)++;
				}
				HX_STACK_LINE(1788)
				{
					HX_STACK_LINE(1788)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(1788)
					if (((_this1->_size == _this1->_capacity))){
						HX_STACK_LINE(1788)
						if ((_this1->_isResizable)){
							HX_STACK_LINE(1788)
							_this1->_expand();
						}
					}
					HX_STACK_LINE(1788)
					int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1788)
					_this1->_free = _this1->_next->__get(_this1->_free);
					HX_STACK_LINE(1788)
					_this1->_data[i] = key;
					HX_STACK_LINE(1788)
					_this1->_data[(i + (int)1)] = _this->_free;
					HX_STACK_LINE(1788)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1788)
					int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(1788)
					if (((j == (int)-1))){
						HX_STACK_LINE(1788)
						_this1->_hash[b] = i;
						HX_STACK_LINE(1788)
						(_this1->_size)++;
						HX_STACK_LINE(1788)
						true;
					}
					else{
						HX_STACK_LINE(1788)
						bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
						HX_STACK_LINE(1788)
						int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1788)
						while(((t != (int)-1))){
							HX_STACK_LINE(1788)
							if (((_this1->_data->__get(t) == key))){
								HX_STACK_LINE(1788)
								first = false;
							}
							HX_STACK_LINE(1788)
							j = t;
							HX_STACK_LINE(1788)
							t = _this1->_data->__get((t + (int)2));
						}
						HX_STACK_LINE(1788)
						_this1->_data[(j + (int)2)] = i;
						HX_STACK_LINE(1788)
						(_this1->_size)++;
						HX_STACK_LINE(1788)
						first;
					}
				}
				HX_STACK_LINE(1788)
				hx::IndexRef((_this->_vals).mPtr,_this->_free) = a;
				HX_STACK_LINE(1788)
				_this->_keys[_this->_free] = key;
				HX_STACK_LINE(1788)
				_this->_free = _this->_next->__get(_this->_free);
				HX_STACK_LINE(1788)
				true;
			}
		}
		else{
			HX_STACK_LINE(1793)
			{
				HX_STACK_LINE(1793)
				::de::polygonal::ds::IntHashTable _this = this->allActors;		HX_STACK_VAR(_this,"_this");
				int key = a->ID;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(1793)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(1793)
				if (((_this->_h->_size == _this->_h->_capacity))){
					HX_STACK_LINE(1793)
					int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(1793)
					int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1793);
							{
								HX_STACK_LINE(1793)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1793)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1793)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1793)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1793)
					Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(1793)
					{
						HX_STACK_LINE(1793)
						Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(1793)
						if (((max == (int)-1))){
							HX_STACK_LINE(1793)
							max = src->length;
						}
						HX_STACK_LINE(1793)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1793)
						{
							HX_STACK_LINE(1793)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1793)
							while(((_g < max))){
								HX_STACK_LINE(1793)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1793)
								tmp[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(1793)
						tmp;
					}
					HX_STACK_LINE(1793)
					_this->_next = tmp;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1793);
							{
								HX_STACK_LINE(1793)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1793)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1793)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1793)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1793)
					Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(1793)
					{
						HX_STACK_LINE(1793)
						Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(1793)
						if (((max == (int)-1))){
							HX_STACK_LINE(1793)
							max = src->length;
						}
						HX_STACK_LINE(1793)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1793)
						{
							HX_STACK_LINE(1793)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1793)
							while(((_g < max))){
								HX_STACK_LINE(1793)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1793)
								tmp1[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(1793)
						tmp1;
					}
					HX_STACK_LINE(1793)
					_this->_keys = tmp1;
					HX_STACK_LINE(1793)
					{
						HX_STACK_LINE(1793)
						int _g = oldSize;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1793)
						while(((_g < newSize))){
							HX_STACK_LINE(1793)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1793)
							_this->_keys[i] = (int)-2147483647;
						}
					}
					HX_STACK_LINE(1793)
					{
						HX_STACK_LINE(1793)
						int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1793)
						while(((_g1 < _g))){
							HX_STACK_LINE(1793)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1793)
							_this->_next[i] = (i + (int)1);
						}
					}
					HX_STACK_LINE(1793)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(1793)
					_this->_free = oldSize;
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1793);
							{
								HX_STACK_LINE(1793)
								Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1793)
								a1 = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(1793)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1793)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1793)
					Array< ::Dynamic > tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1793)
					{
						HX_STACK_LINE(1793)
						Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(1793)
						if (((max == (int)-1))){
							HX_STACK_LINE(1793)
							max = src->length;
						}
						HX_STACK_LINE(1793)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1793)
						{
							HX_STACK_LINE(1793)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1793)
							while(((_g < max))){
								HX_STACK_LINE(1793)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1793)
								tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::Actor >();
							}
						}
						HX_STACK_LINE(1793)
						tmp2;
					}
					HX_STACK_LINE(1793)
					_this->_vals = tmp2;
					HX_STACK_LINE(1793)
					(_this->_sizeLevel)++;
				}
				HX_STACK_LINE(1793)
				{
					HX_STACK_LINE(1793)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(1793)
					if (((_this1->_size == _this1->_capacity))){
						HX_STACK_LINE(1793)
						if ((_this1->_isResizable)){
							HX_STACK_LINE(1793)
							_this1->_expand();
						}
					}
					HX_STACK_LINE(1793)
					int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1793)
					_this1->_free = _this1->_next->__get(_this1->_free);
					HX_STACK_LINE(1793)
					_this1->_data[i] = key;
					HX_STACK_LINE(1793)
					_this1->_data[(i + (int)1)] = _this->_free;
					HX_STACK_LINE(1793)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1793)
					int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(1793)
					if (((j == (int)-1))){
						HX_STACK_LINE(1793)
						_this1->_hash[b] = i;
						HX_STACK_LINE(1793)
						(_this1->_size)++;
						HX_STACK_LINE(1793)
						true;
					}
					else{
						HX_STACK_LINE(1793)
						bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
						HX_STACK_LINE(1793)
						int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1793)
						while(((t != (int)-1))){
							HX_STACK_LINE(1793)
							if (((_this1->_data->__get(t) == key))){
								HX_STACK_LINE(1793)
								first = false;
							}
							HX_STACK_LINE(1793)
							j = t;
							HX_STACK_LINE(1793)
							t = _this1->_data->__get((t + (int)2));
						}
						HX_STACK_LINE(1793)
						_this1->_data[(j + (int)2)] = i;
						HX_STACK_LINE(1793)
						(_this1->_size)++;
						HX_STACK_LINE(1793)
						first;
					}
				}
				HX_STACK_LINE(1793)
				hx::IndexRef((_this->_vals).mPtr,_this->_free) = a;
				HX_STACK_LINE(1793)
				_this->_keys[_this->_free] = key;
				HX_STACK_LINE(1793)
				_this->_free = _this->_next->__get(_this->_free);
				HX_STACK_LINE(1793)
				true;
			}
			HX_STACK_LINE(1794)
			this->nextID = ::Std_obj::_int(::Math_obj::max(a->ID,this->nextID));
		}
		HX_STACK_LINE(1797)
		a->internalUpdate((int)0,false);
		HX_STACK_LINE(1798)
		a->updateDrawingMatrix();
		HX_STACK_LINE(1803)
		if (((ai->actorType != null()))){
			HX_STACK_LINE(1805)
			Array< ::Dynamic > cache1 = this->actorsOfType->get(ai->actorType->ID);		HX_STACK_VAR(cache1,"cache1");
			HX_STACK_LINE(1807)
			if (((cache1 == null()))){
				HX_STACK_LINE(1809)
				cache1 = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(1810)
				this->actorsOfType->set(ai->actorType->ID,cache1);
			}
			HX_STACK_LINE(1813)
			if (((cache1 != null()))){
				HX_STACK_LINE(1814)
				cache1->push(a);
			}
		}
		HX_STACK_LINE(1819)
		return a;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,createActor,return )

Void Engine_obj::createActorInNextScene( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layer){
{
		HX_STACK_PUSH("Engine::createActorInNextScene","com/stencyl/Engine.hx",1699);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(layer,"layer");
		HX_STACK_LINE(1699)
		this->actorsToCreateInNextScene->push(::com::stencyl::models::scene::DeferredActor_obj::__new(type,x,y,layer));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,createActorInNextScene,(void))

bool Engine_obj::isTransitioningOut( ){
	HX_STACK_PUSH("Engine::isTransitioningOut","com/stencyl/Engine.hx",1685);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1686)
	if (((bool((this->leave != null())) && bool(this->leave->isActive())))){
		HX_STACK_LINE(1687)
		return true;
	}
	HX_STACK_LINE(1691)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,isTransitioningOut,return )

bool Engine_obj::isTransitioning( ){
	HX_STACK_PUSH("Engine::isTransitioning","com/stencyl/Engine.hx",1670);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1671)
	if (((bool((this->enter != null())) && bool(this->enter->isActive())))){
		HX_STACK_LINE(1672)
		return true;
	}
	else{
		HX_STACK_LINE(1676)
		if (((bool((this->leave != null())) && bool(this->leave->isActive())))){
			HX_STACK_LINE(1677)
			return true;
		}
	}
	HX_STACK_LINE(1681)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,isTransitioning,return )

Void Engine_obj::enterScene( ){
{
		HX_STACK_PUSH("Engine::enterScene","com/stencyl/Engine.hx",1650);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1651)
		if ((!(this->enter->isComplete()))){
			HX_STACK_LINE(1653)
			this->enter->start();
			HX_STACK_LINE(1655)
			if (((this->leave != null()))){
				HX_STACK_LINE(1656)
				this->leave->cleanup();
			}
		}
		HX_STACK_LINE(1661)
		this->leave = null();
		HX_STACK_LINE(1665)
		this->cleanup();
		HX_STACK_LINE(1666)
		this->loadScene(this->sceneToEnter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,enterScene,(void))

Void Engine_obj::switchScene( int sceneID,::com::stencyl::graphics::transitions::Transition leave,::com::stencyl::graphics::transitions::Transition enter){
{
		HX_STACK_PUSH("Engine::switchScene","com/stencyl/Engine.hx",1612);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sceneID,"sceneID");
		HX_STACK_ARG(leave,"leave");
		HX_STACK_ARG(enter,"enter");
		HX_STACK_LINE(1615)
		if ((this->isTransitioning())){
			HX_STACK_LINE(1616)
			return null();
		}
		HX_STACK_LINE(1621)
		::haxe::Log_obj::trace((HX_CSTRING("Switching to scene ") + sceneID),hx::SourceInfo(HX_CSTRING("Engine.hx"),1621,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("switchScene")));
		HX_STACK_LINE(1623)
		if (((bool((leave != null())) && bool(leave->isComplete())))){
			HX_STACK_LINE(1624)
			leave->reset();
		}
		HX_STACK_LINE(1628)
		if (((bool((leave == null())) || bool((leave->duration == (int)0))))){
			HX_STACK_LINE(1629)
			leave = ::com::stencyl::graphics::transitions::Transition_obj::__new((int)0);
		}
		HX_STACK_LINE(1633)
		if (((bool((enter == null())) || bool((enter->duration == (int)0))))){
			HX_STACK_LINE(1634)
			enter = ::com::stencyl::graphics::transitions::Transition_obj::__new((int)1);
		}
		HX_STACK_LINE(1638)
		this->leave = leave;
		HX_STACK_LINE(1639)
		this->enter = enter;
		HX_STACK_LINE(1641)
		if ((!(this->leave->isComplete()))){
			HX_STACK_LINE(1642)
			this->leave->start();
		}
		HX_STACK_LINE(1646)
		this->sceneToEnter = sceneID;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,switchScene,(void))

Void Engine_obj::cleanup( ){
{
		HX_STACK_PUSH("Engine::cleanup","com/stencyl/Engine.hx",1460);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1462)
		::JoystickController_obj::reset();
		HX_STACK_LINE(1465)
		if (((bool((::com::stencyl::Engine_obj::debugDrawer != null())) && bool((::com::stencyl::Engine_obj::debugDrawer->m_sprite != null()))))){
			HX_STACK_LINE(1466)
			::com::stencyl::Engine_obj::debugDrawer->m_sprite->get_graphics()->clear();
		}
		HX_STACK_LINE(1470)
		::com::stencyl::utils::Utils_obj::removeAllChildren(this->master);
		HX_STACK_LINE(1471)
		::com::stencyl::utils::Utils_obj::removeAllChildren(this->hudLayer);
		HX_STACK_LINE(1473)
		this->behaviors->destroy();
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1475);
				{
					HX_STACK_LINE(1475)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->actorsPerLayer);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1475);
						{
							HX_STACK_LINE(1475)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1475)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1475)
		for(::cpp::FastIterator_obj< ::flash::display::DisplayObjectContainer > *__it = ::cpp::CreateFastIterator< ::flash::display::DisplayObjectContainer >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::flash::display::DisplayObjectContainer group = __it->next();
			::com::stencyl::utils::Utils_obj::removeAllChildren(group);
		}
		HX_STACK_LINE(1482)
		this->camera->destroy();
		HX_STACK_LINE(1483)
		this->camera = null();
		HX_STACK_LINE(1488)
		if (((this->world != null()))){
			HX_STACK_LINE(1490)
			::box2D::dynamics::B2Body worldbody = this->world->getBodyList();		HX_STACK_VAR(worldbody,"worldbody");
			HX_STACK_LINE(1491)
			::box2D::dynamics::joints::B2Joint j = this->world->getJointList();		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1493)
			while(((j != null()))){
				HX_STACK_LINE(1495)
				this->world->destroyJoint(j);
				HX_STACK_LINE(1496)
				j = j->getNext();
			}
			HX_STACK_LINE(1499)
			while(((worldbody != null()))){
				HX_STACK_LINE(1501)
				this->world->destroyBody(worldbody);
				HX_STACK_LINE(1502)
				worldbody = worldbody->getNext();
			}
		}
		struct _Function_1_2{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1506);
				{
					HX_STACK_LINE(1506)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->actorsOfType);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1506);
						{
							HX_STACK_LINE(1506)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1506)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1506)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >((_Function_1_2::Block(this))());  __it->hasNext(); ){
			Array< ::Dynamic > set = __it->next();
			set->splice((int)0,set->length);
		}
		struct _Function_1_3{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1511);
				{
					HX_STACK_LINE(1511)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->recycledActorsOfType);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1511);
						{
							HX_STACK_LINE(1511)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1511)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1511)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >((_Function_1_3::Block(this))());  __it->hasNext(); ){
			Array< ::Dynamic > rList = __it->next();
			{
				HX_STACK_LINE(1513)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1513)
				while(((_g < rList->length))){
					HX_STACK_LINE(1513)
					::com::stencyl::models::Actor a = rList->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1513)
					++(_g);
					HX_STACK_LINE(1515)
					if ((!(a->destroyed))){
						HX_STACK_LINE(1516)
						a->destroy();
					}
				}
			}
;
		}
		struct _Function_1_4{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1522);
				{
					HX_STACK_LINE(1522)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->recycledActorsOfType);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1522);
						{
							HX_STACK_LINE(1522)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1522)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1522)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >((_Function_1_4::Block(this))());  __it->hasNext(); ){
			Array< ::Dynamic > set = __it->next();
			set->splice((int)0,set->length);
		}
		HX_STACK_LINE(1528)
		if (((bool((this->scene != null())) && bool((this->scene->terrain != null()))))){
			HX_STACK_LINE(1529)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::TileLayer > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::TileLayer >(this->scene->terrain->iterator());  __it->hasNext(); ){
				::com::stencyl::models::scene::TileLayer tl = __it->next();
				tl->clearBitmap();
			}
		}
		HX_STACK_LINE(1536)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >(this->allActors->iterator());  __it->hasNext(); ){
			::com::stencyl::models::Actor a = __it->next();
			a->destroy();
		}
		HX_STACK_LINE(1542)
		while(((::Lambda_obj::count(this->allActors,null()) > (int)0))){
			HX_STACK_LINE(1543)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->allActors->keys());  __it->hasNext(); ){
				int key = __it->next();
				{
					HX_STACK_LINE(1546)
					::de::polygonal::ds::IntHashTable _this = this->allActors;		HX_STACK_VAR(_this,"_this");
					struct _Function_3_1{
						inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1546);
							{
								HX_STACK_LINE(1546)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1546)
								int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_4_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1546);
										{
											HX_STACK_LINE(1546)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1546)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1546)
											while(((i != (int)-1))){
												HX_STACK_LINE(1546)
												if (((_this1->_data->__get(i) == key))){
													HX_STACK_LINE(1546)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1546)
													break;
												}
												HX_STACK_LINE(1546)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1546)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1546)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1546)
					int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1546)
					if (((i == (int)-2147483647))){
						HX_STACK_LINE(1546)
						false;
					}
					else{
						HX_STACK_LINE(1546)
						_this->_key0 = (int)-2147483647;
						HX_STACK_LINE(1546)
						hx::IndexRef((_this->_vals).mPtr,i) = null();
						HX_STACK_LINE(1546)
						_this->_keys[i] = (int)-2147483647;
						HX_STACK_LINE(1546)
						_this->_next[i] = _this->_free;
						HX_STACK_LINE(1546)
						_this->_free = i;
						HX_STACK_LINE(1546)
						bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
						HX_STACK_LINE(1546)
						if (((_this->_sizeLevel > (int)0))){
							HX_STACK_LINE(1546)
							if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
								HX_STACK_LINE(1546)
								if ((_this->_isResizable)){
									HX_STACK_LINE(1546)
									shrink = true;
								}
							}
						}
						HX_STACK_LINE(1546)
						{
							HX_STACK_LINE(1546)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1546)
							int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(1546)
							int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1546)
							if (((i1 == (int)-1))){
								HX_STACK_LINE(1546)
								false;
							}
							else{
								HX_STACK_LINE(1546)
								if (((key == _this1->_data->__get(i1)))){
									HX_STACK_LINE(1546)
									if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
										HX_STACK_LINE(1546)
										_this1->_hash[b] = (int)-1;
									}
									else{
										HX_STACK_LINE(1546)
										_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
									}
									HX_STACK_LINE(1546)
									int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(1546)
									_this1->_next[j] = _this1->_free;
									HX_STACK_LINE(1546)
									_this1->_free = j;
									HX_STACK_LINE(1546)
									_this1->_data[(i1 + (int)1)] = (int)-2147483647;
									HX_STACK_LINE(1546)
									_this1->_data[(i1 + (int)2)] = (int)-1;
									HX_STACK_LINE(1546)
									(_this1->_size)--;
									HX_STACK_LINE(1546)
									if (((_this1->_sizeLevel > (int)0))){
										HX_STACK_LINE(1546)
										if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
											HX_STACK_LINE(1546)
											if ((_this1->_isResizable)){
												HX_STACK_LINE(1546)
												_this1->_shrink();
											}
										}
									}
									HX_STACK_LINE(1546)
									true;
								}
								else{
									HX_STACK_LINE(1546)
									bool exists = false;		HX_STACK_VAR(exists,"exists");
									HX_STACK_LINE(1546)
									int i0 = i1;		HX_STACK_VAR(i0,"i0");
									HX_STACK_LINE(1546)
									i1 = _this1->_data->__get((i1 + (int)2));
									HX_STACK_LINE(1546)
									while(((i1 != (int)-1))){
										HX_STACK_LINE(1546)
										if (((_this1->_data->__get(i1) == key))){
											HX_STACK_LINE(1546)
											exists = true;
											HX_STACK_LINE(1546)
											break;
										}
										HX_STACK_LINE(1546)
										i1 = _this1->_data->__get(((i0 = i1) + (int)2));
									}
									HX_STACK_LINE(1546)
									if ((exists)){
										HX_STACK_LINE(1546)
										_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
										HX_STACK_LINE(1546)
										int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(1546)
										_this1->_next[j] = _this1->_free;
										HX_STACK_LINE(1546)
										_this1->_free = j;
										HX_STACK_LINE(1546)
										_this1->_data[(i1 + (int)1)] = (int)-2147483647;
										HX_STACK_LINE(1546)
										_this1->_data[(i1 + (int)2)] = (int)-1;
										HX_STACK_LINE(1546)
										--(_this1->_size);
										HX_STACK_LINE(1546)
										if (((_this1->_sizeLevel > (int)0))){
											HX_STACK_LINE(1546)
											if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
												HX_STACK_LINE(1546)
												if ((_this1->_isResizable)){
													HX_STACK_LINE(1546)
													_this1->_shrink();
												}
											}
										}
										HX_STACK_LINE(1546)
										true;
									}
									else{
										HX_STACK_LINE(1546)
										false;
									}
								}
							}
						}
						HX_STACK_LINE(1546)
						if ((shrink)){
							HX_STACK_LINE(1546)
							(_this->_sizeLevel)--;
							HX_STACK_LINE(1546)
							int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
							HX_STACK_LINE(1546)
							int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
							struct _Function_5_1{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1546);
									{
										HX_STACK_LINE(1546)
										Array< int > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1546)
										a = Array_obj< int >::__new();
										HX_STACK_LINE(1546)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1546)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1546)
							_this->_next = _Function_5_1::Block(newSize);
							HX_STACK_LINE(1546)
							{
								HX_STACK_LINE(1546)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1546)
								while(((_g1 < _g))){
									HX_STACK_LINE(1546)
									int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(1546)
									_this->_next[i1] = (i1 + (int)1);
								}
							}
							HX_STACK_LINE(1546)
							_this->_next[(newSize - (int)1)] = (int)-1;
							HX_STACK_LINE(1546)
							_this->_free = (int)0;
							struct _Function_5_2{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1546);
									{
										HX_STACK_LINE(1546)
										Array< int > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1546)
										a = Array_obj< int >::__new();
										HX_STACK_LINE(1546)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1546)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1546)
							Array< int > tmpKeys = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
							HX_STACK_LINE(1546)
							{
								HX_STACK_LINE(1546)
								int k = newSize;		HX_STACK_VAR(k,"k");
								HX_STACK_LINE(1546)
								if (((k == (int)-1))){
									HX_STACK_LINE(1546)
									k = tmpKeys->length;
								}
								HX_STACK_LINE(1546)
								{
									HX_STACK_LINE(1546)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1546)
									while(((_g < k))){
										HX_STACK_LINE(1546)
										int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(1546)
										tmpKeys[i1] = (int)-2147483647;
									}
								}
							}
							struct _Function_5_3{
								inline static Array< ::Dynamic > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1546);
									{
										HX_STACK_LINE(1546)
										Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1546)
										a = Array_obj< ::Dynamic >::__new();
										HX_STACK_LINE(1546)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1546)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1546)
							Array< ::Dynamic > tmpVals = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
							HX_STACK_LINE(1546)
							for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
								int i1 = __it->next();
								{
									HX_STACK_LINE(1546)
									tmpKeys[_this->_free] = _this->_keys->__get(i1);
									HX_STACK_LINE(1546)
									tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
									HX_STACK_LINE(1546)
									_this->_free = _this->_next->__get(_this->_free);
								}
;
							}
							HX_STACK_LINE(1546)
							_this->_keys = tmpKeys;
							HX_STACK_LINE(1546)
							_this->_vals = tmpVals;
							HX_STACK_LINE(1546)
							{
								HX_STACK_LINE(1546)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1546)
								while(((_g1 < _g))){
									HX_STACK_LINE(1546)
									int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(1546)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
									HX_STACK_LINE(1546)
									int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
									HX_STACK_LINE(1546)
									if (((i2 == (int)-1))){
										HX_STACK_LINE(1546)
										false;
									}
									else{
										HX_STACK_LINE(1546)
										if (((_this1->_data->__get(i2) == key1))){
											HX_STACK_LINE(1546)
											_this1->_data[(i2 + (int)1)] = i1;
											HX_STACK_LINE(1546)
											true;
										}
										else{
											HX_STACK_LINE(1546)
											i2 = _this1->_data->__get((i2 + (int)2));
											HX_STACK_LINE(1546)
											while(((i2 != (int)-1))){
												HX_STACK_LINE(1546)
												if (((_this1->_data->__get(i2) == key1))){
													HX_STACK_LINE(1546)
													_this1->_data[(i2 + (int)1)] = i1;
													HX_STACK_LINE(1546)
													break;
												}
												HX_STACK_LINE(1546)
												i2 = _this1->_data->__get((i2 + (int)2));
											}
											HX_STACK_LINE(1546)
											(i2 != (int)-1);
										}
									}
								}
							}
						}
						HX_STACK_LINE(1546)
						true;
					}
				}
;
			}
		}
		HX_STACK_LINE(1550)
		this->scene->unload();
		HX_STACK_LINE(1552)
		this->actorsOfType = null();
		HX_STACK_LINE(1553)
		this->recycledActorsOfType = null();
		HX_STACK_LINE(1555)
		this->hudActors = null();
		HX_STACK_LINE(1556)
		this->layers = null();
		HX_STACK_LINE(1557)
		this->actorsPerLayer = null();
		HX_STACK_LINE(1558)
		this->layersToDraw = null();
		HX_STACK_LINE(1559)
		this->layerOrders = null();
		HX_STACK_LINE(1560)
		this->dynamicTiles = null();
		HX_STACK_LINE(1561)
		this->animatedTiles = null();
		HX_STACK_LINE(1563)
		this->regions = null();
		HX_STACK_LINE(1564)
		this->terrainRegions = null();
		HX_STACK_LINE(1565)
		this->joints = null();
		HX_STACK_LINE(1566)
		this->groups = null();
		HX_STACK_LINE(1567)
		this->reverseGroups = null();
		HX_STACK_LINE(1568)
		this->allActors = null();
		HX_STACK_LINE(1569)
		this->scene = null();
		HX_STACK_LINE(1570)
		this->tasks = null();
		HX_STACK_LINE(1572)
		this->collisionPairs = null();
		HX_STACK_LINE(1573)
		this->disableCollisionList = null();
		HX_STACK_LINE(1575)
		this->whenKeyPressedListeners = null();
		HX_STACK_LINE(1576)
		this->hasKeyPressedListeners = false;
		HX_STACK_LINE(1577)
		this->whenTypeGroupCreatedListeners = null();
		HX_STACK_LINE(1578)
		this->whenTypeGroupDiesListeners = null();
		HX_STACK_LINE(1579)
		this->typeGroupPositionListeners = null();
		HX_STACK_LINE(1580)
		this->collisionListeners = null();
		HX_STACK_LINE(1581)
		this->soundListeners = null();
		HX_STACK_LINE(1583)
		this->whenUpdatedListeners = null();
		HX_STACK_LINE(1584)
		this->whenDrawingListeners = null();
		HX_STACK_LINE(1585)
		this->whenMousePressedListeners = null();
		HX_STACK_LINE(1586)
		this->whenMouseReleasedListeners = null();
		HX_STACK_LINE(1587)
		this->whenMouseMovedListeners = null();
		HX_STACK_LINE(1588)
		this->whenMouseDraggedListeners = null();
		HX_STACK_LINE(1589)
		this->whenPausedListeners = null();
		HX_STACK_LINE(1591)
		this->whenSwipedListeners = null();
		HX_STACK_LINE(1592)
		this->whenMTStartListeners = null();
		HX_STACK_LINE(1593)
		this->whenMTDragListeners = null();
		HX_STACK_LINE(1594)
		this->whenMTEndListeners = null();
		HX_STACK_LINE(1596)
		this->whenFocusChangedListeners = null();
		HX_STACK_LINE(1597)
		this->nativeListeners = null();
		HX_STACK_LINE(1599)
		::com::stencyl::behavior::Script_obj::lastCreatedActor = null();
		HX_STACK_LINE(1600)
		::com::stencyl::behavior::Script_obj::lastCreatedJoint = null();
		HX_STACK_LINE(1601)
		::com::stencyl::behavior::Script_obj::lastCreatedRegion = null();
		HX_STACK_LINE(1602)
		::com::stencyl::behavior::Script_obj::lastCreatedTerrainRegion = null();
		HX_STACK_LINE(1606)
		::com::stencyl::Input_obj::update();
		HX_STACK_LINE(1608)
		this->world = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,cleanup,(void))

Void Engine_obj::optimizePool( ){
{
		HX_STACK_PUSH("Engine::optimizePool","com/stencyl/Engine.hx",1438);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1439);
				{
					HX_STACK_LINE(1439)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->recycledActorsOfType);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1439);
						{
							HX_STACK_LINE(1439)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1439)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1438)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			Array< ::Dynamic > cache = __it->next();
			{
				HX_STACK_LINE(1441)
				Array< ::Dynamic > toRemove = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(toRemove,"toRemove");
				HX_STACK_LINE(1443)
				{
					HX_STACK_LINE(1443)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1443)
					while(((_g < cache->length))){
						HX_STACK_LINE(1443)
						::com::stencyl::models::Actor actor = cache->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
						HX_STACK_LINE(1443)
						++(_g);
						HX_STACK_LINE(1445)
						if (((bool((actor != null())) && bool(actor->recycled)))){
							HX_STACK_LINE(1446)
							toRemove->push(actor);
						}
					}
				}
				HX_STACK_LINE(1451)
				{
					HX_STACK_LINE(1451)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1451)
					while(((_g < toRemove->length))){
						HX_STACK_LINE(1451)
						::com::stencyl::models::Actor actor = toRemove->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
						HX_STACK_LINE(1451)
						++(_g);
						HX_STACK_LINE(1453)
						cache->remove(actor);
						HX_STACK_LINE(1454)
						this->removeActor(actor);
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,optimizePool,(void))

Void Engine_obj::initLayers( ){
{
		HX_STACK_PUSH("Engine::initLayers","com/stencyl/Engine.hx",1283);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1284)
		::haxe::ds::IntMap layers = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(layers,"layers");
		HX_STACK_LINE(1285)
		::haxe::ds::IntMap orders = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(orders,"orders");
		HX_STACK_LINE(1286)
		::haxe::ds::IntMap exists = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(exists,"exists");
		HX_STACK_LINE(1287)
		int highestLayerOrder = (int)0;		HX_STACK_VAR(highestLayerOrder,"highestLayerOrder");
		HX_STACK_LINE(1289)
		this->tileLayers = this->scene->terrain;
		HX_STACK_LINE(1290)
		this->animatedTiles = this->scene->animatedTiles;
		HX_STACK_LINE(1292)
		if (((this->animatedTiles != null()))){
			HX_STACK_LINE(1294)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->animatedTiles;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1294)
			while(((_g < _g1->length))){
				HX_STACK_LINE(1294)
				::com::stencyl::models::scene::Tile tile = _g1->__get(_g).StaticCast< ::com::stencyl::models::scene::Tile >();		HX_STACK_VAR(tile,"tile");
				HX_STACK_LINE(1294)
				++(_g);
				HX_STACK_LINE(1296)
				tile->currFrame = (int)0;
				HX_STACK_LINE(1297)
				tile->currTime = (int)0;
			}
		}
		HX_STACK_LINE(1301)
		if (((this->scene->terrain != null()))){
			HX_STACK_LINE(1302)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::TileLayer > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::TileLayer >(this->scene->terrain->iterator());  __it->hasNext(); ){
				::com::stencyl::models::scene::TileLayer l = __it->next();
				{
					HX_STACK_LINE(1305)
					highestLayerOrder = ::Std_obj::_int(::Math_obj::max(highestLayerOrder,l->zOrder));
					HX_STACK_LINE(1307)
					layers->set(l->zOrder,l->layerID);
					HX_STACK_LINE(1308)
					orders->set(l->layerID,l->zOrder);
					HX_STACK_LINE(1309)
					exists->set(l->zOrder,l->zOrder);
				}
;
			}
		}
		HX_STACK_LINE(1313)
		{
			HX_STACK_LINE(1313)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (highestLayerOrder + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1313)
			while(((_g1 < _g))){
				HX_STACK_LINE(1313)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1315)
				if ((!(exists->exists(i)))){
					HX_STACK_LINE(1316)
					layers->set(i,(int)-1);
				}
			}
		}
		HX_STACK_LINE(1321)
		this->layersToDraw = layers;
		HX_STACK_LINE(1322)
		this->layerOrders = orders;
		HX_STACK_LINE(1324)
		bool foundBottom = false;		HX_STACK_VAR(foundBottom,"foundBottom");
		HX_STACK_LINE(1325)
		bool foundMiddle = false;		HX_STACK_VAR(foundMiddle,"foundMiddle");
		HX_STACK_LINE(1326)
		int realNumLayers = (int)0;		HX_STACK_VAR(realNumLayers,"realNumLayers");
		HX_STACK_LINE(1329)
		{
			HX_STACK_LINE(1329)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (highestLayerOrder + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1329)
			while(((_g1 < _g))){
				HX_STACK_LINE(1329)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1331)
				int layerID = this->layersToDraw->get(i);		HX_STACK_VAR(layerID,"layerID");
				HX_STACK_LINE(1333)
				if (((layerID != (int)-1))){
					HX_STACK_LINE(1334)
					(realNumLayers)++;
				}
			}
		}
		HX_STACK_LINE(1339)
		int numLayersProcessed = (int)0;		HX_STACK_VAR(numLayersProcessed,"numLayersProcessed");
		HX_STACK_LINE(1341)
		{
			HX_STACK_LINE(1341)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (highestLayerOrder + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1341)
			while(((_g1 < _g))){
				HX_STACK_LINE(1341)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1343)
				int j = (highestLayerOrder - i);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(1344)
				int layerID = this->layersToDraw->get(j);		HX_STACK_VAR(layerID,"layerID");
				HX_STACK_LINE(1346)
				if (((bool((layerID == (int)-1)) || bool(!(this->layersToDraw->exists(j)))))){
					HX_STACK_LINE(1347)
					continue;
				}
				HX_STACK_LINE(1352)
				::com::stencyl::models::scene::layers::RegularLayer list = ::com::stencyl::models::scene::layers::RegularLayer_obj::__new();		HX_STACK_VAR(list,"list");
				HX_STACK_LINE(1353)
				::com::stencyl::models::scene::Layer terrain = null();		HX_STACK_VAR(terrain,"terrain");
				HX_STACK_LINE(1354)
				::flash::display::Sprite overlay = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(overlay,"overlay");
				HX_STACK_LINE(1361)
				::flash::display::Sprite bitmapOverlay = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(bitmapOverlay,"bitmapOverlay");
				HX_STACK_LINE(1364)
				if (((this->scene->terrain != null()))){
					struct _Function_4_1{
						inline static ::com::stencyl::models::scene::TileLayer Block( ::com::stencyl::Engine_obj *__this,int &layerID){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1366);
							{
								HX_STACK_LINE(1366)
								::de::polygonal::ds::IntHashTable _this = __this->scene->terrain;		HX_STACK_VAR(_this,"_this");
								struct _Function_5_1{
									inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1366);
										{
											HX_STACK_LINE(1366)
											::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1366)
											int i1 = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i1,"i1");
											struct _Function_6_1{
												inline static int Block( int &i1,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
													HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1366);
													{
														HX_STACK_LINE(1366)
														int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(1366)
														i1 = _this1->_data->__get((i1 + (int)2));
														HX_STACK_LINE(1366)
														while(((i1 != (int)-1))){
															HX_STACK_LINE(1366)
															if (((_this1->_data->__get(i1) == layerID))){
																HX_STACK_LINE(1366)
																v = _this1->_data->__get((i1 + (int)1));
																HX_STACK_LINE(1366)
																break;
															}
															HX_STACK_LINE(1366)
															i1 = _this1->_data->__get((i1 + (int)2));
														}
														HX_STACK_LINE(1366)
														return v;
													}
													return null();
												}
											};
											HX_STACK_LINE(1366)
											return (  (((i1 == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i1) == layerID))) ? int(_this1->_data->__get((i1 + (int)1))) : int(_Function_6_1::Block(i1,_this1,layerID)) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1366)
								int i1 = _Function_5_1::Block(layerID,_this);		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(1366)
								return (  (((i1 == (int)-2147483647))) ? ::com::stencyl::models::scene::TileLayer(null()) : ::com::stencyl::models::scene::TileLayer(_this->_vals->__GetItem(i1)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1365)
					terrain = ::com::stencyl::models::scene::Layer_obj::__new(layerID,j,_Function_4_1::Block(this,layerID),overlay,bitmapOverlay);
				}
				HX_STACK_LINE(1369)
				if ((!(foundBottom))){
					HX_STACK_LINE(1371)
					foundBottom = true;
					HX_STACK_LINE(1372)
					this->bottomLayer = j;
				}
				HX_STACK_LINE(1375)
				if (((bool(!(foundMiddle)) && bool((numLayersProcessed == ::Math_obj::floor((Float(realNumLayers) / Float((int)2)))))))){
					HX_STACK_LINE(1377)
					foundMiddle = true;
					HX_STACK_LINE(1378)
					this->middleLayer = j;
				}
				HX_STACK_LINE(1381)
				if (((terrain != null()))){
					struct _Function_4_1{
						inline static ::com::stencyl::models::scene::TileLayer Block( ::com::stencyl::Engine_obj *__this,int &layerID){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1383);
							{
								HX_STACK_LINE(1383)
								::de::polygonal::ds::IntHashTable _this = __this->scene->terrain;		HX_STACK_VAR(_this,"_this");
								struct _Function_5_1{
									inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1383);
										{
											HX_STACK_LINE(1383)
											::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1383)
											int i1 = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i1,"i1");
											struct _Function_6_1{
												inline static int Block( int &i1,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
													HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1383);
													{
														HX_STACK_LINE(1383)
														int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(1383)
														i1 = _this1->_data->__get((i1 + (int)2));
														HX_STACK_LINE(1383)
														while(((i1 != (int)-1))){
															HX_STACK_LINE(1383)
															if (((_this1->_data->__get(i1) == layerID))){
																HX_STACK_LINE(1383)
																v = _this1->_data->__get((i1 + (int)1));
																HX_STACK_LINE(1383)
																break;
															}
															HX_STACK_LINE(1383)
															i1 = _this1->_data->__get((i1 + (int)2));
														}
														HX_STACK_LINE(1383)
														return v;
													}
													return null();
												}
											};
											HX_STACK_LINE(1383)
											return (  (((i1 == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i1) == layerID))) ? int(_this1->_data->__get((i1 + (int)1))) : int(_Function_6_1::Block(i1,_this1,layerID)) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1383)
								int i1 = _Function_5_1::Block(layerID,_this);		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(1383)
								return (  (((i1 == (int)-2147483647))) ? ::com::stencyl::models::scene::TileLayer(null()) : ::com::stencyl::models::scene::TileLayer(_this->_vals->__GetItem(i1)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1383)
					::com::stencyl::models::scene::TileLayer tileLayer = _Function_4_1::Block(this,layerID);		HX_STACK_VAR(tileLayer,"tileLayer");
					HX_STACK_LINE(1385)
					if (((tileLayer == null()))){
						HX_STACK_LINE(1387)
						::haxe::Log_obj::trace((HX_CSTRING("LayerID does not exist: ") + layerID),hx::SourceInfo(HX_CSTRING("Engine.hx"),1387,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("initLayers")));
						HX_STACK_LINE(1388)
						continue;
					}
					HX_STACK_LINE(1391)
					tileLayer->reset();
					HX_STACK_LINE(1393)
					terrain->set_name(::com::stencyl::Engine_obj::REGULAR_LAYER);
					HX_STACK_LINE(1394)
					this->master->addChild(terrain);
					HX_STACK_LINE(1395)
					this->master->addChild(tileLayer);
					HX_STACK_LINE(1397)
					if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
						struct _Function_5_1{
							inline static ::com::stencyl::models::scene::TileLayer Block( ::com::stencyl::Engine_obj *__this,int &layerID){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1399);
								{
									HX_STACK_LINE(1399)
									::de::polygonal::ds::IntHashTable _this = __this->scene->terrain;		HX_STACK_VAR(_this,"_this");
									struct _Function_6_1{
										inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
											HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1399);
											{
												HX_STACK_LINE(1399)
												::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1399)
												int i1 = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i1,"i1");
												struct _Function_7_1{
													inline static int Block( int &i1,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
														HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1399);
														{
															HX_STACK_LINE(1399)
															int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(1399)
															i1 = _this1->_data->__get((i1 + (int)2));
															HX_STACK_LINE(1399)
															while(((i1 != (int)-1))){
																HX_STACK_LINE(1399)
																if (((_this1->_data->__get(i1) == layerID))){
																	HX_STACK_LINE(1399)
																	v = _this1->_data->__get((i1 + (int)1));
																	HX_STACK_LINE(1399)
																	break;
																}
																HX_STACK_LINE(1399)
																i1 = _this1->_data->__get((i1 + (int)2));
															}
															HX_STACK_LINE(1399)
															return v;
														}
														return null();
													}
												};
												HX_STACK_LINE(1399)
												return (  (((i1 == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i1) == layerID))) ? int(_this1->_data->__get((i1 + (int)1))) : int(_Function_7_1::Block(i1,_this1,layerID)) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(1399)
									int i1 = _Function_6_1::Block(layerID,_this);		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(1399)
									return (  (((i1 == (int)-2147483647))) ? ::com::stencyl::models::scene::TileLayer(null()) : ::com::stencyl::models::scene::TileLayer(_this->_vals->__GetItem(i1)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1398)
						(_Function_5_1::Block(this,layerID))->mountGrid();
					}
					HX_STACK_LINE(1402)
					{
						HX_STACK_LINE(1402)
						::de::polygonal::ds::IntHashTable _this = this->layers;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1402)
						_this->_key0 = (int)-2147483647;
						HX_STACK_LINE(1402)
						if (((_this->_h->_size == _this->_h->_capacity))){
							HX_STACK_LINE(1402)
							int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
							HX_STACK_LINE(1402)
							int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
							struct _Function_6_1{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1402);
									{
										HX_STACK_LINE(1402)
										Array< int > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1402)
										a = Array_obj< int >::__new();
										HX_STACK_LINE(1402)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1402)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1402)
							Array< int > tmp = _Function_6_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(1402)
							{
								HX_STACK_LINE(1402)
								Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(1402)
								if (((max == (int)-1))){
									HX_STACK_LINE(1402)
									max = src->length;
								}
								HX_STACK_LINE(1402)
								int j1 = (int)0;		HX_STACK_VAR(j1,"j1");
								HX_STACK_LINE(1402)
								{
									HX_STACK_LINE(1402)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1402)
									while(((_g2 < max))){
										HX_STACK_LINE(1402)
										int i1 = (_g2)++;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(1402)
										tmp[(j1)++] = src->__get(i1);
									}
								}
								HX_STACK_LINE(1402)
								tmp;
							}
							HX_STACK_LINE(1402)
							_this->_next = tmp;
							struct _Function_6_2{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1402);
									{
										HX_STACK_LINE(1402)
										Array< int > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1402)
										a = Array_obj< int >::__new();
										HX_STACK_LINE(1402)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1402)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1402)
							Array< int > tmp1 = _Function_6_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(1402)
							{
								HX_STACK_LINE(1402)
								Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(1402)
								if (((max == (int)-1))){
									HX_STACK_LINE(1402)
									max = src->length;
								}
								HX_STACK_LINE(1402)
								int j1 = (int)0;		HX_STACK_VAR(j1,"j1");
								HX_STACK_LINE(1402)
								{
									HX_STACK_LINE(1402)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1402)
									while(((_g2 < max))){
										HX_STACK_LINE(1402)
										int i1 = (_g2)++;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(1402)
										tmp1[(j1)++] = src->__get(i1);
									}
								}
								HX_STACK_LINE(1402)
								tmp1;
							}
							HX_STACK_LINE(1402)
							_this->_keys = tmp1;
							HX_STACK_LINE(1402)
							{
								HX_STACK_LINE(1402)
								int _g2 = oldSize;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(1402)
								while(((_g2 < newSize))){
									HX_STACK_LINE(1402)
									int i1 = (_g2)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(1402)
									_this->_keys[i1] = (int)-2147483647;
								}
							}
							HX_STACK_LINE(1402)
							{
								HX_STACK_LINE(1402)
								int _g11 = (oldSize - (int)1);		HX_STACK_VAR(_g11,"_g11");
								int _g2 = (newSize - (int)1);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(1402)
								while(((_g11 < _g2))){
									HX_STACK_LINE(1402)
									int i1 = (_g11)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(1402)
									_this->_next[i1] = (i1 + (int)1);
								}
							}
							HX_STACK_LINE(1402)
							_this->_next[(newSize - (int)1)] = (int)-1;
							HX_STACK_LINE(1402)
							_this->_free = oldSize;
							struct _Function_6_3{
								inline static Array< ::Dynamic > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1402);
									{
										HX_STACK_LINE(1402)
										Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1402)
										a = Array_obj< ::Dynamic >::__new();
										HX_STACK_LINE(1402)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1402)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1402)
							Array< ::Dynamic > tmp2 = _Function_6_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(1402)
							{
								HX_STACK_LINE(1402)
								Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(1402)
								if (((max == (int)-1))){
									HX_STACK_LINE(1402)
									max = src->length;
								}
								HX_STACK_LINE(1402)
								int j1 = (int)0;		HX_STACK_VAR(j1,"j1");
								HX_STACK_LINE(1402)
								{
									HX_STACK_LINE(1402)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1402)
									while(((_g2 < max))){
										HX_STACK_LINE(1402)
										int i1 = (_g2)++;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(1402)
										tmp2[(j1)++] = src->__get(i1).StaticCast< ::com::stencyl::models::scene::Layer >();
									}
								}
								HX_STACK_LINE(1402)
								tmp2;
							}
							HX_STACK_LINE(1402)
							_this->_vals = tmp2;
							HX_STACK_LINE(1402)
							(_this->_sizeLevel)++;
						}
						HX_STACK_LINE(1402)
						{
							HX_STACK_LINE(1402)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1402)
							if (((_this1->_size == _this1->_capacity))){
								HX_STACK_LINE(1402)
								if ((_this1->_isResizable)){
									HX_STACK_LINE(1402)
									_this1->_expand();
								}
							}
							HX_STACK_LINE(1402)
							int i1 = (_this1->_free * (int)3);		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1402)
							_this1->_free = _this1->_next->__get(_this1->_free);
							HX_STACK_LINE(1402)
							_this1->_data[i1] = layerID;
							HX_STACK_LINE(1402)
							_this1->_data[(i1 + (int)1)] = _this->_free;
							HX_STACK_LINE(1402)
							int b = (int((layerID * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(1402)
							int j1 = _this1->_hash->__get(b);		HX_STACK_VAR(j1,"j1");
							HX_STACK_LINE(1402)
							if (((j1 == (int)-1))){
								HX_STACK_LINE(1402)
								_this1->_hash[b] = i1;
								HX_STACK_LINE(1402)
								(_this1->_size)++;
								HX_STACK_LINE(1402)
								true;
							}
							else{
								HX_STACK_LINE(1402)
								bool first = (_this1->_data->__get(j1) != layerID);		HX_STACK_VAR(first,"first");
								HX_STACK_LINE(1402)
								int t = _this1->_data->__get((j1 + (int)2));		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1402)
								while(((t != (int)-1))){
									HX_STACK_LINE(1402)
									if (((_this1->_data->__get(t) == layerID))){
										HX_STACK_LINE(1402)
										first = false;
									}
									HX_STACK_LINE(1402)
									j1 = t;
									HX_STACK_LINE(1402)
									t = _this1->_data->__get((t + (int)2));
								}
								HX_STACK_LINE(1402)
								_this1->_data[(j1 + (int)2)] = i1;
								HX_STACK_LINE(1402)
								(_this1->_size)++;
								HX_STACK_LINE(1402)
								first;
							}
						}
						HX_STACK_LINE(1402)
						hx::IndexRef((_this->_vals).mPtr,_this->_free) = terrain;
						HX_STACK_LINE(1402)
						_this->_keys[_this->_free] = layerID;
						HX_STACK_LINE(1402)
						_this->_free = _this->_next->__get(_this->_free);
						HX_STACK_LINE(1402)
						true;
					}
				}
				HX_STACK_LINE(1405)
				list->set_name(::com::stencyl::Engine_obj::REGULAR_LAYER);
				HX_STACK_LINE(1406)
				this->master->addChild(list);
				HX_STACK_LINE(1407)
				this->master->addChild(overlay);
				HX_STACK_LINE(1408)
				this->master->addChild(bitmapOverlay);
				HX_STACK_LINE(1410)
				this->actorsPerLayer->set(layerID,list);
				HX_STACK_LINE(1414)
				this->topLayer = j;
				HX_STACK_LINE(1415)
				this->defaultGroup = list;
				HX_STACK_LINE(1417)
				(numLayersProcessed)++;
			}
		}
		HX_STACK_LINE(1421)
		if (((this->defaultGroup == null()))){
			HX_STACK_LINE(1423)
			this->defaultGroup = ::com::stencyl::models::scene::layers::RegularLayer_obj::__new();
			HX_STACK_LINE(1424)
			this->defaultGroup->set_name(::com::stencyl::Engine_obj::REGULAR_LAYER);
			HX_STACK_LINE(1425)
			this->master->addChild(this->defaultGroup);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,initLayers,(void))

Void Engine_obj::loadTerrain( ){
{
		HX_STACK_PUSH("Engine::loadTerrain","com/stencyl/Engine.hx",1213);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1214)
		this->initLayers();
		HX_STACK_LINE(1216)
		{
			HX_STACK_LINE(1216)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->scene->wireframes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1216)
			while(((_g < _g1->length))){
				HX_STACK_LINE(1216)
				::com::stencyl::models::scene::Wireframe wireframe = _g1->__get(_g).StaticCast< ::com::stencyl::models::scene::Wireframe >();		HX_STACK_VAR(wireframe,"wireframe");
				HX_STACK_LINE(1216)
				++(_g);
				HX_STACK_LINE(1218)
				::com::stencyl::models::Actor a = null();		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(1220)
				if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
				}
				else{
					HX_STACK_LINE(1250)
					a = ::com::stencyl::models::Actor_obj::__new(hx::ObjectPtr<OBJ_>(this),::com::stencyl::utils::Utils_obj::INTEGER_MAX,::com::stencyl::models::GameModel_obj::TERRAIN_ID,wireframe->x,wireframe->y,this->getTopLayer(),::Std_obj::_int(wireframe->width),::Std_obj::_int(wireframe->height),null(),::haxe::ds::StringMap_obj::__new(),null(),null(),false,true,false,false,wireframe->shape,null(),null(),null(),null());
				}
				HX_STACK_LINE(1273)
				a->set_name(HX_CSTRING("Terrain"));
				HX_STACK_LINE(1274)
				a->typeID = (int)-1;
				HX_STACK_LINE(1275)
				a->set_visible(false);
				HX_STACK_LINE(1277)
				this->getGroup(::com::stencyl::models::GameModel_obj::TERRAIN_ID,null())->addChild(a);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadTerrain,(void))

Void Engine_obj::loadJoints( ){
{
		HX_STACK_PUSH("Engine::loadJoints","com/stencyl/Engine.hx",1109);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1110)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(1111)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1115);
				{
					HX_STACK_LINE(1115)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->scene->joints);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1115);
						{
							HX_STACK_LINE(1115)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1115)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1115)
		for(::cpp::FastIterator_obj< ::box2D::dynamics::joints::B2JointDef > *__it = ::cpp::CreateFastIterator< ::box2D::dynamics::joints::B2JointDef >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::box2D::dynamics::joints::B2JointDef jd = __it->next();
			{
				HX_STACK_LINE(1117)
				int a1 = jd->actor1;		HX_STACK_VAR(a1,"a1");
				HX_STACK_LINE(1118)
				int a2 = jd->actor2;		HX_STACK_VAR(a2,"a2");
				HX_STACK_LINE(1119)
				bool collide = jd->collideConnected;		HX_STACK_VAR(collide,"collide");
				HX_STACK_LINE(1121)
				::box2D::dynamics::B2Body one = null();		HX_STACK_VAR(one,"one");
				HX_STACK_LINE(1122)
				::box2D::dynamics::B2Body two = null();		HX_STACK_VAR(two,"two");
				HX_STACK_LINE(1124)
				::box2D::common::math::B2Vec2 pt = null();		HX_STACK_VAR(pt,"pt");
				HX_STACK_LINE(1129)
				if (((jd->type == (int)3))){
					HX_STACK_LINE(1130)
					this->joints->set(jd->ID,this->createStickJoint(this->getActor(a1)->body,this->getActor(a2)->body,jd->ID,collide,null(),null()));
				}
				else{
					HX_STACK_LINE(1135)
					if (((jd->type == (int)1))){
						HX_STACK_LINE(1137)
						::box2D::dynamics::joints::B2RevoluteJointDef r = hx::TCast< box2D::dynamics::joints::B2RevoluteJointDef >::cast(jd);		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(1138)
						pt = this->getActor(a1)->body->getLocalCenter()->copy(null());
						HX_STACK_LINE(1140)
						pt->x = ::com::stencyl::Engine_obj::toPixelUnits(pt->x);
						HX_STACK_LINE(1141)
						pt->y = ::com::stencyl::Engine_obj::toPixelUnits(pt->y);
						HX_STACK_LINE(1143)
						one = this->getActor(a1)->body;
						HX_STACK_LINE(1144)
						two = null();
						HX_STACK_LINE(1146)
						if (((a2 == (int)-1))){
							HX_STACK_LINE(1147)
							two = this->world->m_groundBody;
						}
						else{
							HX_STACK_LINE(1152)
							two = this->getActor(a2)->body;
						}
						HX_STACK_LINE(1156)
						this->joints->set(jd->ID,this->createHingeJoint(one,two,pt,jd->ID,collide,r->enableLimit,r->enableMotor,r->lowerAngle,r->upperAngle,r->maxMotorTorque,-(r->motorSpeed)));
					}
					else{
						HX_STACK_LINE(1173)
						if (((bool((jd->type == (int)2)) || bool((jd->type == (int)7))))){
							HX_STACK_LINE(1175)
							::box2D::dynamics::joints::B2LineJointDef s = hx::TCast< box2D::dynamics::joints::B2LineJointDef >::cast(jd);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(1176)
							pt = this->getActor(a1)->body->getLocalCenter()->copy(null());
							HX_STACK_LINE(1178)
							pt->x = ::com::stencyl::Engine_obj::toPixelUnits(pt->x);
							HX_STACK_LINE(1179)
							pt->y = ::com::stencyl::Engine_obj::toPixelUnits(pt->y);
							HX_STACK_LINE(1181)
							one = this->getActor(a1)->body;
							HX_STACK_LINE(1182)
							two = null();
							HX_STACK_LINE(1184)
							if (((a2 == (int)-1))){
								HX_STACK_LINE(1185)
								two = this->world->m_groundBody;
							}
							else{
								HX_STACK_LINE(1190)
								two = this->getActor(a2)->body;
							}
							HX_STACK_LINE(1194)
							this->joints->set(jd->ID,this->createSlidingJoint(one,two,s->localAxisA,jd->ID,collide,s->enableLimit,s->enableMotor,s->lowerTranslation,s->upperTranslation,s->maxMotorForce,s->motorSpeed));
						}
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadJoints,(void))

Void Engine_obj::loadTerrainRegions( ){
{
		HX_STACK_PUSH("Engine::loadTerrainRegions","com/stencyl/Engine.hx",1085);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1086)
		this->terrainRegions = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(1088)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(1089)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1093);
				{
					HX_STACK_LINE(1093)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->scene->terrainRegions);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1093);
						{
							HX_STACK_LINE(1093)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1093)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1093)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::TerrainDef > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::TerrainDef >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::scene::TerrainDef r = __it->next();
			{
				HX_STACK_LINE(1095)
				::com::stencyl::models::Terrain region = ::com::stencyl::models::Terrain_obj::__new(hx::ObjectPtr<OBJ_>(this),r->x,r->y,r->shapes,r->groupID,r->fillColor);		HX_STACK_VAR(region,"region");
				HX_STACK_LINE(1096)
				region->set_name(r->name);
				HX_STACK_LINE(1098)
				region->setX((::com::stencyl::Engine_obj::toPixelUnits(r->x) + (Float(region->regionWidth) / Float((int)2))),null(),null());
				HX_STACK_LINE(1099)
				region->setY((::com::stencyl::Engine_obj::toPixelUnits(r->y) + (Float(region->regionHeight) / Float((int)2))),null(),null());
				HX_STACK_LINE(1101)
				region->ID = r->ID;
				HX_STACK_LINE(1103)
				this->addTerrainRegion(region);
				HX_STACK_LINE(1104)
				this->terrainRegions->set(r->ID,region);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadTerrainRegions,(void))

Void Engine_obj::loadRegions( ){
{
		HX_STACK_PUSH("Engine::loadRegions","com/stencyl/Engine.hx",1062);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1063)
		this->regions = ::de::polygonal::ds::IntHashTable_obj::__new((int)32,null(),null(),null());
		HX_STACK_LINE(1064)
		this->regions->reuseIterator = true;
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1066);
				{
					HX_STACK_LINE(1066)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->scene->regions);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1066);
						{
							HX_STACK_LINE(1066)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1066)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1066)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::RegionDef > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::RegionDef >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::scene::RegionDef r = __it->next();
			{
				HX_STACK_LINE(1068)
				::com::stencyl::models::Region region = ::com::stencyl::models::Region_obj::__new(hx::ObjectPtr<OBJ_>(this),r->x,r->y,r->shapes,r->simpleBounds);		HX_STACK_VAR(region,"region");
				HX_STACK_LINE(1069)
				region->set_name(r->name);
				HX_STACK_LINE(1071)
				if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
					HX_STACK_LINE(1073)
					region->setX((::com::stencyl::Engine_obj::toPixelUnits(r->x) + (Float(region->regionWidth) / Float((int)2))),null(),null());
					HX_STACK_LINE(1074)
					region->setY((::com::stencyl::Engine_obj::toPixelUnits(r->y) + (Float(region->regionHeight) / Float((int)2))),null(),null());
				}
				HX_STACK_LINE(1077)
				region->ID = r->ID;
				HX_STACK_LINE(1079)
				this->addRegion(region);
				HX_STACK_LINE(1080)
				{
					HX_STACK_LINE(1080)
					::de::polygonal::ds::IntHashTable _this = this->regions;		HX_STACK_VAR(_this,"_this");
					int key = r->ID;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(1080)
					_this->_key0 = (int)-2147483647;
					HX_STACK_LINE(1080)
					if (((_this->_h->_size == _this->_h->_capacity))){
						HX_STACK_LINE(1080)
						int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
						HX_STACK_LINE(1080)
						int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
						struct _Function_4_1{
							inline static Array< int > Block( int &newSize){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1080);
								{
									HX_STACK_LINE(1080)
									Array< int > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1080)
									a = Array_obj< int >::__new();
									HX_STACK_LINE(1080)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(1080)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(1080)
						Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(1080)
						{
							HX_STACK_LINE(1080)
							Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
							int max = oldSize;		HX_STACK_VAR(max,"max");
							HX_STACK_LINE(1080)
							if (((max == (int)-1))){
								HX_STACK_LINE(1080)
								max = src->length;
							}
							HX_STACK_LINE(1080)
							int j = (int)0;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(1080)
							{
								HX_STACK_LINE(1080)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1080)
								while(((_g < max))){
									HX_STACK_LINE(1080)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1080)
									tmp[(j)++] = src->__get(i);
								}
							}
							HX_STACK_LINE(1080)
							tmp;
						}
						HX_STACK_LINE(1080)
						_this->_next = tmp;
						struct _Function_4_2{
							inline static Array< int > Block( int &newSize){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1080);
								{
									HX_STACK_LINE(1080)
									Array< int > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1080)
									a = Array_obj< int >::__new();
									HX_STACK_LINE(1080)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(1080)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(1080)
						Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(1080)
						{
							HX_STACK_LINE(1080)
							Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
							int max = oldSize;		HX_STACK_VAR(max,"max");
							HX_STACK_LINE(1080)
							if (((max == (int)-1))){
								HX_STACK_LINE(1080)
								max = src->length;
							}
							HX_STACK_LINE(1080)
							int j = (int)0;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(1080)
							{
								HX_STACK_LINE(1080)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1080)
								while(((_g < max))){
									HX_STACK_LINE(1080)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1080)
									tmp1[(j)++] = src->__get(i);
								}
							}
							HX_STACK_LINE(1080)
							tmp1;
						}
						HX_STACK_LINE(1080)
						_this->_keys = tmp1;
						HX_STACK_LINE(1080)
						{
							HX_STACK_LINE(1080)
							int _g = oldSize;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1080)
							while(((_g < newSize))){
								HX_STACK_LINE(1080)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1080)
								_this->_keys[i] = (int)-2147483647;
							}
						}
						HX_STACK_LINE(1080)
						{
							HX_STACK_LINE(1080)
							int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
							int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1080)
							while(((_g1 < _g))){
								HX_STACK_LINE(1080)
								int i = (_g1)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1080)
								_this->_next[i] = (i + (int)1);
							}
						}
						HX_STACK_LINE(1080)
						_this->_next[(newSize - (int)1)] = (int)-1;
						HX_STACK_LINE(1080)
						_this->_free = oldSize;
						struct _Function_4_3{
							inline static Array< ::Dynamic > Block( int &newSize){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1080);
								{
									HX_STACK_LINE(1080)
									Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1080)
									a = Array_obj< ::Dynamic >::__new();
									HX_STACK_LINE(1080)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(1080)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(1080)
						Array< ::Dynamic > tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(1080)
						{
							HX_STACK_LINE(1080)
							Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
							int max = oldSize;		HX_STACK_VAR(max,"max");
							HX_STACK_LINE(1080)
							if (((max == (int)-1))){
								HX_STACK_LINE(1080)
								max = src->length;
							}
							HX_STACK_LINE(1080)
							int j = (int)0;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(1080)
							{
								HX_STACK_LINE(1080)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1080)
								while(((_g < max))){
									HX_STACK_LINE(1080)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1080)
									tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::Region >();
								}
							}
							HX_STACK_LINE(1080)
							tmp2;
						}
						HX_STACK_LINE(1080)
						_this->_vals = tmp2;
						HX_STACK_LINE(1080)
						(_this->_sizeLevel)++;
					}
					HX_STACK_LINE(1080)
					{
						HX_STACK_LINE(1080)
						::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1080)
						if (((_this1->_size == _this1->_capacity))){
							HX_STACK_LINE(1080)
							if ((_this1->_isResizable)){
								HX_STACK_LINE(1080)
								_this1->_expand();
							}
						}
						HX_STACK_LINE(1080)
						int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(1080)
						_this1->_free = _this1->_next->__get(_this1->_free);
						HX_STACK_LINE(1080)
						_this1->_data[i] = key;
						HX_STACK_LINE(1080)
						_this1->_data[(i + (int)1)] = _this->_free;
						HX_STACK_LINE(1080)
						int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(1080)
						int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1080)
						if (((j == (int)-1))){
							HX_STACK_LINE(1080)
							_this1->_hash[b] = i;
							HX_STACK_LINE(1080)
							(_this1->_size)++;
							HX_STACK_LINE(1080)
							true;
						}
						else{
							HX_STACK_LINE(1080)
							bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
							HX_STACK_LINE(1080)
							int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1080)
							while(((t != (int)-1))){
								HX_STACK_LINE(1080)
								if (((_this1->_data->__get(t) == key))){
									HX_STACK_LINE(1080)
									first = false;
								}
								HX_STACK_LINE(1080)
								j = t;
								HX_STACK_LINE(1080)
								t = _this1->_data->__get((t + (int)2));
							}
							HX_STACK_LINE(1080)
							_this1->_data[(j + (int)2)] = i;
							HX_STACK_LINE(1080)
							(_this1->_size)++;
							HX_STACK_LINE(1080)
							first;
						}
					}
					HX_STACK_LINE(1080)
					hx::IndexRef((_this->_vals).mPtr,_this->_free) = region;
					HX_STACK_LINE(1080)
					_this->_keys[_this->_free] = key;
					HX_STACK_LINE(1080)
					_this->_free = _this->_next->__get(_this->_free);
					HX_STACK_LINE(1080)
					true;
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadRegions,(void))

Void Engine_obj::loadCamera( ){
{
		HX_STACK_PUSH("Engine::loadCamera","com/stencyl/Engine.hx",1051);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1052)
		this->camera = ::com::stencyl::models::Actor_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)-1,::com::stencyl::models::GameModel_obj::DOODAD_ID,(int)0,(int)0,this->getTopLayer(),(int)2,(int)2,null(),null(),null(),null(),true,false,true,false,null(),(int)0,true,false,null());
		HX_STACK_LINE(1053)
		this->camera->set_name(HX_CSTRING("Camera"));
		HX_STACK_LINE(1054)
		this->camera->isCamera = true;
		HX_STACK_LINE(1056)
		this->cameraMoved = true;
		HX_STACK_LINE(1057)
		this->cameraOldX = (int)-1;
		HX_STACK_LINE(1058)
		this->cameraOldY = (int)-1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadCamera,(void))

Void Engine_obj::initActorScripts( ){
{
		HX_STACK_PUSH("Engine::initActorScripts","com/stencyl/Engine.hx",1041);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1042)
		{
			HX_STACK_LINE(1042)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->actorsToCreate;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1042)
			while(((_g < _g1->length))){
				HX_STACK_LINE(1042)
				::com::stencyl::models::Actor a = _g1->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(1042)
				++(_g);
				HX_STACK_LINE(1044)
				a->initScripts();
			}
		}
		HX_STACK_LINE(1047)
		this->actorsToCreate = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,initActorScripts,(void))

Void Engine_obj::loadDeferredActors( ){
{
		HX_STACK_PUSH("Engine::loadDeferredActors","com/stencyl/Engine.hx",1031);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1032)
		{
			HX_STACK_LINE(1032)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->actorsToCreateInNextScene;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1032)
			while(((_g < _g1->length))){
				HX_STACK_LINE(1032)
				::com::stencyl::models::scene::DeferredActor a = _g1->__get(_g).StaticCast< ::com::stencyl::models::scene::DeferredActor >();		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(1032)
				++(_g);
				HX_STACK_LINE(1034)
				::com::stencyl::behavior::Script_obj::lastCreatedActor = this->createActorOfType(a->type,a->x,a->y,a->layer);
			}
		}
		HX_STACK_LINE(1037)
		this->actorsToCreateInNextScene = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadDeferredActors,(void))

Void Engine_obj::loadActors( ){
{
		HX_STACK_PUSH("Engine::loadActors","com/stencyl/Engine.hx",1021);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1022)
		this->actorsToCreate = Array_obj< ::Dynamic >::__new();
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1024);
				{
					HX_STACK_LINE(1024)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->scene->actors);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1024);
						{
							HX_STACK_LINE(1024)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1024)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1024)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::ActorInstance > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::ActorInstance >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::scene::ActorInstance instance = __it->next();
			this->actorsToCreate->push(this->createActor(instance,true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadActors,(void))

Void Engine_obj::initPhysics( ){
{
		HX_STACK_PUSH("Engine::initPhysics","com/stencyl/Engine.hx",964);
		HX_STACK_THIS(this);
		HX_STACK_LINE(965)
		::box2D::common::math::B2Vec2 gravity = ::box2D::common::math::B2Vec2_obj::__new(this->scene->gravityX,this->scene->gravityY);		HX_STACK_VAR(gravity,"gravity");
		HX_STACK_LINE(966)
		this->world = ::box2D::dynamics::B2World_obj::__new(gravity,false);
		HX_STACK_LINE(968)
		::box2D::dynamics::B2World_obj::m_continuousPhysics = false;
		HX_STACK_LINE(969)
		::box2D::dynamics::B2World_obj::m_warmStarting = true;
		HX_STACK_LINE(971)
		::box2D::collision::B2AABB aabb = ::box2D::collision::B2AABB_obj::__new();		HX_STACK_VAR(aabb,"aabb");
		HX_STACK_LINE(972)
		aabb->lowerBound->x = (int)0;
		HX_STACK_LINE(973)
		aabb->lowerBound->y = (int)0;
		HX_STACK_LINE(974)
		aabb->upperBound->x = (Float(::com::stencyl::Engine_obj::screenWidth) / Float(::com::stencyl::Engine_obj::physicsScale));
		HX_STACK_LINE(975)
		aabb->upperBound->y = (Float(::com::stencyl::Engine_obj::screenHeight) / Float(::com::stencyl::Engine_obj::physicsScale));
		HX_STACK_LINE(976)
		this->world->setScreenBounds(aabb);
		HX_STACK_LINE(978)
		::com::stencyl::Engine_obj::debugDrawer = ::box2D::dynamics::B2DebugDraw_obj::__new();
		HX_STACK_LINE(979)
		::com::stencyl::Engine_obj::debugDrawer->setSprite(this->debugLayer);
		HX_STACK_LINE(980)
		::com::stencyl::Engine_obj::debugDrawer->setLineThickness((int)3);
		HX_STACK_LINE(981)
		::com::stencyl::Engine_obj::debugDrawer->setDrawScale(((int)10 * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(982)
		::com::stencyl::Engine_obj::debugDrawer->setFillAlpha((int)0);
		HX_STACK_LINE(983)
		::com::stencyl::Engine_obj::debugDrawer->setFlags(::box2D::dynamics::B2DebugDraw_obj::e_shapeBit);
		HX_STACK_LINE(984)
		this->world->setDebugDraw(::com::stencyl::Engine_obj::debugDrawer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,initPhysics,(void))

Void Engine_obj::loadBackground( int backgroundID,hx::Null< bool >  __o_isForeground){
bool isForeground = __o_isForeground.Default(false);
	HX_STACK_PUSH("Engine::loadBackground","com/stencyl/Engine.hx",800);
	HX_STACK_THIS(this);
	HX_STACK_ARG(backgroundID,"backgroundID");
	HX_STACK_ARG(isForeground,"isForeground");
{
		HX_STACK_LINE(801)
		::com::stencyl::models::background::ImageBackground background = hx::TCast< com::stencyl::models::background::ImageBackground >::cast(::com::stencyl::Data_obj::get()->resources->get(backgroundID));		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(802)
		::com::stencyl::models::scene::layers::BackgroundLayer backImg = ::com::stencyl::models::scene::layers::BackgroundLayer_obj::__new(background->img,background);		HX_STACK_VAR(backImg,"backImg");
		HX_STACK_LINE(804)
		if (((bool((background == null())) || bool((background->img == null()))))){
			HX_STACK_LINE(806)
			::haxe::Log_obj::trace(HX_CSTRING("Warning: Could not load a background. Ignoring..."),hx::SourceInfo(HX_CSTRING("Engine.hx"),806,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("loadBackground")));
			HX_STACK_LINE(807)
			return null();
		}
		HX_STACK_LINE(810)
		if (((bool(background->repeats) && bool(!(background->repeated))))){
			HX_STACK_LINE(811)
			background->drawRepeated(backImg,::Std_obj::_int((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)),::Std_obj::_int((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)));
		}
		HX_STACK_LINE(815)
		if ((::Std_obj::is(background,hx::ClassOf< ::com::stencyl::models::background::ScrollingBackground >()))){
			HX_STACK_LINE(817)
			::com::stencyl::models::background::ScrollingBackground scroller = hx::TCast< com::stencyl::models::background::ScrollingBackground >::cast(background);		HX_STACK_VAR(scroller,"scroller");
			HX_STACK_LINE(818)
			::com::stencyl::models::scene::ScrollingBitmap img = ::com::stencyl::models::scene::ScrollingBitmap_obj::__new(background->img,scroller->xVelocity,scroller->yVelocity,(int)0,(int)0,backgroundID);		HX_STACK_VAR(img,"img");
			HX_STACK_LINE(819)
			img->set_name(::com::stencyl::Engine_obj::SCROLLING_BACKGROUND);
			HX_STACK_LINE(820)
			this->master->addChild(img);
		}
		else{
			HX_STACK_LINE(823)
			if ((background->repeats)){
				HX_STACK_LINE(825)
				::com::stencyl::models::scene::ScrollingBitmap img = ::com::stencyl::models::scene::ScrollingBitmap_obj::__new(background->img,(int)0,(int)0,background->parallaxX,background->parallaxY,backgroundID);		HX_STACK_VAR(img,"img");
				HX_STACK_LINE(826)
				img->set_name(::com::stencyl::Engine_obj::SCROLLING_BACKGROUND);
				HX_STACK_LINE(827)
				this->master->addChild(img);
			}
			else{
				HX_STACK_LINE(832)
				backImg->cacheWidth = backImg->get_width();
				HX_STACK_LINE(833)
				backImg->cacheHeight = backImg->get_height();
				HX_STACK_LINE(834)
				backImg->set_name(::com::stencyl::Engine_obj::BACKGROUND);
				HX_STACK_LINE(835)
				this->master->addChild(backImg);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,loadBackground,(void))

Void Engine_obj::loadForegrounds( ){
{
		HX_STACK_PUSH("Engine::loadForegrounds","com/stencyl/Engine.hx",792);
		HX_STACK_THIS(this);
		HX_STACK_LINE(793)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< int > _g1 = this->scene->fgs;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(793)
		while(((_g < _g1->length))){
			HX_STACK_LINE(793)
			int backgroundID = _g1->__get(_g);		HX_STACK_VAR(backgroundID,"backgroundID");
			HX_STACK_LINE(793)
			++(_g);
			HX_STACK_LINE(795)
			this->loadBackground(backgroundID,true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadForegrounds,(void))

Void Engine_obj::loadBackgrounds( ){
{
		HX_STACK_PUSH("Engine::loadBackgrounds","com/stencyl/Engine.hx",780);
		HX_STACK_THIS(this);
		HX_STACK_LINE(781)
		::flash::display::Shape bg = ::flash::display::Shape_obj::__new();		HX_STACK_VAR(bg,"bg");
		HX_STACK_LINE(782)
		this->scene->colorBackground->draw(bg->get_graphics(),(int)0,(int)0,::Std_obj::_int((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)),::Std_obj::_int((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)));
		HX_STACK_LINE(783)
		this->master->addChild(bg);
		HX_STACK_LINE(785)
		{
			HX_STACK_LINE(785)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< int > _g1 = this->scene->bgs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(785)
			while(((_g < _g1->length))){
				HX_STACK_LINE(785)
				int backgroundID = _g1->__get(_g);		HX_STACK_VAR(backgroundID,"backgroundID");
				HX_STACK_LINE(785)
				++(_g);
				HX_STACK_LINE(787)
				this->loadBackground(backgroundID,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadBackgrounds,(void))

Void Engine_obj::loadScene( int sceneID){
{
		HX_STACK_PUSH("Engine::loadScene","com/stencyl/Engine.hx",626);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sceneID,"sceneID");
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",627);
				{
					HX_STACK_LINE(627)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->atlasesToUnload);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",627);
						{
							HX_STACK_LINE(627)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
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
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			int atlas = __it->next();
			::com::stencyl::Data_obj::get()->unloadAtlas(atlas);
		}
		HX_STACK_LINE(633)
		::cpp::vm::Gc_obj::run(true);
		struct _Function_1_2{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",636);
				{
					HX_STACK_LINE(636)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->atlasesToLoad);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",636);
						{
							HX_STACK_LINE(636)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(636)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(636)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >((_Function_1_2::Block(this))());  __it->hasNext(); ){
			int atlas = __it->next();
			::com::stencyl::Data_obj::get()->loadAtlas(atlas);
		}
		HX_STACK_LINE(641)
		this->atlasesToLoad = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(642)
		this->atlasesToUnload = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(644)
		this->collisionPairs = ::de::polygonal::ds::IntHashTable_obj::__new((int)32,null(),null(),null());
		HX_STACK_LINE(648)
		{
			HX_STACK_LINE(648)
			::com::stencyl::Engine_obj::paddingTop = (int)0;
			HX_STACK_LINE(648)
			::com::stencyl::Engine_obj::paddingLeft = (int)0;
			HX_STACK_LINE(648)
			::com::stencyl::Engine_obj::paddingBottom = (int)0;
			HX_STACK_LINE(648)
			::com::stencyl::Engine_obj::paddingRight = (int)0;
		}
		HX_STACK_LINE(650)
		this->tasks = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(652)
		this->scene = ::com::stencyl::models::GameModel_obj::get()->scenes->get(sceneID);
		HX_STACK_LINE(654)
		if (((bool((sceneID == (int)-1)) || bool((this->scene == null()))))){
			HX_STACK_LINE(656)
			this->scene = ::com::stencyl::models::GameModel_obj::get()->scenes->get(::com::stencyl::models::GameModel_obj::get()->defaultSceneID);
			HX_STACK_LINE(659)
			if (((this->scene == null()))){
				HX_STACK_LINE(661)
				::haxe::Log_obj::trace((HX_CSTRING("Could not load scene: ") + sceneID),hx::SourceInfo(HX_CSTRING("Engine.hx"),661,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("loadScene")));
				HX_STACK_LINE(662)
				::com::stencyl::Engine_obj::stage->removeEventListener(::flash::events::Event_obj::ENTER_FRAME,this->onUpdate_dyn(),null());
				HX_STACK_LINE(663)
				return null();
			}
		}
		HX_STACK_LINE(667)
		this->scene->load();
		HX_STACK_LINE(669)
		::com::stencyl::Engine_obj::sceneWidth = this->scene->sceneWidth;
		HX_STACK_LINE(670)
		::com::stencyl::Engine_obj::sceneHeight = this->scene->sceneHeight;
		HX_STACK_LINE(672)
		this->behaviors = ::com::stencyl::behavior::BehaviorManager_obj::__new();
		HX_STACK_LINE(674)
		this->groups = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(675)
		this->reverseGroups = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(677)
		{
			HX_STACK_LINE(677)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::com::stencyl::models::GameModel_obj::get()->groups;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(677)
			while(((_g < _g1->length))){
				HX_STACK_LINE(677)
				::com::stencyl::models::GroupDef grp = _g1->__get(_g).StaticCast< ::com::stencyl::models::GroupDef >();		HX_STACK_VAR(grp,"grp");
				HX_STACK_LINE(677)
				++(_g);
				HX_STACK_LINE(679)
				::com::stencyl::models::actor::Group g = ::com::stencyl::models::actor::Group_obj::__new(grp->ID,grp->name);		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(680)
				this->groups->set(grp->ID,g);
				HX_STACK_LINE(681)
				this->reverseGroups->set(grp->name,g);
				HX_STACK_LINE(682)
				g->name = grp->name;
			}
		}
		HX_STACK_LINE(686)
		::com::stencyl::models::actor::Group regionGroup = ::com::stencyl::models::actor::Group_obj::__new(::com::stencyl::models::GameModel_obj::REGION_ID,HX_CSTRING("Regions"));		HX_STACK_VAR(regionGroup,"regionGroup");
		HX_STACK_LINE(687)
		this->groups->set(::com::stencyl::models::GameModel_obj::REGION_ID,regionGroup);
		HX_STACK_LINE(688)
		this->reverseGroups->set(HX_CSTRING("Regions"),regionGroup);
		HX_STACK_LINE(690)
		this->disableCollisionList = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(691)
		this->actorsOfType = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(692)
		this->recycledActorsOfType = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(694)
		this->regions = ::de::polygonal::ds::IntHashTable_obj::__new((int)32,null(),null(),null());
		HX_STACK_LINE(695)
		this->regions->reuseIterator = true;
		HX_STACK_LINE(697)
		this->terrainRegions = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(698)
		this->joints = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(700)
		this->layers = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
		HX_STACK_LINE(701)
		this->layers->reuseIterator = true;
		HX_STACK_LINE(702)
		this->tileLayers = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
		HX_STACK_LINE(703)
		this->tileLayers->reuseIterator = true;
		HX_STACK_LINE(705)
		this->dynamicTiles = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(706)
		this->animatedTiles = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(707)
		this->hudActors = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
		HX_STACK_LINE(708)
		this->hudActors->reuseIterator = true;
		HX_STACK_LINE(709)
		this->allActors = ::de::polygonal::ds::IntHashTable_obj::__new((int)256,null(),null(),null());
		HX_STACK_LINE(710)
		this->allActors->reuseIterator = true;
		HX_STACK_LINE(711)
		this->actorsPerLayer = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(712)
		this->nextID = (int)0;
		HX_STACK_LINE(715)
		this->whenKeyPressedListeners = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(716)
		this->hasKeyPressedListeners = false;
		HX_STACK_LINE(718)
		this->whenTypeGroupCreatedListeners = ::haxe::ds::ObjectMap_obj::__new();
		HX_STACK_LINE(719)
		this->whenTypeGroupDiesListeners = ::haxe::ds::ObjectMap_obj::__new();
		HX_STACK_LINE(720)
		this->typeGroupPositionListeners = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(721)
		this->collisionListeners = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(722)
		this->soundListeners = ::haxe::ds::ObjectMap_obj::__new();
		HX_STACK_LINE(723)
		this->nativeListeners = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(725)
		this->whenUpdatedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(726)
		this->whenDrawingListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(727)
		this->whenMousePressedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(728)
		this->whenMouseReleasedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(729)
		this->whenMouseMovedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(730)
		this->whenMouseDraggedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(731)
		this->whenPausedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(732)
		this->whenSwipedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(733)
		this->whenMTStartListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(734)
		this->whenMTDragListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(735)
		this->whenMTEndListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(736)
		this->whenFocusChangedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(738)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(740)
			this->initPhysics();
			HX_STACK_LINE(742)
			this->gravityX = this->scene->gravityX;
			HX_STACK_LINE(743)
			this->gravityY = this->scene->gravityY;
		}
		else{
			HX_STACK_LINE(748)
			this->gravityX = this->scene->gravityX;
			HX_STACK_LINE(749)
			this->gravityY = this->scene->gravityY;
		}
		HX_STACK_LINE(752)
		this->loadBackgrounds();
		HX_STACK_LINE(753)
		this->loadTerrain();
		HX_STACK_LINE(754)
		this->loadRegions();
		HX_STACK_LINE(755)
		this->loadTerrainRegions();
		HX_STACK_LINE(756)
		this->loadActors();
		HX_STACK_LINE(757)
		this->loadCamera();
		HX_STACK_LINE(758)
		this->loadJoints();
		HX_STACK_LINE(760)
		this->loadDeferredActors();
		HX_STACK_LINE(761)
		::com::stencyl::Engine_obj::initBehaviors(this->behaviors,this->scene->behaviorValues,hx::ObjectPtr<OBJ_>(this),hx::ObjectPtr<OBJ_>(this),true);
		HX_STACK_LINE(762)
		this->initActorScripts();
		HX_STACK_LINE(764)
		this->loadForegrounds();
		HX_STACK_LINE(767)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::TileLayer > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::TileLayer >(this->tileLayers->iterator());  __it->hasNext(); ){
			::com::stencyl::models::scene::TileLayer layer = __it->next();
			{
				HX_STACK_LINE(769)
				layer->draw(::Std_obj::_int(::com::stencyl::Engine_obj::cameraX),::Std_obj::_int(::com::stencyl::Engine_obj::cameraY));
				HX_STACK_LINE(771)
				layer->setPosition(::com::stencyl::Engine_obj::cameraX,::com::stencyl::Engine_obj::cameraY);
			}
;
		}
		HX_STACK_LINE(775)
		::cpp::vm::Gc_obj::run(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,loadScene,(void))

Void Engine_obj::begin( int initSceneID){
{
		HX_STACK_PUSH("Engine::begin","com/stencyl/Engine.hx",473);
		HX_STACK_THIS(this);
		HX_STACK_ARG(initSceneID,"initSceneID");
		HX_STACK_LINE(474)
		this->atlasesToLoad = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(475)
		this->atlasesToUnload = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(477)
		::com::stencyl::Input_obj::enable();
		HX_STACK_LINE(478)
		::com::stencyl::Input_obj::define(::com::stencyl::Engine_obj::INTERNAL_SHIFT,Array_obj< int >::__new().Add((int)16));
		HX_STACK_LINE(479)
		::com::stencyl::Input_obj::define(::com::stencyl::Engine_obj::INTERNAL_CTRL,Array_obj< int >::__new().Add((int)17));
		HX_STACK_LINE(481)
		::com::stencyl::Engine_obj::landscape = ::scripts::MyAssets_obj::landscape;
		HX_STACK_LINE(482)
		int stageWidth = ::scripts::MyAssets_obj::stageWidth;		HX_STACK_VAR(stageWidth,"stageWidth");
		HX_STACK_LINE(483)
		int stageHeight = ::scripts::MyAssets_obj::stageHeight;		HX_STACK_VAR(stageHeight,"stageHeight");
		HX_STACK_LINE(485)
		::com::stencyl::Engine_obj::screenWidth = ::Std_obj::_int(stageWidth);
		HX_STACK_LINE(486)
		::com::stencyl::Engine_obj::screenHeight = ::Std_obj::_int(stageHeight);
		HX_STACK_LINE(487)
		::com::stencyl::Engine_obj::screenWidthHalf = ::Std_obj::_int((Float(stageWidth) / Float((int)2)));
		HX_STACK_LINE(488)
		::com::stencyl::Engine_obj::screenHeightHalf = ::Std_obj::_int((Float(stageHeight) / Float((int)2)));
		HX_STACK_LINE(491)
		if ((!(::scripts::MyAssets_obj::autorotate))){
			HX_STACK_LINE(492)
			if ((::com::stencyl::Engine_obj::landscape)){
				HX_STACK_LINE(494)
				::flash::display::Stage_obj::setFixedOrientation(::flash::display::Stage_obj::OrientationLandscapeLeft);
			}
			else{
				HX_STACK_LINE(499)
				::flash::display::Stage_obj::setFixedOrientation(::flash::display::Stage_obj::OrientationPortrait);
			}
		}
		HX_STACK_LINE(505)
		::com::stencyl::Data_obj::get();
		HX_STACK_LINE(506)
		::com::stencyl::models::GameModel_obj::get()->loadScenes();
		HX_STACK_LINE(508)
		this->g = ::com::stencyl::graphics::G_obj::__new();
		HX_STACK_LINE(512)
		::com::stencyl::Engine_obj::started = true;
		HX_STACK_LINE(513)
		this->cameraMoved = false;
		HX_STACK_LINE(514)
		this->tileUpdated = false;
		HX_STACK_LINE(518)
		this->shakeTimer = (int)0;
		HX_STACK_LINE(519)
		this->shakeIntensity = 0.01;
		HX_STACK_LINE(520)
		this->isShaking = false;
		HX_STACK_LINE(524)
		this->leave = null();
		HX_STACK_LINE(525)
		this->enter = null();
		HX_STACK_LINE(527)
		::com::stencyl::Engine_obj::cameraX = (int)0;
		HX_STACK_LINE(528)
		::com::stencyl::Engine_obj::cameraY = (int)0;
		HX_STACK_LINE(530)
		this->cameraOldX = (int)-1;
		HX_STACK_LINE(531)
		this->cameraOldY = (int)-1;
		HX_STACK_LINE(533)
		this->acc = (int)0;
		HX_STACK_LINE(534)
		this->lastTime = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(537)
		::com::stencyl::Engine_obj::sceneWidth = stageWidth;
		HX_STACK_LINE(538)
		::com::stencyl::Engine_obj::sceneHeight = stageHeight;
		HX_STACK_LINE(541)
		this->master = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(542)
		this->root->addChild(this->master);
		HX_STACK_LINE(544)
		this->hudLayer = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(545)
		this->root->addChild(this->hudLayer);
		HX_STACK_LINE(547)
		this->transitionLayer = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(548)
		this->root->addChild(this->transitionLayer);
		HX_STACK_LINE(555)
		this->transitionBitmapLayer = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(560)
		this->debugLayer = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(561)
		this->root->addChild(this->debugLayer);
		HX_STACK_LINE(564)
		this->actorsToCreateInNextScene = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(565)
		this->gameAttributes = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(570)
		if ((::scripts::MyAssets_obj::showConsole)){
			HX_STACK_LINE(573)
			this->stats = ::com::nmefermmmtools::debug::Stats_obj::__new(null());
			HX_STACK_LINE(574)
			::com::stencyl::Engine_obj::stage->addChild(this->stats);
		}
		HX_STACK_LINE(595)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(::com::stencyl::models::GameModel_obj::get()->gameAttributes->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(597)
				Dynamic value = ::com::stencyl::models::GameModel_obj::get()->gameAttributes->get(key);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(597)
				this->gameAttributes->set(key,value);
			}
;
		}
		HX_STACK_LINE(601)
		this->channels = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(603)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::com::stencyl::behavior::Script_obj::CHANNELS;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(603)
			while(((_g1 < _g))){
				HX_STACK_LINE(603)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(605)
				this->channels->push(::com::stencyl::models::SoundChannel_obj::__new(hx::ObjectPtr<OBJ_>(this),index));
			}
		}
		HX_STACK_LINE(610)
		::Purchases_obj::initialize(null());
		HX_STACK_LINE(618)
		this->enter = ::com::stencyl::graphics::transitions::FadeInTransition_obj::__new(0.5,null());
		HX_STACK_LINE(619)
		this->enter->start();
		HX_STACK_LINE(620)
		this->sceneToEnter = initSceneID;
		HX_STACK_LINE(622)
		this->loadScene(initSceneID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,begin,(void))

::String Engine_obj::BACKGROUND;

::String Engine_obj::SCROLLING_BACKGROUND;

::String Engine_obj::REGULAR_LAYER;

::String Engine_obj::DOODAD;

::String Engine_obj::INTERNAL_SHIFT;

::String Engine_obj::INTERNAL_CTRL;

bool Engine_obj::NO_PHYSICS;

bool Engine_obj::DEBUG_DRAW;

::String Engine_obj::IMG_BASE;

Float Engine_obj::SCALE;

bool Engine_obj::isStandardIOS;

bool Engine_obj::isExtendedIOS;

bool Engine_obj::isTabletIOS;

::com::stencyl::Engine Engine_obj::engine;

bool Engine_obj::landscape;

Float Engine_obj::cameraX;

Float Engine_obj::cameraY;

Float Engine_obj::screenScaleX;

Float Engine_obj::screenScaleY;

int Engine_obj::screenOffsetX;

int Engine_obj::screenOffsetY;

int Engine_obj::screenWidth;

int Engine_obj::screenHeight;

int Engine_obj::sceneWidth;

int Engine_obj::sceneHeight;

int Engine_obj::screenWidthHalf;

int Engine_obj::screenHeightHalf;

bool Engine_obj::paused;

bool Engine_obj::started;

::com::stencyl::event::EventMaster Engine_obj::events;

int Engine_obj::ITERATIONS;

Float Engine_obj::physicsScale;

int Engine_obj::paddingLeft;

int Engine_obj::paddingRight;

int Engine_obj::paddingTop;

int Engine_obj::paddingBottom;

::String Engine_obj::mochiID;

::String Engine_obj::ngID;

::String Engine_obj::ngKey;

::flash::display::MovieClip Engine_obj::movieClip;

::flash::display::Stage Engine_obj::stage;

int Engine_obj::STEP_SIZE;

int Engine_obj::MS_PER_SEC;

Float Engine_obj::elapsedTime;

Float Engine_obj::timeScale;

bool Engine_obj::debug;

bool Engine_obj::debugDraw;

::box2D::dynamics::B2DebugDraw Engine_obj::debugDrawer;

Void Engine_obj::initBehaviors( ::com::stencyl::behavior::BehaviorManager manager,::haxe::ds::StringMap behaviorValues,Dynamic parent,::com::stencyl::Engine game,bool initialize){
{
		HX_STACK_PUSH("Engine::initBehaviors","com/stencyl/Engine.hx",847);
		HX_STACK_ARG(manager,"manager");
		HX_STACK_ARG(behaviorValues,"behaviorValues");
		HX_STACK_ARG(parent,"parent");
		HX_STACK_ARG(game,"game");
		HX_STACK_ARG(initialize,"initialize");
		HX_STACK_LINE(848)
		if (((behaviorValues == null()))){
			HX_STACK_LINE(849)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::haxe::ds::StringMap &behaviorValues){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",853);
				{
					HX_STACK_LINE(853)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(behaviorValues);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",853);
						{
							HX_STACK_LINE(853)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(853)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(853)
		for(::cpp::FastIterator_obj< ::com::stencyl::behavior::BehaviorInstance > *__it = ::cpp::CreateFastIterator< ::com::stencyl::behavior::BehaviorInstance >((_Function_1_1::Block(behaviorValues))());  __it->hasNext(); ){
			::com::stencyl::behavior::BehaviorInstance behaviorInstance = __it->next();
			{
				HX_STACK_LINE(855)
				::com::stencyl::behavior::BehaviorInstance bi = behaviorInstance;		HX_STACK_VAR(bi,"bi");
				HX_STACK_LINE(857)
				if (((bool((bi == null())) || bool(!(bi->enabled))))){
					HX_STACK_LINE(858)
					continue;
				}
				HX_STACK_LINE(862)
				::com::stencyl::behavior::Behavior _template = ::com::stencyl::Data_obj::get()->behaviors->get(bi->behaviorID);		HX_STACK_VAR(_template,"template");
				HX_STACK_LINE(863)
				::haxe::ds::StringMap attributes = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(attributes,"attributes");
				HX_STACK_LINE(865)
				if (((_template == null()))){
					HX_STACK_LINE(867)
					::haxe::Log_obj::trace((HX_CSTRING("Non-Existent Behavior ID (Init): ") + bi->behaviorID),hx::SourceInfo(HX_CSTRING("Engine.hx"),867,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("initBehaviors")));
					HX_STACK_LINE(868)
					continue;
				}
				HX_STACK_LINE(872)
				if ((_template->isEvent)){
					HX_STACK_LINE(873)
					for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(_template->attributes->keys());  __it->hasNext(); ){
						::String key = __it->next();
						{
							HX_STACK_LINE(876)
							::com::stencyl::behavior::Attribute att = _template->attributes->get(key);		HX_STACK_VAR(att,"att");
							HX_STACK_LINE(878)
							if (((att == null()))){
								HX_STACK_LINE(879)
								continue;
							}
							HX_STACK_LINE(883)
							::com::stencyl::behavior::Attribute attribute = hx::TCast< com::stencyl::behavior::Attribute >::cast(att);		HX_STACK_VAR(attribute,"attribute");
							HX_STACK_LINE(885)
							if (((attribute == null()))){
								HX_STACK_LINE(886)
								continue;
							}
							HX_STACK_LINE(890)
							::String type = attribute->type;		HX_STACK_VAR(type,"type");
							HX_STACK_LINE(891)
							int ID = attribute->ID;		HX_STACK_VAR(ID,"ID");
							HX_STACK_LINE(893)
							if (((type == HX_CSTRING("list")))){
								HX_STACK_LINE(894)
								attributes->set(key,::com::stencyl::behavior::Attribute_obj::__new(ID,attribute->fieldName,attribute->fullName,Dynamic( Array_obj<Dynamic>::__new()),type,null(),attribute->hidden));
							}
						}
;
					}
				}
				HX_STACK_LINE(900)
				for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(bi->values->keys());  __it->hasNext(); ){
					::String key = __it->next();
					{
						HX_STACK_LINE(902)
						Dynamic value = bi->values->get(key);		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(904)
						if (((_template == null()))){
							HX_STACK_LINE(906)
							::haxe::Log_obj::trace((HX_CSTRING("Non-Existent Behavior ID (Init): ") + bi->behaviorID),hx::SourceInfo(HX_CSTRING("Engine.hx"),906,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("initBehaviors")));
							HX_STACK_LINE(907)
							continue;
						}
						HX_STACK_LINE(910)
						::com::stencyl::behavior::Attribute att = _template->attributes->get(key);		HX_STACK_VAR(att,"att");
						HX_STACK_LINE(912)
						if (((att == null()))){
							HX_STACK_LINE(913)
							continue;
						}
						HX_STACK_LINE(917)
						::com::stencyl::behavior::Attribute attribute = hx::TCast< com::stencyl::behavior::Attribute >::cast(att);		HX_STACK_VAR(attribute,"attribute");
						HX_STACK_LINE(919)
						if (((attribute == null()))){
							HX_STACK_LINE(920)
							continue;
						}
						HX_STACK_LINE(924)
						::String type = attribute->type;		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(925)
						int ID = attribute->ID;		HX_STACK_VAR(ID,"ID");
						HX_STACK_LINE(927)
						attributes->set(key,::com::stencyl::behavior::Attribute_obj::__new(ID,attribute->fieldName,attribute->fullName,value,type,null(),attribute->hidden));
					}
;
				}
				HX_STACK_LINE(930)
				if (((_template == null()))){
					HX_STACK_LINE(932)
					::haxe::Log_obj::trace((HX_CSTRING("Non-Existent Behavior ID (Init): ") + bi->behaviorID),hx::SourceInfo(HX_CSTRING("Engine.hx"),932,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("initBehaviors")));
					HX_STACK_LINE(933)
					continue;
				}
				HX_STACK_LINE(936)
				::com::stencyl::behavior::Behavior b = ::com::stencyl::behavior::Behavior_obj::__new(parent,game,_template->ID,_template->name,_template->classname,true,false,attributes,_template->type,_template->isEvent);		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(950)
				manager->add(b);
			}
;
		}
		HX_STACK_LINE(953)
		if ((initialize)){
			HX_STACK_LINE(954)
			manager->initScripts();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Engine_obj,initBehaviors,(void))

Float Engine_obj::toPhysicalUnits( Float value){
	HX_STACK_PUSH("Engine::toPhysicalUnits","com/stencyl/Engine.hx",3242);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(3243)
	hx::DivEq(value,::com::stencyl::Engine_obj::physicsScale);
	HX_STACK_LINE(3245)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,toPhysicalUnits,return )

Float Engine_obj::toPixelUnits( Float value){
	HX_STACK_PUSH("Engine::toPixelUnits","com/stencyl/Engine.hx",3249);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(3250)
	hx::MultEq(value,::com::stencyl::Engine_obj::physicsScale);
	HX_STACK_LINE(3252)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,toPixelUnits,return )

::box2D::common::math::B2Vec2 Engine_obj::vToPhysicalUnits( ::box2D::common::math::B2Vec2 v){
	HX_STACK_PUSH("Engine::vToPhysicalUnits","com/stencyl/Engine.hx",3256);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(3257)
	v->x = ::com::stencyl::Engine_obj::toPhysicalUnits(v->x);
	HX_STACK_LINE(3258)
	v->y = ::com::stencyl::Engine_obj::toPhysicalUnits(v->y);
	HX_STACK_LINE(3260)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,vToPhysicalUnits,return )

::box2D::common::math::B2Vec2 Engine_obj::vToPixelUnits( ::box2D::common::math::B2Vec2 v){
	HX_STACK_PUSH("Engine::vToPixelUnits","com/stencyl/Engine.hx",3264);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(3265)
	v->x = ::com::stencyl::Engine_obj::toPixelUnits(v->x);
	HX_STACK_LINE(3266)
	v->y = ::com::stencyl::Engine_obj::toPixelUnits(v->y);
	HX_STACK_LINE(3268)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,vToPixelUnits,return )

Void Engine_obj::invokeListeners( Dynamic listeners){
{
		HX_STACK_PUSH("Engine::invokeListeners","com/stencyl/Engine.hx",3811);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_LINE(3812)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(3814)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(3816)
			try{
				HX_STACK_LINE(3818)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(3819)
				f(listeners).Cast< Void >();
				HX_STACK_LINE(3821)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(3822)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(3828)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3829,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(3832)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,invokeListeners,(void))

Void Engine_obj::invokeListeners2( Dynamic listeners,Dynamic value){
{
		HX_STACK_PUSH("Engine::invokeListeners2","com/stencyl/Engine.hx",3838);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(3839)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(3841)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(3843)
			try{
				HX_STACK_LINE(3845)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(3846)
				f(value,listeners).Cast< Void >();
				HX_STACK_LINE(3848)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(3849)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(3855)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3856,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(3859)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,invokeListeners2,(void))

Void Engine_obj::invokeListeners3( Dynamic listeners,Dynamic value,Dynamic value2){
{
		HX_STACK_PUSH("Engine::invokeListeners3","com/stencyl/Engine.hx",3865);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_ARG(value,"value");
		HX_STACK_ARG(value2,"value2");
		HX_STACK_LINE(3866)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(3868)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(3870)
			try{
				HX_STACK_LINE(3872)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(3873)
				f(value,value2,listeners).Cast< Void >();
				HX_STACK_LINE(3875)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(3876)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(3882)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3883,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners3")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(3886)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,invokeListeners3,(void))

Void Engine_obj::invokeListeners4( Dynamic listeners,Dynamic value,Dynamic value2,Dynamic value3){
{
		HX_STACK_PUSH("Engine::invokeListeners4","com/stencyl/Engine.hx",3892);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_ARG(value,"value");
		HX_STACK_ARG(value2,"value2");
		HX_STACK_ARG(value3,"value3");
		HX_STACK_LINE(3893)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(3895)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(3897)
			try{
				HX_STACK_LINE(3899)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(3900)
				f(value,value2,value3,listeners).Cast< Void >();
				HX_STACK_LINE(3902)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(3903)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(3909)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3910,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners4")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(3913)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,invokeListeners4,(void))

Void Engine_obj::invokeListeners5( Dynamic listeners,Dynamic value,Dynamic value2,Dynamic value3,Dynamic value4){
{
		HX_STACK_PUSH("Engine::invokeListeners5","com/stencyl/Engine.hx",3919);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_ARG(value,"value");
		HX_STACK_ARG(value2,"value2");
		HX_STACK_ARG(value3,"value3");
		HX_STACK_ARG(value4,"value4");
		HX_STACK_LINE(3920)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(3922)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(3924)
			try{
				HX_STACK_LINE(3926)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(3927)
				f(value,value2,value3,value4,listeners).Cast< Void >();
				HX_STACK_LINE(3929)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(3930)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(3936)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3937,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners5")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(3940)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Engine_obj,invokeListeners5,(void))

Void Engine_obj::invokeListeners6( Dynamic listeners,Dynamic value,Dynamic value2,Dynamic value3,Dynamic value4,Dynamic value5){
{
		HX_STACK_PUSH("Engine::invokeListeners6","com/stencyl/Engine.hx",3946);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_ARG(value,"value");
		HX_STACK_ARG(value2,"value2");
		HX_STACK_ARG(value3,"value3");
		HX_STACK_ARG(value4,"value4");
		HX_STACK_ARG(value5,"value5");
		HX_STACK_LINE(3947)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(3949)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(3951)
			try{
				HX_STACK_LINE(3953)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(3954)
				f(value,value2,value3,value4,value5,listeners).Cast< Void >();
				HX_STACK_LINE(3956)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(3957)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(3963)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3964,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners6")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(3967)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Engine_obj,invokeListeners6,(void))


Engine_obj::Engine_obj()
{
}

void Engine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Engine);
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_MEMBER_NAME(isFullScreen,"isFullScreen");
	HX_MARK_MEMBER_NAME(nativeListeners,"nativeListeners");
	HX_MARK_MEMBER_NAME(whenFocusChangedListeners,"whenFocusChangedListeners");
	HX_MARK_MEMBER_NAME(whenMTEndListeners,"whenMTEndListeners");
	HX_MARK_MEMBER_NAME(whenMTDragListeners,"whenMTDragListeners");
	HX_MARK_MEMBER_NAME(whenMTStartListeners,"whenMTStartListeners");
	HX_MARK_MEMBER_NAME(whenSwipedListeners,"whenSwipedListeners");
	HX_MARK_MEMBER_NAME(whenPausedListeners,"whenPausedListeners");
	HX_MARK_MEMBER_NAME(whenMouseDraggedListeners,"whenMouseDraggedListeners");
	HX_MARK_MEMBER_NAME(whenMouseMovedListeners,"whenMouseMovedListeners");
	HX_MARK_MEMBER_NAME(whenMouseReleasedListeners,"whenMouseReleasedListeners");
	HX_MARK_MEMBER_NAME(whenMousePressedListeners,"whenMousePressedListeners");
	HX_MARK_MEMBER_NAME(whenDrawingListeners,"whenDrawingListeners");
	HX_MARK_MEMBER_NAME(whenUpdatedListeners,"whenUpdatedListeners");
	HX_MARK_MEMBER_NAME(soundListeners,"soundListeners");
	HX_MARK_MEMBER_NAME(collisionListeners,"collisionListeners");
	HX_MARK_MEMBER_NAME(typeGroupPositionListeners,"typeGroupPositionListeners");
	HX_MARK_MEMBER_NAME(whenTypeGroupDiesListeners,"whenTypeGroupDiesListeners");
	HX_MARK_MEMBER_NAME(whenTypeGroupCreatedListeners,"whenTypeGroupCreatedListeners");
	HX_MARK_MEMBER_NAME(hasKeyPressedListeners,"hasKeyPressedListeners");
	HX_MARK_MEMBER_NAME(whenKeyPressedListeners,"whenKeyPressedListeners");
	HX_MARK_MEMBER_NAME(disableCollisionList,"disableCollisionList");
	HX_MARK_MEMBER_NAME(collisionPairs,"collisionPairs");
	HX_MARK_MEMBER_NAME(my,"my");
	HX_MARK_MEMBER_NAME(mx,"mx");
	HX_MARK_MEMBER_NAME(acc,"acc");
	HX_MARK_MEMBER_NAME(lastTime,"lastTime");
	HX_MARK_MEMBER_NAME(behaviors,"behaviors");
	HX_MARK_MEMBER_NAME(gameAttributes,"gameAttributes");
	HX_MARK_MEMBER_NAME(actorsToCreate,"actorsToCreate");
	HX_MARK_MEMBER_NAME(atlasesToUnload,"atlasesToUnload");
	HX_MARK_MEMBER_NAME(atlasesToLoad,"atlasesToLoad");
	HX_MARK_MEMBER_NAME(cameraOldY,"cameraOldY");
	HX_MARK_MEMBER_NAME(cameraOldX,"cameraOldX");
	HX_MARK_MEMBER_NAME(cameraMoved,"cameraMoved");
	HX_MARK_MEMBER_NAME(tileUpdated,"tileUpdated");
	HX_MARK_MEMBER_NAME(layerOrders,"layerOrders");
	HX_MARK_MEMBER_NAME(layersToDraw,"layersToDraw");
	HX_MARK_MEMBER_NAME(middleLayer,"middleLayer");
	HX_MARK_MEMBER_NAME(bottomLayer,"bottomLayer");
	HX_MARK_MEMBER_NAME(topLayer,"topLayer");
	HX_MARK_MEMBER_NAME(animatedTiles,"animatedTiles");
	HX_MARK_MEMBER_NAME(dynamicTiles,"dynamicTiles");
	HX_MARK_MEMBER_NAME(tileLayers,"tileLayers");
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(actorsToCreateInNextScene,"actorsToCreateInNextScene");
	HX_MARK_MEMBER_NAME(recycledActorsOfType,"recycledActorsOfType");
	HX_MARK_MEMBER_NAME(actorsOfType,"actorsOfType");
	HX_MARK_MEMBER_NAME(hudActors,"hudActors");
	HX_MARK_MEMBER_NAME(actorsPerLayer,"actorsPerLayer");
	HX_MARK_MEMBER_NAME(nextID,"nextID");
	HX_MARK_MEMBER_NAME(allActors,"allActors");
	HX_MARK_MEMBER_NAME(reverseGroups,"reverseGroups");
	HX_MARK_MEMBER_NAME(groups,"groups");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(debugLayer,"debugLayer");
	HX_MARK_MEMBER_NAME(transitionLayer,"transitionLayer");
	HX_MARK_MEMBER_NAME(transitionBitmapLayer,"transitionBitmapLayer");
	HX_MARK_MEMBER_NAME(hudLayer,"hudLayer");
	HX_MARK_MEMBER_NAME(master,"master");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(defaultGroup,"defaultGroup");
	HX_MARK_MEMBER_NAME(joints,"joints");
	HX_MARK_MEMBER_NAME(terrainRegions,"terrainRegions");
	HX_MARK_MEMBER_NAME(regions,"regions");
	HX_MARK_MEMBER_NAME(tasks,"tasks");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(isShaking,"isShaking");
	HX_MARK_MEMBER_NAME(shakeIntensity,"shakeIntensity");
	HX_MARK_MEMBER_NAME(shakeTimer,"shakeTimer");
	HX_MARK_MEMBER_NAME(sceneToEnter,"sceneToEnter");
	HX_MARK_MEMBER_NAME(enter,"enter");
	HX_MARK_MEMBER_NAME(leave,"leave");
	HX_MARK_MEMBER_NAME(physicalHeight,"physicalHeight");
	HX_MARK_MEMBER_NAME(physicalWidth,"physicalWidth");
	HX_MARK_MEMBER_NAME(gravityY,"gravityY");
	HX_MARK_MEMBER_NAME(gravityX,"gravityX");
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_END_CLASS();
}

void Engine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stats,"stats");
	HX_VISIT_MEMBER_NAME(isFullScreen,"isFullScreen");
	HX_VISIT_MEMBER_NAME(nativeListeners,"nativeListeners");
	HX_VISIT_MEMBER_NAME(whenFocusChangedListeners,"whenFocusChangedListeners");
	HX_VISIT_MEMBER_NAME(whenMTEndListeners,"whenMTEndListeners");
	HX_VISIT_MEMBER_NAME(whenMTDragListeners,"whenMTDragListeners");
	HX_VISIT_MEMBER_NAME(whenMTStartListeners,"whenMTStartListeners");
	HX_VISIT_MEMBER_NAME(whenSwipedListeners,"whenSwipedListeners");
	HX_VISIT_MEMBER_NAME(whenPausedListeners,"whenPausedListeners");
	HX_VISIT_MEMBER_NAME(whenMouseDraggedListeners,"whenMouseDraggedListeners");
	HX_VISIT_MEMBER_NAME(whenMouseMovedListeners,"whenMouseMovedListeners");
	HX_VISIT_MEMBER_NAME(whenMouseReleasedListeners,"whenMouseReleasedListeners");
	HX_VISIT_MEMBER_NAME(whenMousePressedListeners,"whenMousePressedListeners");
	HX_VISIT_MEMBER_NAME(whenDrawingListeners,"whenDrawingListeners");
	HX_VISIT_MEMBER_NAME(whenUpdatedListeners,"whenUpdatedListeners");
	HX_VISIT_MEMBER_NAME(soundListeners,"soundListeners");
	HX_VISIT_MEMBER_NAME(collisionListeners,"collisionListeners");
	HX_VISIT_MEMBER_NAME(typeGroupPositionListeners,"typeGroupPositionListeners");
	HX_VISIT_MEMBER_NAME(whenTypeGroupDiesListeners,"whenTypeGroupDiesListeners");
	HX_VISIT_MEMBER_NAME(whenTypeGroupCreatedListeners,"whenTypeGroupCreatedListeners");
	HX_VISIT_MEMBER_NAME(hasKeyPressedListeners,"hasKeyPressedListeners");
	HX_VISIT_MEMBER_NAME(whenKeyPressedListeners,"whenKeyPressedListeners");
	HX_VISIT_MEMBER_NAME(disableCollisionList,"disableCollisionList");
	HX_VISIT_MEMBER_NAME(collisionPairs,"collisionPairs");
	HX_VISIT_MEMBER_NAME(my,"my");
	HX_VISIT_MEMBER_NAME(mx,"mx");
	HX_VISIT_MEMBER_NAME(acc,"acc");
	HX_VISIT_MEMBER_NAME(lastTime,"lastTime");
	HX_VISIT_MEMBER_NAME(behaviors,"behaviors");
	HX_VISIT_MEMBER_NAME(gameAttributes,"gameAttributes");
	HX_VISIT_MEMBER_NAME(actorsToCreate,"actorsToCreate");
	HX_VISIT_MEMBER_NAME(atlasesToUnload,"atlasesToUnload");
	HX_VISIT_MEMBER_NAME(atlasesToLoad,"atlasesToLoad");
	HX_VISIT_MEMBER_NAME(cameraOldY,"cameraOldY");
	HX_VISIT_MEMBER_NAME(cameraOldX,"cameraOldX");
	HX_VISIT_MEMBER_NAME(cameraMoved,"cameraMoved");
	HX_VISIT_MEMBER_NAME(tileUpdated,"tileUpdated");
	HX_VISIT_MEMBER_NAME(layerOrders,"layerOrders");
	HX_VISIT_MEMBER_NAME(layersToDraw,"layersToDraw");
	HX_VISIT_MEMBER_NAME(middleLayer,"middleLayer");
	HX_VISIT_MEMBER_NAME(bottomLayer,"bottomLayer");
	HX_VISIT_MEMBER_NAME(topLayer,"topLayer");
	HX_VISIT_MEMBER_NAME(animatedTiles,"animatedTiles");
	HX_VISIT_MEMBER_NAME(dynamicTiles,"dynamicTiles");
	HX_VISIT_MEMBER_NAME(tileLayers,"tileLayers");
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(actorsToCreateInNextScene,"actorsToCreateInNextScene");
	HX_VISIT_MEMBER_NAME(recycledActorsOfType,"recycledActorsOfType");
	HX_VISIT_MEMBER_NAME(actorsOfType,"actorsOfType");
	HX_VISIT_MEMBER_NAME(hudActors,"hudActors");
	HX_VISIT_MEMBER_NAME(actorsPerLayer,"actorsPerLayer");
	HX_VISIT_MEMBER_NAME(nextID,"nextID");
	HX_VISIT_MEMBER_NAME(allActors,"allActors");
	HX_VISIT_MEMBER_NAME(reverseGroups,"reverseGroups");
	HX_VISIT_MEMBER_NAME(groups,"groups");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(debugLayer,"debugLayer");
	HX_VISIT_MEMBER_NAME(transitionLayer,"transitionLayer");
	HX_VISIT_MEMBER_NAME(transitionBitmapLayer,"transitionBitmapLayer");
	HX_VISIT_MEMBER_NAME(hudLayer,"hudLayer");
	HX_VISIT_MEMBER_NAME(master,"master");
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(defaultGroup,"defaultGroup");
	HX_VISIT_MEMBER_NAME(joints,"joints");
	HX_VISIT_MEMBER_NAME(terrainRegions,"terrainRegions");
	HX_VISIT_MEMBER_NAME(regions,"regions");
	HX_VISIT_MEMBER_NAME(tasks,"tasks");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(isShaking,"isShaking");
	HX_VISIT_MEMBER_NAME(shakeIntensity,"shakeIntensity");
	HX_VISIT_MEMBER_NAME(shakeTimer,"shakeTimer");
	HX_VISIT_MEMBER_NAME(sceneToEnter,"sceneToEnter");
	HX_VISIT_MEMBER_NAME(enter,"enter");
	HX_VISIT_MEMBER_NAME(leave,"leave");
	HX_VISIT_MEMBER_NAME(physicalHeight,"physicalHeight");
	HX_VISIT_MEMBER_NAME(physicalWidth,"physicalWidth");
	HX_VISIT_MEMBER_NAME(gravityY,"gravityY");
	HX_VISIT_MEMBER_NAME(gravityX,"gravityX");
	HX_VISIT_MEMBER_NAME(world,"world");
}

Dynamic Engine_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"my") ) { return my; }
		if (HX_FIELD_EQ(inName,"mx") ) { return mx; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"say") ) { return say_dyn(); }
		if (HX_FIELD_EQ(inName,"acc") ) { return acc; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ngID") ) { return ngID; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SCALE") ) { return SCALE; }
		if (HX_FIELD_EQ(inName,"ngKey") ) { return ngKey; }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		if (HX_FIELD_EQ(inName,"shout") ) { return shout_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"stats") ) { return stats; }
		if (HX_FIELD_EQ(inName,"tasks") ) { return tasks; }
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		if (HX_FIELD_EQ(inName,"enter") ) { return enter; }
		if (HX_FIELD_EQ(inName,"leave") ) { return leave; }
		if (HX_FIELD_EQ(inName,"world") ) { return world; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"DOODAD") ) { return DOODAD; }
		if (HX_FIELD_EQ(inName,"engine") ) { return engine; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"events") ) { return events; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"layers") ) { return layers; }
		if (HX_FIELD_EQ(inName,"nextID") ) { return nextID; }
		if (HX_FIELD_EQ(inName,"groups") ) { return groups; }
		if (HX_FIELD_EQ(inName,"master") ) { return master; }
		if (HX_FIELD_EQ(inName,"joints") ) { return joints; }
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cameraX") ) { return cameraX; }
		if (HX_FIELD_EQ(inName,"cameraY") ) { return cameraY; }
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		if (HX_FIELD_EQ(inName,"mochiID") ) { return mochiID; }
		if (HX_FIELD_EQ(inName,"unpause") ) { return unpause_dyn(); }
		if (HX_FIELD_EQ(inName,"addTask") ) { return addTask_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
		if (HX_FIELD_EQ(inName,"regions") ) { return regions; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"IMG_BASE") ) { return IMG_BASE; }
		if (HX_FIELD_EQ(inName,"getJoint") ) { return getJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"addJoint") ) { return addJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getGroup") ) { return getGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"getActor") ) { return getActor_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue") ) { return setValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getValue") ) { return getValue_dyn(); }
		if (HX_FIELD_EQ(inName,"isPaused") ) { return isPaused_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"lastTime") ) { return lastTime; }
		if (HX_FIELD_EQ(inName,"topLayer") ) { return topLayer; }
		if (HX_FIELD_EQ(inName,"hudLayer") ) { return hudLayer; }
		if (HX_FIELD_EQ(inName,"channels") ) { return channels; }
		if (HX_FIELD_EQ(inName,"gravityY") ) { return gravityY; }
		if (HX_FIELD_EQ(inName,"gravityX") ) { return gravityX; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"landscape") ) { return landscape; }
		if (HX_FIELD_EQ(inName,"movieClip") ) { return movieClip; }
		if (HX_FIELD_EQ(inName,"STEP_SIZE") ) { return STEP_SIZE; }
		if (HX_FIELD_EQ(inName,"timeScale") ) { return timeScale; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw; }
		if (HX_FIELD_EQ(inName,"getRegion") ) { return getRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"addRegion") ) { return addRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"loadScene") ) { return loadScene_dyn(); }
		if (HX_FIELD_EQ(inName,"behaviors") ) { return behaviors; }
		if (HX_FIELD_EQ(inName,"hudActors") ) { return hudActors; }
		if (HX_FIELD_EQ(inName,"allActors") ) { return allActors; }
		if (HX_FIELD_EQ(inName,"isShaking") ) { return isShaking; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BACKGROUND") ) { return BACKGROUND; }
		if (HX_FIELD_EQ(inName,"NO_PHYSICS") ) { return NO_PHYSICS; }
		if (HX_FIELD_EQ(inName,"DEBUG_DRAW") ) { return DEBUG_DRAW; }
		if (HX_FIELD_EQ(inName,"sceneWidth") ) { return sceneWidth; }
		if (HX_FIELD_EQ(inName,"ITERATIONS") ) { return ITERATIONS; }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { return paddingTop; }
		if (HX_FIELD_EQ(inName,"MS_PER_SEC") ) { return MS_PER_SEC; }
		if (HX_FIELD_EQ(inName,"isInRegion") ) { return isInRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"getRegions") ) { return getRegions_dyn(); }
		if (HX_FIELD_EQ(inName,"sendToBack") ) { return sendToBack_dyn(); }
		if (HX_FIELD_EQ(inName,"removeTask") ) { return removeTask_dyn(); }
		if (HX_FIELD_EQ(inName,"postUpdate") ) { return postUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"enterScene") ) { return enterScene_dyn(); }
		if (HX_FIELD_EQ(inName,"initLayers") ) { return initLayers_dyn(); }
		if (HX_FIELD_EQ(inName,"loadJoints") ) { return loadJoints_dyn(); }
		if (HX_FIELD_EQ(inName,"loadCamera") ) { return loadCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"loadActors") ) { return loadActors_dyn(); }
		if (HX_FIELD_EQ(inName,"cameraOldY") ) { return cameraOldY; }
		if (HX_FIELD_EQ(inName,"cameraOldX") ) { return cameraOldX; }
		if (HX_FIELD_EQ(inName,"tileLayers") ) { return tileLayers; }
		if (HX_FIELD_EQ(inName,"debugLayer") ) { return debugLayer; }
		if (HX_FIELD_EQ(inName,"shakeTimer") ) { return shakeTimer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isTabletIOS") ) { return isTabletIOS; }
		if (HX_FIELD_EQ(inName,"screenWidth") ) { return screenWidth; }
		if (HX_FIELD_EQ(inName,"sceneHeight") ) { return sceneHeight; }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { return paddingLeft; }
		if (HX_FIELD_EQ(inName,"elapsedTime") ) { return elapsedTime; }
		if (HX_FIELD_EQ(inName,"debugDrawer") ) { return debugDrawer; }
		if (HX_FIELD_EQ(inName,"nextJointID") ) { return nextJointID_dyn(); }
		if (HX_FIELD_EQ(inName,"moveToLayer") ) { return moveToLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"addHUDActor") ) { return addHUDActor_dyn(); }
		if (HX_FIELD_EQ(inName,"shakeScreen") ) { return shakeScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"getTopLayer") ) { return getTopLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"removeActor") ) { return removeActor_dyn(); }
		if (HX_FIELD_EQ(inName,"createActor") ) { return createActor_dyn(); }
		if (HX_FIELD_EQ(inName,"switchScene") ) { return switchScene_dyn(); }
		if (HX_FIELD_EQ(inName,"loadTerrain") ) { return loadTerrain_dyn(); }
		if (HX_FIELD_EQ(inName,"loadRegions") ) { return loadRegions_dyn(); }
		if (HX_FIELD_EQ(inName,"initPhysics") ) { return initPhysics_dyn(); }
		if (HX_FIELD_EQ(inName,"cameraMoved") ) { return cameraMoved; }
		if (HX_FIELD_EQ(inName,"tileUpdated") ) { return tileUpdated; }
		if (HX_FIELD_EQ(inName,"layerOrders") ) { return layerOrders; }
		if (HX_FIELD_EQ(inName,"middleLayer") ) { return middleLayer; }
		if (HX_FIELD_EQ(inName,"bottomLayer") ) { return bottomLayer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenScaleX") ) { return screenScaleX; }
		if (HX_FIELD_EQ(inName,"screenScaleY") ) { return screenScaleY; }
		if (HX_FIELD_EQ(inName,"screenHeight") ) { return screenHeight; }
		if (HX_FIELD_EQ(inName,"physicsScale") ) { return physicsScale; }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { return paddingRight; }
		if (HX_FIELD_EQ(inName,"toPixelUnits") ) { return toPixelUnits_dyn(); }
		if (HX_FIELD_EQ(inName,"nextRegionID") ) { return nextRegionID_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRegion") ) { return removeRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"createRegion") ) { return createRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"destroyJoint") ) { return destroyJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"bringForward") ) { return bringForward_dyn(); }
		if (HX_FIELD_EQ(inName,"bringToFront") ) { return bringToFront_dyn(); }
		if (HX_FIELD_EQ(inName,"sendBackward") ) { return sendBackward_dyn(); }
		if (HX_FIELD_EQ(inName,"cameraFollow") ) { return cameraFollow_dyn(); }
		if (HX_FIELD_EQ(inName,"focusChanged") ) { return focusChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"recycleActor") ) { return recycleActor_dyn(); }
		if (HX_FIELD_EQ(inName,"optimizePool") ) { return optimizePool_dyn(); }
		if (HX_FIELD_EQ(inName,"isFullScreen") ) { return isFullScreen; }
		if (HX_FIELD_EQ(inName,"layersToDraw") ) { return layersToDraw; }
		if (HX_FIELD_EQ(inName,"dynamicTiles") ) { return dynamicTiles; }
		if (HX_FIELD_EQ(inName,"actorsOfType") ) { return actorsOfType; }
		if (HX_FIELD_EQ(inName,"defaultGroup") ) { return defaultGroup; }
		if (HX_FIELD_EQ(inName,"sceneToEnter") ) { return sceneToEnter; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"REGULAR_LAYER") ) { return REGULAR_LAYER; }
		if (HX_FIELD_EQ(inName,"INTERNAL_CTRL") ) { return INTERNAL_CTRL; }
		if (HX_FIELD_EQ(inName,"isStandardIOS") ) { return isStandardIOS; }
		if (HX_FIELD_EQ(inName,"isExtendedIOS") ) { return isExtendedIOS; }
		if (HX_FIELD_EQ(inName,"screenOffsetX") ) { return screenOffsetX; }
		if (HX_FIELD_EQ(inName,"screenOffsetY") ) { return screenOffsetY; }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { return paddingBottom; }
		if (HX_FIELD_EQ(inName,"initBehaviors") ) { return initBehaviors_dyn(); }
		if (HX_FIELD_EQ(inName,"vToPixelUnits") ) { return vToPixelUnits_dyn(); }
		if (HX_FIELD_EQ(inName,"soundFinished") ) { return soundFinished_dyn(); }
		if (HX_FIELD_EQ(inName,"atlasesToLoad") ) { return atlasesToLoad; }
		if (HX_FIELD_EQ(inName,"animatedTiles") ) { return animatedTiles; }
		if (HX_FIELD_EQ(inName,"reverseGroups") ) { return reverseGroups; }
		if (HX_FIELD_EQ(inName,"physicalWidth") ) { return physicalWidth; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"INTERNAL_SHIFT") ) { return INTERNAL_SHIFT; }
		if (HX_FIELD_EQ(inName,"getGroupByName") ) { return getGroupByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeHUDActor") ) { return removeHUDActor_dyn(); }
		if (HX_FIELD_EQ(inName,"getMiddleLayer") ) { return getMiddleLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getBottomLayer") ) { return getBottomLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"loadBackground") ) { return loadBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"soundListeners") ) { return soundListeners; }
		if (HX_FIELD_EQ(inName,"collisionPairs") ) { return collisionPairs; }
		if (HX_FIELD_EQ(inName,"gameAttributes") ) { return gameAttributes; }
		if (HX_FIELD_EQ(inName,"actorsToCreate") ) { return actorsToCreate; }
		if (HX_FIELD_EQ(inName,"actorsPerLayer") ) { return actorsPerLayer; }
		if (HX_FIELD_EQ(inName,"terrainRegions") ) { return terrainRegions; }
		if (HX_FIELD_EQ(inName,"shakeIntensity") ) { return shakeIntensity; }
		if (HX_FIELD_EQ(inName,"physicalHeight") ) { return physicalHeight; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"screenWidthHalf") ) { return screenWidthHalf; }
		if (HX_FIELD_EQ(inName,"toPhysicalUnits") ) { return toPhysicalUnits_dyn(); }
		if (HX_FIELD_EQ(inName,"invokeListeners") ) { return invokeListeners_dyn(); }
		if (HX_FIELD_EQ(inName,"createBoxRegion") ) { return createBoxRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"getActorsOfType") ) { return getActorsOfType_dyn(); }
		if (HX_FIELD_EQ(inName,"handleCollision") ) { return handleCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"isTransitioning") ) { return isTransitioning_dyn(); }
		if (HX_FIELD_EQ(inName,"loadForegrounds") ) { return loadForegrounds_dyn(); }
		if (HX_FIELD_EQ(inName,"loadBackgrounds") ) { return loadBackgrounds_dyn(); }
		if (HX_FIELD_EQ(inName,"nativeListeners") ) { return nativeListeners; }
		if (HX_FIELD_EQ(inName,"atlasesToUnload") ) { return atlasesToUnload; }
		if (HX_FIELD_EQ(inName,"transitionLayer") ) { return transitionLayer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"screenHeightHalf") ) { return screenHeightHalf; }
		if (HX_FIELD_EQ(inName,"vToPhysicalUnits") ) { return vToPhysicalUnits_dyn(); }
		if (HX_FIELD_EQ(inName,"invokeListeners2") ) { return invokeListeners2_dyn(); }
		if (HX_FIELD_EQ(inName,"invokeListeners3") ) { return invokeListeners3_dyn(); }
		if (HX_FIELD_EQ(inName,"invokeListeners4") ) { return invokeListeners4_dyn(); }
		if (HX_FIELD_EQ(inName,"invokeListeners5") ) { return invokeListeners5_dyn(); }
		if (HX_FIELD_EQ(inName,"invokeListeners6") ) { return invokeListeners6_dyn(); }
		if (HX_FIELD_EQ(inName,"getGameAttribute") ) { return getGameAttribute_dyn(); }
		if (HX_FIELD_EQ(inName,"setGameAttribute") ) { return setGameAttribute_dyn(); }
		if (HX_FIELD_EQ(inName,"getTerrainRegion") ) { return getTerrainRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"addTerrainRegion") ) { return addTerrainRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"createHingeJoint") ) { return createHingeJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"createStickJoint") ) { return createStickJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getPhysicalWidth") ) { return getPhysicalWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"moveActorToLayer") ) { return moveActorToLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"initActorScripts") ) { return initActorScripts_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getTerrainRegions") ) { return getTerrainRegions_dyn(); }
		if (HX_FIELD_EQ(inName,"getPhysicalHeight") ) { return getPhysicalHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"stopShakingScreen") ) { return stopShakingScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"createActorOfType") ) { return createActorOfType_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createSlidingJoint") ) { return createSlidingJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getOrderForLayerID") ) { return getOrderForLayerID_dyn(); }
		if (HX_FIELD_EQ(inName,"isTransitioningOut") ) { return isTransitioningOut_dyn(); }
		if (HX_FIELD_EQ(inName,"loadTerrainRegions") ) { return loadTerrainRegions_dyn(); }
		if (HX_FIELD_EQ(inName,"loadDeferredActors") ) { return loadDeferredActors_dyn(); }
		if (HX_FIELD_EQ(inName,"whenMTEndListeners") ) { return whenMTEndListeners; }
		if (HX_FIELD_EQ(inName,"collisionListeners") ) { return collisionListeners; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nextTerrainRegionID") ) { return nextTerrainRegionID_dyn(); }
		if (HX_FIELD_EQ(inName,"removeTerrainRegion") ) { return removeTerrainRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"createTerrainRegion") ) { return createTerrainRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"getIDFromLayerOrder") ) { return getIDFromLayerOrder_dyn(); }
		if (HX_FIELD_EQ(inName,"whenMTDragListeners") ) { return whenMTDragListeners; }
		if (HX_FIELD_EQ(inName,"whenSwipedListeners") ) { return whenSwipedListeners; }
		if (HX_FIELD_EQ(inName,"whenPausedListeners") ) { return whenPausedListeners; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SCROLLING_BACKGROUND") ) { return SCROLLING_BACKGROUND; }
		if (HX_FIELD_EQ(inName,"createCircularRegion") ) { return createCircularRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"enableGlobalSleeping") ) { return enableGlobalSleeping_dyn(); }
		if (HX_FIELD_EQ(inName,"removeActorFromLayer") ) { return removeActorFromLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"whenMTStartListeners") ) { return whenMTStartListeners; }
		if (HX_FIELD_EQ(inName,"whenDrawingListeners") ) { return whenDrawingListeners; }
		if (HX_FIELD_EQ(inName,"whenUpdatedListeners") ) { return whenUpdatedListeners; }
		if (HX_FIELD_EQ(inName,"disableCollisionList") ) { return disableCollisionList; }
		if (HX_FIELD_EQ(inName,"recycledActorsOfType") ) { return recycledActorsOfType; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setOffscreenTolerance") ) { return setOffscreenTolerance_dyn(); }
		if (HX_FIELD_EQ(inName,"disableGlobalSleeping") ) { return disableGlobalSleeping_dyn(); }
		if (HX_FIELD_EQ(inName,"transitionBitmapLayer") ) { return transitionBitmapLayer; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createBoxTerrainRegion") ) { return createBoxTerrainRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"createCustomStickJoint") ) { return createCustomStickJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getRecycledActorOfType") ) { return getRecycledActorOfType_dyn(); }
		if (HX_FIELD_EQ(inName,"createActorInNextScene") ) { return createActorInNextScene_dyn(); }
		if (HX_FIELD_EQ(inName,"hasKeyPressedListeners") ) { return hasKeyPressedListeners; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getRecycledActorsOfType") ) { return getRecycledActorsOfType_dyn(); }
		if (HX_FIELD_EQ(inName,"whenMouseMovedListeners") ) { return whenMouseMovedListeners; }
		if (HX_FIELD_EQ(inName,"whenKeyPressedListeners") ) { return whenKeyPressedListeners; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"whenFocusChangedListeners") ) { return whenFocusChangedListeners; }
		if (HX_FIELD_EQ(inName,"whenMouseDraggedListeners") ) { return whenMouseDraggedListeners; }
		if (HX_FIELD_EQ(inName,"whenMousePressedListeners") ) { return whenMousePressedListeners; }
		if (HX_FIELD_EQ(inName,"actorsToCreateInNextScene") ) { return actorsToCreateInNextScene; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"whenMouseReleasedListeners") ) { return whenMouseReleasedListeners; }
		if (HX_FIELD_EQ(inName,"typeGroupPositionListeners") ) { return typeGroupPositionListeners; }
		if (HX_FIELD_EQ(inName,"whenTypeGroupDiesListeners") ) { return whenTypeGroupDiesListeners; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"createCircularTerrainRegion") ) { return createCircularTerrainRegion_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"whenTypeGroupCreatedListeners") ) { return whenTypeGroupCreatedListeners; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Engine_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< ::com::stencyl::graphics::G >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"my") ) { my=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mx") ) { mx=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"acc") ) { acc=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ngID") ) { ngID=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SCALE") ) { SCALE=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ngKey") ) { ngKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::flash::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::com::nmefermmmtools::debug::Stats >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tasks") ) { tasks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::com::stencyl::models::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enter") ) { enter=inValue.Cast< ::com::stencyl::graphics::transitions::Transition >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leave") ) { leave=inValue.Cast< ::com::stencyl::graphics::transitions::Transition >(); return inValue; }
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< ::box2D::dynamics::B2World >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"DOODAD") ) { DOODAD=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"engine") ) { engine=inValue.Cast< ::com::stencyl::Engine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::com::stencyl::event::EventMaster >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextID") ) { nextID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"groups") ) { groups=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"master") ) { master=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"joints") ) { joints=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cameraX") ) { cameraX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraY") ) { cameraY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mochiID") ) { mochiID=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regions") ) { regions=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"IMG_BASE") ) { IMG_BASE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastTime") ) { lastTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"topLayer") ) { topLayer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hudLayer") ) { hudLayer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityY") ) { gravityY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityX") ) { gravityX=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"landscape") ) { landscape=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"movieClip") ) { movieClip=inValue.Cast< ::flash::display::MovieClip >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STEP_SIZE") ) { STEP_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeScale") ) { timeScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { debugDraw=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"behaviors") ) { behaviors=inValue.Cast< ::com::stencyl::behavior::BehaviorManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hudActors") ) { hudActors=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allActors") ) { allActors=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isShaking") ) { isShaking=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BACKGROUND") ) { BACKGROUND=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NO_PHYSICS") ) { NO_PHYSICS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_DRAW") ) { DEBUG_DRAW=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sceneWidth") ) { sceneWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ITERATIONS") ) { ITERATIONS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { paddingTop=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MS_PER_SEC") ) { MS_PER_SEC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraOldY") ) { cameraOldY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraOldX") ) { cameraOldX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileLayers") ) { tileLayers=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugLayer") ) { debugLayer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shakeTimer") ) { shakeTimer=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isTabletIOS") ) { isTabletIOS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenWidth") ) { screenWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sceneHeight") ) { sceneHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { paddingLeft=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elapsedTime") ) { elapsedTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugDrawer") ) { debugDrawer=inValue.Cast< ::box2D::dynamics::B2DebugDraw >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraMoved") ) { cameraMoved=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileUpdated") ) { tileUpdated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layerOrders") ) { layerOrders=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"middleLayer") ) { middleLayer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomLayer") ) { bottomLayer=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenScaleX") ) { screenScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenScaleY") ) { screenScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenHeight") ) { screenHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"physicsScale") ) { physicsScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { paddingRight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isFullScreen") ) { isFullScreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layersToDraw") ) { layersToDraw=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dynamicTiles") ) { dynamicTiles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actorsOfType") ) { actorsOfType=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultGroup") ) { defaultGroup=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sceneToEnter") ) { sceneToEnter=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"REGULAR_LAYER") ) { REGULAR_LAYER=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INTERNAL_CTRL") ) { INTERNAL_CTRL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isStandardIOS") ) { isStandardIOS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isExtendedIOS") ) { isExtendedIOS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenOffsetX") ) { screenOffsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenOffsetY") ) { screenOffsetY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { paddingBottom=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"atlasesToLoad") ) { atlasesToLoad=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animatedTiles") ) { animatedTiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reverseGroups") ) { reverseGroups=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"physicalWidth") ) { physicalWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"INTERNAL_SHIFT") ) { INTERNAL_SHIFT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundListeners") ) { soundListeners=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collisionPairs") ) { collisionPairs=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameAttributes") ) { gameAttributes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actorsToCreate") ) { actorsToCreate=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actorsPerLayer") ) { actorsPerLayer=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"terrainRegions") ) { terrainRegions=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shakeIntensity") ) { shakeIntensity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"physicalHeight") ) { physicalHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"screenWidthHalf") ) { screenWidthHalf=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nativeListeners") ) { nativeListeners=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"atlasesToUnload") ) { atlasesToUnload=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transitionLayer") ) { transitionLayer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"screenHeightHalf") ) { screenHeightHalf=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"whenMTEndListeners") ) { whenMTEndListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collisionListeners") ) { collisionListeners=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"whenMTDragListeners") ) { whenMTDragListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenSwipedListeners") ) { whenSwipedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenPausedListeners") ) { whenPausedListeners=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SCROLLING_BACKGROUND") ) { SCROLLING_BACKGROUND=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenMTStartListeners") ) { whenMTStartListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenDrawingListeners") ) { whenDrawingListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenUpdatedListeners") ) { whenUpdatedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disableCollisionList") ) { disableCollisionList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"recycledActorsOfType") ) { recycledActorsOfType=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"transitionBitmapLayer") ) { transitionBitmapLayer=inValue.Cast< ::flash::display::DisplayObject >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hasKeyPressedListeners") ) { hasKeyPressedListeners=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"whenMouseMovedListeners") ) { whenMouseMovedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenKeyPressedListeners") ) { whenKeyPressedListeners=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"whenFocusChangedListeners") ) { whenFocusChangedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenMouseDraggedListeners") ) { whenMouseDraggedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenMousePressedListeners") ) { whenMousePressedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actorsToCreateInNextScene") ) { actorsToCreateInNextScene=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"whenMouseReleasedListeners") ) { whenMouseReleasedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typeGroupPositionListeners") ) { typeGroupPositionListeners=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenTypeGroupDiesListeners") ) { whenTypeGroupDiesListeners=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"whenTypeGroupCreatedListeners") ) { whenTypeGroupCreatedListeners=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Engine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stats"));
	outFields->push(HX_CSTRING("isFullScreen"));
	outFields->push(HX_CSTRING("nativeListeners"));
	outFields->push(HX_CSTRING("whenFocusChangedListeners"));
	outFields->push(HX_CSTRING("whenMTEndListeners"));
	outFields->push(HX_CSTRING("whenMTDragListeners"));
	outFields->push(HX_CSTRING("whenMTStartListeners"));
	outFields->push(HX_CSTRING("whenSwipedListeners"));
	outFields->push(HX_CSTRING("whenPausedListeners"));
	outFields->push(HX_CSTRING("whenMouseDraggedListeners"));
	outFields->push(HX_CSTRING("whenMouseMovedListeners"));
	outFields->push(HX_CSTRING("whenMouseReleasedListeners"));
	outFields->push(HX_CSTRING("whenMousePressedListeners"));
	outFields->push(HX_CSTRING("whenDrawingListeners"));
	outFields->push(HX_CSTRING("whenUpdatedListeners"));
	outFields->push(HX_CSTRING("soundListeners"));
	outFields->push(HX_CSTRING("collisionListeners"));
	outFields->push(HX_CSTRING("typeGroupPositionListeners"));
	outFields->push(HX_CSTRING("whenTypeGroupDiesListeners"));
	outFields->push(HX_CSTRING("whenTypeGroupCreatedListeners"));
	outFields->push(HX_CSTRING("hasKeyPressedListeners"));
	outFields->push(HX_CSTRING("whenKeyPressedListeners"));
	outFields->push(HX_CSTRING("disableCollisionList"));
	outFields->push(HX_CSTRING("collisionPairs"));
	outFields->push(HX_CSTRING("my"));
	outFields->push(HX_CSTRING("mx"));
	outFields->push(HX_CSTRING("acc"));
	outFields->push(HX_CSTRING("lastTime"));
	outFields->push(HX_CSTRING("behaviors"));
	outFields->push(HX_CSTRING("gameAttributes"));
	outFields->push(HX_CSTRING("actorsToCreate"));
	outFields->push(HX_CSTRING("atlasesToUnload"));
	outFields->push(HX_CSTRING("atlasesToLoad"));
	outFields->push(HX_CSTRING("cameraOldY"));
	outFields->push(HX_CSTRING("cameraOldX"));
	outFields->push(HX_CSTRING("cameraMoved"));
	outFields->push(HX_CSTRING("tileUpdated"));
	outFields->push(HX_CSTRING("layerOrders"));
	outFields->push(HX_CSTRING("layersToDraw"));
	outFields->push(HX_CSTRING("middleLayer"));
	outFields->push(HX_CSTRING("bottomLayer"));
	outFields->push(HX_CSTRING("topLayer"));
	outFields->push(HX_CSTRING("animatedTiles"));
	outFields->push(HX_CSTRING("dynamicTiles"));
	outFields->push(HX_CSTRING("tileLayers"));
	outFields->push(HX_CSTRING("layers"));
	outFields->push(HX_CSTRING("actorsToCreateInNextScene"));
	outFields->push(HX_CSTRING("recycledActorsOfType"));
	outFields->push(HX_CSTRING("actorsOfType"));
	outFields->push(HX_CSTRING("hudActors"));
	outFields->push(HX_CSTRING("actorsPerLayer"));
	outFields->push(HX_CSTRING("nextID"));
	outFields->push(HX_CSTRING("allActors"));
	outFields->push(HX_CSTRING("reverseGroups"));
	outFields->push(HX_CSTRING("groups"));
	outFields->push(HX_CSTRING("g"));
	outFields->push(HX_CSTRING("debugLayer"));
	outFields->push(HX_CSTRING("transitionLayer"));
	outFields->push(HX_CSTRING("transitionBitmapLayer"));
	outFields->push(HX_CSTRING("hudLayer"));
	outFields->push(HX_CSTRING("master"));
	outFields->push(HX_CSTRING("root"));
	outFields->push(HX_CSTRING("defaultGroup"));
	outFields->push(HX_CSTRING("joints"));
	outFields->push(HX_CSTRING("terrainRegions"));
	outFields->push(HX_CSTRING("regions"));
	outFields->push(HX_CSTRING("tasks"));
	outFields->push(HX_CSTRING("channels"));
	outFields->push(HX_CSTRING("camera"));
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("isShaking"));
	outFields->push(HX_CSTRING("shakeIntensity"));
	outFields->push(HX_CSTRING("shakeTimer"));
	outFields->push(HX_CSTRING("sceneToEnter"));
	outFields->push(HX_CSTRING("enter"));
	outFields->push(HX_CSTRING("leave"));
	outFields->push(HX_CSTRING("physicalHeight"));
	outFields->push(HX_CSTRING("physicalWidth"));
	outFields->push(HX_CSTRING("gravityY"));
	outFields->push(HX_CSTRING("gravityX"));
	outFields->push(HX_CSTRING("world"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BACKGROUND"),
	HX_CSTRING("SCROLLING_BACKGROUND"),
	HX_CSTRING("REGULAR_LAYER"),
	HX_CSTRING("DOODAD"),
	HX_CSTRING("INTERNAL_SHIFT"),
	HX_CSTRING("INTERNAL_CTRL"),
	HX_CSTRING("NO_PHYSICS"),
	HX_CSTRING("DEBUG_DRAW"),
	HX_CSTRING("IMG_BASE"),
	HX_CSTRING("SCALE"),
	HX_CSTRING("isStandardIOS"),
	HX_CSTRING("isExtendedIOS"),
	HX_CSTRING("isTabletIOS"),
	HX_CSTRING("engine"),
	HX_CSTRING("landscape"),
	HX_CSTRING("cameraX"),
	HX_CSTRING("cameraY"),
	HX_CSTRING("screenScaleX"),
	HX_CSTRING("screenScaleY"),
	HX_CSTRING("screenOffsetX"),
	HX_CSTRING("screenOffsetY"),
	HX_CSTRING("screenWidth"),
	HX_CSTRING("screenHeight"),
	HX_CSTRING("sceneWidth"),
	HX_CSTRING("sceneHeight"),
	HX_CSTRING("screenWidthHalf"),
	HX_CSTRING("screenHeightHalf"),
	HX_CSTRING("paused"),
	HX_CSTRING("started"),
	HX_CSTRING("events"),
	HX_CSTRING("ITERATIONS"),
	HX_CSTRING("physicsScale"),
	HX_CSTRING("paddingLeft"),
	HX_CSTRING("paddingRight"),
	HX_CSTRING("paddingTop"),
	HX_CSTRING("paddingBottom"),
	HX_CSTRING("mochiID"),
	HX_CSTRING("ngID"),
	HX_CSTRING("ngKey"),
	HX_CSTRING("movieClip"),
	HX_CSTRING("stage"),
	HX_CSTRING("STEP_SIZE"),
	HX_CSTRING("MS_PER_SEC"),
	HX_CSTRING("elapsedTime"),
	HX_CSTRING("timeScale"),
	HX_CSTRING("debug"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("debugDrawer"),
	HX_CSTRING("initBehaviors"),
	HX_CSTRING("toPhysicalUnits"),
	HX_CSTRING("toPixelUnits"),
	HX_CSTRING("vToPhysicalUnits"),
	HX_CSTRING("vToPixelUnits"),
	HX_CSTRING("invokeListeners"),
	HX_CSTRING("invokeListeners2"),
	HX_CSTRING("invokeListeners3"),
	HX_CSTRING("invokeListeners4"),
	HX_CSTRING("invokeListeners5"),
	HX_CSTRING("invokeListeners6"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setOffscreenTolerance"),
	HX_CSTRING("getGameAttribute"),
	HX_CSTRING("setGameAttribute"),
	HX_CSTRING("nextTerrainRegionID"),
	HX_CSTRING("getTerrainRegions"),
	HX_CSTRING("getTerrainRegion"),
	HX_CSTRING("removeTerrainRegion"),
	HX_CSTRING("addTerrainRegion"),
	HX_CSTRING("createCircularTerrainRegion"),
	HX_CSTRING("createBoxTerrainRegion"),
	HX_CSTRING("createTerrainRegion"),
	HX_CSTRING("isInRegion"),
	HX_CSTRING("nextRegionID"),
	HX_CSTRING("getRegions"),
	HX_CSTRING("getRegion"),
	HX_CSTRING("removeRegion"),
	HX_CSTRING("addRegion"),
	HX_CSTRING("createCircularRegion"),
	HX_CSTRING("createBoxRegion"),
	HX_CSTRING("createRegion"),
	HX_CSTRING("createSlidingJoint"),
	HX_CSTRING("createHingeJoint"),
	HX_CSTRING("createCustomStickJoint"),
	HX_CSTRING("createStickJoint"),
	HX_CSTRING("destroyJoint"),
	HX_CSTRING("getJoint"),
	HX_CSTRING("addJoint"),
	HX_CSTRING("nextJointID"),
	HX_CSTRING("getGroupByName"),
	HX_CSTRING("getGroup"),
	HX_CSTRING("disableGlobalSleeping"),
	HX_CSTRING("enableGlobalSleeping"),
	HX_CSTRING("getPhysicalHeight"),
	HX_CSTRING("getPhysicalWidth"),
	HX_CSTRING("getIDFromLayerOrder"),
	HX_CSTRING("getOrderForLayerID"),
	HX_CSTRING("bringForward"),
	HX_CSTRING("bringToFront"),
	HX_CSTRING("sendBackward"),
	HX_CSTRING("sendToBack"),
	HX_CSTRING("moveToLayer"),
	HX_CSTRING("removeHUDActor"),
	HX_CSTRING("addHUDActor"),
	HX_CSTRING("getRecycledActorsOfType"),
	HX_CSTRING("getActorsOfType"),
	HX_CSTRING("getActor"),
	HX_CSTRING("shout"),
	HX_CSTRING("say"),
	HX_CSTRING("setValue"),
	HX_CSTRING("getValue"),
	HX_CSTRING("draw"),
	HX_CSTRING("isPaused"),
	HX_CSTRING("unpause"),
	HX_CSTRING("pause"),
	HX_CSTRING("cameraFollow"),
	HX_CSTRING("stopShakingScreen"),
	HX_CSTRING("shakeScreen"),
	HX_CSTRING("removeTask"),
	HX_CSTRING("addTask"),
	HX_CSTRING("soundFinished"),
	HX_CSTRING("handleCollision"),
	HX_CSTRING("focusChanged"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("postUpdate"),
	HX_CSTRING("onUpdate"),
	HX_CSTRING("update"),
	HX_CSTRING("getMiddleLayer"),
	HX_CSTRING("getBottomLayer"),
	HX_CSTRING("getTopLayer"),
	HX_CSTRING("createActorOfType"),
	HX_CSTRING("getRecycledActorOfType"),
	HX_CSTRING("recycleActor"),
	HX_CSTRING("moveActorToLayer"),
	HX_CSTRING("removeActorFromLayer"),
	HX_CSTRING("removeActor"),
	HX_CSTRING("createActor"),
	HX_CSTRING("createActorInNextScene"),
	HX_CSTRING("isTransitioningOut"),
	HX_CSTRING("isTransitioning"),
	HX_CSTRING("enterScene"),
	HX_CSTRING("switchScene"),
	HX_CSTRING("cleanup"),
	HX_CSTRING("optimizePool"),
	HX_CSTRING("initLayers"),
	HX_CSTRING("loadTerrain"),
	HX_CSTRING("loadJoints"),
	HX_CSTRING("loadTerrainRegions"),
	HX_CSTRING("loadRegions"),
	HX_CSTRING("loadCamera"),
	HX_CSTRING("initActorScripts"),
	HX_CSTRING("loadDeferredActors"),
	HX_CSTRING("loadActors"),
	HX_CSTRING("initPhysics"),
	HX_CSTRING("loadBackground"),
	HX_CSTRING("loadForegrounds"),
	HX_CSTRING("loadBackgrounds"),
	HX_CSTRING("loadScene"),
	HX_CSTRING("begin"),
	HX_CSTRING("stats"),
	HX_CSTRING("isFullScreen"),
	HX_CSTRING("nativeListeners"),
	HX_CSTRING("whenFocusChangedListeners"),
	HX_CSTRING("whenMTEndListeners"),
	HX_CSTRING("whenMTDragListeners"),
	HX_CSTRING("whenMTStartListeners"),
	HX_CSTRING("whenSwipedListeners"),
	HX_CSTRING("whenPausedListeners"),
	HX_CSTRING("whenMouseDraggedListeners"),
	HX_CSTRING("whenMouseMovedListeners"),
	HX_CSTRING("whenMouseReleasedListeners"),
	HX_CSTRING("whenMousePressedListeners"),
	HX_CSTRING("whenDrawingListeners"),
	HX_CSTRING("whenUpdatedListeners"),
	HX_CSTRING("soundListeners"),
	HX_CSTRING("collisionListeners"),
	HX_CSTRING("typeGroupPositionListeners"),
	HX_CSTRING("whenTypeGroupDiesListeners"),
	HX_CSTRING("whenTypeGroupCreatedListeners"),
	HX_CSTRING("hasKeyPressedListeners"),
	HX_CSTRING("whenKeyPressedListeners"),
	HX_CSTRING("disableCollisionList"),
	HX_CSTRING("collisionPairs"),
	HX_CSTRING("my"),
	HX_CSTRING("mx"),
	HX_CSTRING("acc"),
	HX_CSTRING("lastTime"),
	HX_CSTRING("behaviors"),
	HX_CSTRING("gameAttributes"),
	HX_CSTRING("actorsToCreate"),
	HX_CSTRING("atlasesToUnload"),
	HX_CSTRING("atlasesToLoad"),
	HX_CSTRING("cameraOldY"),
	HX_CSTRING("cameraOldX"),
	HX_CSTRING("cameraMoved"),
	HX_CSTRING("tileUpdated"),
	HX_CSTRING("layerOrders"),
	HX_CSTRING("layersToDraw"),
	HX_CSTRING("middleLayer"),
	HX_CSTRING("bottomLayer"),
	HX_CSTRING("topLayer"),
	HX_CSTRING("animatedTiles"),
	HX_CSTRING("dynamicTiles"),
	HX_CSTRING("tileLayers"),
	HX_CSTRING("layers"),
	HX_CSTRING("actorsToCreateInNextScene"),
	HX_CSTRING("recycledActorsOfType"),
	HX_CSTRING("actorsOfType"),
	HX_CSTRING("hudActors"),
	HX_CSTRING("actorsPerLayer"),
	HX_CSTRING("nextID"),
	HX_CSTRING("allActors"),
	HX_CSTRING("reverseGroups"),
	HX_CSTRING("groups"),
	HX_CSTRING("g"),
	HX_CSTRING("debugLayer"),
	HX_CSTRING("transitionLayer"),
	HX_CSTRING("transitionBitmapLayer"),
	HX_CSTRING("hudLayer"),
	HX_CSTRING("master"),
	HX_CSTRING("root"),
	HX_CSTRING("defaultGroup"),
	HX_CSTRING("joints"),
	HX_CSTRING("terrainRegions"),
	HX_CSTRING("regions"),
	HX_CSTRING("tasks"),
	HX_CSTRING("channels"),
	HX_CSTRING("camera"),
	HX_CSTRING("scene"),
	HX_CSTRING("isShaking"),
	HX_CSTRING("shakeIntensity"),
	HX_CSTRING("shakeTimer"),
	HX_CSTRING("sceneToEnter"),
	HX_CSTRING("enter"),
	HX_CSTRING("leave"),
	HX_CSTRING("physicalHeight"),
	HX_CSTRING("physicalWidth"),
	HX_CSTRING("gravityY"),
	HX_CSTRING("gravityX"),
	HX_CSTRING("world"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Engine_obj::BACKGROUND,"BACKGROUND");
	HX_MARK_MEMBER_NAME(Engine_obj::SCROLLING_BACKGROUND,"SCROLLING_BACKGROUND");
	HX_MARK_MEMBER_NAME(Engine_obj::REGULAR_LAYER,"REGULAR_LAYER");
	HX_MARK_MEMBER_NAME(Engine_obj::DOODAD,"DOODAD");
	HX_MARK_MEMBER_NAME(Engine_obj::INTERNAL_SHIFT,"INTERNAL_SHIFT");
	HX_MARK_MEMBER_NAME(Engine_obj::INTERNAL_CTRL,"INTERNAL_CTRL");
	HX_MARK_MEMBER_NAME(Engine_obj::NO_PHYSICS,"NO_PHYSICS");
	HX_MARK_MEMBER_NAME(Engine_obj::DEBUG_DRAW,"DEBUG_DRAW");
	HX_MARK_MEMBER_NAME(Engine_obj::IMG_BASE,"IMG_BASE");
	HX_MARK_MEMBER_NAME(Engine_obj::SCALE,"SCALE");
	HX_MARK_MEMBER_NAME(Engine_obj::isStandardIOS,"isStandardIOS");
	HX_MARK_MEMBER_NAME(Engine_obj::isExtendedIOS,"isExtendedIOS");
	HX_MARK_MEMBER_NAME(Engine_obj::isTabletIOS,"isTabletIOS");
	HX_MARK_MEMBER_NAME(Engine_obj::engine,"engine");
	HX_MARK_MEMBER_NAME(Engine_obj::landscape,"landscape");
	HX_MARK_MEMBER_NAME(Engine_obj::cameraX,"cameraX");
	HX_MARK_MEMBER_NAME(Engine_obj::cameraY,"cameraY");
	HX_MARK_MEMBER_NAME(Engine_obj::screenScaleX,"screenScaleX");
	HX_MARK_MEMBER_NAME(Engine_obj::screenScaleY,"screenScaleY");
	HX_MARK_MEMBER_NAME(Engine_obj::screenOffsetX,"screenOffsetX");
	HX_MARK_MEMBER_NAME(Engine_obj::screenOffsetY,"screenOffsetY");
	HX_MARK_MEMBER_NAME(Engine_obj::screenWidth,"screenWidth");
	HX_MARK_MEMBER_NAME(Engine_obj::screenHeight,"screenHeight");
	HX_MARK_MEMBER_NAME(Engine_obj::sceneWidth,"sceneWidth");
	HX_MARK_MEMBER_NAME(Engine_obj::sceneHeight,"sceneHeight");
	HX_MARK_MEMBER_NAME(Engine_obj::screenWidthHalf,"screenWidthHalf");
	HX_MARK_MEMBER_NAME(Engine_obj::screenHeightHalf,"screenHeightHalf");
	HX_MARK_MEMBER_NAME(Engine_obj::paused,"paused");
	HX_MARK_MEMBER_NAME(Engine_obj::started,"started");
	HX_MARK_MEMBER_NAME(Engine_obj::events,"events");
	HX_MARK_MEMBER_NAME(Engine_obj::ITERATIONS,"ITERATIONS");
	HX_MARK_MEMBER_NAME(Engine_obj::physicsScale,"physicsScale");
	HX_MARK_MEMBER_NAME(Engine_obj::paddingLeft,"paddingLeft");
	HX_MARK_MEMBER_NAME(Engine_obj::paddingRight,"paddingRight");
	HX_MARK_MEMBER_NAME(Engine_obj::paddingTop,"paddingTop");
	HX_MARK_MEMBER_NAME(Engine_obj::paddingBottom,"paddingBottom");
	HX_MARK_MEMBER_NAME(Engine_obj::mochiID,"mochiID");
	HX_MARK_MEMBER_NAME(Engine_obj::ngID,"ngID");
	HX_MARK_MEMBER_NAME(Engine_obj::ngKey,"ngKey");
	HX_MARK_MEMBER_NAME(Engine_obj::movieClip,"movieClip");
	HX_MARK_MEMBER_NAME(Engine_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(Engine_obj::STEP_SIZE,"STEP_SIZE");
	HX_MARK_MEMBER_NAME(Engine_obj::MS_PER_SEC,"MS_PER_SEC");
	HX_MARK_MEMBER_NAME(Engine_obj::elapsedTime,"elapsedTime");
	HX_MARK_MEMBER_NAME(Engine_obj::timeScale,"timeScale");
	HX_MARK_MEMBER_NAME(Engine_obj::debug,"debug");
	HX_MARK_MEMBER_NAME(Engine_obj::debugDraw,"debugDraw");
	HX_MARK_MEMBER_NAME(Engine_obj::debugDrawer,"debugDrawer");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Engine_obj::BACKGROUND,"BACKGROUND");
	HX_VISIT_MEMBER_NAME(Engine_obj::SCROLLING_BACKGROUND,"SCROLLING_BACKGROUND");
	HX_VISIT_MEMBER_NAME(Engine_obj::REGULAR_LAYER,"REGULAR_LAYER");
	HX_VISIT_MEMBER_NAME(Engine_obj::DOODAD,"DOODAD");
	HX_VISIT_MEMBER_NAME(Engine_obj::INTERNAL_SHIFT,"INTERNAL_SHIFT");
	HX_VISIT_MEMBER_NAME(Engine_obj::INTERNAL_CTRL,"INTERNAL_CTRL");
	HX_VISIT_MEMBER_NAME(Engine_obj::NO_PHYSICS,"NO_PHYSICS");
	HX_VISIT_MEMBER_NAME(Engine_obj::DEBUG_DRAW,"DEBUG_DRAW");
	HX_VISIT_MEMBER_NAME(Engine_obj::IMG_BASE,"IMG_BASE");
	HX_VISIT_MEMBER_NAME(Engine_obj::SCALE,"SCALE");
	HX_VISIT_MEMBER_NAME(Engine_obj::isStandardIOS,"isStandardIOS");
	HX_VISIT_MEMBER_NAME(Engine_obj::isExtendedIOS,"isExtendedIOS");
	HX_VISIT_MEMBER_NAME(Engine_obj::isTabletIOS,"isTabletIOS");
	HX_VISIT_MEMBER_NAME(Engine_obj::engine,"engine");
	HX_VISIT_MEMBER_NAME(Engine_obj::landscape,"landscape");
	HX_VISIT_MEMBER_NAME(Engine_obj::cameraX,"cameraX");
	HX_VISIT_MEMBER_NAME(Engine_obj::cameraY,"cameraY");
	HX_VISIT_MEMBER_NAME(Engine_obj::screenScaleX,"screenScaleX");
	HX_VISIT_MEMBER_NAME(Engine_obj::screenScaleY,"screenScaleY");
	HX_VISIT_MEMBER_NAME(Engine_obj::screenOffsetX,"screenOffsetX");
	HX_VISIT_MEMBER_NAME(Engine_obj::screenOffsetY,"screenOffsetY");
	HX_VISIT_MEMBER_NAME(Engine_obj::screenWidth,"screenWidth");
	HX_VISIT_MEMBER_NAME(Engine_obj::screenHeight,"screenHeight");
	HX_VISIT_MEMBER_NAME(Engine_obj::sceneWidth,"sceneWidth");
	HX_VISIT_MEMBER_NAME(Engine_obj::sceneHeight,"sceneHeight");
	HX_VISIT_MEMBER_NAME(Engine_obj::screenWidthHalf,"screenWidthHalf");
	HX_VISIT_MEMBER_NAME(Engine_obj::screenHeightHalf,"screenHeightHalf");
	HX_VISIT_MEMBER_NAME(Engine_obj::paused,"paused");
	HX_VISIT_MEMBER_NAME(Engine_obj::started,"started");
	HX_VISIT_MEMBER_NAME(Engine_obj::events,"events");
	HX_VISIT_MEMBER_NAME(Engine_obj::ITERATIONS,"ITERATIONS");
	HX_VISIT_MEMBER_NAME(Engine_obj::physicsScale,"physicsScale");
	HX_VISIT_MEMBER_NAME(Engine_obj::paddingLeft,"paddingLeft");
	HX_VISIT_MEMBER_NAME(Engine_obj::paddingRight,"paddingRight");
	HX_VISIT_MEMBER_NAME(Engine_obj::paddingTop,"paddingTop");
	HX_VISIT_MEMBER_NAME(Engine_obj::paddingBottom,"paddingBottom");
	HX_VISIT_MEMBER_NAME(Engine_obj::mochiID,"mochiID");
	HX_VISIT_MEMBER_NAME(Engine_obj::ngID,"ngID");
	HX_VISIT_MEMBER_NAME(Engine_obj::ngKey,"ngKey");
	HX_VISIT_MEMBER_NAME(Engine_obj::movieClip,"movieClip");
	HX_VISIT_MEMBER_NAME(Engine_obj::stage,"stage");
	HX_VISIT_MEMBER_NAME(Engine_obj::STEP_SIZE,"STEP_SIZE");
	HX_VISIT_MEMBER_NAME(Engine_obj::MS_PER_SEC,"MS_PER_SEC");
	HX_VISIT_MEMBER_NAME(Engine_obj::elapsedTime,"elapsedTime");
	HX_VISIT_MEMBER_NAME(Engine_obj::timeScale,"timeScale");
	HX_VISIT_MEMBER_NAME(Engine_obj::debug,"debug");
	HX_VISIT_MEMBER_NAME(Engine_obj::debugDraw,"debugDraw");
	HX_VISIT_MEMBER_NAME(Engine_obj::debugDrawer,"debugDrawer");
};

Class Engine_obj::__mClass;

void Engine_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.Engine"), hx::TCanCast< Engine_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Engine_obj::__boot()
{
	BACKGROUND= HX_CSTRING("b");
	SCROLLING_BACKGROUND= HX_CSTRING("s");
	REGULAR_LAYER= HX_CSTRING("l");
	DOODAD= HX_CSTRING("");
	INTERNAL_SHIFT= HX_CSTRING("iSHIFT");
	INTERNAL_CTRL= HX_CSTRING("iCTRL");
	NO_PHYSICS= false;
	DEBUG_DRAW= false;
	IMG_BASE= HX_CSTRING("");
	SCALE= (int)1;
	isStandardIOS= false;
	isExtendedIOS= false;
	isTabletIOS= false;
	engine= null();
	landscape= false;
	paused= false;
	started= false;
	events= ::com::stencyl::event::EventMaster_obj::__new();
	ITERATIONS= (int)3;
	physicsScale= 10.0;
	paddingLeft= (int)0;
	paddingRight= (int)0;
	paddingTop= (int)0;
	paddingBottom= (int)0;
	STEP_SIZE= (int)10;
	MS_PER_SEC= (int)1000;
	elapsedTime= (int)0;
	timeScale= (int)1;
	debug= false;
	debugDraw= false;
}

} // end namespace com
} // end namespace stencyl
