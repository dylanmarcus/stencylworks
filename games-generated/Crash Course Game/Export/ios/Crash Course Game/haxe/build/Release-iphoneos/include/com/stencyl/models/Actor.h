#ifndef INCLUDED_com_stencyl_models_Actor
#define INCLUDED_com_stencyl_models_Actor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(box2D,collision,B2WorldManifold)
HX_DECLARE_CLASS3(box2D,collision,shapes,B2MassData)
HX_DECLARE_CLASS3(box2D,collision,shapes,B2PolygonShape)
HX_DECLARE_CLASS3(box2D,collision,shapes,B2Shape)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS2(box2D,dynamics,B2Body)
HX_DECLARE_CLASS2(box2D,dynamics,B2BodyDef)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,B2Contact)
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,Behavior)
HX_DECLARE_CLASS3(com,stencyl,behavior,BehaviorManager)
HX_DECLARE_CLASS3(com,stencyl,graphics,G)
HX_DECLARE_CLASS4(com,stencyl,graphics,fonts,Label)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,actor,ActorType)
HX_DECLARE_CLASS4(com,stencyl,models,actor,AngleHolder)
HX_DECLARE_CLASS4(com,stencyl,models,actor,Group)
HX_DECLARE_CLASS4(com,stencyl,models,actor,Sprite)
HX_DECLARE_CLASS4(com,stencyl,models,collision,CollisionInfo)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Mask)
HX_DECLARE_CLASS3(de,polygonal,ds,Collection)
HX_DECLARE_CLASS3(de,polygonal,ds,Hashable)
HX_DECLARE_CLASS3(de,polygonal,ds,IntHashTable)
HX_DECLARE_CLASS3(de,polygonal,ds,Map)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Transform)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace stencyl{
namespace models{


class HXCPP_CLASS_ATTRIBUTES  Actor_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef Actor_obj OBJ_;
		Actor_obj();
		Void __construct(::com::stencyl::Engine engine,int ID,int groupID,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_layerID,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,::com::stencyl::models::actor::Sprite sprite,::haxe::ds::StringMap behaviorValues,::com::stencyl::models::actor::ActorType actorType,::box2D::dynamics::B2BodyDef bodyDef,hx::Null< bool >  __o_isSensor,hx::Null< bool >  __o_isStationary,hx::Null< bool >  __o_isKinematic,hx::Null< bool >  __o_canRotate,Dynamic shape,hx::Null< int >  __o_typeID,hx::Null< bool >  __o_isLightweight,hx::Null< bool >  __o_autoScale,hx::Null< bool >  __o_ignoreGravity);

	public:
		static hx::ObjectPtr< Actor_obj > __new(::com::stencyl::Engine engine,int ID,int groupID,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_layerID,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,::com::stencyl::models::actor::Sprite sprite,::haxe::ds::StringMap behaviorValues,::com::stencyl::models::actor::ActorType actorType,::box2D::dynamics::B2BodyDef bodyDef,hx::Null< bool >  __o_isSensor,hx::Null< bool >  __o_isStationary,hx::Null< bool >  __o_isKinematic,hx::Null< bool >  __o_canRotate,Dynamic shape,hx::Null< int >  __o_typeID,hx::Null< bool >  __o_isLightweight,hx::Null< bool >  __o_autoScale,hx::Null< bool >  __o_ignoreGravity);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Actor_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Actor"); }

		bool allowAdd;
		::de::polygonal::ds::IntHashTable simpleCollisions;
		::flash::geom::Point _point;
		Float _moveY;
		Float _moveX;
		Float _y;
		Float _x;
		::com::stencyl::models::collision::Mask _mask;
		::com::stencyl::models::collision::Mask HITBOX;
		virtual Void handleCollisionsSimple( ::com::stencyl::models::Actor a,bool fromX,bool fromY,Float sign);
		Dynamic handleCollisionsSimple_dyn();

		virtual Void moveCollideY( ::com::stencyl::models::Actor a,Float sign);
		Dynamic moveCollideY_dyn();

		virtual Void moveCollideX( ::com::stencyl::models::Actor a,Float sign);
		Dynamic moveCollideX_dyn();

		virtual Void moveActorTowards( Float x,Float y,Float amount,Dynamic solidType,hx::Null< bool >  sweep);
		Dynamic moveActorTowards_dyn();

		virtual Void moveActorTo( Float x,Float y,Dynamic solidType,hx::Null< bool >  sweep);
		Dynamic moveActorTo_dyn();

		virtual Void moveActorBy( Float x,Float y,Dynamic solidType,hx::Null< bool >  sweep);
		Dynamic moveActorBy_dyn();

		virtual Void resetReal( Float x,Float y);
		Dynamic resetReal_dyn();

		virtual bool alreadyCollided( ::com::stencyl::models::collision::Mask maskA,::com::stencyl::models::collision::Mask maskB);
		Dynamic alreadyCollided_dyn();

		virtual Void addCollision( ::com::stencyl::models::collision::CollisionInfo info);
		Dynamic addCollision_dyn();

		virtual Void clearCollisionList( );
		Dynamic clearCollisionList_dyn();

		virtual Void collideTypesInto( Array< int > types,Float x,Float y,Array< ::Dynamic > array);
		Dynamic collideTypesInto_dyn();

		virtual Void collideInto( int groupID,Float x,Float y,Array< ::Dynamic > array);
		Dynamic collideInto_dyn();

		virtual ::com::stencyl::models::Actor collideWith( ::com::stencyl::models::Actor e,Float x,Float y);
		Dynamic collideWith_dyn();

		virtual ::com::stencyl::models::Actor collideTypes( Dynamic types,Float x,Float y);
		Dynamic collideTypes_dyn();

		virtual ::com::stencyl::models::Actor collide( int groupID,Float x,Float y);
		Dynamic collide_dyn();

		virtual ::com::stencyl::models::collision::Mask set_shape( ::com::stencyl::models::collision::Mask value);
		Dynamic set_shape_dyn();

		virtual ::com::stencyl::models::collision::Mask get_shape( );
		Dynamic get_shape_dyn();

		virtual Void setLocation( Float x,Float y);
		Dynamic setLocation_dyn();

		virtual ::String toString( );

		virtual Void killSelfAfterLeavingScreen( );
		Dynamic killSelfAfterLeavingScreen_dyn();

		virtual ::com::stencyl::models::Actor getLastCollidedActor( );
		Dynamic getLastCollidedActor_dyn();

		virtual bool isInScene( );
		Dynamic isInScene_dyn();

		virtual bool isOnScreen( );
		Dynamic isOnScreen_dyn();

		virtual bool isAlive( );
		Dynamic isAlive_dyn();

		virtual bool isDying( );
		Dynamic isDying_dyn();

		virtual Void die( );
		Dynamic die_dyn();

		virtual bool alwaysSimulates( );
		Dynamic alwaysSimulates_dyn();

		virtual Void makeSometimesSimulate( hx::Null< bool >  alterBody);
		Dynamic makeSometimesSimulate_dyn();

		virtual Void makeAlwaysSimulate( hx::Null< bool >  alterBody);
		Dynamic makeAlwaysSimulate_dyn();

		virtual bool isAnchoredToScreen( );
		Dynamic isAnchoredToScreen_dyn();

		virtual Void unanchorFromScreen( );
		Dynamic unanchorFromScreen_dyn();

		virtual Void anchorToScreen( );
		Dynamic anchorToScreen_dyn();

		virtual Void removeAllListeners( );
		Dynamic removeAllListeners_dyn();

		virtual Void registerListener( Dynamic type,Dynamic listener);
		Dynamic registerListener_dyn();

		virtual Dynamic hasActorValue( ::String name);
		Dynamic hasActorValue_dyn();

		virtual Dynamic getActorValue( ::String name);
		Dynamic getActorValue_dyn();

		virtual Void setActorValue( ::String name,Dynamic value);
		Dynamic setActorValue_dyn();

		virtual Dynamic say( ::String behaviorName,::String msg,Dynamic args);
		Dynamic say_dyn();

		virtual Dynamic shout( ::String msg,Dynamic args);
		Dynamic shout_dyn();

		virtual Void setValue( ::String behaviorName,::String attributeName,Dynamic value);
		Dynamic setValue_dyn();

		virtual Dynamic getValue( ::String behaviorName,::String attributeName);
		Dynamic getValue_dyn();

		virtual Void enableAllBehaviors( );
		Dynamic enableAllBehaviors_dyn();

		virtual bool isBehaviorEnabled( ::String name);
		Dynamic isBehaviorEnabled_dyn();

		virtual Void disableBehavior( ::String name);
		Dynamic disableBehavior_dyn();

		virtual Void enableBehavior( ::String name);
		Dynamic enableBehavior_dyn();

		virtual bool hasBehavior( ::String name);
		Dynamic hasBehavior_dyn();

		virtual Void addBehavior( ::com::stencyl::behavior::Behavior b);
		Dynamic addBehavior_dyn();

		virtual Void clearFilters( );
		Dynamic clearFilters_dyn();

		virtual Void setFilter( Dynamic filter);
		Dynamic setFilter_dyn();

		virtual bool drawsImage( );
		Dynamic drawsImage_dyn();

		virtual Void disableActorDrawing( );
		Dynamic disableActorDrawing_dyn();

		virtual Void enableActorDrawing( );
		Dynamic enableActorDrawing_dyn();

		virtual Void drawImage( ::com::stencyl::graphics::G g);
		Dynamic drawImage_dyn();

		virtual Void onTweenPositionComplete( );
		Dynamic onTweenPositionComplete_dyn();

		virtual Void onTweenAngleComplete( );
		Dynamic onTweenAngleComplete_dyn();

		virtual Void moveBy( Float x,Float y,hx::Null< Float >  duration,Dynamic easing);
		Dynamic moveBy_dyn();

		virtual Void spinBy( Float angle,hx::Null< Float >  duration,Dynamic easing);
		Dynamic spinBy_dyn();

		virtual Void moveTo( Float x,Float y,hx::Null< Float >  duration,Dynamic easing);
		Dynamic moveTo_dyn();

		virtual Void spinTo( Float angle,hx::Null< Float >  duration,Dynamic easing);
		Dynamic spinTo_dyn();

		virtual Void growTo( hx::Null< Float >  scaleX,hx::Null< Float >  scaleY,hx::Null< Float >  duration,Dynamic easing);
		Dynamic growTo_dyn();

		virtual Void fadeTo( Float value,hx::Null< Float >  duration,Dynamic easing);
		Dynamic fadeTo_dyn();

		virtual Void cancelTweens( );
		Dynamic cancelTweens_dyn();

		virtual bool isMouseReleased( );
		Dynamic isMouseReleased_dyn();

		virtual bool isMousePressed( );
		Dynamic isMousePressed_dyn();

		virtual bool isMouseDown( );
		Dynamic isMouseDown_dyn();

		virtual bool isMouseHover( );
		Dynamic isMouseHover_dyn();

		virtual bool isMouseOver( );
		Dynamic isMouseOver_dyn();

		virtual bool ignoresGravity( );
		Dynamic ignoresGravity_dyn();

		virtual Void setIgnoreGravity( bool state);
		Dynamic setIgnoreGravity_dyn();

		virtual Void disableRotation( );
		Dynamic disableRotation_dyn();

		virtual Void enableRotation( );
		Dynamic enableRotation_dyn();

		virtual Void setBounciness( Float value);
		Dynamic setBounciness_dyn();

		virtual Void setFriction( Float value);
		Dynamic setFriction_dyn();

		virtual ::box2D::dynamics::B2Body getBody( );
		Dynamic getBody_dyn();

		virtual Float getPhysicsHeight( );
		Dynamic getPhysicsHeight_dyn();

		virtual Float getPhysicsWidth( );
		Dynamic getPhysicsWidth_dyn();

		virtual Float getHeight( );
		Dynamic getHeight_dyn();

		virtual Float getWidth( );
		Dynamic getWidth_dyn();

		virtual Void applyTorque( Float torque);
		Dynamic applyTorque_dyn();

		virtual Void applyImpulseInDirection( Float angle,Float speed);
		Dynamic applyImpulseInDirection_dyn();

		virtual Void applyImpulse( Float dirX,Float dirY,Float magnitude);
		Dynamic applyImpulse_dyn();

		virtual Void pushInDirection( Float angle,Float speed);
		Dynamic pushInDirection_dyn();

		virtual Void push( Float dirX,Float dirY,Float magnitude);
		Dynamic push_dyn();

		virtual Void changeAngularVelocity( Float omega);
		Dynamic changeAngularVelocity_dyn();

		virtual Void setAngularVelocity( Float omega);
		Dynamic setAngularVelocity_dyn();

		virtual Float getAngularVelocity( );
		Dynamic getAngularVelocity_dyn();

		virtual Void rotate( Float angle,hx::Null< bool >  inRadians);
		Dynamic rotate_dyn();

		virtual Void setAngle( Float angle,hx::Null< bool >  inRadians);
		Dynamic setAngle_dyn();

		virtual Float getAngleInDegrees( );
		Dynamic getAngleInDegrees_dyn();

		virtual Float getAngle( );
		Dynamic getAngle_dyn();

		virtual Void accelerate( Float angle,Float speed);
		Dynamic accelerate_dyn();

		virtual Void accelerateY( Float dy);
		Dynamic accelerateY_dyn();

		virtual Void accelerateX( Float dx);
		Dynamic accelerateX_dyn();

		virtual Void setVelocity( Float angle,Float speed);
		Dynamic setVelocity_dyn();

		virtual Void setYVelocity( Float dy);
		Dynamic setYVelocity_dyn();

		virtual Void setXVelocity( Float dx);
		Dynamic setXVelocity_dyn();

		virtual Float getYVelocity( );
		Dynamic getYVelocity_dyn();

		virtual Float getXVelocity( );
		Dynamic getXVelocity_dyn();

		virtual Void setOriginPoint( int x,int y);
		Dynamic setOriginPoint_dyn();

		virtual Void followWithOffset( ::com::stencyl::models::Actor a,int ox,int oy);
		Dynamic followWithOffset_dyn();

		virtual Void follow( ::com::stencyl::models::Actor a);
		Dynamic follow_dyn();

		virtual Void setY( Float y,hx::Null< bool >  resetSpeed,hx::Null< bool >  noCollision);
		Dynamic setY_dyn();

		virtual Void setX( Float x,hx::Null< bool >  resetSpeed,hx::Null< bool >  noCollision);
		Dynamic setX_dyn();

		virtual Float getScreenY( );
		Dynamic getScreenY_dyn();

		virtual Float getScreenX( );
		Dynamic getScreenX_dyn();

		virtual Float getYCenter( );
		Dynamic getYCenter_dyn();

		virtual Float getXCenter( );
		Dynamic getXCenter_dyn();

		virtual Float getY( hx::Null< bool >  round);
		Dynamic getY_dyn();

		virtual Float getX( hx::Null< bool >  round);
		Dynamic getX_dyn();

		virtual Void enableSmoothMotion( );
		Dynamic enableSmoothMotion_dyn();

		virtual Void sendBackward( );
		Dynamic sendBackward_dyn();

		virtual Void sendToBack( );
		Dynamic sendToBack_dyn();

		virtual Void bringForward( );
		Dynamic bringForward_dyn();

		virtual Void bringToFront( );
		Dynamic bringToFront_dyn();

		virtual Void moveToLayer( Float layerID);
		Dynamic moveToLayer_dyn();

		virtual bool getIsTerrainRegion( );
		Dynamic getIsTerrainRegion_dyn();

		virtual bool getIsRegion( );
		Dynamic getIsRegion_dyn();

		virtual ::com::stencyl::models::actor::Group getGroup( );
		Dynamic getGroup_dyn();

		virtual Void unpause( );
		Dynamic unpause_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual bool isPaused( );
		Dynamic isPaused_dyn();

		virtual bool isPausable( );
		Dynamic isPausable_dyn();

		virtual ::com::stencyl::models::actor::ActorType getType( );
		Dynamic getType_dyn();

		virtual int getLayerOrder( );
		Dynamic getLayerOrder_dyn();

		virtual int getLayerID( );
		Dynamic getLayerID_dyn();

		virtual int getGroupID( );
		Dynamic getGroupID_dyn();

		virtual ::String getName( );
		Dynamic getName_dyn();

		virtual int getID( );
		Dynamic getID_dyn();

		virtual Void removeRegionContact( ::box2D::dynamics::contacts::B2Contact point);
		Dynamic removeRegionContact_dyn();

		virtual Void addRegionContact( ::box2D::dynamics::contacts::B2Contact point);
		Dynamic addRegionContact_dyn();

		virtual Void removeContact( ::box2D::dynamics::contacts::B2Contact point);
		Dynamic removeContact_dyn();

		virtual Void addContact( ::box2D::dynamics::contacts::B2Contact point);
		Dynamic addContact_dyn();

		virtual Void handleCollisions( );
		Dynamic handleCollisions_dyn();

		int collisionsCount;
		int contactCount;
		virtual Void checkScreenState( );
		Dynamic checkScreenState_dyn();

		virtual Void scaleBody( Float width,Float height);
		Dynamic scaleBody_dyn();

		virtual Void updateTweenProperties( );
		Dynamic updateTweenProperties_dyn();

		virtual Void updateDrawingMatrix( );
		Dynamic updateDrawingMatrix_dyn();

		virtual Void internalUpdate( Float elapsedTime,bool doAll);
		Dynamic internalUpdate_dyn();

		virtual Void innerUpdate( Float elapsedTime,bool hudCheck);
		Dynamic innerUpdate_dyn();

		virtual Void update( Float elapsedTime);
		Dynamic update_dyn();

		virtual Void switchAnimation( ::String name);
		Dynamic switchAnimation_dyn();

		virtual int getNumFrames( );
		Dynamic getNumFrames_dyn();

		virtual Void setCurrentFrame( int frame);
		Dynamic setCurrentFrame_dyn();

		virtual int getCurrentFrame( );
		Dynamic getCurrentFrame_dyn();

		virtual bool isAnimationPlaying( );
		Dynamic isAnimationPlaying_dyn();

		virtual Void switchToDefaultAnimation( );
		Dynamic switchToDefaultAnimation_dyn();

		virtual Void setAnimation( ::String name);
		Dynamic setAnimation_dyn();

		virtual ::String getAnimation( );
		Dynamic getAnimation_dyn();

		virtual Void addAnimation( ::String name,::flash::display::DisplayObject sprite);
		Dynamic addAnimation_dyn();

		virtual Void initBody( int groupID,bool isSensor,bool isStationary,bool isKinematic,bool canRotate,Dynamic shape);
		Dynamic initBody_dyn();

		virtual Void initFromBody( ::box2D::dynamics::B2BodyDef bodyDef);
		Dynamic initFromBody_dyn();

		virtual Void initScripts( );
		Dynamic initScripts_dyn();

		virtual Void addAnim( int animID,::String name,::flash::display::BitmapData imgData,hx::Null< int >  frameCount,hx::Null< int >  frameWidth,hx::Null< int >  frameHeight,hx::Null< Float >  originX,hx::Null< Float >  originY,Array< int > durations,hx::Null< bool >  looping,::haxe::ds::IntMap shapes);
		Dynamic addAnim_dyn();

		virtual Void resetListeners( );
		Dynamic resetListeners_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		::box2D::common::math::B2Vec2 zero;
		::box2D::common::math::B2Vec2 dummy;
		::de::polygonal::ds::IntHashTable collisions;
		::de::polygonal::ds::IntHashTable regionContacts;
		::de::polygonal::ds::IntHashTable contacts;
		bool handlesCollisions;
		::flash::geom::Point bodyScale;
		::box2D::collision::shapes::B2MassData md;
		::box2D::dynamics::B2BodyDef bodyDef;
		::box2D::dynamics::B2Body body;
		bool isOnScreenCache;
		bool lastSceneState;
		bool lastScreenState;
		int mouseState;
		int collisionListenerCount;
		int positionListenerCount;
		Dynamic collisionListeners;
		Dynamic positionListeners;
		Dynamic mouseOverListeners;
		Dynamic whenKilledListeners;
		Dynamic whenDrawingListeners;
		Dynamic whenUpdatedListeners;
		Dynamic whenCreatedListeners;
		Dynamic allListenerReferences;
		::haxe::ds::IntMap allListeners;
		::haxe::ds::StringMap registry;
		::com::stencyl::behavior::BehaviorManager behaviors;
		Float maxMove;
		Float minMove;
		Float moveYDistance;
		Float moveXDistance;
		Float drawY;
		Float drawX;
		bool firstMove;
		bool smoothMove;
		::com::stencyl::graphics::fonts::Label label;
		::flash::geom::Matrix drawMatrix;
		bool updateMatrix;
		::flash::geom::Matrix transformMatrix;
		::flash::geom::Point transformPoint;
		::flash::geom::Transform transformObj;
		::flash::geom::Point currOffset;
		::flash::geom::Point currOrigin;
		::String defaultAnim;
		::haxe::ds::StringMap originMap;
		::haxe::ds::StringMap shapeMap;
		::com::stencyl::models::actor::Sprite sprite;
		bool animsBackedUp;
		::haxe::ds::StringMap backupAnimationMap;
		::haxe::ds::StringMap animationMap;
		::String currAnimationName;
		::flash::display::DisplayObject currAnimation;
		Dynamic currAnimationAsAnim;
		Float cacheHeight;
		Float cacheWidth;
		int activePositionTweens;
		int activeAngleTweens;
		::com::stencyl::models::actor::AngleHolder tweenAngle;
		::flash::geom::Point tweenLoc;
		bool continuousCollision;
		Float rSpeed;
		Float ySpeed;
		Float xSpeed;
		Float colY;
		Float colX;
		::flash::geom::Point lastScale;
		Float lastAngle;
		Float lastY;
		Float lastX;
		Float realScaleY;
		Float realScaleX;
		Float realAngle;
		Float realY;
		Float realX;
		Float originY;
		Float originX;
		bool resetOrigin;
		bool solid;
		bool collidable;
		bool ignoreGravity;
		bool fixedRotation;
		bool dying;
		bool dead;
		bool autoScale;
		bool isLightweight;
		bool killLeaveScreen;
		bool isCamera;
		bool alwaysSimulate;
		bool isHUD;
		bool drawActor;
		bool destroyed;
		bool isTerrain;
		bool isTerrainRegion;
		bool isRegion;
		bool paused;
		bool recycled;
		Array< int > groupsToCollideWith;
		::com::stencyl::models::actor::ActorType type;
		int typeID;
		int layerID;
		int groupID;
		int ID;
		Float createTime;
		::com::stencyl::Engine engine;
		static int GROUP_OFFSET;
		static Float moveMultiplier;
		static ::com::stencyl::models::Actor lastCollided;
		static ::box2D::collision::shapes::B2PolygonShape createBox( Float width,Float height);
		static Dynamic createBox_dyn();

		static ::box2D::collision::B2WorldManifold manifold;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_Actor */ 
