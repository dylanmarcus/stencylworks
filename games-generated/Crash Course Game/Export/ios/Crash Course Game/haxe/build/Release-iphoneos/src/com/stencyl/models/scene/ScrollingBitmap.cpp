#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_ScrollingBitmap
#include <com/stencyl/models/scene/ScrollingBitmap.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace scene{

Void ScrollingBitmap_obj::__construct(Dynamic img,Float dx,Float dy,hx::Null< Float >  __o_px,hx::Null< Float >  __o_py,hx::Null< int >  __o_ID)
{
HX_STACK_PUSH("ScrollingBitmap::new","com/stencyl/models/scene/ScrollingBitmap.hx",40);
Float px = __o_px.Default(0);
Float py = __o_py.Default(0);
int ID = __o_ID.Default(0);
{
	HX_STACK_LINE(41)
	super::__construct();
	HX_STACK_LINE(43)
	this->curStep = (int)0;
	HX_STACK_LINE(45)
	this->running = true;
	HX_STACK_LINE(47)
	this->image1 = ::flash::display::Bitmap_obj::__new(img,null(),null());
	HX_STACK_LINE(48)
	this->addChild(this->image1);
	HX_STACK_LINE(50)
	this->cacheWidth = this->image1->get_width();
	HX_STACK_LINE(51)
	this->cacheHeight = this->image1->get_height();
	HX_STACK_LINE(53)
	this->image2 = ::flash::display::Bitmap_obj::__new(img,null(),null());
	HX_STACK_LINE(54)
	this->image2->set_x((this->image1->get_x() - this->cacheWidth));
	HX_STACK_LINE(55)
	this->addChild(this->image2);
	HX_STACK_LINE(57)
	this->image3 = ::flash::display::Bitmap_obj::__new(img,null(),null());
	HX_STACK_LINE(58)
	this->image3->set_x((this->image1->get_x() + this->cacheWidth));
	HX_STACK_LINE(59)
	this->addChild(this->image3);
	HX_STACK_LINE(63)
	this->image4 = ::flash::display::Bitmap_obj::__new(img,null(),null());
	HX_STACK_LINE(64)
	this->image4->set_x((this->image1->get_x() - this->cacheWidth));
	HX_STACK_LINE(65)
	this->image4->set_y((this->image1->get_y() - this->cacheHeight));
	HX_STACK_LINE(66)
	this->addChild(this->image4);
	HX_STACK_LINE(68)
	this->image5 = ::flash::display::Bitmap_obj::__new(img,null(),null());
	HX_STACK_LINE(69)
	this->image5->set_y((this->image1->get_y() - this->cacheHeight));
	HX_STACK_LINE(70)
	this->addChild(this->image5);
	HX_STACK_LINE(72)
	this->image6 = ::flash::display::Bitmap_obj::__new(img,null(),null());
	HX_STACK_LINE(73)
	this->image6->set_x((this->image1->get_x() + this->cacheWidth));
	HX_STACK_LINE(74)
	this->image6->set_y((this->image1->get_y() - this->cacheHeight));
	HX_STACK_LINE(75)
	this->addChild(this->image6);
	HX_STACK_LINE(79)
	this->image7 = ::flash::display::Bitmap_obj::__new(img,null(),null());
	HX_STACK_LINE(80)
	this->image7->set_x((this->image1->get_x() - this->cacheWidth));
	HX_STACK_LINE(81)
	this->image7->set_y((this->image1->get_y() + this->cacheHeight));
	HX_STACK_LINE(82)
	this->addChild(this->image7);
	HX_STACK_LINE(84)
	this->image8 = ::flash::display::Bitmap_obj::__new(img,null(),null());
	HX_STACK_LINE(85)
	this->image8->set_y((this->image1->get_y() + this->cacheHeight));
	HX_STACK_LINE(86)
	this->addChild(this->image8);
	HX_STACK_LINE(88)
	this->image9 = ::flash::display::Bitmap_obj::__new(img,null(),null());
	HX_STACK_LINE(89)
	this->image9->set_x((this->image1->get_x() + this->cacheWidth));
	HX_STACK_LINE(90)
	this->image9->set_y((this->image1->get_y() + this->cacheHeight));
	HX_STACK_LINE(91)
	this->addChild(this->image9);
	HX_STACK_LINE(93)
	this->xP = (int)0;
	HX_STACK_LINE(94)
	this->yP = (int)0;
	HX_STACK_LINE(96)
	this->xPos = (int)0;
	HX_STACK_LINE(97)
	this->yPos = (int)0;
	HX_STACK_LINE(99)
	this->xVelocity = dx;
	HX_STACK_LINE(100)
	this->yVelocity = dy;
	HX_STACK_LINE(102)
	this->parallax = false;
	HX_STACK_LINE(103)
	this->parallaxX = px;
	HX_STACK_LINE(104)
	this->parallaxY = py;
	HX_STACK_LINE(106)
	if (((bool((dx == (int)0)) && bool((dy == (int)0))))){
		HX_STACK_LINE(107)
		this->parallax = true;
	}
	HX_STACK_LINE(111)
	this->backgroundID = ID;
}
;
	return null();
}

ScrollingBitmap_obj::~ScrollingBitmap_obj() { }

Dynamic ScrollingBitmap_obj::__CreateEmpty() { return  new ScrollingBitmap_obj; }
hx::ObjectPtr< ScrollingBitmap_obj > ScrollingBitmap_obj::__new(Dynamic img,Float dx,Float dy,hx::Null< Float >  __o_px,hx::Null< Float >  __o_py,hx::Null< int >  __o_ID)
{  hx::ObjectPtr< ScrollingBitmap_obj > result = new ScrollingBitmap_obj();
	result->__construct(img,dx,dy,__o_px,__o_py,__o_ID);
	return result;}

Dynamic ScrollingBitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScrollingBitmap_obj > result = new ScrollingBitmap_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void ScrollingBitmap_obj::stop( ){
{
		HX_STACK_PUSH("ScrollingBitmap::stop","com/stencyl/models/scene/ScrollingBitmap.hx",206);
		HX_STACK_THIS(this);
		HX_STACK_LINE(206)
		this->running = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollingBitmap_obj,stop,(void))

Void ScrollingBitmap_obj::start( ){
{
		HX_STACK_PUSH("ScrollingBitmap::start","com/stencyl/models/scene/ScrollingBitmap.hx",201);
		HX_STACK_THIS(this);
		HX_STACK_LINE(201)
		this->running = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollingBitmap_obj,start,(void))

Void ScrollingBitmap_obj::resetPositions( ){
{
		HX_STACK_PUSH("ScrollingBitmap::resetPositions","com/stencyl/models/scene/ScrollingBitmap.hx",171);
		HX_STACK_THIS(this);
		HX_STACK_LINE(172)
		this->image1->set_x(this->xPos);
		HX_STACK_LINE(173)
		this->image1->set_y(this->yPos);
		HX_STACK_LINE(175)
		this->image2->set_x((this->xPos - this->cacheWidth));
		HX_STACK_LINE(176)
		this->image2->set_y(this->yPos);
		HX_STACK_LINE(178)
		this->image3->set_x((this->xPos + this->cacheWidth));
		HX_STACK_LINE(179)
		this->image3->set_y(this->yPos);
		HX_STACK_LINE(181)
		this->image4->set_x((this->xPos - this->cacheWidth));
		HX_STACK_LINE(182)
		this->image4->set_y((this->yPos - this->cacheHeight));
		HX_STACK_LINE(184)
		this->image5->set_x(this->xPos);
		HX_STACK_LINE(185)
		this->image5->set_y((this->yPos - this->cacheHeight));
		HX_STACK_LINE(187)
		this->image6->set_x((this->xPos + this->cacheWidth));
		HX_STACK_LINE(188)
		this->image6->set_y((this->yPos - this->cacheHeight));
		HX_STACK_LINE(190)
		this->image7->set_x((this->xPos - this->cacheWidth));
		HX_STACK_LINE(191)
		this->image7->set_y((this->yPos + this->cacheHeight));
		HX_STACK_LINE(193)
		this->image8->set_x(this->xPos);
		HX_STACK_LINE(194)
		this->image8->set_y((this->yPos + this->cacheHeight));
		HX_STACK_LINE(196)
		this->image9->set_x((this->xPos + this->cacheWidth));
		HX_STACK_LINE(197)
		this->image9->set_y((this->yPos + this->cacheHeight));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollingBitmap_obj,resetPositions,(void))

Void ScrollingBitmap_obj::updateParallax( ){
{
		HX_STACK_PUSH("ScrollingBitmap::updateParallax","com/stencyl/models/scene/ScrollingBitmap.hx",152);
		HX_STACK_THIS(this);
		HX_STACK_LINE(153)
		this->xPos = (::com::stencyl::Engine_obj::cameraX * this->parallaxX);
		HX_STACK_LINE(154)
		this->yPos = (::com::stencyl::Engine_obj::cameraY * this->parallaxY);
		HX_STACK_LINE(156)
		if (((this->xPos < -(this->cacheWidth)))){
			HX_STACK_LINE(157)
			this->xPos = hx::Mod(this->xPos,this->cacheWidth);
		}
		HX_STACK_LINE(161)
		if (((this->yPos < -(this->cacheHeight)))){
			HX_STACK_LINE(162)
			this->yPos = hx::Mod(this->yPos,this->cacheHeight);
		}
		HX_STACK_LINE(167)
		this->resetPositions();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollingBitmap_obj,updateParallax,(void))

Void ScrollingBitmap_obj::updateAuto( Float elapsedTime){
{
		HX_STACK_PUSH("ScrollingBitmap::updateAuto","com/stencyl/models/scene/ScrollingBitmap.hx",115);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_LINE(115)
		if ((this->running)){
			HX_STACK_LINE(118)
			Float width = this->cacheWidth;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(119)
			Float height = this->cacheHeight;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(121)
			hx::AddEq(this->xP,((Float(this->xVelocity) / Float(10.0)) * ::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(122)
			hx::AddEq(this->yP,((Float(this->yVelocity) / Float(10.0)) * ::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(124)
			if (((bool((this->xP < -(width))) || bool((this->xP > width))))){
				HX_STACK_LINE(125)
				this->xP = (int)0;
			}
			HX_STACK_LINE(129)
			if (((bool((this->yP < -(height))) || bool((this->yP > height))))){
				HX_STACK_LINE(130)
				this->yP = (int)0;
			}
			HX_STACK_LINE(134)
			this->xPos = ::Math_obj::floor(this->xP);
			HX_STACK_LINE(135)
			this->yPos = ::Math_obj::floor(this->yP);
			HX_STACK_LINE(137)
			hx::AddEq(this->curStep,(int)1);
			HX_STACK_LINE(139)
			if (((this->curStep < (int)1))){
				HX_STACK_LINE(140)
				return null();
			}
			HX_STACK_LINE(145)
			this->resetPositions();
			HX_STACK_LINE(147)
			hx::SubEq(this->curStep,::Math_obj::floor(this->curStep));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollingBitmap_obj,updateAuto,(void))


ScrollingBitmap_obj::ScrollingBitmap_obj()
{
}

void ScrollingBitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollingBitmap);
	HX_MARK_MEMBER_NAME(backgroundID,"backgroundID");
	HX_MARK_MEMBER_NAME(parallaxY,"parallaxY");
	HX_MARK_MEMBER_NAME(parallaxX,"parallaxX");
	HX_MARK_MEMBER_NAME(yVelocity,"yVelocity");
	HX_MARK_MEMBER_NAME(xVelocity,"xVelocity");
	HX_MARK_MEMBER_NAME(yPos,"yPos");
	HX_MARK_MEMBER_NAME(xPos,"xPos");
	HX_MARK_MEMBER_NAME(yP,"yP");
	HX_MARK_MEMBER_NAME(xP,"xP");
	HX_MARK_MEMBER_NAME(cacheHeight,"cacheHeight");
	HX_MARK_MEMBER_NAME(cacheWidth,"cacheWidth");
	HX_MARK_MEMBER_NAME(parallax,"parallax");
	HX_MARK_MEMBER_NAME(running,"running");
	HX_MARK_MEMBER_NAME(curStep,"curStep");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(image9,"image9");
	HX_MARK_MEMBER_NAME(image8,"image8");
	HX_MARK_MEMBER_NAME(image7,"image7");
	HX_MARK_MEMBER_NAME(image6,"image6");
	HX_MARK_MEMBER_NAME(image5,"image5");
	HX_MARK_MEMBER_NAME(image4,"image4");
	HX_MARK_MEMBER_NAME(image3,"image3");
	HX_MARK_MEMBER_NAME(image2,"image2");
	HX_MARK_MEMBER_NAME(image1,"image1");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrollingBitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backgroundID,"backgroundID");
	HX_VISIT_MEMBER_NAME(parallaxY,"parallaxY");
	HX_VISIT_MEMBER_NAME(parallaxX,"parallaxX");
	HX_VISIT_MEMBER_NAME(yVelocity,"yVelocity");
	HX_VISIT_MEMBER_NAME(xVelocity,"xVelocity");
	HX_VISIT_MEMBER_NAME(yPos,"yPos");
	HX_VISIT_MEMBER_NAME(xPos,"xPos");
	HX_VISIT_MEMBER_NAME(yP,"yP");
	HX_VISIT_MEMBER_NAME(xP,"xP");
	HX_VISIT_MEMBER_NAME(cacheHeight,"cacheHeight");
	HX_VISIT_MEMBER_NAME(cacheWidth,"cacheWidth");
	HX_VISIT_MEMBER_NAME(parallax,"parallax");
	HX_VISIT_MEMBER_NAME(running,"running");
	HX_VISIT_MEMBER_NAME(curStep,"curStep");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(image9,"image9");
	HX_VISIT_MEMBER_NAME(image8,"image8");
	HX_VISIT_MEMBER_NAME(image7,"image7");
	HX_VISIT_MEMBER_NAME(image6,"image6");
	HX_VISIT_MEMBER_NAME(image5,"image5");
	HX_VISIT_MEMBER_NAME(image4,"image4");
	HX_VISIT_MEMBER_NAME(image3,"image3");
	HX_VISIT_MEMBER_NAME(image2,"image2");
	HX_VISIT_MEMBER_NAME(image1,"image1");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ScrollingBitmap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"yP") ) { return yP; }
		if (HX_FIELD_EQ(inName,"xP") ) { return xP; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"yPos") ) { return yPos; }
		if (HX_FIELD_EQ(inName,"xPos") ) { return xPos; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"image9") ) { return image9; }
		if (HX_FIELD_EQ(inName,"image8") ) { return image8; }
		if (HX_FIELD_EQ(inName,"image7") ) { return image7; }
		if (HX_FIELD_EQ(inName,"image6") ) { return image6; }
		if (HX_FIELD_EQ(inName,"image5") ) { return image5; }
		if (HX_FIELD_EQ(inName,"image4") ) { return image4; }
		if (HX_FIELD_EQ(inName,"image3") ) { return image3; }
		if (HX_FIELD_EQ(inName,"image2") ) { return image2; }
		if (HX_FIELD_EQ(inName,"image1") ) { return image1; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { return running; }
		if (HX_FIELD_EQ(inName,"curStep") ) { return curStep; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"parallax") ) { return parallax; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parallaxY") ) { return parallaxY; }
		if (HX_FIELD_EQ(inName,"parallaxX") ) { return parallaxX; }
		if (HX_FIELD_EQ(inName,"yVelocity") ) { return yVelocity; }
		if (HX_FIELD_EQ(inName,"xVelocity") ) { return xVelocity; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateAuto") ) { return updateAuto_dyn(); }
		if (HX_FIELD_EQ(inName,"cacheWidth") ) { return cacheWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cacheHeight") ) { return cacheHeight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"backgroundID") ) { return backgroundID; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resetPositions") ) { return resetPositions_dyn(); }
		if (HX_FIELD_EQ(inName,"updateParallax") ) { return updateParallax_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScrollingBitmap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"yP") ) { yP=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xP") ) { xP=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"yPos") ) { yPos=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xPos") ) { xPos=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"image9") ) { image9=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image8") ) { image8=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image7") ) { image7=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image6") ) { image6=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image5") ) { image5=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image4") ) { image4=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image3") ) { image3=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image2") ) { image2=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image1") ) { image1=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { running=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curStep") ) { curStep=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"parallax") ) { parallax=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parallaxY") ) { parallaxY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parallaxX") ) { parallaxX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yVelocity") ) { yVelocity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xVelocity") ) { xVelocity=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cacheWidth") ) { cacheWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cacheHeight") ) { cacheHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"backgroundID") ) { backgroundID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollingBitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("backgroundID"));
	outFields->push(HX_CSTRING("parallaxY"));
	outFields->push(HX_CSTRING("parallaxX"));
	outFields->push(HX_CSTRING("yVelocity"));
	outFields->push(HX_CSTRING("xVelocity"));
	outFields->push(HX_CSTRING("yPos"));
	outFields->push(HX_CSTRING("xPos"));
	outFields->push(HX_CSTRING("yP"));
	outFields->push(HX_CSTRING("xP"));
	outFields->push(HX_CSTRING("cacheHeight"));
	outFields->push(HX_CSTRING("cacheWidth"));
	outFields->push(HX_CSTRING("parallax"));
	outFields->push(HX_CSTRING("running"));
	outFields->push(HX_CSTRING("curStep"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("image9"));
	outFields->push(HX_CSTRING("image8"));
	outFields->push(HX_CSTRING("image7"));
	outFields->push(HX_CSTRING("image6"));
	outFields->push(HX_CSTRING("image5"));
	outFields->push(HX_CSTRING("image4"));
	outFields->push(HX_CSTRING("image3"));
	outFields->push(HX_CSTRING("image2"));
	outFields->push(HX_CSTRING("image1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("stop"),
	HX_CSTRING("start"),
	HX_CSTRING("resetPositions"),
	HX_CSTRING("updateParallax"),
	HX_CSTRING("updateAuto"),
	HX_CSTRING("backgroundID"),
	HX_CSTRING("parallaxY"),
	HX_CSTRING("parallaxX"),
	HX_CSTRING("yVelocity"),
	HX_CSTRING("xVelocity"),
	HX_CSTRING("yPos"),
	HX_CSTRING("xPos"),
	HX_CSTRING("yP"),
	HX_CSTRING("xP"),
	HX_CSTRING("cacheHeight"),
	HX_CSTRING("cacheWidth"),
	HX_CSTRING("parallax"),
	HX_CSTRING("running"),
	HX_CSTRING("curStep"),
	HX_CSTRING("speed"),
	HX_CSTRING("image9"),
	HX_CSTRING("image8"),
	HX_CSTRING("image7"),
	HX_CSTRING("image6"),
	HX_CSTRING("image5"),
	HX_CSTRING("image4"),
	HX_CSTRING("image3"),
	HX_CSTRING("image2"),
	HX_CSTRING("image1"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollingBitmap_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollingBitmap_obj::__mClass,"__mClass");
};

Class ScrollingBitmap_obj::__mClass;

void ScrollingBitmap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.scene.ScrollingBitmap"), hx::TCanCast< ScrollingBitmap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ScrollingBitmap_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene
