#ifndef INCLUDED_com_stencyl_models_collision_Mask
#define INCLUDED_com_stencyl_models_collision_Mask

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS4(com,stencyl,models,collision,CollisionInfo)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Hitbox)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Mask)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Masklist)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace stencyl{
namespace models{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES  Mask_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mask_obj OBJ_;
		Mask_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Mask_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Mask_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Mask"); }

		::haxe::ds::StringMap _check;
		::String _class;
		virtual Void projectMask( ::flash::geom::Point axis,::com::stencyl::models::collision::CollisionInfo collisionInfo);
		Dynamic projectMask_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY);
		Dynamic debugDraw_dyn();

		virtual Void assignTo( ::com::stencyl::models::Actor parent);
		Dynamic assignTo_dyn();

		virtual bool collideMasklist( ::com::stencyl::models::collision::Masklist other);
		Dynamic collideMasklist_dyn();

		virtual bool collideMask( ::com::stencyl::models::collision::Mask other);
		Dynamic collideMask_dyn();

		virtual bool collide( ::com::stencyl::models::collision::Mask mask);
		Dynamic collide_dyn();

		bool solid;
		::com::stencyl::models::collision::Masklist list;
		::com::stencyl::models::Actor parent;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace collision

#endif /* INCLUDED_com_stencyl_models_collision_Mask */ 
