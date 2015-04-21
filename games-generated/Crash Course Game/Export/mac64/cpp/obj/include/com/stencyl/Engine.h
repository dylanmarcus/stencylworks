#ifndef INCLUDED_com_stencyl_Engine
#define INCLUDED_com_stencyl_Engine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(box2D,collision,shapes,B2Shape)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS2(box2D,dynamics,B2Body)
HX_DECLARE_CLASS2(box2D,dynamics,B2DebugDraw)
HX_DECLARE_CLASS2(box2D,dynamics,B2World)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2DistanceJoint)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2Joint)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2LineJoint)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2RevoluteJoint)
HX_DECLARE_CLASS3(com,nmefermmmtools,debug,Stats)
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,BehaviorManager)
HX_DECLARE_CLASS3(com,stencyl,behavior,TimedTask)
HX_DECLARE_CLASS3(com,stencyl,event,EventMaster)
HX_DECLARE_CLASS3(com,stencyl,event,NativeListener)
HX_DECLARE_CLASS3(com,stencyl,graphics,G)
HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,Transition)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS3(com,stencyl,models,Region)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS3(com,stencyl,models,Scene)
HX_DECLARE_CLASS3(com,stencyl,models,SoundChannel)
HX_DECLARE_CLASS3(com,stencyl,models,Terrain)
HX_DECLARE_CLASS4(com,stencyl,models,actor,ActorType)
HX_DECLARE_CLASS4(com,stencyl,models,actor,Collision)
HX_DECLARE_CLASS4(com,stencyl,models,actor,Group)
HX_DECLARE_CLASS4(com,stencyl,models,scene,ActorInstance)
HX_DECLARE_CLASS4(com,stencyl,models,scene,DeferredActor)
HX_DECLARE_CLASS4(com,stencyl,models,scene,Tile)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,MovieClip)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,display,Stage)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,KeyboardEvent)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace stencyl{


class HXCPP_CLASS_ATTRIBUTES  Engine_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Engine_obj OBJ_;
		Engine_obj();
		Void __construct(::flash::display::Sprite root);

	public:
		static hx::ObjectPtr< Engine_obj > __new(::flash::display::Sprite root);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Engine_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Engine"); }

		virtual Void setOffscreenTolerance( int top,int left,int bottom,int right);
		Dynamic setOffscreenTolerance_dyn();

		virtual Dynamic getGameAttribute( ::String name);
		Dynamic getGameAttribute_dyn();

		virtual Void setGameAttribute( ::String name,Dynamic value);
		Dynamic setGameAttribute_dyn();

		virtual int nextTerrainRegionID( );
		Dynamic nextTerrainRegionID_dyn();

		virtual ::haxe::ds::IntMap getTerrainRegions( );
		Dynamic getTerrainRegions_dyn();

		virtual ::com::stencyl::models::Terrain getTerrainRegion( int ID);
		Dynamic getTerrainRegion_dyn();

		virtual Void removeTerrainRegion( int ID);
		Dynamic removeTerrainRegion_dyn();

		virtual Void addTerrainRegion( ::com::stencyl::models::Terrain r);
		Dynamic addTerrainRegion_dyn();

		virtual ::com::stencyl::models::Terrain createCircularTerrainRegion( Float x,Float y,Float r,hx::Null< int >  groupID);
		Dynamic createCircularTerrainRegion_dyn();

		virtual ::com::stencyl::models::Terrain createBoxTerrainRegion( Float x,Float y,Float w,Float h,hx::Null< int >  groupID);
		Dynamic createBoxTerrainRegion_dyn();

		virtual ::com::stencyl::models::Terrain createTerrainRegion( Float x,Float y,::box2D::collision::shapes::B2Shape shape,hx::Null< bool >  offset,hx::Null< int >  groupID);
		Dynamic createTerrainRegion_dyn();

		virtual bool isInRegion( ::com::stencyl::models::Actor a,::com::stencyl::models::Region r);
		Dynamic isInRegion_dyn();

		virtual int nextRegionID( );
		Dynamic nextRegionID_dyn();

		virtual ::haxe::ds::IntMap getRegions( );
		Dynamic getRegions_dyn();

		virtual ::com::stencyl::models::Region getRegion( int ID);
		Dynamic getRegion_dyn();

		virtual Void removeRegion( int ID);
		Dynamic removeRegion_dyn();

		virtual Void addRegion( ::com::stencyl::models::Region r);
		Dynamic addRegion_dyn();

		virtual ::com::stencyl::models::Region createCircularRegion( Float x,Float y,Float r);
		Dynamic createCircularRegion_dyn();

		virtual ::com::stencyl::models::Region createBoxRegion( Float x,Float y,Float w,Float h);
		Dynamic createBoxRegion_dyn();

		virtual ::com::stencyl::models::Region createRegion( Float x,Float y,::box2D::collision::shapes::B2Shape shape,hx::Null< bool >  offset);
		Dynamic createRegion_dyn();

		virtual ::box2D::dynamics::joints::B2LineJoint createSlidingJoint( ::box2D::dynamics::B2Body one,::box2D::dynamics::B2Body two,::box2D::common::math::B2Vec2 dir,hx::Null< int >  jointID,hx::Null< bool >  collide,hx::Null< bool >  limit,hx::Null< bool >  motor,hx::Null< Float >  lower,hx::Null< Float >  upper,hx::Null< Float >  force,hx::Null< Float >  speed);
		Dynamic createSlidingJoint_dyn();

		virtual ::box2D::dynamics::joints::B2RevoluteJoint createHingeJoint( ::box2D::dynamics::B2Body one,::box2D::dynamics::B2Body two,::box2D::common::math::B2Vec2 pt,hx::Null< int >  jointID,hx::Null< bool >  collide,hx::Null< bool >  limit,hx::Null< bool >  motor,hx::Null< Float >  lower,hx::Null< Float >  upper,hx::Null< Float >  torque,hx::Null< Float >  speed);
		Dynamic createHingeJoint_dyn();

		virtual ::box2D::dynamics::joints::B2DistanceJoint createCustomStickJoint( ::box2D::dynamics::B2Body one,Float x1,Float y1,::box2D::dynamics::B2Body two,Float x2,Float y2);
		Dynamic createCustomStickJoint_dyn();

		virtual ::box2D::dynamics::joints::B2DistanceJoint createStickJoint( ::box2D::dynamics::B2Body one,::box2D::dynamics::B2Body two,hx::Null< int >  jointID,hx::Null< bool >  collide,hx::Null< Float >  damping,hx::Null< Float >  frequencyHz);
		Dynamic createStickJoint_dyn();

		virtual Void destroyJoint( ::box2D::dynamics::joints::B2Joint j);
		Dynamic destroyJoint_dyn();

		virtual ::box2D::dynamics::joints::B2Joint getJoint( int ID);
		Dynamic getJoint_dyn();

		virtual Void addJoint( ::box2D::dynamics::joints::B2Joint j);
		Dynamic addJoint_dyn();

		virtual int nextJointID( );
		Dynamic nextJointID_dyn();

		virtual ::com::stencyl::models::actor::Group getGroupByName( ::String groupName);
		Dynamic getGroupByName_dyn();

		virtual ::com::stencyl::models::actor::Group getGroup( int ID,::com::stencyl::models::Actor a);
		Dynamic getGroup_dyn();

		virtual Void disableGlobalSleeping( );
		Dynamic disableGlobalSleeping_dyn();

		virtual Void enableGlobalSleeping( );
		Dynamic enableGlobalSleeping_dyn();

		virtual Float getPhysicalHeight( );
		Dynamic getPhysicalHeight_dyn();

		virtual Float getPhysicalWidth( );
		Dynamic getPhysicalWidth_dyn();

		virtual int getIDFromLayerOrder( int layerOrder);
		Dynamic getIDFromLayerOrder_dyn();

		virtual int getOrderForLayerID( int layerID);
		Dynamic getOrderForLayerID_dyn();

		virtual Void bringForward( ::com::stencyl::models::Actor a);
		Dynamic bringForward_dyn();

		virtual Void bringToFront( ::com::stencyl::models::Actor a);
		Dynamic bringToFront_dyn();

		virtual Void sendBackward( ::com::stencyl::models::Actor a);
		Dynamic sendBackward_dyn();

		virtual Void sendToBack( ::com::stencyl::models::Actor a);
		Dynamic sendToBack_dyn();

		virtual Void moveToLayer( ::com::stencyl::models::Actor a,int layerID);
		Dynamic moveToLayer_dyn();

		virtual Void removeHUDActor( ::com::stencyl::models::Actor a);
		Dynamic removeHUDActor_dyn();

		virtual Void addHUDActor( ::com::stencyl::models::Actor a);
		Dynamic addHUDActor_dyn();

		virtual Array< ::Dynamic > getRecycledActorsOfType( ::com::stencyl::models::actor::ActorType type);
		Dynamic getRecycledActorsOfType_dyn();

		virtual Array< ::Dynamic > getActorsOfType( ::com::stencyl::models::actor::ActorType type);
		Dynamic getActorsOfType_dyn();

		virtual ::com::stencyl::models::Actor getActor( int ID);
		Dynamic getActor_dyn();

		virtual Dynamic shout( ::String msg,Dynamic args);
		Dynamic shout_dyn();

		virtual Dynamic say( ::String behaviorName,::String msg,Dynamic args);
		Dynamic say_dyn();

		virtual Void setValue( ::String behaviorName,::String attributeName,Dynamic value);
		Dynamic setValue_dyn();

		virtual Dynamic getValue( ::String behaviorName,::String attributeName);
		Dynamic getValue_dyn();

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual bool isPaused( );
		Dynamic isPaused_dyn();

		virtual Void unpause( );
		Dynamic unpause_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void cameraFollow( ::com::stencyl::models::Actor actor,hx::Null< bool >  lockX,hx::Null< bool >  lockY);
		Dynamic cameraFollow_dyn();

		virtual Void stopShakingScreen( );
		Dynamic stopShakingScreen_dyn();

		virtual Void shakeScreen( Float intensity,Float duration);
		Dynamic shakeScreen_dyn();

		virtual Void removeTask( ::com::stencyl::behavior::TimedTask taskToRemove);
		Dynamic removeTask_dyn();

		virtual Void addTask( ::com::stencyl::behavior::TimedTask task);
		Dynamic addTask_dyn();

		virtual Void soundFinished( int channelNum);
		Dynamic soundFinished_dyn();

		virtual Void handleCollision( ::com::stencyl::models::Actor a,::com::stencyl::models::actor::Collision event);
		Dynamic handleCollision_dyn();

		virtual Void focusChanged( bool lost);
		Dynamic focusChanged_dyn();

		virtual Void onFocusLost( ::flash::events::Event event);
		Dynamic onFocusLost_dyn();

		virtual Void onFocus( ::flash::events::Event event);
		Dynamic onFocus_dyn();

		virtual Void postUpdate( Float currTime);
		Dynamic postUpdate_dyn();

		virtual Void onUpdate( ::flash::events::Event event);
		Dynamic onUpdate_dyn();

		virtual Void update( Float elapsedTime);
		Dynamic update_dyn();

		virtual int getMiddleLayer( );
		Dynamic getMiddleLayer_dyn();

		virtual int getBottomLayer( );
		Dynamic getBottomLayer_dyn();

		virtual int getTopLayer( );
		Dynamic getTopLayer_dyn();

		virtual ::com::stencyl::models::Actor createActorOfType( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst);
		Dynamic createActorOfType_dyn();

		virtual ::com::stencyl::models::Actor getRecycledActorOfType( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst);
		Dynamic getRecycledActorOfType_dyn();

		virtual Void recycleActor( ::com::stencyl::models::Actor a);
		Dynamic recycleActor_dyn();

		virtual Void moveActorToLayer( ::com::stencyl::models::Actor a,int layerID);
		Dynamic moveActorToLayer_dyn();

		virtual Void removeActorFromLayer( ::com::stencyl::models::Actor a,int layerID);
		Dynamic removeActorFromLayer_dyn();

		virtual Void removeActor( ::com::stencyl::models::Actor a);
		Dynamic removeActor_dyn();

		virtual ::com::stencyl::models::Actor createActor( ::com::stencyl::models::scene::ActorInstance ai,hx::Null< bool >  offset);
		Dynamic createActor_dyn();

		virtual Void createActorInNextScene( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layer);
		Dynamic createActorInNextScene_dyn();

		virtual bool isTransitioningOut( );
		Dynamic isTransitioningOut_dyn();

		virtual bool isTransitioning( );
		Dynamic isTransitioning_dyn();

		virtual Void enterScene( );
		Dynamic enterScene_dyn();

		virtual Void switchScene( int sceneID,::com::stencyl::graphics::transitions::Transition leave,::com::stencyl::graphics::transitions::Transition enter);
		Dynamic switchScene_dyn();

		virtual Void cleanup( );
		Dynamic cleanup_dyn();

		virtual Void optimizePool( );
		Dynamic optimizePool_dyn();

		virtual Void initLayers( );
		Dynamic initLayers_dyn();

		virtual Void loadTerrain( );
		Dynamic loadTerrain_dyn();

		virtual Void loadJoints( );
		Dynamic loadJoints_dyn();

		virtual Void loadTerrainRegions( );
		Dynamic loadTerrainRegions_dyn();

		virtual Void loadRegions( );
		Dynamic loadRegions_dyn();

		virtual Void loadCamera( );
		Dynamic loadCamera_dyn();

		virtual Void initActorScripts( );
		Dynamic initActorScripts_dyn();

		virtual Void loadDeferredActors( );
		Dynamic loadDeferredActors_dyn();

		virtual Void loadActors( );
		Dynamic loadActors_dyn();

		virtual Void initPhysics( );
		Dynamic initPhysics_dyn();

		virtual Void loadBackground( int backgroundID,hx::Null< bool >  isForeground);
		Dynamic loadBackground_dyn();

		virtual Void loadForegrounds( );
		Dynamic loadForegrounds_dyn();

		virtual Void loadBackgrounds( );
		Dynamic loadBackgrounds_dyn();

		virtual Void loadScene( int sceneID);
		Dynamic loadScene_dyn();

		virtual Void begin( int initSceneID);
		Dynamic begin_dyn();

		virtual Void toggleFullscreen( hx::Null< bool >  forceOff);
		Dynamic toggleFullscreen_dyn();

		virtual Void onKeyDown( ::flash::events::KeyboardEvent e);
		Dynamic onKeyDown_dyn();

		::com::nmefermmmtools::debug::Stats stats;
		bool isFullScreen;
		Array< ::Dynamic > nativeListeners;
		Dynamic whenFocusChangedListeners;
		Dynamic whenMTEndListeners;
		Dynamic whenMTDragListeners;
		Dynamic whenMTStartListeners;
		Dynamic whenSwipedListeners;
		Dynamic whenPausedListeners;
		Dynamic whenMouseDraggedListeners;
		Dynamic whenMouseMovedListeners;
		Dynamic whenMouseReleasedListeners;
		Dynamic whenMousePressedListeners;
		Dynamic whenDrawingListeners;
		Dynamic whenUpdatedListeners;
		::haxe::ds::ObjectMap soundListeners;
		::haxe::ds::IntMap collisionListeners;
		::haxe::ds::IntMap typeGroupPositionListeners;
		::haxe::ds::ObjectMap whenTypeGroupDiesListeners;
		::haxe::ds::ObjectMap whenTypeGroupCreatedListeners;
		::haxe::ds::StringMap whenKeyPressedListeners;
		Array< ::Dynamic > disableCollisionList;
		::haxe::ds::IntMap collisionPairs;
		Float my;
		Float mx;
		Float acc;
		Float lastTime;
		::com::stencyl::behavior::BehaviorManager behaviors;
		::haxe::ds::StringMap gameAttributes;
		Array< ::Dynamic > actorsToCreate;
		::haxe::ds::IntMap atlasesToUnload;
		::haxe::ds::IntMap atlasesToLoad;
		Float cameraOldY;
		Float cameraOldX;
		bool cameraMoved;
		bool tileUpdated;
		::haxe::ds::IntMap layerOrders;
		::haxe::ds::IntMap layersToDraw;
		int middleLayer;
		int bottomLayer;
		int topLayer;
		Array< ::Dynamic > animatedTiles;
		::haxe::ds::StringMap dynamicTiles;
		::haxe::ds::IntMap tileLayers;
		::haxe::ds::IntMap layers;
		Array< ::Dynamic > actorsToCreateInNextScene;
		::haxe::ds::IntMap recycledActorsOfType;
		::haxe::ds::IntMap actorsOfType;
		::haxe::ds::IntMap hudActors;
		::haxe::ds::IntMap actorsPerLayer;
		int nextID;
		::haxe::ds::IntMap allActors;
		::haxe::ds::StringMap reverseGroups;
		::haxe::ds::IntMap groups;
		::com::stencyl::graphics::G g;
		::flash::display::Sprite debugLayer;
		::flash::display::Sprite transitionLayer;
		::flash::display::DisplayObject transitionBitmapLayer;
		::flash::display::Sprite hudLayer;
		::flash::display::Sprite master;
		::flash::display::Sprite root;
		::flash::display::Sprite defaultGroup;
		::haxe::ds::IntMap joints;
		::haxe::ds::IntMap terrainRegions;
		::haxe::ds::IntMap regions;
		Array< ::Dynamic > tasks;
		Array< ::Dynamic > channels;
		::com::stencyl::models::Actor camera;
		::com::stencyl::models::Scene scene;
		bool isShaking;
		Float shakeIntensity;
		int shakeTimer;
		int sceneToEnter;
		::com::stencyl::graphics::transitions::Transition enter;
		::com::stencyl::graphics::transitions::Transition leave;
		Float physicalHeight;
		Float physicalWidth;
		Float gravityY;
		Float gravityX;
		::box2D::dynamics::B2World world;
		static ::String BACKGROUND;
		static ::String SCROLLING_BACKGROUND;
		static ::String REGULAR_LAYER;
		static ::String DOODAD;
		static ::String INTERNAL_SHIFT;
		static ::String INTERNAL_CTRL;
		static bool NO_PHYSICS;
		static bool DEBUG_DRAW;
		static ::String IMG_BASE;
		static Float SCALE;
		static bool isStandardIOS;
		static bool isExtendedIOS;
		static bool isTabletIOS;
		static ::com::stencyl::Engine engine;
		static bool landscape;
		static Float cameraX;
		static Float cameraY;
		static Float screenScaleX;
		static Float screenScaleY;
		static int screenOffsetX;
		static int screenOffsetY;
		static int screenWidth;
		static int screenHeight;
		static int sceneWidth;
		static int sceneHeight;
		static int screenWidthHalf;
		static int screenHeightHalf;
		static bool paused;
		static bool started;
		static ::com::stencyl::event::EventMaster events;
		static int ITERATIONS;
		static Float physicsScale;
		static int paddingLeft;
		static int paddingRight;
		static int paddingTop;
		static int paddingBottom;
		static ::String mochiID;
		static ::String ngID;
		static ::String ngKey;
		static ::flash::display::MovieClip movieClip;
		static ::flash::display::Stage stage;
		static int STEP_SIZE;
		static int MS_PER_SEC;
		static Float elapsedTime;
		static Float timeScale;
		static bool debug;
		static bool debugDraw;
		static ::box2D::dynamics::B2DebugDraw debugDrawer;
		static Void initBehaviors( ::com::stencyl::behavior::BehaviorManager manager,::haxe::ds::StringMap behaviorValues,Dynamic parent,::com::stencyl::Engine game,bool initialize);
		static Dynamic initBehaviors_dyn();

		static Float toPhysicalUnits( Float value);
		static Dynamic toPhysicalUnits_dyn();

		static Float toPixelUnits( Float value);
		static Dynamic toPixelUnits_dyn();

		static ::box2D::common::math::B2Vec2 vToPhysicalUnits( ::box2D::common::math::B2Vec2 v);
		static Dynamic vToPhysicalUnits_dyn();

		static ::box2D::common::math::B2Vec2 vToPixelUnits( ::box2D::common::math::B2Vec2 v);
		static Dynamic vToPixelUnits_dyn();

		static Void invokeListeners( Dynamic listeners);
		static Dynamic invokeListeners_dyn();

		static Void invokeListeners2( Dynamic listeners,Dynamic value);
		static Dynamic invokeListeners2_dyn();

		static Void invokeListeners3( Dynamic listeners,Dynamic value,Dynamic value2);
		static Dynamic invokeListeners3_dyn();

		static Void invokeListeners4( Dynamic listeners,Dynamic value,Dynamic value2,Dynamic value3);
		static Dynamic invokeListeners4_dyn();

		static Void invokeListeners5( Dynamic listeners,Dynamic value,Dynamic value2,Dynamic value3,Dynamic value4);
		static Dynamic invokeListeners5_dyn();

		static Void invokeListeners6( Dynamic listeners,Dynamic value,Dynamic value2,Dynamic value3,Dynamic value4,Dynamic value5);
		static Dynamic invokeListeners6_dyn();

};

} // end namespace com
} // end namespace stencyl

#endif /* INCLUDED_com_stencyl_Engine */ 
