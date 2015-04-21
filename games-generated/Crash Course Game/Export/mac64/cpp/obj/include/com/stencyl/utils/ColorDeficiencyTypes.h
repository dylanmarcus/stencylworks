#ifndef INCLUDED_com_stencyl_utils_ColorDeficiencyTypes
#define INCLUDED_com_stencyl_utils_ColorDeficiencyTypes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,utils,ColorDeficiencyTypes)
namespace com{
namespace stencyl{
namespace utils{


class ColorDeficiencyTypes_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ColorDeficiencyTypes_obj OBJ_;

	public:
		ColorDeficiencyTypes_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("com.stencyl.utils.ColorDeficiencyTypes"); }
		::String __ToString() const { return HX_CSTRING("ColorDeficiencyTypes.") + tag; }

		static ::com::stencyl::utils::ColorDeficiencyTypes Achromatomaly;
		static inline ::com::stencyl::utils::ColorDeficiencyTypes Achromatomaly_dyn() { return Achromatomaly; }
		static ::com::stencyl::utils::ColorDeficiencyTypes Achromatopsia;
		static inline ::com::stencyl::utils::ColorDeficiencyTypes Achromatopsia_dyn() { return Achromatopsia; }
		static ::com::stencyl::utils::ColorDeficiencyTypes Deuteranomaly;
		static inline ::com::stencyl::utils::ColorDeficiencyTypes Deuteranomaly_dyn() { return Deuteranomaly; }
		static ::com::stencyl::utils::ColorDeficiencyTypes Deuteranopia;
		static inline ::com::stencyl::utils::ColorDeficiencyTypes Deuteranopia_dyn() { return Deuteranopia; }
		static ::com::stencyl::utils::ColorDeficiencyTypes Protanomaly;
		static inline ::com::stencyl::utils::ColorDeficiencyTypes Protanomaly_dyn() { return Protanomaly; }
		static ::com::stencyl::utils::ColorDeficiencyTypes Protanopia;
		static inline ::com::stencyl::utils::ColorDeficiencyTypes Protanopia_dyn() { return Protanopia; }
		static ::com::stencyl::utils::ColorDeficiencyTypes Tritanomaly;
		static inline ::com::stencyl::utils::ColorDeficiencyTypes Tritanomaly_dyn() { return Tritanomaly; }
		static ::com::stencyl::utils::ColorDeficiencyTypes Tritanopia;
		static inline ::com::stencyl::utils::ColorDeficiencyTypes Tritanopia_dyn() { return Tritanopia; }
};

} // end namespace com
} // end namespace stencyl
} // end namespace utils

#endif /* INCLUDED_com_stencyl_utils_ColorDeficiencyTypes */ 
