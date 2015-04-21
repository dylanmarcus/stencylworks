#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactSolver
#define INCLUDED_box2D_dynamics_contacts_B2ContactSolver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,collision,B2WorldManifold)
HX_DECLARE_CLASS2(box2D,dynamics,B2TimeStep)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,B2Contact)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,B2ContactConstraint)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,B2ContactSolver)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,B2PositionSolverManifold)
namespace box2D{
namespace dynamics{
namespace contacts{


class HXCPP_CLASS_ATTRIBUTES  B2ContactSolver_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef B2ContactSolver_obj OBJ_;
		B2ContactSolver_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< B2ContactSolver_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2ContactSolver_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2ContactSolver"); }

		int m_constraintCount;
		Array< ::Dynamic > m_constraints;
		Dynamic m_allocator;
		::box2D::dynamics::B2TimeStep m_step;
		virtual bool solvePositionConstraints( Float baumgarte);
		Dynamic solvePositionConstraints_dyn();

		virtual Void finalizeVelocityConstraints( );
		Dynamic finalizeVelocityConstraints_dyn();

		virtual Void solveVelocityConstraints( );
		Dynamic solveVelocityConstraints_dyn();

		virtual Void initVelocityConstraints( ::box2D::dynamics::B2TimeStep step);
		Dynamic initVelocityConstraints_dyn();

		virtual Void initialize( ::box2D::dynamics::B2TimeStep step,Array< ::Dynamic > contacts,int contactCount,Dynamic allocator);
		Dynamic initialize_dyn();

		static int staticFix;
		static ::box2D::collision::B2WorldManifold s_worldManifold;
		static ::box2D::dynamics::contacts::B2PositionSolverManifold s_psm;
};

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts

#endif /* INCLUDED_box2D_dynamics_contacts_B2ContactSolver */ 
