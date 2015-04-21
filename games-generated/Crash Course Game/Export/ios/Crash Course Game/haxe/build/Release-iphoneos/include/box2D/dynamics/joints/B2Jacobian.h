#ifndef INCLUDED_box2D_dynamics_joints_B2Jacobian
#define INCLUDED_box2D_dynamics_joints_B2Jacobian

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2Jacobian)
namespace box2D{
namespace dynamics{
namespace joints{


class HXCPP_CLASS_ATTRIBUTES  B2Jacobian_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef B2Jacobian_obj OBJ_;
		B2Jacobian_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< B2Jacobian_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2Jacobian_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2Jacobian"); }

		virtual Float compute( ::box2D::common::math::B2Vec2 x1,Float a1,::box2D::common::math::B2Vec2 x2,Float a2);
		Dynamic compute_dyn();

		virtual Void set( ::box2D::common::math::B2Vec2 x1,Float a1,::box2D::common::math::B2Vec2 x2,Float a2);
		Dynamic set_dyn();

		virtual Void setZero( );
		Dynamic setZero_dyn();

		Float angularB;
		::box2D::common::math::B2Vec2 linearB;
		Float angularA;
		::box2D::common::math::B2Vec2 linearA;
};

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints

#endif /* INCLUDED_box2D_dynamics_joints_B2Jacobian */ 
