#ifndef INCLUDED_com_stencyl_models_scene_Tile
#define INCLUDED_com_stencyl_models_scene_Tile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,scene,Tile)
HX_DECLARE_CLASS4(com,stencyl,models,scene,Tileset)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
namespace com{
namespace stencyl{
namespace models{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES  Tile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tile_obj OBJ_;
		Tile_obj();
		Void __construct(int tileID,int collisionID,int frameIndex,Array< int > durations,::com::stencyl::models::scene::Tileset parent);

	public:
		static hx::ObjectPtr< Tile_obj > __new(int tileID,int collisionID,int frameIndex,Array< int > durations,::com::stencyl::models::scene::Tileset parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Tile_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tile"); }

		virtual Void unloadGraphics( );
		Dynamic unloadGraphics_dyn();

		virtual Void loadGraphics( );
		Dynamic loadGraphics_dyn();

		virtual ::flash::geom::Rectangle getSource( int tileWidth,int tileHeight);
		Dynamic getSource_dyn();

		virtual Void update( Float elapsedTime);
		Dynamic update_dyn();

		::openfl::display::Tilesheet data;
		bool updateSource;
		int currTime;
		int currFrame;
		Array< int > frames;
		Array< int > durations;
		::flash::display::BitmapData pixels;
		::com::stencyl::models::scene::Tileset parent;
		int frameIndex;
		int collisionID;
		int tileID;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene

#endif /* INCLUDED_com_stencyl_models_scene_Tile */ 
