#ifndef INCLUDED_com_stencyl_models_background_ScrollingBackground
#define INCLUDED_com_stencyl_models_background_ScrollingBackground

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/models/background/ImageBackground.h>
#include <com/stencyl/models/Background.h>
HX_DECLARE_CLASS3(com,stencyl,models,Background)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,background,ImageBackground)
HX_DECLARE_CLASS4(com,stencyl,models,background,ScrollingBackground)
HX_DECLARE_CLASS2(flash,display,Graphics)
namespace com{
namespace stencyl{
namespace models{
namespace background{


class HXCPP_CLASS_ATTRIBUTES  ScrollingBackground_obj : public ::com::stencyl::models::background::ImageBackground_obj{
	public:
		typedef ::com::stencyl::models::background::ImageBackground_obj super;
		typedef ScrollingBackground_obj OBJ_;
		ScrollingBackground_obj();
		Void __construct(int ID,int atlasID,::String name,Array< int > durations,Float parallaxX,Float parallaxY,bool repeats,Float xVelocity,Float yVelocity);

	public:
		static hx::ObjectPtr< ScrollingBackground_obj > __new(int ID,int atlasID,::String name,Array< int > durations,Float parallaxX,Float parallaxY,bool repeats,Float xVelocity,Float yVelocity);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ScrollingBackground_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::stencyl::models::Background_obj *()
			{ return new ::com::stencyl::models::Background_delegate_< ScrollingBackground_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("ScrollingBackground"); }

		virtual Void draw( ::flash::display::Graphics g,int cameraX,int cameraY,int screenWidth,int screenHeight);

		virtual Void update( );

		Float yVelocity;
		Float xVelocity;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace background

#endif /* INCLUDED_com_stencyl_models_background_ScrollingBackground */ 
