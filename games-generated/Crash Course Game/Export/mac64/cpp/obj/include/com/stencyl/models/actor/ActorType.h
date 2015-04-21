#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#define INCLUDED_com_stencyl_models_actor_ActorType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/models/Resource.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(box2D,dynamics,B2BodyDef)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,actor,ActorType)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace stencyl{
namespace models{
namespace actor{


class HXCPP_CLASS_ATTRIBUTES  ActorType_obj : public ::com::stencyl::models::Resource_obj{
	public:
		typedef ::com::stencyl::models::Resource_obj super;
		typedef ActorType_obj OBJ_;
		ActorType_obj();
		Void __construct(int ID,int atlasID,::String name,int groupID,int spriteID,::haxe::ds::StringMap behaviorValues,::box2D::dynamics::B2BodyDef bodyDef,bool isLightweight,bool autoScale,bool pausable,bool ignoreGravity);

	public:
		static hx::ObjectPtr< ActorType_obj > __new(int ID,int atlasID,::String name,int groupID,int spriteID,::haxe::ds::StringMap behaviorValues,::box2D::dynamics::B2BodyDef bodyDef,bool isLightweight,bool autoScale,bool pausable,bool ignoreGravity);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ActorType_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ActorType"); }

		virtual Void unloadGraphics( );

		virtual Void loadGraphics( );

		virtual ::String toString( );

		bool ignoreGravity;
		bool pausable;
		bool autoScale;
		bool isLightweight;
		::box2D::dynamics::B2BodyDef bodyDef;
		::haxe::ds::StringMap behaviorValues;
		int spriteID;
		int groupID;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor

#endif /* INCLUDED_com_stencyl_models_actor_ActorType */ 
