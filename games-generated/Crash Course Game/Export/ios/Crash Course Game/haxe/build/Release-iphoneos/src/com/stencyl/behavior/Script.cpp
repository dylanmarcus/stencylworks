#include <hxcpp.h>

#ifndef INCLUDED_Ads
#include <Ads.h>
#endif
#ifndef INCLUDED_GameCenter
#include <GameCenter.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Native
#include <Native.h>
#endif
#ifndef INCLUDED_Purchases
#include <Purchases.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
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
#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
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
#ifndef INCLUDED_com_stencyl_behavior_ActorScript
#include <com/stencyl/behavior/ActorScript.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Behavior
#include <com/stencyl/behavior/Behavior.h>
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
#ifndef INCLUDED_com_stencyl_graphics_transitions_BlindsTransition
#include <com/stencyl/graphics/transitions/BlindsTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_BubblesTransition
#include <com/stencyl/graphics/transitions/BubblesTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_CircleTransition
#include <com/stencyl/graphics/transitions/CircleTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_CrossfadeTransition
#include <com/stencyl/graphics/transitions/CrossfadeTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_FadeInTransition
#include <com/stencyl/graphics/transitions/FadeInTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_FadeOutTransition
#include <com/stencyl/graphics/transitions/FadeOutTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_PixelizeTransition
#include <com/stencyl/graphics/transitions/PixelizeTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_RectangleTransition
#include <com/stencyl/graphics/transitions/RectangleTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_SlideTransition
#include <com/stencyl/graphics/transitions/SlideTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_Transition
#include <com/stencyl/graphics/transitions/Transition.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Font
#include <com/stencyl/models/Font.h>
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
#ifndef INCLUDED_com_stencyl_models_actor_Collision
#include <com/stencyl/models/actor/Collision.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Group
#include <com/stencyl/models/actor/Group.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Layer
#include <com/stencyl/models/scene/Layer.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_ScrollingBitmap
#include <com/stencyl/models/scene/ScrollingBitmap.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_TileLayer
#include <com/stencyl/models/scene/TileLayer.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_layers_RegularLayer
#include <com/stencyl/models/scene/layers/RegularLayer.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_ColorMatrix
#include <com/stencyl/utils/ColorMatrix.h>
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
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
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
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_media_SoundChannel
#include <flash/media/SoundChannel.h>
#endif
#ifndef INCLUDED_flash_net_SharedObject
#include <flash/net/SharedObject.h>
#endif
#ifndef INCLUDED_flash_net_SharedObjectFlushStatus
#include <flash/net/SharedObjectFlushStatus.h>
#endif
#ifndef INCLUDED_flash_net_URLLoader
#include <flash/net/URLLoader.h>
#endif
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
#endif
#ifndef INCLUDED_flash_net_URLVariables
#include <flash/net/URLVariables.h>
#endif
#ifndef INCLUDED_flash_ui_Mouse
#include <flash/ui/Mouse.h>
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
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif
namespace com{
namespace stencyl{
namespace behavior{

Void Script_obj::__construct(::com::stencyl::Engine engine)
{
HX_STACK_PUSH("Script::new","com/stencyl/behavior/Script.hx",123);
{
	HX_STACK_LINE(124)
	this->engine = this->scene = engine;
	HX_STACK_LINE(126)
	this->scriptInit = false;
	HX_STACK_LINE(127)
	this->checkProperties = false;
	HX_STACK_LINE(128)
	this->nameMap = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(129)
	this->propertyChangeListeners = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(130)
	this->equalityPairs = ::haxe::ds::ObjectMap_obj::__new();
}
;
	return null();
}

Script_obj::~Script_obj() { }

Dynamic Script_obj::__CreateEmpty() { return  new Script_obj; }
hx::ObjectPtr< Script_obj > Script_obj::__new(::com::stencyl::Engine engine)
{  hx::ObjectPtr< Script_obj > result = new Script_obj();
	result->__construct(engine);
	return result;}

Dynamic Script_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Script_obj > result = new Script_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic Script_obj::createBrightnessFilter( Float b){
	HX_STACK_PUSH("Script::createBrightnessFilter","com/stencyl/behavior/Script.hx",2948);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(2949)
	::com::stencyl::utils::ColorMatrix cm = ::com::stencyl::utils::ColorMatrix_obj::__new();		HX_STACK_VAR(cm,"cm");
	HX_STACK_LINE(2950)
	cm->adjustBrightness((Float(b) / Float((int)100)));
	struct _Function_1_1{
		inline static Array< Float > Block( ::com::stencyl::utils::ColorMatrix &cm){
			HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",2951);
			{
				HX_STACK_LINE(2951)
				Array< Float > out = cm->matrix;		HX_STACK_VAR(out,"out");
				HX_STACK_LINE(2951)
				out[(int)0] = cm->m11;
				HX_STACK_LINE(2951)
				out[(int)1] = cm->m12;
				HX_STACK_LINE(2951)
				out[(int)2] = cm->m13;
				HX_STACK_LINE(2951)
				out[(int)3] = cm->m14;
				HX_STACK_LINE(2951)
				out[(int)4] = cm->m15;
				HX_STACK_LINE(2951)
				out[(int)5] = cm->m21;
				HX_STACK_LINE(2951)
				out[(int)6] = cm->m22;
				HX_STACK_LINE(2951)
				out[(int)7] = cm->m23;
				HX_STACK_LINE(2951)
				out[(int)8] = cm->m24;
				HX_STACK_LINE(2951)
				out[(int)9] = cm->m25;
				HX_STACK_LINE(2951)
				out[(int)10] = cm->m31;
				HX_STACK_LINE(2951)
				out[(int)11] = cm->m32;
				HX_STACK_LINE(2951)
				out[(int)12] = cm->m33;
				HX_STACK_LINE(2951)
				out[(int)13] = cm->m34;
				HX_STACK_LINE(2951)
				out[(int)14] = cm->m35;
				HX_STACK_LINE(2951)
				out[(int)15] = cm->m41;
				HX_STACK_LINE(2951)
				out[(int)16] = cm->m42;
				HX_STACK_LINE(2951)
				out[(int)17] = cm->m43;
				HX_STACK_LINE(2951)
				out[(int)18] = cm->m44;
				HX_STACK_LINE(2951)
				out[(int)19] = cm->m45;
				HX_STACK_LINE(2951)
				return out;
			}
			return null();
		}
	};
	HX_STACK_LINE(2951)
	Dynamic matrix = hx::TCastToArray(_Function_1_1::Block(cm));		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(2952)
	matrix->__Field(HX_CSTRING("insert"),true)((int)0,HX_CSTRING("BrightnessFilter"));
	HX_STACK_LINE(2953)
	return matrix;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,createBrightnessFilter,return )

Dynamic Script_obj::createSaturationFilter( Float s){
	HX_STACK_PUSH("Script::createSaturationFilter","com/stencyl/behavior/Script.hx",2939);
	HX_STACK_THIS(this);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(2940)
	::com::stencyl::utils::ColorMatrix cm = ::com::stencyl::utils::ColorMatrix_obj::__new();		HX_STACK_VAR(cm,"cm");
	HX_STACK_LINE(2941)
	cm->adjustSaturation((Float(s) / Float((int)100)));
	struct _Function_1_1{
		inline static Array< Float > Block( ::com::stencyl::utils::ColorMatrix &cm){
			HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",2942);
			{
				HX_STACK_LINE(2942)
				Array< Float > out = cm->matrix;		HX_STACK_VAR(out,"out");
				HX_STACK_LINE(2942)
				out[(int)0] = cm->m11;
				HX_STACK_LINE(2942)
				out[(int)1] = cm->m12;
				HX_STACK_LINE(2942)
				out[(int)2] = cm->m13;
				HX_STACK_LINE(2942)
				out[(int)3] = cm->m14;
				HX_STACK_LINE(2942)
				out[(int)4] = cm->m15;
				HX_STACK_LINE(2942)
				out[(int)5] = cm->m21;
				HX_STACK_LINE(2942)
				out[(int)6] = cm->m22;
				HX_STACK_LINE(2942)
				out[(int)7] = cm->m23;
				HX_STACK_LINE(2942)
				out[(int)8] = cm->m24;
				HX_STACK_LINE(2942)
				out[(int)9] = cm->m25;
				HX_STACK_LINE(2942)
				out[(int)10] = cm->m31;
				HX_STACK_LINE(2942)
				out[(int)11] = cm->m32;
				HX_STACK_LINE(2942)
				out[(int)12] = cm->m33;
				HX_STACK_LINE(2942)
				out[(int)13] = cm->m34;
				HX_STACK_LINE(2942)
				out[(int)14] = cm->m35;
				HX_STACK_LINE(2942)
				out[(int)15] = cm->m41;
				HX_STACK_LINE(2942)
				out[(int)16] = cm->m42;
				HX_STACK_LINE(2942)
				out[(int)17] = cm->m43;
				HX_STACK_LINE(2942)
				out[(int)18] = cm->m44;
				HX_STACK_LINE(2942)
				out[(int)19] = cm->m45;
				HX_STACK_LINE(2942)
				return out;
			}
			return null();
		}
	};
	HX_STACK_LINE(2942)
	Dynamic matrix = hx::TCastToArray(_Function_1_1::Block(cm));		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(2943)
	matrix->__Field(HX_CSTRING("insert"),true)((int)0,HX_CSTRING("SaturationFilter"));
	HX_STACK_LINE(2944)
	return matrix;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,createSaturationFilter,return )

Dynamic Script_obj::createHueFilter( Float h){
	HX_STACK_PUSH("Script::createHueFilter","com/stencyl/behavior/Script.hx",2929);
	HX_STACK_THIS(this);
	HX_STACK_ARG(h,"h");
	HX_STACK_LINE(2930)
	::com::stencyl::utils::ColorMatrix cm = ::com::stencyl::utils::ColorMatrix_obj::__new();		HX_STACK_VAR(cm,"cm");
	HX_STACK_LINE(2931)
	cm->adjustHue(h);
	HX_STACK_LINE(2932)
	cm->adjustSaturation((int)1);
	struct _Function_1_1{
		inline static Array< Float > Block( ::com::stencyl::utils::ColorMatrix &cm){
			HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",2933);
			{
				HX_STACK_LINE(2933)
				Array< Float > out = cm->matrix;		HX_STACK_VAR(out,"out");
				HX_STACK_LINE(2933)
				out[(int)0] = cm->m11;
				HX_STACK_LINE(2933)
				out[(int)1] = cm->m12;
				HX_STACK_LINE(2933)
				out[(int)2] = cm->m13;
				HX_STACK_LINE(2933)
				out[(int)3] = cm->m14;
				HX_STACK_LINE(2933)
				out[(int)4] = cm->m15;
				HX_STACK_LINE(2933)
				out[(int)5] = cm->m21;
				HX_STACK_LINE(2933)
				out[(int)6] = cm->m22;
				HX_STACK_LINE(2933)
				out[(int)7] = cm->m23;
				HX_STACK_LINE(2933)
				out[(int)8] = cm->m24;
				HX_STACK_LINE(2933)
				out[(int)9] = cm->m25;
				HX_STACK_LINE(2933)
				out[(int)10] = cm->m31;
				HX_STACK_LINE(2933)
				out[(int)11] = cm->m32;
				HX_STACK_LINE(2933)
				out[(int)12] = cm->m33;
				HX_STACK_LINE(2933)
				out[(int)13] = cm->m34;
				HX_STACK_LINE(2933)
				out[(int)14] = cm->m35;
				HX_STACK_LINE(2933)
				out[(int)15] = cm->m41;
				HX_STACK_LINE(2933)
				out[(int)16] = cm->m42;
				HX_STACK_LINE(2933)
				out[(int)17] = cm->m43;
				HX_STACK_LINE(2933)
				out[(int)18] = cm->m44;
				HX_STACK_LINE(2933)
				out[(int)19] = cm->m45;
				HX_STACK_LINE(2933)
				return out;
			}
			return null();
		}
	};
	HX_STACK_LINE(2933)
	Dynamic matrix = hx::TCastToArray(_Function_1_1::Block(cm));		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(2934)
	matrix->__Field(HX_CSTRING("insert"),true)((int)0,HX_CSTRING("HueFilter"));
	HX_STACK_LINE(2935)
	return matrix;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,createHueFilter,return )

Dynamic Script_obj::createTintFilter( int color,hx::Null< Float >  __o_amount){
Float amount = __o_amount.Default(1);
	HX_STACK_PUSH("Script::createTintFilter","com/stencyl/behavior/Script.hx",2918);
	HX_STACK_THIS(this);
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(amount,"amount");
{
		HX_STACK_LINE(2919)
		Dynamic matrix = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(2920)
		hx::IndexRef((matrix).mPtr,(int)0) = HX_CSTRING("TintFilter");
		HX_STACK_LINE(2921)
		hx::IndexRef((matrix).mPtr,(int)1) = (Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float(255.0));
		HX_STACK_LINE(2922)
		hx::IndexRef((matrix).mPtr,(int)2) = (Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float(255.0));
		HX_STACK_LINE(2923)
		hx::IndexRef((matrix).mPtr,(int)3) = (Float(((int(color) & int((int)255)))) / Float(255.0));
		HX_STACK_LINE(2924)
		hx::IndexRef((matrix).mPtr,(int)4) = amount;
		HX_STACK_LINE(2925)
		return matrix;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createTintFilter,return )

Dynamic Script_obj::createNegativeFilter( ){
	HX_STACK_PUSH("Script::createNegativeFilter","com/stencyl/behavior/Script.hx",2911);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2912)
	Dynamic matrix = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(2913)
	hx::IndexRef((matrix).mPtr,(int)0) = HX_CSTRING("NegativeFilter");
	HX_STACK_LINE(2914)
	return matrix;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,createNegativeFilter,return )

Dynamic Script_obj::createSepiaFilter( ){
	HX_STACK_PUSH("Script::createSepiaFilter","com/stencyl/behavior/Script.hx",2899);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2900)
	Dynamic matrix = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(2901)
	matrix = matrix->__Field(HX_CSTRING("concat"),true)(Dynamic( Array_obj<Dynamic>::__new().Add(0.34).Add(0.33).Add(0.33).Add(0.00).Add(30.00)));
	HX_STACK_LINE(2902)
	matrix = matrix->__Field(HX_CSTRING("concat"),true)(Dynamic( Array_obj<Dynamic>::__new().Add(0.33).Add(0.34).Add(0.33).Add(0.00).Add(20.00)));
	HX_STACK_LINE(2903)
	matrix = matrix->__Field(HX_CSTRING("concat"),true)(Dynamic( Array_obj<Dynamic>::__new().Add(0.33).Add(0.33).Add(0.34).Add(0.00).Add(0.00)));
	HX_STACK_LINE(2904)
	matrix = matrix->__Field(HX_CSTRING("concat"),true)(Dynamic( Array_obj<Dynamic>::__new().Add(0.00).Add(0.00).Add(0.00).Add(1.00).Add(0.00)));
	HX_STACK_LINE(2905)
	matrix->__Field(HX_CSTRING("insert"),true)((int)0,HX_CSTRING("SepiaFilter"));
	HX_STACK_LINE(2907)
	return matrix;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,createSepiaFilter,return )

Dynamic Script_obj::createGrayscaleFilter( ){
	HX_STACK_PUSH("Script::createGrayscaleFilter","com/stencyl/behavior/Script.hx",2892);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2893)
	Dynamic matrix = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(2894)
	hx::IndexRef((matrix).mPtr,(int)0) = HX_CSTRING("GrayscaleFilter");
	HX_STACK_LINE(2895)
	return matrix;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,createGrayscaleFilter,return )

Void Script_obj::disableDebugDrawing( ){
{
		HX_STACK_PUSH("Script::disableDebugDrawing","com/stencyl/behavior/Script.hx",2877);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2878)
		::com::stencyl::Engine_obj::DEBUG_DRAW = false;
		HX_STACK_LINE(2880)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2881)
			::com::stencyl::Engine_obj::debugDrawer->m_sprite->get_graphics()->clear();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,disableDebugDrawing,(void))

Void Script_obj::enableDebugDrawing( ){
{
		HX_STACK_PUSH("Script::enableDebugDrawing","com/stencyl/behavior/Script.hx",2867);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2868)
		::com::stencyl::Engine_obj::DEBUG_DRAW = true;
		HX_STACK_LINE(2870)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2871)
			::com::stencyl::Engine_obj::debugDrawer->m_sprite->get_graphics()->clear();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,enableDebugDrawing,(void))

Void Script_obj::setIconBadgeNumber( int n){
{
		HX_STACK_PUSH("Script::setIconBadgeNumber","com/stencyl/behavior/Script.hx",2856);
		HX_STACK_THIS(this);
		HX_STACK_ARG(n,"n");
		HX_STACK_LINE(2856)
		::Native_obj::setIconBadgeNumber(n);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,setIconBadgeNumber,(void))

Void Script_obj::setKeyboardText( ::String text){
{
		HX_STACK_PUSH("Script::setKeyboardText","com/stencyl/behavior/Script.hx",2849);
		HX_STACK_THIS(this);
		HX_STACK_ARG(text,"text");
		HX_STACK_LINE(2849)
		::Native_obj::setKeyboardText(text);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,setKeyboardText,(void))

Void Script_obj::hideKeyboard( ){
{
		HX_STACK_PUSH("Script::hideKeyboard","com/stencyl/behavior/Script.hx",2842);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2842)
		::Native_obj::hideKeyboard();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,hideKeyboard,(void))

Void Script_obj::showKeyboard( ){
{
		HX_STACK_PUSH("Script::showKeyboard","com/stencyl/behavior/Script.hx",2835);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2835)
		::Native_obj::showKeyboard();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,showKeyboard,(void))

Void Script_obj::vibrate( hx::Null< Float >  __o_time){
Float time = __o_time.Default(1);
	HX_STACK_PUSH("Script::vibrate","com/stencyl/behavior/Script.hx",2828);
	HX_STACK_THIS(this);
	HX_STACK_ARG(time,"time");
{
		HX_STACK_LINE(2828)
		::Native_obj::vibrate(time);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,vibrate,(void))

Void Script_obj::showAlert( ::String title,::String msg){
{
		HX_STACK_PUSH("Script::showAlert","com/stencyl/behavior/Script.hx",2821);
		HX_STACK_THIS(this);
		HX_STACK_ARG(title,"title");
		HX_STACK_ARG(msg,"msg");
		HX_STACK_LINE(2821)
		::Native_obj::showAlert(title,msg);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,showAlert,(void))

int Script_obj::purchasesGetQuantity( ::String productID){
	HX_STACK_PUSH("Script::purchasesGetQuantity","com/stencyl/behavior/Script.hx",2808);
	HX_STACK_THIS(this);
	HX_STACK_ARG(productID,"productID");
	HX_STACK_LINE(2808)
	return ::Purchases_obj::getQuantity(productID);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,purchasesGetQuantity,return )

Void Script_obj::purchasesUse( ::String productID){
{
		HX_STACK_PUSH("Script::purchasesUse","com/stencyl/behavior/Script.hx",2801);
		HX_STACK_THIS(this);
		HX_STACK_ARG(productID,"productID");
		HX_STACK_LINE(2801)
		::Purchases_obj::use(productID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,purchasesUse,(void))

Void Script_obj::purchasesRequestProductInfo( Dynamic productIDlist){
{
		HX_STACK_PUSH("Script::purchasesRequestProductInfo","com/stencyl/behavior/Script.hx",2790);
		HX_STACK_THIS(this);
		HX_STACK_ARG(productIDlist,"productIDlist");
		HX_STACK_LINE(2790)
		::Purchases_obj::requestProductInfo(productIDlist);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,purchasesRequestProductInfo,(void))

::String Script_obj::purchasesGetPrice( ::String productID){
	HX_STACK_PUSH("Script::purchasesGetPrice","com/stencyl/behavior/Script.hx",2781);
	HX_STACK_THIS(this);
	HX_STACK_ARG(productID,"productID");
	HX_STACK_LINE(2781)
	return ::Purchases_obj::getPrice(productID);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,purchasesGetPrice,return )

::String Script_obj::purchasesGetDescription( ::String productID){
	HX_STACK_PUSH("Script::purchasesGetDescription","com/stencyl/behavior/Script.hx",2772);
	HX_STACK_THIS(this);
	HX_STACK_ARG(productID,"productID");
	HX_STACK_LINE(2772)
	return ::Purchases_obj::getDescription(productID);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,purchasesGetDescription,return )

::String Script_obj::purchasesGetTitle( ::String productID){
	HX_STACK_PUSH("Script::purchasesGetTitle","com/stencyl/behavior/Script.hx",2763);
	HX_STACK_THIS(this);
	HX_STACK_ARG(productID,"productID");
	HX_STACK_LINE(2763)
	return ::Purchases_obj::getTitle(productID);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,purchasesGetTitle,return )

bool Script_obj::purchasesHasBought( ::String productID){
	HX_STACK_PUSH("Script::purchasesHasBought","com/stencyl/behavior/Script.hx",2754);
	HX_STACK_THIS(this);
	HX_STACK_ARG(productID,"productID");
	HX_STACK_LINE(2754)
	return ::Purchases_obj::hasBought(productID);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,purchasesHasBought,return )

Void Script_obj::purchasesBuy( ::String productID){
{
		HX_STACK_PUSH("Script::purchasesBuy","com/stencyl/behavior/Script.hx",2747);
		HX_STACK_THIS(this);
		HX_STACK_ARG(productID,"productID");
		HX_STACK_LINE(2747)
		::Purchases_obj::buy(productID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,purchasesBuy,(void))

Void Script_obj::purchasesRestore( ){
{
		HX_STACK_PUSH("Script::purchasesRestore","com/stencyl/behavior/Script.hx",2740);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2740)
		::Purchases_obj::restorePurchases();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,purchasesRestore,(void))

bool Script_obj::purchasesAreInitialized( ){
	HX_STACK_PUSH("Script::purchasesAreInitialized","com/stencyl/behavior/Script.hx",2731);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2731)
	return ::Purchases_obj::canBuy();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,purchasesAreInitialized,return )

Void Script_obj::gameCenterResetAchievements( ){
{
		HX_STACK_PUSH("Script::gameCenterResetAchievements","com/stencyl/behavior/Script.hx",2722);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2722)
		::GameCenter_obj::resetAchievements();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,gameCenterResetAchievements,(void))

Void Script_obj::gameCenterSubmitAchievement( ::String achievementID,Float percent){
{
		HX_STACK_PUSH("Script::gameCenterSubmitAchievement","com/stencyl/behavior/Script.hx",2715);
		HX_STACK_THIS(this);
		HX_STACK_ARG(achievementID,"achievementID");
		HX_STACK_ARG(percent,"percent");
		HX_STACK_LINE(2715)
		::GameCenter_obj::reportAchievement(achievementID,percent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,gameCenterSubmitAchievement,(void))

Void Script_obj::gameCenterSubmitScore( Float score,::String categoryID){
{
		HX_STACK_PUSH("Script::gameCenterSubmitScore","com/stencyl/behavior/Script.hx",2708);
		HX_STACK_THIS(this);
		HX_STACK_ARG(score,"score");
		HX_STACK_ARG(categoryID,"categoryID");
		HX_STACK_LINE(2708)
		::GameCenter_obj::reportScore(categoryID,::Std_obj::_int(score));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,gameCenterSubmitScore,(void))

Void Script_obj::gameCenterShowAchievements( ){
{
		HX_STACK_PUSH("Script::gameCenterShowAchievements","com/stencyl/behavior/Script.hx",2701);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2701)
		::GameCenter_obj::showAchievements();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,gameCenterShowAchievements,(void))

Void Script_obj::gameCenterShowLeaderboard( ::String categoryID){
{
		HX_STACK_PUSH("Script::gameCenterShowLeaderboard","com/stencyl/behavior/Script.hx",2694);
		HX_STACK_THIS(this);
		HX_STACK_ARG(categoryID,"categoryID");
		HX_STACK_LINE(2694)
		::GameCenter_obj::showLeaderboard(categoryID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,gameCenterShowLeaderboard,(void))

::String Script_obj::gameCenterGetPlayerID( ){
	HX_STACK_PUSH("Script::gameCenterGetPlayerID","com/stencyl/behavior/Script.hx",2685);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2685)
	return ::GameCenter_obj::getPlayerID();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,gameCenterGetPlayerID,return )

::String Script_obj::gameCenterGetPlayerName( ){
	HX_STACK_PUSH("Script::gameCenterGetPlayerName","com/stencyl/behavior/Script.hx",2676);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2676)
	return ::GameCenter_obj::getPlayerName();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,gameCenterGetPlayerName,return )

bool Script_obj::gameCenterIsAuthenticated( ){
	HX_STACK_PUSH("Script::gameCenterIsAuthenticated","com/stencyl/behavior/Script.hx",2667);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2667)
	return ::GameCenter_obj::isAuthenticated();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,gameCenterIsAuthenticated,return )

Void Script_obj::gameCenterInitialize( ){
{
		HX_STACK_PUSH("Script::gameCenterInitialize","com/stencyl/behavior/Script.hx",2660);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2660)
		::GameCenter_obj::initialize();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,gameCenterInitialize,(void))

Void Script_obj::hideMobileAd( ){
{
		HX_STACK_PUSH("Script::hideMobileAd","com/stencyl/behavior/Script.hx",2646);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2648)
		::Ads_obj::initialize(null(),null());
		HX_STACK_LINE(2649)
		::Ads_obj::hideAd();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,hideMobileAd,(void))

Void Script_obj::showMobileAd( ){
{
		HX_STACK_PUSH("Script::showMobileAd","com/stencyl/behavior/Script.hx",2634);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2636)
		::Ads_obj::initialize(null(),null());
		HX_STACK_LINE(2637)
		::Ads_obj::showAd(::scripts::MyAssets_obj::adPositionBottom);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,showMobileAd,(void))

Void Script_obj::unloadAtlas( int atlasID){
{
		HX_STACK_PUSH("Script::unloadAtlas","com/stencyl/behavior/Script.hx",2625);
		HX_STACK_THIS(this);
		HX_STACK_ARG(atlasID,"atlasID");
		HX_STACK_LINE(2625)
		this->engine->atlasesToUnload->set(atlasID,atlasID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,unloadAtlas,(void))

Void Script_obj::loadAtlas( int atlasID){
{
		HX_STACK_PUSH("Script::loadAtlas","com/stencyl/behavior/Script.hx",2618);
		HX_STACK_THIS(this);
		HX_STACK_ARG(atlasID,"atlasID");
		HX_STACK_LINE(2618)
		this->engine->atlasesToLoad->set(atlasID,atlasID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,loadAtlas,(void))

Void Script_obj::mochiSubmitScore( ::String boardID,Float score,Dynamic startFunc,Dynamic endFunc){
{
		HX_STACK_PUSH("Script::mochiSubmitScore","com/stencyl/behavior/Script.hx",2579);
		HX_STACK_THIS(this);
		HX_STACK_ARG(boardID,"boardID");
		HX_STACK_ARG(score,"score");
		HX_STACK_ARG(startFunc,"startFunc");
		HX_STACK_ARG(endFunc,"endFunc");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,mochiSubmitScore,(void))

Void Script_obj::mochiShowScores( ::String boardID,Dynamic startFunc,Dynamic endFunc){
{
		HX_STACK_PUSH("Script::mochiShowScores","com/stencyl/behavior/Script.hx",2549);
		HX_STACK_THIS(this);
		HX_STACK_ARG(boardID,"boardID");
		HX_STACK_ARG(startFunc,"startFunc");
		HX_STACK_ARG(endFunc,"endFunc");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,mochiShowScores,(void))

Void Script_obj::mochiShowAd( int width,int height,Dynamic startFunc,Dynamic endFunc){
{
		HX_STACK_PUSH("Script::mochiShowAd","com/stencyl/behavior/Script.hx",2513);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(startFunc,"startFunc");
		HX_STACK_ARG(endFunc,"endFunc");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,mochiShowAd,(void))

int Script_obj::kongregateGetUserID( ){
	HX_STACK_PUSH("Script::kongregateGetUserID","com/stencyl/behavior/Script.hx",2500);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2500)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,kongregateGetUserID,return )

::String Script_obj::kongregateGetUsername( ){
	HX_STACK_PUSH("Script::kongregateGetUsername","com/stencyl/behavior/Script.hx",2491);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2491)
	return HX_CSTRING("Guest");
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,kongregateGetUsername,return )

bool Script_obj::kongregateIsGuest( ){
	HX_STACK_PUSH("Script::kongregateIsGuest","com/stencyl/behavior/Script.hx",2482);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2482)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,kongregateIsGuest,return )

Void Script_obj::kongregateSubmitStat( ::String name,Float stat){
{
		HX_STACK_PUSH("Script::kongregateSubmitStat","com/stencyl/behavior/Script.hx",2475);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(stat,"stat");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,kongregateSubmitStat,(void))

Void Script_obj::kongregateInitAPI( ){
{
		HX_STACK_PUSH("Script::kongregateInitAPI","com/stencyl/behavior/Script.hx",2468);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,kongregateInitAPI,(void))

Void Script_obj::newgroundsHelper( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("Script::newgroundsHelper","com/stencyl/behavior/Script.hx",2457);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,newgroundsHelper,(void))

Void Script_obj::newgroundsShowScore( ::String boardName){
{
		HX_STACK_PUSH("Script::newgroundsShowScore","com/stencyl/behavior/Script.hx",2409);
		HX_STACK_THIS(this);
		HX_STACK_ARG(boardName,"boardName");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,newgroundsShowScore,(void))

Void Script_obj::newgroundsSubmitScore( ::String boardName,Float value){
{
		HX_STACK_PUSH("Script::newgroundsSubmitScore","com/stencyl/behavior/Script.hx",2402);
		HX_STACK_THIS(this);
		HX_STACK_ARG(boardName,"boardName");
		HX_STACK_ARG(value,"value");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,newgroundsSubmitScore,(void))

Void Script_obj::newgroundsUnlockMedal( ::String medalName){
{
		HX_STACK_PUSH("Script::newgroundsUnlockMedal","com/stencyl/behavior/Script.hx",2389);
		HX_STACK_THIS(this);
		HX_STACK_ARG(medalName,"medalName");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,newgroundsUnlockMedal,(void))

Void Script_obj::newgroundsSetMedalPosition( int x,int y){
{
		HX_STACK_PUSH("Script::newgroundsSetMedalPosition","com/stencyl/behavior/Script.hx",2375);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,newgroundsSetMedalPosition,(void))

Void Script_obj::newgroundsShowAd( ){
{
		HX_STACK_PUSH("Script::newgroundsShowAd","com/stencyl/behavior/Script.hx",2363);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,newgroundsShowAd,(void))

Void Script_obj::simpleTweet( ::String message,::String gameURL){
{
		HX_STACK_PUSH("Script::simpleTweet","com/stencyl/behavior/Script.hx",2347);
		HX_STACK_THIS(this);
		HX_STACK_ARG(message,"message");
		HX_STACK_ARG(gameURL,"gameURL");
		HX_STACK_LINE(2347)
		this->openURLInBrowser((HX_CSTRING("http://twitter.com/home?status=") + ::StringTools_obj::urlEncode(((message + HX_CSTRING(" ")) + gameURL))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,simpleTweet,(void))

Void Script_obj::postToURL( ::String URL,::String data,Dynamic fn){
{
		HX_STACK_PUSH("Script::postToURL","com/stencyl/behavior/Script.hx",2308);
		HX_STACK_THIS(this);
		HX_STACK_ARG(URL,"URL");
		HX_STACK_ARG(data,"data");
		HX_STACK_ARG(fn,"fn");
		HX_STACK_LINE(2309)
		if (((fn == null()))){
			HX_STACK_LINE(2310)
			fn = this->defaultURLHandler_dyn();
		}
		HX_STACK_LINE(2314)
		::flash::net::URLRequest request = ::flash::net::URLRequest_obj::__new(URL);		HX_STACK_VAR(request,"request");
		HX_STACK_LINE(2315)
		request->method = HX_CSTRING("POST");
		HX_STACK_LINE(2317)
		if (((data != null()))){
			HX_STACK_LINE(2318)
			request->data = ::flash::net::URLVariables_obj::__new(data);
		}
		HX_STACK_LINE(2322)
		try{
			HX_STACK_LINE(2324)
			::flash::net::URLLoader loader = ::flash::net::URLLoader_obj::__new(request);		HX_STACK_VAR(loader,"loader");
			HX_STACK_LINE(2325)
			loader->addEventListener(::flash::events::Event_obj::COMPLETE,fn,null(),null(),null());
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::String >() ){
				HX_STACK_BEGIN_CATCH
				::String error = __e;{
					HX_STACK_LINE(2334)
					::haxe::Log_obj::trace(HX_CSTRING("Cannot open URL."),hx::SourceInfo(HX_CSTRING("Script.hx"),2335,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("postToURL")));
				}
			}
			else throw(__e);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,postToURL,(void))

Void Script_obj::visitURL( ::String URL,Dynamic fn){
{
		HX_STACK_PUSH("Script::visitURL","com/stencyl/behavior/Script.hx",2278);
		HX_STACK_THIS(this);
		HX_STACK_ARG(URL,"URL");
		HX_STACK_ARG(fn,"fn");
		HX_STACK_LINE(2279)
		if (((fn == null()))){
			HX_STACK_LINE(2280)
			fn = this->defaultURLHandler_dyn();
		}
		HX_STACK_LINE(2284)
		try{
			HX_STACK_LINE(2286)
			::flash::net::URLRequest request = ::flash::net::URLRequest_obj::__new(URL);		HX_STACK_VAR(request,"request");
			HX_STACK_LINE(2287)
			request->method = HX_CSTRING("GET");
			HX_STACK_LINE(2289)
			::flash::net::URLLoader loader = ::flash::net::URLLoader_obj::__new(request);		HX_STACK_VAR(loader,"loader");
			HX_STACK_LINE(2290)
			loader->addEventListener(::flash::events::Event_obj::COMPLETE,fn,null(),null(),null());
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::String >() ){
				HX_STACK_BEGIN_CATCH
				::String error = __e;{
					HX_STACK_LINE(2299)
					::haxe::Log_obj::trace(HX_CSTRING("Cannot open URL."),hx::SourceInfo(HX_CSTRING("Script.hx"),2300,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("visitURL")));
				}
			}
			else throw(__e);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,visitURL,(void))

Void Script_obj::openURLInBrowser( ::String URL){
{
		HX_STACK_PUSH("Script::openURLInBrowser","com/stencyl/behavior/Script.hx",2270);
		HX_STACK_THIS(this);
		HX_STACK_ARG(URL,"URL");
		HX_STACK_LINE(2270)
		::flash::Lib_obj::getURL(::flash::net::URLRequest_obj::__new(URL),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,openURLInBrowser,(void))

Void Script_obj::defaultURLHandler( ::flash::events::Event event){
{
		HX_STACK_PUSH("Script::defaultURLHandler","com/stencyl/behavior/Script.hx",2257);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(2258)
		::flash::net::URLLoader loader = ::flash::net::URLLoader_obj::__new(event->get_target());		HX_STACK_VAR(loader,"loader");
		HX_STACK_LINE(2259)
		::haxe::Log_obj::trace((HX_CSTRING("Visited URL: ") + ::Std_obj::string(loader->data)),hx::SourceInfo(HX_CSTRING("Script.hx"),2259,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("defaultURLHandler")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,defaultURLHandler,(void))

Void Script_obj::loadGame( ::String fileName,Dynamic onComplete){
{
		HX_STACK_PUSH("Script::loadGame","com/stencyl/behavior/Script.hx",2238);
		HX_STACK_THIS(this);
		HX_STACK_ARG(fileName,"fileName");
		HX_STACK_ARG(onComplete,"onComplete");
		HX_STACK_LINE(2239)
		::flash::net::SharedObject data = ::flash::net::SharedObject_obj::getLocal(fileName,null(),null());		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(2241)
		::haxe::Log_obj::trace((HX_CSTRING("Loaded Save: ") + fileName),hx::SourceInfo(HX_CSTRING("Script.hx"),2241,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("loadGame")));
		HX_STACK_LINE(2243)
		{
			HX_STACK_LINE(2243)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::String > _g1 = ::Reflect_obj::fields(data->data);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2243)
			while(((_g < _g1->length))){
				HX_STACK_LINE(2243)
				::String key = _g1->__get(_g);		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(2243)
				++(_g);
				HX_STACK_LINE(2245)
				::haxe::Log_obj::trace(((key + HX_CSTRING(" - ")) + ::Std_obj::string(::Reflect_obj::field(data->data,key))),hx::SourceInfo(HX_CSTRING("Script.hx"),2245,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("loadGame")));
				HX_STACK_LINE(2246)
				{
					HX_STACK_LINE(2246)
					Dynamic value = ::Reflect_obj::field(data->data,key);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(2246)
					this->engine->gameAttributes->set(key,value);
				}
			}
		}
		HX_STACK_LINE(2249)
		onComplete(true).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,loadGame,(void))

Void Script_obj::saveGame( ::String fileName,Dynamic onComplete){
{
		HX_STACK_PUSH("Script::saveGame","com/stencyl/behavior/Script.hx",2187);
		HX_STACK_THIS(this);
		HX_STACK_ARG(fileName,"fileName");
		HX_STACK_ARG(onComplete,"onComplete");
		HX_STACK_LINE(2188)
		::flash::net::SharedObject so = ::flash::net::SharedObject_obj::getLocal(fileName,null(),null());		HX_STACK_VAR(so,"so");
		HX_STACK_LINE(2190)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->engine->gameAttributes->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(2192)
				Dynamic o = so->data;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2192)
				if (((o != null()))){
					HX_STACK_LINE(2192)
					o->__SetField(key,this->engine->gameAttributes->get(key),false);
				}
			}
;
		}
		HX_STACK_LINE(2198)
		::flash::net::SharedObjectFlushStatus flushStatus = null();		HX_STACK_VAR(flushStatus,"flushStatus");
		HX_STACK_LINE(2201)
		try{
			HX_STACK_LINE(2202)
			flushStatus = so->flush(null());
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(2208)
					::haxe::Log_obj::trace((((HX_CSTRING("Error: Failed to save - ") + fileName) + HX_CSTRING(" - ")) + ::Std_obj::string(e)),hx::SourceInfo(HX_CSTRING("Script.hx"),2208,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("saveGame")));
					HX_STACK_LINE(2210)
					onComplete(false).Cast< Void >();
					HX_STACK_LINE(2211)
					return null();
				}
			}
		}
		HX_STACK_LINE(2214)
		::haxe::Log_obj::trace(flushStatus,hx::SourceInfo(HX_CSTRING("Script.hx"),2214,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("saveGame")));
		HX_STACK_LINE(2216)
		if (((flushStatus != null()))){
			HX_STACK_LINE(2217)
			if (((flushStatus == ::flash::net::SharedObjectFlushStatus_obj::PENDING))){
			}
			else{
				HX_STACK_LINE(2223)
				if (((flushStatus == ::flash::net::SharedObjectFlushStatus_obj::FLUSHED))){
					HX_STACK_LINE(2225)
					::haxe::Log_obj::trace((HX_CSTRING("Saved Game: ") + fileName),hx::SourceInfo(HX_CSTRING("Script.hx"),2225,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("saveGame")));
					HX_STACK_LINE(2226)
					onComplete(true).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,saveGame,(void))

Void Script_obj::tweenNumber( ::String attributeName,Float value,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Script::tweenNumber","com/stencyl/behavior/Script.hx",2158);
	HX_STACK_THIS(this);
	HX_STACK_ARG(attributeName,"attributeName");
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		struct _Function_1_1{
			inline static Dynamic Block( Float &value){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",2166);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , value,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(2158)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,_Function_1_1::Block(value),null(),null())->ease((  (((easing == null()))) ? ::motion::easing::IEasing(::motion::easing::Linear_obj::get_easeNone()) : ::motion::easing::IEasing(easing) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,tweenNumber,(void))

int Script_obj::randomInt( Float low,Float high){
	HX_STACK_PUSH("Script::randomInt","com/stencyl/behavior/Script.hx",2143);
	HX_STACK_THIS(this);
	HX_STACK_ARG(low,"low");
	HX_STACK_ARG(high,"high");
	HX_STACK_LINE(2143)
	if (((low <= high))){
		HX_STACK_LINE(2145)
		return (::Std_obj::_int(low) + ::Math_obj::floor((this->randomFloat() * (((::Std_obj::_int(high) - ::Std_obj::_int(low)) + (int)1)))));
	}
	else{
		HX_STACK_LINE(2149)
		return (::Std_obj::_int(high) + ::Math_obj::floor((this->randomFloat() * (((::Std_obj::_int(low) - ::Std_obj::_int(high)) + (int)1)))));
	}
	HX_STACK_LINE(2143)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,randomInt,return )

Float Script_obj::randomFloat( ){
	HX_STACK_PUSH("Script::randomFloat","com/stencyl/behavior/Script.hx",2135);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2135)
	return ::Math_obj::random();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,randomFloat,return )

Void Script_obj::setTimeScale( Float scale){
{
		HX_STACK_PUSH("Script::setTimeScale","com/stencyl/behavior/Script.hx",2127);
		HX_STACK_THIS(this);
		HX_STACK_ARG(scale,"scale");
		HX_STACK_LINE(2127)
		::com::stencyl::Engine_obj::timeScale = scale;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,setTimeScale,(void))

bool Script_obj::isTransitioning( ){
	HX_STACK_PUSH("Script::isTransitioning","com/stencyl/behavior/Script.hx",2119);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2119)
	return this->engine->isTransitioning();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,isTransitioning,return )

Void Script_obj::setOffscreenTolerance( Float top,Float left,Float bottom,Float right){
{
		HX_STACK_PUSH("Script::setOffscreenTolerance","com/stencyl/behavior/Script.hx",2108);
		HX_STACK_THIS(this);
		HX_STACK_ARG(top,"top");
		HX_STACK_ARG(left,"left");
		HX_STACK_ARG(bottom,"bottom");
		HX_STACK_ARG(right,"right");
		HX_STACK_LINE(2109)
		::com::stencyl::Engine_obj::paddingTop = ::Std_obj::_int(top);
		HX_STACK_LINE(2110)
		::com::stencyl::Engine_obj::paddingLeft = ::Std_obj::_int(left);
		HX_STACK_LINE(2111)
		::com::stencyl::Engine_obj::paddingRight = ::Std_obj::_int(right);
		HX_STACK_LINE(2112)
		::com::stencyl::Engine_obj::paddingBottom = ::Std_obj::_int(bottom);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,setOffscreenTolerance,(void))

int Script_obj::getScreenHeight( ){
	HX_STACK_PUSH("Script::getScreenHeight","com/stencyl/behavior/Script.hx",2100);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2100)
	return ::com::stencyl::Engine_obj::screenHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getScreenHeight,return )

int Script_obj::getScreenWidth( ){
	HX_STACK_PUSH("Script::getScreenWidth","com/stencyl/behavior/Script.hx",2092);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2092)
	return ::com::stencyl::Engine_obj::screenWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getScreenWidth,return )

Void Script_obj::unpauseAll( ){
{
		HX_STACK_PUSH("Script::unpauseAll","com/stencyl/behavior/Script.hx",2084);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2084)
		::com::stencyl::Engine_obj::paused = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,unpauseAll,(void))

Void Script_obj::pauseAll( ){
{
		HX_STACK_PUSH("Script::pauseAll","com/stencyl/behavior/Script.hx",2076);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2076)
		::com::stencyl::Engine_obj::paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,pauseAll,(void))

Void Script_obj::toggleFullScreen( ){
{
		HX_STACK_PUSH("Script::toggleFullScreen","com/stencyl/behavior/Script.hx",2066);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,toggleFullScreen,(void))

Void Script_obj::unpause( ){
{
		HX_STACK_PUSH("Script::unpause","com/stencyl/behavior/Script.hx",2061);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2061)
		this->engine->unpause();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,unpause,(void))

Void Script_obj::pause( ){
{
		HX_STACK_PUSH("Script::pause","com/stencyl/behavior/Script.hx",2056);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2056)
		this->engine->pause();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,pause,(void))

::com::stencyl::models::Font Script_obj::getFont( int fontID){
	HX_STACK_PUSH("Script::getFont","com/stencyl/behavior/Script.hx",2047);
	HX_STACK_THIS(this);
	HX_STACK_ARG(fontID,"fontID");
	HX_STACK_LINE(2047)
	return hx::TCast< com::stencyl::models::Font >::cast(::com::stencyl::Data_obj::get()->resources->get(fontID));
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getFont,return )

int Script_obj::getMiddleLayer( ){
	HX_STACK_PUSH("Script::getMiddleLayer","com/stencyl/behavior/Script.hx",2038);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2038)
	return this->engine->getMiddleLayer();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMiddleLayer,return )

int Script_obj::getBottomLayer( ){
	HX_STACK_PUSH("Script::getBottomLayer","com/stencyl/behavior/Script.hx",2030);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2030)
	return this->engine->getBottomLayer();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getBottomLayer,return )

int Script_obj::getTopLayer( ){
	HX_STACK_PUSH("Script::getTopLayer","com/stencyl/behavior/Script.hx",2022);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2022)
	return this->engine->getTopLayer();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getTopLayer,return )

Void Script_obj::stopShakingScreen( ){
{
		HX_STACK_PUSH("Script::stopShakingScreen","com/stencyl/behavior/Script.hx",2010);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2010)
		this->engine->stopShakingScreen();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,stopShakingScreen,(void))

Void Script_obj::startShakingScreen( hx::Null< Float >  __o_intensity,hx::Null< Float >  __o_duration){
Float intensity = __o_intensity.Default(0.05);
Float duration = __o_duration.Default(0.5);
	HX_STACK_PUSH("Script::startShakingScreen","com/stencyl/behavior/Script.hx",2002);
	HX_STACK_THIS(this);
	HX_STACK_ARG(intensity,"intensity");
	HX_STACK_ARG(duration,"duration");
{
		HX_STACK_LINE(2002)
		this->engine->shakeScreen(intensity,duration);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,startShakingScreen,(void))

Void Script_obj::setBackground( ::String oldBackName,::String newBackName){
{
		HX_STACK_PUSH("Script::setBackground","com/stencyl/behavior/Script.hx",1973);
		HX_STACK_THIS(this);
		HX_STACK_ARG(oldBackName,"oldBackName");
		HX_STACK_ARG(newBackName,"newBackName");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,setBackground,(void))

Void Script_obj::setScrollSpeedForBackground( Float xSpeed,Float ySpeed,hx::Null< int >  __o_backgroundID){
int backgroundID = __o_backgroundID.Default(-1);
	HX_STACK_PUSH("Script::setScrollSpeedForBackground","com/stencyl/behavior/Script.hx",1950);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xSpeed,"xSpeed");
	HX_STACK_ARG(ySpeed,"ySpeed");
	HX_STACK_ARG(backgroundID,"backgroundID");
{
		HX_STACK_LINE(1951)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::com::stencyl::Engine_obj::engine->master->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1951)
		while(((_g1 < _g))){
			HX_STACK_LINE(1951)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1953)
			::flash::display::DisplayObject child = ::com::stencyl::Engine_obj::engine->master->getChildAt(i);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(1956)
			if ((::Std_obj::is(child,hx::ClassOf< ::com::stencyl::models::scene::ScrollingBitmap >()))){
				HX_STACK_LINE(1958)
				::com::stencyl::models::scene::ScrollingBitmap bg = hx::TCast< com::stencyl::models::scene::ScrollingBitmap >::cast(child);		HX_STACK_VAR(bg,"bg");
				HX_STACK_LINE(1960)
				if (((bool((backgroundID == (int)-1)) || bool((backgroundID == bg->backgroundID))))){
					HX_STACK_LINE(1962)
					bg->xVelocity = xSpeed;
					HX_STACK_LINE(1963)
					bg->yVelocity = ySpeed;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,setScrollSpeedForBackground,(void))

Void Script_obj::fadeOutForAllSounds( Float time){
{
		HX_STACK_PUSH("Script::fadeOutForAllSounds","com/stencyl/behavior/Script.hx",1933);
		HX_STACK_THIS(this);
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(1934)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::com::stencyl::behavior::Script_obj::CHANNELS;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1934)
		while(((_g1 < _g))){
			HX_STACK_LINE(1934)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1936)
			::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(i).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
			HX_STACK_LINE(1937)
			sc->fadeOutSound(time);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,fadeOutForAllSounds,(void))

Void Script_obj::fadeInForAllSounds( Float time){
{
		HX_STACK_PUSH("Script::fadeInForAllSounds","com/stencyl/behavior/Script.hx",1921);
		HX_STACK_THIS(this);
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(1922)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::com::stencyl::behavior::Script_obj::CHANNELS;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1922)
		while(((_g1 < _g))){
			HX_STACK_LINE(1922)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1924)
			::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(i).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
			HX_STACK_LINE(1925)
			sc->fadeInSound(time);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,fadeInForAllSounds,(void))

Void Script_obj::fadeOutSoundOnChannel( int channelNum,Float time){
{
		HX_STACK_PUSH("Script::fadeOutSoundOnChannel","com/stencyl/behavior/Script.hx",1912);
		HX_STACK_THIS(this);
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(1913)
		::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(1914)
		sc->fadeOutSound(time);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,fadeOutSoundOnChannel,(void))

Void Script_obj::fadeInSoundOnChannel( int channelNum,Float time){
{
		HX_STACK_PUSH("Script::fadeInSoundOnChannel","com/stencyl/behavior/Script.hx",1903);
		HX_STACK_THIS(this);
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(1904)
		::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(1905)
		sc->fadeInSound(time);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,fadeInSoundOnChannel,(void))

Void Script_obj::setVolumeForAllSounds( Float volume){
{
		HX_STACK_PUSH("Script::setVolumeForAllSounds","com/stencyl/behavior/Script.hx",1889);
		HX_STACK_THIS(this);
		HX_STACK_ARG(volume,"volume");
		HX_STACK_LINE(1890)
		::com::stencyl::models::SoundChannel_obj::masterVolume = volume;
		HX_STACK_LINE(1892)
		{
			HX_STACK_LINE(1892)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::com::stencyl::behavior::Script_obj::CHANNELS;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1892)
			while(((_g1 < _g))){
				HX_STACK_LINE(1892)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1894)
				::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(i).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
				HX_STACK_LINE(1895)
				sc->setVolume(sc->volume);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,setVolumeForAllSounds,(void))

Void Script_obj::stopAllSounds( ){
{
		HX_STACK_PUSH("Script::stopAllSounds","com/stencyl/behavior/Script.hx",1877);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1878)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::com::stencyl::behavior::Script_obj::CHANNELS;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1878)
		while(((_g1 < _g))){
			HX_STACK_LINE(1878)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1880)
			::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(i).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
			HX_STACK_LINE(1881)
			sc->stopSound();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,stopAllSounds,(void))

Void Script_obj::setVolumeForChannel( Float volume,int channelNum){
{
		HX_STACK_PUSH("Script::setVolumeForChannel","com/stencyl/behavior/Script.hx",1868);
		HX_STACK_THIS(this);
		HX_STACK_ARG(volume,"volume");
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_LINE(1869)
		::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(1870)
		sc->setVolume(volume);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,setVolumeForChannel,(void))

Void Script_obj::resumeSoundOnChannel( int channelNum){
{
		HX_STACK_PUSH("Script::resumeSoundOnChannel","com/stencyl/behavior/Script.hx",1859);
		HX_STACK_THIS(this);
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_LINE(1860)
		::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(1861)
		sc->setPause(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,resumeSoundOnChannel,(void))

Void Script_obj::pauseSoundOnChannel( int channelNum){
{
		HX_STACK_PUSH("Script::pauseSoundOnChannel","com/stencyl/behavior/Script.hx",1850);
		HX_STACK_THIS(this);
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_LINE(1851)
		::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(1852)
		sc->setPause(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,pauseSoundOnChannel,(void))

Void Script_obj::stopSoundOnChannel( int channelNum){
{
		HX_STACK_PUSH("Script::stopSoundOnChannel","com/stencyl/behavior/Script.hx",1841);
		HX_STACK_THIS(this);
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_LINE(1842)
		::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(1843)
		sc->stopSound();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,stopSoundOnChannel,(void))

Void Script_obj::loopSoundOnChannel( ::com::stencyl::models::Sound clip,int channelNum){
{
		HX_STACK_PUSH("Script::loopSoundOnChannel","com/stencyl/behavior/Script.hx",1832);
		HX_STACK_THIS(this);
		HX_STACK_ARG(clip,"clip");
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_LINE(1833)
		::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(1834)
		sc->loopSound(clip);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,loopSoundOnChannel,(void))

Void Script_obj::playSoundOnChannel( ::com::stencyl::models::Sound clip,int channelNum){
{
		HX_STACK_PUSH("Script::playSoundOnChannel","com/stencyl/behavior/Script.hx",1823);
		HX_STACK_THIS(this);
		HX_STACK_ARG(clip,"clip");
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_LINE(1824)
		::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(1825)
		sc->playSound(clip);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,playSoundOnChannel,(void))

Void Script_obj::loopSound( ::com::stencyl::models::Sound clip){
{
		HX_STACK_PUSH("Script::loopSound","com/stencyl/behavior/Script.hx",1800);
		HX_STACK_THIS(this);
		HX_STACK_ARG(clip,"clip");
		HX_STACK_LINE(1800)
		if (((clip != null()))){
			HX_STACK_LINE(1803)
			{
				HX_STACK_LINE(1803)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = ::com::stencyl::behavior::Script_obj::CHANNELS;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1803)
				while(((_g1 < _g))){
					HX_STACK_LINE(1803)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1805)
					::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(i).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
					HX_STACK_LINE(1807)
					if (((sc->currentSound == null()))){
						HX_STACK_LINE(1810)
						sc->loopSound(clip);
						HX_STACK_LINE(1811)
						return null();
					}
				}
			}
			HX_STACK_LINE(1815)
			::haxe::Log_obj::trace(HX_CSTRING("No channels available to loop sound"),hx::SourceInfo(HX_CSTRING("Script.hx"),1815,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("loopSound")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,loopSound,(void))

Void Script_obj::playSound( ::com::stencyl::models::Sound clip){
{
		HX_STACK_PUSH("Script::playSound","com/stencyl/behavior/Script.hx",1777);
		HX_STACK_THIS(this);
		HX_STACK_ARG(clip,"clip");
		HX_STACK_LINE(1777)
		if (((clip != null()))){
			HX_STACK_LINE(1780)
			{
				HX_STACK_LINE(1780)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = ::com::stencyl::behavior::Script_obj::CHANNELS;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1780)
				while(((_g1 < _g))){
					HX_STACK_LINE(1780)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1782)
					::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(i).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
					HX_STACK_LINE(1784)
					if (((sc->currentSound == null()))){
						HX_STACK_LINE(1787)
						sc->playSound(clip);
						HX_STACK_LINE(1788)
						return null();
					}
				}
			}
			HX_STACK_LINE(1792)
			::haxe::Log_obj::trace(HX_CSTRING("No channels available to play sound"),hx::SourceInfo(HX_CSTRING("Script.hx"),1792,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("playSound")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,playSound,(void))

::com::stencyl::models::Sound Script_obj::getSound( int soundID){
	HX_STACK_PUSH("Script::getSound","com/stencyl/behavior/Script.hx",1762);
	HX_STACK_THIS(this);
	HX_STACK_ARG(soundID,"soundID");
	HX_STACK_LINE(1763)
	::com::stencyl::models::Resource temp = ::com::stencyl::Data_obj::get()->resources->get(soundID);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1765)
	if (((temp == null()))){
		HX_STACK_LINE(1766)
		return null();
	}
	HX_STACK_LINE(1770)
	return hx::TCast< com::stencyl::models::Sound >::cast(temp);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getSound,return )

Void Script_obj::unmute( ){
{
		HX_STACK_PUSH("Script::unmute","com/stencyl/behavior/Script.hx",1754);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,unmute,(void))

Void Script_obj::mute( ){
{
		HX_STACK_PUSH("Script::mute","com/stencyl/behavior/Script.hx",1749);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,mute,(void))

Void Script_obj::makeActorNotPassThroughTerrain( ::com::stencyl::models::Actor actor){
{
		HX_STACK_PUSH("Script::makeActorNotPassThroughTerrain","com/stencyl/behavior/Script.hx",1726);
		HX_STACK_THIS(this);
		HX_STACK_ARG(actor,"actor");
		HX_STACK_LINE(1727)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(1729)
			if (((bool((actor != null())) && bool(actor->isLightweight)))){
				HX_STACK_LINE(1730)
				actor->continuousCollision = true;
			}
			HX_STACK_LINE(1733)
			return null();
		}
		HX_STACK_LINE(1736)
		::box2D::dynamics::B2World_obj::m_continuousPhysics = true;
		HX_STACK_LINE(1738)
		if (((bool((actor != null())) && bool(!(actor->isLightweight))))){
			HX_STACK_LINE(1739)
			actor->body->setBullet(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,makeActorNotPassThroughTerrain,(void))

Float Script_obj::toPixelUnits( Float value){
	HX_STACK_PUSH("Script::toPixelUnits","com/stencyl/behavior/Script.hx",1721);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(1721)
	return ::com::stencyl::Engine_obj::toPixelUnits(value);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,toPixelUnits,return )

Float Script_obj::toPhysicalUnits( Float value){
	HX_STACK_PUSH("Script::toPhysicalUnits","com/stencyl/behavior/Script.hx",1716);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(1716)
	return ::com::stencyl::Engine_obj::toPhysicalUnits(value);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,toPhysicalUnits,return )

Void Script_obj::enableContinuousCollisions( ){
{
		HX_STACK_PUSH("Script::enableContinuousCollisions","com/stencyl/behavior/Script.hx",1711);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1711)
		::box2D::dynamics::B2World_obj::m_continuousPhysics = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,enableContinuousCollisions,(void))

::box2D::common::math::B2Vec2 Script_obj::getGravity( ){
	HX_STACK_PUSH("Script::getGravity","com/stencyl/behavior/Script.hx",1695);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1695)
	if (((this->engine->world == null()))){
		HX_STACK_LINE(1698)
		::com::stencyl::behavior::Script_obj::dummyVec->x = this->engine->gravityX;
		HX_STACK_LINE(1699)
		::com::stencyl::behavior::Script_obj::dummyVec->y = this->engine->gravityY;
		HX_STACK_LINE(1701)
		return ::com::stencyl::behavior::Script_obj::dummyVec;
	}
	else{
		HX_STACK_LINE(1705)
		return this->engine->world->getGravity();
	}
	HX_STACK_LINE(1695)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getGravity,return )

Void Script_obj::setGravity( Float x,Float y){
{
		HX_STACK_PUSH("Script::setGravity","com/stencyl/behavior/Script.hx",1681);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(1681)
		if (((this->engine->world == null()))){
			HX_STACK_LINE(1684)
			this->engine->gravityX = x;
			HX_STACK_LINE(1685)
			this->engine->gravityY = y;
		}
		else{
			HX_STACK_LINE(1689)
			this->engine->world->setGravity(::box2D::common::math::B2Vec2_obj::__new(x,y));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,setGravity,(void))

::com::stencyl::models::actor::Group Script_obj::getActorGroup( int groupID){
	HX_STACK_PUSH("Script::getActorGroup","com/stencyl/behavior/Script.hx",1664);
	HX_STACK_THIS(this);
	HX_STACK_ARG(groupID,"groupID");
	HX_STACK_LINE(1664)
	return this->engine->getGroup(groupID,null());
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getActorGroup,return )

::com::stencyl::models::Actor Script_obj::getActor( int actorID){
	HX_STACK_PUSH("Script::getActor","com/stencyl/behavior/Script.hx",1656);
	HX_STACK_THIS(this);
	HX_STACK_ARG(actorID,"actorID");
	HX_STACK_LINE(1656)
	return this->engine->getActor(actorID);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getActor,return )

Array< ::Dynamic > Script_obj::getActorsOfType( ::com::stencyl::models::actor::ActorType type){
	HX_STACK_PUSH("Script::getActorsOfType","com/stencyl/behavior/Script.hx",1648);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(1648)
	return this->engine->getActorsOfType(type);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getActorsOfType,return )

Array< ::Dynamic > Script_obj::getAllActorTypes( ){
	HX_STACK_PUSH("Script::getAllActorTypes","com/stencyl/behavior/Script.hx",1640);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1640)
	return ::com::stencyl::Data_obj::get()->getAllActorTypes();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getAllActorTypes,return )

::com::stencyl::models::actor::ActorType Script_obj::getActorType( int actorTypeID){
	HX_STACK_PUSH("Script::getActorType","com/stencyl/behavior/Script.hx",1632);
	HX_STACK_THIS(this);
	HX_STACK_ARG(actorTypeID,"actorTypeID");
	HX_STACK_LINE(1632)
	return hx::TCast< com::stencyl::models::actor::ActorType >::cast(::com::stencyl::Data_obj::get()->resources->get(actorTypeID));
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getActorType,return )

::com::stencyl::models::actor::ActorType Script_obj::getActorTypeByName( ::String typeName){
	HX_STACK_PUSH("Script::getActorTypeByName","com/stencyl/behavior/Script.hx",1614);
	HX_STACK_THIS(this);
	HX_STACK_ARG(typeName,"typeName");
	HX_STACK_LINE(1615)
	Array< ::Dynamic > types = this->getAllActorTypes();		HX_STACK_VAR(types,"types");
	HX_STACK_LINE(1617)
	{
		HX_STACK_LINE(1617)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1617)
		while(((_g < types->length))){
			HX_STACK_LINE(1617)
			::com::stencyl::models::actor::ActorType type = types->__get(_g).StaticCast< ::com::stencyl::models::actor::ActorType >();		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(1617)
			++(_g);
			HX_STACK_LINE(1619)
			if (((type->name == typeName))){
				HX_STACK_LINE(1620)
				return type;
			}
		}
	}
	HX_STACK_LINE(1625)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getActorTypeByName,return )

Void Script_obj::createActorInNextScene( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst){
{
		HX_STACK_PUSH("Script::createActorInNextScene","com/stencyl/behavior/Script.hx",1602);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(layerConst,"layerConst");
		HX_STACK_LINE(1602)
		this->engine->createActorInNextScene(type,x,y,layerConst);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,createActorInNextScene,(void))

Void Script_obj::recycleActor( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Script::recycleActor","com/stencyl/behavior/Script.hx",1597);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(1597)
		this->engine->recycleActor(a);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,recycleActor,(void))

::com::stencyl::models::Actor Script_obj::createRecycledActor( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst){
	HX_STACK_PUSH("Script::createRecycledActor","com/stencyl/behavior/Script.hx",1590);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(layerConst,"layerConst");
	HX_STACK_LINE(1591)
	::com::stencyl::models::Actor a = this->engine->getRecycledActorOfType(type,x,y,layerConst);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(1592)
	::com::stencyl::behavior::Script_obj::lastCreatedActor = a;
	HX_STACK_LINE(1593)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,createRecycledActor,return )

::com::stencyl::models::Actor Script_obj::createActor( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst){
	HX_STACK_PUSH("Script::createActor","com/stencyl/behavior/Script.hx",1583);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(layerConst,"layerConst");
	HX_STACK_LINE(1584)
	::com::stencyl::models::Actor a = this->engine->createActorOfType(type,x,y,layerConst);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(1585)
	::com::stencyl::behavior::Script_obj::lastCreatedActor = a;
	HX_STACK_LINE(1586)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,createActor,return )

::com::stencyl::models::Actor Script_obj::getLastCreatedActor( ){
	HX_STACK_PUSH("Script::getLastCreatedActor","com/stencyl/behavior/Script.hx",1578);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1578)
	return ::com::stencyl::behavior::Script_obj::lastCreatedActor;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getLastCreatedActor,return )

Void Script_obj::hideCursor( ){
{
		HX_STACK_PUSH("Script::hideCursor","com/stencyl/behavior/Script.hx",1569);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1569)
		::flash::ui::Mouse_obj::hide();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,hideCursor,(void))

Void Script_obj::showCursor( ){
{
		HX_STACK_PUSH("Script::showCursor","com/stencyl/behavior/Script.hx",1564);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1564)
		::flash::ui::Mouse_obj::show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,showCursor,(void))

Float Script_obj::getMouseReleasedY( ){
	HX_STACK_PUSH("Script::getMouseReleasedY","com/stencyl/behavior/Script.hx",1554);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1554)
	return ::com::stencyl::behavior::Script_obj::mry;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMouseReleasedY,return )

Float Script_obj::getMouseReleasedX( ){
	HX_STACK_PUSH("Script::getMouseReleasedX","com/stencyl/behavior/Script.hx",1549);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1549)
	return ::com::stencyl::behavior::Script_obj::mrx;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMouseReleasedX,return )

Float Script_obj::getMousePressedY( ){
	HX_STACK_PUSH("Script::getMousePressedY","com/stencyl/behavior/Script.hx",1544);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1544)
	return ::com::stencyl::behavior::Script_obj::mpy;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMousePressedY,return )

Float Script_obj::getMousePressedX( ){
	HX_STACK_PUSH("Script::getMousePressedX","com/stencyl/behavior/Script.hx",1539);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1539)
	return ::com::stencyl::behavior::Script_obj::mpx;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMousePressedX,return )

Float Script_obj::getMouseWorldY( ){
	HX_STACK_PUSH("Script::getMouseWorldY","com/stencyl/behavior/Script.hx",1534);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1534)
	return ((Float(::com::stencyl::Input_obj::mouseY) / Float(::com::stencyl::Engine_obj::SCALE)) + ::com::stencyl::Engine_obj::cameraY);
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMouseWorldY,return )

Float Script_obj::getMouseWorldX( ){
	HX_STACK_PUSH("Script::getMouseWorldX","com/stencyl/behavior/Script.hx",1529);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1529)
	return ((Float(::com::stencyl::Input_obj::mouseX) / Float(::com::stencyl::Engine_obj::SCALE)) + ::com::stencyl::Engine_obj::cameraX);
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMouseWorldX,return )

Float Script_obj::getMouseY( ){
	HX_STACK_PUSH("Script::getMouseY","com/stencyl/behavior/Script.hx",1524);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1524)
	return (Float(::com::stencyl::Input_obj::mouseY) / Float(::com::stencyl::Engine_obj::SCALE));
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMouseY,return )

Float Script_obj::getMouseX( ){
	HX_STACK_PUSH("Script::getMouseX","com/stencyl/behavior/Script.hx",1519);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1519)
	return (Float(::com::stencyl::Input_obj::mouseX) / Float(::com::stencyl::Engine_obj::SCALE));
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMouseX,return )

bool Script_obj::isMouseReleased( ){
	HX_STACK_PUSH("Script::isMouseReleased","com/stencyl/behavior/Script.hx",1514);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1514)
	return ::com::stencyl::Input_obj::mouseReleased;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,isMouseReleased,return )

bool Script_obj::isMousePressed( ){
	HX_STACK_PUSH("Script::isMousePressed","com/stencyl/behavior/Script.hx",1509);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1509)
	return ::com::stencyl::Input_obj::mousePressed;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,isMousePressed,return )

bool Script_obj::isMouseDown( ){
	HX_STACK_PUSH("Script::isMouseDown","com/stencyl/behavior/Script.hx",1504);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1504)
	return ::com::stencyl::Input_obj::mouseDown;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,isMouseDown,return )

bool Script_obj::isKeyReleased( ::String abstractKey){
	HX_STACK_PUSH("Script::isKeyReleased","com/stencyl/behavior/Script.hx",1499);
	HX_STACK_THIS(this);
	HX_STACK_ARG(abstractKey,"abstractKey");
	HX_STACK_LINE(1499)
	return ::com::stencyl::Input_obj::released(abstractKey);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,isKeyReleased,return )

bool Script_obj::isKeyPressed( ::String abstractKey){
	HX_STACK_PUSH("Script::isKeyPressed","com/stencyl/behavior/Script.hx",1494);
	HX_STACK_THIS(this);
	HX_STACK_ARG(abstractKey,"abstractKey");
	HX_STACK_LINE(1494)
	return ::com::stencyl::Input_obj::pressed(abstractKey);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,isKeyPressed,return )

bool Script_obj::isKeyDown( ::String abstractKey){
	HX_STACK_PUSH("Script::isKeyDown","com/stencyl/behavior/Script.hx",1489);
	HX_STACK_THIS(this);
	HX_STACK_ARG(abstractKey,"abstractKey");
	HX_STACK_LINE(1489)
	return ::com::stencyl::Input_obj::check(abstractKey);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,isKeyDown,return )

Void Script_obj::simulateKeyRelease( ::String abstractKey){
{
		HX_STACK_PUSH("Script::simulateKeyRelease","com/stencyl/behavior/Script.hx",1484);
		HX_STACK_THIS(this);
		HX_STACK_ARG(abstractKey,"abstractKey");
		HX_STACK_LINE(1484)
		::com::stencyl::Input_obj::simulateKeyRelease(abstractKey);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,simulateKeyRelease,(void))

Void Script_obj::simulateKeyPress( ::String abstractKey){
{
		HX_STACK_PUSH("Script::simulateKeyPress","com/stencyl/behavior/Script.hx",1479);
		HX_STACK_THIS(this);
		HX_STACK_ARG(abstractKey,"abstractKey");
		HX_STACK_LINE(1479)
		::com::stencyl::Input_obj::simulateKeyPress(abstractKey);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,simulateKeyPress,(void))

bool Script_obj::isShiftDown( ){
	HX_STACK_PUSH("Script::isShiftDown","com/stencyl/behavior/Script.hx",1474);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1474)
	return ::com::stencyl::Input_obj::check(::com::stencyl::Engine_obj::INTERNAL_SHIFT);
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,isShiftDown,return )

bool Script_obj::isCtrlDown( ){
	HX_STACK_PUSH("Script::isCtrlDown","com/stencyl/behavior/Script.hx",1469);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1469)
	return ::com::stencyl::Input_obj::check(::com::stencyl::Engine_obj::INTERNAL_CTRL);
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,isCtrlDown,return )

::com::stencyl::models::Actor Script_obj::getCamera( ){
	HX_STACK_PUSH("Script::getCamera","com/stencyl/behavior/Script.hx",1457);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1457)
	return this->engine->camera;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getCamera,return )

Float Script_obj::getScreenY( ){
	HX_STACK_PUSH("Script::getScreenY","com/stencyl/behavior/Script.hx",1447);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1447)
	return ::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraY) / Float(::com::stencyl::Engine_obj::SCALE)));
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getScreenY,return )

Float Script_obj::getScreenX( ){
	HX_STACK_PUSH("Script::getScreenX","com/stencyl/behavior/Script.hx",1437);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1437)
	return ::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraX) / Float(::com::stencyl::Engine_obj::SCALE)));
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getScreenX,return )

Void Script_obj::fadeTileLayerTo( int layerID,Float alphaPct,Float duration,Dynamic easing){
{
		HX_STACK_PUSH("Script::fadeTileLayerTo","com/stencyl/behavior/Script.hx",1416);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_ARG(alphaPct,"alphaPct");
		HX_STACK_ARG(duration,"duration");
		HX_STACK_ARG(easing,"easing");
		HX_STACK_LINE(1417)
		if (((easing == null()))){
			HX_STACK_LINE(1418)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		struct _Function_1_1{
			inline static ::com::stencyl::models::scene::TileLayer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1422);
				{
					HX_STACK_LINE(1422)
					::de::polygonal::ds::IntHashTable _this = __this->engine->tileLayers;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
							HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1422);
							{
								HX_STACK_LINE(1422)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1422)
								int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
										HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1422);
										{
											HX_STACK_LINE(1422)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1422)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1422)
											while(((i != (int)-1))){
												HX_STACK_LINE(1422)
												if (((_this1->_data->__get(i) == layerID))){
													HX_STACK_LINE(1422)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1422)
													break;
												}
												HX_STACK_LINE(1422)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1422)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1422)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1422)
					int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1422)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::TileLayer(null()) : ::com::stencyl::models::scene::TileLayer(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Dynamic Block( Float &alphaPct){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1422);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , alphaPct,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1422)
		::motion::Actuate_obj::tween(_Function_1_1::Block(this,layerID),duration,_Function_1_2::Block(alphaPct),null(),null())->ease(easing);
		struct _Function_1_3{
			inline static ::com::stencyl::models::scene::Layer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1423);
				{
					HX_STACK_LINE(1423)
					::de::polygonal::ds::IntHashTable _this = __this->engine->layers;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
							HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1423);
							{
								HX_STACK_LINE(1423)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1423)
								int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
										HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1423);
										{
											HX_STACK_LINE(1423)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1423)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1423)
											while(((i != (int)-1))){
												HX_STACK_LINE(1423)
												if (((_this1->_data->__get(i) == layerID))){
													HX_STACK_LINE(1423)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1423)
													break;
												}
												HX_STACK_LINE(1423)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1423)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1423)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1423)
					int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1423)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::Layer(null()) : ::com::stencyl::models::scene::Layer(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static Dynamic Block( Float &alphaPct){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1423);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , alphaPct,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1423)
		::motion::Actuate_obj::tween(_Function_1_3::Block(this,layerID),duration,_Function_1_4::Block(alphaPct),null(),null())->ease(easing);
		struct _Function_1_5{
			inline static Dynamic Block( Float &alphaPct){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1424);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , alphaPct,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1424)
		::motion::Actuate_obj::tween(this->engine->actorsPerLayer->get(layerID),duration,_Function_1_5::Block(alphaPct),null(),null())->ease(easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,fadeTileLayerTo,(void))

Void Script_obj::hideTileLayer( int layerID){
{
		HX_STACK_PUSH("Script::hideTileLayer","com/stencyl/behavior/Script.hx",1401);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layerID,"layerID");
		struct _Function_1_1{
			inline static ::com::stencyl::models::scene::TileLayer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1402);
				{
					HX_STACK_LINE(1402)
					::de::polygonal::ds::IntHashTable _this = __this->engine->tileLayers;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
							HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1402);
							{
								HX_STACK_LINE(1402)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1402)
								int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
										HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1402);
										{
											HX_STACK_LINE(1402)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1402)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1402)
											while(((i != (int)-1))){
												HX_STACK_LINE(1402)
												if (((_this1->_data->__get(i) == layerID))){
													HX_STACK_LINE(1402)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1402)
													break;
												}
												HX_STACK_LINE(1402)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1402)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1402)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1402)
					int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1402)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::TileLayer(null()) : ::com::stencyl::models::scene::TileLayer(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1402)
		(_Function_1_1::Block(this,layerID))->set_alpha((int)0);
		struct _Function_1_2{
			inline static ::com::stencyl::models::scene::Layer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1403);
				{
					HX_STACK_LINE(1403)
					::de::polygonal::ds::IntHashTable _this = __this->engine->layers;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
							HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1403);
							{
								HX_STACK_LINE(1403)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1403)
								int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
										HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1403);
										{
											HX_STACK_LINE(1403)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1403)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1403)
											while(((i != (int)-1))){
												HX_STACK_LINE(1403)
												if (((_this1->_data->__get(i) == layerID))){
													HX_STACK_LINE(1403)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1403)
													break;
												}
												HX_STACK_LINE(1403)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1403)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1403)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1403)
					int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1403)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::Layer(null()) : ::com::stencyl::models::scene::Layer(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1403)
		(_Function_1_2::Block(this,layerID))->set_alpha((int)0);
		HX_STACK_LINE(1404)
		this->engine->actorsPerLayer->get(layerID)->__Field(HX_CSTRING("set_alpha"),true)((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,hideTileLayer,(void))

Void Script_obj::showTileLayer( int layerID){
{
		HX_STACK_PUSH("Script::showTileLayer","com/stencyl/behavior/Script.hx",1389);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layerID,"layerID");
		struct _Function_1_1{
			inline static ::com::stencyl::models::scene::TileLayer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1390);
				{
					HX_STACK_LINE(1390)
					::de::polygonal::ds::IntHashTable _this = __this->engine->tileLayers;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
							HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1390);
							{
								HX_STACK_LINE(1390)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1390)
								int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
										HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1390);
										{
											HX_STACK_LINE(1390)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1390)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1390)
											while(((i != (int)-1))){
												HX_STACK_LINE(1390)
												if (((_this1->_data->__get(i) == layerID))){
													HX_STACK_LINE(1390)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1390)
													break;
												}
												HX_STACK_LINE(1390)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1390)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1390)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1390)
					int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1390)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::TileLayer(null()) : ::com::stencyl::models::scene::TileLayer(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1390)
		(_Function_1_1::Block(this,layerID))->set_alpha((int)1);
		struct _Function_1_2{
			inline static ::com::stencyl::models::scene::Layer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1391);
				{
					HX_STACK_LINE(1391)
					::de::polygonal::ds::IntHashTable _this = __this->engine->layers;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
							HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1391);
							{
								HX_STACK_LINE(1391)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1391)
								int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
										HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1391);
										{
											HX_STACK_LINE(1391)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1391)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1391)
											while(((i != (int)-1))){
												HX_STACK_LINE(1391)
												if (((_this1->_data->__get(i) == layerID))){
													HX_STACK_LINE(1391)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1391)
													break;
												}
												HX_STACK_LINE(1391)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1391)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1391)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1391)
					int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1391)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::Layer(null()) : ::com::stencyl::models::scene::Layer(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1391)
		(_Function_1_2::Block(this,layerID))->set_alpha((int)1);
		HX_STACK_LINE(1392)
		this->engine->actorsPerLayer->get(layerID)->__Field(HX_CSTRING("set_alpha"),true)((int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,showTileLayer,(void))

Void Script_obj::setBlendModeForLayer( int layerID,::flash::display::BlendMode mode){
{
		HX_STACK_PUSH("Script::setBlendModeForLayer","com/stencyl/behavior/Script.hx",1377);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_ARG(mode,"mode");
		struct _Function_1_1{
			inline static ::com::stencyl::models::scene::TileLayer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1378);
				{
					HX_STACK_LINE(1378)
					::de::polygonal::ds::IntHashTable _this = __this->engine->tileLayers;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
							HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1378);
							{
								HX_STACK_LINE(1378)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1378)
								int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
										HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1378);
										{
											HX_STACK_LINE(1378)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1378)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1378)
											while(((i != (int)-1))){
												HX_STACK_LINE(1378)
												if (((_this1->_data->__get(i) == layerID))){
													HX_STACK_LINE(1378)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1378)
													break;
												}
												HX_STACK_LINE(1378)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1378)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1378)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1378)
					int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1378)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::TileLayer(null()) : ::com::stencyl::models::scene::TileLayer(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1378)
		(_Function_1_1::Block(this,layerID))->set_blendMode(mode);
		struct _Function_1_2{
			inline static ::com::stencyl::models::scene::Layer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1379);
				{
					HX_STACK_LINE(1379)
					::de::polygonal::ds::IntHashTable _this = __this->engine->layers;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
							HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1379);
							{
								HX_STACK_LINE(1379)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1379)
								int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
										HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1379);
										{
											HX_STACK_LINE(1379)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1379)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1379)
											while(((i != (int)-1))){
												HX_STACK_LINE(1379)
												if (((_this1->_data->__get(i) == layerID))){
													HX_STACK_LINE(1379)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1379)
													break;
												}
												HX_STACK_LINE(1379)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1379)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1379)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1379)
					int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1379)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::Layer(null()) : ::com::stencyl::models::scene::Layer(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1379)
		(_Function_1_2::Block(this,layerID))->set_blendMode(mode);
		HX_STACK_LINE(1380)
		this->engine->actorsPerLayer->get(layerID)->__Field(HX_CSTRING("set_blendMode"),true)(mode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,setBlendModeForLayer,(void))

::com::stencyl::models::scene::Layer Script_obj::getLayer( int layerID){
	HX_STACK_PUSH("Script::getLayer","com/stencyl/behavior/Script.hx",1372);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layerID,"layerID");
	struct _Function_1_1{
		inline static ::com::stencyl::models::scene::Layer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
			HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1373);
			{
				HX_STACK_LINE(1373)
				::de::polygonal::ds::IntHashTable _this = __this->engine->layers;		HX_STACK_VAR(_this,"_this");
				struct _Function_2_1{
					inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
						HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1373);
						{
							HX_STACK_LINE(1373)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1373)
							int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
							struct _Function_3_1{
								inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
									HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1373);
									{
										HX_STACK_LINE(1373)
										int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(1373)
										i = _this1->_data->__get((i + (int)2));
										HX_STACK_LINE(1373)
										while(((i != (int)-1))){
											HX_STACK_LINE(1373)
											if (((_this1->_data->__get(i) == layerID))){
												HX_STACK_LINE(1373)
												v = _this1->_data->__get((i + (int)1));
												HX_STACK_LINE(1373)
												break;
											}
											HX_STACK_LINE(1373)
											i = _this1->_data->__get((i + (int)2));
										}
										HX_STACK_LINE(1373)
										return v;
									}
									return null();
								}
							};
							HX_STACK_LINE(1373)
							return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(1373)
				int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1373)
				return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::Layer(null()) : ::com::stencyl::models::scene::Layer(_this->_vals->__GetItem(i)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(1372)
	return _Function_1_1::Block(this,layerID);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getLayer,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createCircleIn( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createCircleIn","com/stencyl/behavior/Script.hx",1358);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1358)
		return ::com::stencyl::graphics::transitions::CircleTransition_obj::__new(::com::stencyl::graphics::transitions::Transition_obj::IN,duration,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createCircleIn,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createCircleOut( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createCircleOut","com/stencyl/behavior/Script.hx",1353);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1353)
		return ::com::stencyl::graphics::transitions::CircleTransition_obj::__new(::com::stencyl::graphics::transitions::Transition_obj::OUT,duration,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createCircleOut,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createFadeIn( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createFadeIn","com/stencyl/behavior/Script.hx",1348);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1348)
		return ::com::stencyl::graphics::transitions::FadeInTransition_obj::__new(duration,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createFadeIn,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createFadeOut( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createFadeOut","com/stencyl/behavior/Script.hx",1343);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1343)
		return ::com::stencyl::graphics::transitions::FadeOutTransition_obj::__new(duration,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createFadeOut,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createCrossfadeTransition( Float duration){
	HX_STACK_PUSH("Script::createCrossfadeTransition","com/stencyl/behavior/Script.hx",1338);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_LINE(1338)
	return ::com::stencyl::graphics::transitions::CrossfadeTransition_obj::__new(this->engine->root,duration);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,createCrossfadeTransition,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createSlideRightTransition( Float duration){
	HX_STACK_PUSH("Script::createSlideRightTransition","com/stencyl/behavior/Script.hx",1333);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_LINE(1333)
	return this->createSlideTransition(duration,::com::stencyl::graphics::transitions::SlideTransition_obj::SLIDE_RIGHT);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,createSlideRightTransition,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createSlideLeftTransition( Float duration){
	HX_STACK_PUSH("Script::createSlideLeftTransition","com/stencyl/behavior/Script.hx",1328);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_LINE(1328)
	return this->createSlideTransition(duration,::com::stencyl::graphics::transitions::SlideTransition_obj::SLIDE_LEFT);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,createSlideLeftTransition,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createSlideDownTransition( Float duration){
	HX_STACK_PUSH("Script::createSlideDownTransition","com/stencyl/behavior/Script.hx",1323);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_LINE(1323)
	return this->createSlideTransition(duration,::com::stencyl::graphics::transitions::SlideTransition_obj::SLIDE_DOWN);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,createSlideDownTransition,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createSlideUpTransition( Float duration){
	HX_STACK_PUSH("Script::createSlideUpTransition","com/stencyl/behavior/Script.hx",1318);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_LINE(1318)
	return this->createSlideTransition(duration,::com::stencyl::graphics::transitions::SlideTransition_obj::SLIDE_UP);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,createSlideUpTransition,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createSlideTransition( Float duration,::String direction){
	HX_STACK_PUSH("Script::createSlideTransition","com/stencyl/behavior/Script.hx",1312);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(direction,"direction");
	HX_STACK_LINE(1312)
	return ::com::stencyl::graphics::transitions::SlideTransition_obj::__new(this->engine->master,duration,direction);
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createSlideTransition,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createRectangleIn( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createRectangleIn","com/stencyl/behavior/Script.hx",1299);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1299)
		return ::com::stencyl::graphics::transitions::RectangleTransition_obj::__new(::com::stencyl::graphics::transitions::Transition_obj::IN,duration,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createRectangleIn,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createRectangleOut( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createRectangleOut","com/stencyl/behavior/Script.hx",1286);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1286)
		return ::com::stencyl::graphics::transitions::RectangleTransition_obj::__new(::com::stencyl::graphics::transitions::Transition_obj::OUT,duration,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createRectangleOut,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createBlindsIn( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createBlindsIn","com/stencyl/behavior/Script.hx",1273);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1273)
		return ::com::stencyl::graphics::transitions::BlindsTransition_obj::__new(::com::stencyl::graphics::transitions::Transition_obj::IN,duration,(int)10,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createBlindsIn,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createBlindsOut( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createBlindsOut","com/stencyl/behavior/Script.hx",1260);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1260)
		return ::com::stencyl::graphics::transitions::BlindsTransition_obj::__new(::com::stencyl::graphics::transitions::Transition_obj::OUT,duration,(int)10,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createBlindsOut,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createBubblesIn( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createBubblesIn","com/stencyl/behavior/Script.hx",1247);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1247)
		return ::com::stencyl::graphics::transitions::BubblesTransition_obj::__new(::com::stencyl::graphics::transitions::Transition_obj::IN,duration,(int)50,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createBubblesIn,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createBubblesOut( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createBubblesOut","com/stencyl/behavior/Script.hx",1234);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1234)
		return ::com::stencyl::graphics::transitions::BubblesTransition_obj::__new(::com::stencyl::graphics::transitions::Transition_obj::OUT,duration,(int)50,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createBubblesOut,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createPixelizeIn( Float duration,hx::Null< int >  __o_pixelSize){
int pixelSize = __o_pixelSize.Default(15);
	HX_STACK_PUSH("Script::createPixelizeIn","com/stencyl/behavior/Script.hx",1221);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(pixelSize,"pixelSize");
{
		HX_STACK_LINE(1221)
		return ::com::stencyl::graphics::transitions::PixelizeTransition_obj::__new(duration,pixelSize,(int)1);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createPixelizeIn,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createPixelizeOut( Float duration,hx::Null< int >  __o_pixelSize){
int pixelSize = __o_pixelSize.Default(15);
	HX_STACK_PUSH("Script::createPixelizeOut","com/stencyl/behavior/Script.hx",1208);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(pixelSize,"pixelSize");
{
		HX_STACK_LINE(1208)
		return ::com::stencyl::graphics::transitions::PixelizeTransition_obj::__new(duration,(int)1,pixelSize);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createPixelizeOut,return )

Void Script_obj::switchScene( int sceneID,::com::stencyl::graphics::transitions::Transition leave,::com::stencyl::graphics::transitions::Transition enter){
{
		HX_STACK_PUSH("Script::switchScene","com/stencyl/behavior/Script.hx",1195);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sceneID,"sceneID");
		HX_STACK_ARG(leave,"leave");
		HX_STACK_ARG(enter,"enter");
		HX_STACK_LINE(1195)
		this->engine->switchScene(sceneID,leave,enter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,switchScene,(void))

Void Script_obj::reloadCurrentScene( ::com::stencyl::graphics::transitions::Transition leave,::com::stencyl::graphics::transitions::Transition enter){
{
		HX_STACK_PUSH("Script::reloadCurrentScene","com/stencyl/behavior/Script.hx",1183);
		HX_STACK_THIS(this);
		HX_STACK_ARG(leave,"leave");
		HX_STACK_ARG(enter,"enter");
		HX_STACK_LINE(1183)
		this->engine->switchScene(this->getCurrentScene(),leave,enter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,reloadCurrentScene,(void))

int Script_obj::getTileHeight( ){
	HX_STACK_PUSH("Script::getTileHeight","com/stencyl/behavior/Script.hx",1168);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1168)
	return this->getScene()->tileHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getTileHeight,return )

int Script_obj::getTileWidth( ){
	HX_STACK_PUSH("Script::getTileWidth","com/stencyl/behavior/Script.hx",1158);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1158)
	return this->getScene()->tileWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getTileWidth,return )

int Script_obj::getSceneHeight( ){
	HX_STACK_PUSH("Script::getSceneHeight","com/stencyl/behavior/Script.hx",1148);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1148)
	return this->getScene()->sceneHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getSceneHeight,return )

int Script_obj::getSceneWidth( ){
	HX_STACK_PUSH("Script::getSceneWidth","com/stencyl/behavior/Script.hx",1138);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1138)
	return this->getScene()->sceneWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getSceneWidth,return )

::String Script_obj::getCurrentSceneName( ){
	HX_STACK_PUSH("Script::getCurrentSceneName","com/stencyl/behavior/Script.hx",1128);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1128)
	return this->getScene()->name;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getCurrentSceneName,return )

int Script_obj::getIDForScene( ::String sceneName){
	HX_STACK_PUSH("Script::getIDForScene","com/stencyl/behavior/Script.hx",1110);
	HX_STACK_THIS(this);
	HX_STACK_ARG(sceneName,"sceneName");
	HX_STACK_LINE(1111)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::Scene > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Scene >(::com::stencyl::models::GameModel_obj::get()->scenes->iterator());  __it->hasNext(); ){
		::com::stencyl::models::Scene s = __it->next();
		if (((sceneName == s->name))){
			HX_STACK_LINE(1114)
			return s->ID;
		}
;
	}
	HX_STACK_LINE(1119)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getIDForScene,return )

int Script_obj::getCurrentScene( ){
	HX_STACK_PUSH("Script::getCurrentScene","com/stencyl/behavior/Script.hx",1100);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1100)
	return this->getScene()->ID;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getCurrentScene,return )

::com::stencyl::models::Scene Script_obj::getScene( ){
	HX_STACK_PUSH("Script::getScene","com/stencyl/behavior/Script.hx",1090);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1090)
	return this->engine->scene;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getScene,return )

int Script_obj::getStepSize( ){
	HX_STACK_PUSH("Script::getStepSize","com/stencyl/behavior/Script.hx",1076);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1076)
	return ::com::stencyl::Engine_obj::STEP_SIZE;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getStepSize,return )

::com::stencyl::behavior::TimedTask Script_obj::runPeriodically( Float interval,Dynamic toExecute,::com::stencyl::models::Actor actor){
	HX_STACK_PUSH("Script::runPeriodically","com/stencyl/behavior/Script.hx",1068);
	HX_STACK_THIS(this);
	HX_STACK_ARG(interval,"interval");
	HX_STACK_ARG(toExecute,"toExecute");
	HX_STACK_ARG(actor,"actor");
	HX_STACK_LINE(1069)
	::com::stencyl::behavior::TimedTask t = ::com::stencyl::behavior::TimedTask_obj::__new(toExecute,::Std_obj::_int(interval),true,actor);		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(1070)
	this->engine->addTask(t);
	HX_STACK_LINE(1072)
	return t;
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,runPeriodically,return )

::com::stencyl::behavior::TimedTask Script_obj::runLater( Float delay,Dynamic toExecute,::com::stencyl::models::Actor actor){
	HX_STACK_PUSH("Script::runLater","com/stencyl/behavior/Script.hx",1054);
	HX_STACK_THIS(this);
	HX_STACK_ARG(delay,"delay");
	HX_STACK_ARG(toExecute,"toExecute");
	HX_STACK_ARG(actor,"actor");
	HX_STACK_LINE(1055)
	::com::stencyl::behavior::TimedTask t = ::com::stencyl::behavior::TimedTask_obj::__new(toExecute,::Std_obj::_int(delay),false,actor);		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(1056)
	this->engine->addTask(t);
	HX_STACK_LINE(1058)
	return t;
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,runLater,return )

Dynamic Script_obj::getGameAttribute( ::String name){
	HX_STACK_PUSH("Script::getGameAttribute","com/stencyl/behavior/Script.hx",1039);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(1039)
	return this->engine->getGameAttribute(name);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getGameAttribute,return )

Void Script_obj::setGameAttribute( ::String name,Dynamic value){
{
		HX_STACK_PUSH("Script::setGameAttribute","com/stencyl/behavior/Script.hx",1031);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(1032)
		Dynamic value1 = value;		HX_STACK_VAR(value1,"value1");
		HX_STACK_LINE(1032)
		this->engine->gameAttributes->set(name,value1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,setGameAttribute,(void))

Dynamic Script_obj::sayToScene( ::String behaviorName,::String msg,Dynamic args){
	HX_STACK_PUSH("Script::sayToScene","com/stencyl/behavior/Script.hx",1019);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(1019)
	return this->engine->say(behaviorName,msg,args);
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,sayToScene,return )

Dynamic Script_obj::shoutToScene( ::String msg,Dynamic args){
	HX_STACK_PUSH("Script::shoutToScene","com/stencyl/behavior/Script.hx",1011);
	HX_STACK_THIS(this);
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(1011)
	return this->engine->shout(msg,args);
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,shoutToScene,return )

Void Script_obj::setValueForScene( ::String behaviorName,::String attributeName,Dynamic value){
{
		HX_STACK_PUSH("Script::setValueForScene","com/stencyl/behavior/Script.hx",1003);
		HX_STACK_THIS(this);
		HX_STACK_ARG(behaviorName,"behaviorName");
		HX_STACK_ARG(attributeName,"attributeName");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(1003)
		this->engine->setValue(behaviorName,attributeName,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,setValueForScene,(void))

Dynamic Script_obj::getValueForScene( ::String behaviorName,::String attributeName){
	HX_STACK_PUSH("Script::getValueForScene","com/stencyl/behavior/Script.hx",995);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(attributeName,"attributeName");
	HX_STACK_LINE(995)
	return this->engine->getValue(behaviorName,attributeName);
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,getValueForScene,return )

Void Script_obj::disableThisBehavior( ){
{
		HX_STACK_PUSH("Script::disableThisBehavior","com/stencyl/behavior/Script.hx",982);
		HX_STACK_THIS(this);
		HX_STACK_LINE(982)
		this->engine->behaviors->disableBehavior(this->wrapper->name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,disableThisBehavior,(void))

bool Script_obj::isBehaviorEnabledForScene( ::String behaviorName){
	HX_STACK_PUSH("Script::isBehaviorEnabledForScene","com/stencyl/behavior/Script.hx",973);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_LINE(973)
	return this->engine->behaviors->isBehaviorEnabled(behaviorName);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,isBehaviorEnabledForScene,return )

Void Script_obj::disableBehaviorForScene( ::String behaviorName){
{
		HX_STACK_PUSH("Script::disableBehaviorForScene","com/stencyl/behavior/Script.hx",961);
		HX_STACK_THIS(this);
		HX_STACK_ARG(behaviorName,"behaviorName");
		HX_STACK_LINE(961)
		this->engine->behaviors->disableBehavior(behaviorName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,disableBehaviorForScene,(void))

Void Script_obj::enableBehaviorForScene( ::String behaviorName){
{
		HX_STACK_PUSH("Script::enableBehaviorForScene","com/stencyl/behavior/Script.hx",951);
		HX_STACK_THIS(this);
		HX_STACK_ARG(behaviorName,"behaviorName");
		HX_STACK_LINE(951)
		this->engine->behaviors->enableBehavior(behaviorName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,enableBehaviorForScene,(void))

bool Script_obj::sceneHasBehavior( ::String behaviorName){
	HX_STACK_PUSH("Script::sceneHasBehavior","com/stencyl/behavior/Script.hx",941);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_LINE(941)
	return this->engine->behaviors->hasBehavior(behaviorName);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,sceneHasBehavior,return )

Array< ::Dynamic > Script_obj::getActorsInRegion( ::com::stencyl::models::Region r){
	HX_STACK_PUSH("Script::getActorsInRegion","com/stencyl/behavior/Script.hx",910);
	HX_STACK_THIS(this);
	HX_STACK_ARG(r,"r");
	HX_STACK_LINE(911)
	::haxe::ds::IntMap ids = r->getContainedActors();		HX_STACK_VAR(ids,"ids");
	HX_STACK_LINE(913)
	Array< ::Dynamic > toReturn = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(toReturn,"toReturn");
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::ds::IntMap &ids){
			HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",915);
			{
				HX_STACK_LINE(915)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(ids);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","com/stencyl/behavior/Script.hx",915);
					{
						HX_STACK_LINE(915)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(915)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(915)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >((_Function_1_1::Block(ids))());  __it->hasNext(); ){
		int i = __it->next();
		toReturn->push(this->engine->getActor(i));
	}
	HX_STACK_LINE(920)
	return toReturn;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getActorsInRegion,return )

bool Script_obj::isInRegion( ::com::stencyl::models::Actor a,::com::stencyl::models::Region r){
	HX_STACK_PUSH("Script::isInRegion","com/stencyl/behavior/Script.hx",905);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(r,"r");
	HX_STACK_LINE(905)
	return this->engine->isInRegion(a,r);
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,isInRegion,return )

::com::stencyl::models::Region Script_obj::createCircularRegion( Float x,Float y,Float r){
	HX_STACK_PUSH("Script::createCircularRegion","com/stencyl/behavior/Script.hx",900);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(r,"r");
	HX_STACK_LINE(900)
	return ::com::stencyl::behavior::Script_obj::lastCreatedRegion = this->engine->createCircularRegion(x,y,r);
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,createCircularRegion,return )

::com::stencyl::models::Region Script_obj::createBoxRegion( Float x,Float y,Float w,Float h){
	HX_STACK_PUSH("Script::createBoxRegion","com/stencyl/behavior/Script.hx",895);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(w,"w");
	HX_STACK_ARG(h,"h");
	HX_STACK_LINE(895)
	return ::com::stencyl::behavior::Script_obj::lastCreatedRegion = this->engine->createBoxRegion(x,y,w,h);
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,createBoxRegion,return )

Void Script_obj::removeRegion( int regionID){
{
		HX_STACK_PUSH("Script::removeRegion","com/stencyl/behavior/Script.hx",890);
		HX_STACK_THIS(this);
		HX_STACK_ARG(regionID,"regionID");
		HX_STACK_LINE(890)
		this->engine->removeRegion(regionID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,removeRegion,(void))

::com::stencyl::models::Region Script_obj::getRegion( int regionID){
	HX_STACK_PUSH("Script::getRegion","com/stencyl/behavior/Script.hx",885);
	HX_STACK_THIS(this);
	HX_STACK_ARG(regionID,"regionID");
	HX_STACK_LINE(885)
	return this->engine->getRegion(regionID);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getRegion,return )

Array< ::Dynamic > Script_obj::getAllRegions( ){
	HX_STACK_PUSH("Script::getAllRegions","com/stencyl/behavior/Script.hx",872);
	HX_STACK_THIS(this);
	HX_STACK_LINE(873)
	Array< ::Dynamic > regions = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(regions,"regions");
	HX_STACK_LINE(875)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::Region > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Region >(this->engine->regions->iterator());  __it->hasNext(); ){
		::com::stencyl::models::Region r = __it->next();
		{
			HX_STACK_LINE(877)
			if (((r == null()))){
				HX_STACK_LINE(877)
				continue;
			}
			HX_STACK_LINE(878)
			regions->push(r);
		}
;
	}
	HX_STACK_LINE(881)
	return regions;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getAllRegions,return )

::com::stencyl::models::Region Script_obj::getLastCreatedRegion( ){
	HX_STACK_PUSH("Script::getLastCreatedRegion","com/stencyl/behavior/Script.hx",867);
	HX_STACK_THIS(this);
	HX_STACK_LINE(867)
	return ::com::stencyl::behavior::Script_obj::lastCreatedRegion;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getLastCreatedRegion,return )

Void Script_obj::addPauseListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addPauseListener","com/stencyl/behavior/Script.hx",853);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(854)
		this->engine->whenPausedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(856)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(857)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenPausedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addPauseListener,(void))

Void Script_obj::addFocusChangeListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addFocusChangeListener","com/stencyl/behavior/Script.hx",843);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(844)
		this->engine->whenFocusChangedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(846)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(847)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenFocusChangedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addFocusChangeListener,(void))

Void Script_obj::addSoundListener( Dynamic obj,Dynamic func){
{
		HX_STACK_PUSH("Script::addSoundListener","com/stencyl/behavior/Script.hx",827);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_ARG(func,"func");
		struct _Function_1_1{
			inline static bool Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",828);
				{
					HX_STACK_LINE(828)
					Dynamic key = obj;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(828)
					return __this->engine->soundListeners->__Internal->exists(::__hxcpp_obj_id(key));
				}
				return null();
			}
		};
		HX_STACK_LINE(828)
		if ((!(_Function_1_1::Block(this,obj)))){
			HX_STACK_LINE(830)
			Dynamic key = obj;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(830)
			this->engine->soundListeners->__Internal->set(::__hxcpp_obj_id(key),Dynamic( Array_obj<Dynamic>::__new() ));
		}
		HX_STACK_LINE(833)
		Dynamic listeners = this->engine->soundListeners->get(obj);		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(834)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(836)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(837)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addSoundListener,(void))

Void Script_obj::addWhenTypeGroupKilledListener( Dynamic obj,Dynamic func){
{
		HX_STACK_PUSH("Script::addWhenTypeGroupKilledListener","com/stencyl/behavior/Script.hx",811);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_ARG(func,"func");
		struct _Function_1_1{
			inline static bool Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",812);
				{
					HX_STACK_LINE(812)
					Dynamic key = obj;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(812)
					return __this->engine->whenTypeGroupDiesListeners->__Internal->exists(::__hxcpp_obj_id(key));
				}
				return null();
			}
		};
		HX_STACK_LINE(812)
		if ((!(_Function_1_1::Block(this,obj)))){
			HX_STACK_LINE(814)
			Dynamic key = obj;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(814)
			this->engine->whenTypeGroupDiesListeners->__Internal->set(::__hxcpp_obj_id(key),Dynamic( Array_obj<Dynamic>::__new() ));
		}
		HX_STACK_LINE(817)
		Dynamic listeners = this->engine->whenTypeGroupDiesListeners->get(obj);		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(818)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(820)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(821)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addWhenTypeGroupKilledListener,(void))

Void Script_obj::addWhenTypeGroupCreatedListener( Dynamic obj,Dynamic func){
{
		HX_STACK_PUSH("Script::addWhenTypeGroupCreatedListener","com/stencyl/behavior/Script.hx",795);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_ARG(func,"func");
		struct _Function_1_1{
			inline static bool Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",796);
				{
					HX_STACK_LINE(796)
					Dynamic key = obj;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(796)
					return __this->engine->whenTypeGroupCreatedListeners->__Internal->exists(::__hxcpp_obj_id(key));
				}
				return null();
			}
		};
		HX_STACK_LINE(796)
		if ((!(_Function_1_1::Block(this,obj)))){
			HX_STACK_LINE(798)
			Dynamic key = obj;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(798)
			this->engine->whenTypeGroupCreatedListeners->__Internal->set(::__hxcpp_obj_id(key),Dynamic( Array_obj<Dynamic>::__new() ));
		}
		HX_STACK_LINE(801)
		Dynamic listeners = this->engine->whenTypeGroupCreatedListeners->get(obj);		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(802)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(804)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(805)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addWhenTypeGroupCreatedListener,(void))

Void Script_obj::addSceneCollisionListener( Dynamic obj,Dynamic obj2,Dynamic func){
{
		HX_STACK_PUSH("Script::addSceneCollisionListener","com/stencyl/behavior/Script.hx",769);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_ARG(obj2,"obj2");
		HX_STACK_ARG(func,"func");
		struct _Function_1_1{
			inline static bool Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",770);
				{
					HX_STACK_LINE(770)
					int key = obj;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(770)
					return __this->engine->collisionListeners->exists(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(770)
		if ((!(_Function_1_1::Block(this,obj)))){
			HX_STACK_LINE(772)
			int key = obj;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(772)
			this->engine->collisionListeners->set(key,::haxe::ds::IntMap_obj::__new());
		}
		struct _Function_1_2{
			inline static bool Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj2){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",775);
				{
					HX_STACK_LINE(775)
					int key = obj2;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(775)
					return __this->engine->collisionListeners->exists(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(775)
		if ((!(_Function_1_2::Block(this,obj2)))){
			HX_STACK_LINE(777)
			int key = obj2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(777)
			this->engine->collisionListeners->set(key,::haxe::ds::IntMap_obj::__new());
		}
		struct _Function_1_3{
			inline static Dynamic Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",780);
				{
					HX_STACK_LINE(780)
					int key = obj;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(780)
					return __this->engine->collisionListeners->get(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(780)
		if ((!((_Function_1_3::Block(this,obj))->__Field(HX_CSTRING("exists"),true)(obj2)))){
			struct _Function_2_1{
				inline static Dynamic Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
					HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",782);
					{
						HX_STACK_LINE(782)
						int key = obj;		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(782)
						return __this->engine->collisionListeners->get(key);
					}
					return null();
				}
			};
			HX_STACK_LINE(781)
			(_Function_2_1::Block(this,obj))->__Field(HX_CSTRING("set"),true)(obj2,Dynamic( Array_obj<Dynamic>::__new() ));
		}
		struct _Function_1_4{
			inline static Dynamic Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",785);
				{
					HX_STACK_LINE(785)
					int key = obj;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(785)
					return __this->engine->collisionListeners->get(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(785)
		Dynamic listeners = hx::TCastToArray((_Function_1_4::Block(this,obj))->__Field(HX_CSTRING("get"),true)(obj2));		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(786)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(788)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(789)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,addSceneCollisionListener,(void))

Void Script_obj::addCollisionListener( ::com::stencyl::models::Actor a,Dynamic func){
{
		HX_STACK_PUSH("Script::addCollisionListener","com/stencyl/behavior/Script.hx",751);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(752)
		if (((a == null()))){
			HX_STACK_LINE(754)
			::haxe::Log_obj::trace(((HX_CSTRING("Error in ") + this->wrapper->classname) + HX_CSTRING(": Cannot add listener function to null actor.")),hx::SourceInfo(HX_CSTRING("Script.hx"),754,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("addCollisionListener")));
			HX_STACK_LINE(755)
			return null();
		}
		HX_STACK_LINE(758)
		a->collisionListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(759)
		(a->collisionListenerCount)++;
		HX_STACK_LINE(761)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(762)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(a->collisionListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addCollisionListener,(void))

Void Script_obj::propertyChanged( ::String propertyKey,Dynamic property){
{
		HX_STACK_PUSH("Script::propertyChanged","com/stencyl/behavior/Script.hx",703);
		HX_STACK_THIS(this);
		HX_STACK_ARG(propertyKey,"propertyKey");
		HX_STACK_ARG(property,"property");
		HX_STACK_LINE(703)
		if ((this->checkProperties)){
			HX_STACK_LINE(706)
			Dynamic listeners = this->propertyChangeListeners->get(propertyKey);		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(708)
			if (((listeners != null()))){
				HX_STACK_LINE(710)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(712)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(714)
					try{
						HX_STACK_LINE(716)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(717)
						f(property,listeners).Cast< Void >();
						HX_STACK_LINE(719)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(721)
							(r)--;
							HX_STACK_LINE(724)
							if (((this->equalityPairs->get(f) != null()))){
								HX_STACK_LINE(726)
								{
									HX_STACK_LINE(726)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									Dynamic _g1 = hx::TCastToArray(this->equalityPairs->get(f));		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(726)
									while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
										HX_STACK_LINE(726)
										Dynamic list = _g1->__GetItem(_g);		HX_STACK_VAR(list,"list");
										HX_STACK_LINE(726)
										++(_g);
										HX_STACK_LINE(728)
										if (((list != listeners))){
											HX_STACK_LINE(729)
											list->__Field(HX_CSTRING("splice"),true)(::com::stencyl::utils::Utils_obj::indexOf(list,f),(int)1);
										}
									}
								}
								HX_STACK_LINE(734)
								this->equalityPairs->__Internal->remove(::__hxcpp_obj_id(f));
							}
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(740)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Script.hx"),741,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("propertyChanged")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(744)
					(r)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,propertyChanged,(void))

Void Script_obj::addPropertyChangeListener( ::String propertyKey,::String propertyKey2,Dynamic func){
{
		HX_STACK_PUSH("Script::addPropertyChangeListener","com/stencyl/behavior/Script.hx",661);
		HX_STACK_THIS(this);
		HX_STACK_ARG(propertyKey,"propertyKey");
		HX_STACK_ARG(propertyKey2,"propertyKey2");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(662)
		if ((!(this->propertyChangeListeners->exists(propertyKey)))){
			HX_STACK_LINE(663)
			this->propertyChangeListeners->set(propertyKey,Dynamic( Array_obj<Dynamic>::__new() ));
		}
		HX_STACK_LINE(668)
		if (((bool((propertyKey2 != null())) && bool(!(this->propertyChangeListeners->exists(propertyKey2)))))){
			HX_STACK_LINE(669)
			this->propertyChangeListeners->set(propertyKey2,Dynamic( Array_obj<Dynamic>::__new() ));
		}
		HX_STACK_LINE(673)
		Dynamic listeners = this->propertyChangeListeners->get(propertyKey);		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(674)
		Dynamic listeners2 = this->propertyChangeListeners->get(propertyKey2);		HX_STACK_VAR(listeners2,"listeners2");
		HX_STACK_LINE(676)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(678)
		if (((propertyKey2 != null()))){
			HX_STACK_LINE(680)
			listeners2->__Field(HX_CSTRING("push"),true)(func);
			HX_STACK_LINE(683)
			Dynamic arr = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(684)
			arr->__Field(HX_CSTRING("push"),true)(listeners);
			HX_STACK_LINE(685)
			arr->__Field(HX_CSTRING("push"),true)(listeners2);
			HX_STACK_LINE(686)
			this->equalityPairs->__Internal->set(::__hxcpp_obj_id(func),arr);
		}
		HX_STACK_LINE(689)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(691)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
			HX_STACK_LINE(693)
			if (((propertyKey2 != null()))){
				HX_STACK_LINE(694)
				(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners2,func);
			}
		}
		HX_STACK_LINE(699)
		this->checkProperties = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,addPropertyChangeListener,(void))

Void Script_obj::addMouseOverActorListener( ::com::stencyl::models::Actor a,Dynamic func){
{
		HX_STACK_PUSH("Script::addMouseOverActorListener","com/stencyl/behavior/Script.hx",645);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(646)
		if (((a == null()))){
			HX_STACK_LINE(648)
			::haxe::Log_obj::trace(((HX_CSTRING("Error in ") + this->wrapper->classname) + HX_CSTRING(": Cannot add listener function to null actor.")),hx::SourceInfo(HX_CSTRING("Script.hx"),648,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("addMouseOverActorListener")));
			HX_STACK_LINE(649)
			return null();
		}
		HX_STACK_LINE(652)
		a->mouseOverListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(654)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(655)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(a->mouseOverListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addMouseOverActorListener,(void))

Void Script_obj::addMouseDraggedListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addMouseDraggedListener","com/stencyl/behavior/Script.hx",635);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(636)
		this->engine->whenMouseDraggedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(638)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(639)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenMouseDraggedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addMouseDraggedListener,(void))

Void Script_obj::addMouseMovedListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addMouseMovedListener","com/stencyl/behavior/Script.hx",625);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(626)
		this->engine->whenMouseMovedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(628)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(629)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenMouseMovedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addMouseMovedListener,(void))

Void Script_obj::addMouseReleasedListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addMouseReleasedListener","com/stencyl/behavior/Script.hx",615);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(616)
		this->engine->whenMouseReleasedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(618)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(619)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenMouseReleasedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addMouseReleasedListener,(void))

Void Script_obj::addMousePressedListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addMousePressedListener","com/stencyl/behavior/Script.hx",605);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(606)
		this->engine->whenMousePressedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(608)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(609)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenMousePressedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addMousePressedListener,(void))

Void Script_obj::addKeyStateListener( ::String key,Dynamic func){
{
		HX_STACK_PUSH("Script::addKeyStateListener","com/stencyl/behavior/Script.hx",587);
		HX_STACK_THIS(this);
		HX_STACK_ARG(key,"key");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(588)
		if (((this->engine->whenKeyPressedListeners->get(key) == null()))){
			HX_STACK_LINE(589)
			this->engine->whenKeyPressedListeners->set(key,Dynamic( Array_obj<Dynamic>::__new() ));
		}
		HX_STACK_LINE(593)
		this->engine->hasKeyPressedListeners = true;
		HX_STACK_LINE(595)
		Dynamic listeners = this->engine->whenKeyPressedListeners->get(key);		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(596)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(598)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(599)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addKeyStateListener,(void))

Void Script_obj::addMultiTouchEndListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addMultiTouchEndListener","com/stencyl/behavior/Script.hx",575);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(577)
		this->engine->whenMTEndListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(579)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(580)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenMTEndListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addMultiTouchEndListener,(void))

Void Script_obj::addMultiTouchMoveListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addMultiTouchMoveListener","com/stencyl/behavior/Script.hx",563);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(565)
		this->engine->whenMTDragListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(567)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(568)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenMTDragListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addMultiTouchMoveListener,(void))

Void Script_obj::addMultiTouchStartListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addMultiTouchStartListener","com/stencyl/behavior/Script.hx",551);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(553)
		this->engine->whenMTStartListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(555)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(556)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenMTStartListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addMultiTouchStartListener,(void))

Void Script_obj::addSwipeListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addSwipeListener","com/stencyl/behavior/Script.hx",541);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(542)
		this->engine->whenSwipedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(544)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(545)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenSwipedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addSwipeListener,(void))

Void Script_obj::addActorTypeGroupPositionListener( Dynamic obj,Dynamic func){
{
		HX_STACK_PUSH("Script::addActorTypeGroupPositionListener","com/stencyl/behavior/Script.hx",525);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_ARG(func,"func");
		struct _Function_1_1{
			inline static bool Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",526);
				{
					HX_STACK_LINE(526)
					int key = obj;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(526)
					return __this->engine->typeGroupPositionListeners->exists(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(526)
		if ((!(_Function_1_1::Block(this,obj)))){
			HX_STACK_LINE(528)
			int key = obj;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(528)
			this->engine->typeGroupPositionListeners->set(key,Dynamic( Array_obj<Dynamic>::__new() ));
		}
		struct _Function_1_2{
			inline static Dynamic Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",531);
				{
					HX_STACK_LINE(531)
					int key = obj;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(531)
					return __this->engine->typeGroupPositionListeners->get(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(531)
		Dynamic listeners = hx::TCastToArray(_Function_1_2::Block(this,obj));		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(532)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(534)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(535)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addActorTypeGroupPositionListener,(void))

Void Script_obj::addActorPositionListener( ::com::stencyl::models::Actor a,Dynamic func){
{
		HX_STACK_PUSH("Script::addActorPositionListener","com/stencyl/behavior/Script.hx",508);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(509)
		if (((a == null()))){
			HX_STACK_LINE(511)
			::haxe::Log_obj::trace(((HX_CSTRING("Error in ") + this->wrapper->classname) + HX_CSTRING(": Cannot add listener function to null actor.")),hx::SourceInfo(HX_CSTRING("Script.hx"),511,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("addActorPositionListener")));
			HX_STACK_LINE(512)
			return null();
		}
		HX_STACK_LINE(515)
		a->positionListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(516)
		(a->positionListenerCount)++;
		HX_STACK_LINE(518)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(519)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(a->positionListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addActorPositionListener,(void))

Void Script_obj::addActorExitsRegionListener( ::com::stencyl::models::Region reg,Dynamic func){
{
		HX_STACK_PUSH("Script::addActorExitsRegionListener","com/stencyl/behavior/Script.hx",492);
		HX_STACK_THIS(this);
		HX_STACK_ARG(reg,"reg");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(493)
		if (((reg == null()))){
			HX_STACK_LINE(495)
			::haxe::Log_obj::trace(((HX_CSTRING("Error in ") + this->wrapper->classname) + HX_CSTRING(": Cannot add listener function to null region.")),hx::SourceInfo(HX_CSTRING("Script.hx"),495,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("addActorExitsRegionListener")));
			HX_STACK_LINE(496)
			return null();
		}
		HX_STACK_LINE(499)
		reg->whenActorExitsListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(501)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(502)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(reg->whenActorExitsListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addActorExitsRegionListener,(void))

Void Script_obj::addActorEntersRegionListener( ::com::stencyl::models::Region reg,Dynamic func){
{
		HX_STACK_PUSH("Script::addActorEntersRegionListener","com/stencyl/behavior/Script.hx",476);
		HX_STACK_THIS(this);
		HX_STACK_ARG(reg,"reg");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(477)
		if (((reg == null()))){
			HX_STACK_LINE(479)
			::haxe::Log_obj::trace(((HX_CSTRING("Error in ") + this->wrapper->classname) + HX_CSTRING(": Cannot add listener function to null region.")),hx::SourceInfo(HX_CSTRING("Script.hx"),479,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("addActorEntersRegionListener")));
			HX_STACK_LINE(480)
			return null();
		}
		HX_STACK_LINE(483)
		reg->whenActorEntersListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(485)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(486)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(reg->whenActorEntersListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addActorEntersRegionListener,(void))

Void Script_obj::addWhenDrawingListener( ::com::stencyl::models::Actor a,Dynamic func){
{
		HX_STACK_PUSH("Script::addWhenDrawingListener","com/stencyl/behavior/Script.hx",444);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(445)
		bool isActorScript = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >());		HX_STACK_VAR(isActorScript,"isActorScript");
		HX_STACK_LINE(447)
		if (((a == null()))){
			HX_STACK_LINE(448)
			if ((isActorScript)){
				HX_STACK_LINE(450)
				a = (hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor;
			}
		}
		HX_STACK_LINE(455)
		Dynamic listeners;		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(457)
		if (((a != null()))){
			HX_STACK_LINE(458)
			listeners = a->whenDrawingListeners;
		}
		else{
			HX_STACK_LINE(463)
			listeners = this->engine->whenDrawingListeners;
		}
		HX_STACK_LINE(467)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(469)
		if ((isActorScript)){
			HX_STACK_LINE(470)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addWhenDrawingListener,(void))

Void Script_obj::addWhenUpdatedListener( ::com::stencyl::models::Actor a,Dynamic func){
{
		HX_STACK_PUSH("Script::addWhenUpdatedListener","com/stencyl/behavior/Script.hx",412);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(413)
		bool isActorScript = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >());		HX_STACK_VAR(isActorScript,"isActorScript");
		HX_STACK_LINE(415)
		if (((a == null()))){
			HX_STACK_LINE(416)
			if ((isActorScript)){
				HX_STACK_LINE(418)
				a = (hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor;
			}
		}
		HX_STACK_LINE(423)
		Dynamic listeners;		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(425)
		if (((a != null()))){
			HX_STACK_LINE(426)
			listeners = a->whenUpdatedListeners;
		}
		else{
			HX_STACK_LINE(431)
			listeners = this->engine->whenUpdatedListeners;
		}
		HX_STACK_LINE(435)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(437)
		if ((isActorScript)){
			HX_STACK_LINE(438)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addWhenUpdatedListener,(void))

Void Script_obj::addWhenKilledListener( ::com::stencyl::models::Actor a,Dynamic func){
{
		HX_STACK_PUSH("Script::addWhenKilledListener","com/stencyl/behavior/Script.hx",394);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(395)
		bool isActorScript = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >());		HX_STACK_VAR(isActorScript,"isActorScript");
		HX_STACK_LINE(397)
		if (((a == null()))){
			HX_STACK_LINE(399)
			::haxe::Log_obj::trace(((HX_CSTRING("Error in ") + this->wrapper->classname) + HX_CSTRING(": Cannot add listener function to null actor.")),hx::SourceInfo(HX_CSTRING("Script.hx"),399,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("addWhenKilledListener")));
			HX_STACK_LINE(400)
			return null();
		}
		HX_STACK_LINE(403)
		a->whenKilledListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(405)
		if ((isActorScript)){
			HX_STACK_LINE(406)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(a->whenKilledListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addWhenKilledListener,(void))

Void Script_obj::addWhenCreatedListener( ::com::stencyl::models::Actor a,Dynamic func){
{
		HX_STACK_PUSH("Script::addWhenCreatedListener","com/stencyl/behavior/Script.hx",376);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(377)
		bool isActorScript = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >());		HX_STACK_VAR(isActorScript,"isActorScript");
		HX_STACK_LINE(379)
		if (((a == null()))){
			HX_STACK_LINE(381)
			::haxe::Log_obj::trace(((HX_CSTRING("Error in ") + this->wrapper->classname) + HX_CSTRING(": Cannot add listener function to null actor.")),hx::SourceInfo(HX_CSTRING("Script.hx"),381,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("addWhenCreatedListener")));
			HX_STACK_LINE(382)
			return null();
		}
		HX_STACK_LINE(385)
		a->whenCreatedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(387)
		if ((isActorScript)){
			HX_STACK_LINE(388)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(a->whenCreatedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addWhenCreatedListener,(void))

Void Script_obj::addPurchaseListener( int type,Dynamic func){
{
		HX_STACK_PUSH("Script::addPurchaseListener","com/stencyl/behavior/Script.hx",371);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(371)
		this->engine->nativeListeners->push(::com::stencyl::event::NativeListener_obj::__new(::com::stencyl::event::EventMaster_obj::TYPE_PURCHASES,type,func));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addPurchaseListener,(void))

Void Script_obj::addGameCenterListener( int type,Dynamic func){
{
		HX_STACK_PUSH("Script::addGameCenterListener","com/stencyl/behavior/Script.hx",366);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(366)
		this->engine->nativeListeners->push(::com::stencyl::event::NativeListener_obj::__new(::com::stencyl::event::EventMaster_obj::TYPE_GAMECENTER,type,func));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addGameCenterListener,(void))

Void Script_obj::addMobileAdListener( int type,Dynamic func){
{
		HX_STACK_PUSH("Script::addMobileAdListener","com/stencyl/behavior/Script.hx",361);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(361)
		this->engine->nativeListeners->push(::com::stencyl::event::NativeListener_obj::__new(::com::stencyl::event::EventMaster_obj::TYPE_ADS,type,func));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addMobileAdListener,(void))

Void Script_obj::addMobileKeyboardListener( int type,Dynamic func){
{
		HX_STACK_PUSH("Script::addMobileKeyboardListener","com/stencyl/behavior/Script.hx",356);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(356)
		this->engine->nativeListeners->push(::com::stencyl::event::NativeListener_obj::__new(::com::stencyl::event::EventMaster_obj::TYPE_KEYBOARD,type,func));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addMobileKeyboardListener,(void))

Void Script_obj::init( ){
{
		HX_STACK_PUSH("Script::init","com/stencyl/behavior/Script.hx",343);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,init,(void))

::com::stencyl::models::actor::Group Script_obj::getGroupByName( ::String groupName){
	HX_STACK_PUSH("Script::getGroupByName","com/stencyl/behavior/Script.hx",334);
	HX_STACK_THIS(this);
	HX_STACK_ARG(groupName,"groupName");
	HX_STACK_LINE(334)
	return this->engine->getGroupByName(groupName);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getGroupByName,return )

::com::stencyl::models::actor::Group Script_obj::internalGetGroup( Dynamic arg,Dynamic arg2){
	HX_STACK_PUSH("Script::internalGetGroup","com/stencyl/behavior/Script.hx",296);
	HX_STACK_THIS(this);
	HX_STACK_ARG(arg,"arg");
	HX_STACK_ARG(arg2,"arg2");
	HX_STACK_LINE(296)
	if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
		HX_STACK_LINE(298)
		return (hx::TCast< com::stencyl::models::Actor >::cast(arg))->getGroup();
	}
	else{
		HX_STACK_LINE(304)
		::box2D::dynamics::B2Fixture fixture = hx::TCast< box2D::dynamics::B2Fixture >::cast(arg2);		HX_STACK_VAR(fixture,"fixture");
		HX_STACK_LINE(306)
		if (((fixture == null()))){
			HX_STACK_LINE(308)
			::haxe::Log_obj::trace(HX_CSTRING("internalGetGroup - Warning - null shape passed in"),hx::SourceInfo(HX_CSTRING("Script.hx"),308,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("internalGetGroup")));
			HX_STACK_LINE(309)
			return (hx::TCast< com::stencyl::models::Actor >::cast(arg))->getGroup();
		}
		else{
			HX_STACK_LINE(314)
			int value = fixture->groupID;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(316)
			if (((value == ::com::stencyl::models::GameModel_obj::INHERIT_ID))){
				HX_STACK_LINE(318)
				::box2D::dynamics::B2Body body = fixture->getBody();		HX_STACK_VAR(body,"body");
				HX_STACK_LINE(320)
				if (((body != null()))){
					HX_STACK_LINE(321)
					return this->engine->getGroup(body->getUserData()->__Field(HX_CSTRING("groupID"),true),null());
				}
				HX_STACK_LINE(325)
				::haxe::Log_obj::trace(HX_CSTRING("internalGetGroup - Warning - shape inherits groupID from actor but is not attached to a body"),hx::SourceInfo(HX_CSTRING("Script.hx"),325,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("internalGetGroup")));
			}
			HX_STACK_LINE(328)
			return this->engine->getGroup(value,null());
		}
	}
	HX_STACK_LINE(296)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,internalGetGroup,return )

Void Script_obj::clearListeners( ){
{
		HX_STACK_PUSH("Script::clearListeners","com/stencyl/behavior/Script.hx",289);
		HX_STACK_THIS(this);
		HX_STACK_LINE(289)
		this->propertyChangeListeners = ::haxe::ds::StringMap_obj::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,clearListeners,(void))

Void Script_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("Script::forwardMessage","com/stencyl/behavior/Script.hx",285);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,forwardMessage,(void))

::String Script_obj::toInternalName( ::String displayName){
	HX_STACK_PUSH("Script::toInternalName","com/stencyl/behavior/Script.hx",264);
	HX_STACK_THIS(this);
	HX_STACK_ARG(displayName,"displayName");
	HX_STACK_LINE(265)
	if (((this->nameMap == null()))){
		HX_STACK_LINE(266)
		return displayName;
	}
	HX_STACK_LINE(270)
	::String newName = this->nameMap->get(displayName);		HX_STACK_VAR(newName,"newName");
	HX_STACK_LINE(272)
	if (((newName == null()))){
		HX_STACK_LINE(273)
		return displayName;
	}
	else{
		HX_STACK_LINE(279)
		return newName;
	}
	HX_STACK_LINE(272)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,toInternalName,return )

Dynamic Script_obj::getDefaultValue( Dynamic o){
	HX_STACK_PUSH("Script::getDefaultValue","com/stencyl/behavior/Script.hx",259);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(259)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getDefaultValue,return )

bool Script_obj::isPrimitive( Dynamic o){
	HX_STACK_PUSH("Script::isPrimitive","com/stencyl/behavior/Script.hx",239);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(240)
	if ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))){
		HX_STACK_LINE(241)
		return true;
	}
	else{
		HX_STACK_LINE(245)
		if ((::Std_obj::is(o,hx::ClassOf< ::Float >()))){
			HX_STACK_LINE(246)
			return true;
		}
		else{
			HX_STACK_LINE(250)
			if ((::Std_obj::is(o,hx::ClassOf< ::Int >()))){
				HX_STACK_LINE(251)
				return true;
			}
		}
	}
	HX_STACK_LINE(255)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,isPrimitive,return )

bool Script_obj::hasValue( Dynamic o){
	HX_STACK_PUSH("Script::hasValue","com/stencyl/behavior/Script.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(211)
	if ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))){
		HX_STACK_LINE(213)
		return true;
	}
	else{
		HX_STACK_LINE(217)
		if ((::Std_obj::is(o,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(218)
			return true;
		}
		else{
			HX_STACK_LINE(222)
			if ((::Std_obj::is(o,hx::ClassOf< ::Float >()))){
				HX_STACK_LINE(223)
				return true;
			}
			else{
				HX_STACK_LINE(227)
				if ((::Std_obj::is(o,hx::ClassOf< ::Int >()))){
					HX_STACK_LINE(228)
					return true;
				}
				else{
					HX_STACK_LINE(233)
					return (o != null());
				}
			}
		}
	}
	HX_STACK_LINE(211)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,hasValue,return )

Float Script_obj::asNumber( Dynamic o){
	HX_STACK_PUSH("Script::asNumber","com/stencyl/behavior/Script.hx",176);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(176)
	if (((o == null()))){
		HX_STACK_LINE(178)
		return (int)0;
	}
	else{
		HX_STACK_LINE(182)
		if ((::Std_obj::is(o,hx::ClassOf< ::Float >()))){
			HX_STACK_LINE(183)
			return o;
		}
		else{
			HX_STACK_LINE(187)
			if ((::Std_obj::is(o,hx::ClassOf< ::Int >()))){
				HX_STACK_LINE(188)
				return o;
			}
			else{
				HX_STACK_LINE(192)
				if ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))){
					HX_STACK_LINE(193)
					return (  ((hx::TCast< Bool >::cast(o))) ? Float((int)1) : Float((int)0) );
				}
				else{
					HX_STACK_LINE(197)
					if ((::Std_obj::is(o,hx::ClassOf< ::String >()))){
						HX_STACK_LINE(198)
						return ::Std_obj::parseFloat(o);
					}
					else{
						HX_STACK_LINE(205)
						::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),205,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
						HX_STACK_LINE(206)
						return (int)0;
					}
				}
			}
		}
	}
	HX_STACK_LINE(176)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,asNumber,return )

bool Script_obj::asBoolean( Dynamic o){
	HX_STACK_PUSH("Script::asBoolean","com/stencyl/behavior/Script.hx",148);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(148)
	return (bool((o == true)) || bool((o == HX_CSTRING("true"))));
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,asBoolean,return )

bool Script_obj::sameAsAny( Dynamic o,Dynamic one,Dynamic two){
	HX_STACK_PUSH("Script::sameAsAny","com/stencyl/behavior/Script.hx",143);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_ARG(one,"one");
	HX_STACK_ARG(two,"two");
	HX_STACK_LINE(143)
	return (bool((o == one)) || bool((o == two)));
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,sameAsAny,return )

bool Script_obj::sameAs( Dynamic o,Dynamic o2){
	HX_STACK_PUSH("Script::sameAs","com/stencyl/behavior/Script.hx",138);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_ARG(o2,"o2");
	HX_STACK_LINE(138)
	return (o == o2);
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,sameAs,return )

int Script_obj::FRONT;

int Script_obj::MIDDLE;

int Script_obj::BACK;

int Script_obj::CHANNELS;

::com::stencyl::models::Actor Script_obj::lastCreatedActor;

::box2D::dynamics::joints::B2Joint Script_obj::lastCreatedJoint;

::com::stencyl::models::Region Script_obj::lastCreatedRegion;

::com::stencyl::models::Terrain Script_obj::lastCreatedTerrainRegion;

Float Script_obj::mpx;

Float Script_obj::mpy;

Float Script_obj::mrx;

Float Script_obj::mry;

::box2D::common::math::B2Vec2 Script_obj::dummyVec;

bool Script_obj::strCompare( ::String one,::String two,int whichWay){
	HX_STACK_PUSH("Script::strCompare","com/stencyl/behavior/Script.hx",153);
	HX_STACK_ARG(one,"one");
	HX_STACK_ARG(two,"two");
	HX_STACK_ARG(whichWay,"whichWay");
	HX_STACK_LINE(153)
	if (((whichWay < (int)0))){
		HX_STACK_LINE(155)
		return (one < two);
	}
	else{
		HX_STACK_LINE(160)
		return (one > two);
	}
	HX_STACK_LINE(153)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Script_obj,strCompare,return )

bool Script_obj::strCompareBefore( ::String a,::String b){
	HX_STACK_PUSH("Script::strCompareBefore","com/stencyl/behavior/Script.hx",166);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(166)
	return (a < b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Script_obj,strCompareBefore,return )

bool Script_obj::strCompareAfter( ::String a,::String b){
	HX_STACK_PUSH("Script::strCompareAfter","com/stencyl/behavior/Script.hx",171);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(171)
	return (a > b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Script_obj,strCompareAfter,return )

Void Script_obj::abortTween( Dynamic target){
{
		HX_STACK_PUSH("Script::abortTween","com/stencyl/behavior/Script.hx",2173);
		HX_STACK_ARG(target,"target");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Script_obj,abortTween,(void))


Script_obj::Script_obj()
{
}

void Script_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Script);
	HX_MARK_MEMBER_NAME(scriptInit,"scriptInit");
	HX_MARK_MEMBER_NAME(nameMap,"nameMap");
	HX_MARK_MEMBER_NAME(checkProperties,"checkProperties");
	HX_MARK_MEMBER_NAME(equalityPairs,"equalityPairs");
	HX_MARK_MEMBER_NAME(propertyChangeListeners,"propertyChangeListeners");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(engine,"engine");
	HX_MARK_MEMBER_NAME(wrapper,"wrapper");
	HX_MARK_END_CLASS();
}

void Script_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scriptInit,"scriptInit");
	HX_VISIT_MEMBER_NAME(nameMap,"nameMap");
	HX_VISIT_MEMBER_NAME(checkProperties,"checkProperties");
	HX_VISIT_MEMBER_NAME(equalityPairs,"equalityPairs");
	HX_VISIT_MEMBER_NAME(propertyChangeListeners,"propertyChangeListeners");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(engine,"engine");
	HX_VISIT_MEMBER_NAME(wrapper,"wrapper");
}

Dynamic Script_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mpx") ) { return mpx; }
		if (HX_FIELD_EQ(inName,"mpy") ) { return mpy; }
		if (HX_FIELD_EQ(inName,"mrx") ) { return mrx; }
		if (HX_FIELD_EQ(inName,"mry") ) { return mry; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BACK") ) { return BACK; }
		if (HX_FIELD_EQ(inName,"mute") ) { return mute_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FRONT") ) { return FRONT; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"MIDDLE") ) { return MIDDLE; }
		if (HX_FIELD_EQ(inName,"unmute") ) { return unmute_dyn(); }
		if (HX_FIELD_EQ(inName,"sameAs") ) { return sameAs_dyn(); }
		if (HX_FIELD_EQ(inName,"engine") ) { return engine; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"vibrate") ) { return vibrate_dyn(); }
		if (HX_FIELD_EQ(inName,"unpause") ) { return unpause_dyn(); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"nameMap") ) { return nameMap; }
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"CHANNELS") ) { return CHANNELS; }
		if (HX_FIELD_EQ(inName,"dummyVec") ) { return dummyVec; }
		if (HX_FIELD_EQ(inName,"visitURL") ) { return visitURL_dyn(); }
		if (HX_FIELD_EQ(inName,"loadGame") ) { return loadGame_dyn(); }
		if (HX_FIELD_EQ(inName,"saveGame") ) { return saveGame_dyn(); }
		if (HX_FIELD_EQ(inName,"pauseAll") ) { return pauseAll_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"getActor") ) { return getActor_dyn(); }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return getLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getScene") ) { return getScene_dyn(); }
		if (HX_FIELD_EQ(inName,"runLater") ) { return runLater_dyn(); }
		if (HX_FIELD_EQ(inName,"hasValue") ) { return hasValue_dyn(); }
		if (HX_FIELD_EQ(inName,"asNumber") ) { return asNumber_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showAlert") ) { return showAlert_dyn(); }
		if (HX_FIELD_EQ(inName,"loadAtlas") ) { return loadAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"postToURL") ) { return postToURL_dyn(); }
		if (HX_FIELD_EQ(inName,"randomInt") ) { return randomInt_dyn(); }
		if (HX_FIELD_EQ(inName,"loopSound") ) { return loopSound_dyn(); }
		if (HX_FIELD_EQ(inName,"playSound") ) { return playSound_dyn(); }
		if (HX_FIELD_EQ(inName,"getMouseY") ) { return getMouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"getMouseX") ) { return getMouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"isKeyDown") ) { return isKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"getCamera") ) { return getCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"getRegion") ) { return getRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"asBoolean") ) { return asBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"sameAsAny") ) { return sameAsAny_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"strCompare") ) { return strCompare_dyn(); }
		if (HX_FIELD_EQ(inName,"abortTween") ) { return abortTween_dyn(); }
		if (HX_FIELD_EQ(inName,"unpauseAll") ) { return unpauseAll_dyn(); }
		if (HX_FIELD_EQ(inName,"getGravity") ) { return getGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"setGravity") ) { return setGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"hideCursor") ) { return hideCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"showCursor") ) { return showCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"isCtrlDown") ) { return isCtrlDown_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenY") ) { return getScreenY_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenX") ) { return getScreenX_dyn(); }
		if (HX_FIELD_EQ(inName,"sayToScene") ) { return sayToScene_dyn(); }
		if (HX_FIELD_EQ(inName,"isInRegion") ) { return isInRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"scriptInit") ) { return scriptInit; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"unloadAtlas") ) { return unloadAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"mochiShowAd") ) { return mochiShowAd_dyn(); }
		if (HX_FIELD_EQ(inName,"simpleTweet") ) { return simpleTweet_dyn(); }
		if (HX_FIELD_EQ(inName,"tweenNumber") ) { return tweenNumber_dyn(); }
		if (HX_FIELD_EQ(inName,"randomFloat") ) { return randomFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"getTopLayer") ) { return getTopLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"createActor") ) { return createActor_dyn(); }
		if (HX_FIELD_EQ(inName,"isMouseDown") ) { return isMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"isShiftDown") ) { return isShiftDown_dyn(); }
		if (HX_FIELD_EQ(inName,"switchScene") ) { return switchScene_dyn(); }
		if (HX_FIELD_EQ(inName,"getStepSize") ) { return getStepSize_dyn(); }
		if (HX_FIELD_EQ(inName,"isPrimitive") ) { return isPrimitive_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideKeyboard") ) { return hideKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"showKeyboard") ) { return showKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"purchasesUse") ) { return purchasesUse_dyn(); }
		if (HX_FIELD_EQ(inName,"purchasesBuy") ) { return purchasesBuy_dyn(); }
		if (HX_FIELD_EQ(inName,"hideMobileAd") ) { return hideMobileAd_dyn(); }
		if (HX_FIELD_EQ(inName,"showMobileAd") ) { return showMobileAd_dyn(); }
		if (HX_FIELD_EQ(inName,"setTimeScale") ) { return setTimeScale_dyn(); }
		if (HX_FIELD_EQ(inName,"toPixelUnits") ) { return toPixelUnits_dyn(); }
		if (HX_FIELD_EQ(inName,"getActorType") ) { return getActorType_dyn(); }
		if (HX_FIELD_EQ(inName,"recycleActor") ) { return recycleActor_dyn(); }
		if (HX_FIELD_EQ(inName,"isKeyPressed") ) { return isKeyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"createFadeIn") ) { return createFadeIn_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileWidth") ) { return getTileWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"shoutToScene") ) { return shoutToScene_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRegion") ) { return removeRegion_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setBackground") ) { return setBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"stopAllSounds") ) { return stopAllSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"getActorGroup") ) { return getActorGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"isKeyReleased") ) { return isKeyReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"hideTileLayer") ) { return hideTileLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"showTileLayer") ) { return showTileLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"createFadeOut") ) { return createFadeOut_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileHeight") ) { return getTileHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"getSceneWidth") ) { return getSceneWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"getIDForScene") ) { return getIDForScene_dyn(); }
		if (HX_FIELD_EQ(inName,"getAllRegions") ) { return getAllRegions_dyn(); }
		if (HX_FIELD_EQ(inName,"equalityPairs") ) { return equalityPairs; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getScreenWidth") ) { return getScreenWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"getMiddleLayer") ) { return getMiddleLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getBottomLayer") ) { return getBottomLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getMouseWorldY") ) { return getMouseWorldY_dyn(); }
		if (HX_FIELD_EQ(inName,"getMouseWorldX") ) { return getMouseWorldX_dyn(); }
		if (HX_FIELD_EQ(inName,"isMousePressed") ) { return isMousePressed_dyn(); }
		if (HX_FIELD_EQ(inName,"createCircleIn") ) { return createCircleIn_dyn(); }
		if (HX_FIELD_EQ(inName,"createBlindsIn") ) { return createBlindsIn_dyn(); }
		if (HX_FIELD_EQ(inName,"getSceneHeight") ) { return getSceneHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"getGroupByName") ) { return getGroupByName_dyn(); }
		if (HX_FIELD_EQ(inName,"clearListeners") ) { return clearListeners_dyn(); }
		if (HX_FIELD_EQ(inName,"forwardMessage") ) { return forwardMessage_dyn(); }
		if (HX_FIELD_EQ(inName,"toInternalName") ) { return toInternalName_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"strCompareAfter") ) { return strCompareAfter_dyn(); }
		if (HX_FIELD_EQ(inName,"createHueFilter") ) { return createHueFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"setKeyboardText") ) { return setKeyboardText_dyn(); }
		if (HX_FIELD_EQ(inName,"mochiShowScores") ) { return mochiShowScores_dyn(); }
		if (HX_FIELD_EQ(inName,"isTransitioning") ) { return isTransitioning_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenHeight") ) { return getScreenHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"toPhysicalUnits") ) { return toPhysicalUnits_dyn(); }
		if (HX_FIELD_EQ(inName,"getActorsOfType") ) { return getActorsOfType_dyn(); }
		if (HX_FIELD_EQ(inName,"isMouseReleased") ) { return isMouseReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeTileLayerTo") ) { return fadeTileLayerTo_dyn(); }
		if (HX_FIELD_EQ(inName,"createCircleOut") ) { return createCircleOut_dyn(); }
		if (HX_FIELD_EQ(inName,"createBlindsOut") ) { return createBlindsOut_dyn(); }
		if (HX_FIELD_EQ(inName,"createBubblesIn") ) { return createBubblesIn_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentScene") ) { return getCurrentScene_dyn(); }
		if (HX_FIELD_EQ(inName,"runPeriodically") ) { return runPeriodically_dyn(); }
		if (HX_FIELD_EQ(inName,"createBoxRegion") ) { return createBoxRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"propertyChanged") ) { return propertyChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"getDefaultValue") ) { return getDefaultValue_dyn(); }
		if (HX_FIELD_EQ(inName,"checkProperties") ) { return checkProperties; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lastCreatedActor") ) { return lastCreatedActor; }
		if (HX_FIELD_EQ(inName,"lastCreatedJoint") ) { return lastCreatedJoint; }
		if (HX_FIELD_EQ(inName,"strCompareBefore") ) { return strCompareBefore_dyn(); }
		if (HX_FIELD_EQ(inName,"createTintFilter") ) { return createTintFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"purchasesRestore") ) { return purchasesRestore_dyn(); }
		if (HX_FIELD_EQ(inName,"mochiSubmitScore") ) { return mochiSubmitScore_dyn(); }
		if (HX_FIELD_EQ(inName,"newgroundsHelper") ) { return newgroundsHelper_dyn(); }
		if (HX_FIELD_EQ(inName,"newgroundsShowAd") ) { return newgroundsShowAd_dyn(); }
		if (HX_FIELD_EQ(inName,"openURLInBrowser") ) { return openURLInBrowser_dyn(); }
		if (HX_FIELD_EQ(inName,"toggleFullScreen") ) { return toggleFullScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"getAllActorTypes") ) { return getAllActorTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"getMousePressedY") ) { return getMousePressedY_dyn(); }
		if (HX_FIELD_EQ(inName,"getMousePressedX") ) { return getMousePressedX_dyn(); }
		if (HX_FIELD_EQ(inName,"simulateKeyPress") ) { return simulateKeyPress_dyn(); }
		if (HX_FIELD_EQ(inName,"createBubblesOut") ) { return createBubblesOut_dyn(); }
		if (HX_FIELD_EQ(inName,"createPixelizeIn") ) { return createPixelizeIn_dyn(); }
		if (HX_FIELD_EQ(inName,"getGameAttribute") ) { return getGameAttribute_dyn(); }
		if (HX_FIELD_EQ(inName,"setGameAttribute") ) { return setGameAttribute_dyn(); }
		if (HX_FIELD_EQ(inName,"setValueForScene") ) { return setValueForScene_dyn(); }
		if (HX_FIELD_EQ(inName,"getValueForScene") ) { return getValueForScene_dyn(); }
		if (HX_FIELD_EQ(inName,"sceneHasBehavior") ) { return sceneHasBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"addPauseListener") ) { return addPauseListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addSoundListener") ) { return addSoundListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addSwipeListener") ) { return addSwipeListener_dyn(); }
		if (HX_FIELD_EQ(inName,"internalGetGroup") ) { return internalGetGroup_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastCreatedRegion") ) { return lastCreatedRegion; }
		if (HX_FIELD_EQ(inName,"createSepiaFilter") ) { return createSepiaFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"purchasesGetPrice") ) { return purchasesGetPrice_dyn(); }
		if (HX_FIELD_EQ(inName,"purchasesGetTitle") ) { return purchasesGetTitle_dyn(); }
		if (HX_FIELD_EQ(inName,"kongregateIsGuest") ) { return kongregateIsGuest_dyn(); }
		if (HX_FIELD_EQ(inName,"kongregateInitAPI") ) { return kongregateInitAPI_dyn(); }
		if (HX_FIELD_EQ(inName,"defaultURLHandler") ) { return defaultURLHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"stopShakingScreen") ) { return stopShakingScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"getMouseReleasedY") ) { return getMouseReleasedY_dyn(); }
		if (HX_FIELD_EQ(inName,"getMouseReleasedX") ) { return getMouseReleasedX_dyn(); }
		if (HX_FIELD_EQ(inName,"createRectangleIn") ) { return createRectangleIn_dyn(); }
		if (HX_FIELD_EQ(inName,"createPixelizeOut") ) { return createPixelizeOut_dyn(); }
		if (HX_FIELD_EQ(inName,"getActorsInRegion") ) { return getActorsInRegion_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enableDebugDrawing") ) { return enableDebugDrawing_dyn(); }
		if (HX_FIELD_EQ(inName,"setIconBadgeNumber") ) { return setIconBadgeNumber_dyn(); }
		if (HX_FIELD_EQ(inName,"purchasesHasBought") ) { return purchasesHasBought_dyn(); }
		if (HX_FIELD_EQ(inName,"startShakingScreen") ) { return startShakingScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeInForAllSounds") ) { return fadeInForAllSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"stopSoundOnChannel") ) { return stopSoundOnChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"loopSoundOnChannel") ) { return loopSoundOnChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"playSoundOnChannel") ) { return playSoundOnChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"getActorTypeByName") ) { return getActorTypeByName_dyn(); }
		if (HX_FIELD_EQ(inName,"simulateKeyRelease") ) { return simulateKeyRelease_dyn(); }
		if (HX_FIELD_EQ(inName,"createRectangleOut") ) { return createRectangleOut_dyn(); }
		if (HX_FIELD_EQ(inName,"reloadCurrentScene") ) { return reloadCurrentScene_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"disableDebugDrawing") ) { return disableDebugDrawing_dyn(); }
		if (HX_FIELD_EQ(inName,"kongregateGetUserID") ) { return kongregateGetUserID_dyn(); }
		if (HX_FIELD_EQ(inName,"newgroundsShowScore") ) { return newgroundsShowScore_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeOutForAllSounds") ) { return fadeOutForAllSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"setVolumeForChannel") ) { return setVolumeForChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"pauseSoundOnChannel") ) { return pauseSoundOnChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"createRecycledActor") ) { return createRecycledActor_dyn(); }
		if (HX_FIELD_EQ(inName,"getLastCreatedActor") ) { return getLastCreatedActor_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentSceneName") ) { return getCurrentSceneName_dyn(); }
		if (HX_FIELD_EQ(inName,"disableThisBehavior") ) { return disableThisBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"addKeyStateListener") ) { return addKeyStateListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addPurchaseListener") ) { return addPurchaseListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addMobileAdListener") ) { return addMobileAdListener_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createNegativeFilter") ) { return createNegativeFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"purchasesGetQuantity") ) { return purchasesGetQuantity_dyn(); }
		if (HX_FIELD_EQ(inName,"gameCenterInitialize") ) { return gameCenterInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"kongregateSubmitStat") ) { return kongregateSubmitStat_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeInSoundOnChannel") ) { return fadeInSoundOnChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"resumeSoundOnChannel") ) { return resumeSoundOnChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"setBlendModeForLayer") ) { return setBlendModeForLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"createCircularRegion") ) { return createCircularRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"getLastCreatedRegion") ) { return getLastCreatedRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"addCollisionListener") ) { return addCollisionListener_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createGrayscaleFilter") ) { return createGrayscaleFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"gameCenterSubmitScore") ) { return gameCenterSubmitScore_dyn(); }
		if (HX_FIELD_EQ(inName,"gameCenterGetPlayerID") ) { return gameCenterGetPlayerID_dyn(); }
		if (HX_FIELD_EQ(inName,"kongregateGetUsername") ) { return kongregateGetUsername_dyn(); }
		if (HX_FIELD_EQ(inName,"newgroundsSubmitScore") ) { return newgroundsSubmitScore_dyn(); }
		if (HX_FIELD_EQ(inName,"newgroundsUnlockMedal") ) { return newgroundsUnlockMedal_dyn(); }
		if (HX_FIELD_EQ(inName,"setOffscreenTolerance") ) { return setOffscreenTolerance_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeOutSoundOnChannel") ) { return fadeOutSoundOnChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"setVolumeForAllSounds") ) { return setVolumeForAllSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"createSlideTransition") ) { return createSlideTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"addMouseMovedListener") ) { return addMouseMovedListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addWhenKilledListener") ) { return addWhenKilledListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addGameCenterListener") ) { return addGameCenterListener_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createBrightnessFilter") ) { return createBrightnessFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"createSaturationFilter") ) { return createSaturationFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"createActorInNextScene") ) { return createActorInNextScene_dyn(); }
		if (HX_FIELD_EQ(inName,"enableBehaviorForScene") ) { return enableBehaviorForScene_dyn(); }
		if (HX_FIELD_EQ(inName,"addFocusChangeListener") ) { return addFocusChangeListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addWhenDrawingListener") ) { return addWhenDrawingListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addWhenUpdatedListener") ) { return addWhenUpdatedListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addWhenCreatedListener") ) { return addWhenCreatedListener_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"purchasesGetDescription") ) { return purchasesGetDescription_dyn(); }
		if (HX_FIELD_EQ(inName,"purchasesAreInitialized") ) { return purchasesAreInitialized_dyn(); }
		if (HX_FIELD_EQ(inName,"gameCenterGetPlayerName") ) { return gameCenterGetPlayerName_dyn(); }
		if (HX_FIELD_EQ(inName,"createSlideUpTransition") ) { return createSlideUpTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"disableBehaviorForScene") ) { return disableBehaviorForScene_dyn(); }
		if (HX_FIELD_EQ(inName,"addMouseDraggedListener") ) { return addMouseDraggedListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addMousePressedListener") ) { return addMousePressedListener_dyn(); }
		if (HX_FIELD_EQ(inName,"propertyChangeListeners") ) { return propertyChangeListeners; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lastCreatedTerrainRegion") ) { return lastCreatedTerrainRegion; }
		if (HX_FIELD_EQ(inName,"addMouseReleasedListener") ) { return addMouseReleasedListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addMultiTouchEndListener") ) { return addMultiTouchEndListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addActorPositionListener") ) { return addActorPositionListener_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"gameCenterShowLeaderboard") ) { return gameCenterShowLeaderboard_dyn(); }
		if (HX_FIELD_EQ(inName,"gameCenterIsAuthenticated") ) { return gameCenterIsAuthenticated_dyn(); }
		if (HX_FIELD_EQ(inName,"createCrossfadeTransition") ) { return createCrossfadeTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"createSlideLeftTransition") ) { return createSlideLeftTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"createSlideDownTransition") ) { return createSlideDownTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"isBehaviorEnabledForScene") ) { return isBehaviorEnabledForScene_dyn(); }
		if (HX_FIELD_EQ(inName,"addSceneCollisionListener") ) { return addSceneCollisionListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addPropertyChangeListener") ) { return addPropertyChangeListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addMouseOverActorListener") ) { return addMouseOverActorListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addMultiTouchMoveListener") ) { return addMultiTouchMoveListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addMobileKeyboardListener") ) { return addMobileKeyboardListener_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"gameCenterShowAchievements") ) { return gameCenterShowAchievements_dyn(); }
		if (HX_FIELD_EQ(inName,"newgroundsSetMedalPosition") ) { return newgroundsSetMedalPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"enableContinuousCollisions") ) { return enableContinuousCollisions_dyn(); }
		if (HX_FIELD_EQ(inName,"createSlideRightTransition") ) { return createSlideRightTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"addMultiTouchStartListener") ) { return addMultiTouchStartListener_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"purchasesRequestProductInfo") ) { return purchasesRequestProductInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"gameCenterResetAchievements") ) { return gameCenterResetAchievements_dyn(); }
		if (HX_FIELD_EQ(inName,"gameCenterSubmitAchievement") ) { return gameCenterSubmitAchievement_dyn(); }
		if (HX_FIELD_EQ(inName,"setScrollSpeedForBackground") ) { return setScrollSpeedForBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"addActorExitsRegionListener") ) { return addActorExitsRegionListener_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"addActorEntersRegionListener") ) { return addActorEntersRegionListener_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"makeActorNotPassThroughTerrain") ) { return makeActorNotPassThroughTerrain_dyn(); }
		if (HX_FIELD_EQ(inName,"addWhenTypeGroupKilledListener") ) { return addWhenTypeGroupKilledListener_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"addWhenTypeGroupCreatedListener") ) { return addWhenTypeGroupCreatedListener_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"addActorTypeGroupPositionListener") ) { return addActorTypeGroupPositionListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Script_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mpx") ) { mpx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mpy") ) { mpy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mrx") ) { mrx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mry") ) { mry=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BACK") ) { BACK=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FRONT") ) { FRONT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::com::stencyl::Engine >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"MIDDLE") ) { MIDDLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"engine") ) { engine=inValue.Cast< ::com::stencyl::Engine >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nameMap") ) { nameMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrapper") ) { wrapper=inValue.Cast< ::com::stencyl::behavior::Behavior >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"CHANNELS") ) { CHANNELS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dummyVec") ) { dummyVec=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scriptInit") ) { scriptInit=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"equalityPairs") ) { equalityPairs=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkProperties") ) { checkProperties=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lastCreatedActor") ) { lastCreatedActor=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastCreatedJoint") ) { lastCreatedJoint=inValue.Cast< ::box2D::dynamics::joints::B2Joint >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastCreatedRegion") ) { lastCreatedRegion=inValue.Cast< ::com::stencyl::models::Region >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"propertyChangeListeners") ) { propertyChangeListeners=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lastCreatedTerrainRegion") ) { lastCreatedTerrainRegion=inValue.Cast< ::com::stencyl::models::Terrain >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Script_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scriptInit"));
	outFields->push(HX_CSTRING("nameMap"));
	outFields->push(HX_CSTRING("checkProperties"));
	outFields->push(HX_CSTRING("equalityPairs"));
	outFields->push(HX_CSTRING("propertyChangeListeners"));
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("engine"));
	outFields->push(HX_CSTRING("wrapper"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FRONT"),
	HX_CSTRING("MIDDLE"),
	HX_CSTRING("BACK"),
	HX_CSTRING("CHANNELS"),
	HX_CSTRING("lastCreatedActor"),
	HX_CSTRING("lastCreatedJoint"),
	HX_CSTRING("lastCreatedRegion"),
	HX_CSTRING("lastCreatedTerrainRegion"),
	HX_CSTRING("mpx"),
	HX_CSTRING("mpy"),
	HX_CSTRING("mrx"),
	HX_CSTRING("mry"),
	HX_CSTRING("dummyVec"),
	HX_CSTRING("strCompare"),
	HX_CSTRING("strCompareBefore"),
	HX_CSTRING("strCompareAfter"),
	HX_CSTRING("abortTween"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("createBrightnessFilter"),
	HX_CSTRING("createSaturationFilter"),
	HX_CSTRING("createHueFilter"),
	HX_CSTRING("createTintFilter"),
	HX_CSTRING("createNegativeFilter"),
	HX_CSTRING("createSepiaFilter"),
	HX_CSTRING("createGrayscaleFilter"),
	HX_CSTRING("disableDebugDrawing"),
	HX_CSTRING("enableDebugDrawing"),
	HX_CSTRING("setIconBadgeNumber"),
	HX_CSTRING("setKeyboardText"),
	HX_CSTRING("hideKeyboard"),
	HX_CSTRING("showKeyboard"),
	HX_CSTRING("vibrate"),
	HX_CSTRING("showAlert"),
	HX_CSTRING("purchasesGetQuantity"),
	HX_CSTRING("purchasesUse"),
	HX_CSTRING("purchasesRequestProductInfo"),
	HX_CSTRING("purchasesGetPrice"),
	HX_CSTRING("purchasesGetDescription"),
	HX_CSTRING("purchasesGetTitle"),
	HX_CSTRING("purchasesHasBought"),
	HX_CSTRING("purchasesBuy"),
	HX_CSTRING("purchasesRestore"),
	HX_CSTRING("purchasesAreInitialized"),
	HX_CSTRING("gameCenterResetAchievements"),
	HX_CSTRING("gameCenterSubmitAchievement"),
	HX_CSTRING("gameCenterSubmitScore"),
	HX_CSTRING("gameCenterShowAchievements"),
	HX_CSTRING("gameCenterShowLeaderboard"),
	HX_CSTRING("gameCenterGetPlayerID"),
	HX_CSTRING("gameCenterGetPlayerName"),
	HX_CSTRING("gameCenterIsAuthenticated"),
	HX_CSTRING("gameCenterInitialize"),
	HX_CSTRING("hideMobileAd"),
	HX_CSTRING("showMobileAd"),
	HX_CSTRING("unloadAtlas"),
	HX_CSTRING("loadAtlas"),
	HX_CSTRING("mochiSubmitScore"),
	HX_CSTRING("mochiShowScores"),
	HX_CSTRING("mochiShowAd"),
	HX_CSTRING("kongregateGetUserID"),
	HX_CSTRING("kongregateGetUsername"),
	HX_CSTRING("kongregateIsGuest"),
	HX_CSTRING("kongregateSubmitStat"),
	HX_CSTRING("kongregateInitAPI"),
	HX_CSTRING("newgroundsHelper"),
	HX_CSTRING("newgroundsShowScore"),
	HX_CSTRING("newgroundsSubmitScore"),
	HX_CSTRING("newgroundsUnlockMedal"),
	HX_CSTRING("newgroundsSetMedalPosition"),
	HX_CSTRING("newgroundsShowAd"),
	HX_CSTRING("simpleTweet"),
	HX_CSTRING("postToURL"),
	HX_CSTRING("visitURL"),
	HX_CSTRING("openURLInBrowser"),
	HX_CSTRING("defaultURLHandler"),
	HX_CSTRING("loadGame"),
	HX_CSTRING("saveGame"),
	HX_CSTRING("tweenNumber"),
	HX_CSTRING("randomInt"),
	HX_CSTRING("randomFloat"),
	HX_CSTRING("setTimeScale"),
	HX_CSTRING("isTransitioning"),
	HX_CSTRING("setOffscreenTolerance"),
	HX_CSTRING("getScreenHeight"),
	HX_CSTRING("getScreenWidth"),
	HX_CSTRING("unpauseAll"),
	HX_CSTRING("pauseAll"),
	HX_CSTRING("toggleFullScreen"),
	HX_CSTRING("unpause"),
	HX_CSTRING("pause"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getMiddleLayer"),
	HX_CSTRING("getBottomLayer"),
	HX_CSTRING("getTopLayer"),
	HX_CSTRING("stopShakingScreen"),
	HX_CSTRING("startShakingScreen"),
	HX_CSTRING("setBackground"),
	HX_CSTRING("setScrollSpeedForBackground"),
	HX_CSTRING("fadeOutForAllSounds"),
	HX_CSTRING("fadeInForAllSounds"),
	HX_CSTRING("fadeOutSoundOnChannel"),
	HX_CSTRING("fadeInSoundOnChannel"),
	HX_CSTRING("setVolumeForAllSounds"),
	HX_CSTRING("stopAllSounds"),
	HX_CSTRING("setVolumeForChannel"),
	HX_CSTRING("resumeSoundOnChannel"),
	HX_CSTRING("pauseSoundOnChannel"),
	HX_CSTRING("stopSoundOnChannel"),
	HX_CSTRING("loopSoundOnChannel"),
	HX_CSTRING("playSoundOnChannel"),
	HX_CSTRING("loopSound"),
	HX_CSTRING("playSound"),
	HX_CSTRING("getSound"),
	HX_CSTRING("unmute"),
	HX_CSTRING("mute"),
	HX_CSTRING("makeActorNotPassThroughTerrain"),
	HX_CSTRING("toPixelUnits"),
	HX_CSTRING("toPhysicalUnits"),
	HX_CSTRING("enableContinuousCollisions"),
	HX_CSTRING("getGravity"),
	HX_CSTRING("setGravity"),
	HX_CSTRING("getActorGroup"),
	HX_CSTRING("getActor"),
	HX_CSTRING("getActorsOfType"),
	HX_CSTRING("getAllActorTypes"),
	HX_CSTRING("getActorType"),
	HX_CSTRING("getActorTypeByName"),
	HX_CSTRING("createActorInNextScene"),
	HX_CSTRING("recycleActor"),
	HX_CSTRING("createRecycledActor"),
	HX_CSTRING("createActor"),
	HX_CSTRING("getLastCreatedActor"),
	HX_CSTRING("hideCursor"),
	HX_CSTRING("showCursor"),
	HX_CSTRING("getMouseReleasedY"),
	HX_CSTRING("getMouseReleasedX"),
	HX_CSTRING("getMousePressedY"),
	HX_CSTRING("getMousePressedX"),
	HX_CSTRING("getMouseWorldY"),
	HX_CSTRING("getMouseWorldX"),
	HX_CSTRING("getMouseY"),
	HX_CSTRING("getMouseX"),
	HX_CSTRING("isMouseReleased"),
	HX_CSTRING("isMousePressed"),
	HX_CSTRING("isMouseDown"),
	HX_CSTRING("isKeyReleased"),
	HX_CSTRING("isKeyPressed"),
	HX_CSTRING("isKeyDown"),
	HX_CSTRING("simulateKeyRelease"),
	HX_CSTRING("simulateKeyPress"),
	HX_CSTRING("isShiftDown"),
	HX_CSTRING("isCtrlDown"),
	HX_CSTRING("getCamera"),
	HX_CSTRING("getScreenY"),
	HX_CSTRING("getScreenX"),
	HX_CSTRING("fadeTileLayerTo"),
	HX_CSTRING("hideTileLayer"),
	HX_CSTRING("showTileLayer"),
	HX_CSTRING("setBlendModeForLayer"),
	HX_CSTRING("getLayer"),
	HX_CSTRING("createCircleIn"),
	HX_CSTRING("createCircleOut"),
	HX_CSTRING("createFadeIn"),
	HX_CSTRING("createFadeOut"),
	HX_CSTRING("createCrossfadeTransition"),
	HX_CSTRING("createSlideRightTransition"),
	HX_CSTRING("createSlideLeftTransition"),
	HX_CSTRING("createSlideDownTransition"),
	HX_CSTRING("createSlideUpTransition"),
	HX_CSTRING("createSlideTransition"),
	HX_CSTRING("createRectangleIn"),
	HX_CSTRING("createRectangleOut"),
	HX_CSTRING("createBlindsIn"),
	HX_CSTRING("createBlindsOut"),
	HX_CSTRING("createBubblesIn"),
	HX_CSTRING("createBubblesOut"),
	HX_CSTRING("createPixelizeIn"),
	HX_CSTRING("createPixelizeOut"),
	HX_CSTRING("switchScene"),
	HX_CSTRING("reloadCurrentScene"),
	HX_CSTRING("getTileHeight"),
	HX_CSTRING("getTileWidth"),
	HX_CSTRING("getSceneHeight"),
	HX_CSTRING("getSceneWidth"),
	HX_CSTRING("getCurrentSceneName"),
	HX_CSTRING("getIDForScene"),
	HX_CSTRING("getCurrentScene"),
	HX_CSTRING("getScene"),
	HX_CSTRING("getStepSize"),
	HX_CSTRING("runPeriodically"),
	HX_CSTRING("runLater"),
	HX_CSTRING("getGameAttribute"),
	HX_CSTRING("setGameAttribute"),
	HX_CSTRING("sayToScene"),
	HX_CSTRING("shoutToScene"),
	HX_CSTRING("setValueForScene"),
	HX_CSTRING("getValueForScene"),
	HX_CSTRING("disableThisBehavior"),
	HX_CSTRING("isBehaviorEnabledForScene"),
	HX_CSTRING("disableBehaviorForScene"),
	HX_CSTRING("enableBehaviorForScene"),
	HX_CSTRING("sceneHasBehavior"),
	HX_CSTRING("getActorsInRegion"),
	HX_CSTRING("isInRegion"),
	HX_CSTRING("createCircularRegion"),
	HX_CSTRING("createBoxRegion"),
	HX_CSTRING("removeRegion"),
	HX_CSTRING("getRegion"),
	HX_CSTRING("getAllRegions"),
	HX_CSTRING("getLastCreatedRegion"),
	HX_CSTRING("addPauseListener"),
	HX_CSTRING("addFocusChangeListener"),
	HX_CSTRING("addSoundListener"),
	HX_CSTRING("addWhenTypeGroupKilledListener"),
	HX_CSTRING("addWhenTypeGroupCreatedListener"),
	HX_CSTRING("addSceneCollisionListener"),
	HX_CSTRING("addCollisionListener"),
	HX_CSTRING("propertyChanged"),
	HX_CSTRING("addPropertyChangeListener"),
	HX_CSTRING("addMouseOverActorListener"),
	HX_CSTRING("addMouseDraggedListener"),
	HX_CSTRING("addMouseMovedListener"),
	HX_CSTRING("addMouseReleasedListener"),
	HX_CSTRING("addMousePressedListener"),
	HX_CSTRING("addKeyStateListener"),
	HX_CSTRING("addMultiTouchEndListener"),
	HX_CSTRING("addMultiTouchMoveListener"),
	HX_CSTRING("addMultiTouchStartListener"),
	HX_CSTRING("addSwipeListener"),
	HX_CSTRING("addActorTypeGroupPositionListener"),
	HX_CSTRING("addActorPositionListener"),
	HX_CSTRING("addActorExitsRegionListener"),
	HX_CSTRING("addActorEntersRegionListener"),
	HX_CSTRING("addWhenDrawingListener"),
	HX_CSTRING("addWhenUpdatedListener"),
	HX_CSTRING("addWhenKilledListener"),
	HX_CSTRING("addWhenCreatedListener"),
	HX_CSTRING("addPurchaseListener"),
	HX_CSTRING("addGameCenterListener"),
	HX_CSTRING("addMobileAdListener"),
	HX_CSTRING("addMobileKeyboardListener"),
	HX_CSTRING("init"),
	HX_CSTRING("getGroupByName"),
	HX_CSTRING("internalGetGroup"),
	HX_CSTRING("clearListeners"),
	HX_CSTRING("forwardMessage"),
	HX_CSTRING("toInternalName"),
	HX_CSTRING("getDefaultValue"),
	HX_CSTRING("isPrimitive"),
	HX_CSTRING("hasValue"),
	HX_CSTRING("asNumber"),
	HX_CSTRING("asBoolean"),
	HX_CSTRING("sameAsAny"),
	HX_CSTRING("sameAs"),
	HX_CSTRING("scriptInit"),
	HX_CSTRING("nameMap"),
	HX_CSTRING("checkProperties"),
	HX_CSTRING("equalityPairs"),
	HX_CSTRING("propertyChangeListeners"),
	HX_CSTRING("scene"),
	HX_CSTRING("engine"),
	HX_CSTRING("wrapper"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Script_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Script_obj::FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(Script_obj::MIDDLE,"MIDDLE");
	HX_MARK_MEMBER_NAME(Script_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(Script_obj::CHANNELS,"CHANNELS");
	HX_MARK_MEMBER_NAME(Script_obj::lastCreatedActor,"lastCreatedActor");
	HX_MARK_MEMBER_NAME(Script_obj::lastCreatedJoint,"lastCreatedJoint");
	HX_MARK_MEMBER_NAME(Script_obj::lastCreatedRegion,"lastCreatedRegion");
	HX_MARK_MEMBER_NAME(Script_obj::lastCreatedTerrainRegion,"lastCreatedTerrainRegion");
	HX_MARK_MEMBER_NAME(Script_obj::mpx,"mpx");
	HX_MARK_MEMBER_NAME(Script_obj::mpy,"mpy");
	HX_MARK_MEMBER_NAME(Script_obj::mrx,"mrx");
	HX_MARK_MEMBER_NAME(Script_obj::mry,"mry");
	HX_MARK_MEMBER_NAME(Script_obj::dummyVec,"dummyVec");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Script_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Script_obj::FRONT,"FRONT");
	HX_VISIT_MEMBER_NAME(Script_obj::MIDDLE,"MIDDLE");
	HX_VISIT_MEMBER_NAME(Script_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(Script_obj::CHANNELS,"CHANNELS");
	HX_VISIT_MEMBER_NAME(Script_obj::lastCreatedActor,"lastCreatedActor");
	HX_VISIT_MEMBER_NAME(Script_obj::lastCreatedJoint,"lastCreatedJoint");
	HX_VISIT_MEMBER_NAME(Script_obj::lastCreatedRegion,"lastCreatedRegion");
	HX_VISIT_MEMBER_NAME(Script_obj::lastCreatedTerrainRegion,"lastCreatedTerrainRegion");
	HX_VISIT_MEMBER_NAME(Script_obj::mpx,"mpx");
	HX_VISIT_MEMBER_NAME(Script_obj::mpy,"mpy");
	HX_VISIT_MEMBER_NAME(Script_obj::mrx,"mrx");
	HX_VISIT_MEMBER_NAME(Script_obj::mry,"mry");
	HX_VISIT_MEMBER_NAME(Script_obj::dummyVec,"dummyVec");
};

Class Script_obj::__mClass;

void Script_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.behavior.Script"), hx::TCanCast< Script_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Script_obj::__boot()
{
	FRONT= (int)0;
	MIDDLE= (int)1;
	BACK= (int)2;
	CHANNELS= (int)32;
	lastCreatedActor= null();
	lastCreatedJoint= null();
	lastCreatedRegion= null();
	lastCreatedTerrainRegion= null();
	mpx= (int)0;
	mpy= (int)0;
	mrx= (int)0;
	mry= (int)0;
	dummyVec= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
}

} // end namespace com
} // end namespace stencyl
} // end namespace behavior
