#ifndef INCLUDED_com_stencyl_Data
#define INCLUDED_com_stencyl_Data

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(com,stencyl,AssetLoader)
HX_DECLARE_CLASS2(com,stencyl,Data)
HX_DECLARE_CLASS3(com,stencyl,io,AbstractReader)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,actor,ActorType)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace com{
namespace stencyl{


class HXCPP_CLASS_ATTRIBUTES  Data_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Data_obj OBJ_;
		Data_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Data_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Data_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Data"); }

		virtual Void unloadAtlas( int atlasID);
		Dynamic unloadAtlas_dyn();

		virtual Void loadAtlas( int atlasID);
		Dynamic loadAtlas_dyn();

		virtual Dynamic getGraphicAsset( ::String url,::String diskURL);
		Dynamic getGraphicAsset_dyn();

		virtual Array< ::Dynamic > getAllActorTypes( );
		Dynamic getAllActorTypes_dyn();

		virtual Dynamic getResourcesOfType( Dynamic type);
		Dynamic getResourcesOfType_dyn();

		virtual ::com::stencyl::models::Resource readResource( int ID,int atlasID,::String type,::String name,::haxe::xml::Fast xml);
		Dynamic readResource_dyn();

		virtual Void readResourceXML( ::haxe::xml::Fast list);
		Dynamic readResourceXML_dyn();

		virtual Void loadResources( );
		Dynamic loadResources_dyn();

		virtual Void loadBehaviors( );
		Dynamic loadBehaviors_dyn();

		virtual Void loadReaders( );
		Dynamic loadReaders_dyn();

		virtual Void loadAll( );
		Dynamic loadAll_dyn();

		virtual Void updatePreloader( int pct);
		Dynamic updatePreloader_dyn();

		::haxe::ds::IntMap behaviors;
		::haxe::ds::StringMap resourceAssets;
		::haxe::ds::IntMap resources;
		::haxe::ds::IntMap scenesXML;
		::haxe::xml::Fast behaviorListXML;
		::haxe::xml::Fast sceneListXML;
		::haxe::xml::Fast resourceListXML;
		::haxe::xml::Fast gameXML;
		Array< ::Dynamic > readers;
		::flash::display::Sprite preloader;
		::com::stencyl::AssetLoader loader;
		static ::com::stencyl::Data instance;
		static ::com::stencyl::AssetLoader theLoader;
		static ::com::stencyl::Data get( );
		static Dynamic get_dyn();

};

} // end namespace com
} // end namespace stencyl

#endif /* INCLUDED_com_stencyl_Data */ 
