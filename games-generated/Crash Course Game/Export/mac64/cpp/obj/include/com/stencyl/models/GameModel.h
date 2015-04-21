#ifndef INCLUDED_com_stencyl_models_GameModel
#define INCLUDED_com_stencyl_models_GameModel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,stencyl,models,CollisionGroupDef)
HX_DECLARE_CLASS3(com,stencyl,models,GameModel)
HX_DECLARE_CLASS3(com,stencyl,models,GroupDef)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace com{
namespace stencyl{
namespace models{


class HXCPP_CLASS_ATTRIBUTES  GameModel_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GameModel_obj OBJ_;
		GameModel_obj();
		Void __construct(::haxe::xml::Fast xml);

	public:
		static hx::ObjectPtr< GameModel_obj > __new(::haxe::xml::Fast xml);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GameModel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameModel"); }

		virtual Array< ::Dynamic > readCollisionGroups( Dynamic list);
		Dynamic readCollisionGroups_dyn();

		virtual Array< ::Dynamic > readGroups( Dynamic list);
		Dynamic readGroups_dyn();

		virtual ::haxe::ds::IntMap readAtlases( Dynamic list);
		Dynamic readAtlases_dyn();

		virtual ::haxe::ds::IntMap readShapes( Dynamic list);
		Dynamic readShapes_dyn();

		virtual ::haxe::ds::IntMap readScenes( ::haxe::xml::Fast list);
		Dynamic readScenes_dyn();

		virtual Void loadScenes( );
		Dynamic loadScenes_dyn();

		::haxe::ds::IntMap scenes;
		::haxe::ds::IntMap atlases;
		::haxe::ds::IntMap shapes;
		::haxe::ds::StringMap gameAttributes;
		Array< ::Dynamic > collisionGroups;
		::haxe::ds::IntMap groupsCollidesWith;
		Array< ::Dynamic > groups;
		int defaultSceneID;
		int scale;
		int actualHeight;
		int actualWidth;
		int height;
		int width;
		static ::com::stencyl::models::GameModel instance;
		static Array< ::Dynamic > collisionMap;
		static int INHERIT_ID;
		static int REGION_ID;
		static int PLAYER_ID;
		static int TERRAIN_ID;
		static int DOODAD_ID;
		static int ACTOR_ID;
		static ::com::stencyl::models::GameModel get( );
		static Dynamic get_dyn();

		static ::haxe::ds::StringMap readGameAttributes( Dynamic list);
		static Dynamic readGameAttributes_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_GameModel */ 
