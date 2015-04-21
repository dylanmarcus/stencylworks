#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Mat22
#include <box2D/common/math/B2Mat22.h>
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
#ifndef INCLUDED_box2D_dynamics_joints_B2GearJoint
#include <box2D/dynamics/joints/B2GearJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2GearJointDef
#include <box2D/dynamics/joints/B2GearJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2Jacobian
#include <box2D/dynamics/joints/B2Jacobian.h>
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
#ifndef INCLUDED_box2D_dynamics_joints_B2RevoluteJoint
#include <box2D/dynamics/joints/B2RevoluteJoint.h>
#endif
namespace box2D{
namespace dynamics{
namespace joints{

Void B2GearJoint_obj::__construct(::box2D::dynamics::joints::B2GearJointDef def)
{
HX_STACK_PUSH("B2GearJoint::new","box2D/dynamics/joints/B2GearJoint.hx",97);
{
	HX_STACK_LINE(99)
	super::__construct(def);
	HX_STACK_LINE(101)
	this->m_groundAnchor1 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(102)
	this->m_groundAnchor2 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(104)
	this->m_localAnchor1 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(105)
	this->m_localAnchor2 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(107)
	this->m_J = ::box2D::dynamics::joints::B2Jacobian_obj::__new();
	HX_STACK_LINE(110)
	int type1 = def->joint1->m_type;		HX_STACK_VAR(type1,"type1");
	HX_STACK_LINE(111)
	int type2 = def->joint2->m_type;		HX_STACK_VAR(type2,"type2");
	HX_STACK_LINE(118)
	this->m_revolute1 = null();
	HX_STACK_LINE(119)
	this->m_prismatic1 = null();
	HX_STACK_LINE(120)
	this->m_revolute2 = null();
	HX_STACK_LINE(121)
	this->m_prismatic2 = null();
	HX_STACK_LINE(123)
	Float coordinate1;		HX_STACK_VAR(coordinate1,"coordinate1");
	HX_STACK_LINE(124)
	Float coordinate2;		HX_STACK_VAR(coordinate2,"coordinate2");
	HX_STACK_LINE(126)
	this->m_ground1 = def->joint1->getBodyA();
	HX_STACK_LINE(127)
	this->m_bodyA = def->joint1->getBodyB();
	HX_STACK_LINE(128)
	if (((type1 == ::box2D::dynamics::joints::B2Joint_obj::e_revoluteJoint))){
		HX_STACK_LINE(130)
		this->m_revolute1 = hx::TCast< box2D::dynamics::joints::B2RevoluteJoint >::cast(def->joint1);
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			::box2D::common::math::B2Vec2 _this = this->m_groundAnchor1;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_revolute1->m_localAnchor1;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(131)
			_this->x = v->x;
			HX_STACK_LINE(131)
			_this->y = v->y;
		}
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			::box2D::common::math::B2Vec2 _this = this->m_localAnchor1;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_revolute1->m_localAnchor2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(132)
			_this->x = v->x;
			HX_STACK_LINE(132)
			_this->y = v->y;
		}
		HX_STACK_LINE(133)
		coordinate1 = this->m_revolute1->getJointAngle();
	}
	else{
		HX_STACK_LINE(137)
		this->m_prismatic1 = hx::TCast< box2D::dynamics::joints::B2PrismaticJoint >::cast(def->joint1);
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			::box2D::common::math::B2Vec2 _this = this->m_groundAnchor1;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_prismatic1->m_localAnchor1;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(138)
			_this->x = v->x;
			HX_STACK_LINE(138)
			_this->y = v->y;
		}
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::box2D::common::math::B2Vec2 _this = this->m_localAnchor1;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_prismatic1->m_localAnchor2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(139)
			_this->x = v->x;
			HX_STACK_LINE(139)
			_this->y = v->y;
		}
		HX_STACK_LINE(140)
		coordinate1 = this->m_prismatic1->getJointTranslation();
	}
	HX_STACK_LINE(143)
	this->m_ground2 = def->joint2->getBodyA();
	HX_STACK_LINE(144)
	this->m_bodyB = def->joint2->getBodyB();
	HX_STACK_LINE(145)
	if (((type2 == ::box2D::dynamics::joints::B2Joint_obj::e_revoluteJoint))){
		HX_STACK_LINE(147)
		this->m_revolute2 = hx::TCast< box2D::dynamics::joints::B2RevoluteJoint >::cast(def->joint2);
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			::box2D::common::math::B2Vec2 _this = this->m_groundAnchor2;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_revolute2->m_localAnchor1;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(148)
			_this->x = v->x;
			HX_STACK_LINE(148)
			_this->y = v->y;
		}
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			::box2D::common::math::B2Vec2 _this = this->m_localAnchor2;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_revolute2->m_localAnchor2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(149)
			_this->x = v->x;
			HX_STACK_LINE(149)
			_this->y = v->y;
		}
		HX_STACK_LINE(150)
		coordinate2 = this->m_revolute2->getJointAngle();
	}
	else{
		HX_STACK_LINE(154)
		this->m_prismatic2 = hx::TCast< box2D::dynamics::joints::B2PrismaticJoint >::cast(def->joint2);
		HX_STACK_LINE(155)
		{
			HX_STACK_LINE(155)
			::box2D::common::math::B2Vec2 _this = this->m_groundAnchor2;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_prismatic2->m_localAnchor1;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(155)
			_this->x = v->x;
			HX_STACK_LINE(155)
			_this->y = v->y;
		}
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			::box2D::common::math::B2Vec2 _this = this->m_localAnchor2;		HX_STACK_VAR(_this,"_this");
			::box2D::common::math::B2Vec2 v = this->m_prismatic2->m_localAnchor2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(156)
			_this->x = v->x;
			HX_STACK_LINE(156)
			_this->y = v->y;
		}
		HX_STACK_LINE(157)
		coordinate2 = this->m_prismatic2->getJointTranslation();
	}
	HX_STACK_LINE(160)
	this->m_ratio = def->ratio;
	HX_STACK_LINE(162)
	this->m_constant = (coordinate1 + (this->m_ratio * coordinate2));
	HX_STACK_LINE(164)
	this->m_impulse = 0.0;
}
;
	return null();
}

B2GearJoint_obj::~B2GearJoint_obj() { }

Dynamic B2GearJoint_obj::__CreateEmpty() { return  new B2GearJoint_obj; }
hx::ObjectPtr< B2GearJoint_obj > B2GearJoint_obj::__new(::box2D::dynamics::joints::B2GearJointDef def)
{  hx::ObjectPtr< B2GearJoint_obj > result = new B2GearJoint_obj();
	result->__construct(def);
	return result;}

Dynamic B2GearJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2GearJoint_obj > result = new B2GearJoint_obj();
	result->__construct(inArgs[0]);
	return result;}

bool B2GearJoint_obj::solvePositionConstraints( Float baumgarte){
	HX_STACK_PUSH("B2GearJoint::solvePositionConstraints","box2D/dynamics/joints/B2GearJoint.hx",286);
	HX_STACK_THIS(this);
	HX_STACK_ARG(baumgarte,"baumgarte");
	HX_STACK_LINE(289)
	Float linearError = 0.0;		HX_STACK_VAR(linearError,"linearError");
	HX_STACK_LINE(291)
	::box2D::dynamics::B2Body bA = this->m_bodyA;		HX_STACK_VAR(bA,"bA");
	HX_STACK_LINE(292)
	::box2D::dynamics::B2Body bB = this->m_bodyB;		HX_STACK_VAR(bB,"bB");
	HX_STACK_LINE(294)
	Float coordinate1;		HX_STACK_VAR(coordinate1,"coordinate1");
	HX_STACK_LINE(295)
	Float coordinate2;		HX_STACK_VAR(coordinate2,"coordinate2");
	HX_STACK_LINE(296)
	if (((this->m_revolute1 != null()))){
		HX_STACK_LINE(297)
		coordinate1 = this->m_revolute1->getJointAngle();
	}
	else{
		HX_STACK_LINE(301)
		coordinate1 = this->m_prismatic1->getJointTranslation();
	}
	HX_STACK_LINE(305)
	if (((this->m_revolute2 != null()))){
		HX_STACK_LINE(306)
		coordinate2 = this->m_revolute2->getJointAngle();
	}
	else{
		HX_STACK_LINE(310)
		coordinate2 = this->m_prismatic2->getJointTranslation();
	}
	HX_STACK_LINE(314)
	Float C = (this->m_constant - ((coordinate1 + (this->m_ratio * coordinate2))));		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(316)
	Float impulse = (-(this->m_mass) * C);		HX_STACK_VAR(impulse,"impulse");
	HX_STACK_LINE(318)
	hx::AddEq(bA->m_sweep->c->x,((bA->m_invMass * impulse) * this->m_J->linearA->x));
	HX_STACK_LINE(319)
	hx::AddEq(bA->m_sweep->c->y,((bA->m_invMass * impulse) * this->m_J->linearA->y));
	HX_STACK_LINE(320)
	hx::AddEq(bA->m_sweep->a,((bA->m_invI * impulse) * this->m_J->angularA));
	HX_STACK_LINE(321)
	hx::AddEq(bB->m_sweep->c->x,((bB->m_invMass * impulse) * this->m_J->linearB->x));
	HX_STACK_LINE(322)
	hx::AddEq(bB->m_sweep->c->y,((bB->m_invMass * impulse) * this->m_J->linearB->y));
	HX_STACK_LINE(323)
	hx::AddEq(bB->m_sweep->a,((bB->m_invI * impulse) * this->m_J->angularB));
	HX_STACK_LINE(325)
	bA->synchronizeTransform();
	HX_STACK_LINE(326)
	bB->synchronizeTransform();
	HX_STACK_LINE(329)
	return (linearError < ::box2D::common::B2Settings_obj::b2_linearSlop);
}


Void B2GearJoint_obj::solveVelocityConstraints( ::box2D::dynamics::B2TimeStep step){
{
		HX_STACK_PUSH("B2GearJoint::solveVelocityConstraints","box2D/dynamics/joints/B2GearJoint.hx",265);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
		HX_STACK_LINE(268)
		::box2D::dynamics::B2Body bA = this->m_bodyA;		HX_STACK_VAR(bA,"bA");
		HX_STACK_LINE(269)
		::box2D::dynamics::B2Body bB = this->m_bodyB;		HX_STACK_VAR(bB,"bB");
		HX_STACK_LINE(271)
		Float Cdot = this->m_J->compute(bA->m_linearVelocity,bA->m_angularVelocity,bB->m_linearVelocity,bB->m_angularVelocity);		HX_STACK_VAR(Cdot,"Cdot");
		HX_STACK_LINE(274)
		Float impulse = (-(this->m_mass) * Cdot);		HX_STACK_VAR(impulse,"impulse");
		HX_STACK_LINE(275)
		hx::AddEq(this->m_impulse,impulse);
		HX_STACK_LINE(277)
		hx::AddEq(bA->m_linearVelocity->x,((bA->m_invMass * impulse) * this->m_J->linearA->x));
		HX_STACK_LINE(278)
		hx::AddEq(bA->m_linearVelocity->y,((bA->m_invMass * impulse) * this->m_J->linearA->y));
		HX_STACK_LINE(279)
		hx::AddEq(bA->m_angularVelocity,((bA->m_invI * impulse) * this->m_J->angularA));
		HX_STACK_LINE(280)
		hx::AddEq(bB->m_linearVelocity->x,((bB->m_invMass * impulse) * this->m_J->linearB->x));
		HX_STACK_LINE(281)
		hx::AddEq(bB->m_linearVelocity->y,((bB->m_invMass * impulse) * this->m_J->linearB->y));
		HX_STACK_LINE(282)
		hx::AddEq(bB->m_angularVelocity,((bB->m_invI * impulse) * this->m_J->angularB));
	}
return null();
}


Void B2GearJoint_obj::initVelocityConstraints( ::box2D::dynamics::B2TimeStep step){
{
		HX_STACK_PUSH("B2GearJoint::initVelocityConstraints","box2D/dynamics/joints/B2GearJoint.hx",168);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
		HX_STACK_LINE(169)
		::box2D::dynamics::B2Body g1 = this->m_ground1;		HX_STACK_VAR(g1,"g1");
		HX_STACK_LINE(170)
		::box2D::dynamics::B2Body g2 = this->m_ground2;		HX_STACK_VAR(g2,"g2");
		HX_STACK_LINE(171)
		::box2D::dynamics::B2Body bA = this->m_bodyA;		HX_STACK_VAR(bA,"bA");
		HX_STACK_LINE(172)
		::box2D::dynamics::B2Body bB = this->m_bodyB;		HX_STACK_VAR(bB,"bB");
		HX_STACK_LINE(175)
		Float ugX;		HX_STACK_VAR(ugX,"ugX");
		HX_STACK_LINE(176)
		Float ugY;		HX_STACK_VAR(ugY,"ugY");
		HX_STACK_LINE(177)
		Float rX;		HX_STACK_VAR(rX,"rX");
		HX_STACK_LINE(178)
		Float rY;		HX_STACK_VAR(rY,"rY");
		HX_STACK_LINE(179)
		::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
		HX_STACK_LINE(180)
		::box2D::common::math::B2Vec2 tVec;		HX_STACK_VAR(tVec,"tVec");
		HX_STACK_LINE(181)
		Float crug;		HX_STACK_VAR(crug,"crug");
		HX_STACK_LINE(182)
		Float tX;		HX_STACK_VAR(tX,"tX");
		HX_STACK_LINE(184)
		Float K = 0.0;		HX_STACK_VAR(K,"K");
		HX_STACK_LINE(185)
		this->m_J->setZero();
		HX_STACK_LINE(187)
		if (((this->m_revolute1 != null()))){
			HX_STACK_LINE(189)
			this->m_J->angularA = -1.0;
			HX_STACK_LINE(190)
			hx::AddEq(K,bA->m_invI);
		}
		else{
			HX_STACK_LINE(195)
			tMat = g1->m_xf->R;
			HX_STACK_LINE(196)
			tVec = this->m_prismatic1->m_localXAxis1;
			HX_STACK_LINE(197)
			ugX = ((tMat->col1->x * tVec->x) + (tMat->col2->x * tVec->y));
			HX_STACK_LINE(198)
			ugY = ((tMat->col1->y * tVec->x) + (tMat->col2->y * tVec->y));
			HX_STACK_LINE(200)
			tMat = bA->m_xf->R;
			HX_STACK_LINE(201)
			rX = (this->m_localAnchor1->x - bA->m_sweep->localCenter->x);
			HX_STACK_LINE(202)
			rY = (this->m_localAnchor1->y - bA->m_sweep->localCenter->y);
			HX_STACK_LINE(203)
			tX = ((tMat->col1->x * rX) + (tMat->col2->x * rY));
			HX_STACK_LINE(204)
			rY = ((tMat->col1->y * rX) + (tMat->col2->y * rY));
			HX_STACK_LINE(205)
			rX = tX;
			HX_STACK_LINE(208)
			crug = ((rX * ugY) - (rY * ugX));
			HX_STACK_LINE(210)
			{
				HX_STACK_LINE(210)
				::box2D::common::math::B2Vec2 _this = this->m_J->linearA;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(210)
				_this->x = -(ugX);
				HX_STACK_LINE(210)
				_this->y = -(ugY);
			}
			HX_STACK_LINE(211)
			this->m_J->angularA = -(crug);
			HX_STACK_LINE(212)
			hx::AddEq(K,(bA->m_invMass + ((bA->m_invI * crug) * crug)));
		}
		HX_STACK_LINE(215)
		if (((this->m_revolute2 != null()))){
			HX_STACK_LINE(217)
			this->m_J->angularB = -(this->m_ratio);
			HX_STACK_LINE(218)
			hx::AddEq(K,((this->m_ratio * this->m_ratio) * bB->m_invI));
		}
		else{
			HX_STACK_LINE(223)
			tMat = g2->m_xf->R;
			HX_STACK_LINE(224)
			tVec = this->m_prismatic2->m_localXAxis1;
			HX_STACK_LINE(225)
			ugX = ((tMat->col1->x * tVec->x) + (tMat->col2->x * tVec->y));
			HX_STACK_LINE(226)
			ugY = ((tMat->col1->y * tVec->x) + (tMat->col2->y * tVec->y));
			HX_STACK_LINE(228)
			tMat = bB->m_xf->R;
			HX_STACK_LINE(229)
			rX = (this->m_localAnchor2->x - bB->m_sweep->localCenter->x);
			HX_STACK_LINE(230)
			rY = (this->m_localAnchor2->y - bB->m_sweep->localCenter->y);
			HX_STACK_LINE(231)
			tX = ((tMat->col1->x * rX) + (tMat->col2->x * rY));
			HX_STACK_LINE(232)
			rY = ((tMat->col1->y * rX) + (tMat->col2->y * rY));
			HX_STACK_LINE(233)
			rX = tX;
			HX_STACK_LINE(236)
			crug = ((rX * ugY) - (rY * ugX));
			HX_STACK_LINE(238)
			{
				HX_STACK_LINE(238)
				::box2D::common::math::B2Vec2 _this = this->m_J->linearB;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(238)
				_this->x = (-(this->m_ratio) * ugX);
				HX_STACK_LINE(238)
				_this->y = (-(this->m_ratio) * ugY);
			}
			HX_STACK_LINE(239)
			this->m_J->angularB = (-(this->m_ratio) * crug);
			HX_STACK_LINE(240)
			hx::AddEq(K,((this->m_ratio * this->m_ratio) * ((bB->m_invMass + ((bB->m_invI * crug) * crug)))));
		}
		HX_STACK_LINE(244)
		this->m_mass = (  (((K > 0.0))) ? Float((Float(1.0) / Float(K))) : Float(0.0) );
		HX_STACK_LINE(246)
		if ((step->warmStarting)){
			HX_STACK_LINE(250)
			hx::AddEq(bA->m_linearVelocity->x,((bA->m_invMass * this->m_impulse) * this->m_J->linearA->x));
			HX_STACK_LINE(251)
			hx::AddEq(bA->m_linearVelocity->y,((bA->m_invMass * this->m_impulse) * this->m_J->linearA->y));
			HX_STACK_LINE(252)
			hx::AddEq(bA->m_angularVelocity,((bA->m_invI * this->m_impulse) * this->m_J->angularA));
			HX_STACK_LINE(254)
			hx::AddEq(bB->m_linearVelocity->x,((bB->m_invMass * this->m_impulse) * this->m_J->linearB->x));
			HX_STACK_LINE(255)
			hx::AddEq(bB->m_linearVelocity->y,((bB->m_invMass * this->m_impulse) * this->m_J->linearB->y));
			HX_STACK_LINE(256)
			hx::AddEq(bB->m_angularVelocity,((bB->m_invI * this->m_impulse) * this->m_J->angularB));
		}
		else{
			HX_STACK_LINE(259)
			this->m_impulse = 0.0;
		}
	}
return null();
}


Void B2GearJoint_obj::setRatio( Float ratio){
{
		HX_STACK_PUSH("B2GearJoint::setRatio","box2D/dynamics/joints/B2GearJoint.hx",89);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ratio,"ratio");
		HX_STACK_LINE(89)
		this->m_ratio = ratio;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2GearJoint_obj,setRatio,(void))

Float B2GearJoint_obj::getRatio( ){
	HX_STACK_PUSH("B2GearJoint::getRatio","box2D/dynamics/joints/B2GearJoint.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_LINE(82)
	return this->m_ratio;
}


HX_DEFINE_DYNAMIC_FUNC0(B2GearJoint_obj,getRatio,return )

Float B2GearJoint_obj::getReactionTorque( Float inv_dt){
	HX_STACK_PUSH("B2GearJoint::getReactionTorque","box2D/dynamics/joints/B2GearJoint.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inv_dt,"inv_dt");
	HX_STACK_LINE(65)
	::box2D::common::math::B2Mat22 tMat = this->m_bodyB->m_xf->R;		HX_STACK_VAR(tMat,"tMat");
	HX_STACK_LINE(66)
	Float rX = (this->m_localAnchor1->x - this->m_bodyB->m_sweep->localCenter->x);		HX_STACK_VAR(rX,"rX");
	HX_STACK_LINE(67)
	Float rY = (this->m_localAnchor1->y - this->m_bodyB->m_sweep->localCenter->y);		HX_STACK_VAR(rY,"rY");
	HX_STACK_LINE(68)
	Float tX = ((tMat->col1->x * rX) + (tMat->col2->x * rY));		HX_STACK_VAR(tX,"tX");
	HX_STACK_LINE(69)
	rY = ((tMat->col1->y * rX) + (tMat->col2->y * rY));
	HX_STACK_LINE(70)
	rX = tX;
	HX_STACK_LINE(72)
	Float PX = (this->m_impulse * this->m_J->linearB->x);		HX_STACK_VAR(PX,"PX");
	HX_STACK_LINE(73)
	Float PY = (this->m_impulse * this->m_J->linearB->y);		HX_STACK_VAR(PY,"PY");
	HX_STACK_LINE(76)
	return (inv_dt * ((((this->m_impulse * this->m_J->angularB) - (rX * PY)) + (rY * PX))));
}


::box2D::common::math::B2Vec2 B2GearJoint_obj::getReactionForce( Float inv_dt){
	HX_STACK_PUSH("B2GearJoint::getReactionForce","box2D/dynamics/joints/B2GearJoint.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inv_dt,"inv_dt");
	HX_STACK_LINE(55)
	return ::box2D::common::math::B2Vec2_obj::__new(((inv_dt * this->m_impulse) * this->m_J->linearB->x),((inv_dt * this->m_impulse) * this->m_J->linearB->y));
}


::box2D::common::math::B2Vec2 B2GearJoint_obj::getAnchorB( ){
	HX_STACK_PUSH("B2GearJoint::getAnchorB","box2D/dynamics/joints/B2GearJoint.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_LINE(50)
	return this->m_bodyB->getWorldPoint(this->m_localAnchor2);
}


::box2D::common::math::B2Vec2 B2GearJoint_obj::getAnchorA( ){
	HX_STACK_PUSH("B2GearJoint::getAnchorA","box2D/dynamics/joints/B2GearJoint.hx",45);
	HX_STACK_THIS(this);
	HX_STACK_LINE(45)
	return this->m_bodyA->getWorldPoint(this->m_localAnchor1);
}



B2GearJoint_obj::B2GearJoint_obj()
{
}

void B2GearJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2GearJoint);
	HX_MARK_MEMBER_NAME(m_impulse,"m_impulse");
	HX_MARK_MEMBER_NAME(m_mass,"m_mass");
	HX_MARK_MEMBER_NAME(m_ratio,"m_ratio");
	HX_MARK_MEMBER_NAME(m_constant,"m_constant");
	HX_MARK_MEMBER_NAME(m_J,"m_J");
	HX_MARK_MEMBER_NAME(m_localAnchor2,"m_localAnchor2");
	HX_MARK_MEMBER_NAME(m_localAnchor1,"m_localAnchor1");
	HX_MARK_MEMBER_NAME(m_groundAnchor2,"m_groundAnchor2");
	HX_MARK_MEMBER_NAME(m_groundAnchor1,"m_groundAnchor1");
	HX_MARK_MEMBER_NAME(m_prismatic2,"m_prismatic2");
	HX_MARK_MEMBER_NAME(m_revolute2,"m_revolute2");
	HX_MARK_MEMBER_NAME(m_prismatic1,"m_prismatic1");
	HX_MARK_MEMBER_NAME(m_revolute1,"m_revolute1");
	HX_MARK_MEMBER_NAME(m_ground2,"m_ground2");
	HX_MARK_MEMBER_NAME(m_ground1,"m_ground1");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2GearJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_impulse,"m_impulse");
	HX_VISIT_MEMBER_NAME(m_mass,"m_mass");
	HX_VISIT_MEMBER_NAME(m_ratio,"m_ratio");
	HX_VISIT_MEMBER_NAME(m_constant,"m_constant");
	HX_VISIT_MEMBER_NAME(m_J,"m_J");
	HX_VISIT_MEMBER_NAME(m_localAnchor2,"m_localAnchor2");
	HX_VISIT_MEMBER_NAME(m_localAnchor1,"m_localAnchor1");
	HX_VISIT_MEMBER_NAME(m_groundAnchor2,"m_groundAnchor2");
	HX_VISIT_MEMBER_NAME(m_groundAnchor1,"m_groundAnchor1");
	HX_VISIT_MEMBER_NAME(m_prismatic2,"m_prismatic2");
	HX_VISIT_MEMBER_NAME(m_revolute2,"m_revolute2");
	HX_VISIT_MEMBER_NAME(m_prismatic1,"m_prismatic1");
	HX_VISIT_MEMBER_NAME(m_revolute1,"m_revolute1");
	HX_VISIT_MEMBER_NAME(m_ground2,"m_ground2");
	HX_VISIT_MEMBER_NAME(m_ground1,"m_ground1");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic B2GearJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"m_J") ) { return m_J; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_mass") ) { return m_mass; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_ratio") ) { return m_ratio; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setRatio") ) { return setRatio_dyn(); }
		if (HX_FIELD_EQ(inName,"getRatio") ) { return getRatio_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_impulse") ) { return m_impulse; }
		if (HX_FIELD_EQ(inName,"m_ground2") ) { return m_ground2; }
		if (HX_FIELD_EQ(inName,"m_ground1") ) { return m_ground1; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_constant") ) { return m_constant; }
		if (HX_FIELD_EQ(inName,"getAnchorB") ) { return getAnchorB_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnchorA") ) { return getAnchorA_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_revolute2") ) { return m_revolute2; }
		if (HX_FIELD_EQ(inName,"m_revolute1") ) { return m_revolute1; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_prismatic2") ) { return m_prismatic2; }
		if (HX_FIELD_EQ(inName,"m_prismatic1") ) { return m_prismatic1; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_localAnchor2") ) { return m_localAnchor2; }
		if (HX_FIELD_EQ(inName,"m_localAnchor1") ) { return m_localAnchor1; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_groundAnchor2") ) { return m_groundAnchor2; }
		if (HX_FIELD_EQ(inName,"m_groundAnchor1") ) { return m_groundAnchor1; }
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

Dynamic B2GearJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"m_J") ) { m_J=inValue.Cast< ::box2D::dynamics::joints::B2Jacobian >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_mass") ) { m_mass=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_ratio") ) { m_ratio=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_impulse") ) { m_impulse=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_ground2") ) { m_ground2=inValue.Cast< ::box2D::dynamics::B2Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_ground1") ) { m_ground1=inValue.Cast< ::box2D::dynamics::B2Body >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_constant") ) { m_constant=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_revolute2") ) { m_revolute2=inValue.Cast< ::box2D::dynamics::joints::B2RevoluteJoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_revolute1") ) { m_revolute1=inValue.Cast< ::box2D::dynamics::joints::B2RevoluteJoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_prismatic2") ) { m_prismatic2=inValue.Cast< ::box2D::dynamics::joints::B2PrismaticJoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_prismatic1") ) { m_prismatic1=inValue.Cast< ::box2D::dynamics::joints::B2PrismaticJoint >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_localAnchor2") ) { m_localAnchor2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_localAnchor1") ) { m_localAnchor1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_groundAnchor2") ) { m_groundAnchor2=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_groundAnchor1") ) { m_groundAnchor1=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2GearJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_impulse"));
	outFields->push(HX_CSTRING("m_mass"));
	outFields->push(HX_CSTRING("m_ratio"));
	outFields->push(HX_CSTRING("m_constant"));
	outFields->push(HX_CSTRING("m_J"));
	outFields->push(HX_CSTRING("m_localAnchor2"));
	outFields->push(HX_CSTRING("m_localAnchor1"));
	outFields->push(HX_CSTRING("m_groundAnchor2"));
	outFields->push(HX_CSTRING("m_groundAnchor1"));
	outFields->push(HX_CSTRING("m_prismatic2"));
	outFields->push(HX_CSTRING("m_revolute2"));
	outFields->push(HX_CSTRING("m_prismatic1"));
	outFields->push(HX_CSTRING("m_revolute1"));
	outFields->push(HX_CSTRING("m_ground2"));
	outFields->push(HX_CSTRING("m_ground1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_impulse"),
	HX_CSTRING("m_mass"),
	HX_CSTRING("m_ratio"),
	HX_CSTRING("m_constant"),
	HX_CSTRING("m_J"),
	HX_CSTRING("m_localAnchor2"),
	HX_CSTRING("m_localAnchor1"),
	HX_CSTRING("m_groundAnchor2"),
	HX_CSTRING("m_groundAnchor1"),
	HX_CSTRING("m_prismatic2"),
	HX_CSTRING("m_revolute2"),
	HX_CSTRING("m_prismatic1"),
	HX_CSTRING("m_revolute1"),
	HX_CSTRING("m_ground2"),
	HX_CSTRING("m_ground1"),
	HX_CSTRING("solvePositionConstraints"),
	HX_CSTRING("solveVelocityConstraints"),
	HX_CSTRING("initVelocityConstraints"),
	HX_CSTRING("setRatio"),
	HX_CSTRING("getRatio"),
	HX_CSTRING("getReactionTorque"),
	HX_CSTRING("getReactionForce"),
	HX_CSTRING("getAnchorB"),
	HX_CSTRING("getAnchorA"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2GearJoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2GearJoint_obj::__mClass,"__mClass");
};

Class B2GearJoint_obj::__mClass;

void B2GearJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.joints.B2GearJoint"), hx::TCanCast< B2GearJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2GearJoint_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints
