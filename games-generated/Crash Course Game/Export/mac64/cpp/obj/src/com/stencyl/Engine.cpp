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
#ifndef INCLUDED_flash_display_StageDisplayState
#include <flash/display/StageDisplayState.h>
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
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
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
HX_STACK_PUSH("Engine::new","com/stencyl/Engine.hx",101);
{
	HX_STACK_LINE(369)
	this->isFullScreen = false;
	HX_STACK_LINE(457)
	root->set_mouseChildren(false);
	HX_STACK_LINE(458)
	root->set_mouseEnabled(false);
	HX_STACK_LINE(461)
	if ((::scripts::MyAssets_obj::debugDraw)){
		HX_STACK_LINE(462)
		::com::stencyl::Engine_obj::DEBUG_DRAW = true;
	}
	HX_STACK_LINE(466)
	::com::stencyl::Engine_obj::engine = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(467)
	this->root = root;
	HX_STACK_LINE(469)
	::com::stencyl::Engine_obj::screenScaleX = root->get_scaleX();
	HX_STACK_LINE(470)
	::com::stencyl::Engine_obj::screenScaleY = root->get_scaleY();
	HX_STACK_LINE(471)
	::com::stencyl::Engine_obj::screenOffsetX = ::Std_obj::_int(root->get_x());
	HX_STACK_LINE(472)
	::com::stencyl::Engine_obj::screenOffsetY = ::Std_obj::_int(root->get_y());
	HX_STACK_LINE(474)
	::com::stencyl::Engine_obj::NO_PHYSICS = (::scripts::MyAssets_obj::physicsMode == (int)1);
	HX_STACK_LINE(476)
	::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->onUpdate_dyn(),null(),null(),null());
	HX_STACK_LINE(477)
	::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::Event_obj::DEACTIVATE,this->onFocusLost_dyn(),null(),null(),null());
	HX_STACK_LINE(478)
	::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::Event_obj::ACTIVATE,this->onFocus_dyn(),null(),null(),null());
	HX_STACK_LINE(479)
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
		HX_STACK_PUSH("Engine::setOffscreenTolerance","com/stencyl/Engine.hx",3762);
		HX_STACK_THIS(this);
		HX_STACK_ARG(top,"top");
		HX_STACK_ARG(left,"left");
		HX_STACK_ARG(bottom,"bottom");
		HX_STACK_ARG(right,"right");
		HX_STACK_LINE(3763)
		::com::stencyl::Engine_obj::paddingTop = top;
		HX_STACK_LINE(3764)
		::com::stencyl::Engine_obj::paddingLeft = left;
		HX_STACK_LINE(3765)
		::com::stencyl::Engine_obj::paddingBottom = bottom;
		HX_STACK_LINE(3766)
		::com::stencyl::Engine_obj::paddingRight = right;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,setOffscreenTolerance,(void))

Dynamic Engine_obj::getGameAttribute( ::String name){
	HX_STACK_PUSH("Engine::getGameAttribute","com/stencyl/Engine.hx",3753);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(3753)
	return this->gameAttributes->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getGameAttribute,return )

Void Engine_obj::setGameAttribute( ::String name,Dynamic value){
{
		HX_STACK_PUSH("Engine::setGameAttribute","com/stencyl/Engine.hx",3748);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(3749)
		Dynamic value1 = value;		HX_STACK_VAR(value1,"value1");
		HX_STACK_LINE(3749)
		this->gameAttributes->set(name,value1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,setGameAttribute,(void))

int Engine_obj::nextTerrainRegionID( ){
	HX_STACK_PUSH("Engine::nextTerrainRegionID","com/stencyl/Engine.hx",3731);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3732)
	int ID = (int)-1;		HX_STACK_VAR(ID,"ID");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3734);
			{
				HX_STACK_LINE(3734)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->terrainRegions);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",3734);
					{
						HX_STACK_LINE(3734)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(3734)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(3734)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::Terrain > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Terrain >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::com::stencyl::models::Terrain r = __it->next();
		{
			HX_STACK_LINE(3736)
			if (((r == null()))){
				HX_STACK_LINE(3736)
				continue;
			}
			HX_STACK_LINE(3737)
			ID = ::Std_obj::_int(::Math_obj::max(ID,r->ID));
		}
;
	}
	HX_STACK_LINE(3740)
	return (ID + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,nextTerrainRegionID,return )

::haxe::ds::IntMap Engine_obj::getTerrainRegions( ){
	HX_STACK_PUSH("Engine::getTerrainRegions","com/stencyl/Engine.hx",3726);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3726)
	return this->terrainRegions;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getTerrainRegions,return )

::com::stencyl::models::Terrain Engine_obj::getTerrainRegion( int ID){
	HX_STACK_PUSH("Engine::getTerrainRegion","com/stencyl/Engine.hx",3721);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_LINE(3721)
	return this->terrainRegions->get(ID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getTerrainRegion,return )

Void Engine_obj::removeTerrainRegion( int ID){
{
		HX_STACK_PUSH("Engine::removeTerrainRegion","com/stencyl/Engine.hx",3714);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ID,"ID");
		HX_STACK_LINE(3715)
		::com::stencyl::models::Terrain t = this->getTerrainRegion(ID);		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(3716)
		this->terrainRegions->remove(ID);
		HX_STACK_LINE(3717)
		t->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,removeTerrainRegion,(void))

Void Engine_obj::addTerrainRegion( ::com::stencyl::models::Terrain r){
{
		HX_STACK_PUSH("Engine::addTerrainRegion","com/stencyl/Engine.hx",3707);
		HX_STACK_THIS(this);
		HX_STACK_ARG(r,"r");
		HX_STACK_LINE(3708)
		int nextID = this->nextTerrainRegionID();		HX_STACK_VAR(nextID,"nextID");
		HX_STACK_LINE(3709)
		r->ID = nextID;
		HX_STACK_LINE(3710)
		this->terrainRegions->set(nextID,r);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,addTerrainRegion,(void))

::com::stencyl::models::Terrain Engine_obj::createCircularTerrainRegion( Float x,Float y,Float r,hx::Null< int >  __o_groupID){
int groupID = __o_groupID.Default(1);
	HX_STACK_PUSH("Engine::createCircularTerrainRegion","com/stencyl/Engine.hx",3695);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(groupID,"groupID");
{
		HX_STACK_LINE(3696)
		x = ::com::stencyl::Engine_obj::toPhysicalUnits(x);
		HX_STACK_LINE(3697)
		y = ::com::stencyl::Engine_obj::toPhysicalUnits(y);
		HX_STACK_LINE(3698)
		r = ::com::stencyl::Engine_obj::toPhysicalUnits(r);
		HX_STACK_LINE(3700)
		::box2D::collision::shapes::B2CircleShape cShape = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());		HX_STACK_VAR(cShape,"cShape");
		HX_STACK_LINE(3701)
		cShape->m_radius = r;
		HX_STACK_LINE(3703)
		return this->createTerrainRegion(x,y,cShape,true,groupID);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,createCircularTerrainRegion,return )

::com::stencyl::models::Terrain Engine_obj::createBoxTerrainRegion( Float x,Float y,Float w,Float h,hx::Null< int >  __o_groupID){
int groupID = __o_groupID.Default(1);
	HX_STACK_PUSH("Engine::createBoxTerrainRegion","com/stencyl/Engine.hx",3682);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(w,"w");
	HX_STACK_ARG(h,"h");
	HX_STACK_ARG(groupID,"groupID");
{
		HX_STACK_LINE(3683)
		x = ::com::stencyl::Engine_obj::toPhysicalUnits(x);
		HX_STACK_LINE(3684)
		y = ::com::stencyl::Engine_obj::toPhysicalUnits(y);
		HX_STACK_LINE(3685)
		w = ::com::stencyl::Engine_obj::toPhysicalUnits(w);
		HX_STACK_LINE(3686)
		h = ::com::stencyl::Engine_obj::toPhysicalUnits(h);
		HX_STACK_LINE(3688)
		::box2D::collision::shapes::B2PolygonShape p = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(3689)
		p->setAsBox((Float(w) / Float((int)2)),(Float(h) / Float((int)2)));
		HX_STACK_LINE(3691)
		return this->createTerrainRegion(x,y,p,true,groupID);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Engine_obj,createBoxTerrainRegion,return )

::com::stencyl::models::Terrain Engine_obj::createTerrainRegion( Float x,Float y,::box2D::collision::shapes::B2Shape shape,hx::Null< bool >  __o_offset,hx::Null< int >  __o_groupID){
bool offset = __o_offset.Default(false);
int groupID = __o_groupID.Default(1);
	HX_STACK_PUSH("Engine::createTerrainRegion","com/stencyl/Engine.hx",3666);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(shape,"shape");
	HX_STACK_ARG(offset,"offset");
	HX_STACK_ARG(groupID,"groupID");
{
		HX_STACK_LINE(3667)
		Array< ::Dynamic > shapeList = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(shapeList,"shapeList");
		HX_STACK_LINE(3668)
		shapeList->push(shape);
		HX_STACK_LINE(3669)
		::com::stencyl::models::Terrain region = ::com::stencyl::models::Terrain_obj::__new(hx::ObjectPtr<OBJ_>(this),x,y,shapeList,groupID,null());		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(3671)
		if ((offset)){
			HX_STACK_LINE(3673)
			region->setX((::com::stencyl::Engine_obj::toPixelUnits(x) + (Float(region->regionWidth) / Float((int)2))),null(),null());
			HX_STACK_LINE(3674)
			region->setY((::com::stencyl::Engine_obj::toPixelUnits(y) + (Float(region->regionHeight) / Float((int)2))),null(),null());
		}
		HX_STACK_LINE(3677)
		this->addTerrainRegion(region);
		HX_STACK_LINE(3678)
		return region;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Engine_obj,createTerrainRegion,return )

bool Engine_obj::isInRegion( ::com::stencyl::models::Actor a,::com::stencyl::models::Region r){
	HX_STACK_PUSH("Engine::isInRegion","com/stencyl/Engine.hx",3648);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(r,"r");
	HX_STACK_LINE(3648)
	if (((bool((r != null())) && bool((this->regions->get(r->getID()) != null()))))){
		HX_STACK_LINE(3650)
		return r->containsActor(a);
	}
	else{
		HX_STACK_LINE(3656)
		::haxe::Log_obj::trace(HX_CSTRING("Region does not exist."),hx::SourceInfo(HX_CSTRING("Engine.hx"),3656,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("isInRegion")));
		HX_STACK_LINE(3657)
		return false;
	}
	HX_STACK_LINE(3648)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,isInRegion,return )

int Engine_obj::nextRegionID( ){
	HX_STACK_PUSH("Engine::nextRegionID","com/stencyl/Engine.hx",3631);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3632)
	int ID = (int)-1;		HX_STACK_VAR(ID,"ID");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3634);
			{
				HX_STACK_LINE(3634)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->regions);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",3634);
					{
						HX_STACK_LINE(3634)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(3634)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(3634)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::Region > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Region >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::com::stencyl::models::Region r = __it->next();
		{
			HX_STACK_LINE(3636)
			if (((r == null()))){
				HX_STACK_LINE(3637)
				continue;
			}
			HX_STACK_LINE(3641)
			ID = ::Std_obj::_int(::Math_obj::max(ID,r->ID));
		}
;
	}
	HX_STACK_LINE(3644)
	return (ID + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,nextRegionID,return )

::haxe::ds::IntMap Engine_obj::getRegions( ){
	HX_STACK_PUSH("Engine::getRegions","com/stencyl/Engine.hx",3626);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3626)
	return this->regions;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getRegions,return )

::com::stencyl::models::Region Engine_obj::getRegion( int ID){
	HX_STACK_PUSH("Engine::getRegion","com/stencyl/Engine.hx",3621);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_LINE(3621)
	return this->regions->get(ID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getRegion,return )

Void Engine_obj::removeRegion( int ID){
{
		HX_STACK_PUSH("Engine::removeRegion","com/stencyl/Engine.hx",3609);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ID,"ID");
		HX_STACK_LINE(3610)
		::com::stencyl::models::Region r = this->getRegion(ID);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(3611)
		this->regions->remove(r->ID);
		HX_STACK_LINE(3612)
		r->destroy();
		HX_STACK_LINE(3614)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(3615)
			this->groups->get(::com::stencyl::models::GameModel_obj::REGION_ID)->__Field(HX_CSTRING("removeChild"),true)(r);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,removeRegion,(void))

Void Engine_obj::addRegion( ::com::stencyl::models::Region r){
{
		HX_STACK_PUSH("Engine::addRegion","com/stencyl/Engine.hx",3597);
		HX_STACK_THIS(this);
		HX_STACK_ARG(r,"r");
		HX_STACK_LINE(3598)
		int nextID = this->nextRegionID();		HX_STACK_VAR(nextID,"nextID");
		HX_STACK_LINE(3599)
		r->ID = nextID;
		HX_STACK_LINE(3600)
		this->regions->set(nextID,r);
		HX_STACK_LINE(3602)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(3603)
			this->groups->get(::com::stencyl::models::GameModel_obj::REGION_ID)->__Field(HX_CSTRING("addChild"),true)(r);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,addRegion,(void))

::com::stencyl::models::Region Engine_obj::createCircularRegion( Float x,Float y,Float r){
	HX_STACK_PUSH("Engine::createCircularRegion","com/stencyl/Engine.hx",3576);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(r,"r");
	HX_STACK_LINE(3577)
	x = ::com::stencyl::Engine_obj::toPhysicalUnits(x);
	HX_STACK_LINE(3578)
	y = ::com::stencyl::Engine_obj::toPhysicalUnits(y);
	HX_STACK_LINE(3579)
	r = ::com::stencyl::Engine_obj::toPhysicalUnits(r);
	HX_STACK_LINE(3581)
	if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
		HX_STACK_LINE(3583)
		::com::stencyl::models::Region region = ::com::stencyl::models::Region_obj::__new(hx::ObjectPtr<OBJ_>(this),x,y,Array_obj< ::Dynamic >::__new(),::flash::geom::Rectangle_obj::__new((int)0,(int)0,(r * (int)2),(r * (int)2)));		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(3584)
		this->addRegion(region);
		HX_STACK_LINE(3585)
		return region;
	}
	else{
		HX_STACK_LINE(3590)
		::box2D::collision::shapes::B2CircleShape cShape = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());		HX_STACK_VAR(cShape,"cShape");
		HX_STACK_LINE(3591)
		cShape->m_radius = r;
		HX_STACK_LINE(3592)
		return this->createRegion(x,y,cShape,true);
	}
	HX_STACK_LINE(3581)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,createCircularRegion,return )

::com::stencyl::models::Region Engine_obj::createBoxRegion( Float x,Float y,Float w,Float h){
	HX_STACK_PUSH("Engine::createBoxRegion","com/stencyl/Engine.hx",3554);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(w,"w");
	HX_STACK_ARG(h,"h");
	HX_STACK_LINE(3555)
	x = ::com::stencyl::Engine_obj::toPhysicalUnits(x);
	HX_STACK_LINE(3556)
	y = ::com::stencyl::Engine_obj::toPhysicalUnits(y);
	HX_STACK_LINE(3557)
	w = ::com::stencyl::Engine_obj::toPhysicalUnits(w);
	HX_STACK_LINE(3558)
	h = ::com::stencyl::Engine_obj::toPhysicalUnits(h);
	HX_STACK_LINE(3560)
	if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
		HX_STACK_LINE(3562)
		::com::stencyl::models::Region region = ::com::stencyl::models::Region_obj::__new(hx::ObjectPtr<OBJ_>(this),x,y,Array_obj< ::Dynamic >::__new(),::flash::geom::Rectangle_obj::__new((int)0,(int)0,w,h));		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(3563)
		this->addRegion(region);
		HX_STACK_LINE(3564)
		return region;
	}
	else{
		HX_STACK_LINE(3569)
		::box2D::collision::shapes::B2PolygonShape p = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(3570)
		p->setAsBox((Float(w) / Float((int)2)),(Float(h) / Float((int)2)));
		HX_STACK_LINE(3571)
		return this->createRegion(x,y,p,true);
	}
	HX_STACK_LINE(3560)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,createBoxRegion,return )

::com::stencyl::models::Region Engine_obj::createRegion( Float x,Float y,::box2D::collision::shapes::B2Shape shape,hx::Null< bool >  __o_offset){
bool offset = __o_offset.Default(false);
	HX_STACK_PUSH("Engine::createRegion","com/stencyl/Engine.hx",3538);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(shape,"shape");
	HX_STACK_ARG(offset,"offset");
{
		HX_STACK_LINE(3539)
		Array< ::Dynamic > shapeList = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(shapeList,"shapeList");
		HX_STACK_LINE(3540)
		shapeList->push(shape);
		HX_STACK_LINE(3541)
		::com::stencyl::models::Region region = ::com::stencyl::models::Region_obj::__new(hx::ObjectPtr<OBJ_>(this),x,y,shapeList,null());		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(3543)
		if ((offset)){
			HX_STACK_LINE(3545)
			region->setX((::com::stencyl::Engine_obj::toPixelUnits(x) + (Float(region->regionWidth) / Float((int)2))),null(),null());
			HX_STACK_LINE(3546)
			region->setY((::com::stencyl::Engine_obj::toPixelUnits(y) + (Float(region->regionHeight) / Float((int)2))),null(),null());
		}
		HX_STACK_LINE(3549)
		this->addRegion(region);
		HX_STACK_LINE(3550)
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
	HX_STACK_PUSH("Engine::createSlidingJoint","com/stencyl/Engine.hx",3469);
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
		HX_STACK_LINE(3470)
		if (((two == null()))){
			HX_STACK_LINE(3471)
			two = this->world->m_groundBody;
		}
		HX_STACK_LINE(3475)
		if (((dir == null()))){
			HX_STACK_LINE(3476)
			dir = ::box2D::common::math::B2Vec2_obj::__new((int)1,(int)0);
		}
		HX_STACK_LINE(3480)
		dir->normalize();
		HX_STACK_LINE(3482)
		::box2D::common::math::B2Vec2 pt1 = one->getWorldCenter();		HX_STACK_VAR(pt1,"pt1");
		HX_STACK_LINE(3483)
		::box2D::common::math::B2Vec2 pt2 = two->getWorldCenter();		HX_STACK_VAR(pt2,"pt2");
		HX_STACK_LINE(3486)
		if (((one->getType() == (int)0))){
			HX_STACK_LINE(3487)
			if (((hx::TCast< com::stencyl::models::Actor >::cast(one->getUserData()) != null()))){
				HX_STACK_LINE(3490)
				pt1->x = (Float((hx::TCast< com::stencyl::models::Actor >::cast(one->getUserData()))->getPhysicsWidth()) / Float((int)2));
				HX_STACK_LINE(3491)
				pt1->y = (Float((hx::TCast< com::stencyl::models::Actor >::cast(one->getUserData()))->getPhysicsHeight()) / Float((int)2));
				HX_STACK_LINE(3492)
				pt1 = one->getWorldPoint(pt1);
			}
		}
		HX_STACK_LINE(3496)
		if (((two->getType() == (int)0))){
			HX_STACK_LINE(3497)
			if (((hx::TCast< com::stencyl::models::Actor >::cast(two->getUserData()) != null()))){
				HX_STACK_LINE(3500)
				pt2->x = (Float((hx::TCast< com::stencyl::models::Actor >::cast(two->getUserData()))->getPhysicsWidth()) / Float((int)2));
				HX_STACK_LINE(3501)
				pt2->y = (Float((hx::TCast< com::stencyl::models::Actor >::cast(two->getUserData()))->getPhysicsHeight()) / Float((int)2));
				HX_STACK_LINE(3502)
				pt2 = two->getWorldPoint(pt2);
			}
		}
		HX_STACK_LINE(3506)
		::box2D::dynamics::joints::B2LineJointDef pjd = ::box2D::dynamics::joints::B2LineJointDef_obj::__new();		HX_STACK_VAR(pjd,"pjd");
		HX_STACK_LINE(3507)
		pjd->initialize(one,two,pt1,dir);
		HX_STACK_LINE(3509)
		pjd->collideConnected = collide;
		HX_STACK_LINE(3510)
		pjd->enableLimit = limit;
		HX_STACK_LINE(3511)
		pjd->enableMotor = motor;
		HX_STACK_LINE(3512)
		pjd->lowerTranslation = ::com::stencyl::Engine_obj::toPhysicalUnits(lower);
		HX_STACK_LINE(3513)
		pjd->upperTranslation = ::com::stencyl::Engine_obj::toPhysicalUnits(upper);
		HX_STACK_LINE(3514)
		pjd->maxMotorForce = force;
		HX_STACK_LINE(3515)
		pjd->motorSpeed = ::com::stencyl::Engine_obj::toPhysicalUnits(speed);
		HX_STACK_LINE(3517)
		::box2D::dynamics::joints::B2Joint toReturn = this->world->createJoint(pjd);		HX_STACK_VAR(toReturn,"toReturn");
		HX_STACK_LINE(3519)
		if (((jointID == (int)-1))){
			HX_STACK_LINE(3520)
			this->addJoint(toReturn);
		}
		else{
			HX_STACK_LINE(3526)
			this->joints->set(jointID,toReturn);
			HX_STACK_LINE(3527)
			toReturn->ID = jointID;
		}
		HX_STACK_LINE(3530)
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
	HX_STACK_PUSH("Engine::createHingeJoint","com/stencyl/Engine.hx",3408);
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
		HX_STACK_LINE(3409)
		if (((two == null()))){
			HX_STACK_LINE(3410)
			two = this->world->m_groundBody;
		}
		HX_STACK_LINE(3414)
		if (((pt == null()))){
			HX_STACK_LINE(3415)
			pt = one->getLocalCenter();
		}
		HX_STACK_LINE(3419)
		::box2D::dynamics::joints::B2RevoluteJointDef jd = ::box2D::dynamics::joints::B2RevoluteJointDef_obj::__new();		HX_STACK_VAR(jd,"jd");
		HX_STACK_LINE(3421)
		jd->bodyA = one;
		HX_STACK_LINE(3422)
		jd->bodyB = two;
		HX_STACK_LINE(3424)
		pt->x = ::com::stencyl::Engine_obj::toPhysicalUnits(pt->x);
		HX_STACK_LINE(3425)
		pt->y = ::com::stencyl::Engine_obj::toPhysicalUnits(pt->y);
		HX_STACK_LINE(3427)
		jd->localAnchorA = pt;
		HX_STACK_LINE(3428)
		jd->localAnchorB = two->getLocalPoint(one->getWorldPoint(pt));
		HX_STACK_LINE(3429)
		jd->collideConnected = collide;
		HX_STACK_LINE(3430)
		jd->enableLimit = limit;
		HX_STACK_LINE(3431)
		jd->enableMotor = motor;
		HX_STACK_LINE(3432)
		jd->lowerAngle = lower;
		HX_STACK_LINE(3433)
		jd->upperAngle = upper;
		HX_STACK_LINE(3434)
		jd->maxMotorTorque = torque;
		HX_STACK_LINE(3435)
		jd->motorSpeed = speed;
		HX_STACK_LINE(3437)
		::box2D::dynamics::joints::B2Joint toReturn = this->world->createJoint(jd);		HX_STACK_VAR(toReturn,"toReturn");
		HX_STACK_LINE(3439)
		if (((jointID == (int)-1))){
			HX_STACK_LINE(3440)
			this->addJoint(toReturn);
		}
		else{
			HX_STACK_LINE(3446)
			this->joints->set(jointID,toReturn);
			HX_STACK_LINE(3447)
			toReturn->ID = jointID;
		}
		HX_STACK_LINE(3450)
		return hx::TCast< box2D::dynamics::joints::B2RevoluteJoint >::cast(toReturn);
	}
}


HX_DEFINE_DYNAMIC_FUNC11(Engine_obj,createHingeJoint,return )

::box2D::dynamics::joints::B2DistanceJoint Engine_obj::createCustomStickJoint( ::box2D::dynamics::B2Body one,Float x1,Float y1,::box2D::dynamics::B2Body two,Float x2,Float y2){
	HX_STACK_PUSH("Engine::createCustomStickJoint","com/stencyl/Engine.hx",3371);
	HX_STACK_THIS(this);
	HX_STACK_ARG(one,"one");
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(two,"two");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
	HX_STACK_LINE(3372)
	::box2D::common::math::B2Vec2 v1 = ::box2D::common::math::B2Vec2_obj::__new(x1,y1);		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(3373)
	::box2D::common::math::B2Vec2 v2 = ::box2D::common::math::B2Vec2_obj::__new(x2,y2);		HX_STACK_VAR(v2,"v2");
	HX_STACK_LINE(3375)
	v1->x = ::com::stencyl::Engine_obj::toPhysicalUnits(v1->x);
	HX_STACK_LINE(3376)
	v1->y = ::com::stencyl::Engine_obj::toPhysicalUnits(v1->y);
	HX_STACK_LINE(3377)
	v2->x = ::com::stencyl::Engine_obj::toPhysicalUnits(v2->x);
	HX_STACK_LINE(3378)
	v2->y = ::com::stencyl::Engine_obj::toPhysicalUnits(v2->y);
	HX_STACK_LINE(3380)
	v1 = one->getWorldPoint(v1);
	HX_STACK_LINE(3381)
	v2 = two->getWorldPoint(v2);
	HX_STACK_LINE(3383)
	::box2D::dynamics::joints::B2DistanceJointDef jd = ::box2D::dynamics::joints::B2DistanceJointDef_obj::__new();		HX_STACK_VAR(jd,"jd");
	HX_STACK_LINE(3384)
	jd->initialize(one,two,v1,v2);
	HX_STACK_LINE(3386)
	::box2D::dynamics::joints::B2Joint toReturn = this->world->createJoint(jd);		HX_STACK_VAR(toReturn,"toReturn");
	HX_STACK_LINE(3387)
	this->addJoint(toReturn);
	HX_STACK_LINE(3389)
	return hx::TCast< box2D::dynamics::joints::B2DistanceJoint >::cast(toReturn);
}


HX_DEFINE_DYNAMIC_FUNC6(Engine_obj,createCustomStickJoint,return )

::box2D::dynamics::joints::B2DistanceJoint Engine_obj::createStickJoint( ::box2D::dynamics::B2Body one,::box2D::dynamics::B2Body two,hx::Null< int >  __o_jointID,hx::Null< bool >  __o_collide,hx::Null< Float >  __o_damping,hx::Null< Float >  __o_frequencyHz){
int jointID = __o_jointID.Default(-1);
bool collide = __o_collide.Default(false);
Float damping = __o_damping.Default(0);
Float frequencyHz = __o_frequencyHz.Default(0);
	HX_STACK_PUSH("Engine::createStickJoint","com/stencyl/Engine.hx",3321);
	HX_STACK_THIS(this);
	HX_STACK_ARG(one,"one");
	HX_STACK_ARG(two,"two");
	HX_STACK_ARG(jointID,"jointID");
	HX_STACK_ARG(collide,"collide");
	HX_STACK_ARG(damping,"damping");
	HX_STACK_ARG(frequencyHz,"frequencyHz");
{
		HX_STACK_LINE(3322)
		::box2D::common::math::B2Vec2 v1 = one->getLocalCenter();		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(3323)
		::box2D::common::math::B2Vec2 v2 = two->getLocalCenter();		HX_STACK_VAR(v2,"v2");
		HX_STACK_LINE(3325)
		if (((one->getType() == (int)0))){
			HX_STACK_LINE(3327)
			v1->x = (Float((hx::TCast< com::stencyl::models::Actor >::cast(one->getUserData()))->getPhysicsWidth()) / Float((int)2));
			HX_STACK_LINE(3328)
			v1->y = (Float((hx::TCast< com::stencyl::models::Actor >::cast(one->getUserData()))->getPhysicsHeight()) / Float((int)2));
		}
		HX_STACK_LINE(3331)
		if (((two->getType() == (int)0))){
			HX_STACK_LINE(3333)
			v2->x = (Float((hx::TCast< com::stencyl::models::Actor >::cast(two->getUserData()))->getPhysicsWidth()) / Float((int)2));
			HX_STACK_LINE(3334)
			v2->y = (Float((hx::TCast< com::stencyl::models::Actor >::cast(two->getUserData()))->getPhysicsHeight()) / Float((int)2));
		}
		HX_STACK_LINE(3337)
		v1 = one->getWorldPoint(v1);
		HX_STACK_LINE(3338)
		v2 = two->getWorldPoint(v2);
		HX_STACK_LINE(3340)
		::box2D::dynamics::joints::B2DistanceJointDef jd = ::box2D::dynamics::joints::B2DistanceJointDef_obj::__new();		HX_STACK_VAR(jd,"jd");
		HX_STACK_LINE(3341)
		jd->initialize(one,two,v1,v2);
		HX_STACK_LINE(3342)
		jd->collideConnected = collide;
		HX_STACK_LINE(3343)
		jd->dampingRatio = damping;
		HX_STACK_LINE(3344)
		jd->frequencyHz = frequencyHz;
		HX_STACK_LINE(3346)
		::box2D::dynamics::joints::B2Joint toReturn = this->world->createJoint(jd);		HX_STACK_VAR(toReturn,"toReturn");
		HX_STACK_LINE(3348)
		if (((jointID == (int)-1))){
			HX_STACK_LINE(3349)
			this->addJoint(toReturn);
		}
		else{
			HX_STACK_LINE(3355)
			this->joints->set(jointID,toReturn);
			HX_STACK_LINE(3356)
			toReturn->ID = jointID;
		}
		HX_STACK_LINE(3359)
		return hx::TCast< box2D::dynamics::joints::B2DistanceJoint >::cast(toReturn);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(Engine_obj,createStickJoint,return )

Void Engine_obj::destroyJoint( ::box2D::dynamics::joints::B2Joint j){
{
		HX_STACK_PUSH("Engine::destroyJoint","com/stencyl/Engine.hx",3305);
		HX_STACK_THIS(this);
		HX_STACK_ARG(j,"j");
		HX_STACK_LINE(3306)
		this->joints->remove(j->ID);
		HX_STACK_LINE(3307)
		this->world->destroyJoint(j);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,destroyJoint,(void))

::box2D::dynamics::joints::B2Joint Engine_obj::getJoint( int ID){
	HX_STACK_PUSH("Engine::getJoint","com/stencyl/Engine.hx",3300);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_LINE(3300)
	return this->joints->get(ID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getJoint,return )

Void Engine_obj::addJoint( ::box2D::dynamics::joints::B2Joint j){
{
		HX_STACK_PUSH("Engine::addJoint","com/stencyl/Engine.hx",3293);
		HX_STACK_THIS(this);
		HX_STACK_ARG(j,"j");
		HX_STACK_LINE(3294)
		int nextID = this->nextJointID();		HX_STACK_VAR(nextID,"nextID");
		HX_STACK_LINE(3295)
		j->ID = nextID;
		HX_STACK_LINE(3296)
		this->joints->set(nextID,j);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,addJoint,(void))

int Engine_obj::nextJointID( ){
	HX_STACK_PUSH("Engine::nextJointID","com/stencyl/Engine.hx",3276);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3277)
	int ID = (int)-1;		HX_STACK_VAR(ID,"ID");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3279);
			{
				HX_STACK_LINE(3279)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->joints);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",3279);
					{
						HX_STACK_LINE(3279)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(3279)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(3279)
	for(::cpp::FastIterator_obj< ::box2D::dynamics::joints::B2Joint > *__it = ::cpp::CreateFastIterator< ::box2D::dynamics::joints::B2Joint >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::box2D::dynamics::joints::B2Joint j = __it->next();
		{
			HX_STACK_LINE(3281)
			if (((j == null()))){
				HX_STACK_LINE(3282)
				continue;
			}
			HX_STACK_LINE(3286)
			ID = ::Std_obj::_int(::Math_obj::max(ID,j->ID));
		}
;
	}
	HX_STACK_LINE(3289)
	return (ID + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,nextJointID,return )

::com::stencyl::models::actor::Group Engine_obj::getGroupByName( ::String groupName){
	HX_STACK_PUSH("Engine::getGroupByName","com/stencyl/Engine.hx",3260);
	HX_STACK_THIS(this);
	HX_STACK_ARG(groupName,"groupName");
	HX_STACK_LINE(3261)
	::com::stencyl::models::actor::Group group = this->reverseGroups->get(groupName);		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(3263)
	if (((group == null()))){
		HX_STACK_LINE(3264)
		return this->groups->get(::com::stencyl::models::GameModel_obj::ACTOR_ID);
	}
	HX_STACK_LINE(3268)
	return group;
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getGroupByName,return )

::com::stencyl::models::actor::Group Engine_obj::getGroup( int ID,::com::stencyl::models::Actor a){
	HX_STACK_PUSH("Engine::getGroup","com/stencyl/Engine.hx",3250);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_ARG(a,"a");
	HX_STACK_LINE(3251)
	if (((bool((ID == ::com::stencyl::models::GameModel_obj::INHERIT_ID)) && bool((a != null()))))){
		HX_STACK_LINE(3252)
		return this->groups->get(a->getGroupID());
	}
	HX_STACK_LINE(3256)
	return this->groups->get(ID);
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,getGroup,return )

Void Engine_obj::disableGlobalSleeping( ){
{
		HX_STACK_PUSH("Engine::disableGlobalSleeping","com/stencyl/Engine.hx",3241);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3241)
		this->world->m_allowSleep = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,disableGlobalSleeping,(void))

Void Engine_obj::enableGlobalSleeping( ){
{
		HX_STACK_PUSH("Engine::enableGlobalSleeping","com/stencyl/Engine.hx",3236);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3236)
		this->world->m_allowSleep = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,enableGlobalSleeping,(void))

Float Engine_obj::getPhysicalHeight( ){
	HX_STACK_PUSH("Engine::getPhysicalHeight","com/stencyl/Engine.hx",3201);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3201)
	return this->physicalHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getPhysicalHeight,return )

Float Engine_obj::getPhysicalWidth( ){
	HX_STACK_PUSH("Engine::getPhysicalWidth","com/stencyl/Engine.hx",3196);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3196)
	return this->physicalWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getPhysicalWidth,return )

int Engine_obj::getIDFromLayerOrder( int layerOrder){
	HX_STACK_PUSH("Engine::getIDFromLayerOrder","com/stencyl/Engine.hx",3187);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layerOrder,"layerOrder");
	HX_STACK_LINE(3187)
	return this->layersToDraw->get((layerOrder - (int)1));
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getIDFromLayerOrder,return )

int Engine_obj::getOrderForLayerID( int layerID){
	HX_STACK_PUSH("Engine::getOrderForLayerID","com/stencyl/Engine.hx",3182);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layerID,"layerID");
	HX_STACK_LINE(3182)
	return this->layerOrders->get(layerID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getOrderForLayerID,return )

Void Engine_obj::bringForward( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::bringForward","com/stencyl/Engine.hx",3168);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3169)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(3171)
		int order = this->getOrderForLayerID(a->layerID);		HX_STACK_VAR(order,"order");
		HX_STACK_LINE(3173)
		if (((order > (int)0))){
			HX_STACK_LINE(3174)
			a->layerID = this->layersToDraw->get((order - (int)1));
		}
		HX_STACK_LINE(3178)
		this->moveActorToLayer(a,a->layerID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,bringForward,(void))

Void Engine_obj::bringToFront( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::bringToFront","com/stencyl/Engine.hx",3161);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3162)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(3163)
		a->layerID = this->getTopLayer();
		HX_STACK_LINE(3164)
		this->moveActorToLayer(a,a->layerID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,bringToFront,(void))

Void Engine_obj::sendBackward( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::sendBackward","com/stencyl/Engine.hx",3146);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3147)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(3149)
		int order = this->getOrderForLayerID(a->layerID);		HX_STACK_VAR(order,"order");
		HX_STACK_LINE(3152)
		if (((order < (::Lambda_obj::count(this->layersToDraw,null()) - (int)1)))){
			HX_STACK_LINE(3153)
			a->layerID = this->layersToDraw->get((order + (int)1));
		}
		HX_STACK_LINE(3157)
		this->moveActorToLayer(a,a->layerID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,sendBackward,(void))

Void Engine_obj::sendToBack( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::sendToBack","com/stencyl/Engine.hx",3139);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3140)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(3141)
		a->layerID = this->getBottomLayer();
		HX_STACK_LINE(3142)
		this->moveActorToLayer(a,a->layerID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,sendToBack,(void))

Void Engine_obj::moveToLayer( ::com::stencyl::models::Actor a,int layerID){
{
		HX_STACK_PUSH("Engine::moveToLayer","com/stencyl/Engine.hx",3119);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_LINE(3120)
		int lID = layerID;		HX_STACK_VAR(lID,"lID");
		HX_STACK_LINE(3123)
		if (((bool((lID < (int)0)) || bool((lID > (::Lambda_obj::count(this->layersToDraw,null()) - (int)1)))))){
			HX_STACK_LINE(3124)
			return null();
		}
		HX_STACK_LINE(3128)
		if (((a->layerID == layerID))){
			HX_STACK_LINE(3129)
			return null();
		}
		HX_STACK_LINE(3133)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(3134)
		a->layerID = lID;
		HX_STACK_LINE(3135)
		this->moveActorToLayer(a,lID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,moveToLayer,(void))

Void Engine_obj::removeHUDActor( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::removeHUDActor","com/stencyl/Engine.hx",3109);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3109)
		this->hudActors->remove(a->ID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,removeHUDActor,(void))

Void Engine_obj::addHUDActor( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::addHUDActor","com/stencyl/Engine.hx",3104);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3104)
		this->hudActors->set(a->ID,a);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,addHUDActor,(void))

Array< ::Dynamic > Engine_obj::getRecycledActorsOfType( ::com::stencyl::models::actor::ActorType type){
	HX_STACK_PUSH("Engine::getRecycledActorsOfType","com/stencyl/Engine.hx",3099);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(3099)
	return this->recycledActorsOfType->get(type->ID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getRecycledActorsOfType,return )

Array< ::Dynamic > Engine_obj::getActorsOfType( ::com::stencyl::models::actor::ActorType type){
	HX_STACK_PUSH("Engine::getActorsOfType","com/stencyl/Engine.hx",3078);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(3079)
	if (((type == null()))){
		HX_STACK_LINE(3081)
		::haxe::Log_obj::trace(HX_CSTRING("Error: getActorsOfType was passed a null type"),hx::SourceInfo(HX_CSTRING("Engine.hx"),3081,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("getActorsOfType")));
		HX_STACK_LINE(3082)
		return Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(3085)
	Array< ::Dynamic > result = this->actorsOfType->get(type->ID);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(3087)
	if (((result != null()))){
		HX_STACK_LINE(3088)
		return this->actorsOfType->get(type->ID);
	}
	else{
		HX_STACK_LINE(3093)
		return Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(3087)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getActorsOfType,return )

::com::stencyl::models::Actor Engine_obj::getActor( int ID){
	HX_STACK_PUSH("Engine::getActor","com/stencyl/Engine.hx",3073);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_LINE(3073)
	return this->allActors->get(ID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getActor,return )

Dynamic Engine_obj::shout( ::String msg,Dynamic args){
	HX_STACK_PUSH("Engine::shout","com/stencyl/Engine.hx",3064);
	HX_STACK_THIS(this);
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(3064)
	return this->behaviors->call(msg,args);
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,shout,return )

Dynamic Engine_obj::say( ::String behaviorName,::String msg,Dynamic args){
	HX_STACK_PUSH("Engine::say","com/stencyl/Engine.hx",3059);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(3059)
	return this->behaviors->call2(behaviorName,msg,args);
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,say,return )

Void Engine_obj::setValue( ::String behaviorName,::String attributeName,Dynamic value){
{
		HX_STACK_PUSH("Engine::setValue","com/stencyl/Engine.hx",3054);
		HX_STACK_THIS(this);
		HX_STACK_ARG(behaviorName,"behaviorName");
		HX_STACK_ARG(attributeName,"attributeName");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(3054)
		this->behaviors->setAttribute(behaviorName,attributeName,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,setValue,(void))

Dynamic Engine_obj::getValue( ::String behaviorName,::String attributeName){
	HX_STACK_PUSH("Engine::getValue","com/stencyl/Engine.hx",3049);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(attributeName,"attributeName");
	HX_STACK_LINE(3049)
	return this->behaviors->getAttribute(behaviorName,attributeName);
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,getValue,return )

Void Engine_obj::draw( ){
{
		HX_STACK_PUSH("Engine::draw","com/stencyl/Engine.hx",2933);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2934);
				{
					HX_STACK_LINE(2934)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->layers);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",2934);
						{
							HX_STACK_LINE(2934)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(2934)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(2934)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::Layer > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::Layer >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::scene::Layer l = __it->next();
			{
				HX_STACK_LINE(2936)
				l->overlay->get_graphics()->clear();
				HX_STACK_LINE(2948)
				l->bitmapOverlay->__Field(HX_CSTRING("graphics"),true)->__Field(HX_CSTRING("clear"),true)();
			}
;
		}
		struct _Function_1_2{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2953);
				{
					HX_STACK_LINE(2953)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->hudActors);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",2953);
						{
							HX_STACK_LINE(2953)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(2953)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(2953)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >((_Function_1_2::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::Actor a = __it->next();
			if (((bool(a->dead) || bool(a->recycled)))){
				HX_STACK_LINE(2956)
				this->hudActors->remove(a->ID);
			}
;
		}
		struct _Function_1_3{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2963);
				{
					HX_STACK_LINE(2963)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->allActors);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",2963);
						{
							HX_STACK_LINE(2963)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(2963)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(2963)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >((_Function_1_3::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::Actor a = __it->next();
			if (((a->whenDrawingListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
				HX_STACK_LINE(2967)
				::com::stencyl::models::scene::Layer layer = this->layers->get(a->layerID);		HX_STACK_VAR(layer,"layer");
				HX_STACK_LINE(2969)
				if (((layer != null()))){
					HX_STACK_LINE(2971)
					layer->drawnOn = true;
					HX_STACK_LINE(2973)
					this->g->graphics = layer->overlay->get_graphics();
					HX_STACK_LINE(2980)
					this->g->canvas = layer->bitmapOverlay;
					HX_STACK_LINE(2983)
					{
						HX_STACK_LINE(2983)
						::com::stencyl::graphics::G _this = this->g;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2983)
						_this->drawActor = true;
						HX_STACK_LINE(2983)
						_this->actor = a;
						HX_STACK_LINE(2983)
						if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
							HX_STACK_LINE(2983)
							_this->x = (a->colX * _this->scaleX);
							HX_STACK_LINE(2983)
							_this->y = (a->colY * _this->scaleY);
						}
						else{
							HX_STACK_LINE(2983)
							_this->x = (a->colX * _this->scaleX);
							HX_STACK_LINE(2983)
							_this->y = (a->colY * _this->scaleY);
						}
					}
					HX_STACK_LINE(2984)
					{
						HX_STACK_LINE(2984)
						::com::stencyl::graphics::G _this = this->g;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2984)
						_this->alpha = (int)1;
						HX_STACK_LINE(2984)
						_this->strokeSize = (int)0;
						HX_STACK_LINE(2984)
						_this->fillColor = (int)0;
						HX_STACK_LINE(2984)
						_this->strokeColor = (int)0;
						HX_STACK_LINE(2984)
						_this->font = _this->defaultFont;
					}
					HX_STACK_LINE(2985)
					{
						HX_STACK_LINE(2985)
						Dynamic listeners = a->whenDrawingListeners;		HX_STACK_VAR(listeners,"listeners");
						Dynamic value = this->g;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(2985)
						int r = (int)0;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(2985)
						while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
							HX_STACK_LINE(2985)
							try{
								HX_STACK_LINE(2985)
								Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(2985)
								f(value,(int)0,(int)0,listeners).Cast< Void >();
								HX_STACK_LINE(2985)
								if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
									HX_STACK_LINE(2985)
									(r)--;
								}
							}
							catch(Dynamic __e){
								if (__e.IsClass< ::String >() ){
									HX_STACK_BEGIN_CATCH
									::String e = __e;{
										HX_STACK_LINE(2985)
										::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3874,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners4")));
									}
								}
								else throw(__e);
							}
							HX_STACK_LINE(2985)
							(r)++;
						}
					}
				}
			}
;
		}
		struct _Function_1_4{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2993);
				{
					HX_STACK_LINE(2993)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->tileLayers);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",2993);
						{
							HX_STACK_LINE(2993)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(2993)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(2993)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::TileLayer > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::TileLayer >((_Function_1_4::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::scene::TileLayer layer = __it->next();
			{
				HX_STACK_LINE(2995)
				if (((bool(this->cameraMoved) || bool(this->tileUpdated)))){
					HX_STACK_LINE(2996)
					layer->draw(::Std_obj::_int(::com::stencyl::Engine_obj::cameraX),::Std_obj::_int(::com::stencyl::Engine_obj::cameraY));
				}
				HX_STACK_LINE(3000)
				layer->setPosition(::com::stencyl::Engine_obj::cameraX,::com::stencyl::Engine_obj::cameraY);
			}
;
		}
		HX_STACK_LINE(3003)
		this->tileUpdated = false;
		HX_STACK_LINE(3007)
		this->g->graphics = this->transitionLayer->get_graphics();
		HX_STACK_LINE(3014)
		this->g->canvas = this->transitionBitmapLayer;
		HX_STACK_LINE(3017)
		{
			HX_STACK_LINE(3017)
			::com::stencyl::graphics::G _this = this->g;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(3017)
			_this->drawActor = false;
			HX_STACK_LINE(3017)
			_this->actor = null();
			HX_STACK_LINE(3017)
			_this->x = (int)0;
			HX_STACK_LINE(3017)
			_this->y = (int)0;
		}
		HX_STACK_LINE(3018)
		this->g->graphics->clear();
		HX_STACK_LINE(3025)
		this->g->canvas->__Field(HX_CSTRING("graphics"),true)->__Field(HX_CSTRING("clear"),true)();
		HX_STACK_LINE(3028)
		{
			HX_STACK_LINE(3028)
			::com::stencyl::graphics::G _this = this->g;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(3028)
			_this->alpha = (int)1;
			HX_STACK_LINE(3028)
			_this->strokeSize = (int)0;
			HX_STACK_LINE(3028)
			_this->fillColor = (int)0;
			HX_STACK_LINE(3028)
			_this->strokeColor = (int)0;
			HX_STACK_LINE(3028)
			_this->font = _this->defaultFont;
		}
		HX_STACK_LINE(3029)
		{
			HX_STACK_LINE(3029)
			Dynamic listeners = this->whenDrawingListeners;		HX_STACK_VAR(listeners,"listeners");
			Dynamic value = this->g;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(3029)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(3029)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(3029)
				try{
					HX_STACK_LINE(3029)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(3029)
					f(value,(int)0,(int)0,listeners).Cast< Void >();
					HX_STACK_LINE(3029)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(3029)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(3029)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3874,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners4")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(3029)
				(r)++;
			}
		}
		HX_STACK_LINE(3032)
		if (((bool((this->leave != null())) && bool(this->leave->isActive())))){
			HX_STACK_LINE(3033)
			this->leave->draw(null());
		}
		else{
			HX_STACK_LINE(3038)
			if (((bool((this->enter != null())) && bool(this->enter->isActive())))){
				HX_STACK_LINE(3039)
				this->enter->draw(null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,draw,(void))

bool Engine_obj::isPaused( ){
	HX_STACK_PUSH("Engine::isPaused","com/stencyl/Engine.hx",2897);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2897)
	return ::com::stencyl::Engine_obj::paused;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,isPaused,return )

Void Engine_obj::unpause( ){
{
		HX_STACK_PUSH("Engine::unpause","com/stencyl/Engine.hx",2882);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2883)
		::com::stencyl::Engine_obj::paused = false;
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2885);
				{
					HX_STACK_LINE(2885)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->allActors);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",2885);
						{
							HX_STACK_LINE(2885)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(2885)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(2885)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::Actor a = __it->next();
			if (((a != null()))){
				HX_STACK_LINE(2888)
				a->unpause();
			}
;
		}
		HX_STACK_LINE(2893)
		{
			HX_STACK_LINE(2893)
			Dynamic listeners = this->whenPausedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2893)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2893)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2893)
				try{
					HX_STACK_LINE(2893)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2893)
					f(false,listeners).Cast< Void >();
					HX_STACK_LINE(2893)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2893)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2893)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2893)
				(r)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,unpause,(void))

Void Engine_obj::pause( ){
{
		HX_STACK_PUSH("Engine::pause","com/stencyl/Engine.hx",2862);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2863)
		if ((this->isTransitioning())){
			HX_STACK_LINE(2864)
			return null();
		}
		HX_STACK_LINE(2868)
		::com::stencyl::Engine_obj::paused = true;
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2870);
				{
					HX_STACK_LINE(2870)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->allActors);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",2870);
						{
							HX_STACK_LINE(2870)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(2870)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(2870)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::Actor a = __it->next();
			if (((a != null()))){
				HX_STACK_LINE(2873)
				a->pause();
			}
;
		}
		HX_STACK_LINE(2878)
		{
			HX_STACK_LINE(2878)
			Dynamic listeners = this->whenPausedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2878)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2878)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2878)
				try{
					HX_STACK_LINE(2878)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2878)
					f(true,listeners).Cast< Void >();
					HX_STACK_LINE(2878)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2878)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2878)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2878)
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
	HX_STACK_PUSH("Engine::cameraFollow","com/stencyl/Engine.hx",2849);
	HX_STACK_THIS(this);
	HX_STACK_ARG(actor,"actor");
	HX_STACK_ARG(lockX,"lockX");
	HX_STACK_ARG(lockY,"lockY");
{
		HX_STACK_LINE(2849)
		this->camera->setLocation((actor->colX + (Float(actor->cacheWidth) / Float((int)2))),(actor->colY + (Float(actor->cacheHeight) / Float((int)2))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,cameraFollow,(void))

Void Engine_obj::stopShakingScreen( ){
{
		HX_STACK_PUSH("Engine::stopShakingScreen","com/stencyl/Engine.hx",2836);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2837)
		this->shakeTimer = (int)0;
		HX_STACK_LINE(2838)
		this->isShaking = false;
		HX_STACK_LINE(2840)
		this->master->set_x((int)0);
		HX_STACK_LINE(2841)
		this->master->set_y((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,stopShakingScreen,(void))

Void Engine_obj::shakeScreen( Float intensity,Float duration){
{
		HX_STACK_PUSH("Engine::shakeScreen","com/stencyl/Engine.hx",2829);
		HX_STACK_THIS(this);
		HX_STACK_ARG(intensity,"intensity");
		HX_STACK_ARG(duration,"duration");
		HX_STACK_LINE(2830)
		this->shakeTimer = ::Std_obj::_int((::com::stencyl::Engine_obj::MS_PER_SEC * duration));
		HX_STACK_LINE(2831)
		this->isShaking = true;
		HX_STACK_LINE(2832)
		this->shakeIntensity = intensity;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,shakeScreen,(void))

Void Engine_obj::removeTask( ::com::stencyl::behavior::TimedTask taskToRemove){
{
		HX_STACK_PUSH("Engine::removeTask","com/stencyl/Engine.hx",2820);
		HX_STACK_THIS(this);
		HX_STACK_ARG(taskToRemove,"taskToRemove");
		HX_STACK_LINE(2820)
		this->tasks->remove(taskToRemove);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,removeTask,(void))

Void Engine_obj::addTask( ::com::stencyl::behavior::TimedTask task){
{
		HX_STACK_PUSH("Engine::addTask","com/stencyl/Engine.hx",2815);
		HX_STACK_THIS(this);
		HX_STACK_ARG(task,"task");
		HX_STACK_LINE(2815)
		this->tasks->push(task);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,addTask,(void))

Void Engine_obj::soundFinished( int channelNum){
{
		HX_STACK_PUSH("Engine::soundFinished","com/stencyl/Engine.hx",2788);
		HX_STACK_THIS(this);
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_LINE(2789)
		::com::stencyl::models::SoundChannel sc = hx::TCast< com::stencyl::models::SoundChannel >::cast(this->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >());		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(2791)
		Dynamic channelListeners = this->soundListeners->get(channelNum);		HX_STACK_VAR(channelListeners,"channelListeners");
		HX_STACK_LINE(2792)
		Dynamic clipListeners = this->soundListeners->get(sc->currentClip);		HX_STACK_VAR(clipListeners,"clipListeners");
		HX_STACK_LINE(2797)
		if (((channelListeners != null()))){
			HX_STACK_LINE(2799)
			Dynamic listeners = channelListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2799)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2799)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2799)
				try{
					HX_STACK_LINE(2799)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2799)
					f(listeners).Cast< Void >();
					HX_STACK_LINE(2799)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2799)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2799)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3793,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2799)
				(r)++;
			}
		}
		HX_STACK_LINE(2802)
		if (((clipListeners != null()))){
			HX_STACK_LINE(2804)
			Dynamic listeners = clipListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2804)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2804)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2804)
				try{
					HX_STACK_LINE(2804)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2804)
					f(listeners).Cast< Void >();
					HX_STACK_LINE(2804)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2804)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2804)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3793,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2804)
				(r)++;
			}
		}
		HX_STACK_LINE(2807)
		sc->currentSound = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,soundFinished,(void))

Void Engine_obj::handleCollision( ::com::stencyl::models::Actor a,::com::stencyl::models::actor::Collision event){
{
		HX_STACK_PUSH("Engine::handleCollision","com/stencyl/Engine.hx",2646);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(2647)
		int type1 = a->typeID;		HX_STACK_VAR(type1,"type1");
		HX_STACK_LINE(2648)
		int type2 = event->otherActor->typeID;		HX_STACK_VAR(type2,"type2");
		HX_STACK_LINE(2650)
		int group1 = (int)0;		HX_STACK_VAR(group1,"group1");
		HX_STACK_LINE(2651)
		int group2 = (int)0;		HX_STACK_VAR(group2,"group2");
		HX_STACK_LINE(2653)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(2655)
			group1 = event->thisActor->groupID;
			HX_STACK_LINE(2656)
			group2 = event->otherActor->groupID;
		}
		else{
			HX_STACK_LINE(2661)
			if (((event->thisShape != null()))){
				HX_STACK_LINE(2663)
				int value = event->thisShape->groupID;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(2665)
				if (((value == ::com::stencyl::models::GameModel_obj::INHERIT_ID))){
					HX_STACK_LINE(2667)
					::box2D::dynamics::B2Body body = event->thisShape->getBody();		HX_STACK_VAR(body,"body");
					HX_STACK_LINE(2669)
					if (((body != null()))){
						HX_STACK_LINE(2670)
						value = body->getUserData()->__Field(HX_CSTRING("groupID"),true);
					}
				}
				HX_STACK_LINE(2675)
				group1 = (::com::stencyl::models::Actor_obj::GROUP_OFFSET + value);
			}
			else{
				HX_STACK_LINE(2679)
				group1 = (::com::stencyl::models::Actor_obj::GROUP_OFFSET + event->thisActor->groupID);
			}
			HX_STACK_LINE(2683)
			if (((event->otherShape != null()))){
				HX_STACK_LINE(2685)
				int value = event->otherShape->groupID;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(2687)
				if (((value == ::com::stencyl::models::GameModel_obj::INHERIT_ID))){
					HX_STACK_LINE(2689)
					::box2D::dynamics::B2Body body = event->otherShape->getBody();		HX_STACK_VAR(body,"body");
					HX_STACK_LINE(2691)
					if (((body != null()))){
						HX_STACK_LINE(2692)
						value = body->getUserData()->__Field(HX_CSTRING("groupID"),true);
					}
				}
				HX_STACK_LINE(2697)
				group2 = (::com::stencyl::models::Actor_obj::GROUP_OFFSET + value);
			}
			else{
				HX_STACK_LINE(2701)
				group2 = (::com::stencyl::models::Actor_obj::GROUP_OFFSET + event->otherActor->groupID);
			}
		}
		HX_STACK_LINE(2707)
		if (((this->collisionPairs != null()))){
			HX_STACK_LINE(2709)
			if ((!(this->collisionPairs->exists(a->ID)))){
				HX_STACK_LINE(2710)
				this->collisionPairs->set(a->ID,::haxe::ds::IntMap_obj::__new());
			}
			HX_STACK_LINE(2714)
			if ((!(this->collisionPairs->exists(event->otherActor->ID)))){
				HX_STACK_LINE(2715)
				this->collisionPairs->set(event->otherActor->ID,::haxe::ds::IntMap_obj::__new());
			}
			HX_STACK_LINE(2719)
			if (((bool(this->collisionPairs->get(a->ID)->__Field(HX_CSTRING("exists"),true)(event->otherActor->ID)) || bool(this->collisionPairs->get(event->otherActor->ID)->__Field(HX_CSTRING("exists"),true)(a->ID))))){
				HX_STACK_LINE(2720)
				return null();
			}
		}
		HX_STACK_LINE(2725)
		if (((bool((type1 > (int)-1)) || bool((type2 > (int)-1))))){
			HX_STACK_LINE(2727)
			if (((bool((bool(!(event->otherCollidedWithTerrain)) && bool(this->collisionListeners->exists(type1)))) && bool(this->collisionListeners->get(type1)->__Field(HX_CSTRING("exists"),true)(type2))))){
				HX_STACK_LINE(2729)
				Dynamic listeners = this->collisionListeners->get(type1)->__Field(HX_CSTRING("get"),true)(type2);		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2730)
				{
					HX_STACK_LINE(2730)
					int r = (int)0;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(2730)
					while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(2730)
						try{
							HX_STACK_LINE(2730)
							Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(2730)
							f(event,listeners).Cast< Void >();
							HX_STACK_LINE(2730)
							if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
								HX_STACK_LINE(2730)
								(r)--;
							}
						}
						catch(Dynamic __e){
							if (__e.IsClass< ::String >() ){
								HX_STACK_BEGIN_CATCH
								::String e = __e;{
									HX_STACK_LINE(2730)
									::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
								}
							}
							else throw(__e);
						}
						HX_STACK_LINE(2730)
						(r)++;
					}
				}
				HX_STACK_LINE(2732)
				if (((listeners->__Field(HX_CSTRING("length"),true) == (int)0))){
					HX_STACK_LINE(2733)
					this->collisionListeners->get(type1)->__Field(HX_CSTRING("delete"),true)(type2);
				}
			}
			HX_STACK_LINE(2738)
			if (((bool((bool((type1 != type2)) && bool(this->collisionListeners->exists(type2)))) && bool(this->collisionListeners->get(type2)->__Field(HX_CSTRING("exists"),true)(type1))))){
				HX_STACK_LINE(2740)
				Dynamic listeners = this->collisionListeners->get(type2)->__Field(HX_CSTRING("get"),true)(type1);		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2741)
				::com::stencyl::models::actor::Collision reverseEvent = event->switchData();		HX_STACK_VAR(reverseEvent,"reverseEvent");
				HX_STACK_LINE(2743)
				{
					HX_STACK_LINE(2743)
					int r = (int)0;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(2743)
					while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(2743)
						try{
							HX_STACK_LINE(2743)
							Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(2743)
							f(reverseEvent,listeners).Cast< Void >();
							HX_STACK_LINE(2743)
							if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
								HX_STACK_LINE(2743)
								(r)--;
							}
						}
						catch(Dynamic __e){
							if (__e.IsClass< ::String >() ){
								HX_STACK_BEGIN_CATCH
								::String e = __e;{
									HX_STACK_LINE(2743)
									::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
								}
							}
							else throw(__e);
						}
						HX_STACK_LINE(2743)
						(r)++;
					}
				}
				HX_STACK_LINE(2745)
				if (((listeners->__Field(HX_CSTRING("length"),true) == (int)0))){
					HX_STACK_LINE(2746)
					this->collisionListeners->get(type2)->__Field(HX_CSTRING("delete"),true)(type1);
				}
			}
		}
		HX_STACK_LINE(2752)
		if (((bool((group1 > (int)0)) && bool((group2 > (int)0))))){
			HX_STACK_LINE(2754)
			if (((bool(this->collisionListeners->exists(group1)) && bool(this->collisionListeners->get(group1)->__Field(HX_CSTRING("exists"),true)(group2))))){
				HX_STACK_LINE(2756)
				Dynamic listeners = this->collisionListeners->get(group1)->__Field(HX_CSTRING("get"),true)(group2);		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2757)
				{
					HX_STACK_LINE(2757)
					int r = (int)0;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(2757)
					while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(2757)
						try{
							HX_STACK_LINE(2757)
							Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(2757)
							f(event,listeners).Cast< Void >();
							HX_STACK_LINE(2757)
							if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
								HX_STACK_LINE(2757)
								(r)--;
							}
						}
						catch(Dynamic __e){
							if (__e.IsClass< ::String >() ){
								HX_STACK_BEGIN_CATCH
								::String e = __e;{
									HX_STACK_LINE(2757)
									::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
								}
							}
							else throw(__e);
						}
						HX_STACK_LINE(2757)
						(r)++;
					}
				}
				HX_STACK_LINE(2759)
				if (((listeners->__Field(HX_CSTRING("length"),true) == (int)0))){
					HX_STACK_LINE(2760)
					this->collisionListeners->get(group1)->__Field(HX_CSTRING("delete"),true)(group2);
				}
			}
			HX_STACK_LINE(2765)
			if (((bool((bool((group1 != group2)) && bool(this->collisionListeners->exists(group2)))) && bool(this->collisionListeners->get(group2)->__Field(HX_CSTRING("exists"),true)(group1))))){
				HX_STACK_LINE(2767)
				Dynamic listeners = this->collisionListeners->get(group2)->__Field(HX_CSTRING("get"),true)(group1);		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2768)
				::com::stencyl::models::actor::Collision reverseEvent = event->switchData();		HX_STACK_VAR(reverseEvent,"reverseEvent");
				HX_STACK_LINE(2770)
				{
					HX_STACK_LINE(2770)
					int r = (int)0;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(2770)
					while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(2770)
						try{
							HX_STACK_LINE(2770)
							Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(2770)
							f(reverseEvent,listeners).Cast< Void >();
							HX_STACK_LINE(2770)
							if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
								HX_STACK_LINE(2770)
								(r)--;
							}
						}
						catch(Dynamic __e){
							if (__e.IsClass< ::String >() ){
								HX_STACK_BEGIN_CATCH
								::String e = __e;{
									HX_STACK_LINE(2770)
									::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
								}
							}
							else throw(__e);
						}
						HX_STACK_LINE(2770)
						(r)++;
					}
				}
				HX_STACK_LINE(2772)
				if (((listeners->__Field(HX_CSTRING("length"),true) == (int)0))){
					HX_STACK_LINE(2773)
					this->collisionListeners->get(group2)->__Field(HX_CSTRING("delete"),true)(group1);
				}
			}
		}
		HX_STACK_LINE(2780)
		if (((this->collisionPairs != null()))){
			HX_STACK_LINE(2782)
			this->collisionPairs->get(a->ID)->__Field(HX_CSTRING("set"),true)(event->otherActor->ID,false);
			HX_STACK_LINE(2783)
			this->collisionPairs->get(event->otherActor->ID)->__Field(HX_CSTRING("set"),true)(a->ID,false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,handleCollision,(void))

Void Engine_obj::focusChanged( bool lost){
{
		HX_STACK_PUSH("Engine::focusChanged","com/stencyl/Engine.hx",2635);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lost,"lost");
		HX_STACK_LINE(2636)
		if (((this->whenFocusChangedListeners == null()))){
			HX_STACK_LINE(2637)
			return null();
		}
		HX_STACK_LINE(2641)
		{
			HX_STACK_LINE(2641)
			Dynamic listeners = this->whenFocusChangedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2641)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2641)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2641)
				try{
					HX_STACK_LINE(2641)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2641)
					f(lost,listeners).Cast< Void >();
					HX_STACK_LINE(2641)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2641)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2641)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2641)
				(r)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,focusChanged,(void))

Void Engine_obj::onFocusLost( ::flash::events::Event event){
{
		HX_STACK_PUSH("Engine::onFocusLost","com/stencyl/Engine.hx",2630);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(2630)
		this->focusChanged(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onFocusLost,(void))

Void Engine_obj::onFocus( ::flash::events::Event event){
{
		HX_STACK_PUSH("Engine::onFocus","com/stencyl/Engine.hx",2625);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(2625)
		this->focusChanged(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onFocus,(void))

Void Engine_obj::postUpdate( Float currTime){
{
		HX_STACK_PUSH("Engine::postUpdate","com/stencyl/Engine.hx",2565);
		HX_STACK_THIS(this);
		HX_STACK_ARG(currTime,"currTime");
		HX_STACK_LINE(2566)
		while(((this->acc > ::com::stencyl::Engine_obj::STEP_SIZE))){
			HX_STACK_LINE(2568)
			this->update(::com::stencyl::Engine_obj::STEP_SIZE);
			HX_STACK_LINE(2569)
			hx::SubEq(this->acc,::com::stencyl::Engine_obj::STEP_SIZE);
			HX_STACK_LINE(2570)
			::com::stencyl::Input_obj::update();
		}
		HX_STACK_LINE(2573)
		this->lastTime = currTime;
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2576);
				{
					HX_STACK_LINE(2576)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->allActors);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",2576);
						{
							HX_STACK_LINE(2576)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(2576)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(2576)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::Actor a = __it->next();
			{
				HX_STACK_LINE(2578)
				if (((bool((a == null())) || bool((bool(!(a->isLightweight)) && bool((a->body == null()))))))){
					HX_STACK_LINE(2579)
					continue;
				}
				HX_STACK_LINE(2583)
				if (((bool((a->currAnimationAsAnim != null())) && bool(a->currAnimationAsAnim->__Field(HX_CSTRING("needsBitmapUpdate"),true)())))){
					HX_STACK_LINE(2584)
					a->currAnimationAsAnim->__Field(HX_CSTRING("updateBitmap"),true)();
				}
				HX_STACK_LINE(2588)
				if (((bool(a->dead) || bool(a->dying)))){
					HX_STACK_LINE(2590)
					this->removeActor(a);
					HX_STACK_LINE(2591)
					continue;
				}
				else{
					HX_STACK_LINE(2594)
					if (((bool(a->updateMatrix) || bool(a->resetOrigin)))){
						HX_STACK_LINE(2596)
						a->updateDrawingMatrix();
						HX_STACK_LINE(2597)
						a->updateMatrix = false;
						HX_STACK_LINE(2598)
						a->resetOrigin = false;
					}
				}
				HX_STACK_LINE(2601)
				if (((a->body == null()))){
					HX_STACK_LINE(2602)
					continue;
				}
			}
;
		}
		HX_STACK_LINE(2609)
		int tempX = ::Std_obj::_int((Float(::com::stencyl::Engine_obj::cameraX) / Float(this->scene->tileWidth)));		HX_STACK_VAR(tempX,"tempX");
		HX_STACK_LINE(2610)
		int tempY = ::Std_obj::_int((Float(::com::stencyl::Engine_obj::cameraY) / Float(this->scene->tileHeight)));		HX_STACK_VAR(tempY,"tempY");
		HX_STACK_LINE(2612)
		this->cameraMoved = !(((bool((this->cameraOldX == tempX)) && bool((this->cameraOldY == tempY)))));
		HX_STACK_LINE(2614)
		this->cameraOldX = tempX;
		HX_STACK_LINE(2615)
		this->cameraOldY = tempY;
		HX_STACK_LINE(2617)
		this->draw();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,postUpdate,(void))

Void Engine_obj::onUpdate( ::flash::events::Event event){
{
		HX_STACK_PUSH("Engine::onUpdate","com/stencyl/Engine.hx",2518);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(2519)
		Float currTime = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(currTime,"currTime");
		HX_STACK_LINE(2520)
		Float elapsedTime = (currTime - this->lastTime);		HX_STACK_VAR(elapsedTime,"elapsedTime");
		HX_STACK_LINE(2524)
		if (((elapsedTime >= (int)200))){
			HX_STACK_LINE(2525)
			elapsedTime = (int)200;
		}
		HX_STACK_LINE(2529)
		hx::AddEq(this->acc,elapsedTime);
		HX_STACK_LINE(2531)
		::com::stencyl::Engine_obj::elapsedTime = elapsedTime;
		HX_STACK_LINE(2533)
		if (((this->leave != null()))){
			HX_STACK_LINE(2536)
			::motion::actuators::SimpleActuator_obj::stage_onEnterFrame(null());
			HX_STACK_LINE(2538)
			if ((this->leave->isComplete())){
				HX_STACK_LINE(2540)
				this->leave->deactivate();
				HX_STACK_LINE(2541)
				this->enterScene();
			}
			HX_STACK_LINE(2544)
			this->postUpdate(currTime);
			HX_STACK_LINE(2546)
			return null();
		}
		HX_STACK_LINE(2549)
		if (((this->enter != null()))){
			HX_STACK_LINE(2550)
			if ((this->enter->isComplete())){
				HX_STACK_LINE(2553)
				this->enter->deactivate();
				HX_STACK_LINE(2554)
				this->enter->cleanup();
				HX_STACK_LINE(2555)
				this->enter = null();
			}
		}
		HX_STACK_LINE(2561)
		this->postUpdate(currTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onUpdate,(void))

Void Engine_obj::update( Float elapsedTime){
{
		HX_STACK_PUSH("Engine::update","com/stencyl/Engine.hx",2193);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_LINE(2194)
		if (((this->scene == null()))){
			HX_STACK_LINE(2195)
			return null();
		}
		HX_STACK_LINE(2201)
		::motion::actuators::SimpleActuator_obj::stage_onEnterFrame(null());
		HX_STACK_LINE(2203)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2205)
			::box2D::collision::B2AABB aabb = this->world->getScreenBounds();		HX_STACK_VAR(aabb,"aabb");
			HX_STACK_LINE(2206)
			aabb->lowerBound->x = (Float(((::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraX) / Float(::com::stencyl::Engine_obj::SCALE))) - ::com::stencyl::Engine_obj::paddingLeft))) / Float(::com::stencyl::Engine_obj::physicsScale));
			HX_STACK_LINE(2207)
			aabb->lowerBound->y = (Float(((::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraY) / Float(::com::stencyl::Engine_obj::SCALE))) - ::com::stencyl::Engine_obj::paddingTop))) / Float(::com::stencyl::Engine_obj::physicsScale));
			HX_STACK_LINE(2208)
			aabb->upperBound->x = (aabb->lowerBound->x + (Float((((::com::stencyl::Engine_obj::screenWidth + ::com::stencyl::Engine_obj::paddingRight) + ::com::stencyl::Engine_obj::paddingLeft))) / Float(::com::stencyl::Engine_obj::physicsScale)));
			HX_STACK_LINE(2209)
			aabb->upperBound->y = (aabb->lowerBound->y + (Float((((::com::stencyl::Engine_obj::screenHeight + ::com::stencyl::Engine_obj::paddingBottom) + ::com::stencyl::Engine_obj::paddingTop))) / Float(::com::stencyl::Engine_obj::physicsScale)));
		}
		HX_STACK_LINE(2214)
		Float inputx = ((((Float(::com::stencyl::Input_obj::mouseX) / Float(::com::stencyl::Engine_obj::SCALE)) - this->root->get_x())) * this->root->get_scaleX());		HX_STACK_VAR(inputx,"inputx");
		HX_STACK_LINE(2215)
		Float inputy = ((((Float(::com::stencyl::Input_obj::mouseY) / Float(::com::stencyl::Engine_obj::SCALE)) - this->root->get_y())) * this->root->get_scaleY());		HX_STACK_VAR(inputy,"inputy");
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
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3793,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
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
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3793,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
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
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3793,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
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
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3793,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
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
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->whenKeyPressedListeners->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(2272)
				Dynamic listeners = this->whenKeyPressedListeners->get(key);		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2273)
				bool pressed = ::com::stencyl::Input_obj::pressed(key);		HX_STACK_VAR(pressed,"pressed");
				HX_STACK_LINE(2274)
				bool released = ::com::stencyl::Input_obj::released(key);		HX_STACK_VAR(released,"released");
				HX_STACK_LINE(2276)
				if (((bool(pressed) || bool(released)))){
					HX_STACK_LINE(2278)
					Dynamic listeners1 = listeners;		HX_STACK_VAR(listeners1,"listeners1");
					HX_STACK_LINE(2278)
					int r = (int)0;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(2278)
					while(((r < listeners1->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(2278)
						try{
							HX_STACK_LINE(2278)
							Dynamic f = listeners1->__GetItem(r);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(2278)
							f(pressed,released,listeners1).Cast< Void >();
							HX_STACK_LINE(2278)
							if (((::com::stencyl::utils::Utils_obj::indexOf(listeners1,f) == (int)-1))){
								HX_STACK_LINE(2278)
								(r)--;
							}
						}
						catch(Dynamic __e){
							if (__e.IsClass< ::String >() ){
								HX_STACK_BEGIN_CATCH
								::String e = __e;{
									HX_STACK_LINE(2278)
									::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3847,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners3")));
								}
							}
							else throw(__e);
						}
						HX_STACK_LINE(2278)
						(r)++;
					}
				}
			}
;
		}
		HX_STACK_LINE(2292)
		{
			HX_STACK_LINE(2292)
			Dynamic listeners = this->whenUpdatedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2292)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2292)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2292)
				try{
					HX_STACK_LINE(2292)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2292)
					f(elapsedTime,listeners).Cast< Void >();
					HX_STACK_LINE(2292)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2292)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2292)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2292)
				(r)++;
			}
		}
		HX_STACK_LINE(2294)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2296)
			this->world->step(0.01,(int)3,(int)3);
			HX_STACK_LINE(2297)
			this->world->clearForces();
			HX_STACK_LINE(2299)
			if ((::com::stencyl::Engine_obj::DEBUG_DRAW)){
				HX_STACK_LINE(2300)
				this->world->drawDebugData();
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2305);
				{
					HX_STACK_LINE(2305)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->regions);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",2305);
						{
							HX_STACK_LINE(2305)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(2305)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(2305)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::Region > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Region >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::Region r = __it->next();
			{
				HX_STACK_LINE(2307)
				if (((r == null()))){
					HX_STACK_LINE(2307)
					continue;
				}
				HX_STACK_LINE(2308)
				r->innerUpdate(elapsedTime,true);
			}
;
		}
		HX_STACK_LINE(2311)
		while(((this->disableCollisionList->length > (int)0))){
			HX_STACK_LINE(2312)
			this->disableCollisionList->pop().StaticCast< ::com::stencyl::models::Actor >();
		}
		HX_STACK_LINE(2316)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2317)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->collisionPairs->keys());  __it->hasNext(); ){
				int pair = __it->next();
				this->collisionPairs->remove(pair);
			}
		}
		HX_STACK_LINE(2324)
		::com::stencyl::models::actor::Animation_obj::updateAll(elapsedTime);
		struct _Function_1_2{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2326);
				{
					HX_STACK_LINE(2326)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->allActors);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",2326);
						{
							HX_STACK_LINE(2326)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(2326)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(2326)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >((_Function_1_2::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::Actor a = __it->next();
			if (((bool((bool((a != null())) && bool(!(a->dead)))) && bool(!(a->recycled))))){
				HX_STACK_LINE(2331)
				bool isOnScreen = (bool((bool((bool((bool(((bool(a->isLightweight) || bool(a->body->isActive())))) && bool(((a->colX + a->cacheWidth) >= ((Float(-(::com::stencyl::Engine_obj::cameraX)) / Float(::com::stencyl::Engine_obj::SCALE)) - ::com::stencyl::Engine_obj::paddingLeft))))) && bool(((a->colY + a->cacheHeight) >= ((Float(-(::com::stencyl::Engine_obj::cameraY)) / Float(::com::stencyl::Engine_obj::SCALE)) - ::com::stencyl::Engine_obj::paddingTop))))) && bool((a->colX < (((Float(-(::com::stencyl::Engine_obj::cameraX)) / Float(::com::stencyl::Engine_obj::SCALE)) + ::com::stencyl::Engine_obj::screenWidth) + ::com::stencyl::Engine_obj::paddingRight))))) && bool((a->colY < (((Float(-(::com::stencyl::Engine_obj::cameraY)) / Float(::com::stencyl::Engine_obj::SCALE)) + ::com::stencyl::Engine_obj::screenHeight) + ::com::stencyl::Engine_obj::paddingBottom))));		HX_STACK_VAR(isOnScreen,"isOnScreen");
				HX_STACK_LINE(2337)
				a->isOnScreenCache = isOnScreen;
				HX_STACK_LINE(2341)
				if (((bool(!(a->isLightweight)) && bool((a->body != null()))))){
					HX_STACK_LINE(2342)
					if (((bool(a->killLeaveScreen) && bool(!(isOnScreen))))){
						HX_STACK_LINE(2344)
						this->recycleActor(a);
					}
					else{
						HX_STACK_LINE(2348)
						if (((bool((bool(a->body->isActive()) || bool(a->alwaysSimulate))) || bool(a->isHUD)))){
							HX_STACK_LINE(2349)
							a->innerUpdate(elapsedTime,false);
						}
					}
				}
				else{
					HX_STACK_LINE(2354)
					if ((a->isLightweight)){
						HX_STACK_LINE(2355)
						if (((bool(a->killLeaveScreen) && bool(!(isOnScreen))))){
							HX_STACK_LINE(2357)
							this->recycleActor(a);
						}
						else{
							HX_STACK_LINE(2361)
							if (((bool((bool(isOnScreen) || bool(a->alwaysSimulate))) || bool(a->isHUD)))){
								HX_STACK_LINE(2362)
								a->innerUpdate(elapsedTime,false);
							}
						}
					}
				}
				HX_STACK_LINE(2367)
				if ((a->dead)){
					HX_STACK_LINE(2368)
					this->disableCollisionList->push(a);
				}
			}
;
		}
		HX_STACK_LINE(2374)
		{
			HX_STACK_LINE(2374)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->disableCollisionList;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2374)
			while(((_g < _g1->length))){
				HX_STACK_LINE(2374)
				::com::stencyl::models::Actor a = _g1->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(2374)
				++(_g);
				HX_STACK_LINE(2376)
				if (((a != null()))){
					HX_STACK_LINE(2377)
					a->handlesCollisions = false;
				}
			}
		}
		HX_STACK_LINE(2382)
		{
			HX_STACK_LINE(2382)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->animatedTiles;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2382)
			while(((_g < _g1->length))){
				HX_STACK_LINE(2382)
				::com::stencyl::models::scene::Tile tile = _g1->__get(_g).StaticCast< ::com::stencyl::models::scene::Tile >();		HX_STACK_VAR(tile,"tile");
				HX_STACK_LINE(2382)
				++(_g);
				HX_STACK_LINE(2384)
				tile->update(elapsedTime);
				HX_STACK_LINE(2385)
				this->tileUpdated = (bool(this->tileUpdated) || bool(tile->updateSource));
			}
		}
		HX_STACK_LINE(2388)
		if (((bool((this->leave != null())) && bool(this->leave->isActive())))){
			HX_STACK_LINE(2389)
			this->leave->update(elapsedTime);
		}
		else{
			HX_STACK_LINE(2393)
			if (((bool((this->enter != null())) && bool(this->enter->isActive())))){
				HX_STACK_LINE(2394)
				this->enter->update(elapsedTime);
			}
		}
		HX_STACK_LINE(2401)
		::com::stencyl::Engine_obj::cameraX = (-(::Math_obj::abs(this->camera->realX)) + ::com::stencyl::Engine_obj::screenWidthHalf);
		HX_STACK_LINE(2402)
		::com::stencyl::Engine_obj::cameraY = (-(::Math_obj::abs(this->camera->realY)) + ::com::stencyl::Engine_obj::screenHeightHalf);
		HX_STACK_LINE(2405)
		int maxCamX = (-(::com::stencyl::Engine_obj::sceneWidth) + ::com::stencyl::Engine_obj::screenWidth);		HX_STACK_VAR(maxCamX,"maxCamX");
		HX_STACK_LINE(2406)
		int maxCamY = (-(::com::stencyl::Engine_obj::sceneHeight) + ::com::stencyl::Engine_obj::screenHeight);		HX_STACK_VAR(maxCamY,"maxCamY");
		HX_STACK_LINE(2408)
		if (((::com::stencyl::Engine_obj::cameraX < maxCamX))){
			HX_STACK_LINE(2409)
			::com::stencyl::Engine_obj::cameraX = maxCamX;
		}
		HX_STACK_LINE(2413)
		if (((::com::stencyl::Engine_obj::cameraY < maxCamY))){
			HX_STACK_LINE(2414)
			::com::stencyl::Engine_obj::cameraY = maxCamY;
		}
		HX_STACK_LINE(2418)
		hx::MultEq(::com::stencyl::Engine_obj::cameraX,::com::stencyl::Engine_obj::SCALE);
		HX_STACK_LINE(2419)
		hx::MultEq(::com::stencyl::Engine_obj::cameraY,::com::stencyl::Engine_obj::SCALE);
		HX_STACK_LINE(2422)
		::com::stencyl::Engine_obj::cameraX = ::Math_obj::min((int)0,::com::stencyl::Engine_obj::cameraX);
		HX_STACK_LINE(2423)
		::com::stencyl::Engine_obj::cameraY = ::Math_obj::min((int)0,::com::stencyl::Engine_obj::cameraY);
		HX_STACK_LINE(2425)
		{
			HX_STACK_LINE(2425)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->master->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2425)
			while(((_g1 < _g))){
				HX_STACK_LINE(2425)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(2427)
				::flash::display::DisplayObject child = this->master->getChildAt(i1);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(2430)
				if ((::Std_obj::is(child,hx::ClassOf< ::com::stencyl::models::scene::layers::BackgroundLayer >()))){
					HX_STACK_LINE(2432)
					::com::stencyl::models::scene::layers::BackgroundLayer bgLayer = hx::TCast< com::stencyl::models::scene::layers::BackgroundLayer >::cast(child);		HX_STACK_VAR(bgLayer,"bgLayer");
					HX_STACK_LINE(2434)
					Float endX = ::Math_obj::abs((bgLayer->cacheWidth - (::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)));		HX_STACK_VAR(endX,"endX");
					HX_STACK_LINE(2435)
					Float endY = ::Math_obj::abs((bgLayer->cacheHeight - (::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)));		HX_STACK_VAR(endY,"endY");
					HX_STACK_LINE(2440)
					if (((maxCamX != (int)0))){
						HX_STACK_LINE(2441)
						child->set_x((-(endX) * ::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraX) / Float(((maxCamX * ::com::stencyl::Engine_obj::SCALE)))))));
					}
					else{
						HX_STACK_LINE(2446)
						child->set_x((int)0);
					}
					HX_STACK_LINE(2450)
					if (((maxCamY != (int)0))){
						HX_STACK_LINE(2451)
						child->set_y((-(endY) * ::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraY) / Float(((maxCamY * ::com::stencyl::Engine_obj::SCALE)))))));
					}
					else{
						HX_STACK_LINE(2456)
						child->set_y((int)0);
					}
					HX_STACK_LINE(2460)
					if ((bgLayer->isAnimated)){
						HX_STACK_LINE(2461)
						bgLayer->updateAnimation(elapsedTime);
					}
				}
				else{
					HX_STACK_LINE(2466)
					if ((::Std_obj::is(child,hx::ClassOf< ::com::stencyl::models::scene::ScrollingBitmap >()))){
						HX_STACK_LINE(2468)
						::com::stencyl::models::scene::ScrollingBitmap bg = hx::TCast< com::stencyl::models::scene::ScrollingBitmap >::cast(child);		HX_STACK_VAR(bg,"bg");
						HX_STACK_LINE(2470)
						if ((bg->parallax)){
							HX_STACK_LINE(2471)
							bg->updateParallax();
						}
						else{
							HX_STACK_LINE(2476)
							bg->updateAuto(elapsedTime);
						}
					}
					else{
						HX_STACK_LINE(2482)
						if ((::Std_obj::is(child,hx::ClassOf< ::com::stencyl::models::scene::layers::RegularLayer >()))){
							HX_STACK_LINE(2484)
							child->set_x(::com::stencyl::Engine_obj::cameraX);
							HX_STACK_LINE(2485)
							child->set_y(::com::stencyl::Engine_obj::cameraY);
						}
					}
				}
			}
		}
		HX_STACK_LINE(2491)
		if (((bool(!(::com::stencyl::Engine_obj::NO_PHYSICS)) && bool(::com::stencyl::Engine_obj::DEBUG_DRAW)))){
			HX_STACK_LINE(2493)
			this->debugLayer->set_x(::com::stencyl::Engine_obj::cameraX);
			HX_STACK_LINE(2494)
			this->debugLayer->set_y(::com::stencyl::Engine_obj::cameraY);
		}
		HX_STACK_LINE(2498)
		if ((this->isShaking)){
			HX_STACK_LINE(2500)
			hx::SubEq(this->shakeTimer,::com::stencyl::Engine_obj::STEP_SIZE);
			HX_STACK_LINE(2502)
			if (((this->shakeTimer <= (int)0))){
				HX_STACK_LINE(2504)
				this->stopShakingScreen();
				HX_STACK_LINE(2505)
				return null();
			}
			HX_STACK_LINE(2508)
			Float randX = ((-(this->shakeIntensity) * ::com::stencyl::Engine_obj::screenWidth) + (::Math_obj::random() * ((((int)2 * this->shakeIntensity) * ::com::stencyl::Engine_obj::screenWidth))));		HX_STACK_VAR(randX,"randX");
			HX_STACK_LINE(2509)
			Float randY = ((-(this->shakeIntensity) * ::com::stencyl::Engine_obj::screenHeight) + (::Math_obj::random() * ((((int)2 * this->shakeIntensity) * ::com::stencyl::Engine_obj::screenHeight))));		HX_STACK_VAR(randY,"randY");
			HX_STACK_LINE(2511)
			this->master->set_x((randX * ::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(2512)
			this->master->set_y((randY * ::com::stencyl::Engine_obj::SCALE));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,update,(void))

int Engine_obj::getMiddleLayer( ){
	HX_STACK_PUSH("Engine::getMiddleLayer","com/stencyl/Engine.hx",2183);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2183)
	return this->layersToDraw->get(this->middleLayer);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getMiddleLayer,return )

int Engine_obj::getBottomLayer( ){
	HX_STACK_PUSH("Engine::getBottomLayer","com/stencyl/Engine.hx",2178);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2178)
	return this->layersToDraw->get(this->bottomLayer);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getBottomLayer,return )

int Engine_obj::getTopLayer( ){
	HX_STACK_PUSH("Engine::getTopLayer","com/stencyl/Engine.hx",2173);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2173)
	return this->layersToDraw->get(this->topLayer);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getTopLayer,return )

::com::stencyl::models::Actor Engine_obj::createActorOfType( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst){
	HX_STACK_PUSH("Engine::createActorOfType","com/stencyl/Engine.hx",2110);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(layerConst,"layerConst");
	HX_STACK_LINE(2111)
	if (((type == null()))){
		HX_STACK_LINE(2113)
		::haxe::Log_obj::trace(HX_CSTRING("Tried to create actor with null or invalid type."),hx::SourceInfo(HX_CSTRING("Engine.hx"),2113,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("createActorOfType")));
		HX_STACK_LINE(2114)
		return null();
	}
	HX_STACK_LINE(2117)
	int layerID = (int)0;		HX_STACK_VAR(layerID,"layerID");
	HX_STACK_LINE(2119)
	if (((layerConst == ::com::stencyl::behavior::Script_obj::FRONT))){
		HX_STACK_LINE(2120)
		layerID = this->getTopLayer();
	}
	else{
		HX_STACK_LINE(2124)
		if (((layerConst == ::com::stencyl::behavior::Script_obj::BACK))){
			HX_STACK_LINE(2125)
			layerID = this->getBottomLayer();
		}
		else{
			HX_STACK_LINE(2130)
			layerID = this->getMiddleLayer();
		}
	}
	HX_STACK_LINE(2134)
	::com::stencyl::models::scene::ActorInstance ai = ::com::stencyl::models::scene::ActorInstance_obj::__new(::com::stencyl::utils::Utils_obj::INTEGER_MAX,::Std_obj::_int(x),::Std_obj::_int(y),(int)1,(int)1,layerID,(int)0,type->groupID,type->ID,null(),false);		HX_STACK_VAR(ai,"ai");
	HX_STACK_LINE(2149)
	::com::stencyl::models::Actor a = this->createActor(ai,true);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(2150)
	a->initScripts();
	HX_STACK_LINE(2152)
	Dynamic f1 = this->whenTypeGroupCreatedListeners->get(type);		HX_STACK_VAR(f1,"f1");
	HX_STACK_LINE(2153)
	Dynamic f2 = this->whenTypeGroupCreatedListeners->get(a->getGroup());		HX_STACK_VAR(f2,"f2");
	HX_STACK_LINE(2155)
	if (((f1 != null()))){
		HX_STACK_LINE(2157)
		Dynamic listeners = f1;		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(2157)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(2157)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(2157)
			try{
				HX_STACK_LINE(2157)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(2157)
				f(a,listeners).Cast< Void >();
				HX_STACK_LINE(2157)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(2157)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(2157)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(2157)
			(r)++;
		}
	}
	HX_STACK_LINE(2160)
	if (((f2 != null()))){
		HX_STACK_LINE(2162)
		Dynamic listeners = f2;		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(2162)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(2162)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(2162)
			try{
				HX_STACK_LINE(2162)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(2162)
				f(a,listeners).Cast< Void >();
				HX_STACK_LINE(2162)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(2162)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(2162)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(2162)
			(r)++;
		}
	}
	HX_STACK_LINE(2165)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,createActorOfType,return )

::com::stencyl::models::Actor Engine_obj::getRecycledActorOfType( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst){
	HX_STACK_PUSH("Engine::getRecycledActorOfType","com/stencyl/Engine.hx",1993);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(layerConst,"layerConst");
	HX_STACK_LINE(1994)
	::com::stencyl::models::Actor a = null();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(1996)
	if (((this->recycledActorsOfType->get(type->ID) == null()))){
		HX_STACK_LINE(1997)
		this->recycledActorsOfType->set(type->ID,Array_obj< ::Dynamic >::__new());
	}
	HX_STACK_LINE(2002)
	Array< ::Dynamic > cache = this->recycledActorsOfType->get(type->ID);		HX_STACK_VAR(cache,"cache");
	HX_STACK_LINE(2004)
	if (((cache != null()))){
		HX_STACK_LINE(2008)
		{
			HX_STACK_LINE(2008)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2008)
			while(((_g < cache->length))){
				HX_STACK_LINE(2008)
				::com::stencyl::models::Actor actor = cache->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
				HX_STACK_LINE(2008)
				++(_g);
				HX_STACK_LINE(2010)
				if (((bool((actor != null())) && bool(actor->recycled)))){
					HX_STACK_LINE(2012)
					actor->createTime = ::flash::Lib_obj::getTimer();
					HX_STACK_LINE(2013)
					this->allActors->set(actor->ID,actor);
					HX_STACK_LINE(2015)
					actor->dead = false;
					HX_STACK_LINE(2016)
					actor->dying = false;
					HX_STACK_LINE(2017)
					actor->recycled = false;
					HX_STACK_LINE(2018)
					actor->killLeaveScreen = false;
					HX_STACK_LINE(2019)
					actor->switchToDefaultAnimation();
					HX_STACK_LINE(2020)
					actor->enableAllBehaviors();
					HX_STACK_LINE(2022)
					if ((!(actor->isLightweight))){
						HX_STACK_LINE(2024)
						actor->body->setActive(true);
						HX_STACK_LINE(2025)
						actor->body->setAwake(true);
						HX_STACK_LINE(2027)
						actor->body->m_prev = null();
						HX_STACK_LINE(2028)
						actor->body->m_next = this->world->m_bodyList;
						HX_STACK_LINE(2030)
						if (((this->world->m_bodyList != null()))){
							HX_STACK_LINE(2031)
							this->world->m_bodyList->m_prev = actor->body;
						}
						HX_STACK_LINE(2035)
						this->world->m_bodyList = actor->body;
						HX_STACK_LINE(2036)
						++(this->world->m_bodyCount);
					}
					HX_STACK_LINE(2039)
					actor->registry = ::haxe::ds::StringMap_obj::__new();
					HX_STACK_LINE(2040)
					actor->enableActorDrawing();
					HX_STACK_LINE(2041)
					actor->setX(x,false,true);
					HX_STACK_LINE(2042)
					actor->setY(y,false,true);
					HX_STACK_LINE(2044)
					if ((!(actor->isLightweight))){
						HX_STACK_LINE(2046)
						actor->colX = x;
						HX_STACK_LINE(2047)
						actor->colY = y;
					}
					HX_STACK_LINE(2050)
					actor->setAngle((int)0,false);
					HX_STACK_LINE(2051)
					actor->set_alpha((int)1);
					HX_STACK_LINE(2052)
					actor->realScaleX = (int)1;
					HX_STACK_LINE(2053)
					actor->realScaleY = (int)1;
					HX_STACK_LINE(2055)
					if (((actor->bodyDef != null()))){
						HX_STACK_LINE(2056)
						actor->continuousCollision = actor->bodyDef->bullet;
					}
					HX_STACK_LINE(2063)
					int layerID = (int)0;		HX_STACK_VAR(layerID,"layerID");
					HX_STACK_LINE(2065)
					if (((layerConst == ::com::stencyl::behavior::Script_obj::FRONT))){
						HX_STACK_LINE(2066)
						layerID = this->getTopLayer();
					}
					else{
						HX_STACK_LINE(2070)
						if (((layerConst == ::com::stencyl::behavior::Script_obj::BACK))){
							HX_STACK_LINE(2071)
							layerID = this->getBottomLayer();
						}
						else{
							HX_STACK_LINE(2076)
							layerID = this->getMiddleLayer();
						}
					}
					HX_STACK_LINE(2080)
					this->moveActorToLayer(actor,layerID);
					HX_STACK_LINE(2082)
					actor->initScripts();
					HX_STACK_LINE(2084)
					Dynamic f1 = this->whenTypeGroupCreatedListeners->get(type);		HX_STACK_VAR(f1,"f1");
					HX_STACK_LINE(2085)
					Dynamic f2 = this->whenTypeGroupCreatedListeners->get(actor->getGroup());		HX_STACK_VAR(f2,"f2");
					HX_STACK_LINE(2087)
					if (((f1 != null()))){
						HX_STACK_LINE(2089)
						Dynamic listeners = f1;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(2089)
						int r = (int)0;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(2089)
						while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
							HX_STACK_LINE(2089)
							try{
								HX_STACK_LINE(2089)
								Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(2089)
								f(actor,listeners).Cast< Void >();
								HX_STACK_LINE(2089)
								if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
									HX_STACK_LINE(2089)
									(r)--;
								}
							}
							catch(Dynamic __e){
								if (__e.IsClass< ::String >() ){
									HX_STACK_BEGIN_CATCH
									::String e = __e;{
										HX_STACK_LINE(2089)
										::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
									}
								}
								else throw(__e);
							}
							HX_STACK_LINE(2089)
							(r)++;
						}
					}
					HX_STACK_LINE(2092)
					if (((f2 != null()))){
						HX_STACK_LINE(2094)
						Dynamic listeners = f2;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(2094)
						int r = (int)0;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(2094)
						while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
							HX_STACK_LINE(2094)
							try{
								HX_STACK_LINE(2094)
								Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(2094)
								f(actor,listeners).Cast< Void >();
								HX_STACK_LINE(2094)
								if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
									HX_STACK_LINE(2094)
									(r)--;
								}
							}
							catch(Dynamic __e){
								if (__e.IsClass< ::String >() ){
									HX_STACK_BEGIN_CATCH
									::String e = __e;{
										HX_STACK_LINE(2094)
										::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
									}
								}
								else throw(__e);
							}
							HX_STACK_LINE(2094)
							(r)++;
						}
					}
					HX_STACK_LINE(2097)
					return actor;
				}
			}
		}
		HX_STACK_LINE(2102)
		a = this->createActorOfType(type,x,y,layerConst);
	}
	HX_STACK_LINE(2106)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,getRecycledActorOfType,return )

Void Engine_obj::recycleActor( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::recycleActor","com/stencyl/Engine.hx",1883);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(1886)
		if (((bool((a == null())) || bool(a->recycled)))){
			HX_STACK_LINE(1887)
			return null();
		}
		HX_STACK_LINE(1891)
		Dynamic l1 = ::com::stencyl::Engine_obj::engine->whenTypeGroupDiesListeners->get(a->getType());		HX_STACK_VAR(l1,"l1");
		HX_STACK_LINE(1892)
		Dynamic l2 = ::com::stencyl::Engine_obj::engine->whenTypeGroupDiesListeners->get(a->getGroup());		HX_STACK_VAR(l2,"l2");
		HX_STACK_LINE(1894)
		{
			HX_STACK_LINE(1894)
			Dynamic listeners = a->whenKilledListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1894)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1894)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1894)
				try{
					HX_STACK_LINE(1894)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1894)
					f(listeners).Cast< Void >();
					HX_STACK_LINE(1894)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1894)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1894)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3793,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1894)
				(r)++;
			}
		}
		HX_STACK_LINE(1896)
		if (((l1 != null()))){
			HX_STACK_LINE(1898)
			Dynamic listeners = l1;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1898)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1898)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1898)
				try{
					HX_STACK_LINE(1898)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1898)
					f(a,listeners).Cast< Void >();
					HX_STACK_LINE(1898)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1898)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1898)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1898)
				(r)++;
			}
		}
		HX_STACK_LINE(1901)
		if (((l2 != null()))){
			HX_STACK_LINE(1903)
			Dynamic listeners = l2;		HX_STACK_VAR(listeners,"listeners");
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
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1903)
				(r)++;
			}
		}
		HX_STACK_LINE(1906)
		if ((a->isHUD)){
			HX_STACK_LINE(1907)
			a->unanchorFromScreen();
		}
		HX_STACK_LINE(1911)
		if ((a->alwaysSimulate)){
			HX_STACK_LINE(1912)
			a->makeSometimesSimulate(false);
		}
		HX_STACK_LINE(1916)
		a->setX((int)1000000,false,true);
		HX_STACK_LINE(1917)
		a->setY((int)1000000,false,true);
		HX_STACK_LINE(1918)
		a->colX = (int)1000000;
		HX_STACK_LINE(1919)
		a->colY = (int)1000000;
		HX_STACK_LINE(1920)
		a->recycled = true;
		HX_STACK_LINE(1921)
		a->killLeaveScreen = false;
		HX_STACK_LINE(1922)
		a->lastScreenState = false;
		HX_STACK_LINE(1923)
		a->lastSceneState = false;
		HX_STACK_LINE(1926)
		a->cancelTweens();
		HX_STACK_LINE(1932)
		a->fadeTo((int)1,0.01,null());
		HX_STACK_LINE(1934)
		a->realScaleX = (int)1;
		HX_STACK_LINE(1935)
		a->realScaleY = (int)1;
		HX_STACK_LINE(1937)
		a->switchToDefaultAnimation();
		HX_STACK_LINE(1938)
		a->disableActorDrawing();
		HX_STACK_LINE(1941)
		if (((bool(!(a->isLightweight)) && bool((a->body != null()))))){
			HX_STACK_LINE(1943)
			::box2D::dynamics::contacts::B2ContactEdge contact = a->body->getContactList();		HX_STACK_VAR(contact,"contact");
			HX_STACK_LINE(1945)
			while(((contact != null()))){
				HX_STACK_LINE(1947)
				::com::stencyl::Engine_obj::engine->world->m_contactManager->m_contactListener->endContact(contact->contact);
				HX_STACK_LINE(1948)
				contact = contact->next;
			}
		}
		HX_STACK_LINE(1952)
		a->removeAllListeners();
		HX_STACK_LINE(1953)
		a->resetListeners();
		HX_STACK_LINE(1955)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(1957)
		if ((!(a->isLightweight))){
			HX_STACK_LINE(1959)
			a->body->setActive(false);
			HX_STACK_LINE(1960)
			a->body->setAwake(false);
			HX_STACK_LINE(1963)
			if (((a->body->m_prev != null()))){
				HX_STACK_LINE(1964)
				a->body->m_prev->m_next = a->body->m_next;
			}
			HX_STACK_LINE(1968)
			if (((a->body->m_next != null()))){
				HX_STACK_LINE(1969)
				a->body->m_next->m_prev = a->body->m_prev;
			}
			HX_STACK_LINE(1973)
			if (((a->body == this->world->m_bodyList))){
				HX_STACK_LINE(1974)
				this->world->m_bodyList = a->body->m_next;
			}
			HX_STACK_LINE(1978)
			a->body->m_prev = null();
			HX_STACK_LINE(1979)
			a->body->m_next = null();
			HX_STACK_LINE(1981)
			--(this->world->m_bodyCount);
		}
		HX_STACK_LINE(1984)
		a->xSpeed = (int)0;
		HX_STACK_LINE(1985)
		a->ySpeed = (int)0;
		HX_STACK_LINE(1986)
		a->rSpeed = (int)0;
		HX_STACK_LINE(1987)
		a->continuousCollision = false;
		HX_STACK_LINE(1989)
		this->allActors->remove(a->ID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,recycleActor,(void))

Void Engine_obj::moveActorToLayer( ::com::stencyl::models::Actor a,int layerID){
{
		HX_STACK_PUSH("Engine::moveActorToLayer","com/stencyl/Engine.hx",1867);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_LINE(1868)
		::flash::display::DisplayObjectContainer layer = this->actorsPerLayer->get(layerID);		HX_STACK_VAR(layer,"layer");
		HX_STACK_LINE(1870)
		if (((layer == null()))){
			HX_STACK_LINE(1872)
			::haxe::Log_obj::trace(((HX_CSTRING("Layer ID: ") + layerID) + HX_CSTRING(" does not exist")),hx::SourceInfo(HX_CSTRING("Engine.hx"),1872,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("moveActorToLayer")));
			HX_STACK_LINE(1873)
			::haxe::Log_obj::trace(HX_CSTRING("Putting actor inside default group"),hx::SourceInfo(HX_CSTRING("Engine.hx"),1873,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("moveActorToLayer")));
			HX_STACK_LINE(1874)
			layer = this->defaultGroup;
		}
		HX_STACK_LINE(1878)
		layer->addChild(a);
		HX_STACK_LINE(1879)
		a->layerID = layerID;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,moveActorToLayer,(void))

Void Engine_obj::removeActorFromLayer( ::com::stencyl::models::Actor a,int layerID){
{
		HX_STACK_PUSH("Engine::removeActorFromLayer","com/stencyl/Engine.hx",1849);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_LINE(1850)
		::flash::display::DisplayObjectContainer layer = this->actorsPerLayer->get(layerID);		HX_STACK_VAR(layer,"layer");
		HX_STACK_LINE(1852)
		if (((layer == null()))){
			HX_STACK_LINE(1854)
			::haxe::Log_obj::trace(((HX_CSTRING("Layer ID: ") + layerID) + HX_CSTRING(" does not exist")),hx::SourceInfo(HX_CSTRING("Engine.hx"),1854,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("removeActorFromLayer")));
			HX_STACK_LINE(1855)
			::haxe::Log_obj::trace(HX_CSTRING("Assuming default group"),hx::SourceInfo(HX_CSTRING("Engine.hx"),1855,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("removeActorFromLayer")));
			HX_STACK_LINE(1856)
			layer = this->defaultGroup;
		}
		HX_STACK_LINE(1860)
		if ((layer->contains(a))){
			HX_STACK_LINE(1861)
			layer->removeChild(a);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,removeActorFromLayer,(void))

Void Engine_obj::removeActor( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::removeActor","com/stencyl/Engine.hx",1818);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(1819)
		this->allActors->remove(a->ID);
		HX_STACK_LINE(1822)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(1825)
		this->groups->get(a->getGroupID())->__Field(HX_CSTRING("removeChild"),true)(a);
		HX_STACK_LINE(1827)
		if (((bool(a->isHUD) || bool(a->alwaysSimulate)))){
			HX_STACK_LINE(1828)
			this->hudActors->remove(a->ID);
		}
		HX_STACK_LINE(1832)
		a->destroy();
		HX_STACK_LINE(1836)
		if (((::com::stencyl::Data_obj::get()->resources->get(a->typeID) != null()))){
			HX_STACK_LINE(1838)
			::com::stencyl::models::actor::ActorType typeID = hx::TCast< com::stencyl::models::actor::ActorType >::cast(::com::stencyl::Data_obj::get()->resources->get(a->typeID));		HX_STACK_VAR(typeID,"typeID");
			HX_STACK_LINE(1839)
			Array< ::Dynamic > cache = this->actorsOfType->get(typeID->ID);		HX_STACK_VAR(cache,"cache");
			HX_STACK_LINE(1841)
			if (((cache != null()))){
				HX_STACK_LINE(1842)
				cache->remove(a);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,removeActor,(void))

::com::stencyl::models::Actor Engine_obj::createActor( ::com::stencyl::models::scene::ActorInstance ai,hx::Null< bool >  __o_offset){
bool offset = __o_offset.Default(false);
	HX_STACK_PUSH("Engine::createActor","com/stencyl/Engine.hx",1699);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ai,"ai");
	HX_STACK_ARG(offset,"offset");
{
		HX_STACK_LINE(1700)
		::com::stencyl::models::actor::Sprite s = hx::TCast< com::stencyl::models::actor::Sprite >::cast(::com::stencyl::Data_obj::get()->resources->get(ai->actorType->spriteID));		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(1702)
		::com::stencyl::models::Actor a = ::com::stencyl::models::Actor_obj::__new(hx::ObjectPtr<OBJ_>(this),ai->elementID,ai->groupID,(Float(ai->x) / Float(::com::stencyl::Engine_obj::physicsScale)),(Float(ai->y) / Float(::com::stencyl::Engine_obj::physicsScale)),ai->layerID,s->width,s->height,s,ai->behaviorValues,ai->actorType,(  ((::com::stencyl::Engine_obj::NO_PHYSICS)) ? ::box2D::dynamics::B2BodyDef(null()) : ::box2D::dynamics::B2BodyDef(ai->actorType->bodyDef) ),false,false,false,false,null(),ai->actorType->ID,(bool(ai->actorType->isLightweight) || bool(::com::stencyl::Engine_obj::NO_PHYSICS)),ai->actorType->autoScale,ai->actorType->ignoreGravity);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1727)
		if (((ai->angle != (int)0))){
			HX_STACK_LINE(1728)
			if (((bool((a->currOffset->x != (int)0)) || bool((a->currOffset->y != (int)0))))){
				HX_STACK_LINE(1731)
				int resetOrigX = ::Std_obj::_int(a->currOrigin->x);		HX_STACK_VAR(resetOrigX,"resetOrigX");
				HX_STACK_LINE(1732)
				int resetOrigY = ::Std_obj::_int(a->currOrigin->y);		HX_STACK_VAR(resetOrigY,"resetOrigY");
				HX_STACK_LINE(1734)
				a->setOriginPoint(::Std_obj::_int((Float(a->cacheWidth) / Float((int)2))),::Std_obj::_int((Float(a->cacheHeight) / Float((int)2))));
				HX_STACK_LINE(1735)
				a->setAngle(ai->angle,false);
				HX_STACK_LINE(1736)
				a->setOriginPoint(resetOrigX,resetOrigY);
			}
			else{
				HX_STACK_LINE(1740)
				a->setAngle(ai->angle,false);
			}
		}
		HX_STACK_LINE(1745)
		if (((bool((ai->scaleX != (int)1)) || bool((ai->scaleY != (int)1))))){
			HX_STACK_LINE(1746)
			a->growTo(ai->scaleX,ai->scaleY,(int)0,null());
		}
		HX_STACK_LINE(1750)
		a->set_name(ai->actorType->name);
		HX_STACK_LINE(1752)
		this->moveActorToLayer(a,ai->layerID);
		HX_STACK_LINE(1758)
		if (((this->recycledActorsOfType->get(ai->actorType->ID) == null()))){
			HX_STACK_LINE(1759)
			this->recycledActorsOfType->set(ai->actorType->ID,Array_obj< ::Dynamic >::__new());
		}
		HX_STACK_LINE(1764)
		Array< ::Dynamic > cache = this->recycledActorsOfType->get(ai->actorType->ID);		HX_STACK_VAR(cache,"cache");
		HX_STACK_LINE(1765)
		cache->push(a);
		HX_STACK_LINE(1769)
		::com::stencyl::models::actor::Group group = this->groups->get(ai->groupID);		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(1771)
		if (((group != null()))){
			HX_STACK_LINE(1772)
			group->addChild(a);
		}
		HX_STACK_LINE(1779)
		if (((ai->elementID == ::com::stencyl::utils::Utils_obj::INTEGER_MAX))){
			HX_STACK_LINE(1781)
			(this->nextID)++;
			HX_STACK_LINE(1782)
			a->ID = this->nextID;
			HX_STACK_LINE(1783)
			this->allActors->set(a->ID,a);
		}
		else{
			HX_STACK_LINE(1788)
			this->allActors->set(a->ID,a);
			HX_STACK_LINE(1789)
			this->nextID = ::Std_obj::_int(::Math_obj::max(a->ID,this->nextID));
		}
		HX_STACK_LINE(1792)
		a->internalUpdate((int)0,false);
		HX_STACK_LINE(1793)
		a->updateDrawingMatrix();
		HX_STACK_LINE(1798)
		if (((ai->actorType != null()))){
			HX_STACK_LINE(1800)
			Array< ::Dynamic > cache1 = this->actorsOfType->get(ai->actorType->ID);		HX_STACK_VAR(cache1,"cache1");
			HX_STACK_LINE(1802)
			if (((cache1 == null()))){
				HX_STACK_LINE(1804)
				cache1 = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(1805)
				this->actorsOfType->set(ai->actorType->ID,cache1);
			}
			HX_STACK_LINE(1808)
			if (((cache1 != null()))){
				HX_STACK_LINE(1809)
				cache1->push(a);
			}
		}
		HX_STACK_LINE(1814)
		return a;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,createActor,return )

Void Engine_obj::createActorInNextScene( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layer){
{
		HX_STACK_PUSH("Engine::createActorInNextScene","com/stencyl/Engine.hx",1694);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(layer,"layer");
		HX_STACK_LINE(1694)
		this->actorsToCreateInNextScene->push(::com::stencyl::models::scene::DeferredActor_obj::__new(type,x,y,layer));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,createActorInNextScene,(void))

bool Engine_obj::isTransitioningOut( ){
	HX_STACK_PUSH("Engine::isTransitioningOut","com/stencyl/Engine.hx",1680);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1681)
	if (((bool((this->leave != null())) && bool(this->leave->isActive())))){
		HX_STACK_LINE(1682)
		return true;
	}
	HX_STACK_LINE(1686)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,isTransitioningOut,return )

bool Engine_obj::isTransitioning( ){
	HX_STACK_PUSH("Engine::isTransitioning","com/stencyl/Engine.hx",1665);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1666)
	if (((bool((this->enter != null())) && bool(this->enter->isActive())))){
		HX_STACK_LINE(1667)
		return true;
	}
	else{
		HX_STACK_LINE(1671)
		if (((bool((this->leave != null())) && bool(this->leave->isActive())))){
			HX_STACK_LINE(1672)
			return true;
		}
	}
	HX_STACK_LINE(1676)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,isTransitioning,return )

Void Engine_obj::enterScene( ){
{
		HX_STACK_PUSH("Engine::enterScene","com/stencyl/Engine.hx",1645);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1646)
		if ((!(this->enter->isComplete()))){
			HX_STACK_LINE(1648)
			this->enter->start();
			HX_STACK_LINE(1650)
			if (((this->leave != null()))){
				HX_STACK_LINE(1651)
				this->leave->cleanup();
			}
		}
		HX_STACK_LINE(1656)
		this->leave = null();
		HX_STACK_LINE(1660)
		this->cleanup();
		HX_STACK_LINE(1661)
		this->loadScene(this->sceneToEnter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,enterScene,(void))

Void Engine_obj::switchScene( int sceneID,::com::stencyl::graphics::transitions::Transition leave,::com::stencyl::graphics::transitions::Transition enter){
{
		HX_STACK_PUSH("Engine::switchScene","com/stencyl/Engine.hx",1607);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sceneID,"sceneID");
		HX_STACK_ARG(leave,"leave");
		HX_STACK_ARG(enter,"enter");
		HX_STACK_LINE(1610)
		if ((this->isTransitioning())){
			HX_STACK_LINE(1611)
			return null();
		}
		HX_STACK_LINE(1616)
		::haxe::Log_obj::trace((HX_CSTRING("Switching to scene ") + sceneID),hx::SourceInfo(HX_CSTRING("Engine.hx"),1616,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("switchScene")));
		HX_STACK_LINE(1618)
		if (((bool((leave != null())) && bool(leave->isComplete())))){
			HX_STACK_LINE(1619)
			leave->reset();
		}
		HX_STACK_LINE(1623)
		if (((bool((leave == null())) || bool((leave->duration == (int)0))))){
			HX_STACK_LINE(1624)
			leave = ::com::stencyl::graphics::transitions::Transition_obj::__new((int)0);
		}
		HX_STACK_LINE(1628)
		if (((bool((enter == null())) || bool((enter->duration == (int)0))))){
			HX_STACK_LINE(1629)
			enter = ::com::stencyl::graphics::transitions::Transition_obj::__new((int)1);
		}
		HX_STACK_LINE(1633)
		this->leave = leave;
		HX_STACK_LINE(1634)
		this->enter = enter;
		HX_STACK_LINE(1636)
		if ((!(this->leave->isComplete()))){
			HX_STACK_LINE(1637)
			this->leave->start();
		}
		HX_STACK_LINE(1641)
		this->sceneToEnter = sceneID;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,switchScene,(void))

Void Engine_obj::cleanup( ){
{
		HX_STACK_PUSH("Engine::cleanup","com/stencyl/Engine.hx",1456);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1461)
		if (((bool((::com::stencyl::Engine_obj::debugDrawer != null())) && bool((::com::stencyl::Engine_obj::debugDrawer->m_sprite != null()))))){
			HX_STACK_LINE(1462)
			::com::stencyl::Engine_obj::debugDrawer->m_sprite->get_graphics()->clear();
		}
		HX_STACK_LINE(1466)
		::com::stencyl::utils::Utils_obj::removeAllChildren(this->master);
		HX_STACK_LINE(1467)
		::com::stencyl::utils::Utils_obj::removeAllChildren(this->hudLayer);
		HX_STACK_LINE(1469)
		this->behaviors->destroy();
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1471);
				{
					HX_STACK_LINE(1471)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->actorsPerLayer);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1471);
						{
							HX_STACK_LINE(1471)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1471)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1471)
		for(::cpp::FastIterator_obj< ::flash::display::DisplayObjectContainer > *__it = ::cpp::CreateFastIterator< ::flash::display::DisplayObjectContainer >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::flash::display::DisplayObjectContainer group = __it->next();
			::com::stencyl::utils::Utils_obj::removeAllChildren(group);
		}
		HX_STACK_LINE(1478)
		this->camera->destroy();
		HX_STACK_LINE(1479)
		this->camera = null();
		HX_STACK_LINE(1484)
		if (((this->world != null()))){
			HX_STACK_LINE(1486)
			::box2D::dynamics::B2Body worldbody = this->world->getBodyList();		HX_STACK_VAR(worldbody,"worldbody");
			HX_STACK_LINE(1487)
			::box2D::dynamics::joints::B2Joint j = this->world->getJointList();		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1489)
			while(((j != null()))){
				HX_STACK_LINE(1491)
				this->world->destroyJoint(j);
				HX_STACK_LINE(1492)
				j = j->getNext();
			}
			HX_STACK_LINE(1495)
			while(((worldbody != null()))){
				HX_STACK_LINE(1497)
				this->world->destroyBody(worldbody);
				HX_STACK_LINE(1498)
				worldbody = worldbody->getNext();
			}
		}
		struct _Function_1_2{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1502);
				{
					HX_STACK_LINE(1502)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->actorsOfType);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1502);
						{
							HX_STACK_LINE(1502)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1502)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1502)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >((_Function_1_2::Block(this))());  __it->hasNext(); ){
			Array< ::Dynamic > set = __it->next();
			set->splice((int)0,set->length);
		}
		struct _Function_1_3{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1507);
				{
					HX_STACK_LINE(1507)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->recycledActorsOfType);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1507);
						{
							HX_STACK_LINE(1507)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1507)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1507)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >((_Function_1_3::Block(this))());  __it->hasNext(); ){
			Array< ::Dynamic > rList = __it->next();
			{
				HX_STACK_LINE(1509)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1509)
				while(((_g < rList->length))){
					HX_STACK_LINE(1509)
					::com::stencyl::models::Actor a = rList->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1509)
					++(_g);
					HX_STACK_LINE(1511)
					if ((!(a->destroyed))){
						HX_STACK_LINE(1512)
						a->destroy();
					}
				}
			}
;
		}
		struct _Function_1_4{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1518);
				{
					HX_STACK_LINE(1518)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->recycledActorsOfType);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1518);
						{
							HX_STACK_LINE(1518)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1518)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1518)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >((_Function_1_4::Block(this))());  __it->hasNext(); ){
			Array< ::Dynamic > set = __it->next();
			set->splice((int)0,set->length);
		}
		HX_STACK_LINE(1524)
		if (((bool((this->scene != null())) && bool((this->scene->terrain != null()))))){
			struct _Function_2_1{
				inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1526);
					{
						HX_STACK_LINE(1526)
						Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->scene->terrain);		HX_STACK_VAR(_e,"_e");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_e)
						Dynamic run(){
							HX_STACK_PUSH("*::_Function_3_1","com/stencyl/Engine.hx",1526);
							{
								HX_STACK_LINE(1526)
								return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0(return)

						HX_STACK_LINE(1526)
						return  Dynamic(new _Function_3_1(_e));
					}
					return null();
				}
			};
			HX_STACK_LINE(1525)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::TileLayer > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::TileLayer >((_Function_2_1::Block(this))());  __it->hasNext(); ){
				::com::stencyl::models::scene::TileLayer tl = __it->next();
				tl->clearBitmap();
			}
		}
		struct _Function_1_5{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1532);
				{
					HX_STACK_LINE(1532)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->allActors);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1532);
						{
							HX_STACK_LINE(1532)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1532)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1532)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >((_Function_1_5::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::Actor a = __it->next();
			a->destroy();
		}
		HX_STACK_LINE(1538)
		while(((::Lambda_obj::count(this->allActors,null()) > (int)0))){
			HX_STACK_LINE(1539)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->allActors->keys());  __it->hasNext(); ){
				int key = __it->next();
				this->allActors->remove(key);
			}
		}
		HX_STACK_LINE(1546)
		this->scene->unload();
		HX_STACK_LINE(1548)
		this->actorsOfType = null();
		HX_STACK_LINE(1549)
		this->recycledActorsOfType = null();
		HX_STACK_LINE(1551)
		this->hudActors = null();
		HX_STACK_LINE(1552)
		this->layers = null();
		HX_STACK_LINE(1553)
		this->actorsPerLayer = null();
		HX_STACK_LINE(1554)
		this->layersToDraw = null();
		HX_STACK_LINE(1555)
		this->layerOrders = null();
		HX_STACK_LINE(1556)
		this->dynamicTiles = null();
		HX_STACK_LINE(1557)
		this->animatedTiles = null();
		HX_STACK_LINE(1559)
		this->regions = null();
		HX_STACK_LINE(1560)
		this->terrainRegions = null();
		HX_STACK_LINE(1561)
		this->joints = null();
		HX_STACK_LINE(1562)
		this->groups = null();
		HX_STACK_LINE(1563)
		this->reverseGroups = null();
		HX_STACK_LINE(1564)
		this->allActors = null();
		HX_STACK_LINE(1565)
		this->scene = null();
		HX_STACK_LINE(1566)
		this->tasks = null();
		HX_STACK_LINE(1568)
		this->collisionPairs = null();
		HX_STACK_LINE(1569)
		this->disableCollisionList = null();
		HX_STACK_LINE(1571)
		this->whenKeyPressedListeners = null();
		HX_STACK_LINE(1572)
		this->whenTypeGroupCreatedListeners = null();
		HX_STACK_LINE(1573)
		this->whenTypeGroupDiesListeners = null();
		HX_STACK_LINE(1574)
		this->typeGroupPositionListeners = null();
		HX_STACK_LINE(1575)
		this->collisionListeners = null();
		HX_STACK_LINE(1576)
		this->soundListeners = null();
		HX_STACK_LINE(1578)
		this->whenUpdatedListeners = null();
		HX_STACK_LINE(1579)
		this->whenDrawingListeners = null();
		HX_STACK_LINE(1580)
		this->whenMousePressedListeners = null();
		HX_STACK_LINE(1581)
		this->whenMouseReleasedListeners = null();
		HX_STACK_LINE(1582)
		this->whenMouseMovedListeners = null();
		HX_STACK_LINE(1583)
		this->whenMouseDraggedListeners = null();
		HX_STACK_LINE(1584)
		this->whenPausedListeners = null();
		HX_STACK_LINE(1586)
		this->whenSwipedListeners = null();
		HX_STACK_LINE(1587)
		this->whenMTStartListeners = null();
		HX_STACK_LINE(1588)
		this->whenMTDragListeners = null();
		HX_STACK_LINE(1589)
		this->whenMTEndListeners = null();
		HX_STACK_LINE(1591)
		this->whenFocusChangedListeners = null();
		HX_STACK_LINE(1592)
		this->nativeListeners = null();
		HX_STACK_LINE(1594)
		::com::stencyl::behavior::Script_obj::lastCreatedActor = null();
		HX_STACK_LINE(1595)
		::com::stencyl::behavior::Script_obj::lastCreatedJoint = null();
		HX_STACK_LINE(1596)
		::com::stencyl::behavior::Script_obj::lastCreatedRegion = null();
		HX_STACK_LINE(1597)
		::com::stencyl::behavior::Script_obj::lastCreatedTerrainRegion = null();
		HX_STACK_LINE(1601)
		::com::stencyl::Input_obj::update();
		HX_STACK_LINE(1603)
		this->world = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,cleanup,(void))

Void Engine_obj::optimizePool( ){
{
		HX_STACK_PUSH("Engine::optimizePool","com/stencyl/Engine.hx",1434);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1435);
				{
					HX_STACK_LINE(1435)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->recycledActorsOfType);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1435);
						{
							HX_STACK_LINE(1435)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1435)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1434)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			Array< ::Dynamic > cache = __it->next();
			{
				HX_STACK_LINE(1437)
				Array< ::Dynamic > toRemove = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(toRemove,"toRemove");
				HX_STACK_LINE(1439)
				{
					HX_STACK_LINE(1439)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1439)
					while(((_g < cache->length))){
						HX_STACK_LINE(1439)
						::com::stencyl::models::Actor actor = cache->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
						HX_STACK_LINE(1439)
						++(_g);
						HX_STACK_LINE(1441)
						if (((bool((actor != null())) && bool(actor->recycled)))){
							HX_STACK_LINE(1442)
							toRemove->push(actor);
						}
					}
				}
				HX_STACK_LINE(1447)
				{
					HX_STACK_LINE(1447)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1447)
					while(((_g < toRemove->length))){
						HX_STACK_LINE(1447)
						::com::stencyl::models::Actor actor = toRemove->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
						HX_STACK_LINE(1447)
						++(_g);
						HX_STACK_LINE(1449)
						cache->remove(actor);
						HX_STACK_LINE(1450)
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
		HX_STACK_PUSH("Engine::initLayers","com/stencyl/Engine.hx",1282);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1283)
		::haxe::ds::IntMap layers = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(layers,"layers");
		HX_STACK_LINE(1284)
		::haxe::ds::IntMap orders = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(orders,"orders");
		HX_STACK_LINE(1285)
		::haxe::ds::IntMap exists = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(exists,"exists");
		HX_STACK_LINE(1286)
		int highestLayerOrder = (int)0;		HX_STACK_VAR(highestLayerOrder,"highestLayerOrder");
		HX_STACK_LINE(1288)
		this->tileLayers = this->scene->terrain;
		HX_STACK_LINE(1289)
		this->animatedTiles = this->scene->animatedTiles;
		HX_STACK_LINE(1291)
		if (((this->animatedTiles != null()))){
			HX_STACK_LINE(1293)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->animatedTiles;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1293)
			while(((_g < _g1->length))){
				HX_STACK_LINE(1293)
				::com::stencyl::models::scene::Tile tile = _g1->__get(_g).StaticCast< ::com::stencyl::models::scene::Tile >();		HX_STACK_VAR(tile,"tile");
				HX_STACK_LINE(1293)
				++(_g);
				HX_STACK_LINE(1295)
				tile->currFrame = (int)0;
				HX_STACK_LINE(1296)
				tile->currTime = (int)0;
			}
		}
		HX_STACK_LINE(1300)
		if (((this->scene->terrain != null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1302);
					{
						HX_STACK_LINE(1302)
						Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->scene->terrain);		HX_STACK_VAR(_e,"_e");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_e)
						Dynamic run(){
							HX_STACK_PUSH("*::_Function_3_1","com/stencyl/Engine.hx",1302);
							{
								HX_STACK_LINE(1302)
								return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0(return)

						HX_STACK_LINE(1302)
						return  Dynamic(new _Function_3_1(_e));
					}
					return null();
				}
			};
			HX_STACK_LINE(1301)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::TileLayer > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::TileLayer >((_Function_2_1::Block(this))());  __it->hasNext(); ){
				::com::stencyl::models::scene::TileLayer l = __it->next();
				{
					HX_STACK_LINE(1304)
					highestLayerOrder = ::Std_obj::_int(::Math_obj::max(highestLayerOrder,l->zOrder));
					HX_STACK_LINE(1306)
					layers->set(l->zOrder,l->layerID);
					HX_STACK_LINE(1307)
					orders->set(l->layerID,l->zOrder);
					HX_STACK_LINE(1308)
					exists->set(l->zOrder,l->zOrder);
				}
;
			}
		}
		HX_STACK_LINE(1312)
		{
			HX_STACK_LINE(1312)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (highestLayerOrder + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1312)
			while(((_g1 < _g))){
				HX_STACK_LINE(1312)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1314)
				if ((!(exists->exists(i)))){
					HX_STACK_LINE(1315)
					layers->set(i,(int)-1);
				}
			}
		}
		HX_STACK_LINE(1320)
		this->layersToDraw = layers;
		HX_STACK_LINE(1321)
		this->layerOrders = orders;
		HX_STACK_LINE(1323)
		bool foundBottom = false;		HX_STACK_VAR(foundBottom,"foundBottom");
		HX_STACK_LINE(1324)
		bool foundMiddle = false;		HX_STACK_VAR(foundMiddle,"foundMiddle");
		HX_STACK_LINE(1325)
		int realNumLayers = (int)0;		HX_STACK_VAR(realNumLayers,"realNumLayers");
		HX_STACK_LINE(1328)
		{
			HX_STACK_LINE(1328)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (highestLayerOrder + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1328)
			while(((_g1 < _g))){
				HX_STACK_LINE(1328)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1330)
				int layerID = this->layersToDraw->get(i);		HX_STACK_VAR(layerID,"layerID");
				HX_STACK_LINE(1332)
				if (((layerID != (int)-1))){
					HX_STACK_LINE(1333)
					(realNumLayers)++;
				}
			}
		}
		HX_STACK_LINE(1338)
		int numLayersProcessed = (int)0;		HX_STACK_VAR(numLayersProcessed,"numLayersProcessed");
		HX_STACK_LINE(1340)
		{
			HX_STACK_LINE(1340)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (highestLayerOrder + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1340)
			while(((_g1 < _g))){
				HX_STACK_LINE(1340)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1342)
				int j = (highestLayerOrder - i);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(1343)
				int layerID = this->layersToDraw->get(j);		HX_STACK_VAR(layerID,"layerID");
				HX_STACK_LINE(1345)
				if (((bool((layerID == (int)-1)) || bool(!(this->layersToDraw->exists(j)))))){
					HX_STACK_LINE(1346)
					continue;
				}
				HX_STACK_LINE(1351)
				::com::stencyl::models::scene::layers::RegularLayer list = ::com::stencyl::models::scene::layers::RegularLayer_obj::__new();		HX_STACK_VAR(list,"list");
				HX_STACK_LINE(1352)
				::com::stencyl::models::scene::Layer terrain = null();		HX_STACK_VAR(terrain,"terrain");
				HX_STACK_LINE(1353)
				::flash::display::Sprite overlay = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(overlay,"overlay");
				HX_STACK_LINE(1360)
				::flash::display::Sprite bitmapOverlay = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(bitmapOverlay,"bitmapOverlay");
				HX_STACK_LINE(1363)
				if (((this->scene->terrain != null()))){
					HX_STACK_LINE(1364)
					terrain = ::com::stencyl::models::scene::Layer_obj::__new(layerID,j,this->scene->terrain->get(layerID),overlay,bitmapOverlay);
				}
				HX_STACK_LINE(1368)
				if ((!(foundBottom))){
					HX_STACK_LINE(1370)
					foundBottom = true;
					HX_STACK_LINE(1371)
					this->bottomLayer = j;
				}
				HX_STACK_LINE(1374)
				if (((bool(!(foundMiddle)) && bool((numLayersProcessed == ::Math_obj::floor((Float(realNumLayers) / Float((int)2)))))))){
					HX_STACK_LINE(1376)
					foundMiddle = true;
					HX_STACK_LINE(1377)
					this->middleLayer = j;
				}
				HX_STACK_LINE(1380)
				if (((terrain != null()))){
					HX_STACK_LINE(1382)
					::com::stencyl::models::scene::TileLayer tileLayer = this->scene->terrain->get(layerID);		HX_STACK_VAR(tileLayer,"tileLayer");
					HX_STACK_LINE(1384)
					if (((tileLayer == null()))){
						HX_STACK_LINE(1386)
						::haxe::Log_obj::trace((HX_CSTRING("LayerID does not exist: ") + layerID),hx::SourceInfo(HX_CSTRING("Engine.hx"),1386,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("initLayers")));
						HX_STACK_LINE(1387)
						continue;
					}
					HX_STACK_LINE(1390)
					tileLayer->reset();
					HX_STACK_LINE(1392)
					terrain->set_name(::com::stencyl::Engine_obj::REGULAR_LAYER);
					HX_STACK_LINE(1393)
					this->master->addChild(terrain);
					HX_STACK_LINE(1394)
					this->master->addChild(tileLayer);
					HX_STACK_LINE(1396)
					if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
						HX_STACK_LINE(1397)
						this->scene->terrain->get(layerID)->__Field(HX_CSTRING("mountGrid"),true)();
					}
					HX_STACK_LINE(1401)
					this->layers->set(layerID,terrain);
				}
				HX_STACK_LINE(1404)
				list->set_name(::com::stencyl::Engine_obj::REGULAR_LAYER);
				HX_STACK_LINE(1405)
				this->master->addChild(list);
				HX_STACK_LINE(1406)
				this->master->addChild(overlay);
				HX_STACK_LINE(1407)
				this->master->addChild(bitmapOverlay);
				HX_STACK_LINE(1409)
				this->actorsPerLayer->set(layerID,list);
				HX_STACK_LINE(1413)
				this->topLayer = j;
				HX_STACK_LINE(1414)
				this->defaultGroup = list;
				HX_STACK_LINE(1416)
				(numLayersProcessed)++;
			}
		}
		HX_STACK_LINE(1420)
		if (((this->defaultGroup == null()))){
			HX_STACK_LINE(1422)
			this->defaultGroup = ::com::stencyl::models::scene::layers::RegularLayer_obj::__new();
			HX_STACK_LINE(1423)
			this->defaultGroup->set_name(::com::stencyl::Engine_obj::REGULAR_LAYER);
			HX_STACK_LINE(1424)
			this->master->addChild(this->defaultGroup);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,initLayers,(void))

Void Engine_obj::loadTerrain( ){
{
		HX_STACK_PUSH("Engine::loadTerrain","com/stencyl/Engine.hx",1212);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1213)
		this->initLayers();
		HX_STACK_LINE(1215)
		{
			HX_STACK_LINE(1215)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->scene->wireframes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1215)
			while(((_g < _g1->length))){
				HX_STACK_LINE(1215)
				::com::stencyl::models::scene::Wireframe wireframe = _g1->__get(_g).StaticCast< ::com::stencyl::models::scene::Wireframe >();		HX_STACK_VAR(wireframe,"wireframe");
				HX_STACK_LINE(1215)
				++(_g);
				HX_STACK_LINE(1217)
				::com::stencyl::models::Actor a = null();		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(1219)
				if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
				}
				else{
					HX_STACK_LINE(1249)
					a = ::com::stencyl::models::Actor_obj::__new(hx::ObjectPtr<OBJ_>(this),::com::stencyl::utils::Utils_obj::INTEGER_MAX,::com::stencyl::models::GameModel_obj::TERRAIN_ID,wireframe->x,wireframe->y,this->getTopLayer(),::Std_obj::_int(wireframe->width),::Std_obj::_int(wireframe->height),null(),::haxe::ds::StringMap_obj::__new(),null(),null(),false,true,false,false,wireframe->shape,null(),null(),null(),null());
				}
				HX_STACK_LINE(1272)
				a->set_name(HX_CSTRING("Terrain"));
				HX_STACK_LINE(1273)
				a->typeID = (int)-1;
				HX_STACK_LINE(1274)
				a->set_visible(false);
				HX_STACK_LINE(1276)
				this->getGroup(::com::stencyl::models::GameModel_obj::TERRAIN_ID,null())->addChild(a);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadTerrain,(void))

Void Engine_obj::loadJoints( ){
{
		HX_STACK_PUSH("Engine::loadJoints","com/stencyl/Engine.hx",1108);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1109)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(1110)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1114);
				{
					HX_STACK_LINE(1114)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->scene->joints);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1114);
						{
							HX_STACK_LINE(1114)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1114)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1114)
		for(::cpp::FastIterator_obj< ::box2D::dynamics::joints::B2JointDef > *__it = ::cpp::CreateFastIterator< ::box2D::dynamics::joints::B2JointDef >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::box2D::dynamics::joints::B2JointDef jd = __it->next();
			{
				HX_STACK_LINE(1116)
				int a1 = jd->actor1;		HX_STACK_VAR(a1,"a1");
				HX_STACK_LINE(1117)
				int a2 = jd->actor2;		HX_STACK_VAR(a2,"a2");
				HX_STACK_LINE(1118)
				bool collide = jd->collideConnected;		HX_STACK_VAR(collide,"collide");
				HX_STACK_LINE(1120)
				::box2D::dynamics::B2Body one = null();		HX_STACK_VAR(one,"one");
				HX_STACK_LINE(1121)
				::box2D::dynamics::B2Body two = null();		HX_STACK_VAR(two,"two");
				HX_STACK_LINE(1123)
				::box2D::common::math::B2Vec2 pt = null();		HX_STACK_VAR(pt,"pt");
				HX_STACK_LINE(1128)
				if (((jd->type == (int)3))){
					HX_STACK_LINE(1129)
					this->joints->set(jd->ID,this->createStickJoint(this->getActor(a1)->body,this->getActor(a2)->body,jd->ID,collide,null(),null()));
				}
				else{
					HX_STACK_LINE(1134)
					if (((jd->type == (int)1))){
						HX_STACK_LINE(1136)
						::box2D::dynamics::joints::B2RevoluteJointDef r = hx::TCast< box2D::dynamics::joints::B2RevoluteJointDef >::cast(jd);		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(1137)
						pt = this->getActor(a1)->body->getLocalCenter()->copy(null());
						HX_STACK_LINE(1139)
						pt->x = ::com::stencyl::Engine_obj::toPixelUnits(pt->x);
						HX_STACK_LINE(1140)
						pt->y = ::com::stencyl::Engine_obj::toPixelUnits(pt->y);
						HX_STACK_LINE(1142)
						one = this->getActor(a1)->body;
						HX_STACK_LINE(1143)
						two = null();
						HX_STACK_LINE(1145)
						if (((a2 == (int)-1))){
							HX_STACK_LINE(1146)
							two = this->world->m_groundBody;
						}
						else{
							HX_STACK_LINE(1151)
							two = this->getActor(a2)->body;
						}
						HX_STACK_LINE(1155)
						this->joints->set(jd->ID,this->createHingeJoint(one,two,pt,jd->ID,collide,r->enableLimit,r->enableMotor,r->lowerAngle,r->upperAngle,r->maxMotorTorque,-(r->motorSpeed)));
					}
					else{
						HX_STACK_LINE(1172)
						if (((bool((jd->type == (int)2)) || bool((jd->type == (int)7))))){
							HX_STACK_LINE(1174)
							::box2D::dynamics::joints::B2LineJointDef s = hx::TCast< box2D::dynamics::joints::B2LineJointDef >::cast(jd);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(1175)
							pt = this->getActor(a1)->body->getLocalCenter()->copy(null());
							HX_STACK_LINE(1177)
							pt->x = ::com::stencyl::Engine_obj::toPixelUnits(pt->x);
							HX_STACK_LINE(1178)
							pt->y = ::com::stencyl::Engine_obj::toPixelUnits(pt->y);
							HX_STACK_LINE(1180)
							one = this->getActor(a1)->body;
							HX_STACK_LINE(1181)
							two = null();
							HX_STACK_LINE(1183)
							if (((a2 == (int)-1))){
								HX_STACK_LINE(1184)
								two = this->world->m_groundBody;
							}
							else{
								HX_STACK_LINE(1189)
								two = this->getActor(a2)->body;
							}
							HX_STACK_LINE(1193)
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
		HX_STACK_PUSH("Engine::loadTerrainRegions","com/stencyl/Engine.hx",1084);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1085)
		this->terrainRegions = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(1087)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(1088)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1092);
				{
					HX_STACK_LINE(1092)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->scene->terrainRegions);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1092);
						{
							HX_STACK_LINE(1092)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1092)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1092)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::TerrainDef > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::TerrainDef >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::scene::TerrainDef r = __it->next();
			{
				HX_STACK_LINE(1094)
				::com::stencyl::models::Terrain region = ::com::stencyl::models::Terrain_obj::__new(hx::ObjectPtr<OBJ_>(this),r->x,r->y,r->shapes,r->groupID,r->fillColor);		HX_STACK_VAR(region,"region");
				HX_STACK_LINE(1095)
				region->set_name(r->name);
				HX_STACK_LINE(1097)
				region->setX((::com::stencyl::Engine_obj::toPixelUnits(r->x) + (Float(region->regionWidth) / Float((int)2))),null(),null());
				HX_STACK_LINE(1098)
				region->setY((::com::stencyl::Engine_obj::toPixelUnits(r->y) + (Float(region->regionHeight) / Float((int)2))),null(),null());
				HX_STACK_LINE(1100)
				region->ID = r->ID;
				HX_STACK_LINE(1102)
				this->addTerrainRegion(region);
				HX_STACK_LINE(1103)
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
		this->regions = ::haxe::ds::IntMap_obj::__new();
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1065);
				{
					HX_STACK_LINE(1065)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->scene->regions);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1065);
						{
							HX_STACK_LINE(1065)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1065)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1065)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::RegionDef > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::RegionDef >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::scene::RegionDef r = __it->next();
			{
				HX_STACK_LINE(1067)
				::com::stencyl::models::Region region = ::com::stencyl::models::Region_obj::__new(hx::ObjectPtr<OBJ_>(this),r->x,r->y,r->shapes,r->simpleBounds);		HX_STACK_VAR(region,"region");
				HX_STACK_LINE(1068)
				region->set_name(r->name);
				HX_STACK_LINE(1070)
				if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
					HX_STACK_LINE(1072)
					region->setX((::com::stencyl::Engine_obj::toPixelUnits(r->x) + (Float(region->regionWidth) / Float((int)2))),null(),null());
					HX_STACK_LINE(1073)
					region->setY((::com::stencyl::Engine_obj::toPixelUnits(r->y) + (Float(region->regionHeight) / Float((int)2))),null(),null());
				}
				HX_STACK_LINE(1076)
				region->ID = r->ID;
				HX_STACK_LINE(1078)
				this->addRegion(region);
				HX_STACK_LINE(1079)
				this->regions->set(r->ID,region);
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
		HX_STACK_PUSH("Engine::loadScene","com/stencyl/Engine.hx",636);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sceneID,"sceneID");
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",637);
				{
					HX_STACK_LINE(637)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->atlasesToUnload);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",637);
						{
							HX_STACK_LINE(637)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(637)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(637)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			int atlas = __it->next();
			::com::stencyl::Data_obj::get()->unloadAtlas(atlas);
		}
		HX_STACK_LINE(643)
		::cpp::vm::Gc_obj::run(true);
		struct _Function_1_2{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",646);
				{
					HX_STACK_LINE(646)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->atlasesToLoad);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",646);
						{
							HX_STACK_LINE(646)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(646)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(646)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >((_Function_1_2::Block(this))());  __it->hasNext(); ){
			int atlas = __it->next();
			::com::stencyl::Data_obj::get()->loadAtlas(atlas);
		}
		HX_STACK_LINE(651)
		this->atlasesToLoad = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(652)
		this->atlasesToUnload = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(654)
		this->collisionPairs = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(658)
		{
			HX_STACK_LINE(658)
			::com::stencyl::Engine_obj::paddingTop = (int)0;
			HX_STACK_LINE(658)
			::com::stencyl::Engine_obj::paddingLeft = (int)0;
			HX_STACK_LINE(658)
			::com::stencyl::Engine_obj::paddingBottom = (int)0;
			HX_STACK_LINE(658)
			::com::stencyl::Engine_obj::paddingRight = (int)0;
		}
		HX_STACK_LINE(660)
		this->tasks = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(662)
		this->scene = ::com::stencyl::models::GameModel_obj::get()->scenes->get(sceneID);
		HX_STACK_LINE(664)
		if (((bool((sceneID == (int)-1)) || bool((this->scene == null()))))){
			HX_STACK_LINE(666)
			this->scene = ::com::stencyl::models::GameModel_obj::get()->scenes->get(::com::stencyl::models::GameModel_obj::get()->defaultSceneID);
			HX_STACK_LINE(669)
			if (((this->scene == null()))){
				HX_STACK_LINE(671)
				::haxe::Log_obj::trace((HX_CSTRING("Could not load scene: ") + sceneID),hx::SourceInfo(HX_CSTRING("Engine.hx"),671,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("loadScene")));
				HX_STACK_LINE(672)
				::com::stencyl::Engine_obj::stage->removeEventListener(::flash::events::Event_obj::ENTER_FRAME,this->onUpdate_dyn(),null());
				HX_STACK_LINE(673)
				return null();
			}
		}
		HX_STACK_LINE(677)
		this->scene->load();
		HX_STACK_LINE(679)
		::com::stencyl::Engine_obj::sceneWidth = this->scene->sceneWidth;
		HX_STACK_LINE(680)
		::com::stencyl::Engine_obj::sceneHeight = this->scene->sceneHeight;
		HX_STACK_LINE(682)
		this->behaviors = ::com::stencyl::behavior::BehaviorManager_obj::__new();
		HX_STACK_LINE(684)
		this->groups = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(685)
		this->reverseGroups = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(687)
		{
			HX_STACK_LINE(687)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::com::stencyl::models::GameModel_obj::get()->groups;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(687)
			while(((_g < _g1->length))){
				HX_STACK_LINE(687)
				::com::stencyl::models::GroupDef grp = _g1->__get(_g).StaticCast< ::com::stencyl::models::GroupDef >();		HX_STACK_VAR(grp,"grp");
				HX_STACK_LINE(687)
				++(_g);
				HX_STACK_LINE(689)
				::com::stencyl::models::actor::Group g = ::com::stencyl::models::actor::Group_obj::__new(grp->ID,grp->name);		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(690)
				this->groups->set(grp->ID,g);
				HX_STACK_LINE(691)
				this->reverseGroups->set(grp->name,g);
				HX_STACK_LINE(692)
				g->name = grp->name;
			}
		}
		HX_STACK_LINE(696)
		::com::stencyl::models::actor::Group regionGroup = ::com::stencyl::models::actor::Group_obj::__new(::com::stencyl::models::GameModel_obj::REGION_ID,HX_CSTRING("Regions"));		HX_STACK_VAR(regionGroup,"regionGroup");
		HX_STACK_LINE(697)
		this->groups->set(::com::stencyl::models::GameModel_obj::REGION_ID,regionGroup);
		HX_STACK_LINE(698)
		this->reverseGroups->set(HX_CSTRING("Regions"),regionGroup);
		HX_STACK_LINE(700)
		this->disableCollisionList = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(701)
		this->actorsOfType = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(702)
		this->recycledActorsOfType = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(704)
		this->regions = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(705)
		this->terrainRegions = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(706)
		this->joints = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(707)
		this->layers = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(708)
		this->tileLayers = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(709)
		this->dynamicTiles = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(710)
		this->animatedTiles = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(711)
		this->hudActors = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(712)
		this->allActors = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(713)
		this->actorsPerLayer = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(714)
		this->nextID = (int)0;
		HX_STACK_LINE(717)
		this->whenKeyPressedListeners = ::haxe::ds::StringMap_obj::__new();
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
		struct _Function_1_3{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",767);
				{
					HX_STACK_LINE(767)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->tileLayers);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",767);
						{
							HX_STACK_LINE(767)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(767)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(767)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::TileLayer > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::TileLayer >((_Function_1_3::Block(this))());  __it->hasNext(); ){
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
		HX_STACK_PUSH("Engine::begin","com/stencyl/Engine.hx",483);
		HX_STACK_THIS(this);
		HX_STACK_ARG(initSceneID,"initSceneID");
		HX_STACK_LINE(484)
		this->atlasesToLoad = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(485)
		this->atlasesToUnload = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(487)
		::com::stencyl::Input_obj::enable();
		HX_STACK_LINE(488)
		::com::stencyl::Input_obj::define(::com::stencyl::Engine_obj::INTERNAL_SHIFT,Array_obj< int >::__new().Add((int)16));
		HX_STACK_LINE(489)
		::com::stencyl::Input_obj::define(::com::stencyl::Engine_obj::INTERNAL_CTRL,Array_obj< int >::__new().Add((int)17));
		HX_STACK_LINE(491)
		::com::stencyl::Engine_obj::landscape = ::scripts::MyAssets_obj::landscape;
		HX_STACK_LINE(492)
		int stageWidth = ::scripts::MyAssets_obj::stageWidth;		HX_STACK_VAR(stageWidth,"stageWidth");
		HX_STACK_LINE(493)
		int stageHeight = ::scripts::MyAssets_obj::stageHeight;		HX_STACK_VAR(stageHeight,"stageHeight");
		HX_STACK_LINE(495)
		::com::stencyl::Engine_obj::screenWidth = ::Std_obj::_int(stageWidth);
		HX_STACK_LINE(496)
		::com::stencyl::Engine_obj::screenHeight = ::Std_obj::_int(stageHeight);
		HX_STACK_LINE(497)
		::com::stencyl::Engine_obj::screenWidthHalf = ::Std_obj::_int((Float(stageWidth) / Float((int)2)));
		HX_STACK_LINE(498)
		::com::stencyl::Engine_obj::screenHeightHalf = ::Std_obj::_int((Float(stageHeight) / Float((int)2)));
		HX_STACK_LINE(515)
		::com::stencyl::Data_obj::get();
		HX_STACK_LINE(516)
		::com::stencyl::models::GameModel_obj::get()->loadScenes();
		HX_STACK_LINE(518)
		this->g = ::com::stencyl::graphics::G_obj::__new();
		HX_STACK_LINE(522)
		::com::stencyl::Engine_obj::started = true;
		HX_STACK_LINE(523)
		this->cameraMoved = false;
		HX_STACK_LINE(524)
		this->tileUpdated = false;
		HX_STACK_LINE(528)
		this->shakeTimer = (int)0;
		HX_STACK_LINE(529)
		this->shakeIntensity = 0.01;
		HX_STACK_LINE(530)
		this->isShaking = false;
		HX_STACK_LINE(534)
		this->leave = null();
		HX_STACK_LINE(535)
		this->enter = null();
		HX_STACK_LINE(537)
		::com::stencyl::Engine_obj::cameraX = (int)0;
		HX_STACK_LINE(538)
		::com::stencyl::Engine_obj::cameraY = (int)0;
		HX_STACK_LINE(540)
		this->cameraOldX = (int)-1;
		HX_STACK_LINE(541)
		this->cameraOldY = (int)-1;
		HX_STACK_LINE(543)
		this->acc = (int)0;
		HX_STACK_LINE(544)
		this->lastTime = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(547)
		::com::stencyl::Engine_obj::sceneWidth = stageWidth;
		HX_STACK_LINE(548)
		::com::stencyl::Engine_obj::sceneHeight = stageHeight;
		HX_STACK_LINE(551)
		this->master = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(552)
		this->root->addChild(this->master);
		HX_STACK_LINE(554)
		this->hudLayer = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(555)
		this->root->addChild(this->hudLayer);
		HX_STACK_LINE(557)
		this->transitionLayer = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(558)
		this->root->addChild(this->transitionLayer);
		HX_STACK_LINE(565)
		this->transitionBitmapLayer = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(570)
		this->debugLayer = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(571)
		this->root->addChild(this->debugLayer);
		HX_STACK_LINE(574)
		this->actorsToCreateInNextScene = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(575)
		this->gameAttributes = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(580)
		if ((::scripts::MyAssets_obj::showConsole)){
			HX_STACK_LINE(583)
			this->stats = ::com::nmefermmmtools::debug::Stats_obj::__new(null());
			HX_STACK_LINE(584)
			::com::stencyl::Engine_obj::stage->addChild(this->stats);
		}
		HX_STACK_LINE(605)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(::com::stencyl::models::GameModel_obj::get()->gameAttributes->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(607)
				Dynamic value = ::com::stencyl::models::GameModel_obj::get()->gameAttributes->get(key);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(607)
				this->gameAttributes->set(key,value);
			}
;
		}
		HX_STACK_LINE(611)
		this->channels = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(613)
		{
			HX_STACK_LINE(613)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::com::stencyl::behavior::Script_obj::CHANNELS;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(613)
			while(((_g1 < _g))){
				HX_STACK_LINE(613)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(615)
				this->channels->push(::com::stencyl::models::SoundChannel_obj::__new(hx::ObjectPtr<OBJ_>(this),index));
			}
		}
		HX_STACK_LINE(628)
		this->enter = ::com::stencyl::graphics::transitions::FadeInTransition_obj::__new(0.5,null());
		HX_STACK_LINE(629)
		this->enter->start();
		HX_STACK_LINE(630)
		this->sceneToEnter = initSceneID;
		HX_STACK_LINE(632)
		this->loadScene(initSceneID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,begin,(void))

Void Engine_obj::toggleFullscreen( hx::Null< bool >  __o_forceOff){
bool forceOff = __o_forceOff.Default(false);
	HX_STACK_PUSH("Engine::toggleFullscreen","com/stencyl/Engine.hx",382);
	HX_STACK_THIS(this);
	HX_STACK_ARG(forceOff,"forceOff");
{
		HX_STACK_LINE(383)
		if ((forceOff)){
			HX_STACK_LINE(384)
			this->isFullScreen = true;
		}
		HX_STACK_LINE(388)
		if ((this->isFullScreen)){
			HX_STACK_LINE(390)
			this->isFullScreen = false;
			HX_STACK_LINE(391)
			::flash::Lib_obj::get_current()->get_stage()->set_displayState(::flash::display::StageDisplayState_obj::NORMAL);
			HX_STACK_LINE(393)
			this->root->set_scaleX(1.0);
			HX_STACK_LINE(394)
			this->root->set_scaleY(1.0);
			HX_STACK_LINE(395)
			this->root->set_x(0.0);
			HX_STACK_LINE(396)
			this->root->set_y(0.0);
			HX_STACK_LINE(399)
			if (((this->stats != null()))){
				HX_STACK_LINE(401)
				this->stats->set_x((::flash::Lib_obj::get_current()->get_stage()->get_stageWidth() - this->stats->get_width()));
				HX_STACK_LINE(402)
				this->stats->set_y((int)0);
			}
			HX_STACK_LINE(405)
			::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null());
		}
		else{
			HX_STACK_LINE(410)
			this->isFullScreen = true;
			HX_STACK_LINE(411)
			::flash::Lib_obj::get_current()->get_stage()->set_displayState(::flash::display::StageDisplayState_obj::FULL_SCREEN_INTERACTIVE);
			HX_STACK_LINE(413)
			int xScaleFresh = ::Math_obj::floor((Float(hx::TCast< Float >::cast(::flash::Lib_obj::get_current()->get_stage()->get_stageWidth())) / Float(hx::TCast< Float >::cast(::scripts::MyAssets_obj::stageWidth))));		HX_STACK_VAR(xScaleFresh,"xScaleFresh");
			HX_STACK_LINE(414)
			int yScaleFresh = ::Math_obj::floor((Float(hx::TCast< Float >::cast(::flash::Lib_obj::get_current()->get_stage()->get_stageHeight())) / Float(hx::TCast< Float >::cast(::scripts::MyAssets_obj::stageHeight))));		HX_STACK_VAR(yScaleFresh,"yScaleFresh");
			HX_STACK_LINE(416)
			if (((xScaleFresh < yScaleFresh))){
				HX_STACK_LINE(418)
				this->root->set_scaleX(hx::TCast< Float >::cast(xScaleFresh));
				HX_STACK_LINE(419)
				this->root->set_scaleY(hx::TCast< Float >::cast(xScaleFresh));
			}
			else{
				HX_STACK_LINE(422)
				if (((yScaleFresh < xScaleFresh))){
					HX_STACK_LINE(424)
					this->root->set_scaleX(hx::TCast< Float >::cast(yScaleFresh));
					HX_STACK_LINE(425)
					this->root->set_scaleY(hx::TCast< Float >::cast(yScaleFresh));
				}
				else{
					HX_STACK_LINE(430)
					this->root->set_scaleX(hx::TCast< Float >::cast(xScaleFresh));
					HX_STACK_LINE(431)
					this->root->set_scaleY(hx::TCast< Float >::cast(yScaleFresh));
				}
			}
			HX_STACK_LINE(434)
			this->root->set_x(((Float(hx::TCast< Float >::cast(::flash::Lib_obj::get_current()->get_stage()->get_stageWidth())) / Float(2.0)) - (Float(hx::TCast< Float >::cast((::scripts::MyAssets_obj::stageWidth * this->root->get_scaleX()))) / Float(2.0))));
			HX_STACK_LINE(435)
			this->root->set_y(((Float(hx::TCast< Float >::cast(::flash::Lib_obj::get_current()->get_stage()->get_stageHeight())) / Float(2.0)) - (Float(hx::TCast< Float >::cast((::scripts::MyAssets_obj::stageHeight * this->root->get_scaleY()))) / Float(2.0))));
			HX_STACK_LINE(437)
			::flash::geom::Rectangle r = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,::scripts::MyAssets_obj::stageWidth,::scripts::MyAssets_obj::stageHeight);		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(438)
			this->root->set_scrollRect(r);
			HX_STACK_LINE(440)
			if (((this->stats != null()))){
				HX_STACK_LINE(442)
				this->stats->set_x((::flash::Lib_obj::get_current()->get_stage()->get_stageWidth() - this->stats->get_width()));
				HX_STACK_LINE(443)
				this->stats->set_y((int)0);
			}
			HX_STACK_LINE(446)
			::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),false,(int)2,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,toggleFullscreen,(void))

Void Engine_obj::onKeyDown( ::flash::events::KeyboardEvent e){
{
		HX_STACK_PUSH("Engine::onKeyDown","com/stencyl/Engine.hx",374);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(374)
		if (((e->keyCode == (int)27))){
			HX_STACK_LINE(376)
			this->toggleFullscreen(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onKeyDown,(void))

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
	HX_STACK_PUSH("Engine::toPhysicalUnits","com/stencyl/Engine.hx",3206);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(3207)
	hx::DivEq(value,::com::stencyl::Engine_obj::physicsScale);
	HX_STACK_LINE(3209)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,toPhysicalUnits,return )

Float Engine_obj::toPixelUnits( Float value){
	HX_STACK_PUSH("Engine::toPixelUnits","com/stencyl/Engine.hx",3213);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(3214)
	hx::MultEq(value,::com::stencyl::Engine_obj::physicsScale);
	HX_STACK_LINE(3216)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,toPixelUnits,return )

::box2D::common::math::B2Vec2 Engine_obj::vToPhysicalUnits( ::box2D::common::math::B2Vec2 v){
	HX_STACK_PUSH("Engine::vToPhysicalUnits","com/stencyl/Engine.hx",3220);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(3221)
	v->x = ::com::stencyl::Engine_obj::toPhysicalUnits(v->x);
	HX_STACK_LINE(3222)
	v->y = ::com::stencyl::Engine_obj::toPhysicalUnits(v->y);
	HX_STACK_LINE(3224)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,vToPhysicalUnits,return )

::box2D::common::math::B2Vec2 Engine_obj::vToPixelUnits( ::box2D::common::math::B2Vec2 v){
	HX_STACK_PUSH("Engine::vToPixelUnits","com/stencyl/Engine.hx",3228);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(3229)
	v->x = ::com::stencyl::Engine_obj::toPixelUnits(v->x);
	HX_STACK_LINE(3230)
	v->y = ::com::stencyl::Engine_obj::toPixelUnits(v->y);
	HX_STACK_LINE(3232)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,vToPixelUnits,return )

Void Engine_obj::invokeListeners( Dynamic listeners){
{
		HX_STACK_PUSH("Engine::invokeListeners","com/stencyl/Engine.hx",3775);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_LINE(3776)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(3778)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(3780)
			try{
				HX_STACK_LINE(3782)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(3783)
				f(listeners).Cast< Void >();
				HX_STACK_LINE(3785)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(3786)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(3792)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3793,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(3796)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,invokeListeners,(void))

Void Engine_obj::invokeListeners2( Dynamic listeners,Dynamic value){
{
		HX_STACK_PUSH("Engine::invokeListeners2","com/stencyl/Engine.hx",3802);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(3803)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(3805)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(3807)
			try{
				HX_STACK_LINE(3809)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(3810)
				f(value,listeners).Cast< Void >();
				HX_STACK_LINE(3812)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(3813)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(3819)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3820,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(3823)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,invokeListeners2,(void))

Void Engine_obj::invokeListeners3( Dynamic listeners,Dynamic value,Dynamic value2){
{
		HX_STACK_PUSH("Engine::invokeListeners3","com/stencyl/Engine.hx",3829);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_ARG(value,"value");
		HX_STACK_ARG(value2,"value2");
		HX_STACK_LINE(3830)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(3832)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(3834)
			try{
				HX_STACK_LINE(3836)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(3837)
				f(value,value2,listeners).Cast< Void >();
				HX_STACK_LINE(3839)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(3840)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(3846)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3847,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners3")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(3850)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,invokeListeners3,(void))

Void Engine_obj::invokeListeners4( Dynamic listeners,Dynamic value,Dynamic value2,Dynamic value3){
{
		HX_STACK_PUSH("Engine::invokeListeners4","com/stencyl/Engine.hx",3856);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_ARG(value,"value");
		HX_STACK_ARG(value2,"value2");
		HX_STACK_ARG(value3,"value3");
		HX_STACK_LINE(3857)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(3859)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(3861)
			try{
				HX_STACK_LINE(3863)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(3864)
				f(value,value2,value3,listeners).Cast< Void >();
				HX_STACK_LINE(3866)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(3867)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(3873)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3874,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners4")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(3877)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,invokeListeners4,(void))

Void Engine_obj::invokeListeners5( Dynamic listeners,Dynamic value,Dynamic value2,Dynamic value3,Dynamic value4){
{
		HX_STACK_PUSH("Engine::invokeListeners5","com/stencyl/Engine.hx",3883);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_ARG(value,"value");
		HX_STACK_ARG(value2,"value2");
		HX_STACK_ARG(value3,"value3");
		HX_STACK_ARG(value4,"value4");
		HX_STACK_LINE(3884)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(3886)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(3888)
			try{
				HX_STACK_LINE(3890)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(3891)
				f(value,value2,value3,value4,listeners).Cast< Void >();
				HX_STACK_LINE(3893)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(3894)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(3900)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3901,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners5")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(3904)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Engine_obj,invokeListeners5,(void))

Void Engine_obj::invokeListeners6( Dynamic listeners,Dynamic value,Dynamic value2,Dynamic value3,Dynamic value4,Dynamic value5){
{
		HX_STACK_PUSH("Engine::invokeListeners6","com/stencyl/Engine.hx",3910);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_ARG(value,"value");
		HX_STACK_ARG(value2,"value2");
		HX_STACK_ARG(value3,"value3");
		HX_STACK_ARG(value4,"value4");
		HX_STACK_ARG(value5,"value5");
		HX_STACK_LINE(3911)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(3913)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(3915)
			try{
				HX_STACK_LINE(3917)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(3918)
				f(value,value2,value3,value4,value5,listeners).Cast< Void >();
				HX_STACK_LINE(3920)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(3921)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(3927)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),3928,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners6")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(3931)
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
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
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
		if (HX_FIELD_EQ(inName,"toggleFullscreen") ) { return toggleFullscreen_dyn(); }
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
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"regions") ) { regions=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"hudActors") ) { hudActors=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allActors") ) { allActors=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"tileLayers") ) { tileLayers=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"collisionPairs") ) { collisionPairs=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
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
	HX_CSTRING("toggleFullscreen"),
	HX_CSTRING("onKeyDown"),
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
