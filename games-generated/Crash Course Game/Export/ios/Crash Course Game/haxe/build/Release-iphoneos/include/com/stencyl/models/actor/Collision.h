#ifndef INCLUDED_com_stencyl_models_actor_Collision
#define INCLUDED_com_stencyl_models_actor_Collision

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,dynamics,B2Fixture)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS4(com,stencyl,models,actor,Collision)
HX_DECLARE_CLASS4(com,stencyl,models,actor,CollisionPoint)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace com{
namespace stencyl{
namespace models{
namespace actor{


class HXCPP_CLASS_ATTRIBUTES  Collision_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Collision_obj OBJ_;
		Collision_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Collision_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Collision_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Collision"); }

		virtual ::com::stencyl::models::actor::Collision switchData( );
		Dynamic switchData_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		::com::stencyl::models::Actor actorB;
		::com::stencyl::models::Actor actorA;
		::box2D::dynamics::B2Fixture otherShape;
		::box2D::dynamics::B2Fixture thisShape;
		::com::stencyl::models::Actor otherActor;
		::com::stencyl::models::Actor thisActor;
		Array< ::Dynamic > points;
		bool otherCollidedWithTerrain;
		bool otherCollidedWithSensor;
		bool otherCollidedWithTile;
		bool otherCollidedWithActor;
		bool otherFromRight;
		bool otherFromBottom;
		bool otherFromLeft;
		bool otherFromTop;
		bool thisCollidedWithTerrain;
		bool thisCollidedWithSensor;
		bool thisCollidedWithTile;
		bool thisCollidedWithActor;
		bool thisFromRight;
		bool thisFromBottom;
		bool thisFromLeft;
		bool thisFromTop;
		static Array< ::Dynamic > recycledCollisions;
		static ::com::stencyl::models::actor::Collision get( );
		static Dynamic get_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor

#endif /* INCLUDED_com_stencyl_models_actor_Collision */ 
