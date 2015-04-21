#ifndef INCLUDED_com_stencyl_models_scene_ActorInstance
#define INCLUDED_com_stencyl_models_scene_ActorInstance

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,actor,ActorType)
HX_DECLARE_CLASS4(com,stencyl,models,scene,ActorInstance)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace stencyl{
namespace models{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES  ActorInstance_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ActorInstance_obj OBJ_;
		ActorInstance_obj();
		Void __construct(int elementID,int x,int y,Float scaleX,Float scaleY,int layerID,int angle,int groupID,int actorID,::haxe::ds::StringMap behaviors,bool isCustomized);

	public:
		static hx::ObjectPtr< ActorInstance_obj > __new(int elementID,int x,int y,Float scaleX,Float scaleY,int layerID,int angle,int groupID,int actorID,::haxe::ds::StringMap behaviors,bool isCustomized);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ActorInstance_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ActorInstance"); }

		::com::stencyl::models::actor::ActorType actorType;
		::haxe::ds::StringMap behaviorValues;
		bool isCustomized;
		int actorID;
		int groupID;
		int angle;
		int layerID;
		Float scaleY;
		Float scaleX;
		int y;
		int x;
		int elementID;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene

#endif /* INCLUDED_com_stencyl_models_scene_ActorInstance */ 
