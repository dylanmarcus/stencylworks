#ifndef INCLUDED_com_stencyl_utils_RGB
#define INCLUDED_com_stencyl_utils_RGB

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,utils,RGB)
namespace com{
namespace stencyl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  RGB_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RGB_obj OBJ_;
		RGB_obj();
		Void __construct(Dynamic __o_r,Dynamic __o_g,Dynamic __o_b);

	public:
		static hx::ObjectPtr< RGB_obj > __new(Dynamic __o_r,Dynamic __o_g,Dynamic __o_b);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RGB_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RGB"); }

		virtual ::com::stencyl::utils::RGB copy( ::com::stencyl::utils::RGB target);
		Dynamic copy_dyn();

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

		virtual Void lerp( ::com::stencyl::utils::RGB input,::com::stencyl::utils::RGB output,Float t);
		Dynamic lerp_dyn();

		virtual Void set( Float r,Float g,Float b);
		Dynamic set_dyn();

		Float b;
		Float g;
		Float r;
		static int BLACK;
		static int WHITE;
		static int RED;
		static int GREEN;
		static int BLUE;
		static int CYAN;
		static int MAGENTA;
		static int YELLOW;
		static int setRGBi( int r,int g,int b);
		static Dynamic setRGBi_dyn();

		static int setRGBf( Float r,Float g,Float b);
		static Dynamic setRGBf_dyn();

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

#endif /* INCLUDED_com_stencyl_utils_RGB */ 
