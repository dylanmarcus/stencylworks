#ifndef INCLUDED_com_stencyl_models_Terrain
#define INCLUDED_com_stencyl_models_Terrain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/models/Actor.h>
HX_DECLARE_CLASS3(box2D,collision,shapes,B2Shape)
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS3(com,stencyl,models,Terrain)
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


class HXCPP_CLASS_ATTRIBUTES  Terrain_obj : public ::com::stencyl::models::Actor_obj{
	public:
		typedef ::com::stencyl::models::Actor_obj super;
		typedef Terrain_obj OBJ_;
		Terrain_obj();
		Void __construct(::com::stencyl::Engine game,Float x,Float y,Array< ::Dynamic > shapes,int groupID,hx::Null< int >  __o_fillColor);

	public:
		static hx::ObjectPtr< Terrain_obj > __new(::com::stencyl::Engine game,Float x,Float y,Array< ::Dynamic > shapes,int groupID,hx::Null< int >  __o_fillColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Terrain_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Terrain"); }

		virtual int getFillColor( );
		Dynamic getFillColor_dyn();

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

		Float regionHeight;
		Float regionWidth;
		Float originalHeight;
		Float originalWidth;
		::box2D::collision::shapes::B2Shape copy;
		int fillColor;
		bool isCircle;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_Terrain */ 
