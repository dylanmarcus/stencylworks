#ifndef INCLUDED_com_stencyl_models_Background
#define INCLUDED_com_stencyl_models_Background

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,models,Background)
HX_DECLARE_CLASS2(flash,display,Graphics)
namespace com{
namespace stencyl{
namespace models{


class HXCPP_CLASS_ATTRIBUTES  Background_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Background_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void draw( ::flash::display::Graphics g,int cameraX,int cameraY,int screenWidth,int screenHeight)=0;
		Dynamic draw_dyn();
virtual Void update( )=0;
		Dynamic update_dyn();
};

#define DELEGATE_com_stencyl_models_Background \
virtual Void draw( ::flash::display::Graphics g,int cameraX,int cameraY,int screenWidth,int screenHeight) { return mDelegate->draw(g,cameraX,cameraY,screenWidth,screenHeight);}  \
virtual Dynamic draw_dyn() { return mDelegate->draw_dyn();}  \
virtual Void update( ) { return mDelegate->update();}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \


template<typename IMPL>
class Background_delegate_ : public Background_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Background_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_com_stencyl_models_Background
};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_Background */ 
