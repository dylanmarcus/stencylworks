#ifndef INCLUDED_com_stencyl_models_scene_Wireframe
#define INCLUDED_com_stencyl_models_scene_Wireframe

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,stencyl,models,collision,Mask)
HX_DECLARE_CLASS4(com,stencyl,models,scene,Wireframe)
namespace com{
namespace stencyl{
namespace models{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES  Wireframe_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Wireframe_obj OBJ_;
		Wireframe_obj();
		Void __construct(Float x,Float y,Float width,Float height,Dynamic shape,::com::stencyl::models::collision::Mask shape2);

	public:
		static hx::ObjectPtr< Wireframe_obj > __new(Float x,Float y,Float width,Float height,Dynamic shape,::com::stencyl::models::collision::Mask shape2);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Wireframe_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Wireframe"); }

		Float height;
		Float width;
		::com::stencyl::models::collision::Mask shape2;
		Dynamic shape;
		Float y;
		Float x;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene

#endif /* INCLUDED_com_stencyl_models_scene_Wireframe */ 
