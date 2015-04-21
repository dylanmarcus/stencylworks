#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Collision
#include <com/stencyl/models/actor/Collision.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
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
#ifndef INCLUDED_flash_media_SoundTransform
#include <flash/media/SoundTransform.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace stencyl{
namespace utils{

Void Utils_obj::__construct()
{
	return null();
}

Utils_obj::~Utils_obj() { }

Dynamic Utils_obj::__CreateEmpty() { return  new Utils_obj; }
hx::ObjectPtr< Utils_obj > Utils_obj::__new()
{  hx::ObjectPtr< Utils_obj > result = new Utils_obj();
	result->__construct();
	return result;}

Dynamic Utils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utils_obj > result = new Utils_obj();
	result->__construct();
	return result;}

int Utils_obj::INTEGER_MAX;

Float Utils_obj::NUMBER_MAX_VALUE;

int Utils_obj::blackColor;

int Utils_obj::width;

int Utils_obj::height;

Float Utils_obj::elapsed;

Float Utils_obj::rate;

::flash::geom::Rectangle Utils_obj::bounds;

::flash::geom::Point Utils_obj::camera;

bool Utils_obj::toBoolean( ::String s){
	HX_STACK_PUSH("Utils::toBoolean","com/stencyl/utils/Utils.hx",78);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(78)
	return (  (((s == HX_CSTRING("true")))) ? bool(true) : bool(false) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,toBoolean,return )

Void Utils_obj::clear( Dynamic arr){
{
		HX_STACK_PUSH("Utils::clear","com/stencyl/utils/Utils.hx",93);
		HX_STACK_ARG(arr,"arr");
		HX_STACK_LINE(93)
		arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,clear,(void))

Void Utils_obj::removeValueFromArray( Dynamic arr,Dynamic value){
{
		HX_STACK_PUSH("Utils::removeValueFromArray","com/stencyl/utils/Utils.hx",102);
		HX_STACK_ARG(arr,"arr");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(103)
		int len = arr->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(105)
		int i = len;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(107)
		while(((i > (int)-1))){
			HX_STACK_LINE(109)
			if (((arr->__GetItem(i) == value))){
				HX_STACK_LINE(110)
				arr->__Field(HX_CSTRING("slice"),true)(i,(int)1);
			}
			HX_STACK_LINE(114)
			(i)--;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,removeValueFromArray,(void))

bool Utils_obj::contains( Dynamic arr,Dynamic value){
	HX_STACK_PUSH("Utils::contains","com/stencyl/utils/Utils.hx",119);
	HX_STACK_ARG(arr,"arr");
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(120)
	int len = arr->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(122)
	int i = len;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(124)
	while(((i > (int)-1))){
		HX_STACK_LINE(126)
		if (((arr->__GetItem(i) == value))){
			HX_STACK_LINE(127)
			return true;
		}
		HX_STACK_LINE(131)
		(i)--;
	}
	HX_STACK_LINE(134)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,contains,return )

Void Utils_obj::removeAllChildren( ::flash::display::DisplayObjectContainer container){
{
		HX_STACK_PUSH("Utils::removeAllChildren","com/stencyl/utils/Utils.hx",138);
		HX_STACK_ARG(container,"container");
		HX_STACK_LINE(138)
		while(((container->get_numChildren() > (int)0))){
			HX_STACK_LINE(141)
			::flash::display::DisplayObject c = container->getChildAt((int)0);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(143)
			if ((::Std_obj::is(c,hx::ClassOf< ::flash::display::DisplayObjectContainer >()))){
				HX_STACK_LINE(144)
				::com::stencyl::utils::Utils_obj::removeAllChildren(hx::TCast< flash::display::DisplayObjectContainer >::cast(c));
			}
			HX_STACK_LINE(148)
			container->removeChild(c);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,removeAllChildren,(void))

Void Utils_obj::demouse( ::flash::display::DisplayObjectContainer container){
{
		HX_STACK_PUSH("Utils::demouse","com/stencyl/utils/Utils.hx",153);
		HX_STACK_ARG(container,"container");
		HX_STACK_LINE(154)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = container->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		while(((_g1 < _g))){
			HX_STACK_LINE(154)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(156)
			::flash::display::DisplayObject c = container->getChildAt(i);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(158)
			if ((::Std_obj::is(c,hx::ClassOf< ::flash::display::DisplayObjectContainer >()))){
				HX_STACK_LINE(159)
				::com::stencyl::utils::Utils_obj::demouse(hx::TCast< flash::display::DisplayObjectContainer >::cast(c));
			}
			HX_STACK_LINE(163)
			container->set_mouseChildren(false);
			HX_STACK_LINE(164)
			container->set_mouseEnabled(false);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,demouse,(void))

Void Utils_obj::setCamera( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_PUSH("Utils::setCamera","com/stencyl/utils/Utils.hx",174);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		HX_STACK_LINE(175)
		::com::stencyl::utils::Utils_obj::camera->x = x;
		HX_STACK_LINE(176)
		::com::stencyl::utils::Utils_obj::camera->y = y;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,setCamera,(void))

Void Utils_obj::resetCamera( ){
{
		HX_STACK_PUSH("Utils::resetCamera","com/stencyl/utils/Utils.hx",183);
		HX_STACK_LINE(183)
		::com::stencyl::utils::Utils_obj::camera->x = ::com::stencyl::utils::Utils_obj::camera->y = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,resetCamera,(void))

Float Utils_obj::get_volume( ){
	HX_STACK_PUSH("Utils::get_volume","com/stencyl/utils/Utils.hx",191);
	HX_STACK_LINE(191)
	return ::com::stencyl::utils::Utils_obj::_volume;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,get_volume,return )

Float Utils_obj::set_volume( Float value){
	HX_STACK_PUSH("Utils::set_volume","com/stencyl/utils/Utils.hx",193);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(194)
	if (((value < (int)0))){
		HX_STACK_LINE(194)
		value = (int)0;
	}
	HX_STACK_LINE(195)
	if (((::com::stencyl::utils::Utils_obj::_volume == value))){
		HX_STACK_LINE(195)
		return value;
	}
	HX_STACK_LINE(196)
	::com::stencyl::utils::Utils_obj::_soundTransform->volume = ::com::stencyl::utils::Utils_obj::_volume = value;
	HX_STACK_LINE(200)
	return ::com::stencyl::utils::Utils_obj::_volume;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,set_volume,return )

Float Utils_obj::get_pan( ){
	HX_STACK_PUSH("Utils::get_pan","com/stencyl/utils/Utils.hx",207);
	HX_STACK_LINE(207)
	return ::com::stencyl::utils::Utils_obj::_pan;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,get_pan,return )

Float Utils_obj::set_pan( Float value){
	HX_STACK_PUSH("Utils::set_pan","com/stencyl/utils/Utils.hx",209);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(210)
	if (((value < (int)-1))){
		HX_STACK_LINE(210)
		value = (int)-1;
	}
	HX_STACK_LINE(211)
	if (((value > (int)1))){
		HX_STACK_LINE(211)
		value = (int)1;
	}
	HX_STACK_LINE(212)
	if (((::com::stencyl::utils::Utils_obj::_pan == value))){
		HX_STACK_LINE(212)
		return value;
	}
	HX_STACK_LINE(213)
	::com::stencyl::utils::Utils_obj::_soundTransform->pan = ::com::stencyl::utils::Utils_obj::_pan = value;
	HX_STACK_LINE(217)
	return ::com::stencyl::utils::Utils_obj::_pan;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,set_pan,return )

Dynamic Utils_obj::choose( Dynamic objs){
	HX_STACK_PUSH("Utils::choose","com/stencyl/utils/Utils.hx",226);
	HX_STACK_ARG(objs,"objs");
	struct _Function_1_1{
		inline static int Block( Dynamic &objs){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/Utils.hx",227);
			{
				HX_STACK_LINE(227)
				::com::stencyl::utils::Utils_obj::_seed = ::Std_obj::_int(hx::Mod((::com::stencyl::utils::Utils_obj::_seed * 16807.0),2147483647.0));
				HX_STACK_LINE(227)
				return ::Std_obj::_int(((Float(::com::stencyl::utils::Utils_obj::_seed) / Float(2147483647.0)) * objs->__Field(HX_CSTRING("length"),true)));
			}
			return null();
		}
	};
	HX_STACK_LINE(226)
	return objs->__GetItem(_Function_1_1::Block(objs));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,choose,return )

int Utils_obj::sign( Float value){
	HX_STACK_PUSH("Utils::sign","com/stencyl/utils/Utils.hx",236);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(236)
	return (  (((value < (int)0))) ? int((int)-1) : int((  (((value > (int)0))) ? int((int)1) : int((int)0) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,sign,return )

Float Utils_obj::approach( Float value,Float target,Float amount){
	HX_STACK_PUSH("Utils::approach","com/stencyl/utils/Utils.hx",248);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(amount,"amount");
	struct _Function_1_1{
		inline static Float Block( Float &target,Float &amount,Float &value){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/Utils.hx",249);
			{
				HX_STACK_LINE(249)
				return (  (((target < (value + amount)))) ? Float(target) : Float((value + amount)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(248)
	return (  (((value < target))) ? Float(_Function_1_1::Block(target,amount,value)) : Float((  (((target > (value - amount)))) ? Float(target) : Float((value - amount)) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,approach,return )

Float Utils_obj::lerp( Float a,Float b,hx::Null< Float >  __o_t){
Float t = __o_t.Default(1);
	HX_STACK_PUSH("Utils::lerp","com/stencyl/utils/Utils.hx",260);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(t,"t");
{
		HX_STACK_LINE(260)
		return (a + (((b - a)) * t));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,lerp,return )

int Utils_obj::colorLerp( int fromColor,int toColor,hx::Null< Float >  __o_t){
Float t = __o_t.Default(1);
	HX_STACK_PUSH("Utils::colorLerp","com/stencyl/utils/Utils.hx",272);
	HX_STACK_ARG(fromColor,"fromColor");
	HX_STACK_ARG(toColor,"toColor");
	HX_STACK_ARG(t,"t");
{
		HX_STACK_LINE(273)
		if (((t <= (int)0))){
			HX_STACK_LINE(273)
			return fromColor;
		}
		HX_STACK_LINE(274)
		if (((t >= (int)1))){
			HX_STACK_LINE(274)
			return toColor;
		}
		HX_STACK_LINE(275)
		int a = (int((int(fromColor) >> int((int)24))) & int((int)255));		HX_STACK_VAR(a,"a");
		int r = (int((int(fromColor) >> int((int)16))) & int((int)255));		HX_STACK_VAR(r,"r");
		int g = (int((int(fromColor) >> int((int)8))) & int((int)255));		HX_STACK_VAR(g,"g");
		int b = (int(fromColor) & int((int)255));		HX_STACK_VAR(b,"b");
		int dA = (((int((int(toColor) >> int((int)24))) & int((int)255))) - a);		HX_STACK_VAR(dA,"dA");
		int dR = (((int((int(toColor) >> int((int)16))) & int((int)255))) - r);		HX_STACK_VAR(dR,"dR");
		int dG = (((int((int(toColor) >> int((int)8))) & int((int)255))) - g);		HX_STACK_VAR(dG,"dG");
		int dB = (((int(toColor) & int((int)255))) - b);		HX_STACK_VAR(dB,"dB");
		HX_STACK_LINE(283)
		hx::AddEq(a,::Std_obj::_int((dA * t)));
		HX_STACK_LINE(284)
		hx::AddEq(r,::Std_obj::_int((dR * t)));
		HX_STACK_LINE(285)
		hx::AddEq(g,::Std_obj::_int((dG * t)));
		HX_STACK_LINE(286)
		hx::AddEq(b,::Std_obj::_int((dB * t)));
		HX_STACK_LINE(287)
		return (int((int((int((int(a) << int((int)24))) | int((int(r) << int((int)16))))) | int((int(g) << int((int)8))))) | int(b));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,colorLerp,return )

Void Utils_obj::stepTowards( Dynamic object,Float x,Float y,hx::Null< Float >  __o_distance){
Float distance = __o_distance.Default(1);
	HX_STACK_PUSH("Utils::stepTowards","com/stencyl/utils/Utils.hx",298);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(distance,"distance");
{
		HX_STACK_LINE(299)
		::com::stencyl::utils::Utils_obj::point->x = (x - object->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(300)
		::com::stencyl::utils::Utils_obj::point->y = (y - object->__Field(HX_CSTRING("y"),true));
		HX_STACK_LINE(301)
		if (((::com::stencyl::utils::Utils_obj::point->get_length() <= distance))){
			HX_STACK_LINE(303)
			object->__FieldRef(HX_CSTRING("x")) = x;
			HX_STACK_LINE(304)
			object->__FieldRef(HX_CSTRING("y")) = y;
			HX_STACK_LINE(305)
			return null();
		}
		HX_STACK_LINE(307)
		::com::stencyl::utils::Utils_obj::point->normalize(distance);
		HX_STACK_LINE(308)
		hx::AddEq(object->__FieldRef(HX_CSTRING("x")),::com::stencyl::utils::Utils_obj::point->x);
		HX_STACK_LINE(309)
		hx::AddEq(object->__FieldRef(HX_CSTRING("y")),::com::stencyl::utils::Utils_obj::point->y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Utils_obj,stepTowards,(void))

Void Utils_obj::anchorTo( Dynamic object,Dynamic anchor,hx::Null< Float >  __o_distance){
Float distance = __o_distance.Default(0);
	HX_STACK_PUSH("Utils::anchorTo","com/stencyl/utils/Utils.hx",319);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(anchor,"anchor");
	HX_STACK_ARG(distance,"distance");
{
		HX_STACK_LINE(320)
		::com::stencyl::utils::Utils_obj::point->x = (object->__Field(HX_CSTRING("x"),true) - anchor->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(321)
		::com::stencyl::utils::Utils_obj::point->y = (object->__Field(HX_CSTRING("y"),true) - anchor->__Field(HX_CSTRING("y"),true));
		HX_STACK_LINE(322)
		if (((::com::stencyl::utils::Utils_obj::point->get_length() > distance))){
			HX_STACK_LINE(322)
			::com::stencyl::utils::Utils_obj::point->normalize(distance);
		}
		HX_STACK_LINE(323)
		object->__FieldRef(HX_CSTRING("x")) = (anchor->__Field(HX_CSTRING("x"),true) + ::com::stencyl::utils::Utils_obj::point->x);
		HX_STACK_LINE(324)
		object->__FieldRef(HX_CSTRING("y")) = (anchor->__Field(HX_CSTRING("y"),true) + ::com::stencyl::utils::Utils_obj::point->y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,anchorTo,(void))

Float Utils_obj::angle( Float x1,Float y1,Float x2,Float y2){
	HX_STACK_PUSH("Utils::angle","com/stencyl/utils/Utils.hx",336);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
	HX_STACK_LINE(337)
	Float a = (::Math_obj::atan2((y2 - y1),(x2 - x1)) * ((Float((int)180) / Float(3.14159))));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(338)
	return (  (((a < (int)0))) ? Float((a + (int)360)) : Float(a) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Utils_obj,angle,return )

Void Utils_obj::angleXY( Dynamic object,Float angle,hx::Null< Float >  __o_length,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float length = __o_length.Default(1);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_PUSH("Utils::angleXY","com/stencyl/utils/Utils.hx",350);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(length,"length");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		HX_STACK_LINE(351)
		hx::MultEq(angle,(Float(3.14159) / Float((int)180)));
		HX_STACK_LINE(352)
		object->__FieldRef(HX_CSTRING("x")) = ((::Math_obj::cos(angle) * length) + x);
		HX_STACK_LINE(353)
		object->__FieldRef(HX_CSTRING("y")) = ((::Math_obj::sin(angle) * length) + y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Utils_obj,angleXY,(void))

Void Utils_obj::rotateAround( Dynamic object,Dynamic anchor,hx::Null< Float >  __o_angle,hx::Null< bool >  __o_relative){
Float angle = __o_angle.Default(0);
bool relative = __o_relative.Default(true);
	HX_STACK_PUSH("Utils::rotateAround","com/stencyl/utils/Utils.hx",363);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(anchor,"anchor");
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(relative,"relative");
{
		HX_STACK_LINE(364)
		if ((relative)){
			struct _Function_2_1{
				inline static Float Block( Dynamic &object,Dynamic &anchor){
					HX_STACK_PUSH("*::closure","com/stencyl/utils/Utils.hx",364);
					{
						HX_STACK_LINE(364)
						Float x1 = anchor->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x1,"x1");
						Float y1 = anchor->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y1,"y1");
						Float x2 = object->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x2,"x2");
						Float y2 = object->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(364)
						Float a = (::Math_obj::atan2((y2 - y1),(x2 - x1)) * ((Float((int)180) / Float(3.14159))));		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(364)
						return (  (((a < (int)0))) ? Float((a + (int)360)) : Float(a) );
					}
					return null();
				}
			};
			HX_STACK_LINE(364)
			hx::AddEq(angle,_Function_2_1::Block(object,anchor));
		}
		HX_STACK_LINE(365)
		{
			struct _Function_2_1{
				inline static Float Block( Dynamic &object,Dynamic &anchor){
					HX_STACK_PUSH("*::closure","com/stencyl/utils/Utils.hx",365);
					{
						HX_STACK_LINE(365)
						Float x1 = anchor->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x1,"x1");
						Float y1 = anchor->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y1,"y1");
						Float x2 = object->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x2,"x2");
						Float y2 = object->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(365)
						return ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(365)
			Float angle1 = angle;		HX_STACK_VAR(angle1,"angle1");
			Float length = _Function_2_1::Block(object,anchor);		HX_STACK_VAR(length,"length");
			Float x = anchor->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x,"x");
			Float y = anchor->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(365)
			hx::MultEq(angle1,(Float(3.14159) / Float((int)180)));
			HX_STACK_LINE(365)
			object->__FieldRef(HX_CSTRING("x")) = ((::Math_obj::cos(angle1) * length) + x);
			HX_STACK_LINE(365)
			object->__FieldRef(HX_CSTRING("y")) = ((::Math_obj::sin(angle1) * length) + y);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Utils_obj,rotateAround,(void))

Float Utils_obj::distance( Float x1,Float y1,hx::Null< Float >  __o_x2,hx::Null< Float >  __o_y2){
Float x2 = __o_x2.Default(0);
Float y2 = __o_y2.Default(0);
	HX_STACK_PUSH("Utils::distance","com/stencyl/utils/Utils.hx",377);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
{
		HX_STACK_LINE(377)
		return ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Utils_obj,distance,return )

Float Utils_obj::distanceSquared( Float x1,Float y1,hx::Null< Float >  __o_x2,hx::Null< Float >  __o_y2){
Float x2 = __o_x2.Default(0);
Float y2 = __o_y2.Default(0);
	HX_STACK_PUSH("Utils::distanceSquared","com/stencyl/utils/Utils.hx",382);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
{
		HX_STACK_LINE(382)
		return ((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Utils_obj,distanceSquared,return )

Float Utils_obj::distanceRects( Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2){
	HX_STACK_PUSH("Utils::distanceRects","com/stencyl/utils/Utils.hx",399);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(w1,"w1");
	HX_STACK_ARG(h1,"h1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
	HX_STACK_ARG(w2,"w2");
	HX_STACK_ARG(h2,"h2");
	HX_STACK_LINE(400)
	if (((bool((x1 < (x2 + w2))) && bool((x2 < (x1 + w1)))))){
		HX_STACK_LINE(402)
		if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
			HX_STACK_LINE(402)
			return (int)0;
		}
		HX_STACK_LINE(403)
		if (((y1 > y2))){
			HX_STACK_LINE(403)
			return (y1 - ((y2 + h2)));
		}
		HX_STACK_LINE(404)
		return (y2 - ((y1 + h1)));
	}
	HX_STACK_LINE(406)
	if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
		HX_STACK_LINE(408)
		if (((x1 > x2))){
			HX_STACK_LINE(408)
			return (x1 - ((x2 + w2)));
		}
		HX_STACK_LINE(409)
		return (x2 - ((x1 + w1)));
	}
	HX_STACK_LINE(411)
	if (((x1 > x2))){
		HX_STACK_LINE(413)
		if (((y1 > y2))){
			struct _Function_3_1{
				inline static Float Block( Float &h2,Float &w2,Float &x1,Float &x2,Float &y2,Float &y1){
					HX_STACK_PUSH("*::closure","com/stencyl/utils/Utils.hx",413);
					{
						HX_STACK_LINE(413)
						Float x21 = (x2 + w2);		HX_STACK_VAR(x21,"x21");
						Float y21 = (y2 + h2);		HX_STACK_VAR(y21,"y21");
						HX_STACK_LINE(413)
						return ::Math_obj::sqrt(((((x21 - x1)) * ((x21 - x1))) + (((y21 - y1)) * ((y21 - y1)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(413)
			return _Function_3_1::Block(h2,w2,x1,x2,y2,y1);
		}
		struct _Function_2_1{
			inline static Float Block( Float &w2,Float &x1,Float &h1,Float &x2,Float &y2,Float &y1){
				HX_STACK_PUSH("*::closure","com/stencyl/utils/Utils.hx",414);
				{
					HX_STACK_LINE(414)
					Float y11 = (y1 + h1);		HX_STACK_VAR(y11,"y11");
					Float x21 = (x2 + w2);		HX_STACK_VAR(x21,"x21");
					HX_STACK_LINE(414)
					return ::Math_obj::sqrt(((((x21 - x1)) * ((x21 - x1))) + (((y2 - y11)) * ((y2 - y11)))));
				}
				return null();
			}
		};
		HX_STACK_LINE(414)
		return _Function_2_1::Block(w2,x1,h1,x2,y2,y1);
	}
	HX_STACK_LINE(416)
	if (((y1 > y2))){
		struct _Function_2_1{
			inline static Float Block( Float &h2,Float &w1,Float &x1,Float &y2,Float &x2,Float &y1){
				HX_STACK_PUSH("*::closure","com/stencyl/utils/Utils.hx",416);
				{
					HX_STACK_LINE(416)
					Float x11 = (x1 + w1);		HX_STACK_VAR(x11,"x11");
					Float y21 = (y2 + h2);		HX_STACK_VAR(y21,"y21");
					HX_STACK_LINE(416)
					return ::Math_obj::sqrt(((((x2 - x11)) * ((x2 - x11))) + (((y21 - y1)) * ((y21 - y1)))));
				}
				return null();
			}
		};
		HX_STACK_LINE(416)
		return _Function_2_1::Block(h2,w1,x1,y2,x2,y1);
	}
	struct _Function_1_1{
		inline static Float Block( Float &w1,Float &x1,Float &h1,Float &x2,Float &y2,Float &y1){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/Utils.hx",417);
			{
				HX_STACK_LINE(417)
				Float x11 = (x1 + w1);		HX_STACK_VAR(x11,"x11");
				Float y11 = (y1 + h1);		HX_STACK_VAR(y11,"y11");
				HX_STACK_LINE(417)
				return ::Math_obj::sqrt(((((x2 - x11)) * ((x2 - x11))) + (((y2 - y11)) * ((y2 - y11)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(417)
	return _Function_1_1::Block(w1,x1,h1,x2,y2,y1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Utils_obj,distanceRects,return )

Float Utils_obj::distanceRectPoint( Float px,Float py,Float rx,Float ry,Float rw,Float rh){
	HX_STACK_PUSH("Utils::distanceRectPoint","com/stencyl/utils/Utils.hx",431);
	HX_STACK_ARG(px,"px");
	HX_STACK_ARG(py,"py");
	HX_STACK_ARG(rx,"rx");
	HX_STACK_ARG(ry,"ry");
	HX_STACK_ARG(rw,"rw");
	HX_STACK_ARG(rh,"rh");
	HX_STACK_LINE(432)
	if (((bool((px >= rx)) && bool((px <= (rx + rw)))))){
		HX_STACK_LINE(434)
		if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
			HX_STACK_LINE(434)
			return (int)0;
		}
		HX_STACK_LINE(435)
		if (((py > ry))){
			HX_STACK_LINE(435)
			return (py - ((ry + rh)));
		}
		HX_STACK_LINE(436)
		return (ry - py);
	}
	HX_STACK_LINE(438)
	if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
		HX_STACK_LINE(440)
		if (((px > rx))){
			HX_STACK_LINE(440)
			return (px - ((rx + rw)));
		}
		HX_STACK_LINE(441)
		return (rx - px);
	}
	HX_STACK_LINE(443)
	if (((px > rx))){
		HX_STACK_LINE(445)
		if (((py > ry))){
			struct _Function_3_1{
				inline static Float Block( Float &rx,Float &rh,Float &ry,Float &px,Float &rw,Float &py){
					HX_STACK_PUSH("*::closure","com/stencyl/utils/Utils.hx",445);
					{
						HX_STACK_LINE(445)
						Float x2 = (rx + rw);		HX_STACK_VAR(x2,"x2");
						Float y2 = (ry + rh);		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(445)
						return ::Math_obj::sqrt(((((x2 - px)) * ((x2 - px))) + (((y2 - py)) * ((y2 - py)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(445)
			return _Function_3_1::Block(rx,rh,ry,px,rw,py);
		}
		struct _Function_2_1{
			inline static Float Block( Float &rx,Float &px,Float &ry,Float &rw,Float &py){
				HX_STACK_PUSH("*::closure","com/stencyl/utils/Utils.hx",446);
				{
					HX_STACK_LINE(446)
					Float x2 = (rx + rw);		HX_STACK_VAR(x2,"x2");
					HX_STACK_LINE(446)
					return ::Math_obj::sqrt(((((x2 - px)) * ((x2 - px))) + (((ry - py)) * ((ry - py)))));
				}
				return null();
			}
		};
		HX_STACK_LINE(446)
		return _Function_2_1::Block(rx,px,ry,rw,py);
	}
	HX_STACK_LINE(448)
	if (((py > ry))){
		struct _Function_2_1{
			inline static Float Block( Float &rx,Float &rh,Float &ry,Float &px,Float &py){
				HX_STACK_PUSH("*::closure","com/stencyl/utils/Utils.hx",448);
				{
					HX_STACK_LINE(448)
					Float y2 = (ry + rh);		HX_STACK_VAR(y2,"y2");
					HX_STACK_LINE(448)
					return ::Math_obj::sqrt(((((rx - px)) * ((rx - px))) + (((y2 - py)) * ((y2 - py)))));
				}
				return null();
			}
		};
		HX_STACK_LINE(448)
		return _Function_2_1::Block(rx,rh,ry,px,py);
	}
	HX_STACK_LINE(449)
	return ::Math_obj::sqrt(((((rx - px)) * ((rx - px))) + (((ry - py)) * ((ry - py)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Utils_obj,distanceRectPoint,return )

Float Utils_obj::clamp( Float value,Float min,Float max){
	HX_STACK_PUSH("Utils::clamp","com/stencyl/utils/Utils.hx",460);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(461)
	if (((max > min))){
		HX_STACK_LINE(463)
		value = (  (((value < max))) ? Float(value) : Float(max) );
		HX_STACK_LINE(464)
		return (  (((value > min))) ? Float(value) : Float(min) );
	}
	HX_STACK_LINE(466)
	value = (  (((value < min))) ? Float(value) : Float(min) );
	HX_STACK_LINE(467)
	return (  (((value > max))) ? Float(value) : Float(max) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,clamp,return )

Void Utils_obj::clampInRect( Dynamic object,Float x,Float y,Float width,Float height,hx::Null< Float >  __o_padding){
Float padding = __o_padding.Default(0);
	HX_STACK_PUSH("Utils::clampInRect","com/stencyl/utils/Utils.hx",479);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(padding,"padding");
{
		HX_STACK_LINE(480)
		object->__FieldRef(HX_CSTRING("x")) = ::com::stencyl::utils::Utils_obj::clamp(object->__Field(HX_CSTRING("x"),true),(x + padding),((x + width) - padding));
		HX_STACK_LINE(481)
		object->__FieldRef(HX_CSTRING("y")) = ::com::stencyl::utils::Utils_obj::clamp(object->__Field(HX_CSTRING("y"),true),(y + padding),((y + height) - padding));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Utils_obj,clampInRect,(void))

Float Utils_obj::scale( Float value,Float min,Float max,Float min2,Float max2){
	HX_STACK_PUSH("Utils::scale","com/stencyl/utils/Utils.hx",494);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_ARG(min2,"min2");
	HX_STACK_ARG(max2,"max2");
	HX_STACK_LINE(494)
	return (min2 + ((Float(((value - min))) / Float(((max - min)))) * ((max2 - min2))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Utils_obj,scale,return )

Float Utils_obj::scaleClamp( Float value,Float min,Float max,Float min2,Float max2){
	HX_STACK_PUSH("Utils::scaleClamp","com/stencyl/utils/Utils.hx",508);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_ARG(min2,"min2");
	HX_STACK_ARG(max2,"max2");
	HX_STACK_LINE(509)
	value = (min2 + ((Float(((value - min))) / Float(((max - min)))) * ((max2 - min2))));
	HX_STACK_LINE(510)
	if (((max2 > min2))){
		HX_STACK_LINE(512)
		value = (  (((value < max2))) ? Float(value) : Float(max2) );
		HX_STACK_LINE(513)
		return (  (((value > min2))) ? Float(value) : Float(min2) );
	}
	HX_STACK_LINE(515)
	value = (  (((value < min2))) ? Float(value) : Float(min2) );
	HX_STACK_LINE(516)
	return (  (((value > max2))) ? Float(value) : Float(max2) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Utils_obj,scaleClamp,return )

int Utils_obj::get_randomSeed( ){
	HX_STACK_PUSH("Utils::get_randomSeed","com/stencyl/utils/Utils.hx",523);
	HX_STACK_LINE(523)
	return ::com::stencyl::utils::Utils_obj::_getSeed;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,get_randomSeed,return )

int Utils_obj::set_randomSeed( int value){
	HX_STACK_PUSH("Utils::set_randomSeed","com/stencyl/utils/Utils.hx",525);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(526)
	::com::stencyl::utils::Utils_obj::_seed = ::Std_obj::_int(::com::stencyl::utils::Utils_obj::clamp(value,1.0,2147483646.0));
	HX_STACK_LINE(527)
	::com::stencyl::utils::Utils_obj::_getSeed = ::com::stencyl::utils::Utils_obj::_seed;
	HX_STACK_LINE(528)
	return ::com::stencyl::utils::Utils_obj::_seed;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,set_randomSeed,return )

Void Utils_obj::randomizeSeed( ){
{
		HX_STACK_PUSH("Utils::randomizeSeed","com/stencyl/utils/Utils.hx",535);
		HX_STACK_LINE(536)
		::com::stencyl::utils::Utils_obj::_seed = ::Std_obj::_int(::com::stencyl::utils::Utils_obj::clamp(::Std_obj::_int((2147483647.0 * ::Math_obj::random())),1.0,2147483646.0));
		HX_STACK_LINE(536)
		::com::stencyl::utils::Utils_obj::_getSeed = ::com::stencyl::utils::Utils_obj::_seed;
		HX_STACK_LINE(536)
		::com::stencyl::utils::Utils_obj::_seed;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,randomizeSeed,(void))

Float Utils_obj::random;

Float Utils_obj::get_random( ){
	HX_STACK_PUSH("Utils::get_random","com/stencyl/utils/Utils.hx",544);
	HX_STACK_LINE(545)
	::com::stencyl::utils::Utils_obj::_seed = ::Std_obj::_int(hx::Mod((::com::stencyl::utils::Utils_obj::_seed * 16807.0),2147483647.0));
	HX_STACK_LINE(546)
	return (Float(::com::stencyl::utils::Utils_obj::_seed) / Float(2147483647.0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,get_random,return )

int Utils_obj::rand( int amount){
	HX_STACK_PUSH("Utils::rand","com/stencyl/utils/Utils.hx",555);
	HX_STACK_ARG(amount,"amount");
	HX_STACK_LINE(556)
	::com::stencyl::utils::Utils_obj::_seed = ::Std_obj::_int(hx::Mod((::com::stencyl::utils::Utils_obj::_seed * 16807.0),2147483647.0));
	HX_STACK_LINE(557)
	return ::Std_obj::_int(((Float(::com::stencyl::utils::Utils_obj::_seed) / Float(2147483647.0)) * amount));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,rand,return )

int Utils_obj::indexOf( Dynamic a,Dynamic v){
	HX_STACK_PUSH("Utils::indexOf","com/stencyl/utils/Utils.hx",561);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(562)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(563)
	{
		HX_STACK_LINE(563)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(563)
		while(((_g < a->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(563)
			Dynamic v2 = a->__GetItem(_g);		HX_STACK_VAR(v2,"v2");
			HX_STACK_LINE(563)
			++(_g);
			HX_STACK_LINE(564)
			if (((v == v2))){
				HX_STACK_LINE(565)
				return i;
			}
			HX_STACK_LINE(566)
			(i)++;
		}
	}
	HX_STACK_LINE(568)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,indexOf,return )

Dynamic Utils_obj::next( Dynamic current,Dynamic options,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(true);
	HX_STACK_PUSH("Utils::next","com/stencyl/utils/Utils.hx",579);
	HX_STACK_ARG(current,"current");
	HX_STACK_ARG(options,"options");
	HX_STACK_ARG(loop,"loop");
{
		HX_STACK_LINE(579)
		if ((loop)){
			HX_STACK_LINE(581)
			return options->__GetItem(hx::Mod(((::com::stencyl::utils::Utils_obj::indexOf(options,current) + (int)1)),options->__Field(HX_CSTRING("length"),true)));
		}
		else{
			HX_STACK_LINE(583)
			return options->__GetItem(::Std_obj::_int(::Math_obj::max((::com::stencyl::utils::Utils_obj::indexOf(options,current) + (int)1),(options->__Field(HX_CSTRING("length"),true) - (int)1))));
		}
		HX_STACK_LINE(579)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,next,return )

Dynamic Utils_obj::prev( Dynamic current,Dynamic options,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(true);
	HX_STACK_PUSH("Utils::prev","com/stencyl/utils/Utils.hx",594);
	HX_STACK_ARG(current,"current");
	HX_STACK_ARG(options,"options");
	HX_STACK_ARG(loop,"loop");
{
		HX_STACK_LINE(594)
		if ((loop)){
			HX_STACK_LINE(596)
			return options->__GetItem(hx::Mod((((::com::stencyl::utils::Utils_obj::indexOf(options,current) - (int)1) + options->__Field(HX_CSTRING("length"),true))),options->__Field(HX_CSTRING("length"),true)));
		}
		else{
			HX_STACK_LINE(598)
			return options->__GetItem(::Std_obj::_int(::Math_obj::max((::com::stencyl::utils::Utils_obj::indexOf(options,current) - (int)1),(int)0)));
		}
		HX_STACK_LINE(594)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,prev,return )

Dynamic Utils_obj::swap( Dynamic current,Dynamic a,Dynamic b){
	HX_STACK_PUSH("Utils::swap","com/stencyl/utils/Utils.hx",609);
	HX_STACK_ARG(current,"current");
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(609)
	return (  (((current == a))) ? Dynamic(b) : Dynamic(a) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,swap,return )

int Utils_obj::getColorRGB( hx::Null< int >  __o_R,hx::Null< int >  __o_G,hx::Null< int >  __o_B){
int R = __o_R.Default(0);
int G = __o_G.Default(0);
int B = __o_B.Default(0);
	HX_STACK_PUSH("Utils::getColorRGB","com/stencyl/utils/Utils.hx",621);
	HX_STACK_ARG(R,"R");
	HX_STACK_ARG(G,"G");
	HX_STACK_ARG(B,"B");
{
		HX_STACK_LINE(621)
		return (int((int((int(R) << int((int)16))) | int((int(G) << int((int)8))))) | int(B));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,getColorRGB,return )

int Utils_obj::getRed( int color){
	HX_STACK_PUSH("Utils::getRed","com/stencyl/utils/Utils.hx",631);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(631)
	return (int((int(color) >> int((int)16))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,getRed,return )

int Utils_obj::getGreen( int color){
	HX_STACK_PUSH("Utils::getGreen","com/stencyl/utils/Utils.hx",641);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(641)
	return (int((int(color) >> int((int)8))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,getGreen,return )

int Utils_obj::getBlue( int color){
	HX_STACK_PUSH("Utils::getBlue","com/stencyl/utils/Utils.hx",651);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(651)
	return (int(color) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,getBlue,return )

Dynamic Utils_obj::convertColor( int color){
	HX_STACK_PUSH("Utils::convertColor","com/stencyl/utils/Utils.hx",659);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(659)
	return color;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,convertColor,return )

Float Utils_obj::timeFlag( ){
	HX_STACK_PUSH("Utils::timeFlag","com/stencyl/utils/Utils.hx",672);
	HX_STACK_LINE(673)
	Float t = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(t,"t");
	Float e = (t - ::com::stencyl::utils::Utils_obj::_time);		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(675)
	::com::stencyl::utils::Utils_obj::_time = t;
	HX_STACK_LINE(676)
	return e;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,timeFlag,return )

Array< int > Utils_obj::frames( int from,int to,hx::Null< int >  __o_skip){
int skip = __o_skip.Default(0);
	HX_STACK_PUSH("Utils::frames","com/stencyl/utils/Utils.hx",686);
	HX_STACK_ARG(from,"from");
	HX_STACK_ARG(to,"to");
	HX_STACK_ARG(skip,"skip");
{
		HX_STACK_LINE(687)
		Array< int > a = Array_obj< int >::__new();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(688)
		(skip)++;
		HX_STACK_LINE(689)
		if (((from < to))){
			HX_STACK_LINE(690)
			while(((from <= to))){
				HX_STACK_LINE(693)
				a->push(from);
				HX_STACK_LINE(694)
				hx::AddEq(from,skip);
			}
		}
		else{
			HX_STACK_LINE(698)
			while(((from >= to))){
				HX_STACK_LINE(701)
				a->push(from);
				HX_STACK_LINE(702)
				hx::SubEq(from,skip);
			}
		}
		HX_STACK_LINE(705)
		return a;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,frames,return )

Void Utils_obj::shuffle( Dynamic a){
{
		HX_STACK_PUSH("Utils::shuffle","com/stencyl/utils/Utils.hx",713);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(713)
		if ((::Std_obj::is(a,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(716)
			int i = a->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(i,"i");
			int j;		HX_STACK_VAR(j,"j");
			Dynamic t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(717)
			while(((--(i) > (int)0))){
				HX_STACK_LINE(719)
				t = a->__GetItem(i);
				struct _Function_3_1{
					inline static int Block( int &i){
						HX_STACK_PUSH("*::closure","com/stencyl/utils/Utils.hx",720);
						{
							HX_STACK_LINE(720)
							::com::stencyl::utils::Utils_obj::_seed = ::Std_obj::_int(hx::Mod((::com::stencyl::utils::Utils_obj::_seed * 16807.0),2147483647.0));
							HX_STACK_LINE(720)
							return ::Std_obj::_int(((Float(::com::stencyl::utils::Utils_obj::_seed) / Float(2147483647.0)) * ((i + (int)1))));
						}
						return null();
					}
				};
				HX_STACK_LINE(720)
				hx::IndexRef((a).mPtr,i) = a->__GetItem(j = _Function_3_1::Block(i));
				HX_STACK_LINE(721)
				hx::IndexRef((a).mPtr,j) = t;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,shuffle,(void))

Float Utils_obj::time;

Float Utils_obj::set_time( Float value){
	HX_STACK_PUSH("Utils::set_time","com/stencyl/utils/Utils.hx",727);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(728)
	::com::stencyl::utils::Utils_obj::_time = value;
	HX_STACK_LINE(729)
	return ::com::stencyl::utils::Utils_obj::_time;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,set_time,return )

Float Utils_obj::_time;

Float Utils_obj::_updateTime;

Float Utils_obj::_renderTime;

Float Utils_obj::_gameTime;

Float Utils_obj::_flashTime;

::haxe::ds::StringMap Utils_obj::_bitmap;

int Utils_obj::_seed;

int Utils_obj::_getSeed;

Float Utils_obj::_volume;

Float Utils_obj::_pan;

::flash::media::SoundTransform Utils_obj::_soundTransform;

Float Utils_obj::DEG;

Float Utils_obj::RAD;

::flash::display::Stage Utils_obj::stage;

::flash::geom::Point Utils_obj::point;

::flash::geom::Point Utils_obj::point2;

::flash::geom::Point Utils_obj::zero;

::flash::geom::Rectangle Utils_obj::rect;

::flash::geom::Matrix Utils_obj::matrix;

::flash::display::Sprite Utils_obj::sprite;

::com::stencyl::models::actor::Collision Utils_obj::collision;


Utils_obj::Utils_obj()
{
}

void Utils_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Utils);
	HX_MARK_END_CLASS();
}

void Utils_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Utils_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return get_pan(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return rate; }
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		if (HX_FIELD_EQ(inName,"rand") ) { return rand_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev_dyn(); }
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"_pan") ) { return _pan; }
		if (HX_FIELD_EQ(inName,"zero") ) { return zero; }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp") ) { return clamp_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"_seed") ) { return _seed; }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"point") ) { return point; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"volume") ) { return get_volume(); }
		if (HX_FIELD_EQ(inName,"choose") ) { return choose_dyn(); }
		if (HX_FIELD_EQ(inName,"random") ) { return inCallProp ? get_random() : random; }
		if (HX_FIELD_EQ(inName,"getRed") ) { return getRed_dyn(); }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames_dyn(); }
		if (HX_FIELD_EQ(inName,"point2") ) { return point2; }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { return elapsed; }
		if (HX_FIELD_EQ(inName,"demouse") ) { return demouse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pan") ) { return get_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return set_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"angleXY") ) { return angleXY_dyn(); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"getBlue") ) { return getBlue_dyn(); }
		if (HX_FIELD_EQ(inName,"shuffle") ) { return shuffle_dyn(); }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return _bitmap; }
		if (HX_FIELD_EQ(inName,"_volume") ) { return _volume; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"approach") ) { return approach_dyn(); }
		if (HX_FIELD_EQ(inName,"anchorTo") ) { return anchorTo_dyn(); }
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"getGreen") ) { return getGreen_dyn(); }
		if (HX_FIELD_EQ(inName,"timeFlag") ) { return timeFlag_dyn(); }
		if (HX_FIELD_EQ(inName,"set_time") ) { return set_time_dyn(); }
		if (HX_FIELD_EQ(inName,"_getSeed") ) { return _getSeed; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toBoolean") ) { return toBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"setCamera") ) { return setCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"colorLerp") ) { return colorLerp_dyn(); }
		if (HX_FIELD_EQ(inName,"_gameTime") ) { return _gameTime; }
		if (HX_FIELD_EQ(inName,"collision") ) { return collision; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_volume") ) { return get_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleClamp") ) { return scaleClamp_dyn(); }
		if (HX_FIELD_EQ(inName,"randomSeed") ) { return get_randomSeed(); }
		if (HX_FIELD_EQ(inName,"get_random") ) { return get_random_dyn(); }
		if (HX_FIELD_EQ(inName,"_flashTime") ) { return _flashTime; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"INTEGER_MAX") ) { return INTEGER_MAX; }
		if (HX_FIELD_EQ(inName,"resetCamera") ) { return resetCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"stepTowards") ) { return stepTowards_dyn(); }
		if (HX_FIELD_EQ(inName,"clampInRect") ) { return clampInRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorRGB") ) { return getColorRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { return _updateTime; }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { return _renderTime; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rotateAround") ) { return rotateAround_dyn(); }
		if (HX_FIELD_EQ(inName,"convertColor") ) { return convertColor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"distanceRects") ) { return distanceRects_dyn(); }
		if (HX_FIELD_EQ(inName,"randomizeSeed") ) { return randomizeSeed_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_randomSeed") ) { return get_randomSeed_dyn(); }
		if (HX_FIELD_EQ(inName,"set_randomSeed") ) { return set_randomSeed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceSquared") ) { return distanceSquared_dyn(); }
		if (HX_FIELD_EQ(inName,"_soundTransform") ) { return _soundTransform; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"NUMBER_MAX_VALUE") ) { return NUMBER_MAX_VALUE; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"removeAllChildren") ) { return removeAllChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceRectPoint") ) { return distanceRectPoint_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"removeValueFromArray") ) { return removeValueFromArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Utils_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return set_pan(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp) return set_time(inValue);time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pan") ) { _pan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zero") ) { zero=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_seed") ) { _seed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::flash::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { return set_volume(inValue); }
		if (HX_FIELD_EQ(inName,"random") ) { random=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point2") ) { point2=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volume") ) { _volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_getSeed") ) { _getSeed=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gameTime") ) { _gameTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collision") ) { collision=inValue.Cast< ::com::stencyl::models::actor::Collision >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"randomSeed") ) { return set_randomSeed(inValue); }
		if (HX_FIELD_EQ(inName,"_flashTime") ) { _flashTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"INTEGER_MAX") ) { INTEGER_MAX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { _updateTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { _renderTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_soundTransform") ) { _soundTransform=inValue.Cast< ::flash::media::SoundTransform >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"NUMBER_MAX_VALUE") ) { NUMBER_MAX_VALUE=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Utils_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("INTEGER_MAX"),
	HX_CSTRING("NUMBER_MAX_VALUE"),
	HX_CSTRING("blackColor"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("elapsed"),
	HX_CSTRING("rate"),
	HX_CSTRING("bounds"),
	HX_CSTRING("camera"),
	HX_CSTRING("toBoolean"),
	HX_CSTRING("clear"),
	HX_CSTRING("removeValueFromArray"),
	HX_CSTRING("contains"),
	HX_CSTRING("removeAllChildren"),
	HX_CSTRING("demouse"),
	HX_CSTRING("setCamera"),
	HX_CSTRING("resetCamera"),
	HX_CSTRING("get_volume"),
	HX_CSTRING("set_volume"),
	HX_CSTRING("get_pan"),
	HX_CSTRING("set_pan"),
	HX_CSTRING("choose"),
	HX_CSTRING("sign"),
	HX_CSTRING("approach"),
	HX_CSTRING("lerp"),
	HX_CSTRING("colorLerp"),
	HX_CSTRING("stepTowards"),
	HX_CSTRING("anchorTo"),
	HX_CSTRING("angle"),
	HX_CSTRING("angleXY"),
	HX_CSTRING("rotateAround"),
	HX_CSTRING("distance"),
	HX_CSTRING("distanceSquared"),
	HX_CSTRING("distanceRects"),
	HX_CSTRING("distanceRectPoint"),
	HX_CSTRING("clamp"),
	HX_CSTRING("clampInRect"),
	HX_CSTRING("scale"),
	HX_CSTRING("scaleClamp"),
	HX_CSTRING("get_randomSeed"),
	HX_CSTRING("set_randomSeed"),
	HX_CSTRING("randomizeSeed"),
	HX_CSTRING("random"),
	HX_CSTRING("get_random"),
	HX_CSTRING("rand"),
	HX_CSTRING("indexOf"),
	HX_CSTRING("next"),
	HX_CSTRING("prev"),
	HX_CSTRING("swap"),
	HX_CSTRING("getColorRGB"),
	HX_CSTRING("getRed"),
	HX_CSTRING("getGreen"),
	HX_CSTRING("getBlue"),
	HX_CSTRING("convertColor"),
	HX_CSTRING("timeFlag"),
	HX_CSTRING("frames"),
	HX_CSTRING("shuffle"),
	HX_CSTRING("time"),
	HX_CSTRING("set_time"),
	HX_CSTRING("_time"),
	HX_CSTRING("_updateTime"),
	HX_CSTRING("_renderTime"),
	HX_CSTRING("_gameTime"),
	HX_CSTRING("_flashTime"),
	HX_CSTRING("_bitmap"),
	HX_CSTRING("_seed"),
	HX_CSTRING("_getSeed"),
	HX_CSTRING("_volume"),
	HX_CSTRING("_pan"),
	HX_CSTRING("_soundTransform"),
	HX_CSTRING("DEG"),
	HX_CSTRING("RAD"),
	HX_CSTRING("stage"),
	HX_CSTRING("point"),
	HX_CSTRING("point2"),
	HX_CSTRING("zero"),
	HX_CSTRING("rect"),
	HX_CSTRING("matrix"),
	HX_CSTRING("sprite"),
	HX_CSTRING("collision"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utils_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Utils_obj::INTEGER_MAX,"INTEGER_MAX");
	HX_MARK_MEMBER_NAME(Utils_obj::NUMBER_MAX_VALUE,"NUMBER_MAX_VALUE");
	HX_MARK_MEMBER_NAME(Utils_obj::blackColor,"blackColor");
	HX_MARK_MEMBER_NAME(Utils_obj::width,"width");
	HX_MARK_MEMBER_NAME(Utils_obj::height,"height");
	HX_MARK_MEMBER_NAME(Utils_obj::elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(Utils_obj::rate,"rate");
	HX_MARK_MEMBER_NAME(Utils_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(Utils_obj::camera,"camera");
	HX_MARK_MEMBER_NAME(Utils_obj::random,"random");
	HX_MARK_MEMBER_NAME(Utils_obj::time,"time");
	HX_MARK_MEMBER_NAME(Utils_obj::_time,"_time");
	HX_MARK_MEMBER_NAME(Utils_obj::_updateTime,"_updateTime");
	HX_MARK_MEMBER_NAME(Utils_obj::_renderTime,"_renderTime");
	HX_MARK_MEMBER_NAME(Utils_obj::_gameTime,"_gameTime");
	HX_MARK_MEMBER_NAME(Utils_obj::_flashTime,"_flashTime");
	HX_MARK_MEMBER_NAME(Utils_obj::_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(Utils_obj::_seed,"_seed");
	HX_MARK_MEMBER_NAME(Utils_obj::_getSeed,"_getSeed");
	HX_MARK_MEMBER_NAME(Utils_obj::_volume,"_volume");
	HX_MARK_MEMBER_NAME(Utils_obj::_pan,"_pan");
	HX_MARK_MEMBER_NAME(Utils_obj::_soundTransform,"_soundTransform");
	HX_MARK_MEMBER_NAME(Utils_obj::DEG,"DEG");
	HX_MARK_MEMBER_NAME(Utils_obj::RAD,"RAD");
	HX_MARK_MEMBER_NAME(Utils_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(Utils_obj::point,"point");
	HX_MARK_MEMBER_NAME(Utils_obj::point2,"point2");
	HX_MARK_MEMBER_NAME(Utils_obj::zero,"zero");
	HX_MARK_MEMBER_NAME(Utils_obj::rect,"rect");
	HX_MARK_MEMBER_NAME(Utils_obj::matrix,"matrix");
	HX_MARK_MEMBER_NAME(Utils_obj::sprite,"sprite");
	HX_MARK_MEMBER_NAME(Utils_obj::collision,"collision");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utils_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Utils_obj::INTEGER_MAX,"INTEGER_MAX");
	HX_VISIT_MEMBER_NAME(Utils_obj::NUMBER_MAX_VALUE,"NUMBER_MAX_VALUE");
	HX_VISIT_MEMBER_NAME(Utils_obj::blackColor,"blackColor");
	HX_VISIT_MEMBER_NAME(Utils_obj::width,"width");
	HX_VISIT_MEMBER_NAME(Utils_obj::height,"height");
	HX_VISIT_MEMBER_NAME(Utils_obj::elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(Utils_obj::rate,"rate");
	HX_VISIT_MEMBER_NAME(Utils_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(Utils_obj::camera,"camera");
	HX_VISIT_MEMBER_NAME(Utils_obj::random,"random");
	HX_VISIT_MEMBER_NAME(Utils_obj::time,"time");
	HX_VISIT_MEMBER_NAME(Utils_obj::_time,"_time");
	HX_VISIT_MEMBER_NAME(Utils_obj::_updateTime,"_updateTime");
	HX_VISIT_MEMBER_NAME(Utils_obj::_renderTime,"_renderTime");
	HX_VISIT_MEMBER_NAME(Utils_obj::_gameTime,"_gameTime");
	HX_VISIT_MEMBER_NAME(Utils_obj::_flashTime,"_flashTime");
	HX_VISIT_MEMBER_NAME(Utils_obj::_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(Utils_obj::_seed,"_seed");
	HX_VISIT_MEMBER_NAME(Utils_obj::_getSeed,"_getSeed");
	HX_VISIT_MEMBER_NAME(Utils_obj::_volume,"_volume");
	HX_VISIT_MEMBER_NAME(Utils_obj::_pan,"_pan");
	HX_VISIT_MEMBER_NAME(Utils_obj::_soundTransform,"_soundTransform");
	HX_VISIT_MEMBER_NAME(Utils_obj::DEG,"DEG");
	HX_VISIT_MEMBER_NAME(Utils_obj::RAD,"RAD");
	HX_VISIT_MEMBER_NAME(Utils_obj::stage,"stage");
	HX_VISIT_MEMBER_NAME(Utils_obj::point,"point");
	HX_VISIT_MEMBER_NAME(Utils_obj::point2,"point2");
	HX_VISIT_MEMBER_NAME(Utils_obj::zero,"zero");
	HX_VISIT_MEMBER_NAME(Utils_obj::rect,"rect");
	HX_VISIT_MEMBER_NAME(Utils_obj::matrix,"matrix");
	HX_VISIT_MEMBER_NAME(Utils_obj::sprite,"sprite");
	HX_VISIT_MEMBER_NAME(Utils_obj::collision,"collision");
};

Class Utils_obj::__mClass;

void Utils_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.utils.Utils"), hx::TCanCast< Utils_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Utils_obj::__boot()
{
	INTEGER_MAX= (int)100000000;
	NUMBER_MAX_VALUE= 1.79769313486231e+308;
	blackColor= (int)-16777216;
	rate= (int)1;
	camera= ::flash::geom::Point_obj::__new(null(),null());
	_bitmap= ::haxe::ds::StringMap_obj::__new();
	_seed= (int)0;
	_volume= (int)1;
	_pan= (int)0;
	_soundTransform= ::flash::media::SoundTransform_obj::__new(null(),null());
	DEG= (Float((int)180) / Float(3.14159));
	RAD= (Float(3.14159) / Float((int)180));
	point= ::flash::geom::Point_obj::__new(null(),null());
	point2= ::flash::geom::Point_obj::__new(null(),null());
	zero= ::flash::geom::Point_obj::__new(null(),null());
	rect= ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	matrix= ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	sprite= ::flash::display::Sprite_obj::__new();
	collision= ::com::stencyl::models::actor::Collision_obj::__new();
}

} // end namespace com
} // end namespace stencyl
} // end namespace utils
