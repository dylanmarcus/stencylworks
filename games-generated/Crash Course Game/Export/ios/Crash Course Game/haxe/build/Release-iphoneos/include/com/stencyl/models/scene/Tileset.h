#ifndef INCLUDED_com_stencyl_models_scene_Tileset
#define INCLUDED_com_stencyl_models_scene_Tileset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/models/Resource.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,scene,Tile)
HX_DECLARE_CLASS4(com,stencyl,models,scene,Tileset)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
namespace com{
namespace stencyl{
namespace models{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES  Tileset_obj : public ::com::stencyl::models::Resource_obj{
	public:
		typedef ::com::stencyl::models::Resource_obj super;
		typedef Tileset_obj OBJ_;
		Tileset_obj();
		Void __construct(int ID,int atlasID,::String name,int framesAcross,int framesDown,int tileWidth,int tileHeight,Array< ::Dynamic > tiles);

	public:
		static hx::ObjectPtr< Tileset_obj > __new(int ID,int atlasID,::String name,int framesAcross,int framesDown,int tileWidth,int tileHeight,Array< ::Dynamic > tiles);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Tileset_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tileset"); }

		virtual ::flash::display::BitmapData convertPixels( ::flash::display::BitmapData oldPixels);
		Dynamic convertPixels_dyn();

		virtual Void unloadGraphics( );

		virtual Void loadGraphics( );

		virtual ::flash::geom::Rectangle getImageSourceForTile( int tileID,int tileWidth,int tileHeight);
		Dynamic getImageSourceForTile_dyn();

		virtual Void setupTilesheet( );
		Dynamic setupTilesheet_dyn();

		::haxe::ds::IntMap sheetMap;
		Array< Float > data;
		::openfl::display::Tilesheet tilesheet;
		::flash::display::BitmapData pixels;
		Array< ::Dynamic > tiles;
		int tileHeight;
		int tileWidth;
		int framesDown;
		int framesAcross;
		static ::flash::geom::Rectangle temp;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene

#endif /* INCLUDED_com_stencyl_models_scene_Tileset */ 
