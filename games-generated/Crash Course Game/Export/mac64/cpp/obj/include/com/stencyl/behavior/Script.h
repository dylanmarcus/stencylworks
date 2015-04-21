#ifndef INCLUDED_com_stencyl_behavior_Script
#define INCLUDED_com_stencyl_behavior_Script

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2Joint)
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,Behavior)
HX_DECLARE_CLASS3(com,stencyl,behavior,Script)
HX_DECLARE_CLASS3(com,stencyl,behavior,TimedTask)
HX_DECLARE_CLASS3(com,stencyl,graphics,G)
HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,Transition)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS3(com,stencyl,models,Font)
HX_DECLARE_CLASS3(com,stencyl,models,Region)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS3(com,stencyl,models,Scene)
HX_DECLARE_CLASS3(com,stencyl,models,Sound)
HX_DECLARE_CLASS3(com,stencyl,models,Terrain)
HX_DECLARE_CLASS4(com,stencyl,models,actor,ActorType)
HX_DECLARE_CLASS4(com,stencyl,models,actor,Collision)
HX_DECLARE_CLASS4(com,stencyl,models,actor,Group)
HX_DECLARE_CLASS4(com,stencyl,models,scene,Layer)
HX_DECLARE_CLASS5(com,stencyl,models,scene,layers,RegularLayer)
HX_DECLARE_CLASS2(flash,display,BlendMode)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace stencyl{
namespace behavior{


class HXCPP_CLASS_ATTRIBUTES  Script_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Script_obj OBJ_;
		Script_obj();
		Void __construct(::com::stencyl::Engine engine);

	public:
		static hx::ObjectPtr< Script_obj > __new(::com::stencyl::Engine engine);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Script_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Script"); }

		virtual Dynamic createBrightnessFilter( Float b);
		Dynamic createBrightnessFilter_dyn();

		virtual Dynamic createSaturationFilter( Float s);
		Dynamic createSaturationFilter_dyn();

		virtual Dynamic createHueFilter( Float h);
		Dynamic createHueFilter_dyn();

		virtual Dynamic createTintFilter( int color,hx::Null< Float >  amount);
		Dynamic createTintFilter_dyn();

		virtual Dynamic createNegativeFilter( );
		Dynamic createNegativeFilter_dyn();

		virtual Dynamic createSepiaFilter( );
		Dynamic createSepiaFilter_dyn();

		virtual Dynamic createGrayscaleFilter( );
		Dynamic createGrayscaleFilter_dyn();

		virtual Void disableDebugDrawing( );
		Dynamic disableDebugDrawing_dyn();

		virtual Void enableDebugDrawing( );
		Dynamic enableDebugDrawing_dyn();

		virtual Void setIconBadgeNumber( int n);
		Dynamic setIconBadgeNumber_dyn();

		virtual Void setKeyboardText( ::String text);
		Dynamic setKeyboardText_dyn();

		virtual Void hideKeyboard( );
		Dynamic hideKeyboard_dyn();

		virtual Void showKeyboard( );
		Dynamic showKeyboard_dyn();

		virtual Void vibrate( hx::Null< Float >  time);
		Dynamic vibrate_dyn();

		virtual Void showAlert( ::String title,::String msg);
		Dynamic showAlert_dyn();

		virtual int purchasesGetQuantity( ::String productID);
		Dynamic purchasesGetQuantity_dyn();

		virtual Void purchasesUse( ::String productID);
		Dynamic purchasesUse_dyn();

		virtual Void purchasesRequestProductInfo( Dynamic productIDlist);
		Dynamic purchasesRequestProductInfo_dyn();

		virtual ::String purchasesGetPrice( ::String productID);
		Dynamic purchasesGetPrice_dyn();

		virtual ::String purchasesGetDescription( ::String productID);
		Dynamic purchasesGetDescription_dyn();

		virtual ::String purchasesGetTitle( ::String productID);
		Dynamic purchasesGetTitle_dyn();

		virtual bool purchasesHasBought( ::String productID);
		Dynamic purchasesHasBought_dyn();

		virtual Void purchasesBuy( ::String productID);
		Dynamic purchasesBuy_dyn();

		virtual Void purchasesRestore( );
		Dynamic purchasesRestore_dyn();

		virtual bool purchasesAreInitialized( );
		Dynamic purchasesAreInitialized_dyn();

		virtual Void gameCenterResetAchievements( );
		Dynamic gameCenterResetAchievements_dyn();

		virtual Void gameCenterSubmitAchievement( ::String achievementID,Float percent);
		Dynamic gameCenterSubmitAchievement_dyn();

		virtual Void gameCenterSubmitScore( Float score,::String categoryID);
		Dynamic gameCenterSubmitScore_dyn();

		virtual Void gameCenterShowAchievements( );
		Dynamic gameCenterShowAchievements_dyn();

		virtual Void gameCenterShowLeaderboard( ::String categoryID);
		Dynamic gameCenterShowLeaderboard_dyn();

		virtual ::String gameCenterGetPlayerID( );
		Dynamic gameCenterGetPlayerID_dyn();

		virtual ::String gameCenterGetPlayerName( );
		Dynamic gameCenterGetPlayerName_dyn();

		virtual bool gameCenterIsAuthenticated( );
		Dynamic gameCenterIsAuthenticated_dyn();

		virtual Void gameCenterInitialize( );
		Dynamic gameCenterInitialize_dyn();

		virtual Void hideMobileAd( );
		Dynamic hideMobileAd_dyn();

		virtual Void showMobileAd( );
		Dynamic showMobileAd_dyn();

		virtual Void unloadAtlas( int atlasID);
		Dynamic unloadAtlas_dyn();

		virtual Void loadAtlas( int atlasID);
		Dynamic loadAtlas_dyn();

		virtual Void mochiSubmitScore( ::String boardID,Float score,Dynamic startFunc,Dynamic endFunc);
		Dynamic mochiSubmitScore_dyn();

		virtual Void mochiShowScores( ::String boardID,Dynamic startFunc,Dynamic endFunc);
		Dynamic mochiShowScores_dyn();

		virtual Void mochiShowAd( int width,int height,Dynamic startFunc,Dynamic endFunc);
		Dynamic mochiShowAd_dyn();

		virtual int kongregateGetUserID( );
		Dynamic kongregateGetUserID_dyn();

		virtual ::String kongregateGetUsername( );
		Dynamic kongregateGetUsername_dyn();

		virtual bool kongregateIsGuest( );
		Dynamic kongregateIsGuest_dyn();

		virtual Void kongregateSubmitStat( ::String name,Float stat);
		Dynamic kongregateSubmitStat_dyn();

		virtual Void kongregateInitAPI( );
		Dynamic kongregateInitAPI_dyn();

		virtual Void simpleTweet( ::String message,::String gameURL);
		Dynamic simpleTweet_dyn();

		virtual Void postToURL( ::String URL,::String data,Dynamic fn);
		Dynamic postToURL_dyn();

		virtual Void visitURL( ::String URL,Dynamic fn);
		Dynamic visitURL_dyn();

		virtual Void openURLInBrowser( ::String URL);
		Dynamic openURLInBrowser_dyn();

		virtual Void defaultURLHandler( ::flash::events::Event event);
		Dynamic defaultURLHandler_dyn();

		virtual Void loadGame( ::String fileName,Dynamic onComplete);
		Dynamic loadGame_dyn();

		virtual Void saveGame( ::String fileName,Dynamic onComplete);
		Dynamic saveGame_dyn();

		virtual Void tweenNumber( ::String attributeName,Float value,hx::Null< Float >  duration,Dynamic easing);
		Dynamic tweenNumber_dyn();

		virtual int randomInt( Float low,Float high);
		Dynamic randomInt_dyn();

		virtual Float randomFloat( );
		Dynamic randomFloat_dyn();

		virtual Void setTimeScale( Float scale);
		Dynamic setTimeScale_dyn();

		virtual bool isTransitioning( );
		Dynamic isTransitioning_dyn();

		virtual Void setOffscreenTolerance( Float top,Float left,Float bottom,Float right);
		Dynamic setOffscreenTolerance_dyn();

		virtual int getScreenHeight( );
		Dynamic getScreenHeight_dyn();

		virtual int getScreenWidth( );
		Dynamic getScreenWidth_dyn();

		virtual Void unpauseAll( );
		Dynamic unpauseAll_dyn();

		virtual Void pauseAll( );
		Dynamic pauseAll_dyn();

		virtual Void toggleFullScreen( );
		Dynamic toggleFullScreen_dyn();

		virtual Void unpause( );
		Dynamic unpause_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual ::com::stencyl::models::Font getFont( int fontID);
		Dynamic getFont_dyn();

		virtual int getMiddleLayer( );
		Dynamic getMiddleLayer_dyn();

		virtual int getBottomLayer( );
		Dynamic getBottomLayer_dyn();

		virtual int getTopLayer( );
		Dynamic getTopLayer_dyn();

		virtual Void stopShakingScreen( );
		Dynamic stopShakingScreen_dyn();

		virtual Void startShakingScreen( hx::Null< Float >  intensity,hx::Null< Float >  duration);
		Dynamic startShakingScreen_dyn();

		virtual Void setBackground( ::String oldBackName,::String newBackName);
		Dynamic setBackground_dyn();

		virtual Void setScrollSpeedForBackground( Float xSpeed,Float ySpeed,hx::Null< int >  backgroundID);
		Dynamic setScrollSpeedForBackground_dyn();

		virtual Void fadeOutForAllSounds( Float time);
		Dynamic fadeOutForAllSounds_dyn();

		virtual Void fadeInForAllSounds( Float time);
		Dynamic fadeInForAllSounds_dyn();

		virtual Void fadeOutSoundOnChannel( int channelNum,Float time);
		Dynamic fadeOutSoundOnChannel_dyn();

		virtual Void fadeInSoundOnChannel( int channelNum,Float time);
		Dynamic fadeInSoundOnChannel_dyn();

		virtual Void setVolumeForAllSounds( Float volume);
		Dynamic setVolumeForAllSounds_dyn();

		virtual Void stopAllSounds( );
		Dynamic stopAllSounds_dyn();

		virtual Void setVolumeForChannel( Float volume,int channelNum);
		Dynamic setVolumeForChannel_dyn();

		virtual Void resumeSoundOnChannel( int channelNum);
		Dynamic resumeSoundOnChannel_dyn();

		virtual Void pauseSoundOnChannel( int channelNum);
		Dynamic pauseSoundOnChannel_dyn();

		virtual Void stopSoundOnChannel( int channelNum);
		Dynamic stopSoundOnChannel_dyn();

		virtual Void loopSoundOnChannel( ::com::stencyl::models::Sound clip,int channelNum);
		Dynamic loopSoundOnChannel_dyn();

		virtual Void playSoundOnChannel( ::com::stencyl::models::Sound clip,int channelNum);
		Dynamic playSoundOnChannel_dyn();

		virtual Void loopSound( ::com::stencyl::models::Sound clip);
		Dynamic loopSound_dyn();

		virtual Void playSound( ::com::stencyl::models::Sound clip);
		Dynamic playSound_dyn();

		virtual ::com::stencyl::models::Sound getSound( int soundID);
		Dynamic getSound_dyn();

		virtual Void unmute( );
		Dynamic unmute_dyn();

		virtual Void mute( );
		Dynamic mute_dyn();

		virtual Void makeActorNotPassThroughTerrain( ::com::stencyl::models::Actor actor);
		Dynamic makeActorNotPassThroughTerrain_dyn();

		virtual Float toPixelUnits( Float value);
		Dynamic toPixelUnits_dyn();

		virtual Float toPhysicalUnits( Float value);
		Dynamic toPhysicalUnits_dyn();

		virtual Void enableContinuousCollisions( );
		Dynamic enableContinuousCollisions_dyn();

		virtual ::box2D::common::math::B2Vec2 getGravity( );
		Dynamic getGravity_dyn();

		virtual Void setGravity( Float x,Float y);
		Dynamic setGravity_dyn();

		virtual ::com::stencyl::models::actor::Group getActorGroup( int groupID);
		Dynamic getActorGroup_dyn();

		virtual ::com::stencyl::models::Actor getActor( int actorID);
		Dynamic getActor_dyn();

		virtual Array< ::Dynamic > getActorsOfType( ::com::stencyl::models::actor::ActorType type);
		Dynamic getActorsOfType_dyn();

		virtual Array< ::Dynamic > getAllActorTypes( );
		Dynamic getAllActorTypes_dyn();

		virtual ::com::stencyl::models::actor::ActorType getActorType( int actorTypeID);
		Dynamic getActorType_dyn();

		virtual ::com::stencyl::models::actor::ActorType getActorTypeByName( ::String typeName);
		Dynamic getActorTypeByName_dyn();

		virtual Void createActorInNextScene( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst);
		Dynamic createActorInNextScene_dyn();

		virtual Void recycleActor( ::com::stencyl::models::Actor a);
		Dynamic recycleActor_dyn();

		virtual ::com::stencyl::models::Actor createRecycledActor( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst);
		Dynamic createRecycledActor_dyn();

		virtual ::com::stencyl::models::Actor createActor( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst);
		Dynamic createActor_dyn();

		virtual ::com::stencyl::models::Actor getLastCreatedActor( );
		Dynamic getLastCreatedActor_dyn();

		virtual Void hideCursor( );
		Dynamic hideCursor_dyn();

		virtual Void showCursor( );
		Dynamic showCursor_dyn();

		virtual Float getMouseReleasedY( );
		Dynamic getMouseReleasedY_dyn();

		virtual Float getMouseReleasedX( );
		Dynamic getMouseReleasedX_dyn();

		virtual Float getMousePressedY( );
		Dynamic getMousePressedY_dyn();

		virtual Float getMousePressedX( );
		Dynamic getMousePressedX_dyn();

		virtual Float getMouseWorldY( );
		Dynamic getMouseWorldY_dyn();

		virtual Float getMouseWorldX( );
		Dynamic getMouseWorldX_dyn();

		virtual Float getMouseY( );
		Dynamic getMouseY_dyn();

		virtual Float getMouseX( );
		Dynamic getMouseX_dyn();

		virtual bool isMouseReleased( );
		Dynamic isMouseReleased_dyn();

		virtual bool isMousePressed( );
		Dynamic isMousePressed_dyn();

		virtual bool isMouseDown( );
		Dynamic isMouseDown_dyn();

		virtual bool isKeyReleased( ::String abstractKey);
		Dynamic isKeyReleased_dyn();

		virtual bool isKeyPressed( ::String abstractKey);
		Dynamic isKeyPressed_dyn();

		virtual bool isKeyDown( ::String abstractKey);
		Dynamic isKeyDown_dyn();

		virtual Void simulateKeyRelease( ::String abstractKey);
		Dynamic simulateKeyRelease_dyn();

		virtual Void simulateKeyPress( ::String abstractKey);
		Dynamic simulateKeyPress_dyn();

		virtual bool isShiftDown( );
		Dynamic isShiftDown_dyn();

		virtual bool isCtrlDown( );
		Dynamic isCtrlDown_dyn();

		virtual ::com::stencyl::models::Actor getCamera( );
		Dynamic getCamera_dyn();

		virtual Float getScreenY( );
		Dynamic getScreenY_dyn();

		virtual Float getScreenX( );
		Dynamic getScreenX_dyn();

		virtual Void fadeTileLayerTo( int layerID,Float alphaPct,Float duration,Dynamic easing);
		Dynamic fadeTileLayerTo_dyn();

		virtual Void hideTileLayer( int layerID);
		Dynamic hideTileLayer_dyn();

		virtual Void showTileLayer( int layerID);
		Dynamic showTileLayer_dyn();

		virtual Void setBlendModeForLayer( int layerID,::flash::display::BlendMode mode);
		Dynamic setBlendModeForLayer_dyn();

		virtual ::com::stencyl::models::scene::Layer getLayer( int layerID);
		Dynamic getLayer_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createCircleIn( Float duration,hx::Null< int >  color);
		Dynamic createCircleIn_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createCircleOut( Float duration,hx::Null< int >  color);
		Dynamic createCircleOut_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createFadeIn( Float duration,hx::Null< int >  color);
		Dynamic createFadeIn_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createFadeOut( Float duration,hx::Null< int >  color);
		Dynamic createFadeOut_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createCrossfadeTransition( Float duration);
		Dynamic createCrossfadeTransition_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createSlideRightTransition( Float duration);
		Dynamic createSlideRightTransition_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createSlideLeftTransition( Float duration);
		Dynamic createSlideLeftTransition_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createSlideDownTransition( Float duration);
		Dynamic createSlideDownTransition_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createSlideUpTransition( Float duration);
		Dynamic createSlideUpTransition_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createSlideTransition( Float duration,::String direction);
		Dynamic createSlideTransition_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createRectangleIn( Float duration,hx::Null< int >  color);
		Dynamic createRectangleIn_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createRectangleOut( Float duration,hx::Null< int >  color);
		Dynamic createRectangleOut_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createBlindsIn( Float duration,hx::Null< int >  color);
		Dynamic createBlindsIn_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createBlindsOut( Float duration,hx::Null< int >  color);
		Dynamic createBlindsOut_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createBubblesIn( Float duration,hx::Null< int >  color);
		Dynamic createBubblesIn_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createBubblesOut( Float duration,hx::Null< int >  color);
		Dynamic createBubblesOut_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createPixelizeIn( Float duration,hx::Null< int >  pixelSize);
		Dynamic createPixelizeIn_dyn();

		virtual ::com::stencyl::graphics::transitions::Transition createPixelizeOut( Float duration,hx::Null< int >  pixelSize);
		Dynamic createPixelizeOut_dyn();

		virtual Void switchScene( int sceneID,::com::stencyl::graphics::transitions::Transition leave,::com::stencyl::graphics::transitions::Transition enter);
		Dynamic switchScene_dyn();

		virtual Void reloadCurrentScene( ::com::stencyl::graphics::transitions::Transition leave,::com::stencyl::graphics::transitions::Transition enter);
		Dynamic reloadCurrentScene_dyn();

		virtual int getTileHeight( );
		Dynamic getTileHeight_dyn();

		virtual int getTileWidth( );
		Dynamic getTileWidth_dyn();

		virtual int getSceneHeight( );
		Dynamic getSceneHeight_dyn();

		virtual int getSceneWidth( );
		Dynamic getSceneWidth_dyn();

		virtual ::String getCurrentSceneName( );
		Dynamic getCurrentSceneName_dyn();

		virtual int getIDForScene( ::String sceneName);
		Dynamic getIDForScene_dyn();

		virtual int getCurrentScene( );
		Dynamic getCurrentScene_dyn();

		virtual ::com::stencyl::models::Scene getScene( );
		Dynamic getScene_dyn();

		virtual int getStepSize( );
		Dynamic getStepSize_dyn();

		virtual ::com::stencyl::behavior::TimedTask runPeriodically( Float interval,Dynamic toExecute,::com::stencyl::models::Actor actor);
		Dynamic runPeriodically_dyn();

		virtual ::com::stencyl::behavior::TimedTask runLater( Float delay,Dynamic toExecute,::com::stencyl::models::Actor actor);
		Dynamic runLater_dyn();

		virtual Dynamic getGameAttribute( ::String name);
		Dynamic getGameAttribute_dyn();

		virtual Void setGameAttribute( ::String name,Dynamic value);
		Dynamic setGameAttribute_dyn();

		virtual Dynamic sayToScene( ::String behaviorName,::String msg,Dynamic args);
		Dynamic sayToScene_dyn();

		virtual Dynamic shoutToScene( ::String msg,Dynamic args);
		Dynamic shoutToScene_dyn();

		virtual Void setValueForScene( ::String behaviorName,::String attributeName,Dynamic value);
		Dynamic setValueForScene_dyn();

		virtual Dynamic getValueForScene( ::String behaviorName,::String attributeName);
		Dynamic getValueForScene_dyn();

		virtual Void disableThisBehavior( );
		Dynamic disableThisBehavior_dyn();

		virtual bool isBehaviorEnabledForScene( ::String behaviorName);
		Dynamic isBehaviorEnabledForScene_dyn();

		virtual Void disableBehaviorForScene( ::String behaviorName);
		Dynamic disableBehaviorForScene_dyn();

		virtual Void enableBehaviorForScene( ::String behaviorName);
		Dynamic enableBehaviorForScene_dyn();

		virtual bool sceneHasBehavior( ::String behaviorName);
		Dynamic sceneHasBehavior_dyn();

		virtual Array< ::Dynamic > getActorsInRegion( ::com::stencyl::models::Region r);
		Dynamic getActorsInRegion_dyn();

		virtual bool isInRegion( ::com::stencyl::models::Actor a,::com::stencyl::models::Region r);
		Dynamic isInRegion_dyn();

		virtual ::com::stencyl::models::Region createCircularRegion( Float x,Float y,Float r);
		Dynamic createCircularRegion_dyn();

		virtual ::com::stencyl::models::Region createBoxRegion( Float x,Float y,Float w,Float h);
		Dynamic createBoxRegion_dyn();

		virtual Void removeRegion( int regionID);
		Dynamic removeRegion_dyn();

		virtual ::com::stencyl::models::Region getRegion( int regionID);
		Dynamic getRegion_dyn();

		virtual Array< ::Dynamic > getAllRegions( );
		Dynamic getAllRegions_dyn();

		virtual ::com::stencyl::models::Region getLastCreatedRegion( );
		Dynamic getLastCreatedRegion_dyn();

		virtual Void addPauseListener( Dynamic func);
		Dynamic addPauseListener_dyn();

		virtual Void addFocusChangeListener( Dynamic func);
		Dynamic addFocusChangeListener_dyn();

		virtual Void addSoundListener( Dynamic obj,Dynamic func);
		Dynamic addSoundListener_dyn();

		virtual Void addWhenTypeGroupKilledListener( Dynamic obj,Dynamic func);
		Dynamic addWhenTypeGroupKilledListener_dyn();

		virtual Void addWhenTypeGroupCreatedListener( Dynamic obj,Dynamic func);
		Dynamic addWhenTypeGroupCreatedListener_dyn();

		virtual Void addSceneCollisionListener( Dynamic obj,Dynamic obj2,Dynamic func);
		Dynamic addSceneCollisionListener_dyn();

		virtual Void addCollisionListener( ::com::stencyl::models::Actor a,Dynamic func);
		Dynamic addCollisionListener_dyn();

		virtual Void propertyChanged( ::String propertyKey,Dynamic property);
		Dynamic propertyChanged_dyn();

		virtual Void addPropertyChangeListener( ::String propertyKey,::String propertyKey2,Dynamic func);
		Dynamic addPropertyChangeListener_dyn();

		virtual Void addMouseOverActorListener( ::com::stencyl::models::Actor a,Dynamic func);
		Dynamic addMouseOverActorListener_dyn();

		virtual Void addMouseDraggedListener( Dynamic func);
		Dynamic addMouseDraggedListener_dyn();

		virtual Void addMouseMovedListener( Dynamic func);
		Dynamic addMouseMovedListener_dyn();

		virtual Void addMouseReleasedListener( Dynamic func);
		Dynamic addMouseReleasedListener_dyn();

		virtual Void addMousePressedListener( Dynamic func);
		Dynamic addMousePressedListener_dyn();

		virtual Void addKeyStateListener( ::String key,Dynamic func);
		Dynamic addKeyStateListener_dyn();

		virtual Void addMultiTouchEndListener( Dynamic func);
		Dynamic addMultiTouchEndListener_dyn();

		virtual Void addMultiTouchMoveListener( Dynamic func);
		Dynamic addMultiTouchMoveListener_dyn();

		virtual Void addMultiTouchStartListener( Dynamic func);
		Dynamic addMultiTouchStartListener_dyn();

		virtual Void addSwipeListener( Dynamic func);
		Dynamic addSwipeListener_dyn();

		virtual Void addActorTypeGroupPositionListener( Dynamic obj,Dynamic func);
		Dynamic addActorTypeGroupPositionListener_dyn();

		virtual Void addActorPositionListener( ::com::stencyl::models::Actor a,Dynamic func);
		Dynamic addActorPositionListener_dyn();

		virtual Void addActorExitsRegionListener( ::com::stencyl::models::Region reg,Dynamic func);
		Dynamic addActorExitsRegionListener_dyn();

		virtual Void addActorEntersRegionListener( ::com::stencyl::models::Region reg,Dynamic func);
		Dynamic addActorEntersRegionListener_dyn();

		virtual Void addWhenDrawingListener( ::com::stencyl::models::Actor a,Dynamic func);
		Dynamic addWhenDrawingListener_dyn();

		virtual Void addWhenUpdatedListener( ::com::stencyl::models::Actor a,Dynamic func);
		Dynamic addWhenUpdatedListener_dyn();

		virtual Void addWhenKilledListener( ::com::stencyl::models::Actor a,Dynamic func);
		Dynamic addWhenKilledListener_dyn();

		virtual Void addWhenCreatedListener( ::com::stencyl::models::Actor a,Dynamic func);
		Dynamic addWhenCreatedListener_dyn();

		virtual Void addPurchaseListener( int type,Dynamic func);
		Dynamic addPurchaseListener_dyn();

		virtual Void addGameCenterListener( int type,Dynamic func);
		Dynamic addGameCenterListener_dyn();

		virtual Void addMobileAdListener( int type,Dynamic func);
		Dynamic addMobileAdListener_dyn();

		virtual Void addMobileKeyboardListener( int type,Dynamic func);
		Dynamic addMobileKeyboardListener_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual ::com::stencyl::models::actor::Group getGroupByName( ::String groupName);
		Dynamic getGroupByName_dyn();

		virtual ::com::stencyl::models::actor::Group internalGetGroup( Dynamic arg,Dynamic arg2);
		Dynamic internalGetGroup_dyn();

		virtual Void clearListeners( );
		Dynamic clearListeners_dyn();

		virtual Void forwardMessage( ::String msg);
		Dynamic forwardMessage_dyn();

		virtual ::String toInternalName( ::String displayName);
		Dynamic toInternalName_dyn();

		virtual Dynamic getDefaultValue( Dynamic o);
		Dynamic getDefaultValue_dyn();

		virtual bool isPrimitive( Dynamic o);
		Dynamic isPrimitive_dyn();

		virtual bool hasValue( Dynamic o);
		Dynamic hasValue_dyn();

		virtual Float asNumber( Dynamic o);
		Dynamic asNumber_dyn();

		virtual bool asBoolean( Dynamic o);
		Dynamic asBoolean_dyn();

		virtual bool sameAsAny( Dynamic o,Dynamic one,Dynamic two);
		Dynamic sameAsAny_dyn();

		virtual bool sameAs( Dynamic o,Dynamic o2);
		Dynamic sameAs_dyn();

		bool scriptInit;
		::haxe::ds::StringMap nameMap;
		bool checkProperties;
		::haxe::ds::ObjectMap equalityPairs;
		::haxe::ds::StringMap propertyChangeListeners;
		::com::stencyl::Engine scene;
		::com::stencyl::Engine engine;
		::com::stencyl::behavior::Behavior wrapper;
		static int FRONT;
		static int MIDDLE;
		static int BACK;
		static int CHANNELS;
		static ::com::stencyl::models::Actor lastCreatedActor;
		static ::box2D::dynamics::joints::B2Joint lastCreatedJoint;
		static ::com::stencyl::models::Region lastCreatedRegion;
		static ::com::stencyl::models::Terrain lastCreatedTerrainRegion;
		static Float mpx;
		static Float mpy;
		static Float mrx;
		static Float mry;
		static ::box2D::common::math::B2Vec2 dummyVec;
		static bool strCompare( ::String one,::String two,int whichWay);
		static Dynamic strCompare_dyn();

		static bool strCompareBefore( ::String a,::String b);
		static Dynamic strCompareBefore_dyn();

		static bool strCompareAfter( ::String a,::String b);
		static Dynamic strCompareAfter_dyn();

		static Void abortTween( Dynamic target);
		static Dynamic abortTween_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace behavior

#endif /* INCLUDED_com_stencyl_behavior_Script */ 
