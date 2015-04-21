#ifndef INCLUDED_com_stencyl_models_scene_TileLayer
#define INCLUDED_com_stencyl_models_scene_TileLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,stencyl,models,Scene)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Grid)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Hitbox)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Mask)
HX_DECLARE_CLASS4(com,stencyl,models,scene,Tile)
HX_DECLARE_CLASS4(com,stencyl,models,scene,TileLayer)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
namespace com{
namespace stencyl{
namespace models{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES  TileLayer_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef TileLayer_obj OBJ_;
		TileLayer_obj();
		Void __construct(int layerID,int zOrder,::com::stencyl::models::Scene scene,int numCols,int numRows);

	public:
		static hx::ObjectPtr< TileLayer_obj > __new(int layerID,int zOrder,::com::stencyl::models::Scene scene,int numCols,int numRows);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TileLayer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileLayer"); }

		virtual Void draw( int viewX,int viewY);
		Dynamic draw_dyn();

		virtual ::com::stencyl::models::scene::Tile getTileAt( int row,int col);
		Dynamic getTileAt_dyn();

		virtual Void setTileAt( int row,int col,::com::stencyl::models::scene::Tile tile);
		Dynamic setTileAt_dyn();

		virtual Void mountGrid( );
		Dynamic mountGrid_dyn();

		virtual Void setPosition( Float x,Float y);
		Dynamic setPosition_dyn();

		virtual Void clearBitmap( );
		Dynamic clearBitmap_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		::flash::geom::Point flashPoint;
		::flash::display::BitmapData pixels;
		::flash::display::BitmapData bitmapData;
		int numCols;
		int numRows;
		::com::stencyl::models::Scene scene;
		::com::stencyl::models::collision::Grid grid;
		Array< ::Dynamic > rows;
		int zOrder;
		int layerID;
		static ::haxe::ds::IntMap cacheSource;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene

#endif /* INCLUDED_com_stencyl_models_scene_TileLayer */ 
