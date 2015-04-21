#ifndef INCLUDED_com_stencyl_utils_ColorMatrix
#define INCLUDED_com_stencyl_utils_ColorMatrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,utils,ARGB)
HX_DECLARE_CLASS3(com,stencyl,utils,ColorDeficiencyTypes)
HX_DECLARE_CLASS3(com,stencyl,utils,ColorMatrix)
namespace com{
namespace stencyl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ColorMatrix_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ColorMatrix_obj OBJ_;
		ColorMatrix_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ColorMatrix_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ColorMatrix_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ColorMatrix"); }

		virtual Void mul( Float i11,Float i12,Float i13,Float i14,Float i15,Float i21,Float i22,Float i23,Float i24,Float i25,Float i31,Float i32,Float i33,Float i34,Float i35,Float i41,Float i42,Float i43,Float i44,Float i45);
		Dynamic mul_dyn();

		virtual Void set( Float i11,Float i12,Float i13,Float i14,Float i15,Float i21,Float i22,Float i23,Float i24,Float i25,Float i31,Float i32,Float i33,Float i34,Float i35,Float i41,Float i42,Float i43,Float i44,Float i45);
		Dynamic set_dyn();

		virtual Array< Float > toArray( Array< Float > out);
		Dynamic toArray_dyn();

		virtual Void initHue( );
		Dynamic initHue_dyn();

		virtual Array< Float > transformVector( Array< Float > values);
		Dynamic transformVector_dyn();

		virtual ::com::stencyl::utils::ARGB applyMatrix( ::com::stencyl::utils::ARGB argb,::com::stencyl::utils::ARGB out);
		Dynamic applyMatrix_dyn();

		virtual ::com::stencyl::utils::ColorMatrix applyColorDeficiency( ::com::stencyl::utils::ColorDeficiencyTypes type);
		Dynamic applyColorDeficiency_dyn();

		virtual ::com::stencyl::utils::ColorMatrix shearBlue( Float red,Float green);
		Dynamic shearBlue_dyn();

		virtual ::com::stencyl::utils::ColorMatrix shearGreen( Float red,Float blue);
		Dynamic shearGreen_dyn();

		virtual ::com::stencyl::utils::ColorMatrix shearRed( Float green,Float blue);
		Dynamic shearRed_dyn();

		virtual ::com::stencyl::utils::ColorMatrix rotateBlue( Float angle);
		Dynamic rotateBlue_dyn();

		virtual ::com::stencyl::utils::ColorMatrix rotateGreen( Float angle);
		Dynamic rotateGreen_dyn();

		virtual ::com::stencyl::utils::ColorMatrix rotateRed( Float angle);
		Dynamic rotateRed_dyn();

		virtual ::com::stencyl::utils::ColorMatrix setAlpha( Float alpha);
		Dynamic setAlpha_dyn();

		virtual ::com::stencyl::utils::ColorMatrix rgb2Alpha( Float r,Float g,Float b);
		Dynamic rgb2Alpha_dyn();

		virtual ::com::stencyl::utils::ColorMatrix invertAlpha( );
		Dynamic invertAlpha_dyn();

		virtual ::com::stencyl::utils::ColorMatrix averageRGB2Alpha( );
		Dynamic averageRGB2Alpha_dyn();

		virtual ::com::stencyl::utils::ColorMatrix thresholdAlpha( Float threshold,Dynamic factor);
		Dynamic thresholdAlpha_dyn();

		virtual ::com::stencyl::utils::ColorMatrix clearChannels( Dynamic red,Dynamic green,Dynamic blue,Dynamic alpha);
		Dynamic clearChannels_dyn();

		virtual ::com::stencyl::utils::ColorMatrix setMultiplicators( Dynamic red,Dynamic green,Dynamic blue,Dynamic alpha);
		Dynamic setMultiplicators_dyn();

		virtual ::com::stencyl::utils::ColorMatrix desaturate( );
		Dynamic desaturate_dyn();

		virtual ::com::stencyl::utils::ColorMatrix threshold( Float threshold,Dynamic factor);
		Dynamic threshold_dyn();

		virtual ::com::stencyl::utils::ColorMatrix average( Dynamic r,Dynamic g,Dynamic b);
		Dynamic average_dyn();

		virtual ::com::stencyl::utils::ColorMatrix setChannels( Dynamic r,Dynamic g,Dynamic b,Dynamic a);
		Dynamic setChannels_dyn();

		virtual ::com::stencyl::utils::ColorMatrix rotateHue( Float angle);
		Dynamic rotateHue_dyn();

		virtual ::com::stencyl::utils::ColorMatrix colorize( int rgb,Dynamic amount);
		Dynamic colorize_dyn();

		virtual ::com::stencyl::utils::ColorMatrix adjustAlphaContrast( Float amount);
		Dynamic adjustAlphaContrast_dyn();

		virtual ::com::stencyl::utils::ColorMatrix luminance2Alpha( );
		Dynamic luminance2Alpha_dyn();

		virtual ::com::stencyl::utils::ColorMatrix adjustHue( Float angle);
		Dynamic adjustHue_dyn();

		virtual ::com::stencyl::utils::ColorMatrix adjustContrastRGB( Float r,Float g,Float b);
		Dynamic adjustContrastRGB_dyn();

		virtual ::com::stencyl::utils::ColorMatrix adjustContrast( Float x);
		Dynamic adjustContrast_dyn();

		virtual ::com::stencyl::utils::ColorMatrix adjustBrightnessRGB( Float r,Float g,Float b);
		Dynamic adjustBrightnessRGB_dyn();

		virtual ::com::stencyl::utils::ColorMatrix adjustBrightness( Float x);
		Dynamic adjustBrightness_dyn();

		virtual ::com::stencyl::utils::ColorMatrix adjustSaturation( Float s);
		Dynamic adjustSaturation_dyn();

		virtual ::com::stencyl::utils::ColorMatrix invert( );
		Dynamic invert_dyn();

		virtual ::com::stencyl::utils::ColorMatrix identity( );
		Dynamic identity_dyn();

		bool hueInitialized;
		::com::stencyl::utils::ColorMatrix postHue;
		::com::stencyl::utils::ColorMatrix preHue;
		Array< Float > matrix;
		Float m45;
		Float m44;
		Float m43;
		Float m42;
		Float m41;
		Float m35;
		Float m34;
		Float m33;
		Float m32;
		Float m31;
		Float m25;
		Float m24;
		Float m23;
		Float m22;
		Float m21;
		Float m15;
		Float m14;
		Float m13;
		Float m12;
		Float m11;
		static ::com::stencyl::utils::ColorMatrix mulMatrixMatrix( ::com::stencyl::utils::ColorMatrix A,::com::stencyl::utils::ColorMatrix B,::com::stencyl::utils::ColorMatrix C);
		static Dynamic mulMatrixMatrix_dyn();

		static ::com::stencyl::utils::ColorMatrix blendMatrixMatrix( ::com::stencyl::utils::ColorMatrix A,::com::stencyl::utils::ColorMatrix B,::com::stencyl::utils::ColorMatrix C,Float amount);
		static Dynamic blendMatrixMatrix_dyn();

		static Float LUMA_R;
		static Float LUMA_G;
		static Float LUMA_B;
		static Float LUMA_R2;
		static Float LUMA_G2;
		static Float LUMA_B2;
		static Float INV3;
};

} // end namespace com
} // end namespace stencyl
} // end namespace utils

#endif /* INCLUDED_com_stencyl_utils_ColorMatrix */ 
