#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2AABB
#include <box2D/collision/B2AABB.h>
#endif
#ifndef INCLUDED_box2D_collision_B2ContactID
#include <box2D/collision/B2ContactID.h>
#endif
#ifndef INCLUDED_box2D_collision_B2DistanceProxy
#include <box2D/collision/B2DistanceProxy.h>
#endif
#ifndef INCLUDED_box2D_collision_B2Manifold
#include <box2D/collision/B2Manifold.h>
#endif
#ifndef INCLUDED_box2D_collision_B2ManifoldPoint
#include <box2D/collision/B2ManifoldPoint.h>
#endif
#ifndef INCLUDED_box2D_collision_B2TOIInput
#include <box2D/collision/B2TOIInput.h>
#endif
#ifndef INCLUDED_box2D_collision_B2TimeOfImpact
#include <box2D/collision/B2TimeOfImpact.h>
#endif
#ifndef INCLUDED_box2D_collision_B2WorldManifold
#include <box2D/collision/B2WorldManifold.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
#endif
#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Sweep
#include <box2D/common/math/B2Sweep.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Transform
#include <box2D/common/math/B2Transform.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactListener
#include <box2D/dynamics/B2ContactListener.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2Contact
#include <box2D/dynamics/contacts/B2Contact.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactEdge
#include <box2D/dynamics/contacts/B2ContactEdge.h>
#endif
namespace box2D{
namespace dynamics{
namespace contacts{

Void B2Contact_obj::__construct()
{
HX_STACK_PUSH("B2Contact::new","box2D/dynamics/contacts/B2Contact.hx",184);
{
	HX_STACK_LINE(186)
	this->m_nodeA = ::box2D::dynamics::contacts::B2ContactEdge_obj::__new();
	HX_STACK_LINE(187)
	this->m_nodeB = ::box2D::dynamics::contacts::B2ContactEdge_obj::__new();
	HX_STACK_LINE(188)
	this->m_manifold = ::box2D::collision::B2Manifold_obj::__new();
	HX_STACK_LINE(189)
	this->m_oldManifold = ::box2D::collision::B2Manifold_obj::__new();
}
;
	return null();
}

B2Contact_obj::~B2Contact_obj() { }

Dynamic B2Contact_obj::__CreateEmpty() { return  new B2Contact_obj; }
hx::ObjectPtr< B2Contact_obj > B2Contact_obj::__new()
{  hx::ObjectPtr< B2Contact_obj > result = new B2Contact_obj();
	result->__construct();
	return result;}

Dynamic B2Contact_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2Contact_obj > result = new B2Contact_obj();
	result->__construct();
	return result;}

Float B2Contact_obj::computeTOI( ::box2D::common::math::B2Sweep sweepA,::box2D::common::math::B2Sweep sweepB){
	HX_STACK_PUSH("B2Contact::computeTOI","box2D/dynamics/contacts/B2Contact.hx",353);
	HX_STACK_THIS(this);
	HX_STACK_ARG(sweepA,"sweepA");
	HX_STACK_ARG(sweepB,"sweepB");
	HX_STACK_LINE(354)
	::box2D::dynamics::contacts::B2Contact_obj::s_input->proxyA->set(this->m_fixtureA->getShape());
	HX_STACK_LINE(355)
	::box2D::dynamics::contacts::B2Contact_obj::s_input->proxyB->set(this->m_fixtureB->getShape());
	HX_STACK_LINE(356)
	::box2D::dynamics::contacts::B2Contact_obj::s_input->sweepA = sweepA;
	HX_STACK_LINE(357)
	::box2D::dynamics::contacts::B2Contact_obj::s_input->sweepB = sweepB;
	HX_STACK_LINE(358)
	::box2D::dynamics::contacts::B2Contact_obj::s_input->tolerance = ::box2D::common::B2Settings_obj::b2_linearSlop;
	HX_STACK_LINE(359)
	return ::box2D::collision::B2TimeOfImpact_obj::timeOfImpact(::box2D::dynamics::contacts::B2Contact_obj::s_input);
}


HX_DEFINE_DYNAMIC_FUNC2(B2Contact_obj,computeTOI,return )

Void B2Contact_obj::evaluate( ){
{
		HX_STACK_PUSH("B2Contact::evaluate","box2D/dynamics/contacts/B2Contact.hx",349);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Contact_obj,evaluate,(void))

Void B2Contact_obj::update( ::box2D::dynamics::B2ContactListener listener){
{
		HX_STACK_PUSH("B2Contact::update","box2D/dynamics/contacts/B2Contact.hx",238);
		HX_STACK_THIS(this);
		HX_STACK_ARG(listener,"listener");
		HX_STACK_LINE(240)
		::box2D::collision::B2Manifold tManifold = this->m_oldManifold;		HX_STACK_VAR(tManifold,"tManifold");
		HX_STACK_LINE(241)
		this->m_oldManifold = this->m_manifold;
		HX_STACK_LINE(242)
		this->m_manifold = tManifold;
		HX_STACK_LINE(245)
		hx::OrEq(this->m_flags,::box2D::dynamics::contacts::B2Contact_obj::e_enabledFlag);
		HX_STACK_LINE(247)
		bool touching = false;		HX_STACK_VAR(touching,"touching");
		HX_STACK_LINE(248)
		bool wasTouching = (((int(this->m_flags) & int(::box2D::dynamics::contacts::B2Contact_obj::e_touchingFlag))) == ::box2D::dynamics::contacts::B2Contact_obj::e_touchingFlag);		HX_STACK_VAR(wasTouching,"wasTouching");
		HX_STACK_LINE(250)
		::box2D::dynamics::B2Body bodyA = this->m_fixtureA->m_body;		HX_STACK_VAR(bodyA,"bodyA");
		HX_STACK_LINE(251)
		::box2D::dynamics::B2Body bodyB = this->m_fixtureB->m_body;		HX_STACK_VAR(bodyB,"bodyB");
		HX_STACK_LINE(253)
		bool aabbOverlap = this->m_fixtureA->m_aabb->testOverlap(this->m_fixtureB->m_aabb);		HX_STACK_VAR(aabbOverlap,"aabbOverlap");
		HX_STACK_LINE(256)
		if (((((int(this->m_flags) & int(::box2D::dynamics::contacts::B2Contact_obj::e_sensorFlag))) != (int)0))){
			HX_STACK_LINE(258)
			if ((aabbOverlap)){
				HX_STACK_LINE(260)
				::box2D::collision::shapes::B2Shape shapeA = this->m_fixtureA->getShape();		HX_STACK_VAR(shapeA,"shapeA");
				HX_STACK_LINE(261)
				::box2D::collision::shapes::B2Shape shapeB = this->m_fixtureB->getShape();		HX_STACK_VAR(shapeB,"shapeB");
				HX_STACK_LINE(262)
				::box2D::common::math::B2Transform xfA = bodyA->getTransform();		HX_STACK_VAR(xfA,"xfA");
				HX_STACK_LINE(263)
				::box2D::common::math::B2Transform xfB = bodyB->getTransform();		HX_STACK_VAR(xfB,"xfB");
				HX_STACK_LINE(264)
				touching = ::box2D::collision::shapes::B2Shape_obj::testOverlap(shapeA,xfA,shapeB,xfB);
			}
			HX_STACK_LINE(268)
			this->m_manifold->m_pointCount = (int)0;
		}
		else{
			HX_STACK_LINE(273)
			if (((bool((bool((bool((bodyA->getType() != ::box2D::dynamics::B2Body_obj::b2_dynamicBody)) || bool(bodyA->isBullet()))) || bool((bodyB->getType() != ::box2D::dynamics::B2Body_obj::b2_dynamicBody)))) || bool(bodyB->isBullet())))){
				HX_STACK_LINE(274)
				hx::OrEq(this->m_flags,::box2D::dynamics::contacts::B2Contact_obj::e_continuousFlag);
			}
			else{
				HX_STACK_LINE(278)
				hx::AndEq(this->m_flags,~(int)(::box2D::dynamics::contacts::B2Contact_obj::e_continuousFlag));
			}
			HX_STACK_LINE(282)
			if ((aabbOverlap)){
				HX_STACK_LINE(284)
				this->evaluate();
				HX_STACK_LINE(286)
				touching = (this->m_manifold->m_pointCount > (int)0);
				HX_STACK_LINE(290)
				{
					HX_STACK_LINE(290)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->m_manifold->m_pointCount;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(290)
					while(((_g1 < _g))){
						HX_STACK_LINE(290)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(292)
						::box2D::collision::B2ManifoldPoint mp2 = this->m_manifold->m_points->__get(i).StaticCast< ::box2D::collision::B2ManifoldPoint >();		HX_STACK_VAR(mp2,"mp2");
						HX_STACK_LINE(293)
						mp2->m_normalImpulse = 0.0;
						HX_STACK_LINE(294)
						mp2->m_tangentImpulse = 0.0;
						HX_STACK_LINE(295)
						::box2D::collision::B2ContactID id2 = mp2->m_id;		HX_STACK_VAR(id2,"id2");
						HX_STACK_LINE(297)
						{
							HX_STACK_LINE(297)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							int _g2 = this->m_oldManifold->m_pointCount;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(297)
							while(((_g3 < _g2))){
								HX_STACK_LINE(297)
								int j = (_g3)++;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(299)
								::box2D::collision::B2ManifoldPoint mp1 = this->m_oldManifold->m_points->__get(j).StaticCast< ::box2D::collision::B2ManifoldPoint >();		HX_STACK_VAR(mp1,"mp1");
								HX_STACK_LINE(301)
								if (((mp1->m_id->get_key() == id2->get_key()))){
									HX_STACK_LINE(303)
									mp2->m_normalImpulse = mp1->m_normalImpulse;
									HX_STACK_LINE(304)
									mp2->m_tangentImpulse = mp1->m_tangentImpulse;
									HX_STACK_LINE(305)
									break;
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(312)
				this->m_manifold->m_pointCount = (int)0;
			}
			HX_STACK_LINE(315)
			if (((touching != wasTouching))){
				HX_STACK_LINE(317)
				bodyA->setAwake(true);
				HX_STACK_LINE(318)
				bodyB->setAwake(true);
			}
		}
		HX_STACK_LINE(322)
		if ((touching)){
			HX_STACK_LINE(323)
			hx::OrEq(this->m_flags,::box2D::dynamics::contacts::B2Contact_obj::e_touchingFlag);
		}
		else{
			HX_STACK_LINE(327)
			hx::AndEq(this->m_flags,~(int)(::box2D::dynamics::contacts::B2Contact_obj::e_touchingFlag));
		}
		HX_STACK_LINE(331)
		if (((bool((wasTouching == false)) && bool((touching == true))))){
			HX_STACK_LINE(332)
			listener->beginContact(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(336)
		if (((bool((wasTouching == true)) && bool((touching == false))))){
			HX_STACK_LINE(337)
			listener->endContact(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(341)
		if (((((int(this->m_flags) & int(::box2D::dynamics::contacts::B2Contact_obj::e_sensorFlag))) == (int)0))){
			HX_STACK_LINE(342)
			listener->preSolve(hx::ObjectPtr<OBJ_>(this),this->m_oldManifold);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Contact_obj,update,(void))

Void B2Contact_obj::reset( ::box2D::dynamics::B2Fixture fixtureA,::box2D::dynamics::B2Fixture fixtureB){
{
		HX_STACK_PUSH("B2Contact::reset","box2D/dynamics/contacts/B2Contact.hx",196);
		HX_STACK_THIS(this);
		HX_STACK_ARG(fixtureA,"fixtureA");
		HX_STACK_ARG(fixtureB,"fixtureB");
		HX_STACK_LINE(197)
		this->m_flags = ::box2D::dynamics::contacts::B2Contact_obj::e_enabledFlag;
		HX_STACK_LINE(199)
		if (((bool((fixtureA == null())) || bool((fixtureB == null()))))){
			HX_STACK_LINE(200)
			this->m_fixtureA = null();
			HX_STACK_LINE(201)
			this->m_fixtureB = null();
			HX_STACK_LINE(202)
			return null();
		}
		HX_STACK_LINE(205)
		if (((bool(fixtureA->isSensor()) || bool(fixtureB->isSensor())))){
			HX_STACK_LINE(206)
			hx::OrEq(this->m_flags,::box2D::dynamics::contacts::B2Contact_obj::e_sensorFlag);
		}
		HX_STACK_LINE(210)
		::box2D::dynamics::B2Body bodyA = fixtureA->getBody();		HX_STACK_VAR(bodyA,"bodyA");
		HX_STACK_LINE(211)
		::box2D::dynamics::B2Body bodyB = fixtureB->getBody();		HX_STACK_VAR(bodyB,"bodyB");
		HX_STACK_LINE(213)
		if (((bool((bool((bool((bodyA->getType() != ::box2D::dynamics::B2Body_obj::b2_dynamicBody)) || bool(bodyA->isBullet()))) || bool((bodyB->getType() != ::box2D::dynamics::B2Body_obj::b2_dynamicBody)))) || bool(bodyB->isBullet())))){
			HX_STACK_LINE(214)
			hx::OrEq(this->m_flags,::box2D::dynamics::contacts::B2Contact_obj::e_continuousFlag);
		}
		HX_STACK_LINE(218)
		this->m_fixtureA = fixtureA;
		HX_STACK_LINE(219)
		this->m_fixtureB = fixtureB;
		HX_STACK_LINE(221)
		this->m_manifold->m_pointCount = (int)0;
		HX_STACK_LINE(223)
		this->m_prev = null();
		HX_STACK_LINE(224)
		this->m_next = null();
		HX_STACK_LINE(226)
		this->m_nodeA->contact = null();
		HX_STACK_LINE(227)
		this->m_nodeA->prev = null();
		HX_STACK_LINE(228)
		this->m_nodeA->next = null();
		HX_STACK_LINE(229)
		this->m_nodeA->other = null();
		HX_STACK_LINE(231)
		this->m_nodeB->contact = null();
		HX_STACK_LINE(232)
		this->m_nodeB->prev = null();
		HX_STACK_LINE(233)
		this->m_nodeB->next = null();
		HX_STACK_LINE(234)
		this->m_nodeB->other = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2Contact_obj,reset,(void))

Void B2Contact_obj::flagForFiltering( ){
{
		HX_STACK_PUSH("B2Contact::flagForFiltering","box2D/dynamics/contacts/B2Contact.hx",159);
		HX_STACK_THIS(this);
		HX_STACK_LINE(159)
		hx::OrEq(this->m_flags,::box2D::dynamics::contacts::B2Contact_obj::e_filterFlag);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2Contact_obj,flagForFiltering,(void))

::box2D::dynamics::B2Fixture B2Contact_obj::getFixtureB( ){
	HX_STACK_PUSH("B2Contact::getFixtureB","box2D/dynamics/contacts/B2Contact.hx",151);
	HX_STACK_THIS(this);
	HX_STACK_LINE(151)
	return this->m_fixtureB;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Contact_obj,getFixtureB,return )

::box2D::dynamics::B2Fixture B2Contact_obj::getFixtureA( ){
	HX_STACK_PUSH("B2Contact::getFixtureA","box2D/dynamics/contacts/B2Contact.hx",143);
	HX_STACK_THIS(this);
	HX_STACK_LINE(143)
	return this->m_fixtureA;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Contact_obj,getFixtureA,return )

::box2D::dynamics::contacts::B2Contact B2Contact_obj::getNext( ){
	HX_STACK_PUSH("B2Contact::getNext","box2D/dynamics/contacts/B2Contact.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_LINE(135)
	return this->m_next;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Contact_obj,getNext,return )

bool B2Contact_obj::isEnabled( ){
	HX_STACK_PUSH("B2Contact::isEnabled","box2D/dynamics/contacts/B2Contact.hx",128);
	HX_STACK_THIS(this);
	HX_STACK_LINE(128)
	return (((int(this->m_flags) & int(::box2D::dynamics::contacts::B2Contact_obj::e_enabledFlag))) == ::box2D::dynamics::contacts::B2Contact_obj::e_enabledFlag);
}


HX_DEFINE_DYNAMIC_FUNC0(B2Contact_obj,isEnabled,return )

Void B2Contact_obj::setEnabled( bool flag){
{
		HX_STACK_PUSH("B2Contact::setEnabled","box2D/dynamics/contacts/B2Contact.hx",113);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flag,"flag");
		HX_STACK_LINE(113)
		if ((flag)){
			HX_STACK_LINE(115)
			hx::OrEq(this->m_flags,::box2D::dynamics::contacts::B2Contact_obj::e_enabledFlag);
		}
		else{
			HX_STACK_LINE(119)
			hx::AndEq(this->m_flags,~(int)(::box2D::dynamics::contacts::B2Contact_obj::e_enabledFlag));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Contact_obj,setEnabled,(void))

bool B2Contact_obj::isSensor( ){
	HX_STACK_PUSH("B2Contact::isSensor","box2D/dynamics/contacts/B2Contact.hx",104);
	HX_STACK_THIS(this);
	HX_STACK_LINE(104)
	return (((int(this->m_flags) & int(::box2D::dynamics::contacts::B2Contact_obj::e_sensorFlag))) == ::box2D::dynamics::contacts::B2Contact_obj::e_sensorFlag);
}


HX_DEFINE_DYNAMIC_FUNC0(B2Contact_obj,isSensor,return )

Void B2Contact_obj::setSensor( bool sensor){
{
		HX_STACK_PUSH("B2Contact::setSensor","box2D/dynamics/contacts/B2Contact.hx",90);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sensor,"sensor");
		HX_STACK_LINE(90)
		if ((sensor)){
			HX_STACK_LINE(92)
			hx::OrEq(this->m_flags,::box2D::dynamics::contacts::B2Contact_obj::e_sensorFlag);
		}
		else{
			HX_STACK_LINE(96)
			hx::AndEq(this->m_flags,~(int)(::box2D::dynamics::contacts::B2Contact_obj::e_sensorFlag));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Contact_obj,setSensor,(void))

bool B2Contact_obj::isContinuous( ){
	HX_STACK_PUSH("B2Contact::isContinuous","box2D/dynamics/contacts/B2Contact.hx",83);
	HX_STACK_THIS(this);
	HX_STACK_LINE(83)
	return (((int(this->m_flags) & int(::box2D::dynamics::contacts::B2Contact_obj::e_continuousFlag))) == ::box2D::dynamics::contacts::B2Contact_obj::e_continuousFlag);
}


HX_DEFINE_DYNAMIC_FUNC0(B2Contact_obj,isContinuous,return )

bool B2Contact_obj::isTouching( ){
	HX_STACK_PUSH("B2Contact::isTouching","box2D/dynamics/contacts/B2Contact.hx",75);
	HX_STACK_THIS(this);
	HX_STACK_LINE(75)
	return (((int(this->m_flags) & int(::box2D::dynamics::contacts::B2Contact_obj::e_touchingFlag))) == ::box2D::dynamics::contacts::B2Contact_obj::e_touchingFlag);
}


HX_DEFINE_DYNAMIC_FUNC0(B2Contact_obj,isTouching,return )

Void B2Contact_obj::getWorldManifold( ::box2D::collision::B2WorldManifold worldManifold){
{
		HX_STACK_PUSH("B2Contact::getWorldManifold","box2D/dynamics/contacts/B2Contact.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_ARG(worldManifold,"worldManifold");
		HX_STACK_LINE(63)
		::box2D::dynamics::B2Body bodyA = this->m_fixtureA->getBody();		HX_STACK_VAR(bodyA,"bodyA");
		HX_STACK_LINE(64)
		::box2D::dynamics::B2Body bodyB = this->m_fixtureB->getBody();		HX_STACK_VAR(bodyB,"bodyB");
		HX_STACK_LINE(65)
		::box2D::collision::shapes::B2Shape shapeA = this->m_fixtureA->getShape();		HX_STACK_VAR(shapeA,"shapeA");
		HX_STACK_LINE(66)
		::box2D::collision::shapes::B2Shape shapeB = this->m_fixtureB->getShape();		HX_STACK_VAR(shapeB,"shapeB");
		HX_STACK_LINE(68)
		worldManifold->initialize(this->m_manifold,bodyA->getTransform(),shapeA->m_radius,bodyB->getTransform(),shapeB->m_radius);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2Contact_obj,getWorldManifold,(void))

::box2D::collision::B2Manifold B2Contact_obj::getManifold( ){
	HX_STACK_PUSH("B2Contact::getManifold","box2D/dynamics/contacts/B2Contact.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_LINE(54)
	return this->m_manifold;
}


HX_DEFINE_DYNAMIC_FUNC0(B2Contact_obj,getManifold,return )

int B2Contact_obj::e_sensorFlag;

int B2Contact_obj::e_continuousFlag;

int B2Contact_obj::e_islandFlag;

int B2Contact_obj::e_toiFlag;

int B2Contact_obj::e_touchingFlag;

int B2Contact_obj::e_enabledFlag;

int B2Contact_obj::e_filterFlag;

::box2D::collision::B2TOIInput B2Contact_obj::s_input;


B2Contact_obj::B2Contact_obj()
{
}

void B2Contact_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2Contact);
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(m_toi,"m_toi");
	HX_MARK_MEMBER_NAME(m_oldManifold,"m_oldManifold");
	HX_MARK_MEMBER_NAME(m_manifold,"m_manifold");
	HX_MARK_MEMBER_NAME(m_fixtureB,"m_fixtureB");
	HX_MARK_MEMBER_NAME(m_fixtureA,"m_fixtureA");
	HX_MARK_MEMBER_NAME(m_nodeB,"m_nodeB");
	HX_MARK_MEMBER_NAME(m_nodeA,"m_nodeA");
	HX_MARK_MEMBER_NAME(m_next,"m_next");
	HX_MARK_MEMBER_NAME(m_prev,"m_prev");
	HX_MARK_MEMBER_NAME(m_flags,"m_flags");
	HX_MARK_END_CLASS();
}

void B2Contact_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(m_toi,"m_toi");
	HX_VISIT_MEMBER_NAME(m_oldManifold,"m_oldManifold");
	HX_VISIT_MEMBER_NAME(m_manifold,"m_manifold");
	HX_VISIT_MEMBER_NAME(m_fixtureB,"m_fixtureB");
	HX_VISIT_MEMBER_NAME(m_fixtureA,"m_fixtureA");
	HX_VISIT_MEMBER_NAME(m_nodeB,"m_nodeB");
	HX_VISIT_MEMBER_NAME(m_nodeA,"m_nodeA");
	HX_VISIT_MEMBER_NAME(m_next,"m_next");
	HX_VISIT_MEMBER_NAME(m_prev,"m_prev");
	HX_VISIT_MEMBER_NAME(m_flags,"m_flags");
}

Dynamic B2Contact_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_toi") ) { return m_toi; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_next") ) { return m_next; }
		if (HX_FIELD_EQ(inName,"m_prev") ) { return m_prev; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"s_input") ) { return s_input; }
		if (HX_FIELD_EQ(inName,"m_nodeB") ) { return m_nodeB; }
		if (HX_FIELD_EQ(inName,"m_nodeA") ) { return m_nodeA; }
		if (HX_FIELD_EQ(inName,"m_flags") ) { return m_flags; }
		if (HX_FIELD_EQ(inName,"getNext") ) { return getNext_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"evaluate") ) { return evaluate_dyn(); }
		if (HX_FIELD_EQ(inName,"isSensor") ) { return isSensor_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"e_toiFlag") ) { return e_toiFlag; }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"setSensor") ) { return setSensor_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_manifold") ) { return m_manifold; }
		if (HX_FIELD_EQ(inName,"m_fixtureB") ) { return m_fixtureB; }
		if (HX_FIELD_EQ(inName,"m_fixtureA") ) { return m_fixtureA; }
		if (HX_FIELD_EQ(inName,"computeTOI") ) { return computeTOI_dyn(); }
		if (HX_FIELD_EQ(inName,"setEnabled") ) { return setEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"isTouching") ) { return isTouching_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getFixtureB") ) { return getFixtureB_dyn(); }
		if (HX_FIELD_EQ(inName,"getFixtureA") ) { return getFixtureA_dyn(); }
		if (HX_FIELD_EQ(inName,"getManifold") ) { return getManifold_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"e_sensorFlag") ) { return e_sensorFlag; }
		if (HX_FIELD_EQ(inName,"e_islandFlag") ) { return e_islandFlag; }
		if (HX_FIELD_EQ(inName,"e_filterFlag") ) { return e_filterFlag; }
		if (HX_FIELD_EQ(inName,"isContinuous") ) { return isContinuous_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"e_enabledFlag") ) { return e_enabledFlag; }
		if (HX_FIELD_EQ(inName,"m_oldManifold") ) { return m_oldManifold; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"e_touchingFlag") ) { return e_touchingFlag; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"e_continuousFlag") ) { return e_continuousFlag; }
		if (HX_FIELD_EQ(inName,"flagForFiltering") ) { return flagForFiltering_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorldManifold") ) { return getWorldManifold_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2Contact_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"m_toi") ) { m_toi=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_next") ) { m_next=inValue.Cast< ::box2D::dynamics::contacts::B2Contact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_prev") ) { m_prev=inValue.Cast< ::box2D::dynamics::contacts::B2Contact >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"s_input") ) { s_input=inValue.Cast< ::box2D::collision::B2TOIInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_nodeB") ) { m_nodeB=inValue.Cast< ::box2D::dynamics::contacts::B2ContactEdge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_nodeA") ) { m_nodeA=inValue.Cast< ::box2D::dynamics::contacts::B2ContactEdge >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_flags") ) { m_flags=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"e_toiFlag") ) { e_toiFlag=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_manifold") ) { m_manifold=inValue.Cast< ::box2D::collision::B2Manifold >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_fixtureB") ) { m_fixtureB=inValue.Cast< ::box2D::dynamics::B2Fixture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_fixtureA") ) { m_fixtureA=inValue.Cast< ::box2D::dynamics::B2Fixture >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"e_sensorFlag") ) { e_sensorFlag=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_islandFlag") ) { e_islandFlag=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_filterFlag") ) { e_filterFlag=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"e_enabledFlag") ) { e_enabledFlag=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_oldManifold") ) { m_oldManifold=inValue.Cast< ::box2D::collision::B2Manifold >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"e_touchingFlag") ) { e_touchingFlag=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"e_continuousFlag") ) { e_continuousFlag=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2Contact_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("key"));
	outFields->push(HX_CSTRING("m_toi"));
	outFields->push(HX_CSTRING("m_oldManifold"));
	outFields->push(HX_CSTRING("m_manifold"));
	outFields->push(HX_CSTRING("m_fixtureB"));
	outFields->push(HX_CSTRING("m_fixtureA"));
	outFields->push(HX_CSTRING("m_nodeB"));
	outFields->push(HX_CSTRING("m_nodeA"));
	outFields->push(HX_CSTRING("m_next"));
	outFields->push(HX_CSTRING("m_prev"));
	outFields->push(HX_CSTRING("m_flags"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("e_sensorFlag"),
	HX_CSTRING("e_continuousFlag"),
	HX_CSTRING("e_islandFlag"),
	HX_CSTRING("e_toiFlag"),
	HX_CSTRING("e_touchingFlag"),
	HX_CSTRING("e_enabledFlag"),
	HX_CSTRING("e_filterFlag"),
	HX_CSTRING("s_input"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("key"),
	HX_CSTRING("m_toi"),
	HX_CSTRING("m_oldManifold"),
	HX_CSTRING("m_manifold"),
	HX_CSTRING("m_fixtureB"),
	HX_CSTRING("m_fixtureA"),
	HX_CSTRING("m_nodeB"),
	HX_CSTRING("m_nodeA"),
	HX_CSTRING("m_next"),
	HX_CSTRING("m_prev"),
	HX_CSTRING("m_flags"),
	HX_CSTRING("computeTOI"),
	HX_CSTRING("evaluate"),
	HX_CSTRING("update"),
	HX_CSTRING("reset"),
	HX_CSTRING("flagForFiltering"),
	HX_CSTRING("getFixtureB"),
	HX_CSTRING("getFixtureA"),
	HX_CSTRING("getNext"),
	HX_CSTRING("isEnabled"),
	HX_CSTRING("setEnabled"),
	HX_CSTRING("isSensor"),
	HX_CSTRING("setSensor"),
	HX_CSTRING("isContinuous"),
	HX_CSTRING("isTouching"),
	HX_CSTRING("getWorldManifold"),
	HX_CSTRING("getManifold"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Contact_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2Contact_obj::e_sensorFlag,"e_sensorFlag");
	HX_MARK_MEMBER_NAME(B2Contact_obj::e_continuousFlag,"e_continuousFlag");
	HX_MARK_MEMBER_NAME(B2Contact_obj::e_islandFlag,"e_islandFlag");
	HX_MARK_MEMBER_NAME(B2Contact_obj::e_toiFlag,"e_toiFlag");
	HX_MARK_MEMBER_NAME(B2Contact_obj::e_touchingFlag,"e_touchingFlag");
	HX_MARK_MEMBER_NAME(B2Contact_obj::e_enabledFlag,"e_enabledFlag");
	HX_MARK_MEMBER_NAME(B2Contact_obj::e_filterFlag,"e_filterFlag");
	HX_MARK_MEMBER_NAME(B2Contact_obj::s_input,"s_input");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Contact_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2Contact_obj::e_sensorFlag,"e_sensorFlag");
	HX_VISIT_MEMBER_NAME(B2Contact_obj::e_continuousFlag,"e_continuousFlag");
	HX_VISIT_MEMBER_NAME(B2Contact_obj::e_islandFlag,"e_islandFlag");
	HX_VISIT_MEMBER_NAME(B2Contact_obj::e_toiFlag,"e_toiFlag");
	HX_VISIT_MEMBER_NAME(B2Contact_obj::e_touchingFlag,"e_touchingFlag");
	HX_VISIT_MEMBER_NAME(B2Contact_obj::e_enabledFlag,"e_enabledFlag");
	HX_VISIT_MEMBER_NAME(B2Contact_obj::e_filterFlag,"e_filterFlag");
	HX_VISIT_MEMBER_NAME(B2Contact_obj::s_input,"s_input");
};

Class B2Contact_obj::__mClass;

void B2Contact_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.contacts.B2Contact"), hx::TCanCast< B2Contact_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2Contact_obj::__boot()
{
	e_sensorFlag= (int)1;
	e_continuousFlag= (int)2;
	e_islandFlag= (int)4;
	e_toiFlag= (int)8;
	e_touchingFlag= (int)16;
	e_enabledFlag= (int)32;
	e_filterFlag= (int)64;
	s_input= ::box2D::collision::B2TOIInput_obj::__new();
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts
