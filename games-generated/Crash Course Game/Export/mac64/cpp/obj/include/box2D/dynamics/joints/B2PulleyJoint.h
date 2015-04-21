#ifndef INCLUDED_box2D_dynamics_joints_B2PulleyJoint
#define INCLUDED_box2D_dynamics_joints_B2PulleyJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <box2D/dynamics/joints/B2Joint.h>
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS2(box2D,dynamics,B2Body)
HX_DECLARE_CLASS2(box2D,dynamics,B2TimeStep)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2Joint)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2JointDef)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2PulleyJoint)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2PulleyJointDef)
namespace box2D{
namespace dynamics{
namespace joints{


class HXCPP_CLASS_ATTRIBUTES  B2PulleyJoint_obj : public ::box2D::dynamics::joints::B2Joint_obj{
	public:
		typedef ::box2D::dynamics::joints::B2Joint_obj super;
		typedef B2PulleyJoint_obj OBJ_;
		B2PulleyJoint_obj();
		Void __construct(::box2D::dynamics::joints::B2PulleyJointDef def);

	public:
		static hx::ObjectPtr< B2PulleyJoint_obj > __new(::box2D::dynamics::joints::B2PulleyJointDef def);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2PulleyJoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2PulleyJoint"); }

		int m_limitState2;
		int m_limitState1;
		int m_state;
		Float m_limitImpulse2;
		Float m_limitImpulse1;
		Float m_impulse;
		Float m_limitMass2;
		Float m_limitMass1;
		Float m_pulleyMass;
		Float m_maxLength2;
		Float m_maxLength1;
		Float m_ratio;
		Float m_constant;
		::box2D::common::math::B2Vec2 m_u2;
		::box2D::common::math::B2Vec2 m_u1;
		::box2D::common::math::B2Vec2 m_localAnchor2;
		::box2D::common::math::B2Vec2 m_localAnchor1;
		::box2D::common::math::B2Vec2 m_groundAnchor2;
		::box2D::common::math::B2Vec2 m_groundAnchor1;
		::box2D::dynamics::B2Body m_ground;
		virtual bool solvePositionConstraints( Float baumgarte);

		virtual Void solveVelocityConstraints( ::box2D::dynamics::B2TimeStep step);

		virtual Void initVelocityConstraints( ::box2D::dynamics::B2TimeStep step);

		virtual Float getRatio( );
		Dynamic getRatio_dyn();

		virtual Float getLength2( );
		Dynamic getLength2_dyn();

		virtual Float getLength1( );
		Dynamic getLength1_dyn();

		virtual ::box2D::common::math::B2Vec2 getGroundAnchorB( );
		Dynamic getGroundAnchorB_dyn();

		virtual ::box2D::common::math::B2Vec2 getGroundAnchorA( );
		Dynamic getGroundAnchorA_dyn();

		virtual Float getReactionTorque( Float inv_dt);

		virtual ::box2D::common::math::B2Vec2 getReactionForce( Float inv_dt);

		virtual ::box2D::common::math::B2Vec2 getAnchorB( );

		virtual ::box2D::common::math::B2Vec2 getAnchorA( );

		static Float b2_minPulleyLength;
};

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints

#endif /* INCLUDED_box2D_dynamics_joints_B2PulleyJoint */ 
