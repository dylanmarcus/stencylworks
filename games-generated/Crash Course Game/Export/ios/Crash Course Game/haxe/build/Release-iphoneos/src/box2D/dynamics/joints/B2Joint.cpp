#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
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
#ifndef INCLUDED_box2D_dynamics_joints_B2FrictionJoint
#include <box2D/dynamics/joints/B2FrictionJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2FrictionJointDef
#include <box2D/dynamics/joints/B2FrictionJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2GearJoint
#include <box2D/dynamics/joints/B2GearJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2GearJointDef
#include <box2D/dynamics/joints/B2GearJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2JointDef
#include <box2D/dynamics/joints/B2JointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2JointEdge
#include <box2D/dynamics/joints/B2JointEdge.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2LineJoint
#include <box2D/dynamics/joints/B2LineJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2LineJointDef
#include <box2D/dynamics/joints/B2LineJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2MouseJoint
#include <box2D/dynamics/joints/B2MouseJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2MouseJointDef
#include <box2D/dynamics/joints/B2MouseJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2PrismaticJoint
#include <box2D/dynamics/joints/B2PrismaticJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2PrismaticJointDef
#include <box2D/dynamics/joints/B2PrismaticJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2PulleyJoint
#include <box2D/dynamics/joints/B2PulleyJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2PulleyJointDef
#include <box2D/dynamics/joints/B2PulleyJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2RevoluteJoint
#include <box2D/dynamics/joints/B2RevoluteJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2RevoluteJointDef
#include <box2D/dynamics/joints/B2RevoluteJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2WeldJoint
#include <box2D/dynamics/joints/B2WeldJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2WeldJointDef
#include <box2D/dynamics/joints/B2WeldJointDef.h>
#endif
namespace box2D{
namespace dynamics{
namespace joints{

Void B2Joint_obj::__construct(::box2D::dynamics::joints::B2JointDef def)
{
HX_STACK_PUSH("B2Joint::new","box2D/dynamics/joints/B2Joint.hx",216);
{
	HX_STACK_LINE(218)
	this->m_edgeA = ::box2D::dynamics::joints::B2JointEdge_obj::__new();
	HX_STACK_LINE(219)
	this->m_edgeB = ::box2D::dynamics::joints::B2JointEdge_obj::__new();
	HX_STACK_LINE(220)
	this->m_localCenterA = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(221)
	this->m_localCenterB = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(223)
	::box2D::common::B2Settings_obj::b2Assert((def->bodyA != def->bodyB));
	HX_STACK_LINE(224)
	this->m_type = def->type;
	HX_STACK_LINE(225)
	this->m_prev = null();
	HX_STACK_LINE(226)
	this->m_next = null();
	HX_STACK_LINE(227)
	this->m_bodyA = def->bodyA;
	HX_STACK_LINE(228)
	this->m_bodyB = def->bodyB;
	HX_STACK_LINE(229)
	this->m_collideConnected = def->collideConnected;
	HX_STACK_LINE(230)
	this->m_islandFlag = false;
	HX_STACK_LINE(231)
	this->m_userData = def->userData;
}
;
	return null();
}

B2Joint_obj::~B2Joint_obj() { }

Dynamic B2Joint_obj::__CreateEmpty() { return  new B2Joint_obj; }
hx::ObjectPtr< B2Joint_obj > B2Joint_obj::__new(::box2D::dynamics::joints::B2JointDef def)
{  hx::ObjectPtr< B2Joint_obj > result = new B2Joint_obj();
	result->__construct(def);
	return result;}

Dynamic B2Joint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2Joint_obj > result = new B2Joint_obj();
	result->__construct(inArgs[0]);
	return result;}

bool B2Joint_obj::solvePositionConstraints( Float baumgarte){
	HX_STACK_PUSH("B2Joint::solvePositionConstraints","box2D/dynamics/joints/B2Joint.hx",240);
	HX_STACK_THIS(this);
	HX_STACK_ARG(baumgarte,"baumgarte");
	HX_STACK_LINE(240)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(B2Joint_obj,solvePositionConstraints,return )

Void B2Joint_obj::finalizeVelocityConstraints( ){
{
		HX_STACK_PUSH("B2Joint::finalizeVelocityConstraints","box2D/dynamics/joints/B2Joint.hx",237);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Joint_obj,finalizeVelocityConstraints,(void))

Void B2Joint_obj::solveVelocityConstraints( ::box2D::dynamics::B2TimeStep step){
{
		HX_STACK_PUSH("B2Joint::solveVelocityConstraints","box2D/dynamics/joints/B2Joint.hx",236);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Joint_obj,solveVelocityConstraints,(void))

Void B2Joint_obj::initVelocityConstraints( ::box2D::dynamics::B2TimeStep step){
{
		HX_STACK_PUSH("B2Joint::initVelocityConstraints","box2D/dynamics/joints/B2Joint.hx",235);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Joint_obj,initVelocityConstraints,(void))

bool B2Joint_obj::isActive( ){
	HX_STACK_PUSH("B2Joint::isActive","box2D/dynamics/joints/B2Joint.hx",101);
	HX_STACK_THIS(this);
	HX_STACK_LINE(101)
	return (bool(this->m_bodyA->isActive()) && bool(this->m_bodyB->isActive()));
}


HX_DEFINE_DYNAMIC_FUNC0(B2Joint_obj,isActive,return )

Void B2Joint_obj::setUserData( Dynamic data){
{
		HX_STACK_PUSH("B2Joint::setUserData","box2D/dynamics/joints/B2Joint.hx",93);
		HX_STACK_THIS(this);
		HX_STACK_ARG(data,"data");
		HX_STACK_LINE(93)
		this->m_userData = data;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Joint_obj,setUserData,(void))

Dynamic B2Joint_obj::getUserData( ){
	HX_STACK_PUSH("B2Joint::getUserData","box2D/dynamics/joints/B2Joint.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_LINE(86)
	return this->m_userData;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Joint_obj,getUserData,return )

::box2D::dynamics::joints::B2Joint B2Joint_obj::getNext( ){
	HX_STACK_PUSH("B2Joint::getNext","box2D/dynamics/joints/B2Joint.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_LINE(79)
	return this->m_next;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Joint_obj,getNext,return )

::box2D::dynamics::B2Body B2Joint_obj::getBodyB( ){
	HX_STACK_PUSH("B2Joint::getBodyB","box2D/dynamics/joints/B2Joint.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_LINE(72)
	return this->m_bodyB;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Joint_obj,getBodyB,return )

::box2D::dynamics::B2Body B2Joint_obj::getBodyA( ){
	HX_STACK_PUSH("B2Joint::getBodyA","box2D/dynamics/joints/B2Joint.hx",64);
	HX_STACK_THIS(this);
	HX_STACK_LINE(64)
	return this->m_bodyA;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Joint_obj,getBodyA,return )

Float B2Joint_obj::getReactionTorque( Float inv_dt){
	HX_STACK_PUSH("B2Joint::getReactionTorque","box2D/dynamics/joints/B2Joint.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inv_dt,"inv_dt");
	HX_STACK_LINE(58)
	return 0.0;
}


HX_DEFINE_DYNAMIC_FUNC1(B2Joint_obj,getReactionTorque,return )

::box2D::common::math::B2Vec2 B2Joint_obj::getReactionForce( Float inv_dt){
	HX_STACK_PUSH("B2Joint::getReactionForce","box2D/dynamics/joints/B2Joint.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inv_dt,"inv_dt");
	HX_STACK_LINE(54)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Joint_obj,getReactionForce,return )

::box2D::common::math::B2Vec2 B2Joint_obj::getAnchorB( ){
	HX_STACK_PUSH("B2Joint::getAnchorB","box2D/dynamics/joints/B2Joint.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_LINE(49)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Joint_obj,getAnchorB,return )

::box2D::common::math::B2Vec2 B2Joint_obj::getAnchorA( ){
	HX_STACK_PUSH("B2Joint::getAnchorA","box2D/dynamics/joints/B2Joint.hx",45);
	HX_STACK_THIS(this);
	HX_STACK_LINE(45)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Joint_obj,getAnchorA,return )

int B2Joint_obj::getType( ){
	HX_STACK_PUSH("B2Joint::getType","box2D/dynamics/joints/B2Joint.hx",38);
	HX_STACK_THIS(this);
	HX_STACK_LINE(38)
	return this->m_type;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Joint_obj,getType,return )

::box2D::dynamics::joints::B2Joint B2Joint_obj::create( ::box2D::dynamics::joints::B2JointDef def,Dynamic allocator){
	HX_STACK_PUSH("B2Joint::create","box2D/dynamics/joints/B2Joint.hx",107);
	HX_STACK_ARG(def,"def");
	HX_STACK_ARG(allocator,"allocator");
	HX_STACK_LINE(108)
	::box2D::dynamics::joints::B2Joint joint = null();		HX_STACK_VAR(joint,"joint");
	HX_STACK_LINE(111)
	if (((def->type == ::box2D::dynamics::joints::B2Joint_obj::e_distanceJoint))){
		HX_STACK_LINE(112)
		joint = ::box2D::dynamics::joints::B2DistanceJoint_obj::__new(hx::TCast< box2D::dynamics::joints::B2DistanceJointDef >::cast(def));
	}
	else{
		HX_STACK_LINE(117)
		if (((def->type == ::box2D::dynamics::joints::B2Joint_obj::e_mouseJoint))){
			HX_STACK_LINE(118)
			joint = ::box2D::dynamics::joints::B2MouseJoint_obj::__new(hx::TCast< box2D::dynamics::joints::B2MouseJointDef >::cast(def));
		}
		else{
			HX_STACK_LINE(123)
			if (((def->type == ::box2D::dynamics::joints::B2Joint_obj::e_prismaticJoint))){
				HX_STACK_LINE(124)
				joint = ::box2D::dynamics::joints::B2PrismaticJoint_obj::__new(hx::TCast< box2D::dynamics::joints::B2PrismaticJointDef >::cast(def));
			}
			else{
				HX_STACK_LINE(129)
				if (((def->type == ::box2D::dynamics::joints::B2Joint_obj::e_revoluteJoint))){
					HX_STACK_LINE(130)
					joint = ::box2D::dynamics::joints::B2RevoluteJoint_obj::__new(hx::TCast< box2D::dynamics::joints::B2RevoluteJointDef >::cast(def));
				}
				else{
					HX_STACK_LINE(135)
					if (((def->type == ::box2D::dynamics::joints::B2Joint_obj::e_pulleyJoint))){
						HX_STACK_LINE(136)
						joint = ::box2D::dynamics::joints::B2PulleyJoint_obj::__new(hx::TCast< box2D::dynamics::joints::B2PulleyJointDef >::cast(def));
					}
					else{
						HX_STACK_LINE(141)
						if (((def->type == ::box2D::dynamics::joints::B2Joint_obj::e_gearJoint))){
							HX_STACK_LINE(142)
							joint = ::box2D::dynamics::joints::B2GearJoint_obj::__new(hx::TCast< box2D::dynamics::joints::B2GearJointDef >::cast(def));
						}
						else{
							HX_STACK_LINE(147)
							if (((def->type == ::box2D::dynamics::joints::B2Joint_obj::e_lineJoint))){
								HX_STACK_LINE(148)
								joint = ::box2D::dynamics::joints::B2LineJoint_obj::__new(hx::TCast< box2D::dynamics::joints::B2LineJointDef >::cast(def));
							}
							else{
								HX_STACK_LINE(153)
								if (((def->type == ::box2D::dynamics::joints::B2Joint_obj::e_weldJoint))){
									HX_STACK_LINE(154)
									joint = ::box2D::dynamics::joints::B2WeldJoint_obj::__new(hx::TCast< box2D::dynamics::joints::B2WeldJointDef >::cast(def));
								}
								else{
									HX_STACK_LINE(159)
									if (((def->type == ::box2D::dynamics::joints::B2Joint_obj::e_frictionJoint))){
										HX_STACK_LINE(160)
										joint = ::box2D::dynamics::joints::B2FrictionJoint_obj::__new(hx::TCast< box2D::dynamics::joints::B2FrictionJointDef >::cast(def));
									}
								}
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(166)
	return joint;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Joint_obj,create,return )

Void B2Joint_obj::destroy( ::box2D::dynamics::joints::B2Joint joint,Dynamic allocator){
{
		HX_STACK_PUSH("B2Joint::destroy","box2D/dynamics/joints/B2Joint.hx",169);
		HX_STACK_ARG(joint,"joint");
		HX_STACK_ARG(allocator,"allocator");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Joint_obj,destroy,(void))

int B2Joint_obj::e_unknownJoint;

int B2Joint_obj::e_revoluteJoint;

int B2Joint_obj::e_prismaticJoint;

int B2Joint_obj::e_distanceJoint;

int B2Joint_obj::e_pulleyJoint;

int B2Joint_obj::e_mouseJoint;

int B2Joint_obj::e_gearJoint;

int B2Joint_obj::e_lineJoint;

int B2Joint_obj::e_weldJoint;

int B2Joint_obj::e_frictionJoint;

int B2Joint_obj::e_inactiveLimit;

int B2Joint_obj::e_atLowerLimit;

int B2Joint_obj::e_atUpperLimit;

int B2Joint_obj::e_equalLimits;


B2Joint_obj::B2Joint_obj()
{
}

void B2Joint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2Joint);
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(m_invIB,"m_invIB");
	HX_MARK_MEMBER_NAME(m_invIA,"m_invIA");
	HX_MARK_MEMBER_NAME(m_invMassB,"m_invMassB");
	HX_MARK_MEMBER_NAME(m_invMassA,"m_invMassA");
	HX_MARK_MEMBER_NAME(m_localCenterB,"m_localCenterB");
	HX_MARK_MEMBER_NAME(m_localCenterA,"m_localCenterA");
	HX_MARK_MEMBER_NAME(m_userData,"m_userData");
	HX_MARK_MEMBER_NAME(m_collideConnected,"m_collideConnected");
	HX_MARK_MEMBER_NAME(m_islandFlag,"m_islandFlag");
	HX_MARK_MEMBER_NAME(m_bodyB,"m_bodyB");
	HX_MARK_MEMBER_NAME(m_bodyA,"m_bodyA");
	HX_MARK_MEMBER_NAME(m_edgeB,"m_edgeB");
	HX_MARK_MEMBER_NAME(m_edgeA,"m_edgeA");
	HX_MARK_MEMBER_NAME(m_next,"m_next");
	HX_MARK_MEMBER_NAME(m_prev,"m_prev");
	HX_MARK_MEMBER_NAME(m_type,"m_type");
	HX_MARK_END_CLASS();
}

void B2Joint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(m_invIB,"m_invIB");
	HX_VISIT_MEMBER_NAME(m_invIA,"m_invIA");
	HX_VISIT_MEMBER_NAME(m_invMassB,"m_invMassB");
	HX_VISIT_MEMBER_NAME(m_invMassA,"m_invMassA");
	HX_VISIT_MEMBER_NAME(m_localCenterB,"m_localCenterB");
	HX_VISIT_MEMBER_NAME(m_localCenterA,"m_localCenterA");
	HX_VISIT_MEMBER_NAME(m_userData,"m_userData");
	HX_VISIT_MEMBER_NAME(m_collideConnected,"m_collideConnected");
	HX_VISIT_MEMBER_NAME(m_islandFlag,"m_islandFlag");
	HX_VISIT_MEMBER_NAME(m_bodyB,"m_bodyB");
	HX_VISIT_MEMBER_NAME(m_bodyA,"m_bodyA");
	HX_VISIT_MEMBER_NAME(m_edgeB,"m_edgeB");
	HX_VISIT_MEMBER_NAME(m_edgeA,"m_edgeA");
	HX_VISIT_MEMBER_NAME(m_next,"m_next");
	HX_VISIT_MEMBER_NAME(m_prev,"m_prev");
	HX_VISIT_MEMBER_NAME(m_type,"m_type");
}

Dynamic B2Joint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"m_next") ) { return m_next; }
		if (HX_FIELD_EQ(inName,"m_prev") ) { return m_prev; }
		if (HX_FIELD_EQ(inName,"m_type") ) { return m_type; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"m_invIB") ) { return m_invIB; }
		if (HX_FIELD_EQ(inName,"m_invIA") ) { return m_invIA; }
		if (HX_FIELD_EQ(inName,"m_bodyB") ) { return m_bodyB; }
		if (HX_FIELD_EQ(inName,"m_bodyA") ) { return m_bodyA; }
		if (HX_FIELD_EQ(inName,"m_edgeB") ) { return m_edgeB; }
		if (HX_FIELD_EQ(inName,"m_edgeA") ) { return m_edgeA; }
		if (HX_FIELD_EQ(inName,"getNext") ) { return getNext_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isActive") ) { return isActive_dyn(); }
		if (HX_FIELD_EQ(inName,"getBodyB") ) { return getBodyB_dyn(); }
		if (HX_FIELD_EQ(inName,"getBodyA") ) { return getBodyA_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_invMassB") ) { return m_invMassB; }
		if (HX_FIELD_EQ(inName,"m_invMassA") ) { return m_invMassA; }
		if (HX_FIELD_EQ(inName,"m_userData") ) { return m_userData; }
		if (HX_FIELD_EQ(inName,"getAnchorB") ) { return getAnchorB_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnchorA") ) { return getAnchorA_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"e_gearJoint") ) { return e_gearJoint; }
		if (HX_FIELD_EQ(inName,"e_lineJoint") ) { return e_lineJoint; }
		if (HX_FIELD_EQ(inName,"e_weldJoint") ) { return e_weldJoint; }
		if (HX_FIELD_EQ(inName,"setUserData") ) { return setUserData_dyn(); }
		if (HX_FIELD_EQ(inName,"getUserData") ) { return getUserData_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"e_mouseJoint") ) { return e_mouseJoint; }
		if (HX_FIELD_EQ(inName,"m_islandFlag") ) { return m_islandFlag; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"e_pulleyJoint") ) { return e_pulleyJoint; }
		if (HX_FIELD_EQ(inName,"e_equalLimits") ) { return e_equalLimits; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"e_unknownJoint") ) { return e_unknownJoint; }
		if (HX_FIELD_EQ(inName,"e_atLowerLimit") ) { return e_atLowerLimit; }
		if (HX_FIELD_EQ(inName,"e_atUpperLimit") ) { return e_atUpperLimit; }
		if (HX_FIELD_EQ(inName,"m_localCenterB") ) { return m_localCenterB; }
		if (HX_FIELD_EQ(inName,"m_localCenterA") ) { return m_localCenterA; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"e_revoluteJoint") ) { return e_revoluteJoint; }
		if (HX_FIELD_EQ(inName,"e_distanceJoint") ) { return e_distanceJoint; }
		if (HX_FIELD_EQ(inName,"e_frictionJoint") ) { return e_frictionJoint; }
		if (HX_FIELD_EQ(inName,"e_inactiveLimit") ) { return e_inactiveLimit; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"e_prismaticJoint") ) { return e_prismaticJoint; }
		if (HX_FIELD_EQ(inName,"getReactionForce") ) { return getReactionForce_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getReactionTorque") ) { return getReactionTorque_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"m_collideConnected") ) { return m_collideConnected; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"initVelocityConstraints") ) { return initVelocityConstraints_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"solvePositionConstraints") ) { return solvePositionConstraints_dyn(); }
		if (HX_FIELD_EQ(inName,"solveVelocityConstraints") ) { return solveVelocityConstraints_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"finalizeVelocityConstraints") ) { return finalizeVelocityConstraints_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2Joint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_next") ) { m_next=inValue.Cast< ::box2D::dynamics::joints::B2Joint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_prev") ) { m_prev=inValue.Cast< ::box2D::dynamics::joints::B2Joint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_type") ) { m_type=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_invIB") ) { m_invIB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_invIA") ) { m_invIA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_bodyB") ) { m_bodyB=inValue.Cast< ::box2D::dynamics::B2Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_bodyA") ) { m_bodyA=inValue.Cast< ::box2D::dynamics::B2Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_edgeB") ) { m_edgeB=inValue.Cast< ::box2D::dynamics::joints::B2JointEdge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_edgeA") ) { m_edgeA=inValue.Cast< ::box2D::dynamics::joints::B2JointEdge >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_invMassB") ) { m_invMassB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_invMassA") ) { m_invMassA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_userData") ) { m_userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"e_gearJoint") ) { e_gearJoint=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_lineJoint") ) { e_lineJoint=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_weldJoint") ) { e_weldJoint=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"e_mouseJoint") ) { e_mouseJoint=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_islandFlag") ) { m_islandFlag=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"e_pulleyJoint") ) { e_pulleyJoint=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_equalLimits") ) { e_equalLimits=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"e_unknownJoint") ) { e_unknownJoint=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_atLowerLimit") ) { e_atLowerLimit=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_atUpperLimit") ) { e_atUpperLimit=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_localCenterB") ) { m_localCenterB=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_localCenterA") ) { m_localCenterA=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"e_revoluteJoint") ) { e_revoluteJoint=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_distanceJoint") ) { e_distanceJoint=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_frictionJoint") ) { e_frictionJoint=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_inactiveLimit") ) { e_inactiveLimit=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"e_prismaticJoint") ) { e_prismaticJoint=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"m_collideConnected") ) { m_collideConnected=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2Joint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ID"));
	outFields->push(HX_CSTRING("m_invIB"));
	outFields->push(HX_CSTRING("m_invIA"));
	outFields->push(HX_CSTRING("m_invMassB"));
	outFields->push(HX_CSTRING("m_invMassA"));
	outFields->push(HX_CSTRING("m_localCenterB"));
	outFields->push(HX_CSTRING("m_localCenterA"));
	outFields->push(HX_CSTRING("m_userData"));
	outFields->push(HX_CSTRING("m_collideConnected"));
	outFields->push(HX_CSTRING("m_islandFlag"));
	outFields->push(HX_CSTRING("m_bodyB"));
	outFields->push(HX_CSTRING("m_bodyA"));
	outFields->push(HX_CSTRING("m_edgeB"));
	outFields->push(HX_CSTRING("m_edgeA"));
	outFields->push(HX_CSTRING("m_next"));
	outFields->push(HX_CSTRING("m_prev"));
	outFields->push(HX_CSTRING("m_type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("e_unknownJoint"),
	HX_CSTRING("e_revoluteJoint"),
	HX_CSTRING("e_prismaticJoint"),
	HX_CSTRING("e_distanceJoint"),
	HX_CSTRING("e_pulleyJoint"),
	HX_CSTRING("e_mouseJoint"),
	HX_CSTRING("e_gearJoint"),
	HX_CSTRING("e_lineJoint"),
	HX_CSTRING("e_weldJoint"),
	HX_CSTRING("e_frictionJoint"),
	HX_CSTRING("e_inactiveLimit"),
	HX_CSTRING("e_atLowerLimit"),
	HX_CSTRING("e_atUpperLimit"),
	HX_CSTRING("e_equalLimits"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("ID"),
	HX_CSTRING("m_invIB"),
	HX_CSTRING("m_invIA"),
	HX_CSTRING("m_invMassB"),
	HX_CSTRING("m_invMassA"),
	HX_CSTRING("m_localCenterB"),
	HX_CSTRING("m_localCenterA"),
	HX_CSTRING("m_userData"),
	HX_CSTRING("m_collideConnected"),
	HX_CSTRING("m_islandFlag"),
	HX_CSTRING("m_bodyB"),
	HX_CSTRING("m_bodyA"),
	HX_CSTRING("m_edgeB"),
	HX_CSTRING("m_edgeA"),
	HX_CSTRING("m_next"),
	HX_CSTRING("m_prev"),
	HX_CSTRING("m_type"),
	HX_CSTRING("solvePositionConstraints"),
	HX_CSTRING("finalizeVelocityConstraints"),
	HX_CSTRING("solveVelocityConstraints"),
	HX_CSTRING("initVelocityConstraints"),
	HX_CSTRING("isActive"),
	HX_CSTRING("setUserData"),
	HX_CSTRING("getUserData"),
	HX_CSTRING("getNext"),
	HX_CSTRING("getBodyB"),
	HX_CSTRING("getBodyA"),
	HX_CSTRING("getReactionTorque"),
	HX_CSTRING("getReactionForce"),
	HX_CSTRING("getAnchorB"),
	HX_CSTRING("getAnchorA"),
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Joint_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2Joint_obj::e_unknownJoint,"e_unknownJoint");
	HX_MARK_MEMBER_NAME(B2Joint_obj::e_revoluteJoint,"e_revoluteJoint");
	HX_MARK_MEMBER_NAME(B2Joint_obj::e_prismaticJoint,"e_prismaticJoint");
	HX_MARK_MEMBER_NAME(B2Joint_obj::e_distanceJoint,"e_distanceJoint");
	HX_MARK_MEMBER_NAME(B2Joint_obj::e_pulleyJoint,"e_pulleyJoint");
	HX_MARK_MEMBER_NAME(B2Joint_obj::e_mouseJoint,"e_mouseJoint");
	HX_MARK_MEMBER_NAME(B2Joint_obj::e_gearJoint,"e_gearJoint");
	HX_MARK_MEMBER_NAME(B2Joint_obj::e_lineJoint,"e_lineJoint");
	HX_MARK_MEMBER_NAME(B2Joint_obj::e_weldJoint,"e_weldJoint");
	HX_MARK_MEMBER_NAME(B2Joint_obj::e_frictionJoint,"e_frictionJoint");
	HX_MARK_MEMBER_NAME(B2Joint_obj::e_inactiveLimit,"e_inactiveLimit");
	HX_MARK_MEMBER_NAME(B2Joint_obj::e_atLowerLimit,"e_atLowerLimit");
	HX_MARK_MEMBER_NAME(B2Joint_obj::e_atUpperLimit,"e_atUpperLimit");
	HX_MARK_MEMBER_NAME(B2Joint_obj::e_equalLimits,"e_equalLimits");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Joint_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2Joint_obj::e_unknownJoint,"e_unknownJoint");
	HX_VISIT_MEMBER_NAME(B2Joint_obj::e_revoluteJoint,"e_revoluteJoint");
	HX_VISIT_MEMBER_NAME(B2Joint_obj::e_prismaticJoint,"e_prismaticJoint");
	HX_VISIT_MEMBER_NAME(B2Joint_obj::e_distanceJoint,"e_distanceJoint");
	HX_VISIT_MEMBER_NAME(B2Joint_obj::e_pulleyJoint,"e_pulleyJoint");
	HX_VISIT_MEMBER_NAME(B2Joint_obj::e_mouseJoint,"e_mouseJoint");
	HX_VISIT_MEMBER_NAME(B2Joint_obj::e_gearJoint,"e_gearJoint");
	HX_VISIT_MEMBER_NAME(B2Joint_obj::e_lineJoint,"e_lineJoint");
	HX_VISIT_MEMBER_NAME(B2Joint_obj::e_weldJoint,"e_weldJoint");
	HX_VISIT_MEMBER_NAME(B2Joint_obj::e_frictionJoint,"e_frictionJoint");
	HX_VISIT_MEMBER_NAME(B2Joint_obj::e_inactiveLimit,"e_inactiveLimit");
	HX_VISIT_MEMBER_NAME(B2Joint_obj::e_atLowerLimit,"e_atLowerLimit");
	HX_VISIT_MEMBER_NAME(B2Joint_obj::e_atUpperLimit,"e_atUpperLimit");
	HX_VISIT_MEMBER_NAME(B2Joint_obj::e_equalLimits,"e_equalLimits");
};

Class B2Joint_obj::__mClass;

void B2Joint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.joints.B2Joint"), hx::TCanCast< B2Joint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2Joint_obj::__boot()
{
	e_unknownJoint= (int)0;
	e_revoluteJoint= (int)1;
	e_prismaticJoint= (int)2;
	e_distanceJoint= (int)3;
	e_pulleyJoint= (int)4;
	e_mouseJoint= (int)5;
	e_gearJoint= (int)6;
	e_lineJoint= (int)7;
	e_weldJoint= (int)8;
	e_frictionJoint= (int)9;
	e_inactiveLimit= (int)0;
	e_atLowerLimit= (int)1;
	e_atUpperLimit= (int)2;
	e_equalLimits= (int)3;
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints
