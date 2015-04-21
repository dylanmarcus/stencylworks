#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Math
#include <box2D/common/math/B2Math.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Sweep
#include <box2D/common/math/B2Sweep.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactImpulse
#include <box2D/dynamics/B2ContactImpulse.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactListener
#include <box2D/dynamics/B2ContactListener.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Island
#include <box2D/dynamics/B2Island.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2TimeStep
#include <box2D/dynamics/B2TimeStep.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2Contact
#include <box2D/dynamics/contacts/B2Contact.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactConstraint
#include <box2D/dynamics/contacts/B2ContactConstraint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactConstraintPoint
#include <box2D/dynamics/contacts/B2ContactConstraintPoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactSolver
#include <box2D/dynamics/contacts/B2ContactSolver.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
#endif
namespace box2D{
namespace dynamics{

Void B2Island_obj::__construct()
{
HX_STACK_PUSH("B2Island::new","box2D/dynamics/B2Island.hx",118);
{
	HX_STACK_LINE(119)
	this->m_bodies = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(120)
	this->m_contacts = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(121)
	this->m_joints = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

B2Island_obj::~B2Island_obj() { }

Dynamic B2Island_obj::__CreateEmpty() { return  new B2Island_obj; }
hx::ObjectPtr< B2Island_obj > B2Island_obj::__new()
{  hx::ObjectPtr< B2Island_obj > result = new B2Island_obj();
	result->__construct();
	return result;}

Dynamic B2Island_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2Island_obj > result = new B2Island_obj();
	result->__construct();
	return result;}

Void B2Island_obj::addJoint( ::box2D::dynamics::joints::B2Joint joint){
{
		HX_STACK_PUSH("B2Island::addJoint","box2D/dynamics/B2Island.hx",498);
		HX_STACK_THIS(this);
		HX_STACK_ARG(joint,"joint");
		HX_STACK_LINE(498)
		this->m_joints[(this->m_jointCount)++] = joint;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Island_obj,addJoint,(void))

Void B2Island_obj::addContact( ::box2D::dynamics::contacts::B2Contact contact){
{
		HX_STACK_PUSH("B2Island::addContact","box2D/dynamics/B2Island.hx",492);
		HX_STACK_THIS(this);
		HX_STACK_ARG(contact,"contact");
		HX_STACK_LINE(492)
		this->m_contacts[(this->m_contactCount)++] = contact;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Island_obj,addContact,(void))

Void B2Island_obj::addBody( ::box2D::dynamics::B2Body body){
{
		HX_STACK_PUSH("B2Island::addBody","box2D/dynamics/B2Island.hx",485);
		HX_STACK_THIS(this);
		HX_STACK_ARG(body,"body");
		HX_STACK_LINE(487)
		body->m_islandIndex = this->m_bodyCount;
		HX_STACK_LINE(488)
		this->m_bodies[(this->m_bodyCount)++] = body;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Island_obj,addBody,(void))

Void B2Island_obj::report( Array< ::Dynamic > constraints){
{
		HX_STACK_PUSH("B2Island::report","box2D/dynamics/B2Island.hx",463);
		HX_STACK_THIS(this);
		HX_STACK_ARG(constraints,"constraints");
		HX_STACK_LINE(464)
		if (((this->m_listener == null()))){
			HX_STACK_LINE(465)
			return null();
		}
		HX_STACK_LINE(469)
		{
			HX_STACK_LINE(469)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->m_contactCount;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(469)
			while(((_g1 < _g))){
				HX_STACK_LINE(469)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(471)
				::box2D::dynamics::contacts::B2Contact c = this->m_contacts->__get(i).StaticCast< ::box2D::dynamics::contacts::B2Contact >();		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(472)
				::box2D::dynamics::contacts::B2ContactConstraint cc = constraints->__get(i).StaticCast< ::box2D::dynamics::contacts::B2ContactConstraint >();		HX_STACK_VAR(cc,"cc");
				HX_STACK_LINE(474)
				{
					HX_STACK_LINE(474)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = cc->pointCount;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(474)
					while(((_g3 < _g2))){
						HX_STACK_LINE(474)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(476)
						::box2D::dynamics::B2Island_obj::s_impulse->normalImpulses[j] = cc->points->__get(j).StaticCast< ::box2D::dynamics::contacts::B2ContactConstraintPoint >()->normalImpulse;
						HX_STACK_LINE(477)
						::box2D::dynamics::B2Island_obj::s_impulse->tangentImpulses[j] = cc->points->__get(j).StaticCast< ::box2D::dynamics::contacts::B2ContactConstraintPoint >()->tangentImpulse;
					}
				}
				HX_STACK_LINE(479)
				this->m_listener->postSolve(c,::box2D::dynamics::B2Island_obj::s_impulse);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Island_obj,report,(void))

Void B2Island_obj::solveTOI( ::box2D::dynamics::B2TimeStep subStep){
{
		HX_STACK_PUSH("B2Island::solveTOI","box2D/dynamics/B2Island.hx",363);
		HX_STACK_THIS(this);
		HX_STACK_ARG(subStep,"subStep");
		HX_STACK_LINE(364)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(365)
		int j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(366)
		this->m_contactSolver->initialize(subStep,this->m_contacts,this->m_contactCount,this->m_allocator);
		HX_STACK_LINE(367)
		::box2D::dynamics::contacts::B2ContactSolver contactSolver = this->m_contactSolver;		HX_STACK_VAR(contactSolver,"contactSolver");
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->m_jointCount;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(374)
			while(((_g1 < _g))){
				HX_STACK_LINE(374)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(376)
				this->m_joints->__get(i1).StaticCast< ::box2D::dynamics::joints::B2Joint >()->initVelocityConstraints(subStep);
			}
		}
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = subStep->velocityIterations;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(381)
			while(((_g1 < _g))){
				HX_STACK_LINE(381)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(383)
				contactSolver->solveVelocityConstraints();
				HX_STACK_LINE(384)
				{
					HX_STACK_LINE(384)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->m_jointCount;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(384)
					while(((_g3 < _g2))){
						HX_STACK_LINE(384)
						int j1 = (_g3)++;		HX_STACK_VAR(j1,"j1");
						HX_STACK_LINE(386)
						this->m_joints->__get(j1).StaticCast< ::box2D::dynamics::joints::B2Joint >()->solveVelocityConstraints(subStep);
					}
				}
			}
		}
		HX_STACK_LINE(394)
		{
			HX_STACK_LINE(394)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->m_bodyCount;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(394)
			while(((_g1 < _g))){
				HX_STACK_LINE(394)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(396)
				::box2D::dynamics::B2Body b = this->m_bodies->__get(i1).StaticCast< ::box2D::dynamics::B2Body >();		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(398)
				if (((b->getType() == ::box2D::dynamics::B2Body_obj::b2_staticBody))){
					HX_STACK_LINE(399)
					continue;
				}
				HX_STACK_LINE(403)
				Float translationX = (subStep->dt * b->m_linearVelocity->x);		HX_STACK_VAR(translationX,"translationX");
				HX_STACK_LINE(404)
				Float translationY = (subStep->dt * b->m_linearVelocity->y);		HX_STACK_VAR(translationY,"translationY");
				HX_STACK_LINE(406)
				if (((((translationX * translationX) + (translationY * translationY)) > ::box2D::common::B2Settings_obj::b2_maxTranslationSquared))){
					HX_STACK_LINE(408)
					b->m_linearVelocity->normalize();
					HX_STACK_LINE(409)
					hx::MultEq(b->m_linearVelocity->x,(::box2D::common::B2Settings_obj::b2_maxTranslation * subStep->inv_dt));
					HX_STACK_LINE(410)
					hx::MultEq(b->m_linearVelocity->y,(::box2D::common::B2Settings_obj::b2_maxTranslation * subStep->inv_dt));
				}
				HX_STACK_LINE(413)
				Float rotation = (subStep->dt * b->m_angularVelocity);		HX_STACK_VAR(rotation,"rotation");
				HX_STACK_LINE(414)
				if ((((rotation * rotation) > ::box2D::common::B2Settings_obj::b2_maxRotationSquared))){
					HX_STACK_LINE(415)
					if (((b->m_angularVelocity < 0.0))){
						HX_STACK_LINE(417)
						b->m_angularVelocity = (-(::box2D::common::B2Settings_obj::b2_maxRotation) * subStep->inv_dt);
					}
					else{
						HX_STACK_LINE(421)
						b->m_angularVelocity = (::box2D::common::B2Settings_obj::b2_maxRotation * subStep->inv_dt);
					}
				}
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					::box2D::common::math::B2Vec2 _this = b->m_sweep->c0;		HX_STACK_VAR(_this,"_this");
					::box2D::common::math::B2Vec2 v = b->m_sweep->c;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(427)
					_this->x = v->x;
					HX_STACK_LINE(427)
					_this->y = v->y;
				}
				HX_STACK_LINE(428)
				b->m_sweep->a0 = b->m_sweep->a;
				HX_STACK_LINE(431)
				hx::AddEq(b->m_sweep->c->x,(subStep->dt * b->m_linearVelocity->x));
				HX_STACK_LINE(432)
				hx::AddEq(b->m_sweep->c->y,(subStep->dt * b->m_linearVelocity->y));
				HX_STACK_LINE(433)
				hx::AddEq(b->m_sweep->a,(subStep->dt * b->m_angularVelocity));
				HX_STACK_LINE(436)
				b->synchronizeTransform();
			}
		}
		HX_STACK_LINE(442)
		Float k_toiBaumgarte = 0.75;		HX_STACK_VAR(k_toiBaumgarte,"k_toiBaumgarte");
		HX_STACK_LINE(443)
		{
			HX_STACK_LINE(443)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = subStep->positionIterations;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(443)
			while(((_g1 < _g))){
				HX_STACK_LINE(443)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(445)
				bool contactsOkay = contactSolver->solvePositionConstraints(k_toiBaumgarte);		HX_STACK_VAR(contactsOkay,"contactsOkay");
				HX_STACK_LINE(446)
				bool jointsOkay = true;		HX_STACK_VAR(jointsOkay,"jointsOkay");
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(447)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->m_jointCount;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(447)
					while(((_g3 < _g2))){
						HX_STACK_LINE(447)
						int j1 = (_g3)++;		HX_STACK_VAR(j1,"j1");
						HX_STACK_LINE(449)
						bool jointOkay = this->m_joints->__get(j1).StaticCast< ::box2D::dynamics::joints::B2Joint >()->solvePositionConstraints(::box2D::common::B2Settings_obj::b2_contactBaumgarte);		HX_STACK_VAR(jointOkay,"jointOkay");
						HX_STACK_LINE(450)
						jointsOkay = (bool(jointsOkay) && bool(jointOkay));
					}
				}
				HX_STACK_LINE(453)
				if (((bool(contactsOkay) && bool(jointsOkay)))){
					HX_STACK_LINE(454)
					break;
				}
			}
		}
		HX_STACK_LINE(458)
		this->report(contactSolver->m_constraints);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Island_obj,solveTOI,(void))

Void B2Island_obj::solve( ::box2D::dynamics::B2TimeStep step,::box2D::common::math::B2Vec2 gravity,bool allowSleep){
{
		HX_STACK_PUSH("B2Island::solve","box2D/dynamics/B2Island.hx",165);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
		HX_STACK_ARG(gravity,"gravity");
		HX_STACK_ARG(allowSleep,"allowSleep");
		HX_STACK_LINE(166)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(167)
		int j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(168)
		::box2D::dynamics::B2Body b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(169)
		::box2D::dynamics::joints::B2Joint joint;		HX_STACK_VAR(joint,"joint");
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->m_bodyCount;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(172)
			while(((_g1 < _g))){
				HX_STACK_LINE(172)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(174)
				b = this->m_bodies->__get(i1).StaticCast< ::box2D::dynamics::B2Body >();
				HX_STACK_LINE(176)
				if (((b->getType() != ::box2D::dynamics::B2Body_obj::b2_dynamicBody))){
					HX_STACK_LINE(177)
					continue;
				}
				HX_STACK_LINE(187)
				if ((b->isIgnoringGravity())){
					HX_STACK_LINE(189)
					hx::AddEq(b->m_linearVelocity->x,(step->dt * ((b->m_invMass * b->m_force->x))));
					HX_STACK_LINE(190)
					hx::AddEq(b->m_linearVelocity->y,(step->dt * ((b->m_invMass * b->m_force->y))));
				}
				else{
					HX_STACK_LINE(195)
					hx::AddEq(b->m_linearVelocity->x,(step->dt * ((gravity->x + (b->m_invMass * b->m_force->x)))));
					HX_STACK_LINE(196)
					hx::AddEq(b->m_linearVelocity->y,(step->dt * ((gravity->y + (b->m_invMass * b->m_force->y)))));
				}
				HX_STACK_LINE(201)
				hx::AddEq(b->m_angularVelocity,((step->dt * b->m_invI) * b->m_torque));
				HX_STACK_LINE(210)
				b->m_linearVelocity->multiply(::box2D::common::math::B2Math_obj::clamp((1.0 - (step->dt * b->m_linearDamping)),0.0,1.0));
				HX_STACK_LINE(211)
				hx::MultEq(b->m_angularVelocity,::box2D::common::math::B2Math_obj::clamp((1.0 - (step->dt * b->m_angularDamping)),0.0,1.0));
			}
		}
		HX_STACK_LINE(214)
		this->m_contactSolver->initialize(step,this->m_contacts,this->m_contactCount,this->m_allocator);
		HX_STACK_LINE(215)
		::box2D::dynamics::contacts::B2ContactSolver contactSolver = this->m_contactSolver;		HX_STACK_VAR(contactSolver,"contactSolver");
		HX_STACK_LINE(218)
		contactSolver->initVelocityConstraints(step);
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->m_jointCount;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(220)
			while(((_g1 < _g))){
				HX_STACK_LINE(220)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(222)
				joint = this->m_joints->__get(i1).StaticCast< ::box2D::dynamics::joints::B2Joint >();
				HX_STACK_LINE(223)
				joint->initVelocityConstraints(step);
			}
		}
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = step->velocityIterations;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(227)
			while(((_g1 < _g))){
				HX_STACK_LINE(227)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(229)
				{
					HX_STACK_LINE(229)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->m_jointCount;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(229)
					while(((_g3 < _g2))){
						HX_STACK_LINE(229)
						int j1 = (_g3)++;		HX_STACK_VAR(j1,"j1");
						HX_STACK_LINE(231)
						joint = this->m_joints->__get(j1).StaticCast< ::box2D::dynamics::joints::B2Joint >();
						HX_STACK_LINE(232)
						joint->solveVelocityConstraints(step);
					}
				}
				HX_STACK_LINE(235)
				contactSolver->solveVelocityConstraints();
			}
		}
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->m_jointCount;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(239)
			while(((_g1 < _g))){
				HX_STACK_LINE(239)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(241)
				joint = this->m_joints->__get(i1).StaticCast< ::box2D::dynamics::joints::B2Joint >();
				HX_STACK_LINE(242)
				joint->finalizeVelocityConstraints();
			}
		}
		HX_STACK_LINE(244)
		contactSolver->finalizeVelocityConstraints();
		HX_STACK_LINE(247)
		{
			HX_STACK_LINE(247)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->m_bodyCount;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(247)
			while(((_g1 < _g))){
				HX_STACK_LINE(247)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(249)
				b = this->m_bodies->__get(i1).StaticCast< ::box2D::dynamics::B2Body >();
				HX_STACK_LINE(251)
				if (((b->getType() == ::box2D::dynamics::B2Body_obj::b2_staticBody))){
					HX_STACK_LINE(252)
					continue;
				}
				HX_STACK_LINE(256)
				Float translationX = (step->dt * b->m_linearVelocity->x);		HX_STACK_VAR(translationX,"translationX");
				HX_STACK_LINE(257)
				Float translationY = (step->dt * b->m_linearVelocity->y);		HX_STACK_VAR(translationY,"translationY");
				HX_STACK_LINE(259)
				if (((((translationX * translationX) + (translationY * translationY)) > ::box2D::common::B2Settings_obj::b2_maxTranslationSquared))){
					HX_STACK_LINE(261)
					b->m_linearVelocity->normalize();
					HX_STACK_LINE(262)
					hx::MultEq(b->m_linearVelocity->x,(::box2D::common::B2Settings_obj::b2_maxTranslation * step->inv_dt));
					HX_STACK_LINE(263)
					hx::MultEq(b->m_linearVelocity->y,(::box2D::common::B2Settings_obj::b2_maxTranslation * step->inv_dt));
				}
				HX_STACK_LINE(265)
				Float rotation = (step->dt * b->m_angularVelocity);		HX_STACK_VAR(rotation,"rotation");
				HX_STACK_LINE(266)
				if ((((rotation * rotation) > ::box2D::common::B2Settings_obj::b2_maxRotationSquared))){
					HX_STACK_LINE(267)
					if (((b->m_angularVelocity < 0.0))){
						HX_STACK_LINE(269)
						b->m_angularVelocity = (-(::box2D::common::B2Settings_obj::b2_maxRotation) * step->inv_dt);
					}
					else{
						HX_STACK_LINE(273)
						b->m_angularVelocity = (::box2D::common::B2Settings_obj::b2_maxRotation * step->inv_dt);
					}
				}
				HX_STACK_LINE(279)
				{
					HX_STACK_LINE(279)
					::box2D::common::math::B2Vec2 _this = b->m_sweep->c0;		HX_STACK_VAR(_this,"_this");
					::box2D::common::math::B2Vec2 v = b->m_sweep->c;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(279)
					_this->x = v->x;
					HX_STACK_LINE(279)
					_this->y = v->y;
				}
				HX_STACK_LINE(280)
				b->m_sweep->a0 = b->m_sweep->a;
				HX_STACK_LINE(284)
				hx::AddEq(b->m_sweep->c->x,(step->dt * b->m_linearVelocity->x));
				HX_STACK_LINE(285)
				hx::AddEq(b->m_sweep->c->y,(step->dt * b->m_linearVelocity->y));
				HX_STACK_LINE(286)
				hx::AddEq(b->m_sweep->a,(step->dt * b->m_angularVelocity));
				HX_STACK_LINE(289)
				b->synchronizeTransform();
			}
		}
		HX_STACK_LINE(295)
		{
			HX_STACK_LINE(295)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = step->positionIterations;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(295)
			while(((_g1 < _g))){
				HX_STACK_LINE(295)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(297)
				bool contactsOkay = contactSolver->solvePositionConstraints(::box2D::common::B2Settings_obj::b2_contactBaumgarte);		HX_STACK_VAR(contactsOkay,"contactsOkay");
				HX_STACK_LINE(299)
				bool jointsOkay = true;		HX_STACK_VAR(jointsOkay,"jointsOkay");
				HX_STACK_LINE(300)
				{
					HX_STACK_LINE(300)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->m_jointCount;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(300)
					while(((_g3 < _g2))){
						HX_STACK_LINE(300)
						int j1 = (_g3)++;		HX_STACK_VAR(j1,"j1");
						HX_STACK_LINE(302)
						joint = this->m_joints->__get(j1).StaticCast< ::box2D::dynamics::joints::B2Joint >();
						HX_STACK_LINE(303)
						bool jointOkay = joint->solvePositionConstraints(::box2D::common::B2Settings_obj::b2_contactBaumgarte);		HX_STACK_VAR(jointOkay,"jointOkay");
						HX_STACK_LINE(304)
						jointsOkay = (bool(jointsOkay) && bool(jointOkay));
					}
				}
				HX_STACK_LINE(307)
				if (((bool(contactsOkay) && bool(jointsOkay)))){
					HX_STACK_LINE(308)
					break;
				}
			}
		}
		HX_STACK_LINE(313)
		this->report(contactSolver->m_constraints);
		HX_STACK_LINE(315)
		if ((allowSleep)){
			HX_STACK_LINE(317)
			Float minSleepTime = 1.7976931348623158e+308;		HX_STACK_VAR(minSleepTime,"minSleepTime");
			HX_STACK_LINE(319)
			Float linTolSqr = (::box2D::common::B2Settings_obj::b2_linearSleepTolerance * ::box2D::common::B2Settings_obj::b2_linearSleepTolerance);		HX_STACK_VAR(linTolSqr,"linTolSqr");
			HX_STACK_LINE(320)
			Float angTolSqr = (::box2D::common::B2Settings_obj::b2_angularSleepTolerance * ::box2D::common::B2Settings_obj::b2_angularSleepTolerance);		HX_STACK_VAR(angTolSqr,"angTolSqr");
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(322)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->m_bodyCount;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(322)
				while(((_g1 < _g))){
					HX_STACK_LINE(322)
					int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(324)
					b = this->m_bodies->__get(i1).StaticCast< ::box2D::dynamics::B2Body >();
					HX_STACK_LINE(325)
					if (((b->getType() == ::box2D::dynamics::B2Body_obj::b2_staticBody))){
						HX_STACK_LINE(326)
						continue;
					}
					HX_STACK_LINE(330)
					if (((((int(b->m_flags) & int(::box2D::dynamics::B2Body_obj::e_allowSleepFlag))) == (int)0))){
						HX_STACK_LINE(332)
						b->m_sleepTime = 0.0;
						HX_STACK_LINE(333)
						minSleepTime = 0.0;
					}
					HX_STACK_LINE(336)
					if (((bool((bool((((int(b->m_flags) & int(::box2D::dynamics::B2Body_obj::e_allowSleepFlag))) == (int)0)) || bool(((b->m_angularVelocity * b->m_angularVelocity) > angTolSqr)))) || bool((::box2D::common::math::B2Math_obj::dot(b->m_linearVelocity,b->m_linearVelocity) > linTolSqr))))){
						HX_STACK_LINE(340)
						b->m_sleepTime = 0.0;
						HX_STACK_LINE(341)
						minSleepTime = 0.0;
					}
					else{
						HX_STACK_LINE(345)
						hx::AddEq(b->m_sleepTime,step->dt);
						HX_STACK_LINE(346)
						minSleepTime = ::box2D::common::math::B2Math_obj::min(minSleepTime,b->m_sleepTime);
					}
				}
			}
			HX_STACK_LINE(350)
			if (((minSleepTime >= ::box2D::common::B2Settings_obj::b2_timeToSleep))){
				HX_STACK_LINE(352)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->m_bodyCount;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(352)
				while(((_g1 < _g))){
					HX_STACK_LINE(352)
					int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(354)
					b = this->m_bodies->__get(i1).StaticCast< ::box2D::dynamics::B2Body >();
					HX_STACK_LINE(355)
					b->setAwake(false);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2Island_obj,solve,(void))

Void B2Island_obj::clear( ){
{
		HX_STACK_PUSH("B2Island::clear","box2D/dynamics/B2Island.hx",158);
		HX_STACK_THIS(this);
		HX_STACK_LINE(159)
		this->m_bodyCount = (int)0;
		HX_STACK_LINE(160)
		this->m_contactCount = (int)0;
		HX_STACK_LINE(161)
		this->m_jointCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Island_obj,clear,(void))

Void B2Island_obj::initialize( int bodyCapacity,int contactCapacity,int jointCapacity,Dynamic allocator,::box2D::dynamics::B2ContactListener listener,::box2D::dynamics::contacts::B2ContactSolver contactSolver){
{
		HX_STACK_PUSH("B2Island::initialize","box2D/dynamics/B2Island.hx",131);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bodyCapacity,"bodyCapacity");
		HX_STACK_ARG(contactCapacity,"contactCapacity");
		HX_STACK_ARG(jointCapacity,"jointCapacity");
		HX_STACK_ARG(allocator,"allocator");
		HX_STACK_ARG(listener,"listener");
		HX_STACK_ARG(contactSolver,"contactSolver");
		HX_STACK_LINE(132)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(134)
		this->m_bodyCapacity = bodyCapacity;
		HX_STACK_LINE(135)
		this->m_contactCapacity = contactCapacity;
		HX_STACK_LINE(136)
		this->m_jointCapacity = jointCapacity;
		HX_STACK_LINE(137)
		this->m_bodyCount = (int)0;
		HX_STACK_LINE(138)
		this->m_contactCount = (int)0;
		HX_STACK_LINE(139)
		this->m_jointCount = (int)0;
		HX_STACK_LINE(141)
		this->m_allocator = allocator;
		HX_STACK_LINE(142)
		this->m_listener = listener;
		HX_STACK_LINE(143)
		this->m_contactSolver = contactSolver;
		HX_STACK_LINE(145)
		{
			HX_STACK_LINE(145)
			int _g = this->m_bodies->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(145)
			while(((_g < bodyCapacity))){
				HX_STACK_LINE(145)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(146)
				this->m_bodies[i1] = null();
			}
		}
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			int _g = this->m_contacts->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(148)
			while(((_g < contactCapacity))){
				HX_STACK_LINE(148)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(149)
				this->m_contacts[i1] = null();
			}
		}
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			int _g = this->m_joints->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(151)
			while(((_g < jointCapacity))){
				HX_STACK_LINE(151)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(152)
				this->m_joints[i1] = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(B2Island_obj,initialize,(void))

::box2D::dynamics::B2ContactImpulse B2Island_obj::s_impulse;


B2Island_obj::B2Island_obj()
{
}

void B2Island_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2Island);
	HX_MARK_MEMBER_NAME(m_jointCapacity,"m_jointCapacity");
	HX_MARK_MEMBER_NAME(m_contactCapacity,"m_contactCapacity");
	HX_MARK_MEMBER_NAME(m_bodyCapacity,"m_bodyCapacity");
	HX_MARK_MEMBER_NAME(m_contactCount,"m_contactCount");
	HX_MARK_MEMBER_NAME(m_jointCount,"m_jointCount");
	HX_MARK_MEMBER_NAME(m_bodyCount,"m_bodyCount");
	HX_MARK_MEMBER_NAME(m_joints,"m_joints");
	HX_MARK_MEMBER_NAME(m_contacts,"m_contacts");
	HX_MARK_MEMBER_NAME(m_bodies,"m_bodies");
	HX_MARK_MEMBER_NAME(m_contactSolver,"m_contactSolver");
	HX_MARK_MEMBER_NAME(m_listener,"m_listener");
	HX_MARK_MEMBER_NAME(m_allocator,"m_allocator");
	HX_MARK_END_CLASS();
}

void B2Island_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_jointCapacity,"m_jointCapacity");
	HX_VISIT_MEMBER_NAME(m_contactCapacity,"m_contactCapacity");
	HX_VISIT_MEMBER_NAME(m_bodyCapacity,"m_bodyCapacity");
	HX_VISIT_MEMBER_NAME(m_contactCount,"m_contactCount");
	HX_VISIT_MEMBER_NAME(m_jointCount,"m_jointCount");
	HX_VISIT_MEMBER_NAME(m_bodyCount,"m_bodyCount");
	HX_VISIT_MEMBER_NAME(m_joints,"m_joints");
	HX_VISIT_MEMBER_NAME(m_contacts,"m_contacts");
	HX_VISIT_MEMBER_NAME(m_bodies,"m_bodies");
	HX_VISIT_MEMBER_NAME(m_contactSolver,"m_contactSolver");
	HX_VISIT_MEMBER_NAME(m_listener,"m_listener");
	HX_VISIT_MEMBER_NAME(m_allocator,"m_allocator");
}

Dynamic B2Island_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"solve") ) { return solve_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"report") ) { return report_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addBody") ) { return addBody_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_joints") ) { return m_joints; }
		if (HX_FIELD_EQ(inName,"m_bodies") ) { return m_bodies; }
		if (HX_FIELD_EQ(inName,"addJoint") ) { return addJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"solveTOI") ) { return solveTOI_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"s_impulse") ) { return s_impulse; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_contacts") ) { return m_contacts; }
		if (HX_FIELD_EQ(inName,"m_listener") ) { return m_listener; }
		if (HX_FIELD_EQ(inName,"addContact") ) { return addContact_dyn(); }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_bodyCount") ) { return m_bodyCount; }
		if (HX_FIELD_EQ(inName,"m_allocator") ) { return m_allocator; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_jointCount") ) { return m_jointCount; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_bodyCapacity") ) { return m_bodyCapacity; }
		if (HX_FIELD_EQ(inName,"m_contactCount") ) { return m_contactCount; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_jointCapacity") ) { return m_jointCapacity; }
		if (HX_FIELD_EQ(inName,"m_contactSolver") ) { return m_contactSolver; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"m_contactCapacity") ) { return m_contactCapacity; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2Island_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"m_joints") ) { m_joints=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_bodies") ) { m_bodies=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"s_impulse") ) { s_impulse=inValue.Cast< ::box2D::dynamics::B2ContactImpulse >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_contacts") ) { m_contacts=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_listener") ) { m_listener=inValue.Cast< ::box2D::dynamics::B2ContactListener >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_bodyCount") ) { m_bodyCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_allocator") ) { m_allocator=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_jointCount") ) { m_jointCount=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_bodyCapacity") ) { m_bodyCapacity=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_contactCount") ) { m_contactCount=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_jointCapacity") ) { m_jointCapacity=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_contactSolver") ) { m_contactSolver=inValue.Cast< ::box2D::dynamics::contacts::B2ContactSolver >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"m_contactCapacity") ) { m_contactCapacity=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2Island_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_jointCapacity"));
	outFields->push(HX_CSTRING("m_contactCapacity"));
	outFields->push(HX_CSTRING("m_bodyCapacity"));
	outFields->push(HX_CSTRING("m_contactCount"));
	outFields->push(HX_CSTRING("m_jointCount"));
	outFields->push(HX_CSTRING("m_bodyCount"));
	outFields->push(HX_CSTRING("m_joints"));
	outFields->push(HX_CSTRING("m_contacts"));
	outFields->push(HX_CSTRING("m_bodies"));
	outFields->push(HX_CSTRING("m_contactSolver"));
	outFields->push(HX_CSTRING("m_listener"));
	outFields->push(HX_CSTRING("m_allocator"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("s_impulse"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_jointCapacity"),
	HX_CSTRING("m_contactCapacity"),
	HX_CSTRING("m_bodyCapacity"),
	HX_CSTRING("m_contactCount"),
	HX_CSTRING("m_jointCount"),
	HX_CSTRING("m_bodyCount"),
	HX_CSTRING("m_joints"),
	HX_CSTRING("m_contacts"),
	HX_CSTRING("m_bodies"),
	HX_CSTRING("m_contactSolver"),
	HX_CSTRING("m_listener"),
	HX_CSTRING("m_allocator"),
	HX_CSTRING("addJoint"),
	HX_CSTRING("addContact"),
	HX_CSTRING("addBody"),
	HX_CSTRING("report"),
	HX_CSTRING("solveTOI"),
	HX_CSTRING("solve"),
	HX_CSTRING("clear"),
	HX_CSTRING("initialize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Island_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2Island_obj::s_impulse,"s_impulse");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Island_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2Island_obj::s_impulse,"s_impulse");
};

Class B2Island_obj::__mClass;

void B2Island_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.B2Island"), hx::TCanCast< B2Island_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2Island_obj::__boot()
{
	s_impulse= ::box2D::dynamics::B2ContactImpulse_obj::__new();
}

} // end namespace box2D
} // end namespace dynamics
