#ifndef INCLUDED_box2D_dynamics_joints_B2DistanceJoint
#define INCLUDED_box2D_dynamics_joints_B2DistanceJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <box2D/dynamics/joints/B2Joint.h>
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS2(box2D,dynamics,B2TimeStep)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2DistanceJoint)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2DistanceJointDef)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2Joint)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2JointDef)
namespace box2D{
namespace dynamics{
namespace joints{


class HXCPP_CLASS_ATTRIBUTES  B2DistanceJoint_obj : public ::box2D::dynamics::joints::B2Joint_obj{
	public:
		typedef ::box2D::dynamics::joints::B2Joint_obj super;
		typedef B2DistanceJoint_obj OBJ_;
		B2DistanceJoint_obj();
		Void __construct(::box2D::dynamics::joints::B2DistanceJointDef def);

	public:
		static hx::ObjectPtr< B2DistanceJoint_obj > __new(::box2D::dynamics::joints::B2DistanceJointDef def);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2DistanceJoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2DistanceJoint"); }

		Float m_length;
		Float m_mass;
		Float m_impulse;
		Float m_bias;
		Float m_gamma;
		Float m_dampingRatio;
		Float m_frequencyHz;
		::box2D::common::math::B2Vec2 m_u;
		::box2D::common::math::B2Vec2 m_localAnchor2;
		::box2D::common::math::B2Vec2 m_localAnchor1;
		virtual bool solvePositionConstraints( Float baumgarte);

		virtual Void solveVelocityConstraints( ::box2D::dynamics::B2TimeStep step);

		virtual Void initVelocityConstraints( ::box2D::dynamics::B2TimeStep step);

		virtual Void setDampingRatio( Float ratio);
		Dynamic setDampingRatio_dyn();

		virtual Float getDampingRatio( );
		Dynamic getDampingRatio_dyn();

		virtual Void setFrequency( Float hz);
		Dynamic setFrequency_dyn();

		virtual Float getFrequency( );
		Dynamic getFrequency_dyn();

		virtual Void setLength( Float length);
		Dynamic setLength_dyn();

		virtual Float getLength( );
		Dynamic getLength_dyn();

		virtual Float getReactionTorque( Float inv_dt);

		virtual ::box2D::common::math::B2Vec2 getReactionForce( Float inv_dt);

		virtual ::box2D::common::math::B2Vec2 getAnchorB( );

		virtual ::box2D::common::math::B2Vec2 getAnchorA( );

};

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints

#endif /* INCLUDED_box2D_dynamics_joints_B2DistanceJoint */ 
