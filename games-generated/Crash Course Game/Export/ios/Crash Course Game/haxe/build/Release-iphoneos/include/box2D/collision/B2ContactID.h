#ifndef INCLUDED_box2D_collision_B2ContactID
#define INCLUDED_box2D_collision_B2ContactID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,collision,B2ContactID)
HX_DECLARE_CLASS2(box2D,collision,Features)
namespace box2D{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES  B2ContactID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef B2ContactID_obj OBJ_;
		B2ContactID_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< B2ContactID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2ContactID_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2ContactID"); }

		int typeB;
		int typeA;
		int indexB;
		int indexA;
		int _key;
		::box2D::collision::Features features;
		virtual int set_key( int value);
		Dynamic set_key_dyn();

		virtual int get_key( );
		Dynamic get_key_dyn();

		virtual ::box2D::collision::B2ContactID copy( );
		Dynamic copy_dyn();

		virtual Void set( ::box2D::collision::B2ContactID id);
		Dynamic set_dyn();

		static int VERTEX;
		static int FACE;
};

} // end namespace box2D
} // end namespace collision

#endif /* INCLUDED_box2D_collision_B2ContactID */ 
