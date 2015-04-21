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
#ifndef INCLUDED_box2D_dynamics_joints_B2PrismaticJoint
#include <box2D/dynamics/joints/B2PrismaticJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2PrismaticJointDef
#include <box2D/dynamics/joints/B2PrismaticJointDef.h>
#endif
namespace box2D{
namespace dynamics{
namespace joints{

Void B2PrismaticJoint_obj::__construct(::box2D::dynamics::joints::B2PrismaticJointDef def)
{
HX_STACK_PUSH("B2PrismaticJoint::new","box2D/dynamics/joints/B2PrismaticJoint.hx",296);
{
	HX_STACK_LINE(297)
	super::__construct(def);
	HX_STACK_LINE(299)
	this->m_localAnchor1 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(300)
	this->m_localAnchor2 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(301)
	this->m_localXAxis1 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(302)
	this->m_localYAxis1 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(303)
	this->m_axis = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(304)
	this->m_perp = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(305)
	this->m_K = ::box2D::common::math::B2Mat33_obj::__new(null(),null(),null());
	HX_STACK_LINE(306)
	this->m_impulse = ::box2D::common::math::B2Vec3_obj::__new(null(),null(),null());
	HX_STACK_LINE(309)
	::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
	HX_STACK_LINE(310)
	Float tX;		HX_STACK_VAR(tX,"tX");
	HX_STACK_LINE(311)
	Float tY;		HX_STACK_VAR(tY,"tY");
	HX_STACK_LINE(313)
	{
		HX_STACK_LINE(313)
		::box2D::common::math::B2Vec2 _this = this->m_localAnchor1;		HX_STACK_VAR(_this,"_this");
		::box2D::common::math::B2Vec2 v = def->localAnchorA;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(313)
		_this->x = v->x;
		HX_STACK_LINE(313)
		_this->y = v->y;
	}
	HX_STACK_LINE(314)
	{
		HX_STACK_LINE(314)
		::box2D::common::math::B2Vec2 _this = this->m_localAnchor2;		HX_STACK_VAR(_this,"_this");
		::box2D::common::math::B2Vec2 v = def->localAnchorB;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(314)
		_this->x = v->x;
		HX_STACK_LINE(314)
		_this->y = v->y;
	}
	HX_STACK_LINE(315)
	{
		HX_STACK_LINE(315)
		::box2D::common::math::B2Vec2 _this = this->m_localXAxis1;		HX_STACK_VAR(_this,"_this");
		::box2D::common::math::B2Vec2 v = def->localAxisA;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(315)
		_this->x = v->x;
		HX_STACK_LINE(315)
		_this->y = v->y;
	}
	HX_STACK_LINE(318)
	this->m_localYAxis1->x = -(this->m_localXAxis1->y);
	HX_STACK_LINE(319)
	this->m_localYAxis1->y = this->m_localXAxis1->x;
	HX_STACK_LINE(321)
	this->m_refAngle = def->referenceAngle;
	HX_STACK_LINE(323)
	this->m_impulse->setZero();
	HX_STACK_LINE(324)
	this->m_motorMass = 0.0;
	HX_STACK_LINE(325)
	this->m_motorImpulse = 0.0;
	HX_STACK_LINE(327)
	this->m_lowerTranslation = def->lowerTranslation;
	HX_STACK_LINE(328)
	this->m_upperTranslation = def->upperTranslation;
	HX_STACK_LINE(329)
	this->m_maxMotorForce = def->maxMotorForce;
	HX_STACK_LINE(330)
	this->m_motorSpeed = def->motorSpeed;
	HX_STACK_LINE(331)
	this->m_enableLimit = def->enableLimit;
	HX_STACK_LINE(332)
	this->m_enableMotor = def->enableMotor;
	HX_STACK_LINE(333)
	this->m_limitState = ::box2D::dynamics::joints::B2Joint_obj::e_inactiveLimit;
	HX_STACK_LINE(335)
	{
		HX_STACK_LINE(335)
		::box2D::common::math::B2Vec2 _this = this->m_axis;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(335)
		_this->x = 0.0;
		HX_STACK_LINE(335)
		_this->y = 0.0;
	}
	HX_STACK_LINE(336)
	{
		HX_STACK_LINE(336)
		::box2D::common::math::B2Vec2 _this = this->m_perp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(336)
		_this->x = 0.0;
		HX_STACK_LINE(336)
		_this->y = 0.0;
	}
}
;
	return null();
}

B2PrismaticJoint_obj::~B2PrismaticJoint_obj() { }

Dynamic B2PrismaticJoint_obj::__CreateEmpty() { return  new B2PrismaticJoint_obj; }
hx::ObjectPtr< B2PrismaticJoint_obj > B2PrismaticJoint_obj::__new(::box2D::dynamics::joints::B2PrismaticJointDef def)
{  hx::ObjectPtr< B2PrismaticJoint_obj > result = new B2PrismaticJoint_obj();
	result->__construct(def);
	return result;}

Dynamic B2PrismaticJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2PrismaticJoint_obj > result = new B2PrismaticJoint_obj();
	result->__construct(inArgs[0]);
	return result;}

bool B2PrismaticJoint_obj::solvePositionConstraints( Float baumgarte){
	HX_STACK_PUSH("B2PrismaticJoint::solvePositionConstraints","box2D/dynamics/joints/B2PrismaticJoint.hx",605);
	HX_STACK_THIS(this);
	HX_STACK_ARG(baumgarte,"baumgarte");
	HX_STACK_LINE(609)
	Float limitC;		HX_STACK_VAR(limitC,"limitC");
	HX_STACK_LINE(610)
	Float oldLimitImpulse;		HX_STACK_VAR(oldLimitImpulse,"oldLimitImpulse");
	HX_STACK_LINE(612)
	::box2D::dynamics::B2Body bA = this->m_bodyA;		HX_STACK_VAR(bA,"bA");
	HX_STACK_LINE(613)
	::box2D::dynamics::B2Body bB = this->m_bodyB;		HX_STACK_VAR(bB,"bB");
	HX_STACK_LINE(615)
	::box2D::common::math::B2Vec2 c1 = bA->m_sweep->c;		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(616)
	Float a1 = bA->m_sweep->a;		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(618)
	::box2D::common::math::B2Vec2 c2 = bB->m_sweep->c;		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(619)
	Float a2 = bB->m_sweep->a;		HX_STACK_VAR(a2,"a2");
	HX_STACK_LINE(621)
	::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
	HX_STACK_LINE(622)
	Float tX;		HX_STACK_VAR(tX,"tX");
	HX_STACK_LINE(624)
	Float m1;		HX_STACK_VAR(m1,"m1");
	HX_STACK_LINE(625)
	Float m2;		HX_STACK_VAR(m2,"m2");
	HX_STACK_LINE(626)
	Float i1;		HX_STACK_VAR(i1,"i1");
	HX_STACK_LINE(627)
	Float i2;		HX_STACK_VAR(i2,"i2");
	HX_STACK_LINE(630)
	Float linearError = 0.0;		HX_STACK_VAR(linearError,"linearError");
	HX_STACK_LINE(631)
	Float angularError = 0.0;		HX_STACK_VAR(angularError,"angularError");
	HX_STACK_LINE(632)
	bool active = false;		HX_STACK_VAR(active,"active");
	HX_STACK_LINE(633)
	Float C2 = 0.0;		HX_STACK_VAR(C2,"C2");
	HX_STACK_LINE(635)
	::box2D::common::math::B2Mat22 R1 = ::box2D::common::math::B2Mat22_obj::fromAngle(a1);		HX_STACK_VAR(R1,"R1");
	HX_STACK_LINE(636)
	::box2D::common::math::B2Mat22 R2 = ::box2D::common::math::B2Mat22_obj::fromAngle(a2);		HX_STACK_VAR(R2,"R2");
	HX_STACK_LINE(639)
	tMat = R1;
	HX_STACK_LINE(640)
	Float r1X = (this->m_localAnchor1->x - this->m_localCenterA->x);		HX_STACK_VAR(r1X,"r1X");
	HX_STACK_LINE(641)
	Float r1Y = (this->m_localAnchor1->y - this->m_localCenterA->y);		HX_STACK_VAR(r1Y,"r1Y");
	HX_STACK_LINE(642)
	tX = ((tMat->col1->x * r1X) + (tMat->col2->x * r1Y));
	HX_STACK_LINE(643)
	r1Y = ((tMat->col1->y * r1X) + (tMat->col2->y * r1Y));
	HX_STACK_LINE(644)
	r1X = tX;
	HX_STACK_LINE(646)
	tMat = R2;
	HX_STACK_LINE(647)
	Float r2X = (this->m_localAnchor2->x - this->m_localCenterB->x);		HX_STACK_VAR(r2X,"r2X");
	HX_STACK_LINE(648)
	Float r2Y = (this->m_localAnchor2->y - this->m_localCenterB->y);		HX_STACK_VAR(r2Y,"r2Y");
	HX_STACK_LINE(649)
	tX = ((tMat->col1->x * r2X) + (tMat->col2->x * r2Y));
	HX_STACK_LINE(650)
	r2Y = ((tMat->col1->y * r2X) + (tMat->col2->y * r2Y));
	HX_STACK_LINE(651)
	r2X = tX;
	HX_STACK_LINE(653)
	Float dX = (((c2->x + r2X) - c1->x) - r1X);		HX_STACK_VAR(dX,"dX");
	HX_STACK_LINE(654)
	Float dY = (((c2->y + r2Y) - c1->y) - r1Y);		HX_STACK_VAR(dY,"dY");
	HX_STACK_LINE(656)
	if ((this->m_enableLimit)){
		HX_STACK_LINE(658)
		this->m_axis = ::box2D::common::math::B2Math_obj::mulMV(R1,this->m_localXAxis1,null());
		HX_STACK_LINE(661)
		this->m_a1 = ((((dX + r1X)) * this->m_axis->y) - (((dY + r1Y)) * this->m_axis->x));
		HX_STACK_LINE(663)
		this->m_a2 = ((r2X * this->m_axis->y) - (r2Y * this->m_axis->x));
		HX_STACK_LINE(665)
		Float translation = ((this->m_axis->x * dX) + (this->m_axis->y * dY));		HX_STACK_VAR(translation,"translation");
		HX_STACK_LINE(666)
		if (((::box2D::common::math::B2Math_obj::abs((this->m_upperTranslation - this->m_lowerTranslation)) < (2.0 * ::box2D::common::B2Settings_obj::b2_linearSlop)))){
			HX_STACK_LINE(669)
			C2 = ::box2D::common::math::B2Math_obj::clamp(translation,-(::box2D::common::B2Settings_obj::b2_maxLinearCorrection),::box2D::common::B2Settings_obj::b2_maxLinearCorrection);
			HX_STACK_LINE(670)
			linearError = ::box2D::common::math::B2Math_obj::abs(translation);
			HX_STACK_LINE(671)
			active = true;
		}
		else{
			HX_STACK_LINE(673)
			if (((translation <= this->m_lowerTranslation))){
				HX_STACK_LINE(676)
				C2 = ::box2D::common::math::B2Math_obj::clamp(((translation - this->m_lowerTranslation) + ::box2D::common::B2Settings_obj::b2_linearSlop),-(::box2D::common::B2Settings_obj::b2_maxLinearCorrection),0.0);
				HX_STACK_LINE(677)
				linearError = (this->m_lowerTranslation - translation);
				HX_STACK_LINE(678)
				active = true;
			}
			else{
				HX_STACK_LINE(680)
				if (((translation >= this->m_upperTranslation))){
					HX_STACK_LINE(683)
					C2 = ::box2D::common::math::B2Math_obj::clamp(((translation - this->m_upperTranslation) + ::box2D::common::B2Settings_obj::b2_linearSlop),0.0,::box2D::common::B2Settings_obj::b2_maxLinearCorrection);
					HX_STACK_LINE(684)
					linearError = (translation - this->m_upperTranslation);
					HX_STACK_LINE(685)
					active = true;
				}
			}
		}
	}
	HX_STACK_LINE(689)
	this->m_perp = ::box2D::common::math::B2Math_obj::mulMV(R1,this->m_localYAxis1,null());
	HX_STACK_LINE(692)
	this->m_s1 = ((((dX + r1X)) * this->m_perp->y) - (((dY + r1Y)) * this->m_perp->x));
	HX_STACK_LINE(694)
	this->m_s2 = ((r2X * this->m_perp->y) - (r2Y * this->m_perp->x));
	HX_STACK_LINE(696)
	::box2D::common::math::B2Vec3 impulse = ::box2D::common::math::B2Vec3_obj::__new(null(),null(),null());		HX_STACK_VAR(impulse,"impulse");
	HX_STACK_LINE(697)
	Float C1X = ((this->m_perp->x * dX) + (this->m_perp->y * dY));		HX_STACK_VAR(C1X,"C1X");
	HX_STACK_LINE(698)
	Float C1Y = ((a2 - a1) - this->m_refAngle);		HX_STACK_VAR(C1Y,"C1Y");
	HX_STACK_LINE(700)
	linearError = ::box2D::common::math::B2Math_obj::max(linearError,::box2D::common::math::B2Math_obj::abs(C1X));
	HX_STACK_LINE(701)
	angularError = ::box2D::common::math::B2Math_obj::abs(C1Y);
	HX_STACK_LINE(703)
	if ((active)){
		HX_STACK_LINE(705)
		m1 = this->m_invMassA;
		HX_STACK_LINE(706)
		m2 = this->m_invMassB;
		HX_STACK_LINE(707)
		i1 = this->m_invIA;
		HX_STACK_LINE(708)
		i2 = this->m_invIB;
		HX_STACK_LINE(710)
		this->m_K->col1->x = (((m1 + m2) + ((i1 * this->m_s1) * this->m_s1)) + ((i2 * this->m_s2) * this->m_s2));
		HX_STACK_LINE(711)
		this->m_K->col1->y = ((i1 * this->m_s1) + (i2 * this->m_s2));
		HX_STACK_LINE(712)
		this->m_K->col1->z = (((i1 * this->m_s1) * this->m_a1) + ((i2 * this->m_s2) * this->m_a2));
		HX_STACK_LINE(713)
		this->m_K->col2->x = this->m_K->col1->y;
		HX_STACK_LINE(714)
		this->m_K->col2->y = (i1 + i2);
		HX_STACK_LINE(715)
		this->m_K->col2->z = ((i1 * this->m_a1) + (i2 * this->m_a2));
		HX_STACK_LINE(716)
		this->m_K->col3->x = this->m_K->col1->z;
		HX_STACK_LINE(717)
		this->m_K->col3->y = this->m_K->col2->z;
		HX_STACK_LINE(718)
		this->m_K->col3->z = (((m1 + m2) + ((i1 * this->m_a1) * this->m_a1)) + ((i2 * this->m_a2) * this->m_a2));
		HX_STACK_LINE(720)
		this->m_K->solve33(impulse,-(C1X),-(C1Y),-(C2));
	}
	else{
		HX_STACK_LINE(724)
		m1 = this->m_invMassA;
		HX_STACK_LINE(725)
		m2 = this->m_invMassB;
		HX_STACK_LINE(726)
		i1 = this->m_invIA;
		HX_STACK_LINE(727)
		i2 = this->m_invIB;
		HX_STACK_LINE(729)
		Float k11 = (((m1 + m2) + ((i1 * this->m_s1) * this->m_s1)) + ((i2 * this->m_s2) * this->m_s2));		HX_STACK_VAR(k11,"k11");
		HX_STACK_LINE(730)
		Float k12 = ((i1 * this->m_s1) + (i2 * this->m_s2));		HX_STACK_VAR(k12,"k12");
		HX_STACK_LINE(731)
		Float k22 = (i1 + i2);		HX_STACK_VAR(k22,"k22");
		HX_STACK_LINE(733)
		this->m_K->col1->set(k11,k12,0.0);
		HX_STACK_LINE(734)
		this->m_K->col2->set(k12,k22,0.0);
		HX_STACK_LINE(736)
		::box2D::common::math::B2Vec2 impulse1 = this->m_K->solve22(::box2D::common::math::B2Vec2_obj::__new(null(),null()),-(C1X),-(C1Y));		HX_STACK_VAR(impulse1,"impulse1");
		HX_STACK_LINE(737)
		impulse->x = impulse1->x;
		HX_STACK_LINE(738)
		impulse->y = impulse1->y;
		HX_STACK_LINE(739)
		impulse->z = 0.0;
	}
	HX_STACK_LINE(742)
	Float PX = ((impulse->x * this->m_perp->x) + (impulse->z * this->m_axis->x));		HX_STACK_VAR(PX,"PX");
	HX_STACK_LINE(743)
	Float PY = ((impulse->x * this->m_perp->y) + (impulse->z * this->m_axis->y));		HX_STACK_VAR(PY,"PY");
	HX_STACK_LINE(744)
	Float L1 = (((impulse->x * this->m_s1) + impulse->y) + (impulse->z * this->m_a1));		HX_STACK_VAR(L1,"L1");
	HX_STACK_LINE(745)
	Float L2 = (((impulse->x * this->m_s2) + impulse->y) + (impulse->z * this->m_a2));		HX_STACK_VAR(L2,"L2");
	HX_STACK_LINE(747)
	hx::SubEq(c1->x,(this->m_invMassA * PX));
	HX_STACK_LINE(748)
	hx::SubEq(c1->y,(this->m_invMassA * PY));
	HX_STACK_LINE(749)
	hx::SubEq(a1,(this->m_invIA * L1));
	HX_STACK_LINE(751)
	hx::AddEq(c2->x,(this->m_invMassB * PX));
	HX_STACK_LINE(752)
	hx::AddEq(c2->y,(this->m_invMassB * PY));
	HX_STACK_LINE(753)
	hx::AddEq(a2,(this->m_invIB * L2));
	HX_STACK_LINE(757)
	bA->m_sweep->a = a1;
	HX_STACK_LINE(759)
	bB->m_sweep->a = a2;
	HX_STACK_LINE(760)
	bA->synchronizeTransform();
	HX_STACK_LINE(761)
	bB->synchronizeTransform();
	HX_STACK_LINE(763)
	return (bool((linearError <= ::box2D::common::B2Settings_obj::b2_linearSlop)) && bool((angularError <= ::box2D::common::B2Settings_obj::b2_angularSlop)));
}


Void B2PrismaticJoint_obj::solveVelocityConstraints( ::box2D::dynamics::B2TimeStep step){
{
		HX_STACK_PUSH("B2PrismaticJoint::solveVelocityConstraints","box2D/dynamics/joints/B2PrismaticJoint.hx",487);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
		HX_STACK_LINE(488)
		::box2D::dynamics::B2Body bA = this->m_bodyA;		HX_STACK_VAR(bA,"bA");
		HX_STACK_LINE(489)
		::box2D::dynamics::B2Body bB = this->m_bodyB;		HX_STACK_VAR(bB,"bB");
		HX_STACK_LINE(491)
		::box2D::common::math::B2Vec2 v1 = bA->m_linearVelocity;		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(492)
		Float w1 = bA->m_angularVelocity;		HX_STACK_VAR(w1,"w1");
		HX_STACK_LINE(493)
		::box2D::common::math::B2Vec2 v2 = bB->m_linearVelocity;		HX_STACK_VAR(v2,"v2");
		HX_STACK_LINE(494)
		Float w2 = bB->m_angularVelocity;		HX_STACK_VAR(w2,"w2");
		HX_STACK_LINE(496)
		Float PX;		HX_STACK_VAR(PX,"PX");
		HX_STACK_LINE(497)
		Float PY;		HX_STACK_VAR(PY,"PY");
		HX_STACK_LINE(498)
		Float L1;		HX_STACK_VAR(L1,"L1");
		HX_STACK_LINE(499)
		Float L2;		HX_STACK_VAR(L2,"L2");
		HX_STACK_LINE(502)
		if (((bool(this->m_enableMotor) && bool((this->m_limitState != ::box2D::dynamics::joints::B2Joint_obj::e_equalLimits))))){
			HX_STACK_LINE(505)
			Float Cdot = ((((this->m_axis->x * ((v2->x - v1->x))) + (this->m_axis->y * ((v2->y - v1->y)))) + (this->m_a2 * w2)) - (this->m_a1 * w1));		HX_STACK_VAR(Cdot,"Cdot");
			HX_STACK_LINE(506)
			Float impulse = (this->m_motorMass * ((this->m_motorSpeed - Cdot)));		HX_STACK_VAR(impulse,"impulse");
			HX_STACK_LINE(507)
			Float oldImpulse = this->m_motorImpulse;		HX_STACK_VAR(oldImpulse,"oldImpulse");
			HX_STACK_LINE(508)
			Float maxImpulse = (step->dt * this->m_maxMotorForce);		HX_STACK_VAR(maxImpulse,"maxImpulse");
			HX_STACK_LINE(509)
			this->m_motorImpulse = ::box2D::common::math::B2Math_obj::clamp((this->m_motorImpulse + impulse),-(maxImpulse),maxImpulse);
			HX_STACK_LINE(510)
			impulse = (this->m_motorImpulse - oldImpulse);
			HX_STACK_LINE(512)
			PX = (impulse * this->m_axis->x);
			HX_STACK_LINE(513)
			PY = (impulse * this->m_axis->y);
			HX_STACK_LINE(514)
			L1 = (impulse * this->m_a1);
			HX_STACK_LINE(515)
			L2 = (impulse * this->m_a2);
			HX_STACK_LINE(517)
			hx::SubEq(v1->x,(this->m_invMassA * PX));
			HX_STACK_LINE(518)
			hx::SubEq(v1->y,(this->m_invMassA * PY));
			HX_STACK_LINE(519)
			hx::SubEq(w1,(this->m_invIA * L1));
			HX_STACK_LINE(521)
			hx::AddEq(v2->x,(this->m_invMassB * PX));
			HX_STACK_LINE(522)
			hx::AddEq(v2->y,(this->m_invMassB * PY));
			HX_STACK_LINE(523)
			hx::AddEq(w2,(this->m_invIB * L2));
		}
		HX_STACK_LINE(527)
		Float Cdot1X = ((((this->m_perp->x * ((v2->x - v1->x))) + (this->m_perp->y * ((v2->y - v1->y)))) + (this->m_s2 * w2)) - (this->m_s1 * w1));		HX_STACK_VAR(Cdot1X,"Cdot1X");
		HX_STACK_LINE(528)
		Float Cdot1Y = (w2 - w1);		HX_STACK_VAR(Cdot1Y,"Cdot1Y");
		HX_STACK_LINE(530)
		if (((bool(this->m_enableLimit) && bool((this->m_limitState != ::box2D::dynamics::joints::B2Joint_obj::e_inactiveLimit))))){
			HX_STACK_LINE(534)
			Float Cdot2 = ((((this->m_axis->x * ((v2->x - v1->x))) + (this->m_axis->y * ((v2->y - v1->y)))) + (this->m_a2 * w2)) - (this->m_a1 * w1));		HX_STACK_VAR(Cdot2,"Cdot2");
			HX_STACK_LINE(536)
			::box2D::common::math::B2Vec3 f1 = this->m_impulse->copy();		HX_STACK_VAR(f1,"f1");
			HX_STACK_LINE(537)
			::box2D::common::math::B2Vec3 df = this->m_K->solve33(::box2D::common::math::B2Vec3_obj::__new(null(),null(),null()),-(Cdot1X),-(Cdot1Y),-(Cdot2));		HX_STACK_VAR(df,"df");
			HX_STACK_LINE(539)
			this->m_impulse->add(df);
			HX_STACK_LINE(541)
			if (((this->m_limitState == ::box2D::dynamics::joints::B2Joint_obj::e_atLowerLimit))){
				HX_STACK_LINE(542)
				this->m_impulse->z = ::box2D::common::math::B2Math_obj::max(this->m_impulse->z,0.0);
			}
			else{
				HX_STACK_LINE(545)
				if (((this->m_limitState == ::box2D::dynamics::joints::B2Joint_obj::e_atUpperLimit))){
					HX_STACK_LINE(546)
					this->m_impulse->z = ::box2D::common::math::B2Math_obj::min(this->m_impulse->z,0.0);
				}
			}
			HX_STACK_LINE(552)
			Float bX = (-(Cdot1X) - (((this->m_impulse->z - f1->z)) * this->m_K->col3->x));		HX_STACK_VAR(bX,"bX");
			HX_STACK_LINE(553)
			Float bY = (-(Cdot1Y) - (((this->m_impulse->z - f1->z)) * this->m_K->col3->y));		HX_STACK_VAR(bY,"bY");
			HX_STACK_LINE(554)
			::box2D::common::math::B2Vec2 f2r = this->m_K->solve22(::box2D::common::math::B2Vec2_obj::__new(null(),null()),bX,bY);		HX_STACK_VAR(f2r,"f2r");
			HX_STACK_LINE(555)
			hx::AddEq(f2r->x,f1->x);
			HX_STACK_LINE(556)
			hx::AddEq(f2r->y,f1->y);
			HX_STACK_LINE(557)
			this->m_impulse->x = f2r->x;
			HX_STACK_LINE(558)
			this->m_impulse->y = f2r->y;
			HX_STACK_LINE(560)
			df->x = (this->m_impulse->x - f1->x);
			HX_STACK_LINE(561)
			df->y = (this->m_impulse->y - f1->y);
			HX_STACK_LINE(562)
			df->z = (this->m_impulse->z - f1->z);
			HX_STACK_LINE(564)
			PX = ((df->x * this->m_perp->x) + (df->z * this->m_axis->x));
			HX_STACK_LINE(565)
			PY = ((df->x * this->m_perp->y) + (df->z * this->m_axis->y));
			HX_STACK_LINE(566)
			L1 = (((df->x * this->m_s1) + df->y) + (df->z * this->m_a1));
			HX_STACK_LINE(567)
			L2 = (((df->x * this->m_s2) + df->y) + (df->z * this->m_a2));
			HX_STACK_LINE(569)
			hx::SubEq(v1->x,(this->m_invMassA * PX));
			HX_STACK_LINE(570)
			hx::SubEq(v1->y,(this->m_invMassA * PY));
			HX_STACK_LINE(571)
			hx::SubEq(w1,(this->m_invIA * L1));
			HX_STACK_LINE(573)
			hx::AddEq(v2->x,(this->m_invMassB * PX));
			HX_STACK_LINE(574)
			hx::AddEq(v2->y,(this->m_invMassB * PY));
			HX_STACK_LINE(575)
			hx::AddEq(w2,(this->m_invIB * L2));
		}
		else{
			HX_STACK_LINE(580)
			::box2D::common::math::B2Vec2 df2 = this->m_K->solve22(::box2D::common::math::B2Vec2_obj::__new(null(),null()),-(Cdot1X),-(Cdot1Y));		HX_STACK_VAR(df2,"df2");
			HX_STACK_LINE(581)
			hx::AddEq(this->m_impulse->x,df2->x);
			HX_STACK_LINE(582)
			hx::AddEq(this->m_impulse->y,df2->y);
			HX_STACK_LINE(584)
			PX = (df2->x * this->m_perp->x);
			HX_STACK_LINE(585)
			PY = (df2->x * this->m_perp->y);
			HX_STACK_LINE(586)
			L1 = ((df2->x * this->m_s1) + df2->y);
			HX_STACK_LINE(587)
			L2 = ((df2->x * this->m_s2) + df2->y);
			HX_STACK_LINE(589)
			hx::SubEq(v1->x,(this->m_invMassA * PX));
			HX_STACK_LINE(590)
			hx::SubEq(v1->y,(this->m_invMassA * PY));
			HX_STACK_LINE(591)
			hx::SubEq(w1,(this->m_invIA * L1));
			HX_STACK_LINE(593)
			hx::AddEq(v2->x,(this->m_invMassB * PX));
			HX_STACK_LINE(594)
			hx::AddEq(v2->y,(this->m_invMassB * PY));
			HX_STACK_LINE(595)
			hx::AddEq(w2,(this->m_invIB * L2));
		}
		HX_STACK_LINE(598)
		{
			HX_STACK_LINE(598)
			::box2D::common::math::B2Vec2 _this = bA->m_linearVelocity;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(598)
			_this->x = v1->x;
			HX_STACK_LINE(598)
			_this->y = v1->y;
		}
		HX_STACK_LINE(599)
		bA->m_angularVelocity = w1;
		HX_STACK_LINE(600)
		{
			HX_STACK_LINE(600)
			::box2D::common::math::B2Vec2 _this = bB->m_linearVelocity;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(600)
			_this->x = v2->x;
			HX_STACK_LINE(600)
			_this->y = v2->y;
		}
		HX_STACK_LINE(601)
		bB->m_angularVelocity = w2;
	}
return null();
}


Void B2PrismaticJoint_obj::initVelocityConstraints( ::box2D::dynamics::B2TimeStep step){
{
		HX_STACK_PUSH("B2PrismaticJoint::initVelocityConstraints","box2D/dynamics/joints/B2PrismaticJoint.hx",339);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
		HX_STACK_LINE(340)
		::box2D::dynamics::B2Body bA = this->m_bodyA;		HX_STACK_VAR(bA,"bA");
		HX_STACK_LINE(341)
		::box2D::dynamics::B2Body bB = this->m_bodyB;		HX_STACK_VAR(bB,"bB");
		HX_STACK_LINE(343)
		::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
		HX_STACK_LINE(344)
		Float tX;		HX_STACK_VAR(tX,"tX");
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(346)
			::box2D::common::math::B2Vec2 _this = this->m_localCenterA;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = bA->getLocalCenter();		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(346)
			_this->x = v->x;
			HX_STACK_LINE(346)
			_this->y = v->y;
		}
		HX_STACK_LINE(347)
		{
			HX_STACK_LINE(347)
			::box2D::common::math::B2Vec2 _this = this->m_localCenterB;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = bB->getLocalCenter();		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(347)
			_this->x = v->x;
			HX_STACK_LINE(347)
			_this->y = v->y;
		}
		HX_STACK_LINE(349)
		::box2D::common::math::B2Transform xf1 = bA->getTransform();		HX_STACK_VAR(xf1,"xf1");
		HX_STACK_LINE(350)
		::box2D::common::math::B2Transform xf2 = bB->getTransform();		HX_STACK_VAR(xf2,"xf2");
		HX_STACK_LINE(354)
		tMat = bA->m_xf->R;
		HX_STACK_LINE(355)
		Float r1X = (this->m_localAnchor1->x - this->m_localCenterA->x);		HX_STACK_VAR(r1X,"r1X");
		HX_STACK_LINE(356)
		Float r1Y = (this->m_localAnchor1->y - this->m_localCenterA->y);		HX_STACK_VAR(r1Y,"r1Y");
		HX_STACK_LINE(357)
		tX = ((tMat->col1->x * r1X) + (tMat->col2->x * r1Y));
		HX_STACK_LINE(358)
		r1Y = ((tMat->col1->y * r1X) + (tMat->col2->y * r1Y));
		HX_STACK_LINE(359)
		r1X = tX;
		HX_STACK_LINE(361)
		tMat = bB->m_xf->R;
		HX_STACK_LINE(362)
		Float r2X = (this->m_localAnchor2->x - this->m_localCenterB->x);		HX_STACK_VAR(r2X,"r2X");
		HX_STACK_LINE(363)
		Float r2Y = (this->m_localAnchor2->y - this->m_localCenterB->y);		HX_STACK_VAR(r2Y,"r2Y");
		HX_STACK_LINE(364)
		tX = ((tMat->col1->x * r2X) + (tMat->col2->x * r2Y));
		HX_STACK_LINE(365)
		r2Y = ((tMat->col1->y * r2X) + (tMat->col2->y * r2Y));
		HX_STACK_LINE(366)
		r2X = tX;
		HX_STACK_LINE(369)
		Float dX = (((bB->m_sweep->c->x + r2X) - bA->m_sweep->c->x) - r1X);		HX_STACK_VAR(dX,"dX");
		HX_STACK_LINE(370)
		Float dY = (((bB->m_sweep->c->y + r2Y) - bA->m_sweep->c->y) - r1Y);		HX_STACK_VAR(dY,"dY");
		HX_STACK_LINE(372)
		this->m_invMassA = bA->m_invMass;
		HX_STACK_LINE(373)
		this->m_invMassB = bB->m_invMass;
		HX_STACK_LINE(374)
		this->m_invIA = bA->m_invI;
		HX_STACK_LINE(375)
		this->m_invIB = bB->m_invI;
		HX_STACK_LINE(378)
		{
			HX_STACK_LINE(379)
			{
				HX_STACK_LINE(379)
				::box2D::common::math::B2Vec2 _this = this->m_axis;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = ::box2D::common::math::B2Math_obj::mulMV(xf1->R,this->m_localXAxis1,null());		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(379)
				_this->x = v->x;
				HX_STACK_LINE(379)
				_this->y = v->y;
			}
			HX_STACK_LINE(381)
			this->m_a1 = ((((dX + r1X)) * this->m_axis->y) - (((dY + r1Y)) * this->m_axis->x));
			HX_STACK_LINE(383)
			this->m_a2 = ((r2X * this->m_axis->y) - (r2Y * this->m_axis->x));
			HX_STACK_LINE(385)
			this->m_motorMass = (((this->m_invMassA + this->m_invMassB) + ((this->m_invIA * this->m_a1) * this->m_a1)) + ((this->m_invIB * this->m_a2) * this->m_a2));
			HX_STACK_LINE(386)
			if (((this->m_motorMass > 2.2250738585072014e-308))){
				HX_STACK_LINE(387)
				this->m_motorMass = (Float(1.0) / Float(this->m_motorMass));
			}
		}
		HX_STACK_LINE(391)
		{
			HX_STACK_LINE(392)
			{
				HX_STACK_LINE(392)
				::box2D::common::math::B2Vec2 _this = this->m_perp;		HX_STACK_VAR(_this,"_this");
				::box2D::common::math::B2Vec2 v = ::box2D::common::math::B2Math_obj::mulMV(xf1->R,this->m_localYAxis1,null());		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(392)
				_this->x = v->x;
				HX_STACK_LINE(392)
				_this->y = v->y;
			}
			HX_STACK_LINE(394)
			this->m_s1 = ((((dX + r1X)) * this->m_perp->y) - (((dY + r1Y)) * this->m_perp->x));
			HX_STACK_LINE(396)
			this->m_s2 = ((r2X * this->m_perp->y) - (r2Y * this->m_perp->x));
			HX_STACK_LINE(398)
			Float m1 = this->m_invMassA;		HX_STACK_VAR(m1,"m1");
			HX_STACK_LINE(399)
			Float m2 = this->m_invMassB;		HX_STACK_VAR(m2,"m2");
			HX_STACK_LINE(400)
			Float i1 = this->m_invIA;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(401)
			Float i2 = this->m_invIB;		HX_STACK_VAR(i2,"i2");
			HX_STACK_LINE(403)
			this->m_K->col1->x = (((m1 + m2) + ((i1 * this->m_s1) * this->m_s1)) + ((i2 * this->m_s2) * this->m_s2));
			HX_STACK_LINE(404)
			this->m_K->col1->y = ((i1 * this->m_s1) + (i2 * this->m_s2));
			HX_STACK_LINE(405)
			this->m_K->col1->z = (((i1 * this->m_s1) * this->m_a1) + ((i2 * this->m_s2) * this->m_a2));
			HX_STACK_LINE(406)
			this->m_K->col2->x = this->m_K->col1->y;
			HX_STACK_LINE(407)
			this->m_K->col2->y = (i1 + i2);
			HX_STACK_LINE(408)
			this->m_K->col2->z = ((i1 * this->m_a1) + (i2 * this->m_a2));
			HX_STACK_LINE(409)
			this->m_K->col3->x = this->m_K->col1->z;
			HX_STACK_LINE(410)
			this->m_K->col3->y = this->m_K->col2->z;
			HX_STACK_LINE(411)
			this->m_K->col3->z = (((m1 + m2) + ((i1 * this->m_a1) * this->m_a1)) + ((i2 * this->m_a2) * this->m_a2));
		}
		HX_STACK_LINE(415)
		if ((this->m_enableLimit)){
			HX_STACK_LINE(418)
			Float jointTransition = ((this->m_axis->x * dX) + (this->m_axis->y * dY));		HX_STACK_VAR(jointTransition,"jointTransition");
			HX_STACK_LINE(419)
			if (((::box2D::common::math::B2Math_obj::abs((this->m_upperTranslation - this->m_lowerTranslation)) < (2.0 * ::box2D::common::B2Settings_obj::b2_linearSlop)))){
				HX_STACK_LINE(420)
				this->m_limitState = ::box2D::dynamics::joints::B2Joint_obj::e_equalLimits;
			}
			else{
				HX_STACK_LINE(423)
				if (((jointTransition <= this->m_lowerTranslation))){
					HX_STACK_LINE(424)
					if (((this->m_limitState != ::box2D::dynamics::joints::B2Joint_obj::e_atLowerLimit))){
						HX_STACK_LINE(427)
						this->m_limitState = ::box2D::dynamics::joints::B2Joint_obj::e_atLowerLimit;
						HX_STACK_LINE(428)
						this->m_impulse->z = 0.0;
					}
				}
				else{
					HX_STACK_LINE(431)
					if (((jointTransition >= this->m_upperTranslation))){
						HX_STACK_LINE(432)
						if (((this->m_limitState != ::box2D::dynamics::joints::B2Joint_obj::e_atUpperLimit))){
							HX_STACK_LINE(435)
							this->m_limitState = ::box2D::dynamics::joints::B2Joint_obj::e_atUpperLimit;
							HX_STACK_LINE(436)
							this->m_impulse->z = 0.0;
						}
					}
					else{
						HX_STACK_LINE(441)
						this->m_limitState = ::box2D::dynamics::joints::B2Joint_obj::e_inactiveLimit;
						HX_STACK_LINE(442)
						this->m_impulse->z = 0.0;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(446)
			this->m_limitState = ::box2D::dynamics::joints::B2Joint_obj::e_inactiveLimit;
		}
		HX_STACK_LINE(450)
		if (((this->m_enableMotor == false))){
			HX_STACK_LINE(451)
			this->m_motorImpulse = 0.0;
		}
		HX_STACK_LINE(455)
		if ((step->warmStarting)){
			HX_STACK_LINE(458)
			hx::MultEq(this->m_impulse->x,step->dtRatio);
			HX_STACK_LINE(459)
			hx::MultEq(this->m_impulse->y,step->dtRatio);
			HX_STACK_LINE(460)
			hx::MultEq(this->m_motorImpulse,step->dtRatio);
			HX_STACK_LINE(463)
			Float PX = ((this->m_impulse->x * this->m_perp->x) + (((this->m_motorImpulse + this->m_impulse->z)) * this->m_axis->x));		HX_STACK_VAR(PX,"PX");
			HX_STACK_LINE(464)
			Float PY = ((this->m_impulse->x * this->m_perp->y) + (((this->m_motorImpulse + this->m_impulse->z)) * this->m_axis->y));		HX_STACK_VAR(PY,"PY");
			HX_STACK_LINE(465)
			Float L1 = (((this->m_impulse->x * this->m_s1) + this->m_impulse->y) + (((this->m_motorImpulse + this->m_impulse->z)) * this->m_a1));		HX_STACK_VAR(L1,"L1");
			HX_STACK_LINE(466)
			Float L2 = (((this->m_impulse->x * this->m_s2) + this->m_impulse->y) + (((this->m_motorImpulse + this->m_impulse->z)) * this->m_a2));		HX_STACK_VAR(L2,"L2");
			HX_STACK_LINE(469)
			hx::SubEq(bA->m_linearVelocity->x,(this->m_invMassA * PX));
			HX_STACK_LINE(470)
			hx::SubEq(bA->m_linearVelocity->y,(this->m_invMassA * PY));
			HX_STACK_LINE(472)
			hx::SubEq(bA->m_angularVelocity,(this->m_invIA * L1));
			HX_STACK_LINE(475)
			hx::AddEq(bB->m_linearVelocity->x,(this->m_invMassB * PX));
			HX_STACK_LINE(476)
			hx::AddEq(bB->m_linearVelocity->y,(this->m_invMassB * PY));
			HX_STACK_LINE(478)
			hx::AddEq(bB->m_angularVelocity,(this->m_invIB * L2));
		}
		else{
			HX_STACK_LINE(482)
			this->m_impulse->setZero();
			HX_STACK_LINE(483)
			this->m_motorImpulse = 0.0;
		}
	}
return null();
}


Float B2PrismaticJoint_obj::getMotorForce( ){
	HX_STACK_PUSH("B2PrismaticJoint::getMotorForce","box2D/dynamics/joints/B2PrismaticJoint.hx",288);
	HX_STACK_THIS(this);
	HX_STACK_LINE(288)
	return this->m_motorImpulse;
}


HX_DEFINE_DYNAMIC_FUNC0(B2PrismaticJoint_obj,getMotorForce,return )

Void B2PrismaticJoint_obj::setMaxMotorForce( Float force){
{
		HX_STACK_PUSH("B2PrismaticJoint::setMaxMotorForce","box2D/dynamics/joints/B2PrismaticJoint.hx",279);
		HX_STACK_THIS(this);
		HX_STACK_ARG(force,"force");
		HX_STACK_LINE(280)
		this->m_bodyA->setAwake(true);
		HX_STACK_LINE(281)
		this->m_bodyB->setAwake(true);
		HX_STACK_LINE(282)
		this->m_maxMotorForce = force;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2PrismaticJoint_obj,setMaxMotorForce,(void))

Float B2PrismaticJoint_obj::getMotorSpeed( ){
	HX_STACK_PUSH("B2PrismaticJoint::getMotorSpeed","box2D/dynamics/joints/B2PrismaticJoint.hx",271);
	HX_STACK_THIS(this);
	HX_STACK_LINE(271)
	return this->m_motorSpeed;
}


HX_DEFINE_DYNAMIC_FUNC0(B2PrismaticJoint_obj,getMotorSpeed,return )

Void B2PrismaticJoint_obj::setMotorSpeed( Float speed){
{
		HX_STACK_PUSH("B2PrismaticJoint::setMotorSpeed","box2D/dynamics/joints/B2PrismaticJoint.hx",262);
		HX_STACK_THIS(this);
		HX_STACK_ARG(speed,"speed");
		HX_STACK_LINE(263)
		this->m_bodyA->setAwake(true);
		HX_STACK_LINE(264)
		this->m_bodyB->setAwake(true);
		HX_STACK_LINE(265)
		this->m_motorSpeed = speed;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2PrismaticJoint_obj,setMotorSpeed,(void))

Void B2PrismaticJoint_obj::enableMotor( bool flag){
{
		HX_STACK_PUSH("B2PrismaticJoint::enableMotor","box2D/dynamics/joints/B2PrismaticJoint.hx",253);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flag,"flag");
		HX_STACK_LINE(254)
		this->m_bodyA->setAwake(true);
		HX_STACK_LINE(255)
		this->m_bodyB->setAwake(true);
		HX_STACK_LINE(256)
		this->m_enableMotor = flag;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2PrismaticJoint_obj,enableMotor,(void))

bool B2PrismaticJoint_obj::isMotorEnabled( ){
	HX_STACK_PUSH("B2PrismaticJoint::isMotorEnabled","box2D/dynamics/joints/B2PrismaticJoint.hx",246);
	HX_STACK_THIS(this);
	HX_STACK_LINE(246)
	return this->m_enableMotor;
}


HX_DEFINE_DYNAMIC_FUNC0(B2PrismaticJoint_obj,isMotorEnabled,return )

Void B2PrismaticJoint_obj::setLimits( Float lower,Float upper){
{
		HX_STACK_PUSH("B2PrismaticJoint::setLimits","box2D/dynamics/joints/B2PrismaticJoint.hx",235);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lower,"lower");
		HX_STACK_ARG(upper,"upper");
		HX_STACK_LINE(237)
		this->m_bodyA->setAwake(true);
		HX_STACK_LINE(238)
		this->m_bodyB->setAwake(true);
		HX_STACK_LINE(239)
		this->m_lowerTranslation = lower;
		HX_STACK_LINE(240)
		this->m_upperTranslation = upper;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2PrismaticJoint_obj,setLimits,(void))

Float B2PrismaticJoint_obj::getUpperLimit( ){
	HX_STACK_PUSH("B2PrismaticJoint::getUpperLimit","box2D/dynamics/joints/B2PrismaticJoint.hx",228);
	HX_STACK_THIS(this);
	HX_STACK_LINE(228)
	return this->m_upperTranslation;
}


HX_DEFINE_DYNAMIC_FUNC0(B2PrismaticJoint_obj,getUpperLimit,return )

Float B2PrismaticJoint_obj::getLowerLimit( ){
	HX_STACK_PUSH("B2PrismaticJoint::getLowerLimit","box2D/dynamics/joints/B2PrismaticJoint.hx",221);
	HX_STACK_THIS(this);
	HX_STACK_LINE(221)
	return this->m_lowerTranslation;
}


HX_DEFINE_DYNAMIC_FUNC0(B2PrismaticJoint_obj,getLowerLimit,return )

Void B2PrismaticJoint_obj::enableLimit( bool flag){
{
		HX_STACK_PUSH("B2PrismaticJoint::enableLimit","box2D/dynamics/joints/B2PrismaticJoint.hx",212);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flag,"flag");
		HX_STACK_LINE(213)
		this->m_bodyA->setAwake(true);
		HX_STACK_LINE(214)
		this->m_bodyB->setAwake(true);
		HX_STACK_LINE(215)
		this->m_enableLimit = flag;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2PrismaticJoint_obj,enableLimit,(void))

bool B2PrismaticJoint_obj::isLimitEnabled( ){
	HX_STACK_PUSH("B2PrismaticJoint::isLimitEnabled","box2D/dynamics/joints/B2PrismaticJoint.hx",205);
	HX_STACK_THIS(this);
	HX_STACK_LINE(205)
	return this->m_enableLimit;
}


HX_DEFINE_DYNAMIC_FUNC0(B2PrismaticJoint_obj,isLimitEnabled,return )

Float B2PrismaticJoint_obj::getJointSpeed( ){
	HX_STACK_PUSH("B2PrismaticJoint::getJointSpeed","box2D/dynamics/joints/B2PrismaticJoint.hx",155);
	HX_STACK_THIS(this);
	HX_STACK_LINE(156)
	::box2D::dynamics::B2Body bA = this->m_bodyA;		HX_STACK_VAR(bA,"bA");
	HX_STACK_LINE(157)
	::box2D::dynamics::B2Body bB = this->m_bodyB;		HX_STACK_VAR(bB,"bB");
	HX_STACK_LINE(159)
	::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
	HX_STACK_LINE(162)
	tMat = bA->m_xf->R;
	HX_STACK_LINE(163)
	Float r1X = (this->m_localAnchor1->x - bA->m_sweep->localCenter->x);		HX_STACK_VAR(r1X,"r1X");
	HX_STACK_LINE(164)
	Float r1Y = (this->m_localAnchor1->y - bA->m_sweep->localCenter->y);		HX_STACK_VAR(r1Y,"r1Y");
	HX_STACK_LINE(165)
	Float tX = ((tMat->col1->x * r1X) + (tMat->col2->x * r1Y));		HX_STACK_VAR(tX,"tX");
	HX_STACK_LINE(166)
	r1Y = ((tMat->col1->y * r1X) + (tMat->col2->y * r1Y));
	HX_STACK_LINE(167)
	r1X = tX;
	HX_STACK_LINE(169)
	tMat = bB->m_xf->R;
	HX_STACK_LINE(170)
	Float r2X = (this->m_localAnchor2->x - bB->m_sweep->localCenter->x);		HX_STACK_VAR(r2X,"r2X");
	HX_STACK_LINE(171)
	Float r2Y = (this->m_localAnchor2->y - bB->m_sweep->localCenter->y);		HX_STACK_VAR(r2Y,"r2Y");
	HX_STACK_LINE(172)
	tX = ((tMat->col1->x * r2X) + (tMat->col2->x * r2Y));
	HX_STACK_LINE(173)
	r2Y = ((tMat->col1->y * r2X) + (tMat->col2->y * r2Y));
	HX_STACK_LINE(174)
	r2X = tX;
	HX_STACK_LINE(177)
	Float p1X = (bA->m_sweep->c->x + r1X);		HX_STACK_VAR(p1X,"p1X");
	HX_STACK_LINE(178)
	Float p1Y = (bA->m_sweep->c->y + r1Y);		HX_STACK_VAR(p1Y,"p1Y");
	HX_STACK_LINE(180)
	Float p2X = (bB->m_sweep->c->x + r2X);		HX_STACK_VAR(p2X,"p2X");
	HX_STACK_LINE(181)
	Float p2Y = (bB->m_sweep->c->y + r2Y);		HX_STACK_VAR(p2Y,"p2Y");
	HX_STACK_LINE(183)
	Float dX = (p2X - p1X);		HX_STACK_VAR(dX,"dX");
	HX_STACK_LINE(184)
	Float dY = (p2Y - p1Y);		HX_STACK_VAR(dY,"dY");
	HX_STACK_LINE(186)
	::box2D::common::math::B2Vec2 axis = bA->getWorldVector(this->m_localXAxis1);		HX_STACK_VAR(axis,"axis");
	HX_STACK_LINE(188)
	::box2D::common::math::B2Vec2 v1 = bA->m_linearVelocity;		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(189)
	::box2D::common::math::B2Vec2 v2 = bB->m_linearVelocity;		HX_STACK_VAR(v2,"v2");
	HX_STACK_LINE(190)
	Float w1 = bA->m_angularVelocity;		HX_STACK_VAR(w1,"w1");
	HX_STACK_LINE(191)
	Float w2 = bB->m_angularVelocity;		HX_STACK_VAR(w2,"w2");
	HX_STACK_LINE(196)
	Float speed = (((dX * ((-(w1) * axis->y))) + (dY * ((w1 * axis->x)))) + (((axis->x * ((((v2->x + (-(w2) * r2Y)) - v1->x) - (-(w1) * r1Y)))) + (axis->y * ((((v2->y + (w2 * r2X)) - v1->y) - (w1 * r1X)))))));		HX_STACK_VAR(speed,"speed");
	HX_STACK_LINE(198)
	return speed;
}


HX_DEFINE_DYNAMIC_FUNC0(B2PrismaticJoint_obj,getJointSpeed,return )

Float B2PrismaticJoint_obj::getJointTranslation( ){
	HX_STACK_PUSH("B2PrismaticJoint::getJointTranslation","box2D/dynamics/joints/B2PrismaticJoint.hx",133);
	HX_STACK_THIS(this);
	HX_STACK_LINE(134)
	::box2D::dynamics::B2Body bA = this->m_bodyA;		HX_STACK_VAR(bA,"bA");
	HX_STACK_LINE(135)
	::box2D::dynamics::B2Body bB = this->m_bodyB;		HX_STACK_VAR(bB,"bB");
	HX_STACK_LINE(137)
	::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
	HX_STACK_LINE(139)
	::box2D::common::math::B2Vec2 p1 = bA->getWorldPoint(this->m_localAnchor1);		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(140)
	::box2D::common::math::B2Vec2 p2 = bB->getWorldPoint(this->m_localAnchor2);		HX_STACK_VAR(p2,"p2");
	HX_STACK_LINE(142)
	Float dX = (p2->x - p1->x);		HX_STACK_VAR(dX,"dX");
	HX_STACK_LINE(143)
	Float dY = (p2->y - p1->y);		HX_STACK_VAR(dY,"dY");
	HX_STACK_LINE(145)
	::box2D::common::math::B2Vec2 axis = bA->getWorldVector(this->m_localXAxis1);		HX_STACK_VAR(axis,"axis");
	HX_STACK_LINE(148)
	Float translation = ((axis->x * dX) + (axis->y * dY));		HX_STACK_VAR(translation,"translation");
	HX_STACK_LINE(149)
	return translation;
}


HX_DEFINE_DYNAMIC_FUNC0(B2PrismaticJoint_obj,getJointTranslation,return )

Float B2PrismaticJoint_obj::getReactionTorque( Float inv_dt){
	HX_STACK_PUSH("B2PrismaticJoint::getReactionTorque","box2D/dynamics/joints/B2PrismaticJoint.hx",126);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inv_dt,"inv_dt");
	HX_STACK_LINE(126)
	return (inv_dt * this->m_impulse->y);
}


::box2D::common::math::B2Vec2 B2PrismaticJoint_obj::getReactionForce( Float inv_dt){
	HX_STACK_PUSH("B2PrismaticJoint::getReactionForce","box2D/dynamics/joints/B2PrismaticJoint.hx",118);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inv_dt,"inv_dt");
	HX_STACK_LINE(118)
	return ::box2D::common::math::B2Vec2_obj::__new((inv_dt * (((this->m_impulse->x * this->m_perp->x) + (((this->m_motorImpulse + this->m_impulse->z)) * this->m_axis->x)))),(inv_dt * (((this->m_impulse->x * this->m_perp->y) + (((this->m_motorImpulse + this->m_impulse->z)) * this->m_axis->y)))));
}


::box2D::common::math::B2Vec2 B2PrismaticJoint_obj::getAnchorB( ){
	HX_STACK_PUSH("B2PrismaticJoint::getAnchorB","box2D/dynamics/joints/B2PrismaticJoint.hx",113);
	HX_STACK_THIS(this);
	HX_STACK_LINE(113)
	return this->m_bodyB->getWorldPoint(this->m_localAnchor2);
}


::box2D::common::math::B2Vec2 B2PrismaticJoint_obj::getAnchorA( ){
	HX_STACK_PUSH("B2PrismaticJoint::getAnchorA","box2D/dynamics/joints/B2PrismaticJoint.hx",109);
	HX_STACK_THIS(this);
	HX_STACK_LINE(109)
	return this->m_bodyA->getWorldPoint(this->m_localAnchor1);
}



B2PrismaticJoint_obj::B2PrismaticJoint_obj()
{
}

void B2PrismaticJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2PrismaticJoint);
	HX_MARK_MEMBER_NAME(m_limitState,"m_limitState");
	HX_MARK_MEMBER_NAME(m_enableMotor,"m_enableMotor");
	HX_MARK_MEMBER_NAME(m_enableLimit,"m_enableLimit");
	HX_MARK_MEMBER_NAME(m_motorSpeed,"m_motorSpeed");
	HX_MARK_MEMBER_NAME(m_maxMotorForce,"m_maxMotorForce");
	HX_MARK_MEMBER_NAME(m_upperTranslation,"m_upperTranslation");
	HX_MARK_MEMBER_NAME(m_lowerTranslation,"m_lowerTranslation");
	HX_MARK_MEMBER_NAME(m_motorImpulse,"m_motorImpulse");
	HX_MARK_MEMBER_NAME(m_motorMass,"m_motorMass");
	HX_MARK_MEMBER_NAME(m_impulse,"m_impulse");
	HX_MARK_MEMBER_NAME(m_K,"m_K");
	HX_MARK_MEMBER_NAME(m_a2,"m_a2");
	HX_MARK_MEMBER_NAME(m_a1,"m_a1");
	HX_MARK_MEMBER_NAME(m_s2,"m_s2");
	HX_MARK_MEMBER_NAME(m_s1,"m_s1");
	HX_MARK_MEMBER_NAME(m_perp,"m_perp");
	HX_MARK_MEMBER_NAME(m_axis,"m_axis");
	HX_MARK_MEMBER_NAME(m_refAngle,"m_refAngle");
	HX_MARK_MEMBER_NAME(m_localYAxis1,"m_localYAxis1");
	HX_MARK_MEMBER_NAME(m_localXAxis1,"m_localXAxis1");
	HX_MARK_MEMBER_NAME(m_localAnchor2,"m_localAnchor2");
	HX_MARK_MEMBER_NAME(m_localAnchor1,"m_localAnchor1");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2PrismaticJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_limitState,"m_limitState");
	HX_VISIT_MEMBER_NAME(m_enableMotor,"m_enableMotor");
	HX_VISIT_MEMBER_NAME(m_enableLimit,"m_enableLimit");
	HX_VISIT_MEMBER_NAME(m_motorSpeed,"m_motorSpeed");
	HX_VISIT_MEMBER_NAME(m_maxMotorForce,"m_maxMotorForce");
	HX_VISIT_MEMBER_NAME(m_upperTranslation,"m_upperTranslation");
	HX_VISIT_MEMBER_NAME(m_lowerTranslation,"m_lowerTranslation");
	HX_VISIT_MEMBER_NAME(m_motorImpulse,"m_motorImpulse");
	HX_VISIT_MEMBER_NAME(m_motorMass,"m_motorMass");
	HX_VISIT_MEMBER_NAME(m_impulse,"m_impulse");
	HX_VISIT_MEMBER_NAME(m_K,"m_K");
	HX_VISIT_MEMBER_NAME(m_a2,"m_a2");
	HX_VISIT_MEMBER_NAME(m_a1,"m_a1");
	HX_VISIT_MEMBER_NAME(m_s2,"m_s2");
	HX_VISIT_MEMBER_NAME(m_s1,"m_s1");
	HX_VISIT_MEMBER_NAME(m_perp,"m_perp");
	HX_VISIT_MEMBER_NAME(m_axis,"m_axis");
	HX_VISIT_MEMBER_NAME(m_refAngle,"m_refAngle");
	HX_VISIT_MEMBER_NAME(m_localYAxis1,"m_localYAxis1");
	HX_VISIT_MEMBER_NAME(m_localXAxis1,"m_localXAxis1");
	HX_VISIT_MEMBER_NAME(m_localAnchor2,"m_localAnchor2");
	HX_VISIT_MEMBER_NAME(m_localAnchor1,"m_localAnchor1");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic B2PrismaticJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"m_K") ) { return m_K; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"m_a2") ) { return m_a2; }
		if (HX_FIELD_EQ(inName,"m_a1") ) { return m_a1; }
		if (HX_FIELD_EQ(inName,"m_s2") ) { return m_s2; }
		if (HX_FIELD_EQ(inName,"m_s1") ) { return m_s1; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_perp") ) { return m_perp; }
		if (HX_FIELD_EQ(inName,"m_axis") ) { return m_axis; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_impulse") ) { return m_impulse; }
		if (HX_FIELD_EQ(inName,"setLimits") ) { return setLimits_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_refAngle") ) { return m_refAngle; }
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
		if (HX_FIELD_EQ(inName,"m_motorSpeed") ) { return m_motorSpeed; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_enableMotor") ) { return m_enableMotor; }
		if (HX_FIELD_EQ(inName,"m_enableLimit") ) { return m_enableLimit; }
		if (HX_FIELD_EQ(inName,"m_localYAxis1") ) { return m_localYAxis1; }
		if (HX_FIELD_EQ(inName,"m_localXAxis1") ) { return m_localXAxis1; }
		if (HX_FIELD_EQ(inName,"getMotorForce") ) { return getMotorForce_dyn(); }
		if (HX_FIELD_EQ(inName,"getMotorSpeed") ) { return getMotorSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"setMotorSpeed") ) { return setMotorSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"getUpperLimit") ) { return getUpperLimit_dyn(); }
		if (HX_FIELD_EQ(inName,"getLowerLimit") ) { return getLowerLimit_dyn(); }
		if (HX_FIELD_EQ(inName,"getJointSpeed") ) { return getJointSpeed_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_motorImpulse") ) { return m_motorImpulse; }
		if (HX_FIELD_EQ(inName,"m_localAnchor2") ) { return m_localAnchor2; }
		if (HX_FIELD_EQ(inName,"m_localAnchor1") ) { return m_localAnchor1; }
		if (HX_FIELD_EQ(inName,"isMotorEnabled") ) { return isMotorEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"isLimitEnabled") ) { return isLimitEnabled_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_maxMotorForce") ) { return m_maxMotorForce; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setMaxMotorForce") ) { return setMaxMotorForce_dyn(); }
		if (HX_FIELD_EQ(inName,"getReactionForce") ) { return getReactionForce_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getReactionTorque") ) { return getReactionTorque_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"m_upperTranslation") ) { return m_upperTranslation; }
		if (HX_FIELD_EQ(inName,"m_lowerTranslation") ) { return m_lowerTranslation; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getJointTranslation") ) { return getJointTranslation_dyn(); }
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

Dynamic B2PrismaticJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"m_K") ) { m_K=inValue.Cast< ::box2D::common::math::B2Mat33 >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"m_a2") ) { m_a2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_a1") ) { m_a1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_s2") ) { m_s2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_s1") ) { m_s1=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_perp") ) { m_perp=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_axis") ) { m_axis=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_impulse") ) { m_impulse=inValue.Cast< ::box2D::common::math::B2Vec3 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_refAngle") ) { m_refAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_motorMass") ) { m_motorMass=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_limitState") ) { m_limitState=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_motorSpeed") ) { m_motorSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_enableMotor") ) { m_enableMotor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_enableLimit") ) { m_enableLimit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_localYAxis1") ) { m_localYAxis1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_localXAxis1") ) { m_localXAxis1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_motorImpulse") ) { m_motorImpulse=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_localAnchor2") ) { m_localAnchor2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_localAnchor1") ) { m_localAnchor1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_maxMotorForce") ) { m_maxMotorForce=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"m_upperTranslation") ) { m_upperTranslation=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_lowerTranslation") ) { m_lowerTranslation=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2PrismaticJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_limitState"));
	outFields->push(HX_CSTRING("m_enableMotor"));
	outFields->push(HX_CSTRING("m_enableLimit"));
	outFields->push(HX_CSTRING("m_motorSpeed"));
	outFields->push(HX_CSTRING("m_maxMotorForce"));
	outFields->push(HX_CSTRING("m_upperTranslation"));
	outFields->push(HX_CSTRING("m_lowerTranslation"));
	outFields->push(HX_CSTRING("m_motorImpulse"));
	outFields->push(HX_CSTRING("m_motorMass"));
	outFields->push(HX_CSTRING("m_impulse"));
	outFields->push(HX_CSTRING("m_K"));
	outFields->push(HX_CSTRING("m_a2"));
	outFields->push(HX_CSTRING("m_a1"));
	outFields->push(HX_CSTRING("m_s2"));
	outFields->push(HX_CSTRING("m_s1"));
	outFields->push(HX_CSTRING("m_perp"));
	outFields->push(HX_CSTRING("m_axis"));
	outFields->push(HX_CSTRING("m_refAngle"));
	outFields->push(HX_CSTRING("m_localYAxis1"));
	outFields->push(HX_CSTRING("m_localXAxis1"));
	outFields->push(HX_CSTRING("m_localAnchor2"));
	outFields->push(HX_CSTRING("m_localAnchor1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_limitState"),
	HX_CSTRING("m_enableMotor"),
	HX_CSTRING("m_enableLimit"),
	HX_CSTRING("m_motorSpeed"),
	HX_CSTRING("m_maxMotorForce"),
	HX_CSTRING("m_upperTranslation"),
	HX_CSTRING("m_lowerTranslation"),
	HX_CSTRING("m_motorImpulse"),
	HX_CSTRING("m_motorMass"),
	HX_CSTRING("m_impulse"),
	HX_CSTRING("m_K"),
	HX_CSTRING("m_a2"),
	HX_CSTRING("m_a1"),
	HX_CSTRING("m_s2"),
	HX_CSTRING("m_s1"),
	HX_CSTRING("m_perp"),
	HX_CSTRING("m_axis"),
	HX_CSTRING("m_refAngle"),
	HX_CSTRING("m_localYAxis1"),
	HX_CSTRING("m_localXAxis1"),
	HX_CSTRING("m_localAnchor2"),
	HX_CSTRING("m_localAnchor1"),
	HX_CSTRING("solvePositionConstraints"),
	HX_CSTRING("solveVelocityConstraints"),
	HX_CSTRING("initVelocityConstraints"),
	HX_CSTRING("getMotorForce"),
	HX_CSTRING("setMaxMotorForce"),
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
	HX_CSTRING("getJointTranslation"),
	HX_CSTRING("getReactionTorque"),
	HX_CSTRING("getReactionForce"),
	HX_CSTRING("getAnchorB"),
	HX_CSTRING("getAnchorA"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2PrismaticJoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2PrismaticJoint_obj::__mClass,"__mClass");
};

Class B2PrismaticJoint_obj::__mClass;

void B2PrismaticJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.joints.B2PrismaticJoint"), hx::TCanCast< B2PrismaticJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2PrismaticJoint_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints
