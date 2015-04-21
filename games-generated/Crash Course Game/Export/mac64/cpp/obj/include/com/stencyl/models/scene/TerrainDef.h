#ifndef INCLUDED_com_stencyl_models_scene_TerrainDef
#define INCLUDED_com_stencyl_models_scene_TerrainDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(box2D,collision,shapes,B2Shape)
HX_DECLARE_CLASS4(com,stencyl,models,scene,TerrainDef)
namespace com{
namespace stencyl{
namespace models{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES  TerrainDef_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TerrainDef_obj OBJ_;
		TerrainDef_obj();
		Void __construct(Array< ::Dynamic > shapes,int ID,::String name,Float x,Float y,hx::Null< int >  __o_groupID,hx::Null< int >  __o_fillColor);

	public:
		static hx::ObjectPtr< TerrainDef_obj > __new(Array< ::Dynamic > shapes,int ID,::String name,Float x,Float y,hx::Null< int >  __o_groupID,hx::Null< int >  __o_fillColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TerrainDef_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TerrainDef"); }

		int fillColor;
		int groupID;
		::String name;
		int ID;
		Array< ::Dynamic > shapes;
		::box2D::collision::shapes::B2Shape shape;
		Float y;
		Float x;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene

#endif /* INCLUDED_com_stencyl_models_scene_TerrainDef */ 
