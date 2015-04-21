#ifndef INCLUDED_com_stencyl_models_actor_Sprite
#define INCLUDED_com_stencyl_models_actor_Sprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/models/Resource.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,actor,Sprite)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
namespace com{
namespace stencyl{
namespace models{
namespace actor{


class HXCPP_CLASS_ATTRIBUTES  Sprite_obj : public ::com::stencyl::models::Resource_obj{
	public:
		typedef ::com::stencyl::models::Resource_obj super;
		typedef Sprite_obj OBJ_;
		Sprite_obj();
		Void __construct(int ID,int atlasID,::String name,int width,int height,int defaultAnimation);

	public:
		static hx::ObjectPtr< Sprite_obj > __new(int ID,int atlasID,::String name,int width,int height,int defaultAnimation);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Sprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Sprite"); }

		virtual Void unloadGraphics( );

		virtual Void loadGraphics( );

		::haxe::ds::IntMap animations;
		int defaultAnimation;
		int height;
		int width;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor

#endif /* INCLUDED_com_stencyl_models_actor_Sprite */ 
