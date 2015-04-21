#ifndef INCLUDED_box2D_dynamics_contacts_B2EdgeAndCircleContact
#define INCLUDED_box2D_dynamics_contacts_B2EdgeAndCircleContact

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <box2D/dynamics/contacts/B2Contact.h>
HX_DECLARE_CLASS2(box2D,collision,B2Manifold)
HX_DECLARE_CLASS3(box2D,collision,shapes,B2CircleShape)
HX_DECLARE_CLASS3(box2D,collision,shapes,B2EdgeShape)
HX_DECLARE_CLASS3(box2D,collision,shapes,B2Shape)
HX_DECLARE_CLASS3(box2D,common,math,B2Mat22)
HX_DECLARE_CLASS3(box2D,common,math,B2Transform)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS2(box2D,dynamics,B2Fixture)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,B2Contact)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,B2EdgeAndCircleContact)
namespace box2D{
namespace dynamics{
namespace contacts{


class HXCPP_CLASS_ATTRIBUTES  B2EdgeAndCircleContact_obj : public ::box2D::dynamics::contacts::B2Contact_obj{
	public:
		typedef ::box2D::dynamics::contacts::B2Contact_obj super;
		typedef B2EdgeAndCircleContact_obj OBJ_;
		B2EdgeAndCircleContact_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< B2EdgeAndCircleContact_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2EdgeAndCircleContact_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2EdgeAndCircleContact"); }

		virtual Void multiplyTransformVector( ::box2D::common::math::B2Transform T,::box2D::common::math::B2Vec2 v,::box2D::common::math::B2Vec2 out);
		Dynamic multiplyTransformVector_dyn();

		virtual Void multiplyRotationVectorInverse( ::box2D::common::math::B2Mat22 q,::box2D::common::math::B2Vec2 v,::box2D::common::math::B2Vec2 out);
		Dynamic multiplyRotationVectorInverse_dyn();

		virtual Void multiplyRotationVector( ::box2D::common::math::B2Mat22 q,::box2D::common::math::B2Vec2 v,::box2D::common::math::B2Vec2 out);
		Dynamic multiplyRotationVector_dyn();

		virtual Void multiplyRotationsInverse( ::box2D::common::math::B2Mat22 q,::box2D::common::math::B2Mat22 r,::box2D::common::math::B2Mat22 out);
		Dynamic multiplyRotationsInverse_dyn();

		virtual Void multiplyTransformsInverse( ::box2D::common::math::B2Transform A,::box2D::common::math::B2Transform B,::box2D::common::math::B2Transform out);
		Dynamic multiplyTransformsInverse_dyn();

		virtual Void b2CollideEdgeAndCircle( ::box2D::collision::B2Manifold manifold,::box2D::collision::shapes::B2EdgeShape edge,::box2D::common::math::B2Transform xf1,::box2D::collision::shapes::B2CircleShape circle,::box2D::common::math::B2Transform xf2);
		Dynamic b2CollideEdgeAndCircle_dyn();

		virtual Void evaluate( );

		virtual Void reset( ::box2D::dynamics::B2Fixture fixtureA,::box2D::dynamics::B2Fixture fixtureB);

		::box2D::common::math::B2Vec2 m_v3;
		::box2D::common::math::B2Vec2 m_v2;
		::box2D::common::math::B2Vec2 m_v1;
		::box2D::common::math::B2Vec2 m_v0;
		static ::box2D::common::math::B2Transform m_xf;
		static ::box2D::common::math::B2Vec2 q;
		static ::box2D::common::math::B2Vec2 p;
		static ::box2D::common::math::B2Vec2 e;
		static ::box2D::common::math::B2Vec2 temp1;
		static ::box2D::common::math::B2Vec2 temp2;
		static ::box2D::common::math::B2Vec2 m_centroidB;
		static ::box2D::common::math::B2Mat22 mat;
		static ::box2D::dynamics::contacts::B2Contact create( Dynamic allocator);
		static Dynamic create_dyn();

		static Void destroy( ::box2D::dynamics::contacts::B2Contact contact,Dynamic allocator);
		static Dynamic destroy_dyn();

};

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts

#endif /* INCLUDED_box2D_dynamics_contacts_B2EdgeAndCircleContact */ 
