#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_BubblesTransition
#include <com/stencyl/graphics/transitions/BubblesTransition.h>
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
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
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

Void BubblesTransition_obj::__construct(::String direction,Float duration,hx::Null< int >  __o_numBubbles,hx::Null< int >  __o_color)
{
HX_STACK_PUSH("BubblesTransition::new","com/stencyl/graphics/transitions/BubblesTransition.hx",37);
int numBubbles = __o_numBubbles.Default(50);
int color = __o_color.Default(-16777216);
{
	HX_STACK_LINE(38)
	super::__construct(duration);
	HX_STACK_LINE(40)
	this->color = color;
	HX_STACK_LINE(41)
	this->direction = direction;
	HX_STACK_LINE(42)
	this->numBubbles = numBubbles;
}
;
	return null();
}

BubblesTransition_obj::~BubblesTransition_obj() { }

Dynamic BubblesTransition_obj::__CreateEmpty() { return  new BubblesTransition_obj; }
hx::ObjectPtr< BubblesTransition_obj > BubblesTransition_obj::__new(::String direction,Float duration,hx::Null< int >  __o_numBubbles,hx::Null< int >  __o_color)
{  hx::ObjectPtr< BubblesTransition_obj > result = new BubblesTransition_obj();
	result->__construct(direction,duration,__o_numBubbles,__o_color);
	return result;}

Dynamic BubblesTransition_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BubblesTransition_obj > result = new BubblesTransition_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void BubblesTransition_obj::cleanup( ){
{
		HX_STACK_PUSH("BubblesTransition::cleanup","com/stencyl/graphics/transitions/BubblesTransition.hx",134);
		HX_STACK_THIS(this);
		HX_STACK_LINE(134)
		if (((this->rect != null()))){
			HX_STACK_LINE(137)
			::com::stencyl::Engine_obj::engine->transitionLayer->removeChild(this->rect);
			HX_STACK_LINE(138)
			this->rect = null();
		}
	}
return null();
}


Void BubblesTransition_obj::draw( ::flash::display::Graphics g){
{
		HX_STACK_PUSH("BubblesTransition::draw","com/stencyl/graphics/transitions/BubblesTransition.hx",103);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_LINE(104)
		this->graphics->clear();
		HX_STACK_LINE(106)
		if (((this->direction == ::com::stencyl::graphics::transitions::Transition_obj::IN))){
			HX_STACK_LINE(108)
			this->drawBitmap->draw(::com::stencyl::Engine_obj::engine->master,null(),null(),null(),null(),null());
			HX_STACK_LINE(110)
			this->graphics->beginFill(this->color,null());
			HX_STACK_LINE(111)
			this->graphics->drawRect((int)0,(int)0,this->screenWidth,this->screenHeight);
			HX_STACK_LINE(112)
			this->graphics->endFill();
			HX_STACK_LINE(114)
			{
				HX_STACK_LINE(114)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = this->bubblePositions;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(114)
				while(((_g < _g1->length))){
					HX_STACK_LINE(114)
					::flash::geom::Point p = _g1->__get(_g).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(114)
					++(_g);
					HX_STACK_LINE(116)
					this->graphics->beginBitmapFill(this->drawBitmap,null(),null(),null());
					HX_STACK_LINE(117)
					this->graphics->drawCircle(p->x,p->y,this->radius);
					HX_STACK_LINE(118)
					this->graphics->endFill();
				}
			}
		}
		else{
			HX_STACK_LINE(121)
			if (((this->direction == ::com::stencyl::graphics::transitions::Transition_obj::OUT))){
				HX_STACK_LINE(124)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = this->bubblePositions;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(124)
				while(((_g < _g1->length))){
					HX_STACK_LINE(124)
					::flash::geom::Point p = _g1->__get(_g).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(124)
					++(_g);
					HX_STACK_LINE(126)
					this->graphics->beginFill(this->color,null());
					HX_STACK_LINE(127)
					this->graphics->drawCircle(p->x,p->y,this->radius);
					HX_STACK_LINE(128)
					this->graphics->endFill();
				}
			}
		}
	}
return null();
}


Void BubblesTransition_obj::start( ){
{
		HX_STACK_PUSH("BubblesTransition::start","com/stencyl/graphics/transitions/BubblesTransition.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_LINE(47)
		this->active = true;
		HX_STACK_LINE(49)
		this->rect = ::flash::display::Shape_obj::__new();
		HX_STACK_LINE(50)
		this->graphics = this->rect->get_graphics();
		HX_STACK_LINE(52)
		this->screenWidth = ::Std_obj::_int((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(53)
		this->screenHeight = ::Std_obj::_int((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(55)
		if (((this->direction == ::com::stencyl::graphics::transitions::Transition_obj::IN))){
			HX_STACK_LINE(57)
			this->graphics->beginFill(this->color,null());
			HX_STACK_LINE(58)
			this->graphics->drawRect((int)0,(int)0,this->screenWidth,this->screenHeight);
			HX_STACK_LINE(59)
			this->graphics->endFill();
		}
		HX_STACK_LINE(62)
		this->drawBitmap = ::flash::display::BitmapData_obj::__new(this->screenWidth,this->screenHeight,null(),null(),null());
		HX_STACK_LINE(64)
		Float screenRatio = (Float(this->screenWidth) / Float(this->screenHeight));		HX_STACK_VAR(screenRatio,"screenRatio");
		HX_STACK_LINE(65)
		int vertBubbles = ::Std_obj::_int(::Math_obj::sqrt((Float(this->numBubbles) / Float(screenRatio))));		HX_STACK_VAR(vertBubbles,"vertBubbles");
		HX_STACK_LINE(66)
		int horzBubbles = ::Std_obj::_int((vertBubbles * screenRatio));		HX_STACK_VAR(horzBubbles,"horzBubbles");
		HX_STACK_LINE(67)
		Float bubbleSize = (Float(this->screenHeight) / Float(vertBubbles));		HX_STACK_VAR(bubbleSize,"bubbleSize");
		HX_STACK_LINE(69)
		int c = ::Math_obj::ceil(horzBubbles);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(70)
		int r = ::Math_obj::ceil(vertBubbles);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(72)
		int xOverflow = ::Std_obj::_int(((c * bubbleSize) - this->screenWidth));		HX_STACK_VAR(xOverflow,"xOverflow");
		HX_STACK_LINE(73)
		int yOverflow = ::Std_obj::_int(((r * bubbleSize) - this->screenHeight));		HX_STACK_VAR(yOverflow,"yOverflow");
		HX_STACK_LINE(75)
		::flash::geom::Rectangle bubbleRect = ::flash::geom::Rectangle_obj::__new((Float(-(xOverflow)) / Float((int)2)),(Float(-(yOverflow)) / Float((int)2)),bubbleSize,bubbleSize);		HX_STACK_VAR(bubbleRect,"bubbleRect");
		HX_STACK_LINE(77)
		this->bubblePositions = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(79)
			while(((_g < r))){
				HX_STACK_LINE(79)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(81)
					while(((_g1 < c))){
						HX_STACK_LINE(81)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(84)
						this->bubblePositions->push(::flash::geom::Point_obj::__new((bubbleRect->x + ::Math_obj::floor((::Math_obj::random() * ((bubbleSize + (int)1))))),(bubbleRect->y + ::Math_obj::floor((::Math_obj::random() * ((bubbleSize + (int)1)))))));
						HX_STACK_LINE(85)
						hx::AddEq(bubbleRect->x,bubbleSize);
					}
				}
				HX_STACK_LINE(88)
				bubbleRect->x = (Float(-(xOverflow)) / Float((int)2));
				HX_STACK_LINE(89)
				hx::AddEq(bubbleRect->y,bubbleSize);
			}
		}
		HX_STACK_LINE(92)
		this->beginRadius = (int)0;
		HX_STACK_LINE(93)
		this->endRadius = ::Math_obj::ceil(::flash::geom::Point_obj::distance(::flash::geom::Point_obj::__new((int)0,(int)0),::flash::geom::Point_obj::__new(bubbleSize,bubbleSize)));
		HX_STACK_LINE(95)
		this->radius = this->beginRadius;
		HX_STACK_LINE(97)
		::com::stencyl::Engine_obj::engine->transitionLayer->addChild(this->rect);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::graphics::transitions::BubblesTransition_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/graphics/transitions/BubblesTransition.hx",99);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("radius") , __this->endRadius,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(99)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),this->duration,_Function_1_1::Block(this),null(),null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete(this->stop_dyn(),null());
	}
return null();
}



BubblesTransition_obj::BubblesTransition_obj()
{
}

void BubblesTransition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BubblesTransition);
	HX_MARK_MEMBER_NAME(screenHeight,"screenHeight");
	HX_MARK_MEMBER_NAME(screenWidth,"screenWidth");
	HX_MARK_MEMBER_NAME(bubbleRect,"bubbleRect");
	HX_MARK_MEMBER_NAME(bubblePositions,"bubblePositions");
	HX_MARK_MEMBER_NAME(drawBitmap,"drawBitmap");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(endRadius,"endRadius");
	HX_MARK_MEMBER_NAME(beginRadius,"beginRadius");
	HX_MARK_MEMBER_NAME(radius,"radius");
	HX_MARK_MEMBER_NAME(numBubbles,"numBubbles");
	HX_MARK_MEMBER_NAME(color,"color");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BubblesTransition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(screenHeight,"screenHeight");
	HX_VISIT_MEMBER_NAME(screenWidth,"screenWidth");
	HX_VISIT_MEMBER_NAME(bubbleRect,"bubbleRect");
	HX_VISIT_MEMBER_NAME(bubblePositions,"bubblePositions");
	HX_VISIT_MEMBER_NAME(drawBitmap,"drawBitmap");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(endRadius,"endRadius");
	HX_VISIT_MEMBER_NAME(beginRadius,"beginRadius");
	HX_VISIT_MEMBER_NAME(radius,"radius");
	HX_VISIT_MEMBER_NAME(numBubbles,"numBubbles");
	HX_VISIT_MEMBER_NAME(color,"color");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BubblesTransition_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return radius; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"endRadius") ) { return endRadius; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bubbleRect") ) { return bubbleRect; }
		if (HX_FIELD_EQ(inName,"drawBitmap") ) { return drawBitmap; }
		if (HX_FIELD_EQ(inName,"numBubbles") ) { return numBubbles; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { return screenWidth; }
		if (HX_FIELD_EQ(inName,"beginRadius") ) { return beginRadius; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { return screenHeight; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bubblePositions") ) { return bubblePositions; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BubblesTransition_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flash::display::Shape >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::flash::display::Graphics >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"endRadius") ) { endRadius=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bubbleRect") ) { bubbleRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawBitmap") ) { drawBitmap=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numBubbles") ) { numBubbles=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { screenWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"beginRadius") ) { beginRadius=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { screenHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bubblePositions") ) { bubblePositions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BubblesTransition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("screenHeight"));
	outFields->push(HX_CSTRING("screenWidth"));
	outFields->push(HX_CSTRING("bubbleRect"));
	outFields->push(HX_CSTRING("bubblePositions"));
	outFields->push(HX_CSTRING("drawBitmap"));
	outFields->push(HX_CSTRING("graphics"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("endRadius"));
	outFields->push(HX_CSTRING("beginRadius"));
	outFields->push(HX_CSTRING("radius"));
	outFields->push(HX_CSTRING("numBubbles"));
	outFields->push(HX_CSTRING("color"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cleanup"),
	HX_CSTRING("draw"),
	HX_CSTRING("start"),
	HX_CSTRING("screenHeight"),
	HX_CSTRING("screenWidth"),
	HX_CSTRING("bubbleRect"),
	HX_CSTRING("bubblePositions"),
	HX_CSTRING("drawBitmap"),
	HX_CSTRING("graphics"),
	HX_CSTRING("rect"),
	HX_CSTRING("endRadius"),
	HX_CSTRING("beginRadius"),
	HX_CSTRING("radius"),
	HX_CSTRING("numBubbles"),
	HX_CSTRING("color"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BubblesTransition_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BubblesTransition_obj::__mClass,"__mClass");
};

Class BubblesTransition_obj::__mClass;

void BubblesTransition_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.transitions.BubblesTransition"), hx::TCanCast< BubblesTransition_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BubblesTransition_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions
