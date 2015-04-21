#ifndef INCLUDED_box2D_dynamics_joints_B2GearJointDef
#define INCLUDED_box2D_dynamics_joints_B2GearJointDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <box2D/dynamics/joints/B2JointDef.h>
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2GearJointDef)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2Joint)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2JointDef)
namespace box2D{
namespace dynamics{
namespace joints{


class HXCPP_CLASS_ATTRIBUTES  B2GearJointDef_obj : public ::box2D::dynamics::joints::B2JointDef_obj{
	public:
		typedef ::box2D::dynamics::joints::B2JointDef_obj super;
		typedef B2GearJointDef_obj OBJ_;
		B2GearJointDef_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< B2GearJointDef_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2GearJointDef_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2GearJointDef"); }

		Float ratio;
		::box2D::dynamics::joints::B2Joint joint2;
		::box2D::dynamics::joints::B2Joint joint1;
};

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints

#endif /* INCLUDED_box2D_dynamics_joints_B2GearJointDef */ 
