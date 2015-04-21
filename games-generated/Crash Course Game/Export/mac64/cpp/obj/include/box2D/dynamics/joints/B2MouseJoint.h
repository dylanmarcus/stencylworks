#ifndef INCLUDED_box2D_dynamics_joints_B2MouseJoint
#define INCLUDED_box2D_dynamics_joints_B2MouseJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <box2D/dynamics/joints/B2Joint.h>
HX_DECLARE_CLASS3(box2D,common,math,B2Mat22)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS2(box2D,dynamics,B2TimeStep)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2Joint)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2JointDef)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2MouseJoint)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2MouseJointDef)
namespace box2D{
namespace dynamics{
namespace joints{


class HXCPP_CLASS_ATTRIBUTES  B2MouseJoint_obj : public ::box2D::dynamics::joints::B2Joint_obj{
	public:
		typedef ::box2D::dynamics::joints::B2Joint_obj super;
		typedef B2MouseJoint_obj OBJ_;
		B2MouseJoint_obj();
		Void __construct(::box2D::dynamics::joints::B2MouseJointDef def);

	public:
		static hx::ObjectPtr< B2MouseJoint_obj > __new(::box2D::dynamics::joints::B2MouseJointDef def);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2MouseJoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2MouseJoint"); }

		Float m_gamma;
		Float m_beta;
		Float m_dampingRatio;
		Float m_frequencyHz;
		Float m_maxForce;
		::box2D::common::math::B2Vec2 m_C;
		::box2D::common::math::B2Mat22 m_mass;
		::box2D::common::math::B2Vec2 m_impulse;
		::box2D::common::math::B2Vec2 m_target;
		::box2D::common::math::B2Vec2 m_localAnchor;
		virtual bool solvePositionConstraints( Float baumgarte);

		virtual Void solveVelocityConstraints( ::box2D::dynamics::B2TimeStep step);

		virtual Void initVelocityConstraints( ::box2D::dynamics::B2TimeStep step);

		::box2D::common::math::B2Mat22 K2;
		::box2D::common::math::B2Mat22 K1;
		::box2D::common::math::B2Mat22 K;
		virtual Void setDampingRatio( Float ratio);
		Dynamic setDampingRatio_dyn();

		virtual Float getDampingRatio( );
		Dynamic getDampingRatio_dyn();

		virtual Void setFrequency( Float hz);
		Dynamic setFrequency_dyn();

		virtual Float getFrequency( );
		Dynamic getFrequency_dyn();

		virtual Void setMaxForce( Float maxForce);
		Dynamic setMaxForce_dyn();

		virtual Float getMaxForce( );
		Dynamic getMaxForce_dyn();

		virtual Void setTarget( ::box2D::common::math::B2Vec2 target);
		Dynamic setTarget_dyn();

		virtual ::box2D::common::math::B2Vec2 getTarget( );
		Dynamic getTarget_dyn();

		virtual Float getReactionTorque( Float inv_dt);

		virtual ::box2D::common::math::B2Vec2 getReactionForce( Float inv_dt);

		virtual ::box2D::common::math::B2Vec2 getAnchorB( );

		virtual ::box2D::common::math::B2Vec2 getAnchorA( );

};

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints

#endif /* INCLUDED_box2D_dynamics_joints_B2MouseJoint */ 
