#ifndef INCLUDED_box2D_dynamics_contacts_B2PolyAndEdgeContact
#define INCLUDED_box2D_dynamics_contacts_B2PolyAndEdgeContact

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <box2D/dynamics/contacts/B2Contact.h>
HX_DECLARE_CLASS2(box2D,collision,B2Manifold)
HX_DECLARE_CLASS3(box2D,collision,shapes,B2EdgeShape)
HX_DECLARE_CLASS3(box2D,collision,shapes,B2PolygonShape)
HX_DECLARE_CLASS3(box2D,collision,shapes,B2Shape)
HX_DECLARE_CLASS3(box2D,common,math,B2Mat22)
HX_DECLARE_CLASS3(box2D,common,math,B2Transform)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS2(box2D,dynamics,B2Fixture)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,B2Contact)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,B2PolyAndEdgeContact)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,ClipVertex)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,EPAxis)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,ReferenceFace)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,TempPolygon)
namespace box2D{
namespace dynamics{
namespace contacts{


class HXCPP_CLASS_ATTRIBUTES  B2PolyAndEdgeContact_obj : public ::box2D::dynamics::contacts::B2Contact_obj{
	public:
		typedef ::box2D::dynamics::contacts::B2Contact_obj super;
		typedef B2PolyAndEdgeContact_obj OBJ_;
		B2PolyAndEdgeContact_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< B2PolyAndEdgeContact_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2PolyAndEdgeContact_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2PolyAndEdgeContact"); }

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

		virtual Void computePolygonSeparation( ::box2D::dynamics::contacts::EPAxis axis);
		Dynamic computePolygonSeparation_dyn();

		virtual Void computeEdgeSeparation( ::box2D::dynamics::contacts::EPAxis axis);
		Dynamic computeEdgeSeparation_dyn();

		virtual Void b2CollidePolyAndEdge( ::box2D::collision::B2Manifold manifold,::box2D::collision::shapes::B2EdgeShape edgeA,::box2D::common::math::B2Transform xfA,::box2D::collision::shapes::B2PolygonShape polygonB,::box2D::common::math::B2Transform xfB);
		Dynamic b2CollidePolyAndEdge_dyn();

		virtual Void evaluate( );

		virtual Void reset( ::box2D::dynamics::B2Fixture fixtureA,::box2D::dynamics::B2Fixture fixtureB);

		Float m_radius;
		bool m_front;
		::box2D::common::math::B2Vec2 m_v3;
		::box2D::common::math::B2Vec2 m_v2;
		::box2D::common::math::B2Vec2 m_v1;
		::box2D::common::math::B2Vec2 m_v0;
		static ::box2D::common::math::B2Transform m_xf;
		static ::box2D::common::math::B2Vec2 temp;
		static ::box2D::common::math::B2Vec2 m_centroidB;
		static ::box2D::common::math::B2Vec2 m_lowerLimit;
		static ::box2D::common::math::B2Vec2 m_upperLimit;
		static ::box2D::dynamics::contacts::TempPolygon m_polygonB;
		static ::box2D::dynamics::contacts::EPAxis edgeAxis;
		static ::box2D::dynamics::contacts::EPAxis polygonAxis;
		static ::box2D::common::math::B2Vec2 perp;
		static ::box2D::common::math::B2Vec2 n;
		static ::box2D::dynamics::contacts::ReferenceFace rf;
		static ::box2D::common::math::B2Mat22 mat;
		static ::box2D::common::math::B2Vec2 temp1;
		static ::box2D::common::math::B2Vec2 temp2;
		static Array< ::Dynamic > ie;
		static Array< ::Dynamic > clipPoints1;
		static Array< ::Dynamic > clipPoints2;
		static ::box2D::common::math::B2Vec2 edge0;
		static ::box2D::common::math::B2Vec2 edge1;
		static ::box2D::common::math::B2Vec2 edge2;
		static ::box2D::common::math::B2Vec2 m_normal;
		static ::box2D::common::math::B2Vec2 m_normal0;
		static ::box2D::common::math::B2Vec2 m_normal1;
		static ::box2D::common::math::B2Vec2 m_normal2;
		static ::box2D::dynamics::contacts::B2Contact create( Dynamic allocator);
		static Dynamic create_dyn();

		static Void destroy( ::box2D::dynamics::contacts::B2Contact contact,Dynamic allocator);
		static Dynamic destroy_dyn();

		static int clipSegmentToLine( Array< ::Dynamic > vOut,Array< ::Dynamic > vIn,::box2D::common::math::B2Vec2 normal,Float offset,int vertexIndexA);
		static Dynamic clipSegmentToLine_dyn();

};

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts

#endif /* INCLUDED_box2D_dynamics_contacts_B2PolyAndEdgeContact */ 
