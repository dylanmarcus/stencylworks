#ifndef INCLUDED_com_stencyl_models_background_GradientBackground
#define INCLUDED_com_stencyl_models_background_GradientBackground

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/models/Resource.h>
#include <com/stencyl/models/Background.h>
HX_DECLARE_CLASS3(com,stencyl,models,Background)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,background,GradientBackground)
HX_DECLARE_CLASS2(flash,display,Graphics)
namespace com{
namespace stencyl{
namespace models{
namespace background{


class HXCPP_CLASS_ATTRIBUTES  GradientBackground_obj : public ::com::stencyl::models::Resource_obj{
	public:
		typedef ::com::stencyl::models::Resource_obj super;
		typedef GradientBackground_obj OBJ_;
		GradientBackground_obj();
		Void __construct(int topColor,int bottomColor);

	public:
		static hx::ObjectPtr< GradientBackground_obj > __new(int topColor,int bottomColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GradientBackground_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::stencyl::models::Background_obj *()
			{ return new ::com::stencyl::models::Background_delegate_< GradientBackground_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("GradientBackground"); }

		virtual Void draw( ::flash::display::Graphics g,int cameraX,int cameraY,int screenWidth,int screenHeight);
		Dynamic draw_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		int bottomColor;
		int topColor;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace background

#endif /* INCLUDED_com_stencyl_models_background_GradientBackground */ 
