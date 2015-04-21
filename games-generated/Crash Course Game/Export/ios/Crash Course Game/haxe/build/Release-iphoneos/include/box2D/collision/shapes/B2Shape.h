#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#define INCLUDED_box2D_collision_shapes_B2Shape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,collision,B2AABB)
HX_DECLARE_CLASS2(box2D,collision,B2DistanceInput)
HX_DECLARE_CLASS2(box2D,collision,B2DistanceOutput)
HX_DECLARE_CLASS2(box2D,collision,B2DistanceProxy)
HX_DECLARE_CLASS2(box2D,collision,B2RayCastInput)
HX_DECLARE_CLASS2(box2D,collision,B2RayCastOutput)
HX_DECLARE_CLASS2(box2D,collision,B2SimplexCache)
HX_DECLARE_CLASS3(box2D,collision,shapes,B2MassData)
HX_DECLARE_CLASS3(box2D,collision,shapes,B2Shape)
HX_DECLARE_CLASS3(box2D,common,math,B2Transform)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
namespace box2D{
namespace collision{
namespace shapes{


class HXCPP_CLASS_ATTRIBUTES  B2Shape_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef B2Shape_obj OBJ_;
		B2Shape_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< B2Shape_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2Shape_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2Shape"); }

		Float m_radius;
		int m_type;
		virtual Float computeSubmergedArea( ::box2D::common::math::B2Vec2 normal,Float offset,::box2D::common::math::B2Transform xf,::box2D::common::math::B2Vec2 c);
		Dynamic computeSubmergedArea_dyn();

		virtual Void computeMass( ::box2D::collision::shapes::B2MassData massData,Float density);
		Dynamic computeMass_dyn();

		virtual Void computeAABB( ::box2D::collision::B2AABB aabb,::box2D::common::math::B2Transform xf);
		Dynamic computeAABB_dyn();

		virtual bool rayCast( ::box2D::collision::B2RayCastOutput output,::box2D::collision::B2RayCastInput input,::box2D::common::math::B2Transform transform);
		Dynamic rayCast_dyn();

		virtual bool testPoint( ::box2D::common::math::B2Transform xf,::box2D::common::math::B2Vec2 p);
		Dynamic testPoint_dyn();

		virtual int getType( );
		Dynamic getType_dyn();

		virtual Void set( ::box2D::collision::shapes::B2Shape other);
		Dynamic set_dyn();

		virtual ::box2D::collision::shapes::B2Shape copy( );
		Dynamic copy_dyn();

		static bool testOverlap( ::box2D::collision::shapes::B2Shape shape1,::box2D::common::math::B2Transform transform1,::box2D::collision::shapes::B2Shape shape2,::box2D::common::math::B2Transform transform2);
		static Dynamic testOverlap_dyn();

		static ::box2D::collision::B2DistanceInput distanceInput;
		static ::box2D::collision::B2DistanceProxy proxyA;
		static ::box2D::collision::B2DistanceProxy proxyB;
		static ::box2D::collision::B2SimplexCache simplexCache;
		static ::box2D::collision::B2DistanceOutput distanceOutput;
		static int e_unknownShape;
		static int e_circleShape;
		static int e_polygonShape;
		static int e_edgeShape;
		static int e_shapeTypeCount;
		static int e_hitCollide;
		static int e_missCollide;
		static int e_startsInsideCollide;
};

} // end namespace box2D
} // end namespace collision
} // end namespace shapes

#endif /* INCLUDED_box2D_collision_shapes_B2Shape */ 
