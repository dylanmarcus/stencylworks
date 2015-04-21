#ifndef INCLUDED_box2D_dynamics_contacts_ReferenceFace
#define INCLUDED_box2D_dynamics_contacts_ReferenceFace

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,ReferenceFace)
namespace box2D{
namespace dynamics{
namespace contacts{


class HXCPP_CLASS_ATTRIBUTES  ReferenceFace_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ReferenceFace_obj OBJ_;
		ReferenceFace_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ReferenceFace_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ReferenceFace_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ReferenceFace"); }

		Float sideOffset2;
		Float sideOffset1;
		::box2D::common::math::B2Vec2 sideNormal2;
		::box2D::common::math::B2Vec2 sideNormal1;
		::box2D::common::math::B2Vec2 normal;
		::box2D::common::math::B2Vec2 v2;
		::box2D::common::math::B2Vec2 v1;
		int i2;
		int i1;
};

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts

#endif /* INCLUDED_box2D_dynamics_contacts_ReferenceFace */ 
