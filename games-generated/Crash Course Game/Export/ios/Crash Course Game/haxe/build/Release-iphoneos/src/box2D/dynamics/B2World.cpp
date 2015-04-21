#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2AABB
#include <box2D/collision/B2AABB.h>
#endif
#ifndef INCLUDED_box2D_collision_B2RayCastInput
#include <box2D/collision/B2RayCastInput.h>
#endif
#ifndef INCLUDED_box2D_collision_B2RayCastOutput
#include <box2D/collision/B2RayCastOutput.h>
#endif
#ifndef INCLUDED_box2D_collision_IBroadPhase
#include <box2D/collision/IBroadPhase.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2CircleShape
#include <box2D/collision/shapes/B2CircleShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2EdgeShape
#include <box2D/collision/shapes/B2EdgeShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2PolygonShape
#include <box2D/collision/shapes/B2PolygonShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
#endif
#ifndef INCLUDED_box2D_common_B2Color
#include <box2D/common/B2Color.h>
#endif
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
#ifndef INCLUDED_box2D_dynamics_B2BodyDef
#include <box2D/dynamics/B2BodyDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactFilter
#include <box2D/dynamics/B2ContactFilter.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactListener
#include <box2D/dynamics/B2ContactListener.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactManager
#include <box2D/dynamics/B2ContactManager.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2DebugDraw
#include <box2D/dynamics/B2DebugDraw.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2DestructionListener
#include <box2D/dynamics/B2DestructionListener.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Island
#include <box2D/dynamics/B2Island.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2TimeStep
#include <box2D/dynamics/B2TimeStep.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2World
#include <box2D/dynamics/B2World.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2Contact
#include <box2D/dynamics/contacts/B2Contact.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactEdge
#include <box2D/dynamics/contacts/B2ContactEdge.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactSolver
#include <box2D/dynamics/contacts/B2ContactSolver.h>
#endif
#ifndef INCLUDED_box2D_dynamics_controllers_B2Controller
#include <box2D/dynamics/controllers/B2Controller.h>
#endif
#ifndef INCLUDED_box2D_dynamics_controllers_B2ControllerEdge
#include <box2D/dynamics/controllers/B2ControllerEdge.h>
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
#ifndef INCLUDED_box2D_dynamics_joints_B2PulleyJoint
#include <box2D/dynamics/joints/B2PulleyJoint.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace box2D{
namespace dynamics{

Void B2World_obj::__construct(::box2D::common::math::B2Vec2 gravity,bool doSleep)
{
HX_STACK_PUSH("B2World::new","box2D/dynamics/B2World.hx",59);
{
	HX_STACK_LINE(61)
	this->s_stack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(62)
	this->m_contactManager = ::box2D::dynamics::B2ContactManager_obj::__new();
	HX_STACK_LINE(63)
	this->m_contactSolver = ::box2D::dynamics::contacts::B2ContactSolver_obj::__new();
	HX_STACK_LINE(64)
	this->m_island = ::box2D::dynamics::B2Island_obj::__new();
	HX_STACK_LINE(66)
	this->m_destructionListener = null();
	HX_STACK_LINE(67)
	this->m_debugDraw = null();
	HX_STACK_LINE(69)
	this->m_bodyList = null();
	HX_STACK_LINE(70)
	this->m_contactList = null();
	HX_STACK_LINE(71)
	this->m_jointList = null();
	HX_STACK_LINE(72)
	this->m_controllerList = null();
	HX_STACK_LINE(74)
	this->m_bodyCount = (int)0;
	HX_STACK_LINE(75)
	this->m_contactCount = (int)0;
	HX_STACK_LINE(76)
	this->m_jointCount = (int)0;
	HX_STACK_LINE(77)
	this->m_controllerCount = (int)0;
	HX_STACK_LINE(79)
	::box2D::dynamics::B2World_obj::m_warmStarting = true;
	HX_STACK_LINE(80)
	::box2D::dynamics::B2World_obj::m_continuousPhysics = false;
	HX_STACK_LINE(82)
	this->m_allowSleep = doSleep;
	HX_STACK_LINE(83)
	this->m_gravity = gravity;
	HX_STACK_LINE(85)
	this->m_inv_dt0 = 0.0;
	HX_STACK_LINE(87)
	this->m_contactManager->m_world = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(89)
	::box2D::dynamics::B2BodyDef bd = ::box2D::dynamics::B2BodyDef_obj::__new();		HX_STACK_VAR(bd,"bd");
	HX_STACK_LINE(90)
	this->m_groundBody = this->createBody(bd);
}
;
	return null();
}

B2World_obj::~B2World_obj() { }

Dynamic B2World_obj::__CreateEmpty() { return  new B2World_obj; }
hx::ObjectPtr< B2World_obj > B2World_obj::__new(::box2D::common::math::B2Vec2 gravity,bool doSleep)
{  hx::ObjectPtr< B2World_obj > result = new B2World_obj();
	result->__construct(gravity,doSleep);
	return result;}

Dynamic B2World_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2World_obj > result = new B2World_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::box2D::collision::B2AABB B2World_obj::getScreenBounds( ){
	HX_STACK_PUSH("B2World::getScreenBounds","box2D/dynamics/B2World.hx",1672);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1672)
	return this->m_aabb;
}


HX_DEFINE_DYNAMIC_FUNC0(B2World_obj,getScreenBounds,return )

Void B2World_obj::setScreenBounds( ::box2D::collision::B2AABB bounds){
{
		HX_STACK_PUSH("B2World::setScreenBounds","box2D/dynamics/B2World.hx",1668);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bounds,"bounds");
		HX_STACK_LINE(1668)
		this->m_aabb = bounds;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,setScreenBounds,(void))

Void B2World_obj::drawShape( ::box2D::collision::shapes::B2Shape shape,::box2D::common::math::B2Transform xf,::box2D::common::B2Color color){
{
		HX_STACK_PUSH("B2World::drawShape","box2D/dynamics/B2World.hx",1622);
		HX_STACK_THIS(this);
		HX_STACK_ARG(shape,"shape");
		HX_STACK_ARG(xf,"xf");
		HX_STACK_ARG(color,"color");
		HX_STACK_LINE(1622)
		int _switch_1 = (shape->m_type);
		if (  ( _switch_1==::box2D::collision::shapes::B2Shape_obj::e_circleShape)){
			HX_STACK_LINE(1628)
			::box2D::collision::shapes::B2CircleShape circle = hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(shape);		HX_STACK_VAR(circle,"circle");
			HX_STACK_LINE(1630)
			::box2D::common::math::B2Vec2 center = ::box2D::common::math::B2Math_obj::mulX(xf,circle->m_p,null());		HX_STACK_VAR(center,"center");
			HX_STACK_LINE(1631)
			Float radius = circle->m_radius;		HX_STACK_VAR(radius,"radius");
			HX_STACK_LINE(1632)
			::box2D::common::math::B2Vec2 axis = xf->R->col1;		HX_STACK_VAR(axis,"axis");
			HX_STACK_LINE(1634)
			this->m_debugDraw->drawSolidCircle(center,radius,axis,color);
		}
		else if (  ( _switch_1==::box2D::collision::shapes::B2Shape_obj::e_polygonShape)){
			HX_STACK_LINE(1639)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1640)
			::box2D::collision::shapes::B2PolygonShape poly = hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(shape);		HX_STACK_VAR(poly,"poly");
			HX_STACK_LINE(1641)
			int vertexCount = poly->getVertexCount();		HX_STACK_VAR(vertexCount,"vertexCount");
			HX_STACK_LINE(1642)
			Array< ::Dynamic > localVertices = poly->getVertices();		HX_STACK_VAR(localVertices,"localVertices");
			HX_STACK_LINE(1644)
			Array< ::Dynamic > vertices = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(vertices,"vertices");
			HX_STACK_LINE(1646)
			{
				HX_STACK_LINE(1646)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1646)
				while(((_g < vertexCount))){
					HX_STACK_LINE(1646)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1648)
					vertices[i1] = ::box2D::common::math::B2Math_obj::mulX(xf,localVertices->__get(i1).StaticCast< ::box2D::common::math::B2Vec2 >(),null());
				}
			}
			HX_STACK_LINE(1651)
			this->m_debugDraw->drawSolidPolygon(vertices,vertexCount,color);
		}
		else if (  ( _switch_1==::box2D::collision::shapes::B2Shape_obj::e_edgeShape)){
			HX_STACK_LINE(1656)
			::box2D::collision::shapes::B2EdgeShape edge = hx::TCast< box2D::collision::shapes::B2EdgeShape >::cast(shape);		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(1658)
			this->m_debugDraw->drawSegment(::box2D::common::math::B2Math_obj::mulX(xf,edge->getVertex1(),null()),::box2D::common::math::B2Math_obj::mulX(xf,edge->getVertex2(),null()),color);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2World_obj,drawShape,(void))

Void B2World_obj::drawJoint( ::box2D::dynamics::joints::B2Joint joint){
{
		HX_STACK_PUSH("B2World::drawJoint","box2D/dynamics/B2World.hx",1581);
		HX_STACK_THIS(this);
		HX_STACK_ARG(joint,"joint");
		HX_STACK_LINE(1583)
		::box2D::dynamics::B2Body b1 = joint->getBodyA();		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(1584)
		::box2D::dynamics::B2Body b2 = joint->getBodyB();		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(1585)
		::box2D::common::math::B2Transform xf1 = b1->m_xf;		HX_STACK_VAR(xf1,"xf1");
		HX_STACK_LINE(1586)
		::box2D::common::math::B2Transform xf2 = b2->m_xf;		HX_STACK_VAR(xf2,"xf2");
		HX_STACK_LINE(1587)
		::box2D::common::math::B2Vec2 x1 = xf1->position;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(1588)
		::box2D::common::math::B2Vec2 x2 = xf2->position;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(1589)
		::box2D::common::math::B2Vec2 p1 = joint->getAnchorA();		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(1590)
		::box2D::common::math::B2Vec2 p2 = joint->getAnchorB();		HX_STACK_VAR(p2,"p2");
		HX_STACK_LINE(1593)
		::box2D::common::B2Color color = ::box2D::dynamics::B2World_obj::s_jointColor;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(1595)
		int _switch_2 = (joint->m_type);
		if (  ( _switch_2==::box2D::dynamics::joints::B2Joint_obj::e_distanceJoint)){
			HX_STACK_LINE(1597)
			this->m_debugDraw->drawSegment(p1,p2,color);
		}
		else if (  ( _switch_2==::box2D::dynamics::joints::B2Joint_obj::e_pulleyJoint)){
			HX_STACK_LINE(1602)
			::box2D::dynamics::joints::B2PulleyJoint pulley = hx::TCast< box2D::dynamics::joints::B2PulleyJoint >::cast(joint);		HX_STACK_VAR(pulley,"pulley");
			HX_STACK_LINE(1603)
			::box2D::common::math::B2Vec2 s1 = pulley->getGroundAnchorA();		HX_STACK_VAR(s1,"s1");
			HX_STACK_LINE(1604)
			::box2D::common::math::B2Vec2 s2 = pulley->getGroundAnchorB();		HX_STACK_VAR(s2,"s2");
			HX_STACK_LINE(1605)
			this->m_debugDraw->drawSegment(s1,p1,color);
			HX_STACK_LINE(1606)
			this->m_debugDraw->drawSegment(s2,p2,color);
			HX_STACK_LINE(1607)
			this->m_debugDraw->drawSegment(s1,s2,color);
		}
		else if (  ( _switch_2==::box2D::dynamics::joints::B2Joint_obj::e_mouseJoint)){
			HX_STACK_LINE(1610)
			this->m_debugDraw->drawSegment(p1,p2,color);
		}
		else  {
			HX_STACK_LINE(1614)
			if (((b1 != this->m_groundBody))){
				HX_STACK_LINE(1615)
				this->m_debugDraw->drawSegment(x1,p1,color);
			}
			HX_STACK_LINE(1616)
			this->m_debugDraw->drawSegment(p1,p2,color);
			HX_STACK_LINE(1617)
			if (((b2 != this->m_groundBody))){
				HX_STACK_LINE(1618)
				this->m_debugDraw->drawSegment(x2,p2,color);
			}
		}
;
;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,drawJoint,(void))

Void B2World_obj::solveTOI( ::box2D::dynamics::B2TimeStep step){
{
		HX_STACK_PUSH("B2World::solveTOI","box2D/dynamics/B2World.hx",1207);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
		HX_STACK_LINE(1209)
		::box2D::dynamics::B2Body b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1210)
		::box2D::dynamics::B2Fixture fA;		HX_STACK_VAR(fA,"fA");
		HX_STACK_LINE(1211)
		::box2D::dynamics::B2Fixture fB;		HX_STACK_VAR(fB,"fB");
		HX_STACK_LINE(1212)
		::box2D::dynamics::B2Body bA;		HX_STACK_VAR(bA,"bA");
		HX_STACK_LINE(1213)
		::box2D::dynamics::B2Body bB;		HX_STACK_VAR(bB,"bB");
		HX_STACK_LINE(1214)
		::box2D::dynamics::contacts::B2ContactEdge cEdge;		HX_STACK_VAR(cEdge,"cEdge");
		HX_STACK_LINE(1215)
		::box2D::dynamics::joints::B2Joint j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(1218)
		::box2D::dynamics::B2Island island = this->m_island;		HX_STACK_VAR(island,"island");
		HX_STACK_LINE(1219)
		island->initialize(this->m_bodyCount,::box2D::common::B2Settings_obj::b2_maxTOIContactsPerIsland,::box2D::common::B2Settings_obj::b2_maxTOIJointsPerIsland,null(),this->m_contactManager->m_contactListener,this->m_contactSolver);
		HX_STACK_LINE(1230)
		Array< ::Dynamic > queue = ::box2D::dynamics::B2World_obj::s_queue;		HX_STACK_VAR(queue,"queue");
		HX_STACK_LINE(1232)
		b = this->m_bodyList;
		HX_STACK_LINE(1233)
		while(((b != null()))){
			HX_STACK_LINE(1235)
			hx::AndEq(b->m_flags,~(int)(::box2D::dynamics::B2Body_obj::e_islandFlag));
			HX_STACK_LINE(1236)
			b->m_sweep->t0 = 0.0;
			HX_STACK_LINE(1237)
			b = b->m_next;
		}
		HX_STACK_LINE(1240)
		::box2D::dynamics::contacts::B2Contact c = this->m_contactList;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(1241)
		while(((c != null()))){
			HX_STACK_LINE(1244)
			hx::AndEq(c->m_flags,~(int)(((int(::box2D::dynamics::contacts::B2Contact_obj::e_toiFlag) | int(::box2D::dynamics::contacts::B2Contact_obj::e_islandFlag)))));
			HX_STACK_LINE(1245)
			c = c->m_next;
		}
		HX_STACK_LINE(1248)
		j = this->m_jointList;
		HX_STACK_LINE(1249)
		while(((j != null()))){
			HX_STACK_LINE(1251)
			j->m_islandFlag = false;
			HX_STACK_LINE(1252)
			j = j->m_next;
		}
		HX_STACK_LINE(1258)
		while((true)){
			HX_STACK_LINE(1261)
			::box2D::dynamics::contacts::B2Contact minContact = null();		HX_STACK_VAR(minContact,"minContact");
			HX_STACK_LINE(1262)
			Float minTOI = 1.0;		HX_STACK_VAR(minTOI,"minTOI");
			HX_STACK_LINE(1264)
			c = this->m_contactList;
			HX_STACK_LINE(1265)
			while(((c != null()))){
				HX_STACK_LINE(1268)
				if (((bool((bool((c->isSensor() == true)) || bool((c->isEnabled() == false)))) || bool((c->isContinuous() == false))))){
					HX_STACK_LINE(1272)
					c = c->m_next;
					HX_STACK_LINE(1273)
					continue;
				}
				HX_STACK_LINE(1278)
				Float toi = 1.0;		HX_STACK_VAR(toi,"toi");
				HX_STACK_LINE(1279)
				if (((((int(c->m_flags) & int(::box2D::dynamics::contacts::B2Contact_obj::e_toiFlag))) != (int)0))){
					HX_STACK_LINE(1280)
					toi = c->m_toi;
				}
				else{
					HX_STACK_LINE(1287)
					fA = c->m_fixtureA;
					HX_STACK_LINE(1288)
					fB = c->m_fixtureB;
					HX_STACK_LINE(1289)
					bA = fA->m_body;
					HX_STACK_LINE(1290)
					bB = fB->m_body;
					HX_STACK_LINE(1292)
					if (((bool(((bool((bA->getType() != ::box2D::dynamics::B2Body_obj::b2_dynamicBody)) || bool((bA->isAwake() == false))))) && bool(((bool((bB->getType() != ::box2D::dynamics::B2Body_obj::b2_dynamicBody)) || bool((bB->isAwake() == false)))))))){
						HX_STACK_LINE(1295)
						c = c->m_next;
						HX_STACK_LINE(1296)
						continue;
					}
					HX_STACK_LINE(1300)
					Float t0 = bA->m_sweep->t0;		HX_STACK_VAR(t0,"t0");
					HX_STACK_LINE(1302)
					if (((bA->m_sweep->t0 < bB->m_sweep->t0))){
						HX_STACK_LINE(1304)
						t0 = bB->m_sweep->t0;
						HX_STACK_LINE(1305)
						bA->m_sweep->advance(t0);
					}
					else{
						HX_STACK_LINE(1307)
						if (((bB->m_sweep->t0 < bA->m_sweep->t0))){
							HX_STACK_LINE(1309)
							t0 = bA->m_sweep->t0;
							HX_STACK_LINE(1310)
							bB->m_sweep->advance(t0);
						}
					}
					HX_STACK_LINE(1316)
					toi = c->computeTOI(bA->m_sweep,bB->m_sweep);
					HX_STACK_LINE(1317)
					::box2D::common::B2Settings_obj::b2Assert((bool((0.0 <= toi)) && bool((toi <= 1.0))));
					HX_STACK_LINE(1320)
					if (((bool((toi > 0.0)) && bool((toi < 1.0))))){
						HX_STACK_LINE(1324)
						toi = ((((1.0 - toi)) * t0) + toi);
						HX_STACK_LINE(1325)
						if (((toi > (int)1))){
							HX_STACK_LINE(1325)
							toi = (int)1;
						}
					}
					HX_STACK_LINE(1329)
					c->m_toi = toi;
					HX_STACK_LINE(1330)
					hx::OrEq(c->m_flags,::box2D::dynamics::contacts::B2Contact_obj::e_toiFlag);
				}
				HX_STACK_LINE(1333)
				if (((bool((2.2250738585072014e-308 < toi)) && bool((toi < minTOI))))){
					HX_STACK_LINE(1336)
					minContact = c;
					HX_STACK_LINE(1337)
					minTOI = toi;
				}
				HX_STACK_LINE(1340)
				c = c->m_next;
			}
			HX_STACK_LINE(1343)
			if (((bool((minContact == null())) || bool(((1.0 - (100.0 * 2.2250738585072014e-308)) < minTOI))))){
				HX_STACK_LINE(1344)
				break;
			}
			HX_STACK_LINE(1350)
			fA = minContact->m_fixtureA;
			HX_STACK_LINE(1351)
			fB = minContact->m_fixtureB;
			HX_STACK_LINE(1352)
			bA = fA->m_body;
			HX_STACK_LINE(1353)
			bB = fB->m_body;
			HX_STACK_LINE(1354)
			::box2D::dynamics::B2World_obj::s_backupA->set(bA->m_sweep);
			HX_STACK_LINE(1355)
			::box2D::dynamics::B2World_obj::s_backupB->set(bB->m_sweep);
			HX_STACK_LINE(1356)
			bA->advance(minTOI);
			HX_STACK_LINE(1357)
			bB->advance(minTOI);
			HX_STACK_LINE(1360)
			minContact->update(this->m_contactManager->m_contactListener);
			HX_STACK_LINE(1361)
			hx::AndEq(minContact->m_flags,~(int)(::box2D::dynamics::contacts::B2Contact_obj::e_toiFlag));
			HX_STACK_LINE(1364)
			if (((bool((minContact->isSensor() == true)) || bool((minContact->isEnabled() == false))))){
				HX_STACK_LINE(1368)
				bA->m_sweep->set(::box2D::dynamics::B2World_obj::s_backupA);
				HX_STACK_LINE(1369)
				bB->m_sweep->set(::box2D::dynamics::B2World_obj::s_backupB);
				HX_STACK_LINE(1370)
				bA->synchronizeTransform();
				HX_STACK_LINE(1371)
				bB->synchronizeTransform();
				HX_STACK_LINE(1372)
				continue;
			}
			HX_STACK_LINE(1376)
			if (((minContact->isTouching() == false))){
				HX_STACK_LINE(1377)
				continue;
			}
			HX_STACK_LINE(1383)
			::box2D::dynamics::B2Body seed = bA;		HX_STACK_VAR(seed,"seed");
			HX_STACK_LINE(1384)
			if (((seed->getType() != ::box2D::dynamics::B2Body_obj::b2_dynamicBody))){
				HX_STACK_LINE(1385)
				seed = bB;
			}
			HX_STACK_LINE(1390)
			island->clear();
			HX_STACK_LINE(1391)
			int queueStart = (int)0;		HX_STACK_VAR(queueStart,"queueStart");
			HX_STACK_LINE(1392)
			int queueSize = (int)0;		HX_STACK_VAR(queueSize,"queueSize");
			HX_STACK_LINE(1393)
			queue[(queueStart + (queueSize)++)] = seed;
			HX_STACK_LINE(1394)
			hx::OrEq(seed->m_flags,::box2D::dynamics::B2Body_obj::e_islandFlag);
			HX_STACK_LINE(1397)
			while(((queueSize > (int)0))){
				HX_STACK_LINE(1400)
				b = queue->__get((queueStart)++).StaticCast< ::box2D::dynamics::B2Body >();
				HX_STACK_LINE(1401)
				--(queueSize);
				HX_STACK_LINE(1403)
				island->addBody(b);
				HX_STACK_LINE(1406)
				if (((b->isAwake() == false))){
					HX_STACK_LINE(1407)
					b->setAwake(true);
				}
				HX_STACK_LINE(1413)
				if (((b->getType() != ::box2D::dynamics::B2Body_obj::b2_dynamicBody))){
					HX_STACK_LINE(1414)
					continue;
				}
				HX_STACK_LINE(1419)
				cEdge = b->m_contactList;
				HX_STACK_LINE(1420)
				::box2D::dynamics::B2Body other;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(1421)
				while(((cEdge != null()))){
					HX_STACK_LINE(1424)
					if (((island->m_contactCount == island->m_contactCapacity))){
						HX_STACK_LINE(1426)
						cEdge = cEdge->next;
						HX_STACK_LINE(1427)
						break;
					}
					HX_STACK_LINE(1431)
					if (((((int(cEdge->contact->m_flags) & int(::box2D::dynamics::contacts::B2Contact_obj::e_islandFlag))) != (int)0))){
						HX_STACK_LINE(1433)
						cEdge = cEdge->next;
						HX_STACK_LINE(1434)
						continue;
					}
					HX_STACK_LINE(1438)
					if (((bool((bool((cEdge->contact->isSensor() == true)) || bool((cEdge->contact->isEnabled() == false)))) || bool((cEdge->contact->isTouching() == false))))){
						HX_STACK_LINE(1442)
						cEdge = cEdge->next;
						HX_STACK_LINE(1443)
						continue;
					}
					HX_STACK_LINE(1446)
					island->addContact(cEdge->contact);
					HX_STACK_LINE(1447)
					hx::OrEq(cEdge->contact->m_flags,::box2D::dynamics::contacts::B2Contact_obj::e_islandFlag);
					HX_STACK_LINE(1450)
					other = cEdge->other;
					HX_STACK_LINE(1453)
					if (((((int(other->m_flags) & int(::box2D::dynamics::B2Body_obj::e_islandFlag))) != (int)0))){
						HX_STACK_LINE(1455)
						cEdge = cEdge->next;
						HX_STACK_LINE(1456)
						continue;
					}
					HX_STACK_LINE(1460)
					if (((other->getType() != ::box2D::dynamics::B2Body_obj::b2_staticBody))){
						HX_STACK_LINE(1462)
						other->advance(minTOI);
						HX_STACK_LINE(1463)
						other->setAwake(true);
					}
					HX_STACK_LINE(1467)
					queue[(queueStart + queueSize)] = other;
					HX_STACK_LINE(1468)
					++(queueSize);
					HX_STACK_LINE(1469)
					hx::OrEq(other->m_flags,::box2D::dynamics::B2Body_obj::e_islandFlag);
					HX_STACK_LINE(1470)
					cEdge = cEdge->next;
				}
				HX_STACK_LINE(1473)
				::box2D::dynamics::joints::B2JointEdge jEdge = b->m_jointList;		HX_STACK_VAR(jEdge,"jEdge");
				HX_STACK_LINE(1474)
				while(((jEdge != null()))){
					HX_STACK_LINE(1476)
					if (((island->m_jointCount == island->m_jointCapacity))){
						HX_STACK_LINE(1477)
						jEdge = jEdge->next;
						HX_STACK_LINE(1478)
						continue;
					}
					HX_STACK_LINE(1481)
					if (((jEdge->joint->m_islandFlag == true))){
						HX_STACK_LINE(1482)
						jEdge = jEdge->next;
						HX_STACK_LINE(1483)
						continue;
					}
					HX_STACK_LINE(1486)
					other = jEdge->other;
					HX_STACK_LINE(1487)
					if (((other->isActive() == false))){
						HX_STACK_LINE(1489)
						jEdge = jEdge->next;
						HX_STACK_LINE(1490)
						continue;
					}
					HX_STACK_LINE(1493)
					island->addJoint(jEdge->joint);
					HX_STACK_LINE(1494)
					jEdge->joint->m_islandFlag = true;
					HX_STACK_LINE(1496)
					if (((((int(other->m_flags) & int(::box2D::dynamics::B2Body_obj::e_islandFlag))) != (int)0))){
						HX_STACK_LINE(1497)
						jEdge = jEdge->next;
						HX_STACK_LINE(1498)
						continue;
					}
					HX_STACK_LINE(1502)
					if (((other->getType() != ::box2D::dynamics::B2Body_obj::b2_staticBody))){
						HX_STACK_LINE(1504)
						other->advance(minTOI);
						HX_STACK_LINE(1505)
						other->setAwake(true);
					}
					HX_STACK_LINE(1509)
					queue[(queueStart + queueSize)] = other;
					HX_STACK_LINE(1510)
					++(queueSize);
					HX_STACK_LINE(1511)
					hx::OrEq(other->m_flags,::box2D::dynamics::B2Body_obj::e_islandFlag);
					HX_STACK_LINE(1512)
					jEdge = jEdge->next;
				}
			}
			HX_STACK_LINE(1516)
			::box2D::dynamics::B2TimeStep subStep = ::box2D::dynamics::B2World_obj::s_timestep;		HX_STACK_VAR(subStep,"subStep");
			HX_STACK_LINE(1517)
			subStep->warmStarting = false;
			HX_STACK_LINE(1518)
			subStep->dt = (((1.0 - minTOI)) * step->dt);
			HX_STACK_LINE(1519)
			subStep->inv_dt = (Float(1.0) / Float(subStep->dt));
			HX_STACK_LINE(1520)
			subStep->dtRatio = 0.0;
			HX_STACK_LINE(1521)
			subStep->velocityIterations = step->velocityIterations;
			HX_STACK_LINE(1522)
			subStep->positionIterations = step->positionIterations;
			HX_STACK_LINE(1524)
			island->solveTOI(subStep);
			HX_STACK_LINE(1526)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1528)
			{
				HX_STACK_LINE(1528)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = island->m_bodyCount;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1528)
				while(((_g1 < _g))){
					HX_STACK_LINE(1528)
					int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1531)
					b = island->m_bodies->__get(i1).StaticCast< ::box2D::dynamics::B2Body >();
					HX_STACK_LINE(1532)
					hx::AndEq(b->m_flags,~(int)(::box2D::dynamics::B2Body_obj::e_islandFlag));
					HX_STACK_LINE(1534)
					if (((b->isAwake() == false))){
						HX_STACK_LINE(1535)
						continue;
					}
					HX_STACK_LINE(1539)
					if (((b->getType() != ::box2D::dynamics::B2Body_obj::b2_dynamicBody))){
						HX_STACK_LINE(1540)
						continue;
					}
					HX_STACK_LINE(1545)
					b->synchronizeFixtures();
					HX_STACK_LINE(1549)
					cEdge = b->m_contactList;
					HX_STACK_LINE(1550)
					while(((cEdge != null()))){
						HX_STACK_LINE(1552)
						hx::AndEq(cEdge->contact->m_flags,~(int)(::box2D::dynamics::contacts::B2Contact_obj::e_toiFlag));
						HX_STACK_LINE(1553)
						cEdge = cEdge->next;
					}
				}
			}
			HX_STACK_LINE(1557)
			{
				HX_STACK_LINE(1557)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = island->m_contactCount;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1557)
				while(((_g1 < _g))){
					HX_STACK_LINE(1557)
					int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1560)
					c = island->m_contacts->__get(i1).StaticCast< ::box2D::dynamics::contacts::B2Contact >();
					HX_STACK_LINE(1561)
					hx::AndEq(c->m_flags,~(int)(((int(::box2D::dynamics::contacts::B2Contact_obj::e_toiFlag) | int(::box2D::dynamics::contacts::B2Contact_obj::e_islandFlag)))));
				}
			}
			HX_STACK_LINE(1564)
			{
				HX_STACK_LINE(1564)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = island->m_jointCount;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1564)
				while(((_g1 < _g))){
					HX_STACK_LINE(1564)
					int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1567)
					j = island->m_joints->__get(i1).StaticCast< ::box2D::dynamics::joints::B2Joint >();
					HX_STACK_LINE(1568)
					j->m_islandFlag = false;
				}
			}
			HX_STACK_LINE(1573)
			this->m_contactManager->findNewContacts();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,solveTOI,(void))

Void B2World_obj::solve( ::box2D::dynamics::B2TimeStep step){
{
		HX_STACK_PUSH("B2World::solve","box2D/dynamics/B2World.hx",967);
		HX_STACK_THIS(this);
		HX_STACK_ARG(step,"step");
		HX_STACK_LINE(968)
		::box2D::dynamics::B2Body b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(971)
		::box2D::dynamics::controllers::B2Controller controller = this->m_controllerList;		HX_STACK_VAR(controller,"controller");
		HX_STACK_LINE(972)
		while(((controller != null()))){
			HX_STACK_LINE(974)
			controller->step(step);
			HX_STACK_LINE(975)
			controller = controller->m_next;
		}
		HX_STACK_LINE(979)
		::box2D::dynamics::B2Island island = this->m_island;		HX_STACK_VAR(island,"island");
		HX_STACK_LINE(980)
		island->initialize(this->m_bodyCount,this->m_contactCount,this->m_jointCount,null(),this->m_contactManager->m_contactListener,this->m_contactSolver);
		HX_STACK_LINE(983)
		b = this->m_bodyList;
		HX_STACK_LINE(984)
		while(((b != null()))){
			HX_STACK_LINE(986)
			hx::AndEq(b->m_flags,~(int)(::box2D::dynamics::B2Body_obj::e_islandFlag));
			HX_STACK_LINE(987)
			b = b->m_next;
		}
		HX_STACK_LINE(989)
		::box2D::dynamics::contacts::B2Contact c = this->m_contactList;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(990)
		while(((c != null()))){
			HX_STACK_LINE(992)
			hx::AndEq(c->m_flags,~(int)(::box2D::dynamics::contacts::B2Contact_obj::e_islandFlag));
			HX_STACK_LINE(993)
			c = c->m_next;
		}
		HX_STACK_LINE(995)
		::box2D::dynamics::joints::B2Joint j = this->m_jointList;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(996)
		while(((j != null()))){
			HX_STACK_LINE(998)
			j->m_islandFlag = false;
			HX_STACK_LINE(999)
			j = j->m_next;
		}
		HX_STACK_LINE(1003)
		int stackSize = this->m_bodyCount;		HX_STACK_VAR(stackSize,"stackSize");
		HX_STACK_LINE(1005)
		Array< ::Dynamic > stack = this->s_stack;		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(1006)
		::box2D::dynamics::B2Body seed = this->m_bodyList;		HX_STACK_VAR(seed,"seed");
		HX_STACK_LINE(1007)
		while(((seed != null()))){
			HX_STACK_LINE(1009)
			if (((((int(seed->m_flags) & int(::box2D::dynamics::B2Body_obj::e_islandFlag))) != (int)0))){
				HX_STACK_LINE(1011)
				seed = seed->m_next;
				HX_STACK_LINE(1012)
				continue;
			}
			HX_STACK_LINE(1016)
			if (((bool((bool(!(seed->isActive())) && bool(!(seed->isAlwaysActive())))) && bool(((bool((bool((bool((((seed->m_xf->position->x + seed->origin->x) + seed->size->x) >= this->m_aabb->lowerBound->x)) || bool((((seed->m_xf->position->y + seed->origin->y) + seed->size->y) >= this->m_aabb->lowerBound->y)))) || bool(((seed->m_xf->position->x + seed->origin->x) <= this->m_aabb->upperBound->x)))) || bool(((seed->m_xf->position->y + seed->origin->y) <= this->m_aabb->upperBound->y)))))))){
				HX_STACK_LINE(1021)
				seed->setActive(true);
				HX_STACK_LINE(1022)
				seed->setAwake(true);
			}
			HX_STACK_LINE(1026)
			if (((bool((bool((seed->isAwake() == false)) || bool((seed->isActive() == false)))) || bool(seed->isPaused())))){
				HX_STACK_LINE(1028)
				seed = seed->m_next;
				HX_STACK_LINE(1029)
				continue;
			}
			HX_STACK_LINE(1033)
			if (((seed->getType() == ::box2D::dynamics::B2Body_obj::b2_staticBody))){
				HX_STACK_LINE(1035)
				seed = seed->m_next;
				HX_STACK_LINE(1036)
				continue;
			}
			HX_STACK_LINE(1040)
			if (((bool((bool(seed->isActive()) && bool(!(seed->isAlwaysActive())))) && bool(((bool((bool((bool((((seed->m_xf->position->x + seed->origin->x) + seed->size->x) <= this->m_aabb->lowerBound->x)) || bool((((seed->m_xf->position->y + seed->origin->y) + seed->size->y) <= this->m_aabb->lowerBound->y)))) || bool(((seed->m_xf->position->x + seed->origin->x) >= this->m_aabb->upperBound->x)))) || bool(((seed->m_xf->position->y + seed->origin->y) >= this->m_aabb->upperBound->y)))))))){
				HX_STACK_LINE(1045)
				seed->setAwake(false);
				HX_STACK_LINE(1046)
				seed->setActive(false);
				HX_STACK_LINE(1048)
				seed = seed->m_next;
				HX_STACK_LINE(1049)
				continue;
			}
			HX_STACK_LINE(1054)
			island->clear();
			HX_STACK_LINE(1055)
			int stackCount = (int)0;		HX_STACK_VAR(stackCount,"stackCount");
			HX_STACK_LINE(1056)
			stack[(stackCount)++] = seed;
			HX_STACK_LINE(1057)
			hx::OrEq(seed->m_flags,::box2D::dynamics::B2Body_obj::e_islandFlag);
			HX_STACK_LINE(1060)
			while(((stackCount > (int)0))){
				HX_STACK_LINE(1063)
				b = stack->__get(--(stackCount)).StaticCast< ::box2D::dynamics::B2Body >();
				HX_STACK_LINE(1065)
				island->addBody(b);
				HX_STACK_LINE(1068)
				if (((b->isAwake() == false))){
					HX_STACK_LINE(1069)
					b->setAwake(true);
				}
				HX_STACK_LINE(1075)
				if (((b->getType() == ::box2D::dynamics::B2Body_obj::b2_staticBody))){
					HX_STACK_LINE(1076)
					continue;
				}
				HX_STACK_LINE(1080)
				::box2D::dynamics::B2Body other;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(1082)
				::box2D::dynamics::contacts::B2ContactEdge ce = b->m_contactList;		HX_STACK_VAR(ce,"ce");
				HX_STACK_LINE(1083)
				while(((ce != null()))){
					HX_STACK_LINE(1086)
					if (((((int(ce->contact->m_flags) & int(::box2D::dynamics::contacts::B2Contact_obj::e_islandFlag))) != (int)0))){
						HX_STACK_LINE(1088)
						ce = ce->next;
						HX_STACK_LINE(1089)
						continue;
					}
					HX_STACK_LINE(1093)
					if (((bool((bool((ce->contact->isSensor() == true)) || bool((ce->contact->isEnabled() == false)))) || bool((ce->contact->isTouching() == false))))){
						HX_STACK_LINE(1097)
						ce = ce->next;
						HX_STACK_LINE(1098)
						continue;
					}
					HX_STACK_LINE(1101)
					island->addContact(ce->contact);
					HX_STACK_LINE(1102)
					hx::OrEq(ce->contact->m_flags,::box2D::dynamics::contacts::B2Contact_obj::e_islandFlag);
					HX_STACK_LINE(1105)
					other = ce->other;
					HX_STACK_LINE(1108)
					if (((((int(other->m_flags) & int(::box2D::dynamics::B2Body_obj::e_islandFlag))) != (int)0))){
						HX_STACK_LINE(1110)
						ce = ce->next;
						HX_STACK_LINE(1111)
						continue;
					}
					HX_STACK_LINE(1115)
					stack[(stackCount)++] = other;
					HX_STACK_LINE(1116)
					hx::OrEq(other->m_flags,::box2D::dynamics::B2Body_obj::e_islandFlag);
					HX_STACK_LINE(1117)
					ce = ce->next;
				}
				HX_STACK_LINE(1121)
				::box2D::dynamics::joints::B2JointEdge jn = b->m_jointList;		HX_STACK_VAR(jn,"jn");
				HX_STACK_LINE(1122)
				while(((jn != null()))){
					HX_STACK_LINE(1124)
					if (((jn->joint->m_islandFlag == true))){
						HX_STACK_LINE(1126)
						jn = jn->next;
						HX_STACK_LINE(1127)
						continue;
					}
					HX_STACK_LINE(1130)
					other = jn->other;
					HX_STACK_LINE(1133)
					if (((other->isActive() == false))){
						HX_STACK_LINE(1135)
						jn = jn->next;
						HX_STACK_LINE(1136)
						continue;
					}
					HX_STACK_LINE(1139)
					island->addJoint(jn->joint);
					HX_STACK_LINE(1140)
					jn->joint->m_islandFlag = true;
					HX_STACK_LINE(1142)
					if (((((int(other->m_flags) & int(::box2D::dynamics::B2Body_obj::e_islandFlag))) != (int)0))){
						HX_STACK_LINE(1144)
						jn = jn->next;
						HX_STACK_LINE(1145)
						continue;
					}
					HX_STACK_LINE(1149)
					stack[(stackCount)++] = other;
					HX_STACK_LINE(1150)
					hx::OrEq(other->m_flags,::box2D::dynamics::B2Body_obj::e_islandFlag);
					HX_STACK_LINE(1151)
					jn = jn->next;
				}
			}
			HX_STACK_LINE(1154)
			island->solve(step,this->m_gravity,this->m_allowSleep);
			HX_STACK_LINE(1157)
			{
				HX_STACK_LINE(1157)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = island->m_bodyCount;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1157)
				while(((_g1 < _g))){
					HX_STACK_LINE(1157)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1160)
					b = island->m_bodies->__get(i).StaticCast< ::box2D::dynamics::B2Body >();
					HX_STACK_LINE(1161)
					if (((b->getType() == ::box2D::dynamics::B2Body_obj::b2_staticBody))){
						HX_STACK_LINE(1162)
						hx::AndEq(b->m_flags,~(int)(::box2D::dynamics::B2Body_obj::e_islandFlag));
					}
				}
			}
			HX_STACK_LINE(1166)
			seed = seed->m_next;
		}
		HX_STACK_LINE(1170)
		{
			HX_STACK_LINE(1170)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = stack->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1170)
			while(((_g1 < _g))){
				HX_STACK_LINE(1170)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1172)
				if (((stack->__get(i).StaticCast< ::box2D::dynamics::B2Body >() == null()))){
					HX_STACK_LINE(1172)
					break;
				}
				HX_STACK_LINE(1173)
				stack[i] = null();
			}
		}
		HX_STACK_LINE(1177)
		b = this->m_bodyList;
		HX_STACK_LINE(1178)
		while(((b != null()))){
			HX_STACK_LINE(1180)
			if (((bool((b->isAwake() == false)) || bool((b->isActive() == false))))){
				HX_STACK_LINE(1182)
				b = b->m_next;
				HX_STACK_LINE(1183)
				continue;
			}
			HX_STACK_LINE(1186)
			if (((b->getType() == ::box2D::dynamics::B2Body_obj::b2_staticBody))){
				HX_STACK_LINE(1188)
				b = b->m_next;
				HX_STACK_LINE(1189)
				continue;
			}
			HX_STACK_LINE(1193)
			b->synchronizeFixtures();
			HX_STACK_LINE(1194)
			b = b->m_next;
		}
		HX_STACK_LINE(1198)
		this->m_contactManager->findNewContacts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,solve,(void))

bool B2World_obj::isLocked( ){
	HX_STACK_PUSH("B2World::isLocked","box2D/dynamics/B2World.hx",958);
	HX_STACK_THIS(this);
	HX_STACK_LINE(958)
	return (((int(this->m_flags) & int(::box2D::dynamics::B2World_obj::e_locked))) > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(B2World_obj,isLocked,return )

::box2D::dynamics::contacts::B2Contact B2World_obj::getContactList( ){
	HX_STACK_PUSH("B2World::getContactList","box2D/dynamics/B2World.hx",950);
	HX_STACK_THIS(this);
	HX_STACK_LINE(950)
	return this->m_contactList;
}


HX_DEFINE_DYNAMIC_FUNC0(B2World_obj,getContactList,return )

::box2D::dynamics::joints::B2Joint B2World_obj::getJointList( ){
	HX_STACK_PUSH("B2World::getJointList","box2D/dynamics/B2World.hx",939);
	HX_STACK_THIS(this);
	HX_STACK_LINE(939)
	return this->m_jointList;
}


HX_DEFINE_DYNAMIC_FUNC0(B2World_obj,getJointList,return )

::box2D::dynamics::B2Body B2World_obj::getBodyList( ){
	HX_STACK_PUSH("B2World::getBodyList","box2D/dynamics/B2World.hx",930);
	HX_STACK_THIS(this);
	HX_STACK_LINE(930)
	return this->m_bodyList;
}


HX_DEFINE_DYNAMIC_FUNC0(B2World_obj,getBodyList,return )

Array< ::Dynamic > B2World_obj::rayCastAll( ::box2D::common::math::B2Vec2 point1,::box2D::common::math::B2Vec2 point2){
	HX_STACK_PUSH("B2World::rayCastAll","box2D/dynamics/B2World.hx",914);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point1,"point1");
	HX_STACK_ARG(point2,"point2");
	HX_STACK_LINE(915)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::Dynamic >::__new());		HX_STACK_VAR(result,"result");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,result)
	Float run(::box2D::dynamics::B2Fixture fixture,::box2D::common::math::B2Vec2 point,::box2D::common::math::B2Vec2 normal,Float fraction){
		HX_STACK_PUSH("*::_Function_1_1","box2D/dynamics/B2World.hx",917);
		HX_STACK_ARG(fixture,"fixture");
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(normal,"normal");
		HX_STACK_ARG(fraction,"fraction");
		{
			HX_STACK_LINE(918)
			result->__get((int)0).StaticCast< Array< ::Dynamic > >()[result->__get((int)0).StaticCast< Array< ::Dynamic > >()->length] = fixture;
			HX_STACK_LINE(919)
			return (int)1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC4(return)

	HX_STACK_LINE(916)
	Dynamic rayCastAllWrapper =  Dynamic(new _Function_1_1(result));		HX_STACK_VAR(rayCastAllWrapper,"rayCastAllWrapper");
	HX_STACK_LINE(921)
	this->rayCast(rayCastAllWrapper,point1,point2);
	HX_STACK_LINE(922)
	return result->__get((int)0).StaticCast< Array< ::Dynamic > >();
}


HX_DEFINE_DYNAMIC_FUNC2(B2World_obj,rayCastAll,return )

::box2D::dynamics::B2Fixture B2World_obj::rayCastOne( ::box2D::common::math::B2Vec2 point1,::box2D::common::math::B2Vec2 point2){
	HX_STACK_PUSH("B2World::rayCastOne","box2D/dynamics/B2World.hx",902);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point1,"point1");
	HX_STACK_ARG(point2,"point2");
	HX_STACK_LINE(903)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,result)
	Float run(::box2D::dynamics::B2Fixture fixture,::box2D::common::math::B2Vec2 point,::box2D::common::math::B2Vec2 normal,Float fraction){
		HX_STACK_PUSH("*::_Function_1_1","box2D/dynamics/B2World.hx",905);
		HX_STACK_ARG(fixture,"fixture");
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(normal,"normal");
		HX_STACK_ARG(fraction,"fraction");
		{
			HX_STACK_LINE(906)
			result[(int)0] = fixture;
			HX_STACK_LINE(907)
			return fraction;
		}
		return null();
	}
	HX_END_LOCAL_FUNC4(return)

	HX_STACK_LINE(904)
	Dynamic rayCastOneWrapper =  Dynamic(new _Function_1_1(result));		HX_STACK_VAR(rayCastOneWrapper,"rayCastOneWrapper");
	HX_STACK_LINE(909)
	this->rayCast(rayCastOneWrapper,point1,point2);
	HX_STACK_LINE(910)
	return result->__get((int)0).StaticCast< ::box2D::dynamics::B2Fixture >();
}


HX_DEFINE_DYNAMIC_FUNC2(B2World_obj,rayCastOne,return )

Void B2World_obj::rayCast( Dynamic callbackMethod,::box2D::common::math::B2Vec2 point1,::box2D::common::math::B2Vec2 point2){
{
		HX_STACK_PUSH("B2World::rayCast","box2D/dynamics/B2World.hx",878);
		HX_STACK_THIS(this);
		HX_STACK_ARG(callbackMethod,"callbackMethod");
		HX_STACK_ARG(point1,"point1");
		HX_STACK_ARG(point2,"point2");
		HX_STACK_LINE(878)
		Array< ::Dynamic > point21 = Array_obj< ::Dynamic >::__new().Add(point2);		HX_STACK_VAR(point21,"point21");
		HX_STACK_LINE(878)
		Array< ::Dynamic > point11 = Array_obj< ::Dynamic >::__new().Add(point1);		HX_STACK_VAR(point11,"point11");
		HX_STACK_LINE(878)
		Dynamic callbackMethod1 = Dynamic( Array_obj<Dynamic>::__new().Add(callbackMethod));		HX_STACK_VAR(callbackMethod1,"callbackMethod1");
		HX_STACK_LINE(880)
		Array< ::Dynamic > broadPhase = Array_obj< ::Dynamic >::__new().Add(this->m_contactManager->m_broadPhase);		HX_STACK_VAR(broadPhase,"broadPhase");
		HX_STACK_LINE(881)
		Array< ::Dynamic > output = Array_obj< ::Dynamic >::__new().Add(::box2D::collision::B2RayCastOutput_obj::__new());		HX_STACK_VAR(output,"output");

		HX_BEGIN_LOCAL_FUNC_S5(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,point11,Dynamic,callbackMethod1,Array< ::Dynamic >,point21,Array< ::Dynamic >,output,Array< ::Dynamic >,broadPhase)
		Float run(::box2D::collision::B2RayCastInput input,Dynamic proxy){
			HX_STACK_PUSH("*::_Function_1_1","box2D/dynamics/B2World.hx",883);
			HX_STACK_ARG(input,"input");
			HX_STACK_ARG(proxy,"proxy");
			{
				HX_STACK_LINE(884)
				Dynamic userData = broadPhase->__get((int)0).StaticCast< ::box2D::collision::IBroadPhase >()->getUserData(proxy);		HX_STACK_VAR(userData,"userData");
				HX_STACK_LINE(885)
				::box2D::dynamics::B2Fixture fixture = hx::TCast< box2D::dynamics::B2Fixture >::cast(userData);		HX_STACK_VAR(fixture,"fixture");
				HX_STACK_LINE(886)
				bool hit = fixture->rayCast(output->__get((int)0).StaticCast< ::box2D::collision::B2RayCastOutput >(),input);		HX_STACK_VAR(hit,"hit");
				HX_STACK_LINE(887)
				if ((hit)){
					HX_STACK_LINE(889)
					Float fraction = output->__get((int)0).StaticCast< ::box2D::collision::B2RayCastOutput >()->fraction;		HX_STACK_VAR(fraction,"fraction");
					HX_STACK_LINE(890)
					::box2D::common::math::B2Vec2 point = ::box2D::common::math::B2Vec2_obj::__new(((((1.0 - fraction)) * point11->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()->x) + (fraction * point21->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()->x)),((((1.0 - fraction)) * point11->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()->y) + (fraction * point21->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()->y)));		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(893)
					return callbackMethod1->__GetItem((int)0)(fixture,point,output->__get((int)0).StaticCast< ::box2D::collision::B2RayCastOutput >()->normal,fraction);
				}
				HX_STACK_LINE(895)
				return input->maxFraction;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(882)
		Dynamic rayCastWrapper =  Dynamic(new _Function_1_1(point11,callbackMethod1,point21,output,broadPhase));		HX_STACK_VAR(rayCastWrapper,"rayCastWrapper");
		HX_STACK_LINE(897)
		::box2D::collision::B2RayCastInput input = ::box2D::collision::B2RayCastInput_obj::__new(point11->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >(),point21->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >(),null());		HX_STACK_VAR(input,"input");
		HX_STACK_LINE(898)
		broadPhase->__get((int)0).StaticCast< ::box2D::collision::IBroadPhase >()->rayCast(rayCastWrapper,input);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2World_obj,rayCast,(void))

Void B2World_obj::queryPoint( Dynamic callbackMethod,::box2D::common::math::B2Vec2 p){
{
		HX_STACK_PUSH("B2World::queryPoint","box2D/dynamics/B2World.hx",843);
		HX_STACK_THIS(this);
		HX_STACK_ARG(callbackMethod,"callbackMethod");
		HX_STACK_ARG(p,"p");
		HX_STACK_LINE(843)
		Array< ::Dynamic > p1 = Array_obj< ::Dynamic >::__new().Add(p);		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(843)
		Dynamic callbackMethod1 = Dynamic( Array_obj<Dynamic>::__new().Add(callbackMethod));		HX_STACK_VAR(callbackMethod1,"callbackMethod1");
		HX_STACK_LINE(845)
		Array< ::Dynamic > broadPhase = Array_obj< ::Dynamic >::__new().Add(this->m_contactManager->m_broadPhase);		HX_STACK_VAR(broadPhase,"broadPhase");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,callbackMethod1,Array< ::Dynamic >,p1,Array< ::Dynamic >,broadPhase)
		bool run(Dynamic proxy){
			HX_STACK_PUSH("*::_Function_1_1","box2D/dynamics/B2World.hx",847);
			HX_STACK_ARG(proxy,"proxy");
			{
				HX_STACK_LINE(848)
				::box2D::dynamics::B2Fixture fixture = hx::TCast< box2D::dynamics::B2Fixture >::cast(broadPhase->__get((int)0).StaticCast< ::box2D::collision::IBroadPhase >()->getUserData(proxy));		HX_STACK_VAR(fixture,"fixture");
				HX_STACK_LINE(849)
				if ((fixture->testPoint(p1->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()))){
					HX_STACK_LINE(850)
					return callbackMethod1->__GetItem((int)0)(fixture);
				}
				HX_STACK_LINE(851)
				return true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(846)
		Dynamic worldQueryWrapper =  Dynamic(new _Function_1_1(callbackMethod1,p1,broadPhase));		HX_STACK_VAR(worldQueryWrapper,"worldQueryWrapper");
		HX_STACK_LINE(854)
		::box2D::collision::B2AABB aabb = ::box2D::collision::B2AABB_obj::__new();		HX_STACK_VAR(aabb,"aabb");
		HX_STACK_LINE(855)
		{
			HX_STACK_LINE(855)
			::box2D::common::math::B2Vec2 _this = aabb->lowerBound;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(855)
			_this->x = (p1->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()->x - ::box2D::common::B2Settings_obj::b2_linearSlop);
			HX_STACK_LINE(855)
			_this->y = (p1->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()->y - ::box2D::common::B2Settings_obj::b2_linearSlop);
		}
		HX_STACK_LINE(856)
		{
			HX_STACK_LINE(856)
			::box2D::common::math::B2Vec2 _this = aabb->upperBound;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(856)
			_this->x = (p1->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()->x + ::box2D::common::B2Settings_obj::b2_linearSlop);
			HX_STACK_LINE(856)
			_this->y = (p1->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >()->y + ::box2D::common::B2Settings_obj::b2_linearSlop);
		}
		HX_STACK_LINE(857)
		broadPhase->__get((int)0).StaticCast< ::box2D::collision::IBroadPhase >()->query(worldQueryWrapper,aabb);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2World_obj,queryPoint,(void))

Void B2World_obj::queryShape( Dynamic callbackMethod,::box2D::collision::shapes::B2Shape shape,::box2D::common::math::B2Transform transform){
{
		HX_STACK_PUSH("B2World::queryShape","box2D/dynamics/B2World.hx",816);
		HX_STACK_THIS(this);
		HX_STACK_ARG(callbackMethod,"callbackMethod");
		HX_STACK_ARG(shape,"shape");
		HX_STACK_ARG(transform,"transform");
		HX_STACK_LINE(816)
		Array< ::Dynamic > transform1 = Array_obj< ::Dynamic >::__new().Add(transform);		HX_STACK_VAR(transform1,"transform1");
		HX_STACK_LINE(816)
		Array< ::Dynamic > shape1 = Array_obj< ::Dynamic >::__new().Add(shape);		HX_STACK_VAR(shape1,"shape1");
		HX_STACK_LINE(816)
		Dynamic callbackMethod1 = Dynamic( Array_obj<Dynamic>::__new().Add(callbackMethod));		HX_STACK_VAR(callbackMethod1,"callbackMethod1");
		HX_STACK_LINE(818)
		if (((transform1->__get((int)0).StaticCast< ::box2D::common::math::B2Transform >() == null()))){
			HX_STACK_LINE(820)
			transform1[(int)0] = ::box2D::common::math::B2Transform_obj::__new(null(),null());
			HX_STACK_LINE(821)
			transform1->__get((int)0).StaticCast< ::box2D::common::math::B2Transform >()->setIdentity();
		}
		HX_STACK_LINE(823)
		Array< ::Dynamic > broadPhase = Array_obj< ::Dynamic >::__new().Add(this->m_contactManager->m_broadPhase);		HX_STACK_VAR(broadPhase,"broadPhase");

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,shape1,Dynamic,callbackMethod1,Array< ::Dynamic >,transform1,Array< ::Dynamic >,broadPhase)
		bool run(Dynamic proxy){
			HX_STACK_PUSH("*::_Function_1_1","box2D/dynamics/B2World.hx",825);
			HX_STACK_ARG(proxy,"proxy");
			{
				HX_STACK_LINE(826)
				::box2D::dynamics::B2Fixture fixture = hx::TCast< box2D::dynamics::B2Fixture >::cast(broadPhase->__get((int)0).StaticCast< ::box2D::collision::IBroadPhase >()->getUserData(proxy));		HX_STACK_VAR(fixture,"fixture");
				HX_STACK_LINE(827)
				if ((::box2D::collision::shapes::B2Shape_obj::testOverlap(shape1->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >(),transform1->__get((int)0).StaticCast< ::box2D::common::math::B2Transform >(),fixture->getShape(),fixture->getBody()->getTransform()))){
					HX_STACK_LINE(828)
					return callbackMethod1->__GetItem((int)0)(fixture);
				}
				HX_STACK_LINE(829)
				return true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(824)
		Dynamic worldQueryWrapper =  Dynamic(new _Function_1_1(shape1,callbackMethod1,transform1,broadPhase));		HX_STACK_VAR(worldQueryWrapper,"worldQueryWrapper");
		HX_STACK_LINE(831)
		::box2D::collision::B2AABB aabb = ::box2D::collision::B2AABB_obj::__new();		HX_STACK_VAR(aabb,"aabb");
		HX_STACK_LINE(832)
		shape1->__get((int)0).StaticCast< ::box2D::collision::shapes::B2Shape >()->computeAABB(aabb,transform1->__get((int)0).StaticCast< ::box2D::common::math::B2Transform >());
		HX_STACK_LINE(833)
		broadPhase->__get((int)0).StaticCast< ::box2D::collision::IBroadPhase >()->query(worldQueryWrapper,aabb);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2World_obj,queryShape,(void))

Void B2World_obj::queryAABB( Dynamic callbackMethod,::box2D::collision::B2AABB aabb){
{
		HX_STACK_PUSH("B2World::queryAABB","box2D/dynamics/B2World.hx",799);
		HX_STACK_THIS(this);
		HX_STACK_ARG(callbackMethod,"callbackMethod");
		HX_STACK_ARG(aabb,"aabb");
		HX_STACK_LINE(799)
		Dynamic callbackMethod1 = Dynamic( Array_obj<Dynamic>::__new().Add(callbackMethod));		HX_STACK_VAR(callbackMethod1,"callbackMethod1");
		HX_STACK_LINE(801)
		Array< ::Dynamic > broadPhase = Array_obj< ::Dynamic >::__new().Add(this->m_contactManager->m_broadPhase);		HX_STACK_VAR(broadPhase,"broadPhase");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,callbackMethod1,Array< ::Dynamic >,broadPhase)
		bool run(Dynamic proxy){
			HX_STACK_PUSH("*::_Function_1_1","box2D/dynamics/B2World.hx",803);
			HX_STACK_ARG(proxy,"proxy");
			{
				HX_STACK_LINE(803)
				return callbackMethod1->__GetItem((int)0)(broadPhase->__get((int)0).StaticCast< ::box2D::collision::IBroadPhase >()->getUserData(proxy));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(802)
		Dynamic worldQueryWrapper =  Dynamic(new _Function_1_1(callbackMethod1,broadPhase));		HX_STACK_VAR(worldQueryWrapper,"worldQueryWrapper");
		HX_STACK_LINE(806)
		broadPhase->__get((int)0).StaticCast< ::box2D::collision::IBroadPhase >()->query(worldQueryWrapper,aabb);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2World_obj,queryAABB,(void))

Void B2World_obj::drawDebugData( ){
{
		HX_STACK_PUSH("B2World::drawDebugData","box2D/dynamics/B2World.hx",642);
		HX_STACK_THIS(this);
		HX_STACK_LINE(643)
		if (((this->m_debugDraw == null()))){
			HX_STACK_LINE(644)
			return null();
		}
		HX_STACK_LINE(648)
		this->m_debugDraw->m_sprite->get_graphics()->clear();
		HX_STACK_LINE(650)
		int flags = this->m_debugDraw->getFlags();		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(652)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(653)
		::box2D::dynamics::B2Body b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(654)
		::box2D::dynamics::B2Fixture f;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(655)
		::box2D::collision::shapes::B2Shape s;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(656)
		::box2D::dynamics::joints::B2Joint j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(657)
		::box2D::collision::IBroadPhase bp;		HX_STACK_VAR(bp,"bp");
		HX_STACK_LINE(658)
		::box2D::common::math::B2Vec2 invQ = ::box2D::common::math::B2Vec2_obj::__new(null(),null());		HX_STACK_VAR(invQ,"invQ");
		HX_STACK_LINE(659)
		::box2D::common::math::B2Vec2 x1 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(660)
		::box2D::common::math::B2Vec2 x2 = ::box2D::common::math::B2Vec2_obj::__new(null(),null());		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(661)
		::box2D::common::math::B2Transform xf;		HX_STACK_VAR(xf,"xf");
		HX_STACK_LINE(662)
		::box2D::collision::B2AABB b1 = ::box2D::collision::B2AABB_obj::__new();		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(663)
		::box2D::collision::B2AABB b2 = ::box2D::collision::B2AABB_obj::__new();		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(664)
		Array< ::Dynamic > vs = Array_obj< ::Dynamic >::__new().Add(::box2D::common::math::B2Vec2_obj::__new(null(),null())).Add(::box2D::common::math::B2Vec2_obj::__new(null(),null())).Add(::box2D::common::math::B2Vec2_obj::__new(null(),null())).Add(::box2D::common::math::B2Vec2_obj::__new(null(),null()));		HX_STACK_VAR(vs,"vs");
		HX_STACK_LINE(667)
		::box2D::common::B2Color color = ::box2D::common::B2Color_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(669)
		if (((((int(flags) & int(::box2D::dynamics::B2DebugDraw_obj::e_shapeBit))) != (int)0))){
			HX_STACK_LINE(671)
			b = this->m_bodyList;
			HX_STACK_LINE(672)
			while(((b != null()))){
				HX_STACK_LINE(674)
				xf = b->m_xf;
				HX_STACK_LINE(675)
				f = b->getFixtureList();
				HX_STACK_LINE(676)
				while(((f != null()))){
					HX_STACK_LINE(678)
					s = f->getShape();
					HX_STACK_LINE(679)
					if (((b->isActive() == false))){
						HX_STACK_LINE(681)
						color->set(0.5,0.5,0.3);
						HX_STACK_LINE(682)
						this->drawShape(s,xf,color);
					}
					else{
						HX_STACK_LINE(684)
						if (((b->getType() == ::box2D::dynamics::B2Body_obj::b2_staticBody))){
							HX_STACK_LINE(686)
							color->set(0.5,0.9,0.5);
							HX_STACK_LINE(687)
							this->drawShape(s,xf,color);
						}
						else{
							HX_STACK_LINE(689)
							if (((b->getType() == ::box2D::dynamics::B2Body_obj::b2_kinematicBody))){
								HX_STACK_LINE(691)
								color->set(0.5,0.5,0.9);
								HX_STACK_LINE(692)
								this->drawShape(s,xf,color);
							}
							else{
								HX_STACK_LINE(694)
								if (((b->isAwake() == false))){
									HX_STACK_LINE(696)
									color->set(0.6,0.6,0.6);
									HX_STACK_LINE(697)
									this->drawShape(s,xf,color);
								}
								else{
									HX_STACK_LINE(701)
									color->set(0.9,0.7,0.7);
									HX_STACK_LINE(702)
									this->drawShape(s,xf,color);
								}
							}
						}
					}
					HX_STACK_LINE(704)
					f = f->m_next;
				}
				HX_STACK_LINE(706)
				b = b->m_next;
			}
		}
		HX_STACK_LINE(710)
		if (((((int(flags) & int(::box2D::dynamics::B2DebugDraw_obj::e_jointBit))) != (int)0))){
			HX_STACK_LINE(712)
			j = this->m_jointList;
			HX_STACK_LINE(713)
			while(((j != null()))){
				HX_STACK_LINE(715)
				this->drawJoint(j);
				HX_STACK_LINE(716)
				j = j->m_next;
			}
		}
		HX_STACK_LINE(720)
		if (((((int(flags) & int(::box2D::dynamics::B2DebugDraw_obj::e_controllerBit))) != (int)0))){
			HX_STACK_LINE(722)
			::box2D::dynamics::controllers::B2Controller c = this->m_controllerList;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(723)
			while(((c != null()))){
				HX_STACK_LINE(725)
				c->draw(this->m_debugDraw);
				HX_STACK_LINE(726)
				c = c->m_next;
			}
		}
		HX_STACK_LINE(730)
		if (((((int(flags) & int(::box2D::dynamics::B2DebugDraw_obj::e_pairBit))) != (int)0))){
			HX_STACK_LINE(732)
			color->set(0.3,0.9,0.9);
			HX_STACK_LINE(733)
			::box2D::dynamics::contacts::B2Contact contact = this->m_contactManager->m_contactList;		HX_STACK_VAR(contact,"contact");
			HX_STACK_LINE(734)
			while(((contact != null()))){
				HX_STACK_LINE(736)
				::box2D::dynamics::B2Fixture fixtureA = contact->getFixtureA();		HX_STACK_VAR(fixtureA,"fixtureA");
				HX_STACK_LINE(737)
				::box2D::dynamics::B2Fixture fixtureB = contact->getFixtureB();		HX_STACK_VAR(fixtureB,"fixtureB");
				HX_STACK_LINE(739)
				::box2D::common::math::B2Vec2 cA = fixtureA->getAABB()->getCenter();		HX_STACK_VAR(cA,"cA");
				HX_STACK_LINE(740)
				::box2D::common::math::B2Vec2 cB = fixtureB->getAABB()->getCenter();		HX_STACK_VAR(cB,"cB");
				HX_STACK_LINE(742)
				this->m_debugDraw->drawSegment(cA,cB,color);
				HX_STACK_LINE(743)
				contact = contact->getNext();
			}
		}
		HX_STACK_LINE(747)
		if (((((int(flags) & int(::box2D::dynamics::B2DebugDraw_obj::e_aabbBit))) != (int)0))){
			HX_STACK_LINE(749)
			bp = this->m_contactManager->m_broadPhase;
			HX_STACK_LINE(751)
			vs = Array_obj< ::Dynamic >::__new().Add(::box2D::common::math::B2Vec2_obj::__new(null(),null())).Add(::box2D::common::math::B2Vec2_obj::__new(null(),null())).Add(::box2D::common::math::B2Vec2_obj::__new(null(),null())).Add(::box2D::common::math::B2Vec2_obj::__new(null(),null()));
			HX_STACK_LINE(753)
			b = this->m_bodyList;
			HX_STACK_LINE(754)
			while(((b != null()))){
				HX_STACK_LINE(756)
				if (((b->isActive() == false))){
					HX_STACK_LINE(758)
					b = b->getNext();
					HX_STACK_LINE(759)
					continue;
				}
				HX_STACK_LINE(761)
				f = b->getFixtureList();
				HX_STACK_LINE(762)
				while(((f != null()))){
					HX_STACK_LINE(764)
					::box2D::collision::B2AABB aabb = bp->getFatAABB(f->m_proxy);		HX_STACK_VAR(aabb,"aabb");
					HX_STACK_LINE(765)
					{
						HX_STACK_LINE(765)
						::box2D::common::math::B2Vec2 _this = vs->__get((int)0).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(765)
						_this->x = aabb->lowerBound->x;
						HX_STACK_LINE(765)
						_this->y = aabb->lowerBound->y;
					}
					HX_STACK_LINE(766)
					{
						HX_STACK_LINE(766)
						::box2D::common::math::B2Vec2 _this = vs->__get((int)1).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(766)
						_this->x = aabb->upperBound->x;
						HX_STACK_LINE(766)
						_this->y = aabb->lowerBound->y;
					}
					HX_STACK_LINE(767)
					{
						HX_STACK_LINE(767)
						::box2D::common::math::B2Vec2 _this = vs->__get((int)2).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(767)
						_this->x = aabb->upperBound->x;
						HX_STACK_LINE(767)
						_this->y = aabb->upperBound->y;
					}
					HX_STACK_LINE(768)
					{
						HX_STACK_LINE(768)
						::box2D::common::math::B2Vec2 _this = vs->__get((int)3).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(768)
						_this->x = aabb->lowerBound->x;
						HX_STACK_LINE(768)
						_this->y = aabb->upperBound->y;
					}
					HX_STACK_LINE(770)
					this->m_debugDraw->drawPolygon(vs,(int)4,color);
					HX_STACK_LINE(771)
					f = f->getNext();
				}
				HX_STACK_LINE(773)
				b = b->getNext();
			}
		}
		HX_STACK_LINE(777)
		if (((((int(flags) & int(::box2D::dynamics::B2DebugDraw_obj::e_centerOfMassBit))) != (int)0))){
			HX_STACK_LINE(779)
			b = this->m_bodyList;
			HX_STACK_LINE(780)
			while(((b != null()))){
				HX_STACK_LINE(782)
				xf = ::box2D::dynamics::B2World_obj::s_xf;
				HX_STACK_LINE(783)
				xf->R = b->m_xf->R;
				HX_STACK_LINE(784)
				xf->position = b->getWorldCenter();
				HX_STACK_LINE(785)
				this->m_debugDraw->drawTransform(xf);
				HX_STACK_LINE(786)
				b = b->m_next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2World_obj,drawDebugData,(void))

Void B2World_obj::clearForces( ){
{
		HX_STACK_PUSH("B2World::clearForces","box2D/dynamics/B2World.hx",628);
		HX_STACK_THIS(this);
		HX_STACK_LINE(629)
		::box2D::dynamics::B2Body body = this->m_bodyList;		HX_STACK_VAR(body,"body");
		HX_STACK_LINE(630)
		while(((body != null()))){
			HX_STACK_LINE(632)
			{
				HX_STACK_LINE(632)
				::box2D::common::math::B2Vec2 _this = body->m_force;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(632)
				_this->x = 0.0;
				HX_STACK_LINE(632)
				_this->y = 0.0;
			}
			HX_STACK_LINE(633)
			body->m_torque = 0.0;
			HX_STACK_LINE(634)
			body = body->m_next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2World_obj,clearForces,(void))

Void B2World_obj::step( Float dt,int velocityIterations,int positionIterations){
{
		HX_STACK_PUSH("B2World::step","box2D/dynamics/B2World.hx",573);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dt,"dt");
		HX_STACK_ARG(velocityIterations,"velocityIterations");
		HX_STACK_ARG(positionIterations,"positionIterations");
		HX_STACK_LINE(574)
		::box2D::common::math::B2Vec2_obj::freePool();
		HX_STACK_LINE(576)
		if (((((int(this->m_flags) & int(::box2D::dynamics::B2World_obj::e_newFixture))) != (int)0))){
			HX_STACK_LINE(578)
			this->m_contactManager->findNewContacts();
			HX_STACK_LINE(579)
			hx::AndEq(this->m_flags,~(int)(::box2D::dynamics::B2World_obj::e_newFixture));
		}
		HX_STACK_LINE(582)
		hx::OrEq(this->m_flags,::box2D::dynamics::B2World_obj::e_locked);
		HX_STACK_LINE(584)
		::box2D::dynamics::B2TimeStep step = ::box2D::dynamics::B2World_obj::s_timestep2;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(585)
		step->dt = dt;
		HX_STACK_LINE(586)
		step->velocityIterations = velocityIterations;
		HX_STACK_LINE(587)
		step->positionIterations = positionIterations;
		HX_STACK_LINE(588)
		if (((dt > 0.0))){
			HX_STACK_LINE(589)
			step->inv_dt = (Float(1.0) / Float(dt));
		}
		else{
			HX_STACK_LINE(593)
			step->inv_dt = 0.0;
		}
		HX_STACK_LINE(597)
		step->dtRatio = (this->m_inv_dt0 * dt);
		HX_STACK_LINE(599)
		step->warmStarting = ::box2D::dynamics::B2World_obj::m_warmStarting;
		HX_STACK_LINE(602)
		this->m_contactManager->collide();
		HX_STACK_LINE(605)
		if (((step->dt > 0.0))){
			HX_STACK_LINE(606)
			this->solve(step);
		}
		HX_STACK_LINE(611)
		if (((bool(::box2D::dynamics::B2World_obj::m_continuousPhysics) && bool((step->dt > 0.0))))){
			HX_STACK_LINE(612)
			this->solveTOI(step);
		}
		HX_STACK_LINE(616)
		if (((step->dt > 0.0))){
			HX_STACK_LINE(617)
			this->m_inv_dt0 = step->inv_dt;
		}
		HX_STACK_LINE(620)
		hx::AndEq(this->m_flags,~(int)(::box2D::dynamics::B2World_obj::e_locked));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(B2World_obj,step,(void))

::box2D::dynamics::B2Body B2World_obj::getGroundBody( ){
	HX_STACK_PUSH("B2World::getGroundBody","box2D/dynamics/B2World.hx",561);
	HX_STACK_THIS(this);
	HX_STACK_LINE(561)
	return this->m_groundBody;
}


HX_DEFINE_DYNAMIC_FUNC0(B2World_obj,getGroundBody,return )

::box2D::common::math::B2Vec2 B2World_obj::getGravity( ){
	HX_STACK_PUSH("B2World::getGravity","box2D/dynamics/B2World.hx",553);
	HX_STACK_THIS(this);
	HX_STACK_LINE(553)
	return this->m_gravity;
}


HX_DEFINE_DYNAMIC_FUNC0(B2World_obj,getGravity,return )

Void B2World_obj::setGravity( ::box2D::common::math::B2Vec2 gravity){
{
		HX_STACK_PUSH("B2World::setGravity","box2D/dynamics/B2World.hx",546);
		HX_STACK_THIS(this);
		HX_STACK_ARG(gravity,"gravity");
		HX_STACK_LINE(546)
		this->m_gravity = gravity;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,setGravity,(void))

int B2World_obj::getContactCount( ){
	HX_STACK_PUSH("B2World::getContactCount","box2D/dynamics/B2World.hx",538);
	HX_STACK_THIS(this);
	HX_STACK_LINE(538)
	return this->m_contactCount;
}


HX_DEFINE_DYNAMIC_FUNC0(B2World_obj,getContactCount,return )

int B2World_obj::getJointCount( ){
	HX_STACK_PUSH("B2World::getJointCount","box2D/dynamics/B2World.hx",530);
	HX_STACK_THIS(this);
	HX_STACK_LINE(530)
	return this->m_jointCount;
}


HX_DEFINE_DYNAMIC_FUNC0(B2World_obj,getJointCount,return )

int B2World_obj::getBodyCount( ){
	HX_STACK_PUSH("B2World::getBodyCount","box2D/dynamics/B2World.hx",522);
	HX_STACK_THIS(this);
	HX_STACK_LINE(522)
	return this->m_bodyCount;
}


HX_DEFINE_DYNAMIC_FUNC0(B2World_obj,getBodyCount,return )

Void B2World_obj::setContinuousPhysics( bool flag){
{
		HX_STACK_PUSH("B2World::setContinuousPhysics","box2D/dynamics/B2World.hx",516);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flag,"flag");
		HX_STACK_LINE(516)
		::box2D::dynamics::B2World_obj::m_continuousPhysics = flag;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,setContinuousPhysics,(void))

Void B2World_obj::setWarmStarting( bool flag){
{
		HX_STACK_PUSH("B2World::setWarmStarting","box2D/dynamics/B2World.hx",511);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flag,"flag");
		HX_STACK_LINE(511)
		::box2D::dynamics::B2World_obj::m_warmStarting = flag;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,setWarmStarting,(void))

Void B2World_obj::destroyController( ::box2D::dynamics::controllers::B2Controller controller){
{
		HX_STACK_PUSH("B2World::destroyController","box2D/dynamics/B2World.hx",496);
		HX_STACK_THIS(this);
		HX_STACK_ARG(controller,"controller");
		HX_STACK_LINE(498)
		controller->clear();
		HX_STACK_LINE(499)
		if (((controller->m_next != null()))){
			HX_STACK_LINE(500)
			controller->m_next->m_prev = controller->m_prev;
		}
		HX_STACK_LINE(501)
		if (((controller->m_prev != null()))){
			HX_STACK_LINE(502)
			controller->m_prev->m_next = controller->m_next;
		}
		HX_STACK_LINE(503)
		if (((controller == this->m_controllerList))){
			HX_STACK_LINE(504)
			this->m_controllerList = controller->m_next;
		}
		HX_STACK_LINE(505)
		--(this->m_controllerCount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,destroyController,(void))

::box2D::dynamics::controllers::B2Controller B2World_obj::createController( ::box2D::dynamics::controllers::B2Controller controller){
	HX_STACK_PUSH("B2World::createController","box2D/dynamics/B2World.hx",478);
	HX_STACK_THIS(this);
	HX_STACK_ARG(controller,"controller");
	HX_STACK_LINE(479)
	if (((controller->m_world != hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(480)
		hx::Throw (HX_CSTRING("Controller can only be a member of one world"));
	}
	HX_STACK_LINE(483)
	controller->m_next = this->m_controllerList;
	HX_STACK_LINE(484)
	controller->m_prev = null();
	HX_STACK_LINE(485)
	if (((this->m_controllerList != null()))){
		HX_STACK_LINE(486)
		this->m_controllerList->m_prev = controller;
	}
	HX_STACK_LINE(487)
	this->m_controllerList = controller;
	HX_STACK_LINE(488)
	++(this->m_controllerCount);
	HX_STACK_LINE(490)
	controller->m_world = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(492)
	return controller;
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,createController,return )

Void B2World_obj::removeController( ::box2D::dynamics::controllers::B2Controller c){
{
		HX_STACK_PUSH("B2World::removeController","box2D/dynamics/B2World.hx",465);
		HX_STACK_THIS(this);
		HX_STACK_ARG(c,"c");
		HX_STACK_LINE(467)
		if (((c->m_prev != null()))){
			HX_STACK_LINE(468)
			c->m_prev->m_next = c->m_next;
		}
		HX_STACK_LINE(469)
		if (((c->m_next != null()))){
			HX_STACK_LINE(470)
			c->m_next->m_prev = c->m_prev;
		}
		HX_STACK_LINE(471)
		if (((this->m_controllerList == c))){
			HX_STACK_LINE(472)
			this->m_controllerList = c->m_next;
		}
		HX_STACK_LINE(474)
		(this->m_controllerCount)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,removeController,(void))

::box2D::dynamics::controllers::B2Controller B2World_obj::addController( ::box2D::dynamics::controllers::B2Controller c){
	HX_STACK_PUSH("B2World::addController","box2D/dynamics/B2World.hx",452);
	HX_STACK_THIS(this);
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(453)
	c->m_next = this->m_controllerList;
	HX_STACK_LINE(454)
	c->m_prev = null();
	HX_STACK_LINE(455)
	this->m_controllerList = c;
	HX_STACK_LINE(457)
	c->m_world = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(459)
	(this->m_controllerCount)++;
	HX_STACK_LINE(461)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,addController,return )

Void B2World_obj::destroyJoint( ::box2D::dynamics::joints::B2Joint j){
{
		HX_STACK_PUSH("B2World::destroyJoint","box2D/dynamics/B2World.hx",356);
		HX_STACK_THIS(this);
		HX_STACK_ARG(j,"j");
		HX_STACK_LINE(360)
		bool collideConnected = j->m_collideConnected;		HX_STACK_VAR(collideConnected,"collideConnected");
		HX_STACK_LINE(363)
		if (((j->m_prev != null()))){
			HX_STACK_LINE(364)
			j->m_prev->m_next = j->m_next;
		}
		HX_STACK_LINE(368)
		if (((j->m_next != null()))){
			HX_STACK_LINE(369)
			j->m_next->m_prev = j->m_prev;
		}
		HX_STACK_LINE(373)
		if (((j == this->m_jointList))){
			HX_STACK_LINE(374)
			this->m_jointList = j->m_next;
		}
		HX_STACK_LINE(379)
		::box2D::dynamics::B2Body bodyA = j->m_bodyA;		HX_STACK_VAR(bodyA,"bodyA");
		HX_STACK_LINE(380)
		::box2D::dynamics::B2Body bodyB = j->m_bodyB;		HX_STACK_VAR(bodyB,"bodyB");
		HX_STACK_LINE(383)
		bodyA->setAwake(true);
		HX_STACK_LINE(384)
		bodyB->setAwake(true);
		HX_STACK_LINE(387)
		if (((j->m_edgeA->prev != null()))){
			HX_STACK_LINE(388)
			j->m_edgeA->prev->next = j->m_edgeA->next;
		}
		HX_STACK_LINE(392)
		if (((j->m_edgeA->next != null()))){
			HX_STACK_LINE(393)
			j->m_edgeA->next->prev = j->m_edgeA->prev;
		}
		HX_STACK_LINE(397)
		if (((j->m_edgeA == bodyA->m_jointList))){
			HX_STACK_LINE(398)
			bodyA->m_jointList = j->m_edgeA->next;
		}
		HX_STACK_LINE(402)
		j->m_edgeA->prev = null();
		HX_STACK_LINE(403)
		j->m_edgeA->next = null();
		HX_STACK_LINE(406)
		if (((j->m_edgeB->prev != null()))){
			HX_STACK_LINE(407)
			j->m_edgeB->prev->next = j->m_edgeB->next;
		}
		HX_STACK_LINE(411)
		if (((j->m_edgeB->next != null()))){
			HX_STACK_LINE(412)
			j->m_edgeB->next->prev = j->m_edgeB->prev;
		}
		HX_STACK_LINE(416)
		if (((j->m_edgeB == bodyB->m_jointList))){
			HX_STACK_LINE(417)
			bodyB->m_jointList = j->m_edgeB->next;
		}
		HX_STACK_LINE(421)
		j->m_edgeB->prev = null();
		HX_STACK_LINE(422)
		j->m_edgeB->next = null();
		HX_STACK_LINE(424)
		::box2D::dynamics::joints::B2Joint_obj::destroy(j,null());
		HX_STACK_LINE(427)
		--(this->m_jointCount);
		HX_STACK_LINE(430)
		if (((collideConnected == false))){
			HX_STACK_LINE(432)
			::box2D::dynamics::contacts::B2ContactEdge edge = bodyB->getContactList();		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(433)
			while(((edge != null()))){
				HX_STACK_LINE(435)
				if (((edge->other == bodyA))){
					HX_STACK_LINE(436)
					edge->contact->flagForFiltering();
				}
				HX_STACK_LINE(442)
				edge = edge->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,destroyJoint,(void))

::box2D::dynamics::joints::B2Joint B2World_obj::createJoint( ::box2D::dynamics::joints::B2JointDef def){
	HX_STACK_PUSH("B2World::createJoint","box2D/dynamics/B2World.hx",295);
	HX_STACK_THIS(this);
	HX_STACK_ARG(def,"def");
	HX_STACK_LINE(299)
	::box2D::dynamics::joints::B2Joint j = ::box2D::dynamics::joints::B2Joint_obj::create(def,null());		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(302)
	j->m_prev = null();
	HX_STACK_LINE(303)
	j->m_next = this->m_jointList;
	HX_STACK_LINE(304)
	if (((this->m_jointList != null()))){
		HX_STACK_LINE(305)
		this->m_jointList->m_prev = j;
	}
	HX_STACK_LINE(308)
	this->m_jointList = j;
	HX_STACK_LINE(309)
	++(this->m_jointCount);
	HX_STACK_LINE(312)
	j->m_edgeA->joint = j;
	HX_STACK_LINE(313)
	j->m_edgeA->other = j->m_bodyB;
	HX_STACK_LINE(314)
	j->m_edgeA->prev = null();
	HX_STACK_LINE(315)
	j->m_edgeA->next = j->m_bodyA->m_jointList;
	HX_STACK_LINE(316)
	if (((j->m_bodyA->m_jointList != null()))){
		HX_STACK_LINE(316)
		j->m_bodyA->m_jointList->prev = j->m_edgeA;
	}
	HX_STACK_LINE(317)
	j->m_bodyA->m_jointList = j->m_edgeA;
	HX_STACK_LINE(319)
	j->m_edgeB->joint = j;
	HX_STACK_LINE(320)
	j->m_edgeB->other = j->m_bodyA;
	HX_STACK_LINE(321)
	j->m_edgeB->prev = null();
	HX_STACK_LINE(322)
	j->m_edgeB->next = j->m_bodyB->m_jointList;
	HX_STACK_LINE(323)
	if (((j->m_bodyB->m_jointList != null()))){
		HX_STACK_LINE(323)
		j->m_bodyB->m_jointList->prev = j->m_edgeB;
	}
	HX_STACK_LINE(324)
	j->m_bodyB->m_jointList = j->m_edgeB;
	HX_STACK_LINE(326)
	::box2D::dynamics::B2Body bodyA = def->bodyA;		HX_STACK_VAR(bodyA,"bodyA");
	HX_STACK_LINE(327)
	::box2D::dynamics::B2Body bodyB = def->bodyB;		HX_STACK_VAR(bodyB,"bodyB");
	HX_STACK_LINE(330)
	if (((def->collideConnected == false))){
		HX_STACK_LINE(332)
		::box2D::dynamics::contacts::B2ContactEdge edge = bodyB->getContactList();		HX_STACK_VAR(edge,"edge");
		HX_STACK_LINE(333)
		while(((edge != null()))){
			HX_STACK_LINE(335)
			if (((edge->other == bodyA))){
				HX_STACK_LINE(336)
				edge->contact->flagForFiltering();
			}
			HX_STACK_LINE(342)
			edge = edge->next;
		}
	}
	HX_STACK_LINE(348)
	return j;
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,createJoint,return )

Void B2World_obj::destroyBody( ::box2D::dynamics::B2Body b){
{
		HX_STACK_PUSH("B2World::destroyBody","box2D/dynamics/B2World.hx",203);
		HX_STACK_THIS(this);
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(207)
		if (((this->isLocked() == true))){
			HX_STACK_LINE(208)
			return null();
		}
		HX_STACK_LINE(213)
		::box2D::dynamics::joints::B2JointEdge jn = b->m_jointList;		HX_STACK_VAR(jn,"jn");
		HX_STACK_LINE(214)
		while(((jn != null()))){
			HX_STACK_LINE(216)
			::box2D::dynamics::joints::B2JointEdge jn0 = jn;		HX_STACK_VAR(jn0,"jn0");
			HX_STACK_LINE(217)
			jn = jn->next;
			HX_STACK_LINE(219)
			if (((this->m_destructionListener != null()))){
				HX_STACK_LINE(220)
				this->m_destructionListener->sayGoodbyeJoint(jn0->joint);
			}
			HX_STACK_LINE(224)
			this->destroyJoint(jn0->joint);
		}
		HX_STACK_LINE(228)
		::box2D::dynamics::controllers::B2ControllerEdge coe = b->m_controllerList;		HX_STACK_VAR(coe,"coe");
		HX_STACK_LINE(229)
		while(((coe != null()))){
			HX_STACK_LINE(231)
			::box2D::dynamics::controllers::B2ControllerEdge coe0 = coe;		HX_STACK_VAR(coe0,"coe0");
			HX_STACK_LINE(232)
			coe = coe->nextController;
			HX_STACK_LINE(233)
			coe0->controller->removeBody(b);
		}
		HX_STACK_LINE(237)
		::box2D::dynamics::contacts::B2ContactEdge ce = b->m_contactList;		HX_STACK_VAR(ce,"ce");
		HX_STACK_LINE(238)
		while(((ce != null()))){
			HX_STACK_LINE(240)
			::box2D::dynamics::contacts::B2ContactEdge ce0 = ce;		HX_STACK_VAR(ce0,"ce0");
			HX_STACK_LINE(241)
			ce = ce->next;
			HX_STACK_LINE(242)
			this->m_contactManager->destroy(ce0->contact);
		}
		HX_STACK_LINE(244)
		b->m_contactList = null();
		HX_STACK_LINE(248)
		::box2D::dynamics::B2Fixture f = b->m_fixtureList;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(249)
		while(((f != null()))){
			HX_STACK_LINE(251)
			::box2D::dynamics::B2Fixture f0 = f;		HX_STACK_VAR(f0,"f0");
			HX_STACK_LINE(252)
			f = f->m_next;
			HX_STACK_LINE(254)
			if (((this->m_destructionListener != null()))){
				HX_STACK_LINE(255)
				this->m_destructionListener->sayGoodbyeFixture(f0);
			}
			HX_STACK_LINE(259)
			f0->destroyProxy(this->m_contactManager->m_broadPhase);
			HX_STACK_LINE(260)
			f0->destroy();
		}
		HX_STACK_LINE(265)
		b->m_fixtureList = null();
		HX_STACK_LINE(266)
		b->m_fixtureCount = (int)0;
		HX_STACK_LINE(269)
		if (((b->m_prev != null()))){
			HX_STACK_LINE(270)
			b->m_prev->m_next = b->m_next;
		}
		HX_STACK_LINE(274)
		if (((b->m_next != null()))){
			HX_STACK_LINE(275)
			b->m_next->m_prev = b->m_prev;
		}
		HX_STACK_LINE(279)
		if (((b == this->m_bodyList))){
			HX_STACK_LINE(280)
			this->m_bodyList = b->m_next;
		}
		HX_STACK_LINE(284)
		--(this->m_bodyCount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,destroyBody,(void))

::box2D::dynamics::B2Body B2World_obj::createBody( ::box2D::dynamics::B2BodyDef def){
	HX_STACK_PUSH("B2World::createBody","box2D/dynamics/B2World.hx",172);
	HX_STACK_THIS(this);
	HX_STACK_ARG(def,"def");
	HX_STACK_LINE(175)
	if (((this->isLocked() == true))){
		HX_STACK_LINE(176)
		return null();
	}
	HX_STACK_LINE(181)
	::box2D::dynamics::B2Body b = ::box2D::dynamics::B2Body_obj::__new(def,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(184)
	b->m_prev = null();
	HX_STACK_LINE(185)
	b->m_next = this->m_bodyList;
	HX_STACK_LINE(186)
	if (((this->m_bodyList != null()))){
		HX_STACK_LINE(187)
		this->m_bodyList->m_prev = b;
	}
	HX_STACK_LINE(190)
	this->m_bodyList = b;
	HX_STACK_LINE(191)
	++(this->m_bodyCount);
	HX_STACK_LINE(193)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,createBody,return )

int B2World_obj::getProxyCount( ){
	HX_STACK_PUSH("B2World::getProxyCount","box2D/dynamics/B2World.hx",163);
	HX_STACK_THIS(this);
	HX_STACK_LINE(163)
	return this->m_contactManager->m_broadPhase->getProxyCount();
}


HX_DEFINE_DYNAMIC_FUNC0(B2World_obj,getProxyCount,return )

Void B2World_obj::validate( ){
{
		HX_STACK_PUSH("B2World::validate","box2D/dynamics/B2World.hx",155);
		HX_STACK_THIS(this);
		HX_STACK_LINE(155)
		this->m_contactManager->m_broadPhase->validate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2World_obj,validate,(void))

Void B2World_obj::setBroadPhase( ::box2D::collision::IBroadPhase broadPhase){
{
		HX_STACK_PUSH("B2World::setBroadPhase","box2D/dynamics/B2World.hx",135);
		HX_STACK_THIS(this);
		HX_STACK_ARG(broadPhase,"broadPhase");
		HX_STACK_LINE(136)
		::box2D::collision::IBroadPhase oldBroadPhase = this->m_contactManager->m_broadPhase;		HX_STACK_VAR(oldBroadPhase,"oldBroadPhase");
		HX_STACK_LINE(137)
		this->m_contactManager->m_broadPhase = broadPhase;
		HX_STACK_LINE(138)
		::box2D::dynamics::B2Body b = this->m_bodyList;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(139)
		while(((b != null()))){
			HX_STACK_LINE(141)
			::box2D::dynamics::B2Fixture f = b->m_fixtureList;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(142)
			while(((f != null()))){
				HX_STACK_LINE(144)
				f->m_proxy = broadPhase->createProxy(oldBroadPhase->getFatAABB(f->m_proxy),f);
				HX_STACK_LINE(145)
				f = f->m_next;
			}
			HX_STACK_LINE(147)
			b = b->m_next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,setBroadPhase,(void))

Void B2World_obj::setDebugDraw( ::box2D::dynamics::B2DebugDraw debugDraw){
{
		HX_STACK_PUSH("B2World::setDebugDraw","box2D/dynamics/B2World.hx",125);
		HX_STACK_THIS(this);
		HX_STACK_ARG(debugDraw,"debugDraw");
		HX_STACK_LINE(125)
		this->m_debugDraw = debugDraw;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,setDebugDraw,(void))

Void B2World_obj::setContactListener( ::box2D::dynamics::B2ContactListener listener){
{
		HX_STACK_PUSH("B2World::setContactListener","box2D/dynamics/B2World.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_ARG(listener,"listener");
		HX_STACK_LINE(116)
		this->m_contactManager->m_contactListener = listener;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,setContactListener,(void))

Void B2World_obj::setContactFilter( ::box2D::dynamics::B2ContactFilter filter){
{
		HX_STACK_PUSH("B2World::setContactFilter","box2D/dynamics/B2World.hx",109);
		HX_STACK_THIS(this);
		HX_STACK_ARG(filter,"filter");
		HX_STACK_LINE(109)
		this->m_contactManager->m_contactFilter = filter;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,setContactFilter,(void))

Void B2World_obj::setDestructionListener( ::box2D::dynamics::B2DestructionListener listener){
{
		HX_STACK_PUSH("B2World::setDestructionListener","box2D/dynamics/B2World.hx",101);
		HX_STACK_THIS(this);
		HX_STACK_ARG(listener,"listener");
		HX_STACK_LINE(101)
		this->m_destructionListener = listener;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2World_obj,setDestructionListener,(void))

::box2D::dynamics::B2TimeStep B2World_obj::s_timestep2;

::box2D::common::math::B2Transform B2World_obj::s_xf;

::box2D::common::math::B2Sweep B2World_obj::s_backupA;

::box2D::common::math::B2Sweep B2World_obj::s_backupB;

::box2D::dynamics::B2TimeStep B2World_obj::s_timestep;

Array< ::Dynamic > B2World_obj::s_queue;

::box2D::common::B2Color B2World_obj::s_jointColor;

bool B2World_obj::m_warmStarting;

bool B2World_obj::m_continuousPhysics;

int B2World_obj::e_newFixture;

int B2World_obj::e_locked;


B2World_obj::B2World_obj()
{
}

void B2World_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2World);
	HX_MARK_MEMBER_NAME(m_inv_dt0,"m_inv_dt0");
	HX_MARK_MEMBER_NAME(m_debugDraw,"m_debugDraw");
	HX_MARK_MEMBER_NAME(m_destructionListener,"m_destructionListener");
	HX_MARK_MEMBER_NAME(m_groundBody,"m_groundBody");
	HX_MARK_MEMBER_NAME(m_allowSleep,"m_allowSleep");
	HX_MARK_MEMBER_NAME(m_gravity,"m_gravity");
	HX_MARK_MEMBER_NAME(m_controllerCount,"m_controllerCount");
	HX_MARK_MEMBER_NAME(m_controllerList,"m_controllerList");
	HX_MARK_MEMBER_NAME(m_jointCount,"m_jointCount");
	HX_MARK_MEMBER_NAME(m_contactCount,"m_contactCount");
	HX_MARK_MEMBER_NAME(m_bodyCount,"m_bodyCount");
	HX_MARK_MEMBER_NAME(m_contactList,"m_contactList");
	HX_MARK_MEMBER_NAME(m_jointList,"m_jointList");
	HX_MARK_MEMBER_NAME(m_bodyList,"m_bodyList");
	HX_MARK_MEMBER_NAME(m_island,"m_island");
	HX_MARK_MEMBER_NAME(m_contactSolver,"m_contactSolver");
	HX_MARK_MEMBER_NAME(m_contactManager,"m_contactManager");
	HX_MARK_MEMBER_NAME(m_flags,"m_flags");
	HX_MARK_MEMBER_NAME(m_aabb,"m_aabb");
	HX_MARK_MEMBER_NAME(s_stack,"s_stack");
	HX_MARK_END_CLASS();
}

void B2World_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_inv_dt0,"m_inv_dt0");
	HX_VISIT_MEMBER_NAME(m_debugDraw,"m_debugDraw");
	HX_VISIT_MEMBER_NAME(m_destructionListener,"m_destructionListener");
	HX_VISIT_MEMBER_NAME(m_groundBody,"m_groundBody");
	HX_VISIT_MEMBER_NAME(m_allowSleep,"m_allowSleep");
	HX_VISIT_MEMBER_NAME(m_gravity,"m_gravity");
	HX_VISIT_MEMBER_NAME(m_controllerCount,"m_controllerCount");
	HX_VISIT_MEMBER_NAME(m_controllerList,"m_controllerList");
	HX_VISIT_MEMBER_NAME(m_jointCount,"m_jointCount");
	HX_VISIT_MEMBER_NAME(m_contactCount,"m_contactCount");
	HX_VISIT_MEMBER_NAME(m_bodyCount,"m_bodyCount");
	HX_VISIT_MEMBER_NAME(m_contactList,"m_contactList");
	HX_VISIT_MEMBER_NAME(m_jointList,"m_jointList");
	HX_VISIT_MEMBER_NAME(m_bodyList,"m_bodyList");
	HX_VISIT_MEMBER_NAME(m_island,"m_island");
	HX_VISIT_MEMBER_NAME(m_contactSolver,"m_contactSolver");
	HX_VISIT_MEMBER_NAME(m_contactManager,"m_contactManager");
	HX_VISIT_MEMBER_NAME(m_flags,"m_flags");
	HX_VISIT_MEMBER_NAME(m_aabb,"m_aabb");
	HX_VISIT_MEMBER_NAME(s_stack,"s_stack");
}

Dynamic B2World_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"s_xf") ) { return s_xf; }
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"solve") ) { return solve_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_aabb") ) { return m_aabb; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"s_queue") ) { return s_queue; }
		if (HX_FIELD_EQ(inName,"m_flags") ) { return m_flags; }
		if (HX_FIELD_EQ(inName,"s_stack") ) { return s_stack; }
		if (HX_FIELD_EQ(inName,"rayCast") ) { return rayCast_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"e_locked") ) { return e_locked; }
		if (HX_FIELD_EQ(inName,"m_island") ) { return m_island; }
		if (HX_FIELD_EQ(inName,"solveTOI") ) { return solveTOI_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocked") ) { return isLocked_dyn(); }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"s_backupA") ) { return s_backupA; }
		if (HX_FIELD_EQ(inName,"s_backupB") ) { return s_backupB; }
		if (HX_FIELD_EQ(inName,"m_inv_dt0") ) { return m_inv_dt0; }
		if (HX_FIELD_EQ(inName,"m_gravity") ) { return m_gravity; }
		if (HX_FIELD_EQ(inName,"drawShape") ) { return drawShape_dyn(); }
		if (HX_FIELD_EQ(inName,"drawJoint") ) { return drawJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"queryAABB") ) { return queryAABB_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"s_timestep") ) { return s_timestep; }
		if (HX_FIELD_EQ(inName,"m_bodyList") ) { return m_bodyList; }
		if (HX_FIELD_EQ(inName,"rayCastAll") ) { return rayCastAll_dyn(); }
		if (HX_FIELD_EQ(inName,"rayCastOne") ) { return rayCastOne_dyn(); }
		if (HX_FIELD_EQ(inName,"queryPoint") ) { return queryPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"queryShape") ) { return queryShape_dyn(); }
		if (HX_FIELD_EQ(inName,"getGravity") ) { return getGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"setGravity") ) { return setGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"createBody") ) { return createBody_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"s_timestep2") ) { return s_timestep2; }
		if (HX_FIELD_EQ(inName,"m_debugDraw") ) { return m_debugDraw; }
		if (HX_FIELD_EQ(inName,"m_bodyCount") ) { return m_bodyCount; }
		if (HX_FIELD_EQ(inName,"m_jointList") ) { return m_jointList; }
		if (HX_FIELD_EQ(inName,"getBodyList") ) { return getBodyList_dyn(); }
		if (HX_FIELD_EQ(inName,"clearForces") ) { return clearForces_dyn(); }
		if (HX_FIELD_EQ(inName,"createJoint") ) { return createJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"destroyBody") ) { return destroyBody_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"s_jointColor") ) { return s_jointColor; }
		if (HX_FIELD_EQ(inName,"e_newFixture") ) { return e_newFixture; }
		if (HX_FIELD_EQ(inName,"m_groundBody") ) { return m_groundBody; }
		if (HX_FIELD_EQ(inName,"m_allowSleep") ) { return m_allowSleep; }
		if (HX_FIELD_EQ(inName,"m_jointCount") ) { return m_jointCount; }
		if (HX_FIELD_EQ(inName,"getJointList") ) { return getJointList_dyn(); }
		if (HX_FIELD_EQ(inName,"getBodyCount") ) { return getBodyCount_dyn(); }
		if (HX_FIELD_EQ(inName,"destroyJoint") ) { return destroyJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"setDebugDraw") ) { return setDebugDraw_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_contactList") ) { return m_contactList; }
		if (HX_FIELD_EQ(inName,"drawDebugData") ) { return drawDebugData_dyn(); }
		if (HX_FIELD_EQ(inName,"getGroundBody") ) { return getGroundBody_dyn(); }
		if (HX_FIELD_EQ(inName,"getJointCount") ) { return getJointCount_dyn(); }
		if (HX_FIELD_EQ(inName,"addController") ) { return addController_dyn(); }
		if (HX_FIELD_EQ(inName,"getProxyCount") ) { return getProxyCount_dyn(); }
		if (HX_FIELD_EQ(inName,"setBroadPhase") ) { return setBroadPhase_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_warmStarting") ) { return m_warmStarting; }
		if (HX_FIELD_EQ(inName,"m_contactCount") ) { return m_contactCount; }
		if (HX_FIELD_EQ(inName,"getContactList") ) { return getContactList_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_contactSolver") ) { return m_contactSolver; }
		if (HX_FIELD_EQ(inName,"getScreenBounds") ) { return getScreenBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"setScreenBounds") ) { return setScreenBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"getContactCount") ) { return getContactCount_dyn(); }
		if (HX_FIELD_EQ(inName,"setWarmStarting") ) { return setWarmStarting_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"m_controllerList") ) { return m_controllerList; }
		if (HX_FIELD_EQ(inName,"m_contactManager") ) { return m_contactManager; }
		if (HX_FIELD_EQ(inName,"createController") ) { return createController_dyn(); }
		if (HX_FIELD_EQ(inName,"removeController") ) { return removeController_dyn(); }
		if (HX_FIELD_EQ(inName,"setContactFilter") ) { return setContactFilter_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"m_controllerCount") ) { return m_controllerCount; }
		if (HX_FIELD_EQ(inName,"destroyController") ) { return destroyController_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setContactListener") ) { return setContactListener_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"m_continuousPhysics") ) { return m_continuousPhysics; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setContinuousPhysics") ) { return setContinuousPhysics_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"m_destructionListener") ) { return m_destructionListener; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setDestructionListener") ) { return setDestructionListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2World_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"s_xf") ) { s_xf=inValue.Cast< ::box2D::common::math::B2Transform >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_aabb") ) { m_aabb=inValue.Cast< ::box2D::collision::B2AABB >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"s_queue") ) { s_queue=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_flags") ) { m_flags=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s_stack") ) { s_stack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"e_locked") ) { e_locked=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_island") ) { m_island=inValue.Cast< ::box2D::dynamics::B2Island >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"s_backupA") ) { s_backupA=inValue.Cast< ::box2D::common::math::B2Sweep >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s_backupB") ) { s_backupB=inValue.Cast< ::box2D::common::math::B2Sweep >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_inv_dt0") ) { m_inv_dt0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_gravity") ) { m_gravity=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"s_timestep") ) { s_timestep=inValue.Cast< ::box2D::dynamics::B2TimeStep >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_bodyList") ) { m_bodyList=inValue.Cast< ::box2D::dynamics::B2Body >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"s_timestep2") ) { s_timestep2=inValue.Cast< ::box2D::dynamics::B2TimeStep >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_debugDraw") ) { m_debugDraw=inValue.Cast< ::box2D::dynamics::B2DebugDraw >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_bodyCount") ) { m_bodyCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_jointList") ) { m_jointList=inValue.Cast< ::box2D::dynamics::joints::B2Joint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"s_jointColor") ) { s_jointColor=inValue.Cast< ::box2D::common::B2Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"e_newFixture") ) { e_newFixture=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_groundBody") ) { m_groundBody=inValue.Cast< ::box2D::dynamics::B2Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_allowSleep") ) { m_allowSleep=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_jointCount") ) { m_jointCount=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_contactList") ) { m_contactList=inValue.Cast< ::box2D::dynamics::contacts::B2Contact >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_warmStarting") ) { m_warmStarting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_contactCount") ) { m_contactCount=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_contactSolver") ) { m_contactSolver=inValue.Cast< ::box2D::dynamics::contacts::B2ContactSolver >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"m_controllerList") ) { m_controllerList=inValue.Cast< ::box2D::dynamics::controllers::B2Controller >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_contactManager") ) { m_contactManager=inValue.Cast< ::box2D::dynamics::B2ContactManager >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"m_controllerCount") ) { m_controllerCount=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"m_continuousPhysics") ) { m_continuousPhysics=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"m_destructionListener") ) { m_destructionListener=inValue.Cast< ::box2D::dynamics::B2DestructionListener >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2World_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_inv_dt0"));
	outFields->push(HX_CSTRING("m_debugDraw"));
	outFields->push(HX_CSTRING("m_destructionListener"));
	outFields->push(HX_CSTRING("m_groundBody"));
	outFields->push(HX_CSTRING("m_allowSleep"));
	outFields->push(HX_CSTRING("m_gravity"));
	outFields->push(HX_CSTRING("m_controllerCount"));
	outFields->push(HX_CSTRING("m_controllerList"));
	outFields->push(HX_CSTRING("m_jointCount"));
	outFields->push(HX_CSTRING("m_contactCount"));
	outFields->push(HX_CSTRING("m_bodyCount"));
	outFields->push(HX_CSTRING("m_contactList"));
	outFields->push(HX_CSTRING("m_jointList"));
	outFields->push(HX_CSTRING("m_bodyList"));
	outFields->push(HX_CSTRING("m_island"));
	outFields->push(HX_CSTRING("m_contactSolver"));
	outFields->push(HX_CSTRING("m_contactManager"));
	outFields->push(HX_CSTRING("m_flags"));
	outFields->push(HX_CSTRING("m_aabb"));
	outFields->push(HX_CSTRING("s_stack"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("s_timestep2"),
	HX_CSTRING("s_xf"),
	HX_CSTRING("s_backupA"),
	HX_CSTRING("s_backupB"),
	HX_CSTRING("s_timestep"),
	HX_CSTRING("s_queue"),
	HX_CSTRING("s_jointColor"),
	HX_CSTRING("m_warmStarting"),
	HX_CSTRING("m_continuousPhysics"),
	HX_CSTRING("e_newFixture"),
	HX_CSTRING("e_locked"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_inv_dt0"),
	HX_CSTRING("m_debugDraw"),
	HX_CSTRING("m_destructionListener"),
	HX_CSTRING("m_groundBody"),
	HX_CSTRING("m_allowSleep"),
	HX_CSTRING("m_gravity"),
	HX_CSTRING("m_controllerCount"),
	HX_CSTRING("m_controllerList"),
	HX_CSTRING("m_jointCount"),
	HX_CSTRING("m_contactCount"),
	HX_CSTRING("m_bodyCount"),
	HX_CSTRING("m_contactList"),
	HX_CSTRING("m_jointList"),
	HX_CSTRING("m_bodyList"),
	HX_CSTRING("m_island"),
	HX_CSTRING("m_contactSolver"),
	HX_CSTRING("m_contactManager"),
	HX_CSTRING("m_flags"),
	HX_CSTRING("getScreenBounds"),
	HX_CSTRING("setScreenBounds"),
	HX_CSTRING("m_aabb"),
	HX_CSTRING("drawShape"),
	HX_CSTRING("drawJoint"),
	HX_CSTRING("solveTOI"),
	HX_CSTRING("solve"),
	HX_CSTRING("s_stack"),
	HX_CSTRING("isLocked"),
	HX_CSTRING("getContactList"),
	HX_CSTRING("getJointList"),
	HX_CSTRING("getBodyList"),
	HX_CSTRING("rayCastAll"),
	HX_CSTRING("rayCastOne"),
	HX_CSTRING("rayCast"),
	HX_CSTRING("queryPoint"),
	HX_CSTRING("queryShape"),
	HX_CSTRING("queryAABB"),
	HX_CSTRING("drawDebugData"),
	HX_CSTRING("clearForces"),
	HX_CSTRING("step"),
	HX_CSTRING("getGroundBody"),
	HX_CSTRING("getGravity"),
	HX_CSTRING("setGravity"),
	HX_CSTRING("getContactCount"),
	HX_CSTRING("getJointCount"),
	HX_CSTRING("getBodyCount"),
	HX_CSTRING("setContinuousPhysics"),
	HX_CSTRING("setWarmStarting"),
	HX_CSTRING("destroyController"),
	HX_CSTRING("createController"),
	HX_CSTRING("removeController"),
	HX_CSTRING("addController"),
	HX_CSTRING("destroyJoint"),
	HX_CSTRING("createJoint"),
	HX_CSTRING("destroyBody"),
	HX_CSTRING("createBody"),
	HX_CSTRING("getProxyCount"),
	HX_CSTRING("validate"),
	HX_CSTRING("setBroadPhase"),
	HX_CSTRING("setDebugDraw"),
	HX_CSTRING("setContactListener"),
	HX_CSTRING("setContactFilter"),
	HX_CSTRING("setDestructionListener"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2World_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2World_obj::s_timestep2,"s_timestep2");
	HX_MARK_MEMBER_NAME(B2World_obj::s_xf,"s_xf");
	HX_MARK_MEMBER_NAME(B2World_obj::s_backupA,"s_backupA");
	HX_MARK_MEMBER_NAME(B2World_obj::s_backupB,"s_backupB");
	HX_MARK_MEMBER_NAME(B2World_obj::s_timestep,"s_timestep");
	HX_MARK_MEMBER_NAME(B2World_obj::s_queue,"s_queue");
	HX_MARK_MEMBER_NAME(B2World_obj::s_jointColor,"s_jointColor");
	HX_MARK_MEMBER_NAME(B2World_obj::m_warmStarting,"m_warmStarting");
	HX_MARK_MEMBER_NAME(B2World_obj::m_continuousPhysics,"m_continuousPhysics");
	HX_MARK_MEMBER_NAME(B2World_obj::e_newFixture,"e_newFixture");
	HX_MARK_MEMBER_NAME(B2World_obj::e_locked,"e_locked");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2World_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2World_obj::s_timestep2,"s_timestep2");
	HX_VISIT_MEMBER_NAME(B2World_obj::s_xf,"s_xf");
	HX_VISIT_MEMBER_NAME(B2World_obj::s_backupA,"s_backupA");
	HX_VISIT_MEMBER_NAME(B2World_obj::s_backupB,"s_backupB");
	HX_VISIT_MEMBER_NAME(B2World_obj::s_timestep,"s_timestep");
	HX_VISIT_MEMBER_NAME(B2World_obj::s_queue,"s_queue");
	HX_VISIT_MEMBER_NAME(B2World_obj::s_jointColor,"s_jointColor");
	HX_VISIT_MEMBER_NAME(B2World_obj::m_warmStarting,"m_warmStarting");
	HX_VISIT_MEMBER_NAME(B2World_obj::m_continuousPhysics,"m_continuousPhysics");
	HX_VISIT_MEMBER_NAME(B2World_obj::e_newFixture,"e_newFixture");
	HX_VISIT_MEMBER_NAME(B2World_obj::e_locked,"e_locked");
};

Class B2World_obj::__mClass;

void B2World_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.B2World"), hx::TCanCast< B2World_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2World_obj::__boot()
{
	s_timestep2= ::box2D::dynamics::B2TimeStep_obj::__new();
	s_xf= ::box2D::common::math::B2Transform_obj::__new(null(),null());
	s_backupA= ::box2D::common::math::B2Sweep_obj::__new();
	s_backupB= ::box2D::common::math::B2Sweep_obj::__new();
	s_timestep= ::box2D::dynamics::B2TimeStep_obj::__new();
	s_queue= Array_obj< ::Dynamic >::__new();
	s_jointColor= ::box2D::common::B2Color_obj::__new(0.5,0.8,0.8);
	m_warmStarting= true;
	m_continuousPhysics= false;
	e_newFixture= (int)1;
	e_locked= (int)2;
}

} // end namespace box2D
} // end namespace dynamics
