#ifndef INCLUDED_com_stencyl_models_Region
#define INCLUDED_com_stencyl_models_Region

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/models/Actor.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(box2D,collision,shapes,B2Shape)
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS3(com,stencyl,models,Region)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
namespace com{
namespace stencyl{
namespace models{


class HXCPP_CLASS_ATTRIBUTES  Region_obj : public ::com::stencyl::models::Actor_obj{
	public:
		typedef ::com::stencyl::models::Actor_obj super;
		typedef Region_obj OBJ_;
		Region_obj();
		Void __construct(::com::stencyl::Engine game,Float x,Float y,Array< ::Dynamic > shapes,::flash::geom::Rectangle simpleBounds);

	public:
		static hx::ObjectPtr< Region_obj > __new(::com::stencyl::Engine game,Float x,Float y,Array< ::Dynamic > shapes,::flash::geom::Rectangle simpleBounds);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Region_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Region"); }

		virtual Void innerUpdate( Float elapsedTime,bool hudCheck);

		virtual bool isMouseOver( );

		virtual Float getHeight( );

		virtual Float getWidth( );

		virtual Void setLocation( Float x,Float y);

		virtual Void setRegionSize( Float width,Float height);
		Dynamic setRegionSize_dyn();

		virtual Void setRegionDiameter( Float diameter);
		Dynamic setRegionDiameter_dyn();

		virtual Void resetSize( );
		Dynamic resetSize_dyn();

		virtual Void follow( ::com::stencyl::models::Actor actor);

		virtual Void removeActor( ::com::stencyl::models::Actor actor);
		Dynamic removeActor_dyn();

		virtual Void addActor( ::com::stencyl::models::Actor actor);
		Dynamic addActor_dyn();

		virtual ::haxe::ds::IntMap getContainedActors( );
		Dynamic getContainedActors_dyn();

		virtual bool containsActor( ::com::stencyl::models::Actor actor);
		Dynamic containsActor_dyn();

		Dynamic justRemoved;
		Dynamic justAdded;
		Dynamic whenActorExitsListeners;
		Dynamic whenActorEntersListeners;
		Float originalHeight;
		Float originalWidth;
		Float regionHeight;
		Float regionWidth;
		::flash::geom::Rectangle simpleBounds;
		::box2D::collision::shapes::B2Shape copy;
		::haxe::ds::IntMap containedActors;
		bool isCircle;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_Region */ 
