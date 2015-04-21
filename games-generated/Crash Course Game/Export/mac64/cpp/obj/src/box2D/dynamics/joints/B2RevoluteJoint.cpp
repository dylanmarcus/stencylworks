#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Mat22
#include <box2D/common/math/B2Mat22.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Mat33
#include <box2D/common/math/B2Mat33.h>
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
#ifndef INCLUDED_box2D_common_math_B2Vec3
#include <box2D/common/math/B2Vec3.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2TimeStep
#include <box2D/dynamics/B2TimeStep.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2JointDef
#include <box2D/dynamics/joints/B2JointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2RevoluteJoint
#include <box2D/dynamics/joints/B2RevoluteJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2RevoluteJointDef
#include <box2D/dynamics/joints/B2RevoluteJointDef.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace box2D{
namespace dynamics{
namespace joints{

Void B2RevoluteJoint_obj::__construct(::box2D::dynamics::joints::B2RevoluteJointDef def)
{
HX_STACK_PUSH("B2RevoluteJoint::new","box2D/dynamics/joints/B2RevoluteJoint.hx",177);
{
	HX_STACK_LINE(178)
	super::__construct(def);
	HX_STACK_LINE(180)
	this->K = ::box2D::common::math::B2Mat22_obj::__new();
	HX_STACK_LINE(181)
	this->K1 = ::box2D::common::math::B2Mat22_obj::__new();
	HX_STACK_LINE(182)
	this->K2 = ::box2D::common::math::B2Mat22_obj::__new();
	HX_STACK_LINE(183)
	this->K3 = ::box2D::common::math::B2Mat22_obj::__new();
	HX_STACK_LINE(185)
	this->impulse3 = ::box2D::common::math::B2Vec3_obj::__new(null(),null(),null());
	HX_STACK_LINE(186)
	this->impulse2 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(187)
	this->reduced = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(189)
	this->m_localAnchor1 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(190)
	this->m_localAnchor2 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(191)
	this->m_impulse = ::box2D::common::math::B2Vec3_obj::__new(null(),null(),null());
	HX_STACK_LINE(192)
	this->m_mass = ::box2D::common::math::B2Mat33_obj::__new(null(),null(),null());
	HX_STACK_LINE(196)
	{
		HX_STACK_LINE(196)
		::box2D::common::math::B2Vec2 _this = this->m_localAnchor1;		HX_STACK_VAR(_this,"_this");
		::box2D::common::math::B2Vec2 v = def->localAnchorA;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(196)
		_this->x = v->x;
		HX_STACK_LINE(196)
		_this->y = v->y;
	}
	HX_STACK_LINE(198)
	{
		HX_STACK_LINE(198)
		::box2D::common::math::B2Vec2 _this = this->m_localAnchor2;		HX_STACK_VAR(_this,"_this");
		::box2D::common::math::B2Vec2 v = def->localAnchorB;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(198)
		_this->x = v->x;
		HX_STACK_LINE(198)
		_this->y = v->y;
	}
	HX_STACK_LINE(200)
	this->m_referenceAngle = def->referenceAngle;
	HX_STACK_LINE(202)
	this->m_impulse->setZero();
	HX_STACK_LINE(203)
	this->m_motorImpulse = 0.0;
	HX_STACK_LINE(205)
	this->m_lowerAngle = def->lowerAngle;
	HX_STACK_LINE(206)
	this->m_upperAngle = def->upperAngle;
	HX_STACK_LINE(207)
	this->m_maxMotorTorque = def->maxMotorTorque;
	HX_STACK_LINE(208)
	this->m_motorSpeed = def->motorSpeed;
	HX_STACK_LINE(209)
	this->m_enableLimit = def->enableLimit;
	HX_STACK_LINE(210)
	this->m_enableMotor = def->enableMotor;
	HX_STACK_LINE(211)
	this->m_limitState = ::box2D::dynamics::joints::B2Joint_obj::e_inactiveLimit;
}
;
	return null();
}

B2RevoluteJoint_obj::~B2RevoluteJoint_obj() { }

Dynamic B2RevoluteJoint_obj::__CreateEmpty() { return  new B2RevoluteJoint_obj; }
hx::ObjectPtr< B2RevoluteJoint_obj > B2RevoluteJoint_obj::__new(::box2D::dynamics::joints::B2RevoluteJointDef def)
{  hx::ObjectPtr< B2RevoluteJoint_obj > result = new B2RevoluteJoint_obj();
	result->__construct(def);
	return result;}

Dynamic B2RevoluteJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2RevoluteJoint_obj > result = new B2RevoluteJoint_obj();
	result->__construct(inArgs[0]);
	return result;}

bool B2RevoluteJoint_obj::solvePositionConstraints( Float baumgarte){
	HX_STACK_PUSH("B2RevoluteJoint::solvePositionConstraints","box2D/dynamics/joints/B2RevoluteJoint.hx",500);
	HX_STACK_THIS(this);
	HX_STACK_ARG(baumgarte,"baumgarte");
	HX_STACK_LINE(504)
	Float oldLimitImpulse;		HX_STACK_VAR(oldLimitImpulse,"oldLimitImpulse");
	HX_STACK_LINE(505)
	Float C;		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(507)
	::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
	HX_STACK_LINE(509)
	::box2D::dynamics::B2Body bA = this->m_bodyA;		HX_STACK_VAR(bA,"bA");
	HX_STACK_LINE(510)
	::box2D::dynamics::B2Body bB = this->m_bodyB;		HX_STACK_VAR(bB,"bB");
	HX_STACK_LINE(512)
	Float angularError = 0.0;		HX_STACK_VAR(angularError,"angularError");
	HX_STACK_LINE(513)
	Float positionError = 0.0;		HX_STACK_VAR(positionError,"positionError");
	HX_STACK_LINE(515)
	Float tX;		HX_STACK_VAR(tX,"tX");
	HX_STACK_LINE(517)
	Float impulseX;		HX_STACK_VAR(impulseX,"impulseX");
	HX_STACK_LINE(518)
	Float impulseY;		HX_STACK_VAR(impulseY,"impulseY");
	HX_STACK_LINE(521)
	if (((bool(this->m_enableLimit) && bool((this->m_limitState != ::box2D::dynamics::joints::B2Joint_obj::e_inactiveLimit))))){
		HX_STACK_LINE(523)
		Float angle = ((bB->m_sweep->a - bA->m_sweep->a) - this->m_referenceAngle);		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(524)
		Float limitImpulse = 0.0;		HX_STACK_VAR(limitImpulse,"limitImpulse");
		HX_STACK_LINE(526)
		if (((this->m_limitState == ::box2D::dynamics::joints::B2Joint_obj::e_equalLimits))){
			HX_STACK_LINE(529)
			C = ::box2D::common::math::B2Math_obj::clamp((angle - this->m_lowerAngle),-(::box2D::common::B2Settings_obj::b2_maxAngularCorrection),::box2D::common::B2Settings_obj::b2_maxAngularCorrection);
			HX_STACK_LINE(530)
			limitImpulse = (-(this->m_motorMass) * C);
			HX_STACK_LINE(531)
			angularError = ::box2D::common::math::B2Math_obj::abs(C);
		}
		else{
			HX_STACK_LINE(533)
			if (((this->m_limitState == ::box2D::dynamics::joints::B2Joint_obj::e_atLowerLimit))){
				HX_STACK_LINE(535)
				C = (angle - this->m_lowerAngle);
				HX_STACK_LINE(536)
				angularError = -(C);
				HX_STACK_LINE(539)
				C = ::box2D::common::math::B2Math_obj::clamp((C + ::box2D::common::B2Settings_obj::b2_angularSlop),-(::box2D::common::B2Settings_obj::b2_maxAngularCorrection),0.0);
				HX_STACK_LINE(540)
				limitImpulse = (-(this->m_motorMass) * C);
			}
			else{
				HX_STACK_LINE(542)
				if (((this->m_limitState == ::box2D::dynamics::joints::B2Joint_obj::e_atUpperLimit))){
					HX_STACK_LINE(544)
					C = (angle - this->m_upperAngle);
					HX_STACK_LINE(545)
					angularError = C;
					HX_STACK_LINE(548)
					C = ::box2D::common::math::B2Math_obj::clamp((C - ::box2D::common::B2Settings_obj::b2_angularSlop),0.0,::box2D::common::B2Settings_obj::b2_maxAngularCorrection);
					HX_STACK_LINE(549)
					limitImpulse = (-(this->m_motorMass) * C);
				}
			}
		}
		HX_STACK_LINE(552)
		hx::SubEq(bA->m_sweep->a,(bA->m_invI * limitImpulse));
		HX_STACK_LINE(553)
		hx::AddEq(bB->m_sweep->a,(bB->m_invI * limitImpulse));
		HX_STACK_LINE(555)
		bA->synchronizeTransform();
		HX_STACK_LINE(556)
		bB->synchronizeTransform();
	}
	HX_STACK_LINE(560)
	{
		HX_STACK_LINE(562)
		tMat = bA->m_xf->R;
		HX_STACK_LINE(563)
		Float r1X = (this->m_localAnchor1->x - bA->m_sweep->localCenter->x);		HX_STACK_VAR(r1X,"r1X");
		HX_STACK_LINE(564)
		Float r1Y = (this->m_localAnchor1->y - bA->m_sweep->localCenter->y);		HX_STACK_VAR(r1Y,"r1Y");
		HX_STACK_LINE(565)
		tX = ((tMat->col1->x * r1X) + (tMat->col2->x * r1Y));
		HX_STACK_LINE(566)
		r1Y = ((tMat->col1->y * r1X) + (tMat->col2->y * r1Y));
		HX_STACK_LINE(567)
		r1X = tX;
		HX_STACK_LINE(569)
		tMat = bB->m_xf->R;
		HX_STACK_LINE(570)
		Float r2X = (this->m_localAnchor2->x - bB->m_sweep->localCenter->x);		HX_STACK_VAR(r2X,"r2X");
		HX_STACK_LINE(571)
		Float r2Y = (this->m_localAnchor2->y - bB->m_sweep->localCenter->y);		HX_STACK_VAR(r2Y,"r2Y");
		HX_STACK_LINE(572)
		tX = ((tMat->col1->x * r2X) + (tMat->col2->x * r2Y));
		HX_STACK_LINE(573)
		r2Y = ((tMat->col1->y * r2X) + (tMat->col2->y * r2Y));
		HX_STACK_LINE(574)
		r2X = tX;
		HX_STACK_LINE(577)
		Float CX = (((bB->m_sweep->c->x + r2X) - bA->m_sweep->c->x) - r1X);		HX_STACK_VAR(CX,"CX");
		HX_STACK_LINE(578)
		Float CY = (((bB->m_sweep->c->y + r2Y) - bA->m_sweep->c->y) - r1Y);		HX_STACK_VAR(CY,"CY");
		HX_STACK_LINE(579)
		Float CLengthSquared = ((CX * CX) + (CY * CY));		HX_STACK_VAR(CLengthSquared,"CLengthSquared");
		HX_STACK_LINE(580)
		Float CLength = ::Math_obj::sqrt(CLengthSquared);		HX_STACK_VAR(CLength,"CLength");
		HX_STACK_LINE(581)
		positionError = CLength;
		HX_STACK_LINE(583)
		Float invMass1 = bA->m_invMass;		HX_STACK_VAR(invMass1,"invMass1");
		HX_STACK_LINE(584)
		Float invMass2 = bB->m_invMass;		HX_STACK_VAR(invMass2,"invMass2");
		HX_STACK_LINE(585)
		Float invI1 = bA->m_invI;		HX_STACK_VAR(invI1,"invI1");
		HX_STACK_LINE(586)
		Float invI2 = bB->m_invI;		HX_STACK_VAR(invI2,"invI2");
		HX_STACK_LINE(589)
		Float k_allowedStretch = (10.0 * ::box2D::common::B2Settings_obj::b2_linearSlop);		HX_STACK_VAR(k_allowedStretch,"k_allowedStretch");
		HX_STACK_LINE(590)
		if (((CLengthSquared > (k_allowedStretch * k_allowedStretch)))){
			HX_STACK_LINE(594)
			Float uX = (Float(CX) / Float(CLength));		HX_STACK_VAR(uX,"uX");
			HX_STACK_LINE(595)
			Float uY = (Float(CY) / Float(CLength));		HX_STACK_VAR(uY,"uY");
			HX_STACK_LINE(596)
			Float k = (invMass1 + invMass2);		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(598)
			Float m = (Float(1.0) / Float(k));		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(599)
			impulseX = (m * -(CX));
			HX_STACK_LINE(600)
			impulseY = (m * -(CY));
			HX_STACK_LINE(601)
			Float k_beta = 0.5;		HX_STACK_VAR(k_beta,"k_beta");
			HX_STACK_LINE(602)
			hx::SubEq(bA->m_sweep->c->x,((k_beta * invMass1) * impulseX));
			HX_STACK_LINE(603)
			hx::SubEq(bA->m_sweep->c->y,((k_beta * invMass1) * impulseY));
			HX_STACK_LINE(604)
			hx::AddEq(bB->m_sweep->c->x,((k_beta * invMass2) * impulseX));
			HX_STACK_LINE(605)
			hx::AddEq(bB->m_sweep->c->y,((k_beta * invMass2) * impulseY));
			HX_STACK_LINE(608)
			CX = (((bB->m_sweep->c->x + r2X) - bA->m_sweep->c->x) - r1X);
			HX_STACK_LINE(609)
			CY = (((bB->m_sweep->c->y + r2Y) - bA->m_sweep->c->y) - r1Y);
		}
		HX_STACK_LINE(613)
		this->K1->col1->x = (invMass1 + invMass2);
		HX_STACK_LINE(613)
		this->K1->col2->x = 0.0;
		HX_STACK_LINE(614)
		this->K1->col1->y = 0.0;
		HX_STACK_LINE(614)
		this->K1->col2->y = (invMass1 + invMass2);
		HX_STACK_LINE(617)
		this->K2->col1->x = ((invI1 * r1Y) * r1Y);
		HX_STACK_LINE(617)
		this->K2->col2->x = ((-(invI1) * r1X) * r1Y);
		HX_STACK_LINE(618)
		this->K2->col1->y = ((-(invI1) * r1X) * r1Y);
		HX_STACK_LINE(618)
		this->K2->col2->y = ((invI1 * r1X) * r1X);
		HX_STACK_LINE(621)
		this->K3->col1->x = ((invI2 * r2Y) * r2Y);
		HX_STACK_LINE(621)
		this->K3->col2->x = ((-(invI2) * r2X) * r2Y);
		HX_STACK_LINE(622)
		this->K3->col1->y = ((-(invI2) * r2X) * r2Y);
		HX_STACK_LINE(622)
		this->K3->col2->y = ((invI2 * r2X) * r2X);
		HX_STACK_LINE(625)
		this->K->setM(this->K1);
		HX_STACK_LINE(626)
		this->K->addM(this->K2);
		HX_STACK_LINE(627)
		this->K->addM(this->K3);
		HX_STACK_LINE(629)
		this->K->solve(::box2D::dynamics::joints::B2RevoluteJoint_obj::tImpulse,-(CX),-(CY));
		HX_STACK_LINE(630)
		impulseX = ::box2D::dynamics::joints::B2RevoluteJoint_obj::tImpulse->x;
		HX_STACK_LINE(631)
		impulseY = ::box2D::dynamics::joints::B2RevoluteJoint_obj::tImpulse->y;
		HX_STACK_LINE(634)
		hx::SubEq(bA->m_sweep->c->x,(bA->m_invMass * impulseX));
		HX_STACK_LINE(635)
		hx::SubEq(bA->m_sweep->c->y,(bA->m_invMass * impulseY));
		HX_STACK_LINE(637)
		hx::SubEq(bA->m_sweep->a,(bA->m_invI * (((r1X * impulseY) - (r1Y * impulseX)))));
		HX_STACK_LINE(640)
		hx::AddEq(bB->m_sweep->c->x,(bB->m_invMass * impulseX));
		HX_STACK_LINE(641)
		hx::AddEq(bB->m_sweep->c->y,(bB->m_invMass * impulseY));
		HX_STACK_LINE(643)
		hx::AddEq(bB->m_sweep->a,(bB->m_invI * (((r2X * impulseY) - (r2Y * impulseX)))));
		HX_STACK_LINE(645)
		bA->synchronizeTransform();
		HX_STACK_LINE(646)
		bB->synchronizeTransform();
	}
	HX_STACK_LINE(649)
	return (bool((positionError <= ::box2D::common::B2Settings_obj::b2_linearSlop)) && bool((angularError <= ::box2D::common::B2Settings_obj::b2_angularSlop)));
}


Void B2RevoluteJoint_obj::solveVelocityConstraints( ::box2D::dynamics::B2TimeStep step){
{
		HX_STACK_PUSH("B2RevoluteJoint::solveVelocityConstraints","box2D/dynamics/joints/B2RevoluteJoint.hx",351);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
		HX_STACK_LINE(352)
		::box2D::dynamics::B2Body bA = this->m_bodyA;		HX_STACK_VAR(bA,"bA");
		HX_STACK_LINE(353)
		::box2D::dynamics::B2Body bB = this->m_bodyB;		HX_STACK_VAR(bB,"bB");
		HX_STACK_LINE(355)
		::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
		HX_STACK_LINE(356)
		Float tX;		HX_STACK_VAR(tX,"tX");
		HX_STACK_LINE(358)
		Float newImpulse;		HX_STACK_VAR(newImpulse,"newImpulse");
		HX_STACK_LINE(359)
		Float r1X;		HX_STACK_VAR(r1X,"r1X");
		HX_STACK_LINE(360)
		Float r1Y;		HX_STACK_VAR(r1Y,"r1Y");
		HX_STACK_LINE(361)
		Float r2X;		HX_STACK_VAR(r2X,"r2X");
		HX_STACK_LINE(362)
		Float r2Y;		HX_STACK_VAR(r2Y,"r2Y");
		HX_STACK_LINE(364)
		::box2D::common::math::B2Vec2 v1 = bA->m_linearVelocity;		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(365)
		Float w1 = bA->m_angularVelocity;		HX_STACK_VAR(w1,"w1");
		HX_STACK_LINE(366)
		::box2D::common::math::B2Vec2 v2 = bB->m_linearVelocity;		HX_STACK_VAR(v2,"v2");
		HX_STACK_LINE(367)
		Float w2 = bB->m_angularVelocity;		HX_STACK_VAR(w2,"w2");
		HX_STACK_LINE(369)
		Float m1 = bA->m_invMass;		HX_STACK_VAR(m1,"m1");
		HX_STACK_LINE(370)
		Float m2 = bB->m_invMass;		HX_STACK_VAR(m2,"m2");
		HX_STACK_LINE(371)
		Float i1 = bA->m_invI;		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(372)
		Float i2 = bB->m_invI;		HX_STACK_VAR(i2,"i2");
		HX_STACK_LINE(375)
		if (((bool(this->m_enableMotor) && bool((this->m_limitState != ::box2D::dynamics::joints::B2Joint_obj::e_equalLimits))))){
			HX_STACK_LINE(377)
			Float Cdot = ((w2 - w1) - this->m_motorSpeed);		HX_STACK_VAR(Cdot,"Cdot");
			HX_STACK_LINE(378)
			Float impulse = (this->m_motorMass * -(Cdot));		HX_STACK_VAR(impulse,"impulse");
			HX_STACK_LINE(379)
			Float oldImpulse = this->m_motorImpulse;		HX_STACK_VAR(oldImpulse,"oldImpulse");
			HX_STACK_LINE(380)
			Float maxImpulse = (step->dt * this->m_maxMotorTorque);		HX_STACK_VAR(maxImpulse,"maxImpulse");
			HX_STACK_LINE(382)
			this->m_motorImpulse = ::box2D::common::math::B2Math_obj::clamp((this->m_motorImpulse + impulse),-(maxImpulse),maxImpulse);
			HX_STACK_LINE(383)
			impulse = (this->m_motorImpulse - oldImpulse);
			HX_STACK_LINE(385)
			hx::SubEq(w1,(i1 * impulse));
			HX_STACK_LINE(386)
			hx::AddEq(w2,(i2 * impulse));
		}
		HX_STACK_LINE(390)
		if (((bool(this->m_enableLimit) && bool((this->m_limitState != ::box2D::dynamics::joints::B2Joint_obj::e_inactiveLimit))))){
			HX_STACK_LINE(393)
			tMat = bA->m_xf->R;
			HX_STACK_LINE(394)
			r1X = (this->m_localAnchor1->x - bA->m_sweep->localCenter->x);
			HX_STACK_LINE(395)
			r1Y = (this->m_localAnchor1->y - bA->m_sweep->localCenter->y);
			HX_STACK_LINE(396)
			tX = ((tMat->col1->x * r1X) + (tMat->col2->x * r1Y));
			HX_STACK_LINE(397)
			r1Y = ((tMat->col1->y * r1X) + (tMat->col2->y * r1Y));
			HX_STACK_LINE(398)
			r1X = tX;
			HX_STACK_LINE(400)
			tMat = bB->m_xf->R;
			HX_STACK_LINE(401)
			r2X = (this->m_localAnchor2->x - bB->m_sweep->localCenter->x);
			HX_STACK_LINE(402)
			r2Y = (this->m_localAnchor2->y - bB->m_sweep->localCenter->y);
			HX_STACK_LINE(403)
			tX = ((tMat->col1->x * r2X) + (tMat->col2->x * r2Y));
			HX_STACK_LINE(404)
			r2Y = ((tMat->col1->y * r2X) + (tMat->col2->y * r2Y));
			HX_STACK_LINE(405)
			r2X = tX;
			HX_STACK_LINE(409)
			Float Cdot1X = (((v2->x + (-(w2) * r2Y)) - v1->x) - (-(w1) * r1Y));		HX_STACK_VAR(Cdot1X,"Cdot1X");
			HX_STACK_LINE(410)
			Float Cdot1Y = (((v2->y + (w2 * r2X)) - v1->y) - (w1 * r1X));		HX_STACK_VAR(Cdot1Y,"Cdot1Y");
			HX_STACK_LINE(411)
			Float Cdot2 = (w2 - w1);		HX_STACK_VAR(Cdot2,"Cdot2");
			HX_STACK_LINE(413)
			this->m_mass->solve33(this->impulse3,-(Cdot1X),-(Cdot1Y),-(Cdot2));
			HX_STACK_LINE(415)
			if (((this->m_limitState == ::box2D::dynamics::joints::B2Joint_obj::e_equalLimits))){
				HX_STACK_LINE(416)
				this->m_impulse->add(this->impulse3);
			}
			else{
				HX_STACK_LINE(419)
				if (((this->m_limitState == ::box2D::dynamics::joints::B2Joint_obj::e_atLowerLimit))){
					HX_STACK_LINE(421)
					newImpulse = (this->m_impulse->z + this->impulse3->z);
					HX_STACK_LINE(422)
					if (((newImpulse < 0.0))){
						HX_STACK_LINE(424)
						this->m_mass->solve22(this->reduced,-(Cdot1X),-(Cdot1Y));
						HX_STACK_LINE(425)
						this->impulse3->x = this->reduced->x;
						HX_STACK_LINE(426)
						this->impulse3->y = this->reduced->y;
						HX_STACK_LINE(427)
						this->impulse3->z = -(this->m_impulse->z);
						HX_STACK_LINE(428)
						hx::AddEq(this->m_impulse->x,this->reduced->x);
						HX_STACK_LINE(429)
						hx::AddEq(this->m_impulse->y,this->reduced->y);
						HX_STACK_LINE(430)
						this->m_impulse->z = 0.0;
					}
				}
				else{
					HX_STACK_LINE(433)
					if (((this->m_limitState == ::box2D::dynamics::joints::B2Joint_obj::e_atUpperLimit))){
						HX_STACK_LINE(435)
						newImpulse = (this->m_impulse->z + this->impulse3->z);
						HX_STACK_LINE(436)
						if (((newImpulse > 0.0))){
							HX_STACK_LINE(438)
							this->m_mass->solve22(this->reduced,-(Cdot1X),-(Cdot1Y));
							HX_STACK_LINE(439)
							this->impulse3->x = this->reduced->x;
							HX_STACK_LINE(440)
							this->impulse3->y = this->reduced->y;
							HX_STACK_LINE(441)
							this->impulse3->z = -(this->m_impulse->z);
							HX_STACK_LINE(442)
							hx::AddEq(this->m_impulse->x,this->reduced->x);
							HX_STACK_LINE(443)
							hx::AddEq(this->m_impulse->y,this->reduced->y);
							HX_STACK_LINE(444)
							this->m_impulse->z = 0.0;
						}
					}
				}
			}
			HX_STACK_LINE(448)
			hx::SubEq(v1->x,(m1 * this->impulse3->x));
			HX_STACK_LINE(449)
			hx::SubEq(v1->y,(m1 * this->impulse3->y));
			HX_STACK_LINE(450)
			hx::SubEq(w1,(i1 * ((((r1X * this->impulse3->y) - (r1Y * this->impulse3->x)) + this->impulse3->z))));
			HX_STACK_LINE(452)
			hx::AddEq(v2->x,(m2 * this->impulse3->x));
			HX_STACK_LINE(453)
			hx::AddEq(v2->y,(m2 * this->impulse3->y));
			HX_STACK_LINE(454)
			hx::AddEq(w2,(i2 * ((((r2X * this->impulse3->y) - (r2Y * this->impulse3->x)) + this->impulse3->z))));
		}
		else{
			HX_STACK_LINE(459)
			tMat = bA->m_xf->R;
			HX_STACK_LINE(460)
			r1X = (this->m_localAnchor1->x - bA->m_sweep->localCenter->x);
			HX_STACK_LINE(461)
			r1Y = (this->m_localAnchor1->y - bA->m_sweep->localCenter->y);
			HX_STACK_LINE(462)
			tX = ((tMat->col1->x * r1X) + (tMat->col2->x * r1Y));
			HX_STACK_LINE(463)
			r1Y = ((tMat->col1->y * r1X) + (tMat->col2->y * r1Y));
			HX_STACK_LINE(464)
			r1X = tX;
			HX_STACK_LINE(466)
			tMat = bB->m_xf->R;
			HX_STACK_LINE(467)
			r2X = (this->m_localAnchor2->x - bB->m_sweep->localCenter->x);
			HX_STACK_LINE(468)
			r2Y = (this->m_localAnchor2->y - bB->m_sweep->localCenter->y);
			HX_STACK_LINE(469)
			tX = ((tMat->col1->x * r2X) + (tMat->col2->x * r2Y));
			HX_STACK_LINE(470)
			r2Y = ((tMat->col1->y * r2X) + (tMat->col2->y * r2Y));
			HX_STACK_LINE(471)
			r2X = tX;
			HX_STACK_LINE(474)
			Float CdotX = (((v2->x + (-(w2) * r2Y)) - v1->x) - (-(w1) * r1Y));		HX_STACK_VAR(CdotX,"CdotX");
			HX_STACK_LINE(475)
			Float CdotY = (((v2->y + (w2 * r2X)) - v1->y) - (w1 * r1X));		HX_STACK_VAR(CdotY,"CdotY");
			HX_STACK_LINE(477)
			this->m_mass->solve22(this->impulse2,-(CdotX),-(CdotY));
			HX_STACK_LINE(479)
			hx::AddEq(this->m_impulse->x,this->impulse2->x);
			HX_STACK_LINE(480)
			hx::AddEq(this->m_impulse->y,this->impulse2->y);
			HX_STACK_LINE(482)
			hx::SubEq(v1->x,(m1 * this->impulse2->x));
			HX_STACK_LINE(483)
			hx::SubEq(v1->y,(m1 * this->impulse2->y));
			HX_STACK_LINE(485)
			hx::SubEq(w1,(i1 * (((r1X * this->impulse2->y) - (r1Y * this->impulse2->x)))));
			HX_STACK_LINE(487)
			hx::AddEq(v2->x,(m2 * this->impulse2->x));
			HX_STACK_LINE(488)
			hx::AddEq(v2->y,(m2 * this->impulse2->y));
			HX_STACK_LINE(490)
			hx::AddEq(w2,(i2 * (((r2X * this->impulse2->y) - (r2Y * this->impulse2->x)))));
		}
		HX_STACK_LINE(493)
		{
			HX_STACK_LINE(493)
			::box2D::common::math::B2Vec2 _this = bA->m_linearVelocity;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(493)
			_this->x = v1->x;
			HX_STACK_LINE(493)
			_this->y = v1->y;
		}
		HX_STACK_LINE(494)
		bA->m_angularVelocity = w1;
		HX_STACK_LINE(495)
		{
			HX_STACK_LINE(495)
			::box2D::common::math::B2Vec2 _this = bB->m_linearVelocity;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(495)
			_this->x = v2->x;
			HX_STACK_LINE(495)
			_this->y = v2->y;
		}
		HX_STACK_LINE(496)
		bB->m_angularVelocity = w2;
	}
return null();
}


Void B2RevoluteJoint_obj::initVelocityConstraints( ::box2D::dynamics::B2TimeStep step){
{
		HX_STACK_PUSH("B2RevoluteJoint::initVelocityConstraints","box2D/dynamics/joints/B2RevoluteJoint.hx",219);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
		HX_STACK_LINE(220)
		::box2D::dynamics::B2Body bA = this->m_bodyA;		HX_STACK_VAR(bA,"bA");
		HX_STACK_LINE(221)
		::box2D::dynamics::B2Body bB = this->m_bodyB;		HX_STACK_VAR(bB,"bB");
		HX_STACK_LINE(223)
		::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
		HX_STACK_LINE(224)
		Float tX;		HX_STACK_VAR(tX,"tX");
		HX_STACK_LINE(226)
		if (((bool(this->m_enableMotor) || bool(this->m_enableLimit)))){
		}
		HX_STACK_LINE(237)
		tMat = bA->m_xf->R;
		HX_STACK_LINE(238)
		Float r1X = (this->m_localAnchor1->x - bA->m_sweep->localCenter->x);		HX_STACK_VAR(r1X,"r1X");
		HX_STACK_LINE(239)
		Float r1Y = (this->m_localAnchor1->y - bA->m_sweep->localCenter->y);		HX_STACK_VAR(r1Y,"r1Y");
		HX_STACK_LINE(240)
		tX = ((tMat->col1->x * r1X) + (tMat->col2->x * r1Y));
		HX_STACK_LINE(241)
		r1Y = ((tMat->col1->y * r1X) + (tMat->col2->y * r1Y));
		HX_STACK_LINE(242)
		r1X = tX;
		HX_STACK_LINE(244)
		tMat = bB->m_xf->R;
		HX_STACK_LINE(245)
		Float r2X = (this->m_localAnchor2->x - bB->m_sweep->localCenter->x);		HX_STACK_VAR(r2X,"r2X");
		HX_STACK_LINE(246)
		Float r2Y = (this->m_localAnchor2->y - bB->m_sweep->localCenter->y);		HX_STACK_VAR(r2Y,"r2Y");
		HX_STACK_LINE(247)
		tX = ((tMat->col1->x * r2X) + (tMat->col2->x * r2Y));
		HX_STACK_LINE(248)
		r2Y = ((tMat->col1->y * r2X) + (tMat->col2->y * r2Y));
		HX_STACK_LINE(249)
		r2X = tX;
		HX_STACK_LINE(260)
		Float m1 = bA->m_invMass;		HX_STACK_VAR(m1,"m1");
		HX_STACK_LINE(261)
		Float m2 = bB->m_invMass;		HX_STACK_VAR(m2,"m2");
		HX_STACK_LINE(262)
		Float i1 = bA->m_invI;		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(263)
		Float i2 = bB->m_invI;		HX_STACK_VAR(i2,"i2");
		HX_STACK_LINE(265)
		this->m_mass->col1->x = (((m1 + m2) + ((r1Y * r1Y) * i1)) + ((r2Y * r2Y) * i2));
		HX_STACK_LINE(266)
		this->m_mass->col2->x = (((-(r1Y) * r1X) * i1) - ((r2Y * r2X) * i2));
		HX_STACK_LINE(267)
		this->m_mass->col3->x = ((-(r1Y) * i1) - (r2Y * i2));
		HX_STACK_LINE(268)
		this->m_mass->col1->y = this->m_mass->col2->x;
		HX_STACK_LINE(269)
		this->m_mass->col2->y = (((m1 + m2) + ((r1X * r1X) * i1)) + ((r2X * r2X) * i2));
		HX_STACK_LINE(270)
		this->m_mass->col3->y = ((r1X * i1) + (r2X * i2));
		HX_STACK_LINE(271)
		this->m_mass->col1->z = this->m_mass->col3->x;
		HX_STACK_LINE(272)
		this->m_mass->col2->z = this->m_mass->col3->y;
		HX_STACK_LINE(273)
		this->m_mass->col3->z = (i1 + i2);
		HX_STACK_LINE(276)
		this->m_motorMass = (Float(1.0) / Float(((i1 + i2))));
		HX_STACK_LINE(278)
		if (((this->m_enableMotor == false))){
			HX_STACK_LINE(279)
			this->m_motorImpulse = 0.0;
		}
		HX_STACK_LINE(283)
		if ((this->m_enableLimit)){
			HX_STACK_LINE(286)
			Float jointAngle = ((bB->m_sweep->a - bA->m_sweep->a) - this->m_referenceAngle);		HX_STACK_VAR(jointAngle,"jointAngle");
			HX_STACK_LINE(287)
			if (((::box2D::common::math::B2Math_obj::abs((this->m_upperAngle - this->m_lowerAngle)) < (2.0 * ::box2D::common::B2Settings_obj::b2_angularSlop)))){
				HX_STACK_LINE(288)
				this->m_limitState = ::box2D::dynamics::joints::B2Joint_obj::e_equalLimits;
			}
			else{
				HX_STACK_LINE(291)
				if (((jointAngle <= this->m_lowerAngle))){
					HX_STACK_LINE(293)
					if (((this->m_limitState != ::box2D::dynamics::joints::B2Joint_obj::e_atLowerLimit))){
						HX_STACK_LINE(294)
						this->m_impulse->z = 0.0;
					}
					HX_STACK_LINE(297)
					this->m_limitState = ::box2D::dynamics::joints::B2Joint_obj::e_atLowerLimit;
				}
				else{
					HX_STACK_LINE(299)
					if (((jointAngle >= this->m_upperAngle))){
						HX_STACK_LINE(301)
						if (((this->m_limitState != ::box2D::dynamics::joints::B2Joint_obj::e_atUpperLimit))){
							HX_STACK_LINE(302)
							this->m_impulse->z = 0.0;
						}
						HX_STACK_LINE(305)
						this->m_limitState = ::box2D::dynamics::joints::B2Joint_obj::e_atUpperLimit;
					}
					else{
						HX_STACK_LINE(309)
						this->m_limitState = ::box2D::dynamics::joints::B2Joint_obj::e_inactiveLimit;
						HX_STACK_LINE(310)
						this->m_impulse->z = 0.0;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(314)
			this->m_limitState = ::box2D::dynamics::joints::B2Joint_obj::e_inactiveLimit;
		}
		HX_STACK_LINE(319)
		if ((step->warmStarting)){
			HX_STACK_LINE(322)
			hx::MultEq(this->m_impulse->x,step->dtRatio);
			HX_STACK_LINE(323)
			hx::MultEq(this->m_impulse->y,step->dtRatio);
			HX_STACK_LINE(324)
			hx::MultEq(this->m_motorImpulse,step->dtRatio);
			HX_STACK_LINE(326)
			Float PX = this->m_impulse->x;		HX_STACK_VAR(PX,"PX");
			HX_STACK_LINE(327)
			Float PY = this->m_impulse->y;		HX_STACK_VAR(PY,"PY");
			HX_STACK_LINE(330)
			hx::SubEq(bA->m_linearVelocity->x,(m1 * PX));
			HX_STACK_LINE(331)
			hx::SubEq(bA->m_linearVelocity->y,(m1 * PY));
			HX_STACK_LINE(333)
			hx::SubEq(bA->m_angularVelocity,(i1 * (((((r1X * PY) - (r1Y * PX)) + this->m_motorImpulse) + this->m_impulse->z))));
			HX_STACK_LINE(336)
			hx::AddEq(bB->m_linearVelocity->x,(m2 * PX));
			HX_STACK_LINE(337)
			hx::AddEq(bB->m_linearVelocity->y,(m2 * PY));
			HX_STACK_LINE(339)
			hx::AddEq(bB->m_angularVelocity,(i2 * (((((r2X * PY) - (r2Y * PX)) + this->m_motorImpulse) + this->m_impulse->z))));
		}
		else{
			HX_STACK_LINE(343)
			this->m_impulse->setZero();
			HX_STACK_LINE(344)
			this->m_motorImpulse = 0.0;
		}
	}
return null();
}


Float B2RevoluteJoint_obj::getMotorTorque( ){
	HX_STACK_PUSH("B2RevoluteJoint::getMotorTorque","box2D/dynamics/joints/B2RevoluteJoint.hx",170);
	HX_STACK_THIS(this);
	HX_STACK_LINE(170)
	return this->m_maxMotorTorque;
}


HX_DEFINE_DYNAMIC_FUNC0(B2RevoluteJoint_obj,getMotorTorque,return )

Void B2RevoluteJoint_obj::setMaxMotorTorque( Float torque){
{
		HX_STACK_PUSH("B2RevoluteJoint::setMaxMotorTorque","box2D/dynamics/joints/B2RevoluteJoint.hx",163);
		HX_STACK_THIS(this);
		HX_STACK_ARG(torque,"torque");
		HX_STACK_LINE(163)
		this->m_maxMotorTorque = torque;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2RevoluteJoint_obj,setMaxMotorTorque,(void))

Float B2RevoluteJoint_obj::getMotorSpeed( ){
	HX_STACK_PUSH("B2RevoluteJoint::getMotorSpeed","box2D/dynamics/joints/B2RevoluteJoint.hx",156);
	HX_STACK_THIS(this);
	HX_STACK_LINE(156)
	return this->m_motorSpeed;
}


HX_DEFINE_DYNAMIC_FUNC0(B2RevoluteJoint_obj,getMotorSpeed,return )

Void B2RevoluteJoint_obj::setMotorSpeed( Float speed){
{
		HX_STACK_PUSH("B2RevoluteJoint::setMotorSpeed","box2D/dynamics/joints/B2RevoluteJoint.hx",147);
		HX_STACK_THIS(this);
		HX_STACK_ARG(speed,"speed");
		HX_STACK_LINE(148)
		this->m_bodyA->setAwake(true);
		HX_STACK_LINE(149)
		this->m_bodyB->setAwake(true);
		HX_STACK_LINE(150)
		this->m_motorSpeed = speed;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2RevoluteJoint_obj,setMotorSpeed,(void))

Void B2RevoluteJoint_obj::enableMotor( bool flag){
{
		HX_STACK_PUSH("B2RevoluteJoint::enableMotor","box2D/dynamics/joints/B2RevoluteJoint.hx",140);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flag,"flag");
		HX_STACK_LINE(140)
		this->m_enableMotor = flag;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2RevoluteJoint_obj,enableMotor,(void))

bool B2RevoluteJoint_obj::isMotorEnabled( ){
	HX_STACK_PUSH("B2RevoluteJoint::isMotorEnabled","box2D/dynamics/joints/B2RevoluteJoint.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_LINE(132)
	this->m_bodyA->setAwake(true);
	HX_STACK_LINE(133)
	this->m_bodyB->setAwake(true);
	HX_STACK_LINE(134)
	return this->m_enableMotor;
}


HX_DEFINE_DYNAMIC_FUNC0(B2RevoluteJoint_obj,isMotorEnabled,return )

Void B2RevoluteJoint_obj::setLimits( Float lower,Float upper){
{
		HX_STACK_PUSH("B2RevoluteJoint::setLimits","box2D/dynamics/joints/B2RevoluteJoint.hx",122);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lower,"lower");
		HX_STACK_ARG(upper,"upper");
		HX_STACK_LINE(124)
		this->m_lowerAngle = lower;
		HX_STACK_LINE(125)
		this->m_upperAngle = upper;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2RevoluteJoint_obj,setLimits,(void))

Float B2RevoluteJoint_obj::getUpperLimit( ){
	HX_STACK_PUSH("B2RevoluteJoint::getUpperLimit","box2D/dynamics/joints/B2RevoluteJoint.hx",115);
	HX_STACK_THIS(this);
	HX_STACK_LINE(115)
	return this->m_upperAngle;
}


HX_DEFINE_DYNAMIC_FUNC0(B2RevoluteJoint_obj,getUpperLimit,return )

Float B2RevoluteJoint_obj::getLowerLimit( ){
	HX_STACK_PUSH("B2RevoluteJoint::getLowerLimit","box2D/dynamics/joints/B2RevoluteJoint.hx",108);
	HX_STACK_THIS(this);
	HX_STACK_LINE(108)
	return this->m_lowerAngle;
}


HX_DEFINE_DYNAMIC_FUNC0(B2RevoluteJoint_obj,getLowerLimit,return )

Void B2RevoluteJoint_obj::enableLimit( bool flag){
{
		HX_STACK_PUSH("B2RevoluteJoint::enableLimit","box2D/dynamics/joints/B2RevoluteJoint.hx",101);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flag,"flag");
		HX_STACK_LINE(101)
		this->m_enableLimit = flag;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2RevoluteJoint_obj,enableLimit,(void))

bool B2RevoluteJoint_obj::isLimitEnabled( ){
	HX_STACK_PUSH("B2RevoluteJoint::isLimitEnabled","box2D/dynamics/joints/B2RevoluteJoint.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_LINE(94)
	return this->m_enableLimit;
}


HX_DEFINE_DYNAMIC_FUNC0(B2RevoluteJoint_obj,isLimitEnabled,return )

Float B2RevoluteJoint_obj::getJointSpeed( ){
	HX_STACK_PUSH("B2RevoluteJoint::getJointSpeed","box2D/dynamics/joints/B2RevoluteJoint.hx",85);
	HX_STACK_THIS(this);
	HX_STACK_LINE(85)
	return (this->m_bodyB->m_angularVelocity - this->m_bodyA->m_angularVelocity);
}


HX_DEFINE_DYNAMIC_FUNC0(B2RevoluteJoint_obj,getJointSpeed,return )

Float B2RevoluteJoint_obj::getJointAngle( ){
	HX_STACK_PUSH("B2RevoluteJoint::getJointAngle","box2D/dynamics/joints/B2RevoluteJoint.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_LINE(76)
	return ((this->m_bodyB->m_sweep->a - this->m_bodyA->m_sweep->a) - this->m_referenceAngle);
}


HX_DEFINE_DYNAMIC_FUNC0(B2RevoluteJoint_obj,getJointAngle,return )

Float B2RevoluteJoint_obj::getReactionTorque( Float inv_dt){
	HX_STACK_PUSH("B2RevoluteJoint::getReactionTorque","box2D/dynamics/joints/B2RevoluteJoint.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inv_dt,"inv_dt");
	HX_STACK_LINE(69)
	return (inv_dt * this->m_impulse->z);
}


::box2D::common::math::B2Vec2 B2RevoluteJoint_obj::getReactionForce( Float inv_dt){
	HX_STACK_PUSH("B2RevoluteJoint::getReactionForce","box2D/dynamics/joints/B2RevoluteJoint.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inv_dt,"inv_dt");
	HX_STACK_LINE(65)
	return ::box2D::common::math::B2Vec2_obj::__new((inv_dt * this->m_impulse->x),(inv_dt * this->m_impulse->y));
}


::box2D::common::math::B2Vec2 B2RevoluteJoint_obj::getAnchorB( ){
	HX_STACK_PUSH("B2RevoluteJoint::getAnchorB","box2D/dynamics/joints/B2RevoluteJoint.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_LINE(60)
	return this->m_bodyB->getWorldPoint(this->m_localAnchor2);
}


::box2D::common::math::B2Vec2 B2RevoluteJoint_obj::getAnchorA( ){
	HX_STACK_PUSH("B2RevoluteJoint::getAnchorA","box2D/dynamics/joints/B2RevoluteJoint.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_LINE(56)
	return this->m_bodyA->getWorldPoint(this->m_localAnchor1);
}


::box2D::common::math::B2Vec2 B2RevoluteJoint_obj::tImpulse;


B2RevoluteJoint_obj::B2RevoluteJoint_obj()
{
}

void B2RevoluteJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2RevoluteJoint);
	HX_MARK_MEMBER_NAME(m_limitState,"m_limitState");
	HX_MARK_MEMBER_NAME(m_upperAngle,"m_upperAngle");
	HX_MARK_MEMBER_NAME(m_lowerAngle,"m_lowerAngle");
	HX_MARK_MEMBER_NAME(m_referenceAngle,"m_referenceAngle");
	HX_MARK_MEMBER_NAME(m_enableLimit,"m_enableLimit");
	HX_MARK_MEMBER_NAME(m_motorSpeed,"m_motorSpeed");
	HX_MARK_MEMBER_NAME(m_maxMotorTorque,"m_maxMotorTorque");
	HX_MARK_MEMBER_NAME(m_enableMotor,"m_enableMotor");
	HX_MARK_MEMBER_NAME(m_motorMass,"m_motorMass");
	HX_MARK_MEMBER_NAME(m_mass,"m_mass");
	HX_MARK_MEMBER_NAME(m_motorImpulse,"m_motorImpulse");
	HX_MARK_MEMBER_NAME(m_impulse,"m_impulse");
	HX_MARK_MEMBER_NAME(m_localAnchor2,"m_localAnchor2");
	HX_MARK_MEMBER_NAME(m_localAnchor1,"m_localAnchor1");
	HX_MARK_MEMBER_NAME(reduced,"reduced");
	HX_MARK_MEMBER_NAME(impulse2,"impulse2");
	HX_MARK_MEMBER_NAME(impulse3,"impulse3");
	HX_MARK_MEMBER_NAME(K3,"K3");
	HX_MARK_MEMBER_NAME(K2,"K2");
	HX_MARK_MEMBER_NAME(K1,"K1");
	HX_MARK_MEMBER_NAME(K,"K");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2RevoluteJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_limitState,"m_limitState");
	HX_VISIT_MEMBER_NAME(m_upperAngle,"m_upperAngle");
	HX_VISIT_MEMBER_NAME(m_lowerAngle,"m_lowerAngle");
	HX_VISIT_MEMBER_NAME(m_referenceAngle,"m_referenceAngle");
	HX_VISIT_MEMBER_NAME(m_enableLimit,"m_enableLimit");
	HX_VISIT_MEMBER_NAME(m_motorSpeed,"m_motorSpeed");
	HX_VISIT_MEMBER_NAME(m_maxMotorTorque,"m_maxMotorTorque");
	HX_VISIT_MEMBER_NAME(m_enableMotor,"m_enableMotor");
	HX_VISIT_MEMBER_NAME(m_motorMass,"m_motorMass");
	HX_VISIT_MEMBER_NAME(m_mass,"m_mass");
	HX_VISIT_MEMBER_NAME(m_motorImpulse,"m_motorImpulse");
	HX_VISIT_MEMBER_NAME(m_impulse,"m_impulse");
	HX_VISIT_MEMBER_NAME(m_localAnchor2,"m_localAnchor2");
	HX_VISIT_MEMBER_NAME(m_localAnchor1,"m_localAnchor1");
	HX_VISIT_MEMBER_NAME(reduced,"reduced");
	HX_VISIT_MEMBER_NAME(impulse2,"impulse2");
	HX_VISIT_MEMBER_NAME(impulse3,"impulse3");
	HX_VISIT_MEMBER_NAME(K3,"K3");
	HX_VISIT_MEMBER_NAME(K2,"K2");
	HX_VISIT_MEMBER_NAME(K1,"K1");
	HX_VISIT_MEMBER_NAME(K,"K");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic B2RevoluteJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"K") ) { return K; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"K3") ) { return K3; }
		if (HX_FIELD_EQ(inName,"K2") ) { return K2; }
		if (HX_FIELD_EQ(inName,"K1") ) { return K1; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_mass") ) { return m_mass; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reduced") ) { return reduced; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tImpulse") ) { return tImpulse; }
		if (HX_FIELD_EQ(inName,"impulse2") ) { return impulse2; }
		if (HX_FIELD_EQ(inName,"impulse3") ) { return impulse3; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_impulse") ) { return m_impulse; }
		if (HX_FIELD_EQ(inName,"setLimits") ) { return setLimits_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getAnchorB") ) { return getAnchorB_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnchorA") ) { return getAnchorA_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_motorMass") ) { return m_motorMass; }
		if (HX_FIELD_EQ(inName,"enableMotor") ) { return enableMotor_dyn(); }
		if (HX_FIELD_EQ(inName,"enableLimit") ) { return enableLimit_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_limitState") ) { return m_limitState; }
		if (HX_FIELD_EQ(inName,"m_upperAngle") ) { return m_upperAngle; }
		if (HX_FIELD_EQ(inName,"m_lowerAngle") ) { return m_lowerAngle; }
		if (HX_FIELD_EQ(inName,"m_motorSpeed") ) { return m_motorSpeed; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_enableLimit") ) { return m_enableLimit; }
		if (HX_FIELD_EQ(inName,"m_enableMotor") ) { return m_enableMotor; }
		if (HX_FIELD_EQ(inName,"getMotorSpeed") ) { return getMotorSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"setMotorSpeed") ) { return setMotorSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"getUpperLimit") ) { return getUpperLimit_dyn(); }
		if (HX_FIELD_EQ(inName,"getLowerLimit") ) { return getLowerLimit_dyn(); }
		if (HX_FIELD_EQ(inName,"getJointSpeed") ) { return getJointSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"getJointAngle") ) { return getJointAngle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_motorImpulse") ) { return m_motorImpulse; }
		if (HX_FIELD_EQ(inName,"m_localAnchor2") ) { return m_localAnchor2; }
		if (HX_FIELD_EQ(inName,"m_localAnchor1") ) { return m_localAnchor1; }
		if (HX_FIELD_EQ(inName,"getMotorTorque") ) { return getMotorTorque_dyn(); }
		if (HX_FIELD_EQ(inName,"isMotorEnabled") ) { return isMotorEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"isLimitEnabled") ) { return isLimitEnabled_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"m_referenceAngle") ) { return m_referenceAngle; }
		if (HX_FIELD_EQ(inName,"m_maxMotorTorque") ) { return m_maxMotorTorque; }
		if (HX_FIELD_EQ(inName,"getReactionForce") ) { return getReactionForce_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setMaxMotorTorque") ) { return setMaxMotorTorque_dyn(); }
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

Dynamic B2RevoluteJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"K") ) { K=inValue.Cast< ::box2D::common::math::B2Mat22 >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"K3") ) { K3=inValue.Cast< ::box2D::common::math::B2Mat22 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"K2") ) { K2=inValue.Cast< ::box2D::common::math::B2Mat22 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"K1") ) { K1=inValue.Cast< ::box2D::common::math::B2Mat22 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_mass") ) { m_mass=inValue.Cast< ::box2D::common::math::B2Mat33 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reduced") ) { reduced=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tImpulse") ) { tImpulse=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"impulse2") ) { impulse2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"impulse3") ) { impulse3=inValue.Cast< ::box2D::common::math::B2Vec3 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_impulse") ) { m_impulse=inValue.Cast< ::box2D::common::math::B2Vec3 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_motorMass") ) { m_motorMass=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_limitState") ) { m_limitState=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_upperAngle") ) { m_upperAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_lowerAngle") ) { m_lowerAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_motorSpeed") ) { m_motorSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_enableLimit") ) { m_enableLimit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_enableMotor") ) { m_enableMotor=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_motorImpulse") ) { m_motorImpulse=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_localAnchor2") ) { m_localAnchor2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_localAnchor1") ) { m_localAnchor1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"m_referenceAngle") ) { m_referenceAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_maxMotorTorque") ) { m_maxMotorTorque=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2RevoluteJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_limitState"));
	outFields->push(HX_CSTRING("m_upperAngle"));
	outFields->push(HX_CSTRING("m_lowerAngle"));
	outFields->push(HX_CSTRING("m_referenceAngle"));
	outFields->push(HX_CSTRING("m_enableLimit"));
	outFields->push(HX_CSTRING("m_motorSpeed"));
	outFields->push(HX_CSTRING("m_maxMotorTorque"));
	outFields->push(HX_CSTRING("m_enableMotor"));
	outFields->push(HX_CSTRING("m_motorMass"));
	outFields->push(HX_CSTRING("m_mass"));
	outFields->push(HX_CSTRING("m_motorImpulse"));
	outFields->push(HX_CSTRING("m_impulse"));
	outFields->push(HX_CSTRING("m_localAnchor2"));
	outFields->push(HX_CSTRING("m_localAnchor1"));
	outFields->push(HX_CSTRING("reduced"));
	outFields->push(HX_CSTRING("impulse2"));
	outFields->push(HX_CSTRING("impulse3"));
	outFields->push(HX_CSTRING("K3"));
	outFields->push(HX_CSTRING("K2"));
	outFields->push(HX_CSTRING("K1"));
	outFields->push(HX_CSTRING("K"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("tImpulse"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_limitState"),
	HX_CSTRING("m_upperAngle"),
	HX_CSTRING("m_lowerAngle"),
	HX_CSTRING("m_referenceAngle"),
	HX_CSTRING("m_enableLimit"),
	HX_CSTRING("m_motorSpeed"),
	HX_CSTRING("m_maxMotorTorque"),
	HX_CSTRING("m_enableMotor"),
	HX_CSTRING("m_motorMass"),
	HX_CSTRING("m_mass"),
	HX_CSTRING("m_motorImpulse"),
	HX_CSTRING("m_impulse"),
	HX_CSTRING("m_localAnchor2"),
	HX_CSTRING("m_localAnchor1"),
	HX_CSTRING("solvePositionConstraints"),
	HX_CSTRING("solveVelocityConstraints"),
	HX_CSTRING("reduced"),
	HX_CSTRING("impulse2"),
	HX_CSTRING("impulse3"),
	HX_CSTRING("initVelocityConstraints"),
	HX_CSTRING("K3"),
	HX_CSTRING("K2"),
	HX_CSTRING("K1"),
	HX_CSTRING("K"),
	HX_CSTRING("getMotorTorque"),
	HX_CSTRING("setMaxMotorTorque"),
	HX_CSTRING("getMotorSpeed"),
	HX_CSTRING("setMotorSpeed"),
	HX_CSTRING("enableMotor"),
	HX_CSTRING("isMotorEnabled"),
	HX_CSTRING("setLimits"),
	HX_CSTRING("getUpperLimit"),
	HX_CSTRING("getLowerLimit"),
	HX_CSTRING("enableLimit"),
	HX_CSTRING("isLimitEnabled"),
	HX_CSTRING("getJointSpeed"),
	HX_CSTRING("getJointAngle"),
	HX_CSTRING("getReactionTorque"),
	HX_CSTRING("getReactionForce"),
	HX_CSTRING("getAnchorB"),
	HX_CSTRING("getAnchorA"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2RevoluteJoint_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2RevoluteJoint_obj::tImpulse,"tImpulse");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2RevoluteJoint_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2RevoluteJoint_obj::tImpulse,"tImpulse");
};

Class B2RevoluteJoint_obj::__mClass;

void B2RevoluteJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.joints.B2RevoluteJoint"), hx::TCanCast< B2RevoluteJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2RevoluteJoint_obj::__boot()
{
	tImpulse= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints
