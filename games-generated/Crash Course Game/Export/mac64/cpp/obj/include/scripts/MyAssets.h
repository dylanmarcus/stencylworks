#ifndef INCLUDED_scripts_MyAssets
#define INCLUDED_scripts_MyAssets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/AssetLoader.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(com,stencyl,AssetLoader)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(scripts,MyAssets)
namespace scripts{


class HXCPP_CLASS_ATTRIBUTES  MyAssets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MyAssets_obj OBJ_;
		MyAssets_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MyAssets_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MyAssets_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::stencyl::AssetLoader_obj *()
			{ return new ::com::stencyl::AssetLoader_delegate_< MyAssets_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("MyAssets"); }

		virtual Void loadScenes( ::haxe::ds::IntMap scenesXML);
		Dynamic loadScenes_dyn();

		virtual Void loadResources( ::haxe::ds::StringMap resourceMap);
		Dynamic loadResources_dyn();

		static bool landscape;
		static bool autorotate;
		static bool stretchToFit;
		static bool scaleToFit1;
		static bool scaleToFit2;
		static int stageWidth;
		static int stageHeight;
		static int initSceneID;
		static int physicsMode;
		static Float gameScale;
		static ::String gameImageBase;
		static bool antialias;
		static bool adPositionBottom;
		static ::String whirlID;
		static ::String mochiID;
		static ::String cpmstarID;
		static ::String newgroundsID;
		static ::String newgroundsKey;
		static bool releaseMode;
		static bool showConsole;
		static bool debugDraw;
		static bool always1x;
		static Float maxScale;
		static bool disableBackButton;
		static ::String androidPublicKey;
};

} // end namespace scripts

#endif /* INCLUDED_scripts_MyAssets */ 
