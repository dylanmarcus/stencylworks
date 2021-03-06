#ifndef INCLUDED_box2D_collision_B2SimplexVertex
#define INCLUDED_box2D_collision_B2SimplexVertex

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,collision,B2SimplexVertex)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
namespace box2D{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES  B2SimplexVertex_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef B2SimplexVertex_obj OBJ_;
		B2SimplexVertex_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< B2SimplexVertex_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2SimplexVertex_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2SimplexVertex"); }

		int indexB;
		int indexA;
		Float a;
		::box2D::common::math::B2Vec2 w;
		::box2D::common::math::B2Vec2 wB;
		::box2D::common::math::B2Vec2 wA;
		virtual Void set( ::box2D::collision::B2SimplexVertex other);
		Dynamic set_dyn();

};

} // end namespace box2D
} // end namespace collision

#endif /* INCLUDED_box2D_collision_B2SimplexVertex */ 
