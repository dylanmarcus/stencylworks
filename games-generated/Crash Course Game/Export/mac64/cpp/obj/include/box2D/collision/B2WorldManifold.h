#ifndef INCLUDED_box2D_collision_B2WorldManifold
#define INCLUDED_box2D_collision_B2WorldManifold

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,collision,B2Manifold)
HX_DECLARE_CLASS2(box2D,collision,B2WorldManifold)
HX_DECLARE_CLASS3(box2D,common,math,B2Transform)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
namespace box2D{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES  B2WorldManifold_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef B2WorldManifold_obj OBJ_;
		B2WorldManifold_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< B2WorldManifold_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2WorldManifold_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2WorldManifold"); }

		Array< ::Dynamic > m_points;
		::box2D::common::math::B2Vec2 m_normal;
		virtual ::box2D::common::math::B2Vec2 getPoint( );
		Dynamic getPoint_dyn();

		virtual Void initialize( ::box2D::collision::B2Manifold manifold,::box2D::common::math::B2Transform xfA,Float radiusA,::box2D::common::math::B2Transform xfB,Float radiusB);
		Dynamic initialize_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

};

} // end namespace box2D
} // end namespace collision

#endif /* INCLUDED_box2D_collision_B2WorldManifold */ 
