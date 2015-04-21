#ifndef INCLUDED_com_stencyl_models_Scene
#define INCLUDED_com_stencyl_models_Scene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(box2D,collision,shapes,B2Shape)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2JointDef)
HX_DECLARE_CLASS3(com,stencyl,models,Background)
HX_DECLARE_CLASS3(com,stencyl,models,Scene)
HX_DECLARE_CLASS4(com,stencyl,models,scene,ActorInstance)
HX_DECLARE_CLASS4(com,stencyl,models,scene,RegionDef)
HX_DECLARE_CLASS4(com,stencyl,models,scene,TerrainDef)
HX_DECLARE_CLASS4(com,stencyl,models,scene,Tile)
HX_DECLARE_CLASS4(com,stencyl,models,scene,TileLayer)
HX_DECLARE_CLASS4(com,stencyl,models,scene,Wireframe)
HX_DECLARE_CLASS3(com,stencyl,utils,PolyDecompBayazit)
HX_DECLARE_CLASS3(de,polygonal,ds,Collection)
HX_DECLARE_CLASS3(de,polygonal,ds,Hashable)
HX_DECLARE_CLASS3(de,polygonal,ds,IntHashTable)
HX_DECLARE_CLASS3(de,polygonal,ds,Map)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,utils,ByteArray)
HX_DECLARE_CLASS2(flash,utils,IDataInput)
HX_DECLARE_CLASS2(flash,utils,IDataOutput)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,xml,Fast)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace com{
namespace stencyl{
namespace models{


class HXCPP_CLASS_ATTRIBUTES  Scene_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Scene_obj OBJ_;
		Scene_obj();
		Void __construct(int ID,::String name);

	public:
		static hx::ObjectPtr< Scene_obj > __new(int ID,::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Scene_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Scene"); }

		virtual int getID( );
		Dynamic getID_dyn();

		virtual ::com::stencyl::models::scene::ActorInstance readActorInstance( ::haxe::xml::Fast xml);
		Dynamic readActorInstance_dyn();

		virtual ::haxe::ds::IntMap readActors( Dynamic list);
		Dynamic readActors_dyn();

		virtual Array< ::Dynamic > readWireframes( Dynamic list);
		Dynamic readWireframes_dyn();

		virtual Array< int > readBackgrounds( Dynamic list);
		Dynamic readBackgrounds_dyn();

		virtual ::com::stencyl::models::scene::TileLayer readRawLayer( ::flash::utils::ByteArray bytes,int length);
		Dynamic readRawLayer_dyn();

		virtual ::de::polygonal::ds::IntHashTable readRawLayers( ::flash::utils::ByteArray bytes,int numLayers);
		Dynamic readRawLayers_dyn();

		virtual ::de::polygonal::ds::IntHashTable readLayers( Dynamic list,::de::polygonal::ds::IntHashTable rawLayers);
		Dynamic readLayers_dyn();

		virtual ::box2D::dynamics::joints::B2JointDef readJoint( ::haxe::xml::Fast e);
		Dynamic readJoint_dyn();

		virtual ::haxe::ds::IntMap readJoints( Dynamic list);
		Dynamic readJoints_dyn();

		virtual ::com::stencyl::models::scene::TerrainDef readTerrainRegion( ::haxe::xml::Fast e);
		Dynamic readTerrainRegion_dyn();

		virtual ::haxe::ds::IntMap readTerrainRegions( Dynamic list);
		Dynamic readTerrainRegions_dyn();

		virtual Void addPolygonTerrain( ::com::stencyl::utils::PolyDecompBayazit p);
		Dynamic addPolygonTerrain_dyn();

		virtual Void addPolygonRegion( ::com::stencyl::utils::PolyDecompBayazit p);
		Dynamic addPolygonRegion_dyn();

		Float currH;
		Float currW;
		Float currY;
		Float currX;
		Array< ::Dynamic > shapeList;
		virtual ::com::stencyl::models::scene::RegionDef readRegion( ::haxe::xml::Fast e);
		Dynamic readRegion_dyn();

		virtual ::haxe::ds::IntMap readRegions( Dynamic list);
		Dynamic readRegions_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

		virtual Void load( );
		Dynamic load_dyn();

		Array< ::Dynamic > animatedTiles;
		::haxe::ds::IntMap terrainRegions;
		::haxe::ds::IntMap regions;
		::haxe::ds::IntMap joints;
		Array< ::Dynamic > wireframes;
		::haxe::ds::StringMap behaviorValues;
		::haxe::ds::IntMap actors;
		::de::polygonal::ds::IntHashTable terrain;
		Array< int > fgs;
		Array< int > bgs;
		::com::stencyl::models::Background colorBackground;
		int eventID;
		Float gravityY;
		Float gravityX;
		int tileHeight;
		int tileWidth;
		int sceneHeight;
		int sceneWidth;
		::String name;
		int ID;
		static int MAX_VERTICES;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_Scene */ 
