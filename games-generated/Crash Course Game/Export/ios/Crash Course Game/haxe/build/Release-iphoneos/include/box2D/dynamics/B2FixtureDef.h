#ifndef INCLUDED_box2D_dynamics_B2FixtureDef
#define INCLUDED_box2D_dynamics_B2FixtureDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(box2D,collision,shapes,B2Shape)
HX_DECLARE_CLASS2(box2D,dynamics,B2FilterData)
HX_DECLARE_CLASS2(box2D,dynamics,B2FixtureDef)
namespace box2D{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES  B2FixtureDef_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef B2FixtureDef_obj OBJ_;
		B2FixtureDef_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< B2FixtureDef_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2FixtureDef_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2FixtureDef"); }

		int groupID;
		::box2D::dynamics::B2FilterData filter;
		bool isSensor;
		Float density;
		Float restitution;
		Float friction;
		Dynamic userData;
		::box2D::collision::shapes::B2Shape shape;
};

} // end namespace box2D
} // end namespace dynamics

#endif /* INCLUDED_box2D_dynamics_B2FixtureDef */ 
