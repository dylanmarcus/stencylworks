#ifndef INCLUDED_com_stencyl_models_background_ColorBackground
#define INCLUDED_com_stencyl_models_background_ColorBackground

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/models/Resource.h>
#include <com/stencyl/models/Background.h>
HX_DECLARE_CLASS3(com,stencyl,models,Background)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,background,ColorBackground)
HX_DECLARE_CLASS2(flash,display,Graphics)
namespace com{
namespace stencyl{
namespace models{
namespace background{


class HXCPP_CLASS_ATTRIBUTES  ColorBackground_obj : public ::com::stencyl::models::Resource_obj{
	public:
		typedef ::com::stencyl::models::Resource_obj super;
		typedef ColorBackground_obj OBJ_;
		ColorBackground_obj();
		Void __construct(int bgColor);

	public:
		static hx::ObjectPtr< ColorBackground_obj > __new(int bgColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ColorBackground_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::stencyl::models::Background_obj *()
			{ return new ::com::stencyl::models::Background_delegate_< ColorBackground_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("ColorBackground"); }

		virtual Void draw( ::flash::display::Graphics g,int cameraX,int cameraY,int screenWidth,int screenHeight);
		Dynamic draw_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		int bgColor;
		static int WHITE;
		static int TRANSPARENT;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace background

#endif /* INCLUDED_com_stencyl_models_background_ColorBackground */ 
