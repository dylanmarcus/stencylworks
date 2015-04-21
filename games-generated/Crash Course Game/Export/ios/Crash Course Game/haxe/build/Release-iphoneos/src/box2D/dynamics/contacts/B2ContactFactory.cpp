#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2Manifold
#include <box2D/collision/B2Manifold.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2CircleContact
#include <box2D/dynamics/contacts/B2CircleContact.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2Contact
#include <box2D/dynamics/contacts/B2Contact.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactFactory
#include <box2D/dynamics/contacts/B2ContactFactory.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactRegister
#include <box2D/dynamics/contacts/B2ContactRegister.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2EdgeAndCircleContact
#include <box2D/dynamics/contacts/B2EdgeAndCircleContact.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2PolyAndCircleContact
#include <box2D/dynamics/contacts/B2PolyAndCircleContact.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2PolyAndEdgeContact
#include <box2D/dynamics/contacts/B2PolyAndEdgeContact.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2PolygonContact
#include <box2D/dynamics/contacts/B2PolygonContact.h>
#endif
namespace box2D{
namespace dynamics{
namespace contacts{

Void B2ContactFactory_obj::__construct(Dynamic allocator)
{
HX_STACK_PUSH("B2ContactFactory::new","box2D/dynamics/contacts/B2ContactFactory.hx",38);
{
	HX_STACK_LINE(39)
	this->m_allocator = allocator;
	HX_STACK_LINE(40)
	this->initializeRegisters();
}
;
	return null();
}

B2ContactFactory_obj::~B2ContactFactory_obj() { }

Dynamic B2ContactFactory_obj::__CreateEmpty() { return  new B2ContactFactory_obj; }
hx::ObjectPtr< B2ContactFactory_obj > B2ContactFactory_obj::__new(Dynamic allocator)
{  hx::ObjectPtr< B2ContactFactory_obj > result = new B2ContactFactory_obj();
	result->__construct(allocator);
	return result;}

Dynamic B2ContactFactory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2ContactFactory_obj > result = new B2ContactFactory_obj();
	result->__construct(inArgs[0]);
	return result;}

Void B2ContactFactory_obj::destroy( ::box2D::dynamics::contacts::B2Contact contact){
{
		HX_STACK_PUSH("B2ContactFactory::destroy","box2D/dynamics/contacts/B2ContactFactory.hx",133);
		HX_STACK_THIS(this);
		HX_STACK_ARG(contact,"contact");
		HX_STACK_LINE(134)
		if (((contact->m_manifold->m_pointCount > (int)0))){
			HX_STACK_LINE(136)
			contact->m_fixtureA->m_body->setAwake(true);
			HX_STACK_LINE(137)
			contact->m_fixtureB->m_body->setAwake(true);
		}
		HX_STACK_LINE(140)
		int type1 = contact->m_fixtureA->getType();		HX_STACK_VAR(type1,"type1");
		HX_STACK_LINE(141)
		int type2 = contact->m_fixtureB->getType();		HX_STACK_VAR(type2,"type2");
		HX_STACK_LINE(146)
		::box2D::dynamics::contacts::B2ContactRegister reg = this->m_registers->__get(type1).StaticCast< Array< ::Dynamic > >()->__get(type2).StaticCast< ::box2D::dynamics::contacts::B2ContactRegister >();		HX_STACK_VAR(reg,"reg");
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(150)
			(reg->poolCount)++;
			HX_STACK_LINE(151)
			contact->m_next = reg->pool;
			HX_STACK_LINE(152)
			reg->pool = contact;
		}
		HX_STACK_LINE(155)
		Dynamic destroyFcn = reg->destroyFcn;		HX_STACK_VAR(destroyFcn,"destroyFcn");
		HX_STACK_LINE(156)
		destroyFcn(contact,this->m_allocator);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2ContactFactory_obj,destroy,(void))

::box2D::dynamics::contacts::B2Contact B2ContactFactory_obj::create( ::box2D::dynamics::B2Fixture fixtureA,::box2D::dynamics::B2Fixture fixtureB){
	HX_STACK_PUSH("B2ContactFactory::create","box2D/dynamics/contacts/B2ContactFactory.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_ARG(fixtureA,"fixtureA");
	HX_STACK_ARG(fixtureB,"fixtureB");
	HX_STACK_LINE(83)
	int type1 = fixtureA->getType();		HX_STACK_VAR(type1,"type1");
	HX_STACK_LINE(84)
	int type2 = fixtureB->getType();		HX_STACK_VAR(type2,"type2");
	HX_STACK_LINE(89)
	::box2D::dynamics::contacts::B2ContactRegister reg = this->m_registers->__get(type1).StaticCast< Array< ::Dynamic > >()->__get(type2).StaticCast< ::box2D::dynamics::contacts::B2ContactRegister >();		HX_STACK_VAR(reg,"reg");
	HX_STACK_LINE(91)
	::box2D::dynamics::contacts::B2Contact c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(93)
	if (((reg->pool != null()))){
		HX_STACK_LINE(96)
		c = reg->pool;
		HX_STACK_LINE(97)
		reg->pool = c->m_next;
		HX_STACK_LINE(98)
		(reg->poolCount)--;
		HX_STACK_LINE(100)
		if (((reg->primary == type1))){
			HX_STACK_LINE(102)
			c->reset(fixtureA,fixtureB);
			HX_STACK_LINE(103)
			return c;
		}
		else{
			HX_STACK_LINE(107)
			c->reset(fixtureB,fixtureA);
			HX_STACK_LINE(108)
			return c;
		}
	}
	HX_STACK_LINE(112)
	Dynamic createFcn = reg->createFcn;		HX_STACK_VAR(createFcn,"createFcn");
	HX_STACK_LINE(113)
	if (((createFcn != null()))){
		HX_STACK_LINE(114)
		if (((reg->primary == type1))){
			HX_STACK_LINE(117)
			c = createFcn(this->m_allocator);
			HX_STACK_LINE(118)
			c->reset(fixtureA,fixtureB);
			HX_STACK_LINE(119)
			return c;
		}
		else{
			HX_STACK_LINE(123)
			c = createFcn(this->m_allocator);
			HX_STACK_LINE(124)
			c->reset(fixtureB,fixtureA);
			HX_STACK_LINE(125)
			return c;
		}
	}
	else{
		HX_STACK_LINE(129)
		return null();
	}
	HX_STACK_LINE(113)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2ContactFactory_obj,create,return )

Void B2ContactFactory_obj::initializeRegisters( ){
{
		HX_STACK_PUSH("B2ContactFactory::initializeRegisters","box2D/dynamics/contacts/B2ContactFactory.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_LINE(53)
		this->m_registers = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::box2D::collision::shapes::B2Shape_obj::e_shapeTypeCount;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			while(((_g1 < _g))){
				HX_STACK_LINE(54)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(55)
				this->m_registers[i] = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(56)
				{
					HX_STACK_LINE(56)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = ::box2D::collision::shapes::B2Shape_obj::e_shapeTypeCount;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(56)
					while(((_g3 < _g2))){
						HX_STACK_LINE(56)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(57)
						this->m_registers->__get(i).StaticCast< Array< ::Dynamic > >()[j] = null();
					}
				}
			}
		}
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::box2D::collision::shapes::B2Shape_obj::e_shapeTypeCount;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(61)
			while(((_g1 < _g))){
				HX_STACK_LINE(61)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(62)
				{
					HX_STACK_LINE(62)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = ::box2D::collision::shapes::B2Shape_obj::e_shapeTypeCount;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(62)
					while(((_g3 < _g2))){
						HX_STACK_LINE(62)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(63)
						if (((this->m_registers->__get(i).StaticCast< Array< ::Dynamic > >()->__get(j).StaticCast< ::box2D::dynamics::contacts::B2ContactRegister >() == null()))){
							HX_STACK_LINE(65)
							this->m_registers->__get(i).StaticCast< Array< ::Dynamic > >()[j] = ::box2D::dynamics::contacts::B2ContactRegister_obj::__new();
							HX_STACK_LINE(67)
							if (((i != j))){
								HX_STACK_LINE(68)
								this->m_registers->__get(j).StaticCast< Array< ::Dynamic > >()[i] = this->m_registers->__get(i).StaticCast< Array< ::Dynamic > >()->__get(j).StaticCast< ::box2D::dynamics::contacts::B2ContactRegister >();
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(75)
		this->addType(::box2D::dynamics::contacts::B2CircleContact_obj::create_dyn(),::box2D::dynamics::contacts::B2CircleContact_obj::destroy_dyn(),::box2D::collision::shapes::B2Shape_obj::e_circleShape,::box2D::collision::shapes::B2Shape_obj::e_circleShape);
		HX_STACK_LINE(76)
		this->addType(::box2D::dynamics::contacts::B2PolyAndCircleContact_obj::create_dyn(),::box2D::dynamics::contacts::B2PolyAndCircleContact_obj::destroy_dyn(),::box2D::collision::shapes::B2Shape_obj::e_polygonShape,::box2D::collision::shapes::B2Shape_obj::e_circleShape);
		HX_STACK_LINE(77)
		this->addType(::box2D::dynamics::contacts::B2PolygonContact_obj::create_dyn(),::box2D::dynamics::contacts::B2PolygonContact_obj::destroy_dyn(),::box2D::collision::shapes::B2Shape_obj::e_polygonShape,::box2D::collision::shapes::B2Shape_obj::e_polygonShape);
		HX_STACK_LINE(79)
		this->addType(::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::create_dyn(),::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::destroy_dyn(),::box2D::collision::shapes::B2Shape_obj::e_edgeShape,::box2D::collision::shapes::B2Shape_obj::e_circleShape);
		HX_STACK_LINE(80)
		this->addType(::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::create_dyn(),::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::destroy_dyn(),::box2D::collision::shapes::B2Shape_obj::e_polygonShape,::box2D::collision::shapes::B2Shape_obj::e_edgeShape);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(B2ContactFactory_obj,initializeRegisters,(void))

Void B2ContactFactory_obj::addType( Dynamic createFcn,Dynamic destroyFcn,int type1,int type2){
{
		HX_STACK_PUSH("B2ContactFactory::addType","box2D/dynamics/contacts/B2ContactFactory.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_ARG(createFcn,"createFcn");
		HX_STACK_ARG(destroyFcn,"destroyFcn");
		HX_STACK_ARG(type1,"type1");
		HX_STACK_ARG(type2,"type2");
		HX_STACK_LINE(48)
		this->m_registers->__get(type1).StaticCast< Array< ::Dynamic > >()->__get(type2).StaticCast< ::box2D::dynamics::contacts::B2ContactRegister >()->createFcn = createFcn;
		HX_STACK_LINE(49)
		this->m_registers->__get(type1).StaticCast< Array< ::Dynamic > >()->__get(type2).StaticCast< ::box2D::dynamics::contacts::B2ContactRegister >()->destroyFcn = destroyFcn;
		HX_STACK_LINE(50)
		this->m_registers->__get(type1).StaticCast< Array< ::Dynamic > >()->__get(type2).StaticCast< ::box2D::dynamics::contacts::B2ContactRegister >()->primary = type1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(B2ContactFactory_obj,addType,(void))


B2ContactFactory_obj::B2ContactFactory_obj()
{
}

void B2ContactFactory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2ContactFactory);
	HX_MARK_MEMBER_NAME(m_allocator,"m_allocator");
	HX_MARK_MEMBER_NAME(m_registers,"m_registers");
	HX_MARK_END_CLASS();
}

void B2ContactFactory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_allocator,"m_allocator");
	HX_VISIT_MEMBER_NAME(m_registers,"m_registers");
}

Dynamic B2ContactFactory_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"addType") ) { return addType_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_allocator") ) { return m_allocator; }
		if (HX_FIELD_EQ(inName,"m_registers") ) { return m_registers; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"initializeRegisters") ) { return initializeRegisters_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2ContactFactory_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"m_allocator") ) { m_allocator=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_registers") ) { m_registers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2ContactFactory_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_allocator"));
	outFields->push(HX_CSTRING("m_registers"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_allocator"),
	HX_CSTRING("m_registers"),
	HX_CSTRING("destroy"),
	HX_CSTRING("create"),
	HX_CSTRING("initializeRegisters"),
	HX_CSTRING("addType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2ContactFactory_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2ContactFactory_obj::__mClass,"__mClass");
};

Class B2ContactFactory_obj::__mClass;

void B2ContactFactory_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.dynamics.contacts.B2ContactFactory"), hx::TCanCast< B2ContactFactory_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2ContactFactory_obj::__boot()
{
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts
