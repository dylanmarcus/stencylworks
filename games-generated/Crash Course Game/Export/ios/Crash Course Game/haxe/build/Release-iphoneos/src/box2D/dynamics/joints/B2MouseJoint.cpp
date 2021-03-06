#include <hxcpp.h>

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
#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2JointDef
#include <box2D/dynamics/joints/B2JointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2MouseJoint
#include <box2D/dynamics/joints/B2MouseJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2MouseJointDef
#include <box2D/dynamics/joints/B2MouseJointDef.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace box2D{
namespace dynamics{
namespace joints{

Void B2MouseJoint_obj::__construct(::box2D::dynamics::joints::B2MouseJointDef def)
{
HX_STACK_PUSH("B2MouseJoint::new","box2D/dynamics/joints/B2MouseJoint.hx",121);
{
	HX_STACK_LINE(122)
	super::__construct(def);
	HX_STACK_LINE(124)
	this->K = ::box2D::common::math::B2Mat22_obj::__new();
	HX_STACK_LINE(125)
	this->K1 = ::box2D::common::math::B2Mat22_obj::__new();
	HX_STACK_LINE(126)
	this->K2 = ::box2D::common::math::B2Mat22_obj::__new();
	HX_STACK_LINE(128)
	this->m_localAnchor = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(129)
	this->m_target = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(130)
	this->m_impulse = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(132)
	this->m_mass = ::box2D::common::math::B2Mat22_obj::__new();
	HX_STACK_LINE(133)
	this->m_C = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		::box2D::common::math::B2Vec2 _this = this->m_target;		HX_STACK_VAR(_this,"_this");
		::box2D::common::math::B2Vec2 v = def->target;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(140)
		_this->x = v->x;
		HX_STACK_LINE(140)
		_this->y = v->y;
	}
	HX_STACK_LINE(142)
	Float tX = (this->m_target->x - this->m_bodyB->m_xf->position->x);		HX_STACK_VAR(tX,"tX");
	HX_STACK_LINE(143)
	Float tY = (this->m_target->y - this->m_bodyB->m_xf->position->y);		HX_STACK_VAR(tY,"tY");
	HX_STACK_LINE(144)
	::box2D::common::math::B2Mat22 tMat = this->m_bodyB->m_xf->R;		HX_STACK_VAR(tMat,"tMat");
	HX_STACK_LINE(145)
	this->m_localAnchor->x = ((tX * tMat->col1->x) + (tY * tMat->col1->y));
	HX_STACK_LINE(146)
	this->m_localAnchor->y = ((tX * tMat->col2->x) + (tY * tMat->col2->y));
	HX_STACK_LINE(148)
	this->m_maxForce = def->maxForce;
	HX_STACK_LINE(149)
	{
		HX_STACK_LINE(149)
		::box2D::common::math::B2Vec2 _this = this->m_impulse;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(149)
		_this->x = 0.0;
		HX_STACK_LINE(149)
		_this->y = 0.0;
	}
	HX_STACK_LINE(151)
	this->m_frequencyHz = def->frequencyHz;
	HX_STACK_LINE(152)
	this->m_dampingRatio = def->dampingRatio;
	HX_STACK_LINE(154)
	this->m_beta = 0.0;
	HX_STACK_LINE(155)
	this->m_gamma = 0.0;
}
;
	return null();
}

B2MouseJoint_obj::~B2MouseJoint_obj() { }

Dynamic B2MouseJoint_obj::__CreateEmpty() { return  new B2MouseJoint_obj; }
hx::ObjectPtr< B2MouseJoint_obj > B2MouseJoint_obj::__new(::box2D::dynamics::joints::B2MouseJointDef def)
{  hx::ObjectPtr< B2MouseJoint_obj > result = new B2MouseJoint_obj();
	result->__construct(def);
	return result;}

Dynamic B2MouseJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2MouseJoint_obj > result = new B2MouseJoint_obj();
	result->__construct(inArgs[0]);
	return result;}

bool B2MouseJoint_obj::solvePositionConstraints( Float baumgarte){
	HX_STACK_PUSH("B2MouseJoint::solvePositionConstraints","box2D/dynamics/joints/B2MouseJoint.hx",284);
	HX_STACK_THIS(this);
	HX_STACK_ARG(baumgarte,"baumgarte");
	HX_STACK_LINE(284)
	return true;
}


Void B2MouseJoint_obj::solveVelocityConstraints( ::box2D::dynamics::B2TimeStep step){
{
		HX_STACK_PUSH("B2MouseJoint::solveVelocityConstraints","box2D/dynamics/joints/B2MouseJoint.hx",235);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
		HX_STACK_LINE(236)
		::box2D::dynamics::B2Body b = this->m_bodyB;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(238)
		::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
		HX_STACK_LINE(239)
		Float tX;		HX_STACK_VAR(tX,"tX");
		HX_STACK_LINE(240)
		Float tY;		HX_STACK_VAR(tY,"tY");
		HX_STACK_LINE(244)
		tMat = b->m_xf->R;
		HX_STACK_LINE(245)
		Float rX = (this->m_localAnchor->x - b->m_sweep->localCenter->x);		HX_STACK_VAR(rX,"rX");
		HX_STACK_LINE(246)
		Float rY = (this->m_localAnchor->y - b->m_sweep->localCenter->y);		HX_STACK_VAR(rY,"rY");
		HX_STACK_LINE(247)
		tX = ((tMat->col1->x * rX) + (tMat->col2->x * rY));
		HX_STACK_LINE(248)
		rY = ((tMat->col1->y * rX) + (tMat->col2->y * rY));
		HX_STACK_LINE(249)
		rX = tX;
		HX_STACK_LINE(253)
		Float CdotX = (b->m_linearVelocity->x + (-(b->m_angularVelocity) * rY));		HX_STACK_VAR(CdotX,"CdotX");
		HX_STACK_LINE(254)
		Float CdotY = (b->m_linearVelocity->y + (b->m_angularVelocity * rX));		HX_STACK_VAR(CdotY,"CdotY");
		HX_STACK_LINE(256)
		tMat = this->m_mass;
		HX_STACK_LINE(257)
		tX = ((CdotX + (this->m_beta * this->m_C->x)) + (this->m_gamma * this->m_impulse->x));
		HX_STACK_LINE(258)
		tY = ((CdotY + (this->m_beta * this->m_C->y)) + (this->m_gamma * this->m_impulse->y));
		HX_STACK_LINE(259)
		Float impulseX = -((((tMat->col1->x * tX) + (tMat->col2->x * tY))));		HX_STACK_VAR(impulseX,"impulseX");
		HX_STACK_LINE(260)
		Float impulseY = -((((tMat->col1->y * tX) + (tMat->col2->y * tY))));		HX_STACK_VAR(impulseY,"impulseY");
		HX_STACK_LINE(262)
		Float oldImpulseX = this->m_impulse->x;		HX_STACK_VAR(oldImpulseX,"oldImpulseX");
		HX_STACK_LINE(263)
		Float oldImpulseY = this->m_impulse->y;		HX_STACK_VAR(oldImpulseY,"oldImpulseY");
		HX_STACK_LINE(265)
		hx::AddEq(this->m_impulse->x,impulseX);
		HX_STACK_LINE(266)
		hx::AddEq(this->m_impulse->y,impulseY);
		HX_STACK_LINE(267)
		Float maxImpulse = (step->dt * this->m_maxForce);		HX_STACK_VAR(maxImpulse,"maxImpulse");
		HX_STACK_LINE(268)
		if (((this->m_impulse->lengthSquared() > (maxImpulse * maxImpulse)))){
			HX_STACK_LINE(269)
			this->m_impulse->multiply((Float(maxImpulse) / Float(this->m_impulse->length())));
		}
		HX_STACK_LINE(274)
		impulseX = (this->m_impulse->x - oldImpulseX);
		HX_STACK_LINE(275)
		impulseY = (this->m_impulse->y - oldImpulseY);
		HX_STACK_LINE(278)
		hx::AddEq(b->m_linearVelocity->x,(b->m_invMass * impulseX));
		HX_STACK_LINE(279)
		hx::AddEq(b->m_linearVelocity->y,(b->m_invMass * impulseY));
		HX_STACK_LINE(281)
		hx::AddEq(b->m_angularVelocity,(b->m_invI * (((rX * impulseY) - (rY * impulseX)))));
	}
return null();
}


Void B2MouseJoint_obj::initVelocityConstraints( ::box2D::dynamics::B2TimeStep step){
{
		HX_STACK_PUSH("B2MouseJoint::initVelocityConstraints","box2D/dynamics/joints/B2MouseJoint.hx",162);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
		HX_STACK_LINE(163)
		::box2D::dynamics::B2Body b = this->m_bodyB;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(165)
		Float mass = b->getMass();		HX_STACK_VAR(mass,"mass");
		HX_STACK_LINE(168)
		Float omega = ((2.0 * ::Math_obj::PI) * this->m_frequencyHz);		HX_STACK_VAR(omega,"omega");
		HX_STACK_LINE(171)
		Float d = (((2.0 * mass) * this->m_dampingRatio) * omega);		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(174)
		Float k = ((mass * omega) * omega);		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(180)
		this->m_gamma = (step->dt * ((d + (step->dt * k))));
		HX_STACK_LINE(181)
		this->m_gamma = (  (((this->m_gamma != (int)0))) ? Float((Float((int)1) / Float(this->m_gamma))) : Float(0.0) );
		HX_STACK_LINE(182)
		this->m_beta = ((step->dt * k) * this->m_gamma);
		HX_STACK_LINE(184)
		::box2D::common::math::B2Mat22 tMat;		HX_STACK_VAR(tMat,"tMat");
		HX_STACK_LINE(188)
		tMat = b->m_xf->R;
		HX_STACK_LINE(189)
		Float rX = (this->m_localAnchor->x - b->m_sweep->localCenter->x);		HX_STACK_VAR(rX,"rX");
		HX_STACK_LINE(190)
		Float rY = (this->m_localAnchor->y - b->m_sweep->localCenter->y);		HX_STACK_VAR(rY,"rY");
		HX_STACK_LINE(191)
		Float tX = ((tMat->col1->x * rX) + (tMat->col2->x * rY));		HX_STACK_VAR(tX,"tX");
		HX_STACK_LINE(192)
		rY = ((tMat->col1->y * rX) + (tMat->col2->y * rY));
		HX_STACK_LINE(193)
		rX = tX;
		HX_STACK_LINE(198)
		Float invMass = b->m_invMass;		HX_STACK_VAR(invMass,"invMass");
		HX_STACK_LINE(199)
		Float invI = b->m_invI;		HX_STACK_VAR(invI,"invI");
		HX_STACK_LINE(202)
		this->K1->col1->x = invMass;
		HX_STACK_LINE(202)
		this->K1->col2->x = 0.0;
		HX_STACK_LINE(203)
		this->K1->col1->y = 0.0;
		HX_STACK_LINE(203)
		this->K1->col2->y = invMass;
		HX_STACK_LINE(206)
		this->K2->col1->x = ((invI * rY) * rY);
		HX_STACK_LINE(206)
		this->K2->col2->x = ((-(invI) * rX) * rY);
		HX_STACK_LINE(207)
		this->K2->col1->y = ((-(invI) * rX) * rY);
		HX_STACK_LINE(207)
		this->K2->col2->y = ((invI * rX) * rX);
		HX_STACK_LINE(210)
		this->K->setM(this->K1);
		HX_STACK_LINE(211)
		this->K->addM(this->K2);
		HX_STACK_LINE(212)
		hx::AddEq(this->K->col1->x,this->m_gamma);
		HX_STACK_LINE(213)
		hx::AddEq(this->K->col2->y,this->m_gamma);
		HX_STACK_LINE(216)
		this->K->getInverse(this->m_mass);
		HX_STACK_LINE(219)
		this->m_C->x = ((b->m_sweep->c->x + rX) - this->m_target->x);
		HX_STACK_LINE(220)
		this->m_C->y = ((b->m_sweep->c->y + rY) - this->m_target->y);
		HX_STACK_LINE(223)
		hx::MultEq(b->m_angularVelocity,0.98);
		HX_STACK_LINE(226)
		hx::MultEq(this->m_impulse->x,step->dtRatio);
		HX_STACK_LINE(227)
		hx::MultEq(this->m_impulse->y,step->dtRatio);
		HX_STACK_LINE(229)
		hx::AddEq(b->m_linearVelocity->x,(invMass * this->m_impulse->x));
		HX_STACK_LINE(230)
		hx::AddEq(b->m_linearVelocity->y,(invMass * this->m_impulse->y));
		HX_STACK_LINE(232)
		hx::AddEq(b->m_angularVelocity,(invI * (((rX * this->m_impulse->y) - (rY * this->m_impulse->x)))));
	}
return null();
}


Void B2MouseJoint_obj::setDampingRatio( Float ratio){
{
		HX_STACK_PUSH("B2MouseJoint::setDampingRatio","box2D/dynamics/joints/B2MouseJoint.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ratio,"ratio");
		HX_STACK_LINE(114)
		this->m_dampingRatio = ratio;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2MouseJoint_obj,setDampingRatio,(void))

Float B2MouseJoint_obj::getDampingRatio( ){
	HX_STACK_PUSH("B2MouseJoint::getDampingRatio","box2D/dynamics/joints/B2MouseJoint.hx",108);
	HX_STACK_THIS(this);
	HX_STACK_LINE(108)
	return this->m_dampingRatio;
}


HX_DEFINE_DYNAMIC_FUNC0(B2MouseJoint_obj,getDampingRatio,return )

Void B2MouseJoint_obj::setFrequency( Float hz){
{
		HX_STACK_PUSH("B2MouseJoint::setFrequency","box2D/dynamics/joints/B2MouseJoint.hx",102);
		HX_STACK_THIS(this);
		HX_STACK_ARG(hz,"hz");
		HX_STACK_LINE(102)
		this->m_frequencyHz = hz;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2MouseJoint_obj,setFrequency,(void))

Float B2MouseJoint_obj::getFrequency( ){
	HX_STACK_PUSH("B2MouseJoint::getFrequency","box2D/dynamics/joints/B2MouseJoint.hx",96);
	HX_STACK_THIS(this);
	HX_STACK_LINE(96)
	return this->m_frequencyHz;
}


HX_DEFINE_DYNAMIC_FUNC0(B2MouseJoint_obj,getFrequency,return )

Void B2MouseJoint_obj::setMaxForce( Float maxForce){
{
		HX_STACK_PUSH("B2MouseJoint::setMaxForce","box2D/dynamics/joints/B2MouseJoint.hx",90);
		HX_STACK_THIS(this);
		HX_STACK_ARG(maxForce,"maxForce");
		HX_STACK_LINE(90)
		this->m_maxForce = maxForce;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2MouseJoint_obj,setMaxForce,(void))

Float B2MouseJoint_obj::getMaxForce( ){
	HX_STACK_PUSH("B2MouseJoint::getMaxForce","box2D/dynamics/joints/B2MouseJoint.hx",84);
	HX_STACK_THIS(this);
	HX_STACK_LINE(84)
	return this->m_maxForce;
}


HX_DEFINE_DYNAMIC_FUNC0(B2MouseJoint_obj,getMaxForce,return )

Void B2MouseJoint_obj::setTarget( ::box2D::common::math::B2Vec2 target){
{
		HX_STACK_PUSH("B2MouseJoint::setTarget","box2D/dynamics/joints/B2MouseJoint.hx",75);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(76)
		if (((this->m_bodyB->isAwake() == false))){
			HX_STACK_LINE(76)
			this->m_bodyB->setAwake(true);
		}
		HX_STACK_LINE(79)
		this->m_target = target;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2MouseJoint_obj,setTarget,(void))

::box2D::common::math::B2Vec2 B2MouseJoint_obj::getTarget( ){
	HX_STACK_PUSH("B2MouseJoint::getTarget","box2D/dynamics/joints/B2MouseJoint.hx",68);
	HX_STACK_THIS(this);
	HX_STACK_LINE(68)
	return this->m_target;
}


HX_DEFINE_DYNAMIC_FUNC0(B2MouseJoint_obj,getTarget,return )

Float B2MouseJoint_obj::getReactionTorque( Float inv_dt){
	HX_STACK_PUSH("B2MouseJoint::getReactionTorque","box2D/dynamics/joints/B2MouseJoint.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inv_dt,"inv_dt");
	HX_STACK_LINE(63)
	return 0.0;
}


::box2D::common::math::B2Vec2 B2MouseJoint_obj::getReactionForce( Float inv_dt){
	HX_STACK_PUSH("B2MouseJoint::getReactionForce","box2D/dynamics/joints/B2MouseJoint.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inv_dt,"inv_dt");
	HX_STACK_LINE(58)
	return ::box2D::common::math::B2Vec2_obj::__new((inv_dt * this->m_impulse->x),(inv_dt * this->m_impulse->y));
}


::box2D::common::math::B2Vec2 B2MouseJoint_obj::getAnchorB( ){
	HX_STACK_PUSH("B2MouseJoint::getAnchorB","box2D/dynamics/joints/B2MouseJoint.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_LINE(53)
	return this->m_bodyB->getWorldPoint(this->m_localAnchor);
}


::box2D::common::math::B2Vec2 B2MouseJoint_obj::getAnchorA( ){
	HX_STACK_PUSH("B2MouseJoint::getAnchorA","box2D/dynamics/joints/B2MouseJoint.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_LINE(49)
	return this->m_target;
}



B2MouseJoint_obj::B2MouseJoint_obj()
{
}

void B2MouseJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2MouseJoint);
	HX_MARK_MEMBER_NAME(m_gamma,"m_gamma");
	HX_MARK_MEMBER_NAME(m_beta,"m_beta");
	HX_MARK_MEMBER_NAME(m_dampingRatio,"m_dampingRatio");
	HX_MARK_MEMBER_NAME(m_frequencyHz,"m_frequencyHz");
	HX_MARK_MEMBER_NAME(m_maxForce,"m_maxForce");
	HX_MARK_MEMBER_NAME(m_C,"m_C");
	HX_MARK_MEMBER_NAME(m_mass,"m_mass");
	HX_MARK_MEMBER_NAME(m_impulse,"m_impulse");
	HX_MARK_MEMBER_NAME(m_target,"m_target");
	HX_MARK_MEMBER_NAME(m_localAnchor,"m_localAnchor");
	HX_MARK_MEMBER_NAME(K2,"K2");
	HX_MARK_MEMBER_NAME(K1,"K1");
	HX_MARK_MEMBER_NAME(K,"K");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2MouseJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_gamma,"m_gamma");
	HX_VISIT_MEMBER_NAME(m_beta,"m_beta");
	HX_VISIT_MEMBER_NAME(m_dampingRatio,"m_dampingRatio");
	HX_VISIT_MEMBER_NAME(m_frequencyHz,"m_frequencyHz");
	HX_VISIT_MEMBER_NAME(m_maxForce,"m_maxForce");
	HX_VISIT_MEMBER_NAME(m_C,"m_C");
	HX_VISIT_MEMBER_NAME(m_mass,"m_mass");
	HX_VISIT_MEMBER_NAME(m_impulse,"m_impulse");
	HX_VISIT_MEMBER_NAME(m_target,"m_target");
	HX_VISIT_MEMBER_NAME(m_localAnchor,"m_localAnchor");
	HX_VISIT_MEMBER_NAME(K2,"K2");
	HX_VISIT_MEMBER_NAME(K1,"K1");
	HX_VISIT_MEMBER_NAME(K,"K");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic B2MouseJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"K") ) { return K; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"K2") ) { return K2; }
		if (HX_FIELD_EQ(inName,"K1") ) { return K1; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"m_C") ) { return m_C; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_beta") ) { return m_beta; }
		if (HX_FIELD_EQ(inName,"m_mass") ) { return m_mass; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_gamma") ) { return m_gamma; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_target") ) { return m_target; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_impulse") ) { return m_impulse; }
		if (HX_FIELD_EQ(inName,"setTarget") ) { return setTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"getTarget") ) { return getTarget_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_maxForce") ) { return m_maxForce; }
		if (HX_FIELD_EQ(inName,"getAnchorB") ) { return getAnchorB_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnchorA") ) { return getAnchorA_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setMaxForce") ) { return setMaxForce_dyn(); }
		if (HX_FIELD_EQ(inName,"getMaxForce") ) { return getMaxForce_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setFrequency") ) { return setFrequency_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrequency") ) { return getFrequency_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_frequencyHz") ) { return m_frequencyHz; }
		if (HX_FIELD_EQ(inName,"m_localAnchor") ) { return m_localAnchor; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_dampingRatio") ) { return m_dampingRatio; }
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

Dynamic B2MouseJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"K") ) { K=inValue.Cast< ::box2D::common::math::B2Mat22 >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"K2") ) { K2=inValue.Cast< ::box2D::common::math::B2Mat22 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"K1") ) { K1=inValue.Cast< ::box2D::common::math::B2Mat22 >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"m_C") ) { m_C=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_beta") ) { m_beta=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_mass") ) { m_mass=inValue.Cast< ::box2D::common::math::B2Mat22 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_gamma") ) { m_gamma=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_target") ) { m_target=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_impulse") ) { m_impulse=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_maxForce") ) { m_maxForce=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_frequencyHz") ) { m_frequencyHz=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_localAnchor") ) { m_localAnchor=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_dampingRatio") ) { m_dampingRatio=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2MouseJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_gamma"));
	outFields->push(HX_CSTRING("m_beta"));
	outFields->push(HX_CSTRING("m_dampingRatio"));
	outFields->push(HX_CSTRING("m_frequencyHz"));
	outFields->push(HX_CSTRING("m_maxForce"));
	outFields->push(HX_CSTRING("m_C"));
	outFields->push(HX_CSTRING("m_mass"));
	outFields->push(HX_CSTRING("m_impulse"));
	outFields->push(HX_CSTRING("m_target"));
	outFields->push(HX_CSTRING("m_localAnchor"));
	outFields->push(HX_CSTRING("K2"));
	outFields->push(HX_CSTRING("K1"));
	outFields->push(HX_CSTRING("K"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_gamma"),
	HX_CSTRING("m_beta"),
	HX_CSTRING("m_dampingRatio"),
	HX_CSTRING("m_frequencyHz"),
	HX_CSTRING("m_maxForce"),
	HX_CSTRING("m_C"),
	HX_CSTRING("m_mass"),
	HX_CSTRING("m_impulse"),
	HX_CSTRING("m_target"),
	HX_CSTRING("m_localAnchor"),
	HX_CSTRING("solvePositionConstraints"),
	HX_CSTRING("solveVelocityConstraints"),
	HX_CSTRING("initVelocityConstraints"),
	HX_CSTRING("K2"),
	HX_CSTRING("K1"),
	HX_CSTRING("K"),
	HX_CSTRING("setDampingRatio"),
	HX_CSTRING("getDampingRatio"),
	HX_CSTRING("setFrequency"),
	HX_CSTRING("getFrequency"),
	HX_CSTRING("setMaxForce"),
	HX_CSTRING("getMaxForce"),
	HX_CSTRING("setTarget"),
	HX_CSTRING("getTarget"),
	HX_CSTRING("getReactionTorque"),
	HX_CSTRING("getReactionForce"),
	HX_CSTRING("getAnchorB"),
	HX_CSTRING("getAnchorA"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2MouseJoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2MouseJoint_obj::__mClass,"__mClass");
};

Class B2MouseJoint_obj::__mClass;

void B2MouseJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.joints.B2MouseJoint"), hx::TCanCast< B2MouseJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2MouseJoint_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints
