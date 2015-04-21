#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Mat22
#include <box2D/common/math/B2Mat22.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Math
#include <box2D/common/math/B2Math.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Sweep
#include <box2D/common/math/B2Sweep.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Transform
#include <box2D/common/math/B2Transform.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2TimeStep
#include <box2D/dynamics/B2TimeStep.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2DistanceJoint
#include <box2D/dynamics/joints/B2DistanceJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2DistanceJointDef
#include <box2D/dynamics/joints/B2DistanceJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2JointDef
#include <box2D/dynamics/joints/B2JointDef.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace box2D{
namespace dynamics{
namespace joints{

Void B2DistanceJoint_obj::__construct(::box2D::dynamics::joints::B2DistanceJointDef def)
{
HX_STACK_PUSH("B2DistanceJoint::new","box2D/dynamics/joints/B2DistanceJoint.hx",116);
{
	HX_STACK_LINE(117)
	super::__construct(def);
	HX_STACK_LINE(119)
	this->m_localAnchor1 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(120)
	this->m_localAnchor2 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(121)
	this->m_u = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(124)
	::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
	HX_STACK_LINE(125)
	Float tX;		HX_STACK_VAR(tX,"tX");
	HX_STACK_LINE(126)
	Float tY;		HX_STACK_VAR(tY,"tY");
	HX_STACK_LINE(127)
	{
		HX_STACK_LINE(127)
		::box2D::common::math::B2Vec2 _this = this->m_localAnchor1;		HX_STACK_VAR(_this,"_this");
		::box2D::common::math::B2Vec2 v = def->localAnchorA;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(127)
		_this->x = v->x;
		HX_STACK_LINE(127)
		_this->y = v->y;
	}
	HX_STACK_LINE(128)
	{
		HX_STACK_LINE(128)
		::box2D::common::math::B2Vec2 _this = this->m_localAnchor2;		HX_STACK_VAR(_this,"_this");
		::box2D::common::math::B2Vec2 v = def->localAnchorB;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(128)
		_this->x = v->x;
		HX_STACK_LINE(128)
		_this->y = v->y;
	}
	HX_STACK_LINE(130)
	this->m_length = def->length;
	HX_STACK_LINE(131)
	this->m_frequencyHz = def->frequencyHz;
	HX_STACK_LINE(132)
	this->m_dampingRatio = def->dampingRatio;
	HX_STACK_LINE(133)
	this->m_impulse = 0.0;
	HX_STACK_LINE(134)
	this->m_gamma = 0.0;
	HX_STACK_LINE(135)
	this->m_bias = 0.0;
}
;
	return null();
}

B2DistanceJoint_obj::~B2DistanceJoint_obj() { }

Dynamic B2DistanceJoint_obj::__CreateEmpty() { return  new B2DistanceJoint_obj; }
hx::ObjectPtr< B2DistanceJoint_obj > B2DistanceJoint_obj::__new(::box2D::dynamics::joints::B2DistanceJointDef def)
{  hx::ObjectPtr< B2DistanceJoint_obj > result = new B2DistanceJoint_obj();
	result->__construct(def);
	return result;}

Dynamic B2DistanceJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2DistanceJoint_obj > result = new B2DistanceJoint_obj();
	result->__construct(inArgs[0]);
	return result;}

bool B2DistanceJoint_obj::solvePositionConstraints( Float baumgarte){
	HX_STACK_PUSH("B2DistanceJoint::solvePositionConstraints","box2D/dynamics/joints/B2DistanceJoint.hx",287);
	HX_STACK_THIS(this);
	HX_STACK_ARG(baumgarte,"baumgarte");
	HX_STACK_LINE(290)
	::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
	HX_STACK_LINE(292)
	if (((this->m_frequencyHz > 0.0))){
		HX_STACK_LINE(293)
		return true;
	}
	HX_STACK_LINE(298)
	::box2D::dynamics::B2Body bA = this->m_bodyA;		HX_STACK_VAR(bA,"bA");
	HX_STACK_LINE(299)
	::box2D::dynamics::B2Body bB = this->m_bodyB;		HX_STACK_VAR(bB,"bB");
	HX_STACK_LINE(302)
	tMat = bA->m_xf->R;
	HX_STACK_LINE(303)
	Float r1X = (this->m_localAnchor1->x - bA->m_sweep->localCenter->x);		HX_STACK_VAR(r1X,"r1X");
	HX_STACK_LINE(304)
	Float r1Y = (this->m_localAnchor1->y - bA->m_sweep->localCenter->y);		HX_STACK_VAR(r1Y,"r1Y");
	HX_STACK_LINE(305)
	Float tX = ((tMat->col1->x * r1X) + (tMat->col2->x * r1Y));		HX_STACK_VAR(tX,"tX");
	HX_STACK_LINE(306)
	r1Y = ((tMat->col1->y * r1X) + (tMat->col2->y * r1Y));
	HX_STACK_LINE(307)
	r1X = tX;
	HX_STACK_LINE(309)
	tMat = bB->m_xf->R;
	HX_STACK_LINE(310)
	Float r2X = (this->m_localAnchor2->x - bB->m_sweep->localCenter->x);		HX_STACK_VAR(r2X,"r2X");
	HX_STACK_LINE(311)
	Float r2Y = (this->m_localAnchor2->y - bB->m_sweep->localCenter->y);		HX_STACK_VAR(r2Y,"r2Y");
	HX_STACK_LINE(312)
	tX = ((tMat->col1->x * r2X) + (tMat->col2->x * r2Y));
	HX_STACK_LINE(313)
	r2Y = ((tMat->col1->y * r2X) + (tMat->col2->y * r2Y));
	HX_STACK_LINE(314)
	r2X = tX;
	HX_STACK_LINE(317)
	Float dX = (((bB->m_sweep->c->x + r2X) - bA->m_sweep->c->x) - r1X);		HX_STACK_VAR(dX,"dX");
	HX_STACK_LINE(318)
	Float dY = (((bB->m_sweep->c->y + r2Y) - bA->m_sweep->c->y) - r1Y);		HX_STACK_VAR(dY,"dY");
	HX_STACK_LINE(321)
	Float length = ::Math_obj::sqrt(((dX * dX) + (dY * dY)));		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(322)
	hx::DivEq(dX,length);
	HX_STACK_LINE(323)
	hx::DivEq(dY,length);
	HX_STACK_LINE(325)
	Float C = (length - this->m_length);		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(326)
	C = ::box2D::common::math::B2Math_obj::clamp(C,-(::box2D::common::B2Settings_obj::b2_maxLinearCorrection),::box2D::common::B2Settings_obj::b2_maxLinearCorrection);
	HX_STACK_LINE(328)
	Float impulse = (-(this->m_mass) * C);		HX_STACK_VAR(impulse,"impulse");
	HX_STACK_LINE(330)
	{
		HX_STACK_LINE(330)
		::box2D::common::math::B2Vec2 _this = this->m_u;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(330)
		_this->x = dX;
		HX_STACK_LINE(330)
		_this->y = dY;
	}
	HX_STACK_LINE(332)
	Float PX = (impulse * this->m_u->x);		HX_STACK_VAR(PX,"PX");
	HX_STACK_LINE(333)
	Float PY = (impulse * this->m_u->y);		HX_STACK_VAR(PY,"PY");
	HX_STACK_LINE(336)
	hx::SubEq(bA->m_sweep->c->x,(bA->m_invMass * PX));
	HX_STACK_LINE(337)
	hx::SubEq(bA->m_sweep->c->y,(bA->m_invMass * PY));
	HX_STACK_LINE(339)
	hx::SubEq(bA->m_sweep->a,(bA->m_invI * (((r1X * PY) - (r1Y * PX)))));
	HX_STACK_LINE(341)
	hx::AddEq(bB->m_sweep->c->x,(bB->m_invMass * PX));
	HX_STACK_LINE(342)
	hx::AddEq(bB->m_sweep->c->y,(bB->m_invMass * PY));
	HX_STACK_LINE(344)
	hx::AddEq(bB->m_sweep->a,(bB->m_invI * (((r2X * PY) - (r2Y * PX)))));
	HX_STACK_LINE(346)
	bA->synchronizeTransform();
	HX_STACK_LINE(347)
	bB->synchronizeTransform();
	HX_STACK_LINE(349)
	return (::box2D::common::math::B2Math_obj::abs(C) < ::box2D::common::B2Settings_obj::b2_linearSlop);
}


Void B2DistanceJoint_obj::solveVelocityConstraints( ::box2D::dynamics::B2TimeStep step){
{
		HX_STACK_PUSH("B2DistanceJoint::solveVelocityConstraints","box2D/dynamics/joints/B2DistanceJoint.hx",236);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
		HX_STACK_LINE(238)
		::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
		HX_STACK_LINE(240)
		::box2D::dynamics::B2Body bA = this->m_bodyA;		HX_STACK_VAR(bA,"bA");
		HX_STACK_LINE(241)
		::box2D::dynamics::B2Body bB = this->m_bodyB;		HX_STACK_VAR(bB,"bB");
		HX_STACK_LINE(244)
		tMat = bA->m_xf->R;
		HX_STACK_LINE(245)
		Float r1X = (this->m_localAnchor1->x - bA->m_sweep->localCenter->x);		HX_STACK_VAR(r1X,"r1X");
		HX_STACK_LINE(246)
		Float r1Y = (this->m_localAnchor1->y - bA->m_sweep->localCenter->y);		HX_STACK_VAR(r1Y,"r1Y");
		HX_STACK_LINE(247)
		Float tX = ((tMat->col1->x * r1X) + (tMat->col2->x * r1Y));		HX_STACK_VAR(tX,"tX");
		HX_STACK_LINE(248)
		r1Y = ((tMat->col1->y * r1X) + (tMat->col2->y * r1Y));
		HX_STACK_LINE(249)
		r1X = tX;
		HX_STACK_LINE(251)
		tMat = bB->m_xf->R;
		HX_STACK_LINE(252)
		Float r2X = (this->m_localAnchor2->x - bB->m_sweep->localCenter->x);		HX_STACK_VAR(r2X,"r2X");
		HX_STACK_LINE(253)
		Float r2Y = (this->m_localAnchor2->y - bB->m_sweep->localCenter->y);		HX_STACK_VAR(r2Y,"r2Y");
		HX_STACK_LINE(254)
		tX = ((tMat->col1->x * r2X) + (tMat->col2->x * r2Y));
		HX_STACK_LINE(255)
		r2Y = ((tMat->col1->y * r2X) + (tMat->col2->y * r2Y));
		HX_STACK_LINE(256)
		r2X = tX;
		HX_STACK_LINE(260)
		Float v1X = (bA->m_linearVelocity->x + (-(bA->m_angularVelocity) * r1Y));		HX_STACK_VAR(v1X,"v1X");
		HX_STACK_LINE(261)
		Float v1Y = (bA->m_linearVelocity->y + (bA->m_angularVelocity * r1X));		HX_STACK_VAR(v1Y,"v1Y");
		HX_STACK_LINE(263)
		Float v2X = (bB->m_linearVelocity->x + (-(bB->m_angularVelocity) * r2Y));		HX_STACK_VAR(v2X,"v2X");
		HX_STACK_LINE(264)
		Float v2Y = (bB->m_linearVelocity->y + (bB->m_angularVelocity * r2X));		HX_STACK_VAR(v2Y,"v2Y");
		HX_STACK_LINE(266)
		Float Cdot = ((this->m_u->x * ((v2X - v1X))) + (this->m_u->y * ((v2Y - v1Y))));		HX_STACK_VAR(Cdot,"Cdot");
		HX_STACK_LINE(268)
		Float impulse = (-(this->m_mass) * (((Cdot + this->m_bias) + (this->m_gamma * this->m_impulse))));		HX_STACK_VAR(impulse,"impulse");
		HX_STACK_LINE(269)
		hx::AddEq(this->m_impulse,impulse);
		HX_STACK_LINE(272)
		Float PX = (impulse * this->m_u->x);		HX_STACK_VAR(PX,"PX");
		HX_STACK_LINE(273)
		Float PY = (impulse * this->m_u->y);		HX_STACK_VAR(PY,"PY");
		HX_STACK_LINE(275)
		hx::SubEq(bA->m_linearVelocity->x,(bA->m_invMass * PX));
		HX_STACK_LINE(276)
		hx::SubEq(bA->m_linearVelocity->y,(bA->m_invMass * PY));
		HX_STACK_LINE(278)
		hx::SubEq(bA->m_angularVelocity,(bA->m_invI * (((r1X * PY) - (r1Y * PX)))));
		HX_STACK_LINE(280)
		hx::AddEq(bB->m_linearVelocity->x,(bB->m_invMass * PX));
		HX_STACK_LINE(281)
		hx::AddEq(bB->m_linearVelocity->y,(bB->m_invMass * PY));
		HX_STACK_LINE(283)
		hx::AddEq(bB->m_angularVelocity,(bB->m_invI * (((r2X * PY) - (r2Y * PX)))));
	}
return null();
}


Void B2DistanceJoint_obj::initVelocityConstraints( ::box2D::dynamics::B2TimeStep step){
{
		HX_STACK_PUSH("B2DistanceJoint::initVelocityConstraints","box2D/dynamics/joints/B2DistanceJoint.hx",138);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
		HX_STACK_LINE(140)
		::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
		HX_STACK_LINE(141)
		Float tX;		HX_STACK_VAR(tX,"tX");
		HX_STACK_LINE(143)
		::box2D::dynamics::B2Body bA = this->m_bodyA;		HX_STACK_VAR(bA,"bA");
		HX_STACK_LINE(144)
		::box2D::dynamics::B2Body bB = this->m_bodyB;		HX_STACK_VAR(bB,"bB");
		HX_STACK_LINE(148)
		tMat = bA->m_xf->R;
		HX_STACK_LINE(149)
		Float r1X = (this->m_localAnchor1->x - bA->m_sweep->localCenter->x);		HX_STACK_VAR(r1X,"r1X");
		HX_STACK_LINE(150)
		Float r1Y = (this->m_localAnchor1->y - bA->m_sweep->localCenter->y);		HX_STACK_VAR(r1Y,"r1Y");
		HX_STACK_LINE(151)
		tX = ((tMat->col1->x * r1X) + (tMat->col2->x * r1Y));
		HX_STACK_LINE(152)
		r1Y = ((tMat->col1->y * r1X) + (tMat->col2->y * r1Y));
		HX_STACK_LINE(153)
		r1X = tX;
		HX_STACK_LINE(155)
		tMat = bB->m_xf->R;
		HX_STACK_LINE(156)
		Float r2X = (this->m_localAnchor2->x - bB->m_sweep->localCenter->x);		HX_STACK_VAR(r2X,"r2X");
		HX_STACK_LINE(157)
		Float r2Y = (this->m_localAnchor2->y - bB->m_sweep->localCenter->y);		HX_STACK_VAR(r2Y,"r2Y");
		HX_STACK_LINE(158)
		tX = ((tMat->col1->x * r2X) + (tMat->col2->x * r2Y));
		HX_STACK_LINE(159)
		r2Y = ((tMat->col1->y * r2X) + (tMat->col2->y * r2Y));
		HX_STACK_LINE(160)
		r2X = tX;
		HX_STACK_LINE(163)
		this->m_u->x = (((bB->m_sweep->c->x + r2X) - bA->m_sweep->c->x) - r1X);
		HX_STACK_LINE(164)
		this->m_u->y = (((bB->m_sweep->c->y + r2Y) - bA->m_sweep->c->y) - r1Y);
		HX_STACK_LINE(168)
		Float length = ::Math_obj::sqrt(((this->m_u->x * this->m_u->x) + (this->m_u->y * this->m_u->y)));		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(169)
		if (((length > ::box2D::common::B2Settings_obj::b2_linearSlop))){
			HX_STACK_LINE(170)
			this->m_u->multiply((Float(1.0) / Float(length)));
		}
		else{
			HX_STACK_LINE(176)
			::box2D::common::math::B2Vec2 _this = this->m_u;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(176)
			_this->x = 0.0;
			HX_STACK_LINE(176)
			_this->y = 0.0;
		}
		HX_STACK_LINE(180)
		Float cr1u = ((r1X * this->m_u->y) - (r1Y * this->m_u->x));		HX_STACK_VAR(cr1u,"cr1u");
		HX_STACK_LINE(182)
		Float cr2u = ((r2X * this->m_u->y) - (r2Y * this->m_u->x));		HX_STACK_VAR(cr2u,"cr2u");
		HX_STACK_LINE(184)
		Float invMass = (((bA->m_invMass + ((bA->m_invI * cr1u) * cr1u)) + bB->m_invMass) + ((bB->m_invI * cr2u) * cr2u));		HX_STACK_VAR(invMass,"invMass");
		HX_STACK_LINE(185)
		this->m_mass = (  (((invMass != 0.0))) ? Float((Float(1.0) / Float(invMass))) : Float(0.0) );
		HX_STACK_LINE(187)
		if (((this->m_frequencyHz > 0.0))){
			HX_STACK_LINE(189)
			Float C = (length - this->m_length);		HX_STACK_VAR(C,"C");
			HX_STACK_LINE(192)
			Float omega = ((2.0 * ::Math_obj::PI) * this->m_frequencyHz);		HX_STACK_VAR(omega,"omega");
			HX_STACK_LINE(195)
			Float d = (((2.0 * this->m_mass) * this->m_dampingRatio) * omega);		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(198)
			Float k = ((this->m_mass * omega) * omega);		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(201)
			this->m_gamma = (step->dt * ((d + (step->dt * k))));
			HX_STACK_LINE(202)
			this->m_gamma = (  (((this->m_gamma != 0.0))) ? Float((Float((int)1) / Float(this->m_gamma))) : Float(0.0) );
			HX_STACK_LINE(203)
			this->m_bias = (((C * step->dt) * k) * this->m_gamma);
			HX_STACK_LINE(205)
			this->m_mass = (invMass + this->m_gamma);
			HX_STACK_LINE(206)
			this->m_mass = (  (((this->m_mass != 0.0))) ? Float((Float(1.0) / Float(this->m_mass))) : Float(0.0) );
		}
		HX_STACK_LINE(209)
		if ((step->warmStarting)){
			HX_STACK_LINE(212)
			hx::MultEq(this->m_impulse,step->dtRatio);
			HX_STACK_LINE(215)
			Float PX = (this->m_impulse * this->m_u->x);		HX_STACK_VAR(PX,"PX");
			HX_STACK_LINE(216)
			Float PY = (this->m_impulse * this->m_u->y);		HX_STACK_VAR(PY,"PY");
			HX_STACK_LINE(218)
			hx::SubEq(bA->m_linearVelocity->x,(bA->m_invMass * PX));
			HX_STACK_LINE(219)
			hx::SubEq(bA->m_linearVelocity->y,(bA->m_invMass * PY));
			HX_STACK_LINE(221)
			hx::SubEq(bA->m_angularVelocity,(bA->m_invI * (((r1X * PY) - (r1Y * PX)))));
			HX_STACK_LINE(223)
			hx::AddEq(bB->m_linearVelocity->x,(bB->m_invMass * PX));
			HX_STACK_LINE(224)
			hx::AddEq(bB->m_linearVelocity->y,(bB->m_invMass * PY));
			HX_STACK_LINE(226)
			hx::AddEq(bB->m_angularVelocity,(bB->m_invI * (((r2X * PY) - (r2Y * PX)))));
		}
		else{
			HX_STACK_LINE(229)
			this->m_impulse = 0.0;
		}
	}
return null();
}


Void B2DistanceJoint_obj::setDampingRatio( Float ratio){
{
		HX_STACK_PUSH("B2DistanceJoint::setDampingRatio","box2D/dynamics/joints/B2DistanceJoint.hx",109);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ratio,"ratio");
		HX_STACK_LINE(109)
		this->m_dampingRatio = ratio;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2DistanceJoint_obj,setDampingRatio,(void))

Float B2DistanceJoint_obj::getDampingRatio( ){
	HX_STACK_PUSH("B2DistanceJoint::getDampingRatio","box2D/dynamics/joints/B2DistanceJoint.hx",103);
	HX_STACK_THIS(this);
	HX_STACK_LINE(103)
	return this->m_dampingRatio;
}


HX_DEFINE_DYNAMIC_FUNC0(B2DistanceJoint_obj,getDampingRatio,return )

Void B2DistanceJoint_obj::setFrequency( Float hz){
{
		HX_STACK_PUSH("B2DistanceJoint::setFrequency","box2D/dynamics/joints/B2DistanceJoint.hx",97);
		HX_STACK_THIS(this);
		HX_STACK_ARG(hz,"hz");
		HX_STACK_LINE(97)
		this->m_frequencyHz = hz;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2DistanceJoint_obj,setFrequency,(void))

Float B2DistanceJoint_obj::getFrequency( ){
	HX_STACK_PUSH("B2DistanceJoint::getFrequency","box2D/dynamics/joints/B2DistanceJoint.hx",91);
	HX_STACK_THIS(this);
	HX_STACK_LINE(91)
	return this->m_frequencyHz;
}


HX_DEFINE_DYNAMIC_FUNC0(B2DistanceJoint_obj,getFrequency,return )

Void B2DistanceJoint_obj::setLength( Float length){
{
		HX_STACK_PUSH("B2DistanceJoint::setLength","box2D/dynamics/joints/B2DistanceJoint.hx",85);
		HX_STACK_THIS(this);
		HX_STACK_ARG(length,"length");
		HX_STACK_LINE(85)
		this->m_length = length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2DistanceJoint_obj,setLength,(void))

Float B2DistanceJoint_obj::getLength( ){
	HX_STACK_PUSH("B2DistanceJoint::getLength","box2D/dynamics/joints/B2DistanceJoint.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_LINE(79)
	return this->m_length;
}


HX_DEFINE_DYNAMIC_FUNC0(B2DistanceJoint_obj,getLength,return )

Float B2DistanceJoint_obj::getReactionTorque( Float inv_dt){
	HX_STACK_PUSH("B2DistanceJoint::getReactionTorque","box2D/dynamics/joints/B2DistanceJoint.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inv_dt,"inv_dt");
	HX_STACK_LINE(72)
	return 0.0;
}


::box2D::common::math::B2Vec2 B2DistanceJoint_obj::getReactionForce( Float inv_dt){
	HX_STACK_PUSH("B2DistanceJoint::getReactionForce","box2D/dynamics/joints/B2DistanceJoint.hx",64);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inv_dt,"inv_dt");
	HX_STACK_LINE(64)
	return ::box2D::common::math::B2Vec2_obj::__new(((inv_dt * this->m_impulse) * this->m_u->x),((inv_dt * this->m_impulse) * this->m_u->y));
}


::box2D::common::math::B2Vec2 B2DistanceJoint_obj::getAnchorB( ){
	HX_STACK_PUSH("B2DistanceJoint::getAnchorB","box2D/dynamics/joints/B2DistanceJoint.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_LINE(58)
	return this->m_bodyB->getWorldPoint(this->m_localAnchor2);
}


::box2D::common::math::B2Vec2 B2DistanceJoint_obj::getAnchorA( ){
	HX_STACK_PUSH("B2DistanceJoint::getAnchorA","box2D/dynamics/joints/B2DistanceJoint.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_LINE(54)
	return this->m_bodyA->getWorldPoint(this->m_localAnchor1);
}



B2DistanceJoint_obj::B2DistanceJoint_obj()
{
}

void B2DistanceJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2DistanceJoint);
	HX_MARK_MEMBER_NAME(m_length,"m_length");
	HX_MARK_MEMBER_NAME(m_mass,"m_mass");
	HX_MARK_MEMBER_NAME(m_impulse,"m_impulse");
	HX_MARK_MEMBER_NAME(m_bias,"m_bias");
	HX_MARK_MEMBER_NAME(m_gamma,"m_gamma");
	HX_MARK_MEMBER_NAME(m_dampingRatio,"m_dampingRatio");
	HX_MARK_MEMBER_NAME(m_frequencyHz,"m_frequencyHz");
	HX_MARK_MEMBER_NAME(m_u,"m_u");
	HX_MARK_MEMBER_NAME(m_localAnchor2,"m_localAnchor2");
	HX_MARK_MEMBER_NAME(m_localAnchor1,"m_localAnchor1");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2DistanceJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_length,"m_length");
	HX_VISIT_MEMBER_NAME(m_mass,"m_mass");
	HX_VISIT_MEMBER_NAME(m_impulse,"m_impulse");
	HX_VISIT_MEMBER_NAME(m_bias,"m_bias");
	HX_VISIT_MEMBER_NAME(m_gamma,"m_gamma");
	HX_VISIT_MEMBER_NAME(m_dampingRatio,"m_dampingRatio");
	HX_VISIT_MEMBER_NAME(m_frequencyHz,"m_frequencyHz");
	HX_VISIT_MEMBER_NAME(m_u,"m_u");
	HX_VISIT_MEMBER_NAME(m_localAnchor2,"m_localAnchor2");
	HX_VISIT_MEMBER_NAME(m_localAnchor1,"m_localAnchor1");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic B2DistanceJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"m_u") ) { return m_u; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_mass") ) { return m_mass; }
		if (HX_FIELD_EQ(inName,"m_bias") ) { return m_bias; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_gamma") ) { return m_gamma; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_length") ) { return m_length; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_impulse") ) { return m_impulse; }
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getAnchorB") ) { return getAnchorB_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnchorA") ) { return getAnchorA_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setFrequency") ) { return setFrequency_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrequency") ) { return getFrequency_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_frequencyHz") ) { return m_frequencyHz; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_dampingRatio") ) { return m_dampingRatio; }
		if (HX_FIELD_EQ(inName,"m_localAnchor2") ) { return m_localAnchor2; }
		if (HX_FIELD_EQ(inName,"m_localAnchor1") ) { return m_localAnchor1; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setDampingRatio") ) { return setDampingRatio_dyn(); }
		if (HX_FIELD_EQ(inName,"getDampingRatio") ) { return getDampingRatio_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getReactionForce") ) { return getReactionForce_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getReactionTorque") ) { return getReactionTorque_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"initVelocityConstraints") ) { return initVelocityConstraints_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"solvePositionConstraints") ) { return solvePositionConstraints_dyn(); }
		if (HX_FIELD_EQ(inName,"solveVelocityConstraints") ) { return solveVelocityConstraints_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2DistanceJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"m_u") ) { m_u=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_mass") ) { m_mass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_bias") ) { m_bias=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_gamma") ) { m_gamma=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_length") ) { m_length=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_impulse") ) { m_impulse=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_frequencyHz") ) { m_frequencyHz=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_dampingRatio") ) { m_dampingRatio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_localAnchor2") ) { m_localAnchor2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_localAnchor1") ) { m_localAnchor1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2DistanceJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_length"));
	outFields->push(HX_CSTRING("m_mass"));
	outFields->push(HX_CSTRING("m_impulse"));
	outFields->push(HX_CSTRING("m_bias"));
	outFields->push(HX_CSTRING("m_gamma"));
	outFields->push(HX_CSTRING("m_dampingRatio"));
	outFields->push(HX_CSTRING("m_frequencyHz"));
	outFields->push(HX_CSTRING("m_u"));
	outFields->push(HX_CSTRING("m_localAnchor2"));
	outFields->push(HX_CSTRING("m_localAnchor1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_length"),
	HX_CSTRING("m_mass"),
	HX_CSTRING("m_impulse"),
	HX_CSTRING("m_bias"),
	HX_CSTRING("m_gamma"),
	HX_CSTRING("m_dampingRatio"),
	HX_CSTRING("m_frequencyHz"),
	HX_CSTRING("m_u"),
	HX_CSTRING("m_localAnchor2"),
	HX_CSTRING("m_localAnchor1"),
	HX_CSTRING("solvePositionConstraints"),
	HX_CSTRING("solveVelocityConstraints"),
	HX_CSTRING("initVelocityConstraints"),
	HX_CSTRING("setDampingRatio"),
	HX_CSTRING("getDampingRatio"),
	HX_CSTRING("setFrequency"),
	HX_CSTRING("getFrequency"),
	HX_CSTRING("setLength"),
	HX_CSTRING("getLength"),
	HX_CSTRING("getReactionTorque"),
	HX_CSTRING("getReactionForce"),
	HX_CSTRING("getAnchorB"),
	HX_CSTRING("getAnchorA"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2DistanceJoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2DistanceJoint_obj::__mClass,"__mClass");
};

Class B2DistanceJoint_obj::__mClass;

void B2DistanceJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.joints.B2DistanceJoint"), hx::TCanCast< B2DistanceJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2DistanceJoint_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints
