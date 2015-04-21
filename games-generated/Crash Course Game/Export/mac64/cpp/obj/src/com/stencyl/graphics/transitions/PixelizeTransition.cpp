#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_PixelizeTransition
#include <com/stencyl/graphics/transitions/PixelizeTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_Transition
#include <com/stencyl/graphics/transitions/Transition.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Shape
#include <flash/display/Shape.h>
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
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
namespace com{
namespace stencyl{
namespace graphics{
namespace transitions{

Void PixelizeTransition_obj::__construct(Float duration,int beginPixelSize,int endPixelSize)
{
HX_STACK_PUSH("PixelizeTransition::new","com/stencyl/graphics/transitions/PixelizeTransition.hx",36);
{
	HX_STACK_LINE(37)
	super::__construct(duration);
	HX_STACK_LINE(39)
	this->beginPixelSize = beginPixelSize;
	HX_STACK_LINE(40)
	this->endPixelSize = endPixelSize;
	HX_STACK_LINE(41)
	this->pixelSize = beginPixelSize;
}
;
	return null();
}

PixelizeTransition_obj::~PixelizeTransition_obj() { }

Dynamic PixelizeTransition_obj::__CreateEmpty() { return  new PixelizeTransition_obj; }
hx::ObjectPtr< PixelizeTransition_obj > PixelizeTransition_obj::__new(Float duration,int beginPixelSize,int endPixelSize)
{  hx::ObjectPtr< PixelizeTransition_obj > result = new PixelizeTransition_obj();
	result->__construct(duration,beginPixelSize,endPixelSize);
	return result;}

Dynamic PixelizeTransition_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PixelizeTransition_obj > result = new PixelizeTransition_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void PixelizeTransition_obj::cleanup( ){
{
		HX_STACK_PUSH("PixelizeTransition::cleanup","com/stencyl/graphics/transitions/PixelizeTransition.hx",97);
		HX_STACK_THIS(this);
		HX_STACK_LINE(97)
		if (((this->rect != null()))){
			HX_STACK_LINE(100)
			::com::stencyl::Engine_obj::engine->transitionLayer->removeChild(this->rect);
			HX_STACK_LINE(101)
			this->rect = null();
		}
	}
return null();
}


Void PixelizeTransition_obj::draw( ::flash::display::Graphics g){
{
		HX_STACK_PUSH("PixelizeTransition::draw","com/stencyl/graphics/transitions/PixelizeTransition.hx",59);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_LINE(60)
		if (((this->pixelSize == (int)1))){
			HX_STACK_LINE(61)
			return null();
		}
		HX_STACK_LINE(65)
		this->graphics->clear();
		HX_STACK_LINE(66)
		this->srcImg->draw(::com::stencyl::Engine_obj::engine->master,null(),null(),null(),null(),null());
		HX_STACK_LINE(68)
		this->c = ::Math_obj::ceil((Float((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)) / Float(this->pixelSize)));
		HX_STACK_LINE(69)
		this->r = ::Math_obj::ceil((Float((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)) / Float(this->pixelSize)));
		HX_STACK_LINE(71)
		this->xOverflow = ::Std_obj::_int(((this->c * this->pixelSize) - (::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)));
		HX_STACK_LINE(72)
		this->yOverflow = ::Std_obj::_int(((this->r * this->pixelSize) - (::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)));
		HX_STACK_LINE(74)
		this->pixelRect->x = (Float(-(this->xOverflow)) / Float((int)2));
		HX_STACK_LINE(75)
		this->pixelRect->y = (Float(-(this->yOverflow)) / Float((int)2));
		HX_STACK_LINE(76)
		this->pixelRect->height = this->pixelRect->width = this->pixelSize;
		HX_STACK_LINE(78)
		this->halfSize = ::Std_obj::_int((Float(this->pixelSize) / Float((int)2)));
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->r;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(80)
			while(((_g1 < _g))){
				HX_STACK_LINE(80)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(82)
				{
					HX_STACK_LINE(82)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->c;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(82)
					while(((_g3 < _g2))){
						HX_STACK_LINE(82)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(84)
						this->graphics->beginFill(this->srcImg->getPixel32(::Std_obj::_int((this->pixelRect->x + this->halfSize)),::Std_obj::_int((this->pixelRect->y + this->halfSize))),null());
						HX_STACK_LINE(85)
						this->graphics->drawRect(this->pixelRect->x,this->pixelRect->y,this->pixelRect->width,this->pixelRect->height);
						HX_STACK_LINE(86)
						this->graphics->endFill();
						HX_STACK_LINE(88)
						hx::AddEq(this->pixelRect->x,this->pixelSize);
					}
				}
				HX_STACK_LINE(91)
				this->pixelRect->x = (Float(-(this->xOverflow)) / Float((int)2));
				HX_STACK_LINE(92)
				hx::AddEq(this->pixelRect->y,this->pixelSize);
			}
		}
	}
return null();
}


Void PixelizeTransition_obj::start( ){
{
		HX_STACK_PUSH("PixelizeTransition::start","com/stencyl/graphics/transitions/PixelizeTransition.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_LINE(46)
		this->active = true;
		HX_STACK_LINE(48)
		this->rect = ::flash::display::Shape_obj::__new();
		HX_STACK_LINE(49)
		this->graphics = this->rect->get_graphics();
		HX_STACK_LINE(50)
		this->srcImg = ::flash::display::BitmapData_obj::__new(::Std_obj::_int((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)),::Std_obj::_int((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)),null(),null(),null());
		HX_STACK_LINE(51)
		this->pixelRect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,(int)0,(int)0);
		HX_STACK_LINE(53)
		::com::stencyl::Engine_obj::engine->transitionLayer->addChild(this->rect);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::graphics::transitions::PixelizeTransition_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/graphics/transitions/PixelizeTransition.hx",55);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("pixelSize") , __this->endPixelSize,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(55)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),this->duration,_Function_1_1::Block(this),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete(this->stop_dyn(),null());
	}
return null();
}



PixelizeTransition_obj::PixelizeTransition_obj()
{
}

void PixelizeTransition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PixelizeTransition);
	HX_MARK_MEMBER_NAME(halfSize,"halfSize");
	HX_MARK_MEMBER_NAME(pixelRect,"pixelRect");
	HX_MARK_MEMBER_NAME(yOverflow,"yOverflow");
	HX_MARK_MEMBER_NAME(xOverflow,"xOverflow");
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(srcImg,"srcImg");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(endPixelSize,"endPixelSize");
	HX_MARK_MEMBER_NAME(beginPixelSize,"beginPixelSize");
	HX_MARK_MEMBER_NAME(pixelSize,"pixelSize");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PixelizeTransition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(halfSize,"halfSize");
	HX_VISIT_MEMBER_NAME(pixelRect,"pixelRect");
	HX_VISIT_MEMBER_NAME(yOverflow,"yOverflow");
	HX_VISIT_MEMBER_NAME(xOverflow,"xOverflow");
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(srcImg,"srcImg");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(endPixelSize,"endPixelSize");
	HX_VISIT_MEMBER_NAME(beginPixelSize,"beginPixelSize");
	HX_VISIT_MEMBER_NAME(pixelSize,"pixelSize");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PixelizeTransition_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"srcImg") ) { return srcImg; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"halfSize") ) { return halfSize; }
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pixelRect") ) { return pixelRect; }
		if (HX_FIELD_EQ(inName,"yOverflow") ) { return yOverflow; }
		if (HX_FIELD_EQ(inName,"xOverflow") ) { return xOverflow; }
		if (HX_FIELD_EQ(inName,"pixelSize") ) { return pixelSize; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endPixelSize") ) { return endPixelSize; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"beginPixelSize") ) { return beginPixelSize; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PixelizeTransition_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flash::display::Shape >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"srcImg") ) { srcImg=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"halfSize") ) { halfSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::flash::display::Graphics >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pixelRect") ) { pixelRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yOverflow") ) { yOverflow=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xOverflow") ) { xOverflow=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixelSize") ) { pixelSize=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endPixelSize") ) { endPixelSize=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"beginPixelSize") ) { beginPixelSize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PixelizeTransition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("halfSize"));
	outFields->push(HX_CSTRING("pixelRect"));
	outFields->push(HX_CSTRING("yOverflow"));
	outFields->push(HX_CSTRING("xOverflow"));
	outFields->push(HX_CSTRING("r"));
	outFields->push(HX_CSTRING("c"));
	outFields->push(HX_CSTRING("srcImg"));
	outFields->push(HX_CSTRING("graphics"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("endPixelSize"));
	outFields->push(HX_CSTRING("beginPixelSize"));
	outFields->push(HX_CSTRING("pixelSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cleanup"),
	HX_CSTRING("draw"),
	HX_CSTRING("start"),
	HX_CSTRING("halfSize"),
	HX_CSTRING("pixelRect"),
	HX_CSTRING("yOverflow"),
	HX_CSTRING("xOverflow"),
	HX_CSTRING("r"),
	HX_CSTRING("c"),
	HX_CSTRING("srcImg"),
	HX_CSTRING("graphics"),
	HX_CSTRING("rect"),
	HX_CSTRING("endPixelSize"),
	HX_CSTRING("beginPixelSize"),
	HX_CSTRING("pixelSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PixelizeTransition_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PixelizeTransition_obj::__mClass,"__mClass");
};

Class PixelizeTransition_obj::__mClass;

void PixelizeTransition_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.transitions.PixelizeTransition"), hx::TCanCast< PixelizeTransition_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PixelizeTransition_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions
