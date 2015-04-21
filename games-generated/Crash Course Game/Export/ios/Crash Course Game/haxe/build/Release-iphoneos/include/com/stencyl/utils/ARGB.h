#ifndef INCLUDED_com_stencyl_utils_ARGB
#define INCLUDED_com_stencyl_utils_ARGB

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,utils,ARGB)
namespace com{
namespace stencyl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ARGB_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ARGB_obj OBJ_;
		ARGB_obj();
		Void __construct(Dynamic __o_a,Dynamic __o_r,Dynamic __o_g,Dynamic __o_b);

	public:
		static hx::ObjectPtr< ARGB_obj > __new(Dynamic __o_a,Dynamic __o_r,Dynamic __o_g,Dynamic __o_b);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ARGB_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ARGB"); }

		virtual ::com::stencyl::utils::ARGB copy( ::com::stencyl::utils::ARGB target);
		Dynamic copy_dyn();

		virtual Void set32( int a,int r,int g,int b);
		Dynamic set32_dyn();

		virtual int get32( );
		Dynamic get32_dyn();

		virtual Void set24( int r,int g,int b);
		Dynamic set24_dyn();

		virtual int get24( );
		Dynamic get24_dyn();

		virtual int getB8( );
		Dynamic getB8_dyn();

		virtual int getG8( );
		Dynamic getG8_dyn();

		virtual int getR8( );
		Dynamic getR8_dyn();

		virtual int getA8( );
		Dynamic getA8_dyn();

		virtual Void lerp( ::com::stencyl::utils::ARGB input,Float t,::com::stencyl::utils::ARGB output);
		Dynamic lerp_dyn();

		virtual Void set( Float a,Float r,Float g,Float b);
		Dynamic set_dyn();

		Float b;
		Float g;
		Float r;
		Float a;
		static int BLACK;
		static int WHITE;
		static int RED;
		static int GREEN;
		static int BLUE;
		static int CYAN;
		static int MAGENTA;
		static int YELLOW;
		static int setARGBi( int a,int r,int g,int b);
		static Dynamic setARGBi_dyn();

		static int setARGBf( Float a,Float r,Float g,Float b);
		static Dynamic setARGBf_dyn();

		static ::com::stencyl::utils::ARGB toARGB( int x);
		static Dynamic toARGB_dyn();

		static int getRGB( int x);
		static Dynamic getRGB_dyn();

		static int setRGB( int x,int r,int g,int b);
		static Dynamic setRGB_dyn();

		static int getA( int x);
		static Dynamic getA_dyn();

		static Float getAf( int x);
		static Dynamic getAf_dyn();

		static int getR( int x);
		static Dynamic getR_dyn();

		static Float getRf( int x);
		static Dynamic getRf_dyn();

		static int getG( int x);
		static Dynamic getG_dyn();

		static Float getGf( int x);
		static Dynamic getGf_dyn();

		static int getB( int x);
		static Dynamic getB_dyn();

		static Float getBf( int x);
		static Dynamic getBf_dyn();

		static int setA( int x,int a);
		static Dynamic setA_dyn();

		static int setAf( int x,Float a);
		static Dynamic setAf_dyn();

		static int setR( int x,int r);
		static Dynamic setR_dyn();

		static int setRf( int x,Float r);
		static Dynamic setRf_dyn();

		static int setG( int x,int g);
		static Dynamic setG_dyn();

		static int setGf( int x,Float g);
		static Dynamic setGf_dyn();

		static int setB( int x,int b);
		static Dynamic setB_dyn();

		static int setBf( int x,Float b);
		static Dynamic setBf_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils

#endif /* INCLUDED_com_stencyl_utils_ARGB */ 
