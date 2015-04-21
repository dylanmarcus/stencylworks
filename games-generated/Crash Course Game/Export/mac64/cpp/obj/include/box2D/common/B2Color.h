#ifndef INCLUDED_box2D_common_B2Color
#define INCLUDED_box2D_common_B2Color

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,common,B2Color)
namespace box2D{
namespace common{


class HXCPP_CLASS_ATTRIBUTES  B2Color_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef B2Color_obj OBJ_;
		B2Color_obj();
		Void __construct(Float rr,Float gg,Float bb);

	public:
		static hx::ObjectPtr< B2Color_obj > __new(Float rr,Float gg,Float bb);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2Color_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("B2Color"); }

		int _b;
		int _g;
		int _r;
		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual Float set_b( Float bb);
		Dynamic set_b_dyn();

		virtual Float set_g( Float gg);
		Dynamic set_g_dyn();

		virtual Float set_r( Float rr);
		Dynamic set_r_dyn();

		int color;
		Float b;
		Float g;
		Float r;
		virtual Void set( Float rr,Float gg,Float bb);
		Dynamic set_dyn();

};

} // end namespace box2D
} // end namespace common

#endif /* INCLUDED_box2D_common_B2Color */ 
