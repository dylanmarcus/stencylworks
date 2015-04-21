#ifndef INCLUDED_com_stencyl_models_scene_DeferredActor
#define INCLUDED_com_stencyl_models_scene_DeferredActor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,actor,ActorType)
HX_DECLARE_CLASS4(com,stencyl,models,scene,DeferredActor)
namespace com{
namespace stencyl{
namespace models{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES  DeferredActor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DeferredActor_obj OBJ_;
		DeferredActor_obj();
		Void __construct(::com::stencyl::models::actor::ActorType type,Float x,Float y,int layer);

	public:
		static hx::ObjectPtr< DeferredActor_obj > __new(::com::stencyl::models::actor::ActorType type,Float x,Float y,int layer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DeferredActor_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DeferredActor"); }

		int layer;
		Float y;
		Float x;
		::com::stencyl::models::actor::ActorType type;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene

#endif /* INCLUDED_com_stencyl_models_scene_DeferredActor */ 
