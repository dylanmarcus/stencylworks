#ifndef INCLUDED_com_stencyl_models_CollisionGroupDef
#define INCLUDED_com_stencyl_models_CollisionGroupDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,models,CollisionGroupDef)
namespace com{
namespace stencyl{
namespace models{


class HXCPP_CLASS_ATTRIBUTES  CollisionGroupDef_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CollisionGroupDef_obj OBJ_;
		CollisionGroupDef_obj();
		Void __construct(int group1,int group2);

	public:
		static hx::ObjectPtr< CollisionGroupDef_obj > __new(int group1,int group2);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CollisionGroupDef_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CollisionGroupDef"); }

		int group2;
		int group1;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_CollisionGroupDef */ 
