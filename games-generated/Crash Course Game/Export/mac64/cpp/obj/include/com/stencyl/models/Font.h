#ifndef INCLUDED_com_stencyl_models_Font
#define INCLUDED_com_stencyl_models_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/models/Resource.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,fonts,BitmapFont)
HX_DECLARE_CLASS3(com,stencyl,models,Font)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
namespace com{
namespace stencyl{
namespace models{


class HXCPP_CLASS_ATTRIBUTES  Font_obj : public ::com::stencyl::models::Resource_obj{
	public:
		typedef ::com::stencyl::models::Resource_obj super;
		typedef Font_obj OBJ_;
		Font_obj();
		Void __construct(int ID,int atlasID,::String name,bool isDefault);

	public:
		static hx::ObjectPtr< Font_obj > __new(int ID,int atlasID,::String name,bool isDefault);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Font_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Font"); }

		virtual Void unloadGraphics( );

		virtual Void loadGraphics( );

		virtual int getHeight( );
		Dynamic getHeight_dyn();

		bool isDefault;
		Float fontScale;
		::com::stencyl::graphics::fonts::BitmapFont font;
		static ::com::stencyl::graphics::fonts::BitmapFont defaultFont;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_Font */ 
