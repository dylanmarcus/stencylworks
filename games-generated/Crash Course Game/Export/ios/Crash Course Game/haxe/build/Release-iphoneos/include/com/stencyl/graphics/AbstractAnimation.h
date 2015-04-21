#ifndef INCLUDED_com_stencyl_graphics_AbstractAnimation
#define INCLUDED_com_stencyl_graphics_AbstractAnimation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,graphics,AbstractAnimation)
HX_DECLARE_CLASS3(com,stencyl,graphics,G)
namespace com{
namespace stencyl{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  AbstractAnimation_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef AbstractAnimation_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void setFrameDurations( int time)=0;
		Dynamic setFrameDurations_dyn();
virtual Array< int > getFrameDurations( )=0;
		Dynamic getFrameDurations_dyn();
virtual Void draw( ::com::stencyl::graphics::G g,Float x,Float y,Float angle,Float alpha)=0;
		Dynamic draw_dyn();
virtual Void updateBitmap( )=0;
		Dynamic updateBitmap_dyn();
virtual bool needsBitmapUpdate( )=0;
		Dynamic needsBitmapUpdate_dyn();
virtual Void reset( )=0;
		Dynamic reset_dyn();
virtual bool isFinished( )=0;
		Dynamic isFinished_dyn();
virtual Void setFrame( int frame)=0;
		Dynamic setFrame_dyn();
virtual int getNumFrames( )=0;
		Dynamic getNumFrames_dyn();
virtual int getCurrentFrame( )=0;
		Dynamic getCurrentFrame_dyn();
virtual Void update( Float elapsedTime)=0;
		Dynamic update_dyn();
};

#define DELEGATE_com_stencyl_graphics_AbstractAnimation \
virtual Void setFrameDurations( int time) { return mDelegate->setFrameDurations(time);}  \
virtual Dynamic setFrameDurations_dyn() { return mDelegate->setFrameDurations_dyn();}  \
virtual Array< int > getFrameDurations( ) { return mDelegate->getFrameDurations();}  \
virtual Dynamic getFrameDurations_dyn() { return mDelegate->getFrameDurations_dyn();}  \
virtual Void draw( ::com::stencyl::graphics::G g,Float x,Float y,Float angle,Float alpha) { return mDelegate->draw(g,x,y,angle,alpha);}  \
virtual Dynamic draw_dyn() { return mDelegate->draw_dyn();}  \
virtual Void updateBitmap( ) { return mDelegate->updateBitmap();}  \
virtual Dynamic updateBitmap_dyn() { return mDelegate->updateBitmap_dyn();}  \
virtual bool needsBitmapUpdate( ) { return mDelegate->needsBitmapUpdate();}  \
virtual Dynamic needsBitmapUpdate_dyn() { return mDelegate->needsBitmapUpdate_dyn();}  \
virtual Void reset( ) { return mDelegate->reset();}  \
virtual Dynamic reset_dyn() { return mDelegate->reset_dyn();}  \
virtual bool isFinished( ) { return mDelegate->isFinished();}  \
virtual Dynamic isFinished_dyn() { return mDelegate->isFinished_dyn();}  \
virtual Void setFrame( int frame) { return mDelegate->setFrame(frame);}  \
virtual Dynamic setFrame_dyn() { return mDelegate->setFrame_dyn();}  \
virtual int getNumFrames( ) { return mDelegate->getNumFrames();}  \
virtual Dynamic getNumFrames_dyn() { return mDelegate->getNumFrames_dyn();}  \
virtual int getCurrentFrame( ) { return mDelegate->getCurrentFrame();}  \
virtual Dynamic getCurrentFrame_dyn() { return mDelegate->getCurrentFrame_dyn();}  \
virtual Void update( Float elapsedTime) { return mDelegate->update(elapsedTime);}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \


template<typename IMPL>
class AbstractAnimation_delegate_ : public AbstractAnimation_obj
{
	protected:
		IMPL *mDelegate;
	public:
		AbstractAnimation_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_com_stencyl_graphics_AbstractAnimation
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics

#endif /* INCLUDED_com_stencyl_graphics_AbstractAnimation */ 
