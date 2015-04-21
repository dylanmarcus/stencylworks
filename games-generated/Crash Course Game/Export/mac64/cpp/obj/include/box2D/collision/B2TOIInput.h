#ifndef INCLUDED_box2D_collision_B2TOIInput
#define INCLUDED_box2D_collision_B2TOIInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,collision,B2DistanceProxy)
HX_DECLARE_CLASS2(box2D,collision,B2TOIInput)
HX_DECLARE_CLASS3(box2D,common,math,B2Sweep)
namespace box2D{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES  B2TOIInput_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef B2TOIInput_obj OBJ_;
		B2TOIInput_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< B2TOIInput_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2TOIInput_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2TOIInput"); }

		Float tolerance;
		::box2D::common::math::B2Sweep sweepB;
		::box2D::common::math::B2Sweep sweepA;
		::box2D::collision::B2DistanceProxy proxyB;
		::box2D::collision::B2DistanceProxy proxyA;
};

} // end namespace box2D
} // end namespace collision

#endif /* INCLUDED_box2D_collision_B2TOIInput */ 
