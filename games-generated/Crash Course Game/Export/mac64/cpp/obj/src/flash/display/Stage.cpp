#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
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
#ifndef INCLUDED_flash_display_StageAlign
#include <flash/display/StageAlign.h>
#endif
#ifndef INCLUDED_flash_display_StageDisplayState
#include <flash/display/StageDisplayState.h>
#endif
#ifndef INCLUDED_flash_display_StageQuality
#include <flash/display/StageQuality.h>
#endif
#ifndef INCLUDED_flash_display_StageScaleMode
#include <flash/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_flash_display_TouchInfo
#include <flash/display/TouchInfo.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_FocusEvent
#include <flash/events/FocusEvent.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_media_SoundChannel
#include <flash/media/SoundChannel.h>
#endif
#ifndef INCLUDED_flash_net_URLLoader
#include <flash/net/URLLoader.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl_events_JoystickEvent
#include <openfl/events/JoystickEvent.h>
#endif
#ifndef INCLUDED_openfl_events_SystemEvent
#include <openfl/events/SystemEvent.h>
#endif
namespace flash{
namespace display{

Void Stage_obj::__construct(Dynamic handle,int width,int height)
{
HX_STACK_PUSH("Stage::new","flash/display/Stage.hx",84);
{
	HX_STACK_LINE(86)
	super::__construct(handle,HX_CSTRING("Stage"));
	HX_STACK_LINE(88)
	this->__mouseOverObjects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(89)
	this->__focusOverObjects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(90)
	this->active = true;
	HX_STACK_LINE(91)
	this->pauseWhenDeactivated = true;
	HX_STACK_LINE(97)
	this->renderRequest = null();
	HX_STACK_LINE(100)
	::flash::display::Stage_obj::nme_set_stage_handler(this->__handle,this->__processStageEvent_dyn(),width,height);
	HX_STACK_LINE(101)
	this->__invalid = false;
	HX_STACK_LINE(102)
	this->__lastRender = (int)0;
	HX_STACK_LINE(103)
	this->__lastDown = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(104)
	this->__lastClickTime = 0.0;
	HX_STACK_LINE(105)
	this->__nextRender = (int)0;
	HX_STACK_LINE(106)
	this->set_frameRate((int)100);
	HX_STACK_LINE(107)
	this->__touchInfo = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(108)
	this->__joyAxisData = ::haxe::ds::IntMap_obj::__new();
}
;
	return null();
}

Stage_obj::~Stage_obj() { }

Dynamic Stage_obj::__CreateEmpty() { return  new Stage_obj; }
hx::ObjectPtr< Stage_obj > Stage_obj::__new(Dynamic handle,int width,int height)
{  hx::ObjectPtr< Stage_obj > result = new Stage_obj();
	result->__construct(handle,width,height);
	return result;}

Dynamic Stage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage_obj > result = new Stage_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int Stage_obj::get_stageWidth( ){
	HX_STACK_PUSH("Stage::get_stageWidth","flash/display/Stage.hx",1304);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1304)
	return ::Std_obj::_int(hx::TCast< Float >::cast(::flash::display::Stage_obj::nme_stage_get_stage_width(this->__handle)));
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_stageWidth,return )

int Stage_obj::get_stageHeight( ){
	HX_STACK_PUSH("Stage::get_stageHeight","flash/display/Stage.hx",1297);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1297)
	return ::Std_obj::_int(hx::TCast< Float >::cast(::flash::display::Stage_obj::nme_stage_get_stage_height(this->__handle)));
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_stageHeight,return )

bool Stage_obj::set_stageFocusRect( bool value){
	HX_STACK_PUSH("Stage::set_stageFocusRect","flash/display/Stage.hx",1289);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(1291)
	::flash::display::Stage_obj::nme_stage_set_focus_rect(this->__handle,value);
	HX_STACK_LINE(1292)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_stageFocusRect,return )

bool Stage_obj::get_stageFocusRect( ){
	HX_STACK_PUSH("Stage::get_stageFocusRect","flash/display/Stage.hx",1288);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1288)
	return ::flash::display::Stage_obj::nme_stage_get_focus_rect(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_stageFocusRect,return )

::flash::display::Stage Stage_obj::get_stage( ){
	HX_STACK_PUSH("Stage::get_stage","flash/display/Stage.hx",1281);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1281)
	return hx::ObjectPtr<OBJ_>(this);
}


::flash::display::StageScaleMode Stage_obj::set_scaleMode( ::flash::display::StageScaleMode value){
	HX_STACK_PUSH("Stage::set_scaleMode","flash/display/Stage.hx",1273);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(1275)
	::flash::display::Stage_obj::nme_stage_set_scale_mode(this->__handle,value->__Index());
	HX_STACK_LINE(1276)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_scaleMode,return )

::flash::display::StageScaleMode Stage_obj::get_scaleMode( ){
	HX_STACK_PUSH("Stage::get_scaleMode","flash/display/Stage.hx",1265);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1267)
	int i = ::flash::display::Stage_obj::nme_stage_get_scale_mode(this->__handle);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1268)
	return ::Type_obj::createEnumIndex(hx::ClassOf< ::flash::display::StageScaleMode >(),i,null());
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_scaleMode,return )

::flash::display::StageQuality Stage_obj::set_quality( ::flash::display::StageQuality value){
	HX_STACK_PUSH("Stage::set_quality","flash/display/Stage.hx",1257);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(1259)
	::flash::display::Stage_obj::nme_stage_set_quality(this->__handle,value->__Index());
	HX_STACK_LINE(1260)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_quality,return )

::flash::display::StageQuality Stage_obj::get_quality( ){
	HX_STACK_PUSH("Stage::get_quality","flash/display/Stage.hx",1249);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1251)
	int i = ::flash::display::Stage_obj::nme_stage_get_quality(this->__handle);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1252)
	return ::Type_obj::createEnumIndex(hx::ClassOf< ::flash::display::StageQuality >(),i,null());
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_quality,return )

bool Stage_obj::get_isOpenGL( ){
	HX_STACK_PUSH("Stage::get_isOpenGL","flash/display/Stage.hx",1242);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1242)
	return ::flash::display::Stage_obj::nme_stage_is_opengl(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_isOpenGL,return )

Float Stage_obj::set_frameRate( Float value){
	HX_STACK_PUSH("Stage::set_frameRate","flash/display/Stage.hx",1232);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(1234)
	this->frameRate = value;
	HX_STACK_LINE(1235)
	this->__framePeriod = (  (((this->frameRate <= (int)0))) ? Float(this->frameRate) : Float((Float(1.0) / Float(this->frameRate))) );
	HX_STACK_LINE(1236)
	this->__nextRender = (this->__lastRender + this->__framePeriod);
	HX_STACK_LINE(1237)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_frameRate,return )

::flash::display::InteractiveObject Stage_obj::set_focus( ::flash::display::InteractiveObject value){
	HX_STACK_PUSH("Stage::set_focus","flash/display/Stage.hx",1215);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(1217)
	if (((value == null()))){
		HX_STACK_LINE(1217)
		::flash::display::Stage_obj::nme_stage_set_focus(this->__handle,null(),(int)0);
	}
	else{
		HX_STACK_LINE(1221)
		::flash::display::Stage_obj::nme_stage_set_focus(this->__handle,value->__handle,(int)0);
	}
	HX_STACK_LINE(1227)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_focus,return )

::flash::display::InteractiveObject Stage_obj::get_focus( ){
	HX_STACK_PUSH("Stage::get_focus","flash/display/Stage.hx",1206);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1208)
	int id = ::flash::display::Stage_obj::nme_stage_get_focus_id(this->__handle);		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(1209)
	::flash::display::DisplayObject object = this->__findByID(id);		HX_STACK_VAR(object,"object");
	HX_STACK_LINE(1210)
	return object;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_focus,return )

Float Stage_obj::get_dpiScale( ){
	HX_STACK_PUSH("Stage::get_dpiScale","flash/display/Stage.hx",1199);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1199)
	return ::flash::display::Stage_obj::nme_stage_get_dpi_scale(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_dpiScale,return )

::flash::display::StageDisplayState Stage_obj::set_displayState( ::flash::display::StageDisplayState value){
	HX_STACK_PUSH("Stage::set_displayState","flash/display/Stage.hx",1191);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(1193)
	::flash::display::Stage_obj::nme_stage_set_display_state(this->__handle,value->__Index());
	HX_STACK_LINE(1194)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_displayState,return )

::flash::display::StageDisplayState Stage_obj::get_displayState( ){
	HX_STACK_PUSH("Stage::get_displayState","flash/display/Stage.hx",1183);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1185)
	int i = ::flash::display::Stage_obj::nme_stage_get_display_state(this->__handle);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1186)
	return ::Type_obj::createEnumIndex(hx::ClassOf< ::flash::display::StageDisplayState >(),i,null());
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_displayState,return )

::flash::display::StageAlign Stage_obj::set_align( ::flash::display::StageAlign value){
	HX_STACK_PUSH("Stage::set_align","flash/display/Stage.hx",1175);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(1177)
	::flash::display::Stage_obj::nme_stage_set_align(this->__handle,value->__Index());
	HX_STACK_LINE(1178)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_align,return )

::flash::display::StageAlign Stage_obj::get_align( ){
	HX_STACK_PUSH("Stage::get_align","flash/display/Stage.hx",1167);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1169)
	int i = ::flash::display::Stage_obj::nme_stage_get_align(this->__handle);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1170)
	return ::Type_obj::createEnumIndex(hx::ClassOf< ::flash::display::StageAlign >(),i,null());
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_align,return )

Float Stage_obj::__updateNextWake( ){
	HX_STACK_PUSH("Stage::__updateNextWake","flash/display/Stage.hx",1137);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1139)
	Float nextWake = ::haxe::Timer_obj::__nextWake(315000000.0);		HX_STACK_VAR(nextWake,"nextWake");
	HX_STACK_LINE(1141)
	if (((bool((nextWake > 0.001)) && bool((::flash::media::SoundChannel_obj::__dynamicSoundCount > (int)0))))){
		HX_STACK_LINE(1141)
		nextWake = 0.001;
	}
	HX_STACK_LINE(1147)
	if (((bool((nextWake > 0.02)) && bool(((bool(::flash::media::SoundChannel_obj::__completePending()) || bool(::flash::net::URLLoader_obj::__loadPending()))))))){
		HX_STACK_LINE(1147)
		nextWake = (  (((bool(this->active) || bool(!(this->pauseWhenDeactivated))))) ? Float(0.020) : Float(0.500) );
	}
	HX_STACK_LINE(1153)
	nextWake = this->__nextFrameDue(nextWake);
	HX_STACK_LINE(1154)
	::flash::display::Stage_obj::nme_stage_set_next_wake(this->__handle,nextWake);
	HX_STACK_LINE(1155)
	return nextWake;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,__updateNextWake,return )

Void Stage_obj::__stopDrag( ::flash::display::Sprite sprite){
{
		HX_STACK_PUSH("Stage::__stopDrag","flash/display/Stage.hx",1129);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sprite,"sprite");
		HX_STACK_LINE(1131)
		this->__dragBounds = null();
		HX_STACK_LINE(1132)
		this->__dragObject = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__stopDrag,(void))

Void Stage_obj::__startDrag( ::flash::display::Sprite sprite,bool lockCenter,::flash::geom::Rectangle bounds){
{
		HX_STACK_PUSH("Stage::__startDrag","flash/display/Stage.hx",1096);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sprite,"sprite");
		HX_STACK_ARG(lockCenter,"lockCenter");
		HX_STACK_ARG(bounds,"bounds");
		HX_STACK_LINE(1098)
		this->__dragBounds = (  (((bounds == null()))) ? ::flash::geom::Rectangle(null()) : ::flash::geom::Rectangle(bounds->clone()) );
		HX_STACK_LINE(1099)
		this->__dragObject = sprite;
		HX_STACK_LINE(1101)
		if (((this->__dragObject != null()))){
			HX_STACK_LINE(1101)
			if ((lockCenter)){
				HX_STACK_LINE(1105)
				this->__dragOffsetX = (Float(-(this->__dragObject->get_width())) / Float((int)2));
				HX_STACK_LINE(1106)
				this->__dragOffsetY = (Float(-(this->__dragObject->get_height())) / Float((int)2));
			}
			else{
				HX_STACK_LINE(1110)
				::flash::geom::Point mouse = ::flash::geom::Point_obj::__new(this->get_mouseX(),this->get_mouseY());		HX_STACK_VAR(mouse,"mouse");
				HX_STACK_LINE(1111)
				::flash::display::DisplayObjectContainer parent = this->__dragObject->get_parent();		HX_STACK_VAR(parent,"parent");
				HX_STACK_LINE(1113)
				if (((parent != null()))){
					HX_STACK_LINE(1113)
					mouse = parent->globalToLocal(mouse);
				}
				HX_STACK_LINE(1119)
				this->__dragOffsetX = (this->__dragObject->get_x() - mouse->x);
				HX_STACK_LINE(1120)
				this->__dragOffsetY = (this->__dragObject->get_y() - mouse->y);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__startDrag,(void))

Void Stage_obj::__setActive( bool value){
{
		HX_STACK_PUSH("Stage::__setActive","flash/display/Stage.hx",1069);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(1069)
		if (((this->active != value))){
			HX_STACK_LINE(1073)
			this->active = value;
			HX_STACK_LINE(1075)
			if ((!(this->active))){
				HX_STACK_LINE(1077)
				this->__lastRender = ::haxe::Timer_obj::stamp();
				HX_STACK_LINE(1078)
				this->__nextRender = (this->__lastRender + this->__framePeriod);
			}
			HX_STACK_LINE(1082)
			::flash::events::Event event = ::flash::events::Event_obj::__new((  ((this->active)) ? ::String(::flash::events::Event_obj::ACTIVATE) : ::String(::flash::events::Event_obj::DEACTIVATE) ),null(),null());		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(1083)
			this->__broadcast(event);
			HX_STACK_LINE(1085)
			if ((value)){
				HX_STACK_LINE(1085)
				this->__pollTimers();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__setActive,(void))

Void Stage_obj::__render( bool sendEnterFrame){
{
		HX_STACK_PUSH("Stage::__render","flash/display/Stage.hx",1043);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sendEnterFrame,"sendEnterFrame");
		HX_STACK_LINE(1045)
		if ((!(this->active))){
			HX_STACK_LINE(1045)
			return null();
		}
		HX_STACK_LINE(1051)
		if ((sendEnterFrame)){
			HX_STACK_LINE(1051)
			this->__broadcast(::flash::events::Event_obj::__new(::flash::events::Event_obj::ENTER_FRAME,null(),null()));
		}
		HX_STACK_LINE(1057)
		if ((this->__invalid)){
			HX_STACK_LINE(1059)
			this->__invalid = false;
			HX_STACK_LINE(1060)
			this->__broadcast(::flash::events::Event_obj::__new(::flash::events::Event_obj::RENDER,null(),null()));
		}
		HX_STACK_LINE(1064)
		::flash::display::Stage_obj::nme_render_stage(this->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__render,(void))

Void Stage_obj::__pollTimers( ){
{
		HX_STACK_PUSH("Stage::__pollTimers","flash/display/Stage.hx",1033);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1035)
		::haxe::Timer_obj::__checkTimers();
		HX_STACK_LINE(1036)
		::flash::media::SoundChannel_obj::__pollComplete();
		HX_STACK_LINE(1037)
		::flash::net::URLLoader_obj::__pollData();
		HX_STACK_LINE(1038)
		this->__checkRender();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,__pollTimers,(void))

Void Stage_obj::__onTouch( Dynamic event,::String type,::flash::display::TouchInfo touchInfo){
{
		HX_STACK_PUSH("Stage::__onTouch","flash/display/Stage.hx",986);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(touchInfo,"touchInfo");
		HX_STACK_LINE(988)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(989)
		::flash::display::DisplayObject object = this->__findByID(event->__Field(HX_CSTRING("id"),true));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(991)
		if (((object != null()))){
			HX_STACK_LINE(991)
			object->__getInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(997)
		if (((stack->length > (int)0))){
			HX_STACK_LINE(999)
			::flash::display::InteractiveObject object1 = stack->__get((int)0).StaticCast< ::flash::display::InteractiveObject >();		HX_STACK_VAR(object1,"object1");
			HX_STACK_LINE(1000)
			stack->reverse();
			HX_STACK_LINE(1001)
			::flash::geom::Point local = object1->globalToLocal(::flash::geom::Point_obj::__new(event->__Field(HX_CSTRING("x"),true),event->__Field(HX_CSTRING("y"),true)));		HX_STACK_VAR(local,"local");
			HX_STACK_LINE(1002)
			::flash::events::TouchEvent touchEvent = ::flash::events::TouchEvent_obj::__create(type,event,local,object1,event->__Field(HX_CSTRING("sx"),true),event->__Field(HX_CSTRING("sy"),true));		HX_STACK_VAR(touchEvent,"touchEvent");
			HX_STACK_LINE(1003)
			touchEvent->touchPointID = event->__Field(HX_CSTRING("value"),true);
			HX_STACK_LINE(1004)
			touchEvent->isPrimaryTouchPoint = (((int(event->__Field(HX_CSTRING("flags"),true)) & int((int)32768))) > (int)0);
			HX_STACK_LINE(1005)
			this->__checkInOuts(touchEvent,stack,touchInfo);
			HX_STACK_LINE(1006)
			object1->__fireEvent(touchEvent);
			HX_STACK_LINE(1008)
			if (((bool(touchEvent->isPrimaryTouchPoint) && bool((type == ::flash::events::TouchEvent_obj::TOUCH_MOVE))))){
				HX_STACK_LINE(1010)
				if (((this->__dragObject != null()))){
					HX_STACK_LINE(1010)
					this->__drag(::flash::geom::Point_obj::__new(event->__Field(HX_CSTRING("x"),true),event->__Field(HX_CSTRING("y"),true)));
				}
				HX_STACK_LINE(1016)
				::flash::events::MouseEvent mouseEvent = ::flash::events::MouseEvent_obj::__create(::flash::events::MouseEvent_obj::MOUSE_MOVE,event,local,object1);		HX_STACK_VAR(mouseEvent,"mouseEvent");
				HX_STACK_LINE(1017)
				object1->__fireEvent(mouseEvent);
			}
		}
		else{
			HX_STACK_LINE(1023)
			::flash::events::TouchEvent touchEvent = ::flash::events::TouchEvent_obj::__create(type,event,::flash::geom::Point_obj::__new(event->__Field(HX_CSTRING("x"),true),event->__Field(HX_CSTRING("y"),true)),null(),event->__Field(HX_CSTRING("sx"),true),event->__Field(HX_CSTRING("sy"),true));		HX_STACK_VAR(touchEvent,"touchEvent");
			HX_STACK_LINE(1024)
			touchEvent->touchPointID = event->__Field(HX_CSTRING("value"),true);
			HX_STACK_LINE(1025)
			touchEvent->isPrimaryTouchPoint = (((int(event->__Field(HX_CSTRING("flags"),true)) & int((int)32768))) > (int)0);
			HX_STACK_LINE(1026)
			this->__checkInOuts(touchEvent,stack,touchInfo);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__onTouch,(void))

Void Stage_obj::__onSysWM( Dynamic event){
{
		HX_STACK_PUSH("Stage::__onSysWM","flash/display/Stage.hx",978);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(980)
		::openfl::events::SystemEvent event1 = ::openfl::events::SystemEvent_obj::__new(::openfl::events::SystemEvent_obj::SYSTEM,false,false,event->__Field(HX_CSTRING("value"),true));		HX_STACK_VAR(event1,"event1");
		HX_STACK_LINE(981)
		this->__dispatchEvent(event1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__onSysWM,(void))

Void Stage_obj::__onResize( Float width,Float height){
{
		HX_STACK_PUSH("Stage::__onResize","flash/display/Stage.hx",970);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(972)
		::flash::events::Event event = ::flash::events::Event_obj::__new(::flash::events::Event_obj::RESIZE,null(),null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(973)
		this->__dispatchEvent(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onResize,(void))

Void Stage_obj::__onMouse( Dynamic event,::String type,bool fromMouse){
{
		HX_STACK_PUSH("Stage::__onMouse","flash/display/Stage.hx",853);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(fromMouse,"fromMouse");
		HX_STACK_LINE(855)
		int button = event->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(857)
		if ((!(fromMouse))){
			HX_STACK_LINE(858)
			button = (int)0;
		}
		HX_STACK_LINE(860)
		int wheel = (int)0;		HX_STACK_VAR(wheel,"wheel");
		HX_STACK_LINE(862)
		if (((type == ::flash::events::MouseEvent_obj::MOUSE_DOWN))){
			HX_STACK_LINE(864)
			if (((button > (int)2))){
				HX_STACK_LINE(864)
				return null();
			}
			HX_STACK_LINE(870)
			type = ::flash::display::Stage_obj::sDownEvents->__get(button);
		}
		else{
			HX_STACK_LINE(872)
			if (((type == ::flash::events::MouseEvent_obj::MOUSE_UP))){
				HX_STACK_LINE(872)
				if (((button > (int)2))){
					HX_STACK_LINE(876)
					type = ::flash::events::MouseEvent_obj::MOUSE_WHEEL;
					HX_STACK_LINE(877)
					wheel = (  (((button == (int)3))) ? int((int)1) : int((int)-1) );
				}
				else{
					HX_STACK_LINE(879)
					type = ::flash::display::Stage_obj::sUpEvents->__get(button);
				}
			}
		}
		HX_STACK_LINE(887)
		if (((this->__dragObject != null()))){
			HX_STACK_LINE(887)
			this->__drag(::flash::geom::Point_obj::__new(event->__Field(HX_CSTRING("x"),true),event->__Field(HX_CSTRING("y"),true)));
		}
		HX_STACK_LINE(893)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(894)
		::flash::display::DisplayObject object = this->__findByID(event->__Field(HX_CSTRING("id"),true));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(896)
		if (((object != null()))){
			HX_STACK_LINE(896)
			object->__getInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(902)
		::flash::geom::Point local = null();		HX_STACK_VAR(local,"local");
		HX_STACK_LINE(904)
		if (((stack->length > (int)0))){
			HX_STACK_LINE(906)
			::flash::display::InteractiveObject object1 = stack->__get((int)0).StaticCast< ::flash::display::InteractiveObject >();		HX_STACK_VAR(object1,"object1");
			HX_STACK_LINE(907)
			stack->reverse();
			HX_STACK_LINE(908)
			local = object1->globalToLocal(::flash::geom::Point_obj::__new(event->__Field(HX_CSTRING("x"),true),event->__Field(HX_CSTRING("y"),true)));
			HX_STACK_LINE(909)
			::flash::events::MouseEvent mouseEvent = ::flash::events::MouseEvent_obj::__create(type,event,local,object1);		HX_STACK_VAR(mouseEvent,"mouseEvent");
			HX_STACK_LINE(910)
			mouseEvent->delta = wheel;
			HX_STACK_LINE(912)
			if ((fromMouse)){
				HX_STACK_LINE(912)
				this->__checkInOuts(mouseEvent,stack,null());
			}
			HX_STACK_LINE(918)
			object1->__fireEvent(mouseEvent);
		}
		else{
			HX_STACK_LINE(922)
			local = ::flash::geom::Point_obj::__new(event->__Field(HX_CSTRING("x"),true),event->__Field(HX_CSTRING("y"),true));
			HX_STACK_LINE(923)
			::flash::events::MouseEvent mouseEvent = ::flash::events::MouseEvent_obj::__create(type,event,local,null());		HX_STACK_VAR(mouseEvent,"mouseEvent");
			HX_STACK_LINE(924)
			mouseEvent->delta = wheel;
			HX_STACK_LINE(926)
			if ((fromMouse)){
				HX_STACK_LINE(926)
				this->__checkInOuts(mouseEvent,stack,null());
			}
		}
		HX_STACK_LINE(934)
		::flash::display::InteractiveObject clickObject = (  (((stack->length > (int)0))) ? ::flash::display::InteractiveObject(stack->__get((stack->length - (int)1)).StaticCast< ::flash::display::InteractiveObject >()) : ::flash::display::InteractiveObject(hx::ObjectPtr<OBJ_>(this)) );		HX_STACK_VAR(clickObject,"clickObject");
		HX_STACK_LINE(936)
		if (((bool((type == ::flash::events::MouseEvent_obj::MOUSE_DOWN)) && bool((button < (int)3))))){
			HX_STACK_LINE(936)
			this->__lastDown[button] = clickObject;
		}
		else{
			HX_STACK_LINE(940)
			if (((bool((type == ::flash::events::MouseEvent_obj::MOUSE_UP)) && bool((button < (int)3))))){
				HX_STACK_LINE(942)
				if (((clickObject == this->__lastDown->__get(button).StaticCast< ::flash::display::InteractiveObject >()))){
					HX_STACK_LINE(944)
					::flash::events::MouseEvent mouseEvent = ::flash::events::MouseEvent_obj::__create(::flash::display::Stage_obj::sClickEvents->__get(button),event,local,clickObject);		HX_STACK_VAR(mouseEvent,"mouseEvent");
					HX_STACK_LINE(945)
					clickObject->__fireEvent(mouseEvent);
					HX_STACK_LINE(947)
					if (((bool((button == (int)0)) && bool(clickObject->doubleClickEnabled)))){
						HX_STACK_LINE(949)
						Float now = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(now,"now");
						HX_STACK_LINE(950)
						if ((((now - this->__lastClickTime) < 0.25))){
							HX_STACK_LINE(952)
							::flash::events::MouseEvent mouseEvent1 = ::flash::events::MouseEvent_obj::__create(::flash::events::MouseEvent_obj::DOUBLE_CLICK,event,local,clickObject);		HX_STACK_VAR(mouseEvent1,"mouseEvent1");
							HX_STACK_LINE(953)
							clickObject->__fireEvent(mouseEvent1);
						}
						HX_STACK_LINE(957)
						this->__lastClickTime = now;
					}
				}
				HX_STACK_LINE(963)
				this->__lastDown[button] = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__onMouse,(void))

Void Stage_obj::__onKey( Dynamic event,::String type){
{
		HX_STACK_PUSH("Stage::__onKey","flash/display/Stage.hx",798);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_ARG(type,"type");
		HX_STACK_LINE(800)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(801)
		::flash::display::DisplayObject object = this->__findByID(event->__Field(HX_CSTRING("id"),true));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(803)
		if (((object != null()))){
			HX_STACK_LINE(803)
			object->__getInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(809)
		if (((stack->length > (int)0))){
			HX_STACK_LINE(811)
			Dynamic value = event->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(812)
			if (((bool((event->__Field(HX_CSTRING("value"),true) >= (int)96)) && bool((event->__Field(HX_CSTRING("value"),true) <= (int)122))))){
				HX_STACK_LINE(812)
				hx::SubEq(event->__FieldRef(HX_CSTRING("value")),(int)32);
			}
			HX_STACK_LINE(814)
			::flash::display::InteractiveObject object1 = stack->__get((int)0).StaticCast< ::flash::display::InteractiveObject >();		HX_STACK_VAR(object1,"object1");
			HX_STACK_LINE(815)
			int flags = event->__Field(HX_CSTRING("flags"),true);		HX_STACK_VAR(flags,"flags");
			HX_STACK_LINE(817)
			if (((event->__Field(HX_CSTRING("code"),true) == (int)0))){
				HX_STACK_LINE(817)
				this->__addCharCode(event);
			}
			HX_STACK_LINE(823)
			::flash::events::KeyboardEvent keyboardEvent = ::flash::events::KeyboardEvent_obj::__new(type,true,true,event->__Field(HX_CSTRING("code"),true),event->__Field(HX_CSTRING("value"),true),(  (((((int(flags) & int(::flash::display::Stage_obj::efLocationRight))) == (int)0))) ? int((int)1) : int((int)0) ),(((int(flags) & int(::flash::display::Stage_obj::efCtrlDown))) != (int)0),(((int(flags) & int(::flash::display::Stage_obj::efAltDown))) != (int)0),(((int(flags) & int(::flash::display::Stage_obj::efShiftDown))) != (int)0),null(),null());		HX_STACK_VAR(keyboardEvent,"keyboardEvent");
			HX_STACK_LINE(824)
			object1->__fireEvent(keyboardEvent);
			HX_STACK_LINE(826)
			if ((keyboardEvent->__getIsCancelled())){
				HX_STACK_LINE(826)
				event->__FieldRef(HX_CSTRING("result")) = (int)1;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onKey,(void))

Void Stage_obj::__onJoystick( Dynamic event,::String type){
{
		HX_STACK_PUSH("Stage::__onJoystick","flash/display/Stage.hx",687);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_ARG(type,"type");
		HX_STACK_LINE(689)
		::openfl::events::JoystickEvent joystickEvent = null();		HX_STACK_VAR(joystickEvent,"joystickEvent");
		HX_STACK_LINE(691)
		::String _switch_1 = (type);
		if (  ( _switch_1==HX_CSTRING("axisMove"))){
			struct _Function_2_1{
				inline static Array< Float > Block( ::flash::display::Stage_obj *__this,Dynamic &event){
					HX_STACK_PUSH("*::closure","flash/display/Stage.hx",695);
					{
						HX_STACK_LINE(695)
						int key = event->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(695)
						return __this->__joyAxisData->get(key);
					}
					return null();
				}
			};
			HX_STACK_LINE(695)
			Array< Float > data = _Function_2_1::Block(this,event);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(696)
			if (((data == null()))){
				HX_STACK_LINE(696)
				data = Array_obj< Float >::__new().Add(0.0).Add(0.0).Add(0.0).Add(0.0);
			}
			HX_STACK_LINE(702)
			Float value = (Float(event->__Field(HX_CSTRING("value"),true)) / Float((int)32767));		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(703)
			if (((value < (int)-1))){
				HX_STACK_LINE(703)
				value = (int)-1;
			}
			HX_STACK_LINE(705)
			while(((data->length < event->__Field(HX_CSTRING("code"),true)))){
				HX_STACK_LINE(705)
				data->push((int)0);
			}
			HX_STACK_LINE(711)
			data[event->__Field(HX_CSTRING("code"),true)] = value;
			HX_STACK_LINE(713)
			joystickEvent = ::openfl::events::JoystickEvent_obj::__new(type,false,false,event->__Field(HX_CSTRING("id"),true),(int)0,data->__get((int)0),data->__get((int)1),data->__get((int)2));
			HX_STACK_LINE(714)
			joystickEvent->axis = data->copy();
			HX_STACK_LINE(716)
			{
				HX_STACK_LINE(716)
				int key = event->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(716)
				this->__joyAxisData->set(key,data);
			}
		}
		else if (  ( _switch_1==HX_CSTRING("ballMove"))){
			HX_STACK_LINE(718)
			joystickEvent = ::openfl::events::JoystickEvent_obj::__new(type,false,false,event->__Field(HX_CSTRING("id"),true),event->__Field(HX_CSTRING("code"),true),event->__Field(HX_CSTRING("x"),true),event->__Field(HX_CSTRING("y"),true),null());
		}
		else if (  ( _switch_1==HX_CSTRING("hatMove"))){
			HX_STACK_LINE(724)
			int x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(725)
			int y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(727)
			if (((((int(event->__Field(HX_CSTRING("value"),true)) & int((int)1))) != (int)0))){
				HX_STACK_LINE(727)
				y = (int)-1;
			}
			else{
				HX_STACK_LINE(731)
				if (((((int(event->__Field(HX_CSTRING("value"),true)) & int((int)4))) != (int)0))){
					HX_STACK_LINE(731)
					y = (int)1;
				}
			}
			HX_STACK_LINE(737)
			if (((((int(event->__Field(HX_CSTRING("value"),true)) & int((int)2))) != (int)0))){
				HX_STACK_LINE(737)
				x = (int)1;
			}
			else{
				HX_STACK_LINE(741)
				if (((((int(event->__Field(HX_CSTRING("value"),true)) & int((int)8))) != (int)0))){
					HX_STACK_LINE(741)
					x = (int)-1;
				}
			}
			HX_STACK_LINE(747)
			joystickEvent = ::openfl::events::JoystickEvent_obj::__new(type,false,false,event->__Field(HX_CSTRING("id"),true),event->__Field(HX_CSTRING("code"),true),x,y,null());
		}
		else  {
			HX_STACK_LINE(749)
			joystickEvent = ::openfl::events::JoystickEvent_obj::__new(type,false,false,event->__Field(HX_CSTRING("id"),true),event->__Field(HX_CSTRING("code"),true),null(),null(),null());
		}
;
;
		HX_STACK_LINE(793)
		this->__dispatchEvent(joystickEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onJoystick,(void))

Void Stage_obj::__onFocus( Dynamic event){
{
		HX_STACK_PUSH("Stage::__onFocus","flash/display/Stage.hx",655);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(657)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(658)
		::flash::display::DisplayObject object = this->__findByID(event->__Field(HX_CSTRING("id"),true));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(660)
		if (((object != null()))){
			HX_STACK_LINE(660)
			object->__getInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(666)
		if (((bool((stack->length > (int)0)) && bool(((bool((event->__Field(HX_CSTRING("value"),true) == (int)1)) || bool((event->__Field(HX_CSTRING("value"),true) == (int)2)))))))){
			HX_STACK_LINE(668)
			::flash::display::InteractiveObject object1 = stack->__get((int)0).StaticCast< ::flash::display::InteractiveObject >();		HX_STACK_VAR(object1,"object1");
			HX_STACK_LINE(669)
			::flash::events::FocusEvent focusEvent = ::flash::events::FocusEvent_obj::__new((  (((event->__Field(HX_CSTRING("value"),true) == (int)1))) ? ::String(::flash::events::FocusEvent_obj::MOUSE_FOCUS_CHANGE) : ::String(::flash::events::FocusEvent_obj::KEY_FOCUS_CHANGE) ),true,true,(  (((this->__focusOverObjects->length == (int)0))) ? ::flash::display::InteractiveObject(null()) : ::flash::display::InteractiveObject(this->__focusOverObjects->__get((int)0).StaticCast< ::flash::display::InteractiveObject >()) ),(event->__Field(HX_CSTRING("flags"),true) > (int)0),event->__Field(HX_CSTRING("code"),true),null());		HX_STACK_VAR(focusEvent,"focusEvent");
			HX_STACK_LINE(670)
			object1->__fireEvent(focusEvent);
			HX_STACK_LINE(672)
			if ((focusEvent->__getIsCancelled())){
				HX_STACK_LINE(674)
				event->__FieldRef(HX_CSTRING("result")) = (int)1;
				HX_STACK_LINE(675)
				return null();
			}
		}
		HX_STACK_LINE(681)
		stack->reverse();
		HX_STACK_LINE(682)
		this->__checkFocusInOuts(event,stack);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__onFocus,(void))

Void Stage_obj::__onChange( Dynamic event){
{
		HX_STACK_PUSH("Stage::__onChange","flash/display/Stage.hx",642);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(644)
		::flash::display::DisplayObject object = this->__findByID(event->__Field(HX_CSTRING("id"),true));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(646)
		if (((object != null()))){
			HX_STACK_LINE(646)
			object->__fireEvent(::flash::events::Event_obj::__new(::flash::events::Event_obj::CHANGE,null(),null()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__onChange,(void))

Float Stage_obj::__nextFrameDue( Float otherTimers){
	HX_STACK_PUSH("Stage::__nextFrameDue","flash/display/Stage.hx",618);
	HX_STACK_THIS(this);
	HX_STACK_ARG(otherTimers,"otherTimers");
	HX_STACK_LINE(620)
	if (((bool(!(this->active)) && bool(this->pauseWhenDeactivated)))){
		HX_STACK_LINE(620)
		return otherTimers;
	}
	HX_STACK_LINE(626)
	if (((this->frameRate > (int)0))){
		HX_STACK_LINE(628)
		Float next = ((this->__nextRender - ::haxe::Timer_obj::stamp()) - ::flash::display::Stage_obj::__earlyWakeup);		HX_STACK_VAR(next,"next");
		HX_STACK_LINE(629)
		if (((next < otherTimers))){
			HX_STACK_LINE(629)
			return next;
		}
	}
	HX_STACK_LINE(637)
	return otherTimers;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__nextFrameDue,return )

Void Stage_obj::__drag( ::flash::geom::Point mouse){
{
		HX_STACK_PUSH("Stage::__drag","flash/display/Stage.hx",576);
		HX_STACK_THIS(this);
		HX_STACK_ARG(mouse,"mouse");
		HX_STACK_LINE(578)
		::flash::display::DisplayObjectContainer parent = this->__dragObject->get_parent();		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(579)
		if (((parent != null()))){
			HX_STACK_LINE(579)
			mouse = parent->globalToLocal(mouse);
		}
		HX_STACK_LINE(585)
		Float x = (mouse->x + this->__dragOffsetX);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(586)
		Float y = (mouse->y + this->__dragOffsetY);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(588)
		if (((this->__dragBounds != null()))){
			HX_STACK_LINE(590)
			if (((x < this->__dragBounds->x))){
				HX_STACK_LINE(590)
				x = this->__dragBounds->x;
			}
			else{
				HX_STACK_LINE(594)
				if (((x > this->__dragBounds->get_right()))){
					HX_STACK_LINE(594)
					x = this->__dragBounds->get_right();
				}
			}
			HX_STACK_LINE(600)
			if (((y < this->__dragBounds->y))){
				HX_STACK_LINE(600)
				y = this->__dragBounds->y;
			}
			else{
				HX_STACK_LINE(604)
				if (((y > this->__dragBounds->get_bottom()))){
					HX_STACK_LINE(604)
					y = this->__dragBounds->get_bottom();
				}
			}
		}
		HX_STACK_LINE(612)
		this->__dragObject->set_x(x);
		HX_STACK_LINE(613)
		this->__dragObject->set_y(y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__drag,(void))

Dynamic Stage_obj::__processStageEvent( Dynamic event){
	HX_STACK_PUSH("Stage::__processStageEvent","flash/display/Stage.hx",568);
	HX_STACK_THIS(this);
	HX_STACK_ARG(event,"event");
	HX_STACK_LINE(570)
	this->__doProcessStageEvent(event);
	HX_STACK_LINE(571)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__processStageEvent,return )

Float Stage_obj::__doProcessStageEvent( Dynamic event){
	HX_STACK_PUSH("Stage::__doProcessStageEvent","flash/display/Stage.hx",414);
	HX_STACK_THIS(this);
	HX_STACK_ARG(event,"event");
	HX_STACK_LINE(416)
	Float result = 0.0;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(417)
	int type = ::Std_obj::_int(::Reflect_obj::field(event,HX_CSTRING("type")));		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(419)
	switch( (int)(type)){
		case (int)2: {
			HX_STACK_LINE(421)
			if (((this->onKey_dyn() != null()))){
				HX_STACK_LINE(424)
				this->onKey(event->__Field(HX_CSTRING("code"),true),event->__Field(HX_CSTRING("down"),true),event->__Field(HX_CSTRING("char"),true),event->__Field(HX_CSTRING("flags"),true));
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(426)
			this->__onKey(event,::flash::events::KeyboardEvent_obj::KEY_DOWN);
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(430)
			this->__onKey(event,::flash::events::KeyboardEvent_obj::KEY_UP);
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(434)
			this->__onMouse(event,::flash::events::MouseEvent_obj::MOUSE_MOVE,true);
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(438)
			this->__onMouse(event,::flash::events::MouseEvent_obj::MOUSE_DOWN,true);
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(442)
			this->__onMouse(event,::flash::events::MouseEvent_obj::CLICK,true);
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(446)
			this->__onMouse(event,::flash::events::MouseEvent_obj::MOUSE_UP,true);
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(452)
			this->__onResize(event->__Field(HX_CSTRING("x"),true),event->__Field(HX_CSTRING("y"),true));
			HX_STACK_LINE(453)
			if (((this->renderRequest_dyn() == null()))){
				HX_STACK_LINE(453)
				this->__render(false);
			}
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(459)
			this->__pollTimers();
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(463)
			if (((this->onQuit_dyn() != null()))){
				HX_STACK_LINE(466)
				this->onQuit();
			}
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(468)
			this->__onFocus(event);
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(472)
			if ((::flash::display::Stage_obj::shouldRotateInterface(event->__Field(HX_CSTRING("value"),true)))){
				HX_STACK_LINE(475)
				event->__FieldRef(HX_CSTRING("result")) = (int)2;
			}
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(477)
			this->__render(true);
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(483)
			::flash::display::TouchInfo touchInfo = ::flash::display::TouchInfo_obj::__new();		HX_STACK_VAR(touchInfo,"touchInfo");
			HX_STACK_LINE(484)
			{
				HX_STACK_LINE(484)
				int key = event->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(484)
				this->__touchInfo->set(key,touchInfo);
			}
			HX_STACK_LINE(485)
			this->__onTouch(event,::flash::events::TouchEvent_obj::TOUCH_BEGIN,touchInfo);
			HX_STACK_LINE(487)
			if (((((int(event->__Field(HX_CSTRING("flags"),true)) & int((int)32768))) > (int)0))){
				HX_STACK_LINE(487)
				this->__onMouse(event,::flash::events::MouseEvent_obj::MOUSE_DOWN,false);
			}
		}
		;break;
		case (int)16: {
			struct _Function_2_1{
				inline static ::flash::display::TouchInfo Block( ::flash::display::Stage_obj *__this,Dynamic &event){
					HX_STACK_PUSH("*::closure","flash/display/Stage.hx",495);
					{
						HX_STACK_LINE(495)
						int key = event->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(495)
						return __this->__touchInfo->get(key);
					}
					return null();
				}
			};
			HX_STACK_LINE(495)
			::flash::display::TouchInfo touchInfo = _Function_2_1::Block(this,event);		HX_STACK_VAR(touchInfo,"touchInfo");
			HX_STACK_LINE(496)
			this->__onTouch(event,::flash::events::TouchEvent_obj::TOUCH_MOVE,touchInfo);
		}
		;break;
		case (int)17: {
			struct _Function_2_1{
				inline static ::flash::display::TouchInfo Block( ::flash::display::Stage_obj *__this,Dynamic &event){
					HX_STACK_PUSH("*::closure","flash/display/Stage.hx",500);
					{
						HX_STACK_LINE(500)
						int key = event->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(500)
						return __this->__touchInfo->get(key);
					}
					return null();
				}
			};
			HX_STACK_LINE(500)
			::flash::display::TouchInfo touchInfo = _Function_2_1::Block(this,event);		HX_STACK_VAR(touchInfo,"touchInfo");
			HX_STACK_LINE(501)
			this->__onTouch(event,::flash::events::TouchEvent_obj::TOUCH_END,touchInfo);
			HX_STACK_LINE(502)
			{
				HX_STACK_LINE(502)
				int key = event->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(502)
				this->__touchInfo->remove(key);
			}
			HX_STACK_LINE(504)
			if (((((int(event->__Field(HX_CSTRING("flags"),true)) & int((int)32768))) > (int)0))){
				HX_STACK_LINE(504)
				this->__onMouse(event,::flash::events::MouseEvent_obj::MOUSE_UP,false);
			}
		}
		;break;
		case (int)18: {
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(514)
			this->__onChange(event);
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(518)
			this->__setActive(true);
		}
		;break;
		case (int)21: {
			HX_STACK_LINE(522)
			this->__setActive(false);
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(526)
			this->__dispatchEvent(::flash::events::Event_obj::__new(::flash::events::FocusEvent_obj::FOCUS_IN,null(),null()));
		}
		;break;
		case (int)23: {
			HX_STACK_LINE(530)
			this->__dispatchEvent(::flash::events::Event_obj::__new(::flash::events::FocusEvent_obj::FOCUS_OUT,null(),null()));
		}
		;break;
		case (int)24: {
			HX_STACK_LINE(534)
			this->__onJoystick(event,HX_CSTRING("axisMove"));
		}
		;break;
		case (int)25: {
			HX_STACK_LINE(538)
			this->__onJoystick(event,HX_CSTRING("ballMove"));
		}
		;break;
		case (int)26: {
			HX_STACK_LINE(542)
			this->__onJoystick(event,HX_CSTRING("hatMove"));
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(546)
			this->__onJoystick(event,HX_CSTRING("buttonDown"));
		}
		;break;
		case (int)28: {
			HX_STACK_LINE(550)
			this->__onJoystick(event,HX_CSTRING("buttonUp"));
		}
		;break;
		case (int)29: {
			HX_STACK_LINE(554)
			this->__onSysWM(event);
		}
		;break;
	}
	HX_STACK_LINE(562)
	result = this->__updateNextWake();
	HX_STACK_LINE(563)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__doProcessStageEvent,return )

Void Stage_obj::__checkRender( ){
{
		HX_STACK_PUSH("Stage::__checkRender","flash/display/Stage.hx",367);
		HX_STACK_THIS(this);
		HX_STACK_LINE(367)
		if (((this->frameRate > (int)0))){
			HX_STACK_LINE(371)
			Float now = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(now,"now");
			HX_STACK_LINE(372)
			if (((now >= this->__nextRender))){
				HX_STACK_LINE(374)
				this->__lastRender = now;
				HX_STACK_LINE(376)
				while(((this->__nextRender < this->__lastRender))){
					HX_STACK_LINE(376)
					hx::AddEq(this->__nextRender,this->__framePeriod);
				}
				HX_STACK_LINE(382)
				if (((this->renderRequest_dyn() != null()))){
					HX_STACK_LINE(382)
					this->renderRequest();
				}
				else{
					HX_STACK_LINE(386)
					this->__render(true);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,__checkRender,(void))

bool Stage_obj::__checkInOuts( ::flash::events::MouseEvent event,Array< ::Dynamic > stack,::flash::display::TouchInfo touchInfo){
	HX_STACK_PUSH("Stage::__checkInOuts","flash/display/Stage.hx",297);
	HX_STACK_THIS(this);
	HX_STACK_ARG(event,"event");
	HX_STACK_ARG(stack,"stack");
	HX_STACK_ARG(touchInfo,"touchInfo");
	HX_STACK_LINE(299)
	Array< ::Dynamic > prev = (  (((touchInfo == null()))) ? Array< ::Dynamic >(this->__mouseOverObjects) : Array< ::Dynamic >(touchInfo->touchOverObjects) );		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(300)
	Array< ::String > events = (  (((touchInfo == null()))) ? Array< ::String >(::flash::display::Stage_obj::__mouseChanges) : Array< ::String >(::flash::display::Stage_obj::__touchChanges) );		HX_STACK_VAR(events,"events");
	HX_STACK_LINE(302)
	int newLength = stack->length;		HX_STACK_VAR(newLength,"newLength");
	HX_STACK_LINE(303)
	::flash::display::InteractiveObject newObject = (  (((newLength > (int)0))) ? ::flash::display::InteractiveObject(stack->__get((newLength - (int)1)).StaticCast< ::flash::display::InteractiveObject >()) : ::flash::display::InteractiveObject(null()) );		HX_STACK_VAR(newObject,"newObject");
	HX_STACK_LINE(304)
	int oldLength = prev->length;		HX_STACK_VAR(oldLength,"oldLength");
	HX_STACK_LINE(305)
	::flash::display::InteractiveObject oldObject = (  (((oldLength > (int)0))) ? ::flash::display::InteractiveObject(prev->__get((oldLength - (int)1)).StaticCast< ::flash::display::InteractiveObject >()) : ::flash::display::InteractiveObject(null()) );		HX_STACK_VAR(oldObject,"oldObject");
	HX_STACK_LINE(307)
	if (((newObject != oldObject))){
		HX_STACK_LINE(309)
		if (((oldObject != null()))){
			HX_STACK_LINE(309)
			oldObject->__fireEvent(event->__createSimilar(events->__get((int)0),newObject,oldObject));
		}
		HX_STACK_LINE(315)
		if (((newObject != null()))){
			HX_STACK_LINE(315)
			newObject->__fireEvent(event->__createSimilar(events->__get((int)1),oldObject,null()));
		}
		HX_STACK_LINE(321)
		int common = (int)0;		HX_STACK_VAR(common,"common");
		HX_STACK_LINE(322)
		while(((bool((bool((common < newLength)) && bool((common < oldLength)))) && bool((stack->__get(common).StaticCast< ::flash::display::InteractiveObject >() == prev->__get(common).StaticCast< ::flash::display::InteractiveObject >()))))){
			HX_STACK_LINE(322)
			(common)++;
		}
		HX_STACK_LINE(328)
		::flash::events::MouseEvent rollOut = event->__createSimilar(events->__get((int)2),newObject,oldObject);		HX_STACK_VAR(rollOut,"rollOut");
		HX_STACK_LINE(330)
		int i = (oldLength - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(331)
		while(((i >= common))){
			HX_STACK_LINE(333)
			prev->__get(i).StaticCast< ::flash::display::InteractiveObject >()->__dispatchEvent(rollOut);
			HX_STACK_LINE(334)
			(i)--;
		}
		HX_STACK_LINE(338)
		::flash::events::MouseEvent rollOver = event->__createSimilar(events->__get((int)3),oldObject,null());		HX_STACK_VAR(rollOver,"rollOver");
		HX_STACK_LINE(340)
		int i1 = (newLength - (int)1);		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(341)
		while(((i1 >= common))){
			HX_STACK_LINE(343)
			stack->__get(i1).StaticCast< ::flash::display::InteractiveObject >()->__dispatchEvent(rollOver);
			HX_STACK_LINE(344)
			(i1)--;
		}
		HX_STACK_LINE(348)
		if (((touchInfo == null()))){
			HX_STACK_LINE(348)
			this->__mouseOverObjects = stack;
		}
		else{
			HX_STACK_LINE(352)
			touchInfo->touchOverObjects = stack;
		}
		HX_STACK_LINE(358)
		return false;
	}
	HX_STACK_LINE(362)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__checkInOuts,return )

Void Stage_obj::__checkFocusInOuts( Dynamic event,Array< ::Dynamic > stack){
{
		HX_STACK_PUSH("Stage::__checkFocusInOuts","flash/display/Stage.hx",265);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_ARG(stack,"stack");
		HX_STACK_LINE(267)
		int newLength = stack->length;		HX_STACK_VAR(newLength,"newLength");
		HX_STACK_LINE(268)
		::flash::display::InteractiveObject newObject = (  (((newLength > (int)0))) ? ::flash::display::InteractiveObject(stack->__get((newLength - (int)1)).StaticCast< ::flash::display::InteractiveObject >()) : ::flash::display::InteractiveObject(null()) );		HX_STACK_VAR(newObject,"newObject");
		HX_STACK_LINE(269)
		int oldLength = this->__focusOverObjects->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(270)
		::flash::display::InteractiveObject oldObject = (  (((oldLength > (int)0))) ? ::flash::display::InteractiveObject(this->__focusOverObjects->__get((oldLength - (int)1)).StaticCast< ::flash::display::InteractiveObject >()) : ::flash::display::InteractiveObject(null()) );		HX_STACK_VAR(oldObject,"oldObject");
		HX_STACK_LINE(272)
		if (((newObject != oldObject))){
			HX_STACK_LINE(274)
			if (((oldObject != null()))){
				HX_STACK_LINE(276)
				::flash::events::FocusEvent focusOut = ::flash::events::FocusEvent_obj::__new(::flash::events::FocusEvent_obj::FOCUS_OUT,true,false,newObject,(event->__Field(HX_CSTRING("flags"),true) > (int)0),event->__Field(HX_CSTRING("code"),true),null());		HX_STACK_VAR(focusOut,"focusOut");
				HX_STACK_LINE(277)
				focusOut->set_target(oldObject);
				HX_STACK_LINE(278)
				oldObject->__fireEvent(focusOut);
			}
			HX_STACK_LINE(282)
			if (((newObject != null()))){
				HX_STACK_LINE(284)
				::flash::events::FocusEvent focusIn = ::flash::events::FocusEvent_obj::__new(::flash::events::FocusEvent_obj::FOCUS_IN,true,false,oldObject,(event->__Field(HX_CSTRING("flags"),true) > (int)0),event->__Field(HX_CSTRING("code"),true),null());		HX_STACK_VAR(focusIn,"focusIn");
				HX_STACK_LINE(285)
				focusIn->set_target(newObject);
				HX_STACK_LINE(286)
				newObject->__fireEvent(focusIn);
			}
			HX_STACK_LINE(290)
			this->__focusOverObjects = stack;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__checkFocusInOuts,(void))

Void Stage_obj::__addCharCode( Dynamic event){
{
		HX_STACK_PUSH("Stage::__addCharCode","flash/display/Stage.hx",163);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(165)
		int keyCode = event->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(keyCode,"keyCode");
		HX_STACK_LINE(166)
		bool shift = (((int(event->__Field(HX_CSTRING("flags"),true)) & int(::flash::display::Stage_obj::efShiftDown))) != (int)0);		HX_STACK_VAR(shift,"shift");
		HX_STACK_LINE(167)
		bool foundCode = true;		HX_STACK_VAR(foundCode,"foundCode");
		HX_STACK_LINE(169)
		if ((shift)){
			HX_STACK_LINE(171)
			switch( (int)(keyCode)){
				case (int)8: case (int)13: case (int)27: case (int)32: {
					HX_STACK_LINE(173)
					event->__FieldRef(HX_CSTRING("code")) = keyCode;
				}
				;break;
				case (int)186: {
					HX_STACK_LINE(174)
					event->__FieldRef(HX_CSTRING("code")) = (int)59;
				}
				;break;
				case (int)187: {
					HX_STACK_LINE(175)
					event->__FieldRef(HX_CSTRING("code")) = (int)61;
				}
				;break;
				case (int)188: case (int)189: case (int)190: case (int)191: {
					HX_STACK_LINE(176)
					event->__FieldRef(HX_CSTRING("code")) = (keyCode - (int)144);
				}
				;break;
				case (int)192: {
					HX_STACK_LINE(177)
					event->__FieldRef(HX_CSTRING("code")) = (int)47;
				}
				;break;
				case (int)219: case (int)220: case (int)221: {
					HX_STACK_LINE(178)
					event->__FieldRef(HX_CSTRING("code")) = (keyCode - (int)128);
				}
				;break;
				case (int)222: {
					HX_STACK_LINE(179)
					event->__FieldRef(HX_CSTRING("code")) = (int)39;
				}
				;break;
				default: {
					HX_STACK_LINE(181)
					foundCode = false;
				}
			}
			HX_STACK_LINE(185)
			if ((!(foundCode))){
				HX_STACK_LINE(185)
				if (((bool((keyCode >= (int)48)) && bool((keyCode <= (int)57))))){
					HX_STACK_LINE(189)
					event->__FieldRef(HX_CSTRING("code")) = keyCode;
					HX_STACK_LINE(190)
					foundCode = true;
				}
				else{
					HX_STACK_LINE(192)
					if (((bool((keyCode >= (int)65)) && bool((keyCode <= (int)90))))){
						HX_STACK_LINE(194)
						event->__FieldRef(HX_CSTRING("code")) = (keyCode + (int)32);
						HX_STACK_LINE(195)
						foundCode = true;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(203)
			switch( (int)(keyCode)){
				case (int)48: {
					HX_STACK_LINE(205)
					event->__FieldRef(HX_CSTRING("code")) = (int)41;
				}
				;break;
				case (int)49: {
					HX_STACK_LINE(206)
					event->__FieldRef(HX_CSTRING("code")) = (int)33;
				}
				;break;
				case (int)50: {
					HX_STACK_LINE(207)
					event->__FieldRef(HX_CSTRING("code")) = (int)64;
				}
				;break;
				case (int)51: case (int)52: case (int)53: {
					HX_STACK_LINE(208)
					event->__FieldRef(HX_CSTRING("code")) = (keyCode - (int)16);
				}
				;break;
				case (int)54: {
					HX_STACK_LINE(209)
					event->__FieldRef(HX_CSTRING("code")) = (int)94;
				}
				;break;
				case (int)55: {
					HX_STACK_LINE(210)
					event->__FieldRef(HX_CSTRING("code")) = (int)38;
				}
				;break;
				case (int)56: {
					HX_STACK_LINE(211)
					event->__FieldRef(HX_CSTRING("code")) = (int)42;
				}
				;break;
				case (int)57: {
					HX_STACK_LINE(212)
					event->__FieldRef(HX_CSTRING("code")) = (int)40;
				}
				;break;
				case (int)186: {
					HX_STACK_LINE(213)
					event->__FieldRef(HX_CSTRING("code")) = (int)58;
				}
				;break;
				case (int)187: {
					HX_STACK_LINE(214)
					event->__FieldRef(HX_CSTRING("code")) = (int)43;
				}
				;break;
				case (int)188: {
					HX_STACK_LINE(215)
					event->__FieldRef(HX_CSTRING("code")) = (int)60;
				}
				;break;
				case (int)189: {
					HX_STACK_LINE(216)
					event->__FieldRef(HX_CSTRING("code")) = (int)95;
				}
				;break;
				case (int)190: {
					HX_STACK_LINE(217)
					event->__FieldRef(HX_CSTRING("code")) = (int)62;
				}
				;break;
				case (int)191: {
					HX_STACK_LINE(218)
					event->__FieldRef(HX_CSTRING("code")) = (int)63;
				}
				;break;
				case (int)192: {
					HX_STACK_LINE(219)
					event->__FieldRef(HX_CSTRING("code")) = (int)126;
				}
				;break;
				case (int)219: case (int)220: case (int)221: {
					HX_STACK_LINE(220)
					event->__FieldRef(HX_CSTRING("code")) = (keyCode - (int)96);
				}
				;break;
				case (int)222: {
					HX_STACK_LINE(221)
					event->__FieldRef(HX_CSTRING("code")) = (int)34;
				}
				;break;
				default: {
					HX_STACK_LINE(223)
					foundCode = false;
				}
			}
			HX_STACK_LINE(227)
			if ((!(foundCode))){
				HX_STACK_LINE(227)
				if (((bool((keyCode >= (int)65)) && bool((keyCode <= (int)90))))){
					HX_STACK_LINE(231)
					event->__FieldRef(HX_CSTRING("code")) = keyCode;
					HX_STACK_LINE(232)
					foundCode = true;
				}
			}
		}
		HX_STACK_LINE(240)
		if ((!(foundCode))){
			HX_STACK_LINE(240)
			if (((keyCode == (int)46))){
				HX_STACK_LINE(242)
				event->__FieldRef(HX_CSTRING("code")) = (int)127;
			}
			else{
				HX_STACK_LINE(246)
				if (((keyCode == (int)13))){
					HX_STACK_LINE(246)
					event->__FieldRef(HX_CSTRING("code")) = (int)13;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__addCharCode,(void))

Void Stage_obj::showCursor( bool show){
{
		HX_STACK_PUSH("Stage::showCursor","flash/display/Stage.hx",156);
		HX_STACK_THIS(this);
		HX_STACK_ARG(show,"show");
		HX_STACK_LINE(156)
		::flash::display::Stage_obj::nme_stage_show_cursor(this->__handle,show);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,showCursor,(void))

Void Stage_obj::resize( int width,int height){
{
		HX_STACK_PUSH("Stage::resize","flash/display/Stage.hx",134);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(134)
		::flash::display::Stage_obj::nme_stage_resize_window(this->__handle,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,resize,(void))

Void Stage_obj::invalidate( ){
{
		HX_STACK_PUSH("Stage::invalidate","flash/display/Stage.hx",127);
		HX_STACK_THIS(this);
		HX_STACK_LINE(127)
		this->__invalid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,invalidate,(void))

Float Stage_obj::__earlyWakeup;

int Stage_obj::OrientationPortrait;

int Stage_obj::OrientationPortraitUpsideDown;

int Stage_obj::OrientationLandscapeRight;

int Stage_obj::OrientationLandscapeLeft;

int Stage_obj::OrientationFaceUp;

int Stage_obj::OrientationFaceDown;

int Stage_obj::efLeftDown;

int Stage_obj::efShiftDown;

int Stage_obj::efCtrlDown;

int Stage_obj::efAltDown;

int Stage_obj::efCommandDown;

int Stage_obj::efLocationRight;

int Stage_obj::efNoNativeClick;

Array< ::String > Stage_obj::sClickEvents;

Array< ::String > Stage_obj::sDownEvents;

Array< ::String > Stage_obj::sUpEvents;

Array< ::String > Stage_obj::__mouseChanges;

Array< ::String > Stage_obj::__touchChanges;

HX_BEGIN_DEFAULT_FUNC(__default_getOrientation,Stage_obj)
int run(){
	HX_STACK_PUSH("Stage::getOrientation","flash/display/Stage.hx",113);
	HX_STACK_LINE(113)
	return ::flash::display::Stage_obj::nme_stage_get_orientation();
}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

Dynamic Stage_obj::getOrientation;

HX_BEGIN_DEFAULT_FUNC(__default_getNormalOrientation,Stage_obj)
int run(){
	HX_STACK_PUSH("Stage::getNormalOrientation","flash/display/Stage.hx",120);
	HX_STACK_LINE(120)
	return ::flash::display::Stage_obj::nme_stage_get_normal_orientation();
}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

Dynamic Stage_obj::getNormalOrientation;

Void Stage_obj::setFixedOrientation( int orientation){
{
		HX_STACK_PUSH("Stage::setFixedOrientation","flash/display/Stage.hx",141);
		HX_STACK_ARG(orientation,"orientation");
		HX_STACK_LINE(141)
		::flash::display::Stage_obj::nme_stage_set_fixed_orientation(orientation);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,setFixedOrientation,(void))

HX_BEGIN_DEFAULT_FUNC(__default_shouldRotateInterface,Stage_obj)
bool run(int orientation){
	HX_STACK_PUSH("Stage::shouldRotateInterface","flash/display/Stage.hx",149);
	HX_STACK_ARG(orientation,"orientation");
	HX_STACK_LINE(149)
	return (orientation == ::flash::display::Stage_obj::OrientationPortrait);
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

Dynamic Stage_obj::shouldRotateInterface;

Dynamic Stage_obj::nme_set_stage_handler;

Dynamic Stage_obj::nme_render_stage;

Dynamic Stage_obj::nme_stage_get_focus_id;

Dynamic Stage_obj::nme_stage_set_focus;

Dynamic Stage_obj::nme_stage_get_focus_rect;

Dynamic Stage_obj::nme_stage_set_focus_rect;

Dynamic Stage_obj::nme_stage_is_opengl;

Dynamic Stage_obj::nme_stage_get_stage_width;

Dynamic Stage_obj::nme_stage_get_stage_height;

Dynamic Stage_obj::nme_stage_get_dpi_scale;

Dynamic Stage_obj::nme_stage_get_scale_mode;

Dynamic Stage_obj::nme_stage_set_scale_mode;

Dynamic Stage_obj::nme_stage_get_align;

Dynamic Stage_obj::nme_stage_set_align;

Dynamic Stage_obj::nme_stage_get_quality;

Dynamic Stage_obj::nme_stage_set_quality;

Dynamic Stage_obj::nme_stage_get_display_state;

Dynamic Stage_obj::nme_stage_set_display_state;

Dynamic Stage_obj::nme_stage_set_next_wake;

Dynamic Stage_obj::nme_stage_request_render;

Dynamic Stage_obj::nme_stage_resize_window;

Dynamic Stage_obj::nme_stage_show_cursor;

Dynamic Stage_obj::nme_stage_set_fixed_orientation;

Dynamic Stage_obj::nme_stage_get_orientation;

Dynamic Stage_obj::nme_stage_get_normal_orientation;


Stage_obj::Stage_obj()
{
}

void Stage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage);
	HX_MARK_MEMBER_NAME(__touchInfo,"__touchInfo");
	HX_MARK_MEMBER_NAME(__nextRender,"__nextRender");
	HX_MARK_MEMBER_NAME(__mouseOverObjects,"__mouseOverObjects");
	HX_MARK_MEMBER_NAME(__lastRender,"__lastRender");
	HX_MARK_MEMBER_NAME(__lastDown,"__lastDown");
	HX_MARK_MEMBER_NAME(__lastClickTime,"__lastClickTime");
	HX_MARK_MEMBER_NAME(__invalid,"__invalid");
	HX_MARK_MEMBER_NAME(__framePeriod,"__framePeriod");
	HX_MARK_MEMBER_NAME(__focusOverObjects,"__focusOverObjects");
	HX_MARK_MEMBER_NAME(__dragOffsetY,"__dragOffsetY");
	HX_MARK_MEMBER_NAME(__dragOffsetX,"__dragOffsetX");
	HX_MARK_MEMBER_NAME(__dragObject,"__dragObject");
	HX_MARK_MEMBER_NAME(__dragBounds,"__dragBounds");
	HX_MARK_MEMBER_NAME(__joyAxisData,"__joyAxisData");
	HX_MARK_MEMBER_NAME(stageWidth,"stageWidth");
	HX_MARK_MEMBER_NAME(stageHeight,"stageHeight");
	HX_MARK_MEMBER_NAME(renderRequest,"renderRequest");
	HX_MARK_MEMBER_NAME(pauseWhenDeactivated,"pauseWhenDeactivated");
	HX_MARK_MEMBER_NAME(onQuit,"onQuit");
	HX_MARK_MEMBER_NAME(onKey,"onKey");
	HX_MARK_MEMBER_NAME(isOpenGL,"isOpenGL");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(dpiScale,"dpiScale");
	HX_MARK_MEMBER_NAME(active,"active");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__touchInfo,"__touchInfo");
	HX_VISIT_MEMBER_NAME(__nextRender,"__nextRender");
	HX_VISIT_MEMBER_NAME(__mouseOverObjects,"__mouseOverObjects");
	HX_VISIT_MEMBER_NAME(__lastRender,"__lastRender");
	HX_VISIT_MEMBER_NAME(__lastDown,"__lastDown");
	HX_VISIT_MEMBER_NAME(__lastClickTime,"__lastClickTime");
	HX_VISIT_MEMBER_NAME(__invalid,"__invalid");
	HX_VISIT_MEMBER_NAME(__framePeriod,"__framePeriod");
	HX_VISIT_MEMBER_NAME(__focusOverObjects,"__focusOverObjects");
	HX_VISIT_MEMBER_NAME(__dragOffsetY,"__dragOffsetY");
	HX_VISIT_MEMBER_NAME(__dragOffsetX,"__dragOffsetX");
	HX_VISIT_MEMBER_NAME(__dragObject,"__dragObject");
	HX_VISIT_MEMBER_NAME(__dragBounds,"__dragBounds");
	HX_VISIT_MEMBER_NAME(__joyAxisData,"__joyAxisData");
	HX_VISIT_MEMBER_NAME(stageWidth,"stageWidth");
	HX_VISIT_MEMBER_NAME(stageHeight,"stageHeight");
	HX_VISIT_MEMBER_NAME(renderRequest,"renderRequest");
	HX_VISIT_MEMBER_NAME(pauseWhenDeactivated,"pauseWhenDeactivated");
	HX_VISIT_MEMBER_NAME(onQuit,"onQuit");
	HX_VISIT_MEMBER_NAME(onKey,"onKey");
	HX_VISIT_MEMBER_NAME(isOpenGL,"isOpenGL");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(dpiScale,"dpiScale");
	HX_VISIT_MEMBER_NAME(active,"active");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Stage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onKey") ) { return onKey; }
		if (HX_FIELD_EQ(inName,"focus") ) { return get_focus(); }
		if (HX_FIELD_EQ(inName,"align") ) { return get_align(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__drag") ) { return __drag_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"onQuit") ) { return onQuit; }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__onKey") ) { return __onKey_dyn(); }
		if (HX_FIELD_EQ(inName,"quality") ) { return get_quality(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__render") ) { return __render_dyn(); }
		if (HX_FIELD_EQ(inName,"isOpenGL") ) { return inCallProp ? get_isOpenGL() : isOpenGL; }
		if (HX_FIELD_EQ(inName,"dpiScale") ) { return inCallProp ? get_dpiScale() : dpiScale; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"efAltDown") ) { return efAltDown; }
		if (HX_FIELD_EQ(inName,"sUpEvents") ) { return sUpEvents; }
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return set_focus_dyn(); }
		if (HX_FIELD_EQ(inName,"get_focus") ) { return get_focus_dyn(); }
		if (HX_FIELD_EQ(inName,"set_align") ) { return set_align_dyn(); }
		if (HX_FIELD_EQ(inName,"get_align") ) { return get_align_dyn(); }
		if (HX_FIELD_EQ(inName,"__onTouch") ) { return __onTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"__onSysWM") ) { return __onSysWM_dyn(); }
		if (HX_FIELD_EQ(inName,"__onMouse") ) { return __onMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"__onFocus") ) { return __onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"__invalid") ) { return __invalid; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return get_scaleMode(); }
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"efLeftDown") ) { return efLeftDown; }
		if (HX_FIELD_EQ(inName,"efCtrlDown") ) { return efCtrlDown; }
		if (HX_FIELD_EQ(inName,"__stopDrag") ) { return __stopDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"__onResize") ) { return __onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"__onChange") ) { return __onChange_dyn(); }
		if (HX_FIELD_EQ(inName,"showCursor") ) { return showCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"__lastDown") ) { return __lastDown; }
		if (HX_FIELD_EQ(inName,"stageWidth") ) { return inCallProp ? get_stageWidth() : stageWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"efShiftDown") ) { return efShiftDown; }
		if (HX_FIELD_EQ(inName,"sDownEvents") ) { return sDownEvents; }
		if (HX_FIELD_EQ(inName,"set_quality") ) { return set_quality_dyn(); }
		if (HX_FIELD_EQ(inName,"get_quality") ) { return get_quality_dyn(); }
		if (HX_FIELD_EQ(inName,"__startDrag") ) { return __startDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"__setActive") ) { return __setActive_dyn(); }
		if (HX_FIELD_EQ(inName,"__touchInfo") ) { return __touchInfo; }
		if (HX_FIELD_EQ(inName,"stageHeight") ) { return inCallProp ? get_stageHeight() : stageHeight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sClickEvents") ) { return sClickEvents; }
		if (HX_FIELD_EQ(inName,"get_isOpenGL") ) { return get_isOpenGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dpiScale") ) { return get_dpiScale_dyn(); }
		if (HX_FIELD_EQ(inName,"__pollTimers") ) { return __pollTimers_dyn(); }
		if (HX_FIELD_EQ(inName,"__onJoystick") ) { return __onJoystick_dyn(); }
		if (HX_FIELD_EQ(inName,"__nextRender") ) { return __nextRender; }
		if (HX_FIELD_EQ(inName,"__lastRender") ) { return __lastRender; }
		if (HX_FIELD_EQ(inName,"__dragObject") ) { return __dragObject; }
		if (HX_FIELD_EQ(inName,"__dragBounds") ) { return __dragBounds; }
		if (HX_FIELD_EQ(inName,"displayState") ) { return get_displayState(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__earlyWakeup") ) { return __earlyWakeup; }
		if (HX_FIELD_EQ(inName,"efCommandDown") ) { return efCommandDown; }
		if (HX_FIELD_EQ(inName,"set_scaleMode") ) { return set_scaleMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleMode") ) { return get_scaleMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"__checkRender") ) { return __checkRender_dyn(); }
		if (HX_FIELD_EQ(inName,"__checkInOuts") ) { return __checkInOuts_dyn(); }
		if (HX_FIELD_EQ(inName,"__addCharCode") ) { return __addCharCode_dyn(); }
		if (HX_FIELD_EQ(inName,"__framePeriod") ) { return __framePeriod; }
		if (HX_FIELD_EQ(inName,"__dragOffsetY") ) { return __dragOffsetY; }
		if (HX_FIELD_EQ(inName,"__dragOffsetX") ) { return __dragOffsetX; }
		if (HX_FIELD_EQ(inName,"__joyAxisData") ) { return __joyAxisData; }
		if (HX_FIELD_EQ(inName,"renderRequest") ) { return renderRequest; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__mouseChanges") ) { return __mouseChanges; }
		if (HX_FIELD_EQ(inName,"__touchChanges") ) { return __touchChanges; }
		if (HX_FIELD_EQ(inName,"getOrientation") ) { return getOrientation; }
		if (HX_FIELD_EQ(inName,"get_stageWidth") ) { return get_stageWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"__nextFrameDue") ) { return __nextFrameDue_dyn(); }
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { return get_stageFocusRect(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"efLocationRight") ) { return efLocationRight; }
		if (HX_FIELD_EQ(inName,"efNoNativeClick") ) { return efNoNativeClick; }
		if (HX_FIELD_EQ(inName,"get_stageHeight") ) { return get_stageHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"__lastClickTime") ) { return __lastClickTime; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nme_render_stage") ) { return nme_render_stage; }
		if (HX_FIELD_EQ(inName,"set_displayState") ) { return set_displayState_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayState") ) { return get_displayState_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateNextWake") ) { return __updateNextWake_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"OrientationFaceUp") ) { return OrientationFaceUp; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_stageFocusRect") ) { return set_stageFocusRect_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stageFocusRect") ) { return get_stageFocusRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__checkFocusInOuts") ) { return __checkFocusInOuts_dyn(); }
		if (HX_FIELD_EQ(inName,"__mouseOverObjects") ) { return __mouseOverObjects; }
		if (HX_FIELD_EQ(inName,"__focusOverObjects") ) { return __focusOverObjects; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"OrientationPortrait") ) { return OrientationPortrait; }
		if (HX_FIELD_EQ(inName,"OrientationFaceDown") ) { return OrientationFaceDown; }
		if (HX_FIELD_EQ(inName,"setFixedOrientation") ) { return setFixedOrientation_dyn(); }
		if (HX_FIELD_EQ(inName,"nme_stage_set_focus") ) { return nme_stage_set_focus; }
		if (HX_FIELD_EQ(inName,"nme_stage_is_opengl") ) { return nme_stage_is_opengl; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_align") ) { return nme_stage_get_align; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_align") ) { return nme_stage_set_align; }
		if (HX_FIELD_EQ(inName,"__processStageEvent") ) { return __processStageEvent_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getNormalOrientation") ) { return getNormalOrientation; }
		if (HX_FIELD_EQ(inName,"pauseWhenDeactivated") ) { return pauseWhenDeactivated; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shouldRotateInterface") ) { return shouldRotateInterface; }
		if (HX_FIELD_EQ(inName,"nme_set_stage_handler") ) { return nme_set_stage_handler; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_quality") ) { return nme_stage_get_quality; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_quality") ) { return nme_stage_set_quality; }
		if (HX_FIELD_EQ(inName,"nme_stage_show_cursor") ) { return nme_stage_show_cursor; }
		if (HX_FIELD_EQ(inName,"__doProcessStageEvent") ) { return __doProcessStageEvent_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_stage_get_focus_id") ) { return nme_stage_get_focus_id; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_stage_get_dpi_scale") ) { return nme_stage_get_dpi_scale; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_next_wake") ) { return nme_stage_set_next_wake; }
		if (HX_FIELD_EQ(inName,"nme_stage_resize_window") ) { return nme_stage_resize_window; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"OrientationLandscapeLeft") ) { return OrientationLandscapeLeft; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_focus_rect") ) { return nme_stage_get_focus_rect; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_focus_rect") ) { return nme_stage_set_focus_rect; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_scale_mode") ) { return nme_stage_get_scale_mode; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_scale_mode") ) { return nme_stage_set_scale_mode; }
		if (HX_FIELD_EQ(inName,"nme_stage_request_render") ) { return nme_stage_request_render; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"OrientationLandscapeRight") ) { return OrientationLandscapeRight; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_stage_width") ) { return nme_stage_get_stage_width; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_orientation") ) { return nme_stage_get_orientation; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_stage_get_stage_height") ) { return nme_stage_get_stage_height; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_stage_get_display_state") ) { return nme_stage_get_display_state; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_display_state") ) { return nme_stage_set_display_state; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"OrientationPortraitUpsideDown") ) { return OrientationPortraitUpsideDown; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_stage_set_fixed_orientation") ) { return nme_stage_set_fixed_orientation; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nme_stage_get_normal_orientation") ) { return nme_stage_get_normal_orientation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onKey") ) { onKey=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focus") ) { return set_focus(inValue); }
		if (HX_FIELD_EQ(inName,"align") ) { return set_align(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onQuit") ) { onQuit=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return set_quality(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isOpenGL") ) { isOpenGL=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dpiScale") ) { dpiScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"efAltDown") ) { efAltDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sUpEvents") ) { sUpEvents=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__invalid") ) { __invalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return set_scaleMode(inValue); }
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp) return set_frameRate(inValue);frameRate=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"efLeftDown") ) { efLeftDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"efCtrlDown") ) { efCtrlDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__lastDown") ) { __lastDown=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageWidth") ) { stageWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"efShiftDown") ) { efShiftDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sDownEvents") ) { sDownEvents=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__touchInfo") ) { __touchInfo=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageHeight") ) { stageHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sClickEvents") ) { sClickEvents=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__nextRender") ) { __nextRender=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__lastRender") ) { __lastRender=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragObject") ) { __dragObject=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragBounds") ) { __dragBounds=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayState") ) { return set_displayState(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__earlyWakeup") ) { __earlyWakeup=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"efCommandDown") ) { efCommandDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__framePeriod") ) { __framePeriod=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragOffsetY") ) { __dragOffsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragOffsetX") ) { __dragOffsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__joyAxisData") ) { __joyAxisData=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderRequest") ) { renderRequest=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__mouseChanges") ) { __mouseChanges=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__touchChanges") ) { __touchChanges=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"getOrientation") ) { getOrientation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { return set_stageFocusRect(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"efLocationRight") ) { efLocationRight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"efNoNativeClick") ) { efNoNativeClick=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__lastClickTime") ) { __lastClickTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nme_render_stage") ) { nme_render_stage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"OrientationFaceUp") ) { OrientationFaceUp=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__mouseOverObjects") ) { __mouseOverObjects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__focusOverObjects") ) { __focusOverObjects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"OrientationPortrait") ) { OrientationPortrait=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OrientationFaceDown") ) { OrientationFaceDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_focus") ) { nme_stage_set_focus=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_is_opengl") ) { nme_stage_is_opengl=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_align") ) { nme_stage_get_align=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_align") ) { nme_stage_set_align=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getNormalOrientation") ) { getNormalOrientation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pauseWhenDeactivated") ) { pauseWhenDeactivated=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shouldRotateInterface") ) { shouldRotateInterface=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_set_stage_handler") ) { nme_set_stage_handler=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_quality") ) { nme_stage_get_quality=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_quality") ) { nme_stage_set_quality=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_show_cursor") ) { nme_stage_show_cursor=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_stage_get_focus_id") ) { nme_stage_get_focus_id=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_stage_get_dpi_scale") ) { nme_stage_get_dpi_scale=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_next_wake") ) { nme_stage_set_next_wake=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_resize_window") ) { nme_stage_resize_window=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"OrientationLandscapeLeft") ) { OrientationLandscapeLeft=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_focus_rect") ) { nme_stage_get_focus_rect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_focus_rect") ) { nme_stage_set_focus_rect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_scale_mode") ) { nme_stage_get_scale_mode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_scale_mode") ) { nme_stage_set_scale_mode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_request_render") ) { nme_stage_request_render=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"OrientationLandscapeRight") ) { OrientationLandscapeRight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_stage_width") ) { nme_stage_get_stage_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_orientation") ) { nme_stage_get_orientation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_stage_get_stage_height") ) { nme_stage_get_stage_height=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_stage_get_display_state") ) { nme_stage_get_display_state=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_display_state") ) { nme_stage_set_display_state=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"OrientationPortraitUpsideDown") ) { OrientationPortraitUpsideDown=inValue.Cast< int >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_stage_set_fixed_orientation") ) { nme_stage_set_fixed_orientation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nme_stage_get_normal_orientation") ) { nme_stage_get_normal_orientation=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__touchInfo"));
	outFields->push(HX_CSTRING("__nextRender"));
	outFields->push(HX_CSTRING("__mouseOverObjects"));
	outFields->push(HX_CSTRING("__lastRender"));
	outFields->push(HX_CSTRING("__lastDown"));
	outFields->push(HX_CSTRING("__lastClickTime"));
	outFields->push(HX_CSTRING("__invalid"));
	outFields->push(HX_CSTRING("__framePeriod"));
	outFields->push(HX_CSTRING("__focusOverObjects"));
	outFields->push(HX_CSTRING("__dragOffsetY"));
	outFields->push(HX_CSTRING("__dragOffsetX"));
	outFields->push(HX_CSTRING("__dragObject"));
	outFields->push(HX_CSTRING("__dragBounds"));
	outFields->push(HX_CSTRING("__joyAxisData"));
	outFields->push(HX_CSTRING("stageWidth"));
	outFields->push(HX_CSTRING("stageHeight"));
	outFields->push(HX_CSTRING("stageFocusRect"));
	outFields->push(HX_CSTRING("scaleMode"));
	outFields->push(HX_CSTRING("quality"));
	outFields->push(HX_CSTRING("pauseWhenDeactivated"));
	outFields->push(HX_CSTRING("isOpenGL"));
	outFields->push(HX_CSTRING("frameRate"));
	outFields->push(HX_CSTRING("focus"));
	outFields->push(HX_CSTRING("dpiScale"));
	outFields->push(HX_CSTRING("displayState"));
	outFields->push(HX_CSTRING("align"));
	outFields->push(HX_CSTRING("active"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__earlyWakeup"),
	HX_CSTRING("OrientationPortrait"),
	HX_CSTRING("OrientationPortraitUpsideDown"),
	HX_CSTRING("OrientationLandscapeRight"),
	HX_CSTRING("OrientationLandscapeLeft"),
	HX_CSTRING("OrientationFaceUp"),
	HX_CSTRING("OrientationFaceDown"),
	HX_CSTRING("efLeftDown"),
	HX_CSTRING("efShiftDown"),
	HX_CSTRING("efCtrlDown"),
	HX_CSTRING("efAltDown"),
	HX_CSTRING("efCommandDown"),
	HX_CSTRING("efLocationRight"),
	HX_CSTRING("efNoNativeClick"),
	HX_CSTRING("sClickEvents"),
	HX_CSTRING("sDownEvents"),
	HX_CSTRING("sUpEvents"),
	HX_CSTRING("__mouseChanges"),
	HX_CSTRING("__touchChanges"),
	HX_CSTRING("getOrientation"),
	HX_CSTRING("getNormalOrientation"),
	HX_CSTRING("setFixedOrientation"),
	HX_CSTRING("shouldRotateInterface"),
	HX_CSTRING("nme_set_stage_handler"),
	HX_CSTRING("nme_render_stage"),
	HX_CSTRING("nme_stage_get_focus_id"),
	HX_CSTRING("nme_stage_set_focus"),
	HX_CSTRING("nme_stage_get_focus_rect"),
	HX_CSTRING("nme_stage_set_focus_rect"),
	HX_CSTRING("nme_stage_is_opengl"),
	HX_CSTRING("nme_stage_get_stage_width"),
	HX_CSTRING("nme_stage_get_stage_height"),
	HX_CSTRING("nme_stage_get_dpi_scale"),
	HX_CSTRING("nme_stage_get_scale_mode"),
	HX_CSTRING("nme_stage_set_scale_mode"),
	HX_CSTRING("nme_stage_get_align"),
	HX_CSTRING("nme_stage_set_align"),
	HX_CSTRING("nme_stage_get_quality"),
	HX_CSTRING("nme_stage_set_quality"),
	HX_CSTRING("nme_stage_get_display_state"),
	HX_CSTRING("nme_stage_set_display_state"),
	HX_CSTRING("nme_stage_set_next_wake"),
	HX_CSTRING("nme_stage_request_render"),
	HX_CSTRING("nme_stage_resize_window"),
	HX_CSTRING("nme_stage_show_cursor"),
	HX_CSTRING("nme_stage_set_fixed_orientation"),
	HX_CSTRING("nme_stage_get_orientation"),
	HX_CSTRING("nme_stage_get_normal_orientation"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_stageWidth"),
	HX_CSTRING("get_stageHeight"),
	HX_CSTRING("set_stageFocusRect"),
	HX_CSTRING("get_stageFocusRect"),
	HX_CSTRING("get_stage"),
	HX_CSTRING("set_scaleMode"),
	HX_CSTRING("get_scaleMode"),
	HX_CSTRING("set_quality"),
	HX_CSTRING("get_quality"),
	HX_CSTRING("get_isOpenGL"),
	HX_CSTRING("set_frameRate"),
	HX_CSTRING("set_focus"),
	HX_CSTRING("get_focus"),
	HX_CSTRING("get_dpiScale"),
	HX_CSTRING("set_displayState"),
	HX_CSTRING("get_displayState"),
	HX_CSTRING("set_align"),
	HX_CSTRING("get_align"),
	HX_CSTRING("__updateNextWake"),
	HX_CSTRING("__stopDrag"),
	HX_CSTRING("__startDrag"),
	HX_CSTRING("__setActive"),
	HX_CSTRING("__render"),
	HX_CSTRING("__pollTimers"),
	HX_CSTRING("__onTouch"),
	HX_CSTRING("__onSysWM"),
	HX_CSTRING("__onResize"),
	HX_CSTRING("__onMouse"),
	HX_CSTRING("__onKey"),
	HX_CSTRING("__onJoystick"),
	HX_CSTRING("__onFocus"),
	HX_CSTRING("__onChange"),
	HX_CSTRING("__nextFrameDue"),
	HX_CSTRING("__drag"),
	HX_CSTRING("__processStageEvent"),
	HX_CSTRING("__doProcessStageEvent"),
	HX_CSTRING("__checkRender"),
	HX_CSTRING("__checkInOuts"),
	HX_CSTRING("__checkFocusInOuts"),
	HX_CSTRING("__addCharCode"),
	HX_CSTRING("showCursor"),
	HX_CSTRING("resize"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("__touchInfo"),
	HX_CSTRING("__nextRender"),
	HX_CSTRING("__mouseOverObjects"),
	HX_CSTRING("__lastRender"),
	HX_CSTRING("__lastDown"),
	HX_CSTRING("__lastClickTime"),
	HX_CSTRING("__invalid"),
	HX_CSTRING("__framePeriod"),
	HX_CSTRING("__focusOverObjects"),
	HX_CSTRING("__dragOffsetY"),
	HX_CSTRING("__dragOffsetX"),
	HX_CSTRING("__dragObject"),
	HX_CSTRING("__dragBounds"),
	HX_CSTRING("__joyAxisData"),
	HX_CSTRING("stageWidth"),
	HX_CSTRING("stageHeight"),
	HX_CSTRING("renderRequest"),
	HX_CSTRING("pauseWhenDeactivated"),
	HX_CSTRING("onQuit"),
	HX_CSTRING("onKey"),
	HX_CSTRING("isOpenGL"),
	HX_CSTRING("frameRate"),
	HX_CSTRING("dpiScale"),
	HX_CSTRING("active"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stage_obj::__earlyWakeup,"__earlyWakeup");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationPortrait,"OrientationPortrait");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationPortraitUpsideDown,"OrientationPortraitUpsideDown");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationLandscapeRight,"OrientationLandscapeRight");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationLandscapeLeft,"OrientationLandscapeLeft");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationFaceUp,"OrientationFaceUp");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationFaceDown,"OrientationFaceDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efLeftDown,"efLeftDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efShiftDown,"efShiftDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efCtrlDown,"efCtrlDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efAltDown,"efAltDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efCommandDown,"efCommandDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efLocationRight,"efLocationRight");
	HX_MARK_MEMBER_NAME(Stage_obj::efNoNativeClick,"efNoNativeClick");
	HX_MARK_MEMBER_NAME(Stage_obj::sClickEvents,"sClickEvents");
	HX_MARK_MEMBER_NAME(Stage_obj::sDownEvents,"sDownEvents");
	HX_MARK_MEMBER_NAME(Stage_obj::sUpEvents,"sUpEvents");
	HX_MARK_MEMBER_NAME(Stage_obj::__mouseChanges,"__mouseChanges");
	HX_MARK_MEMBER_NAME(Stage_obj::__touchChanges,"__touchChanges");
	HX_MARK_MEMBER_NAME(Stage_obj::getOrientation,"getOrientation");
	HX_MARK_MEMBER_NAME(Stage_obj::getNormalOrientation,"getNormalOrientation");
	HX_MARK_MEMBER_NAME(Stage_obj::shouldRotateInterface,"shouldRotateInterface");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_set_stage_handler,"nme_set_stage_handler");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_render_stage,"nme_render_stage");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_focus_id,"nme_stage_get_focus_id");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_focus,"nme_stage_set_focus");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_focus_rect,"nme_stage_get_focus_rect");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_focus_rect,"nme_stage_set_focus_rect");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_is_opengl,"nme_stage_is_opengl");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_stage_width,"nme_stage_get_stage_width");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_stage_height,"nme_stage_get_stage_height");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_dpi_scale,"nme_stage_get_dpi_scale");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_scale_mode,"nme_stage_get_scale_mode");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_scale_mode,"nme_stage_set_scale_mode");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_align,"nme_stage_get_align");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_align,"nme_stage_set_align");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_quality,"nme_stage_get_quality");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_quality,"nme_stage_set_quality");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_display_state,"nme_stage_get_display_state");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_display_state,"nme_stage_set_display_state");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_next_wake,"nme_stage_set_next_wake");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_request_render,"nme_stage_request_render");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_resize_window,"nme_stage_resize_window");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_show_cursor,"nme_stage_show_cursor");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_fixed_orientation,"nme_stage_set_fixed_orientation");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_orientation,"nme_stage_get_orientation");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_normal_orientation,"nme_stage_get_normal_orientation");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stage_obj::__earlyWakeup,"__earlyWakeup");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationPortrait,"OrientationPortrait");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationPortraitUpsideDown,"OrientationPortraitUpsideDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationLandscapeRight,"OrientationLandscapeRight");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationLandscapeLeft,"OrientationLandscapeLeft");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationFaceUp,"OrientationFaceUp");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationFaceDown,"OrientationFaceDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efLeftDown,"efLeftDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efShiftDown,"efShiftDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efCtrlDown,"efCtrlDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efAltDown,"efAltDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efCommandDown,"efCommandDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efLocationRight,"efLocationRight");
	HX_VISIT_MEMBER_NAME(Stage_obj::efNoNativeClick,"efNoNativeClick");
	HX_VISIT_MEMBER_NAME(Stage_obj::sClickEvents,"sClickEvents");
	HX_VISIT_MEMBER_NAME(Stage_obj::sDownEvents,"sDownEvents");
	HX_VISIT_MEMBER_NAME(Stage_obj::sUpEvents,"sUpEvents");
	HX_VISIT_MEMBER_NAME(Stage_obj::__mouseChanges,"__mouseChanges");
	HX_VISIT_MEMBER_NAME(Stage_obj::__touchChanges,"__touchChanges");
	HX_VISIT_MEMBER_NAME(Stage_obj::getOrientation,"getOrientation");
	HX_VISIT_MEMBER_NAME(Stage_obj::getNormalOrientation,"getNormalOrientation");
	HX_VISIT_MEMBER_NAME(Stage_obj::shouldRotateInterface,"shouldRotateInterface");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_set_stage_handler,"nme_set_stage_handler");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_render_stage,"nme_render_stage");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_get_focus_id,"nme_stage_get_focus_id");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_set_focus,"nme_stage_set_focus");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_get_focus_rect,"nme_stage_get_focus_rect");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_set_focus_rect,"nme_stage_set_focus_rect");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_is_opengl,"nme_stage_is_opengl");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_get_stage_width,"nme_stage_get_stage_width");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_get_stage_height,"nme_stage_get_stage_height");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_get_dpi_scale,"nme_stage_get_dpi_scale");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_get_scale_mode,"nme_stage_get_scale_mode");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_set_scale_mode,"nme_stage_set_scale_mode");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_get_align,"nme_stage_get_align");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_set_align,"nme_stage_set_align");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_get_quality,"nme_stage_get_quality");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_set_quality,"nme_stage_set_quality");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_get_display_state,"nme_stage_get_display_state");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_set_display_state,"nme_stage_set_display_state");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_set_next_wake,"nme_stage_set_next_wake");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_request_render,"nme_stage_request_render");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_resize_window,"nme_stage_resize_window");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_show_cursor,"nme_stage_show_cursor");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_set_fixed_orientation,"nme_stage_set_fixed_orientation");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_get_orientation,"nme_stage_get_orientation");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_get_normal_orientation,"nme_stage_get_normal_orientation");
};

Class Stage_obj::__mClass;

void Stage_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display.Stage"), hx::TCanCast< Stage_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Stage_obj::__boot()
{
	__earlyWakeup= 0.005;
	OrientationPortrait= (int)1;
	OrientationPortraitUpsideDown= (int)2;
	OrientationLandscapeRight= (int)3;
	OrientationLandscapeLeft= (int)4;
	OrientationFaceUp= (int)5;
	OrientationFaceDown= (int)6;
	efLeftDown= (int)1;
	efShiftDown= (int)2;
	efCtrlDown= (int)4;
	efAltDown= (int)8;
	efCommandDown= (int)16;
	efLocationRight= (int)16384;
	efNoNativeClick= (int)65536;
	sClickEvents= Array_obj< ::String >::__new().Add(HX_CSTRING("click")).Add(HX_CSTRING("middleClick")).Add(HX_CSTRING("rightClick"));
	sDownEvents= Array_obj< ::String >::__new().Add(HX_CSTRING("mouseDown")).Add(HX_CSTRING("middleMouseDown")).Add(HX_CSTRING("rightMouseDown"));
	sUpEvents= Array_obj< ::String >::__new().Add(HX_CSTRING("mouseUp")).Add(HX_CSTRING("middleMouseUp")).Add(HX_CSTRING("rightMouseUp"));
	__mouseChanges= Array_obj< ::String >::__new().Add(::flash::events::MouseEvent_obj::MOUSE_OUT).Add(::flash::events::MouseEvent_obj::MOUSE_OVER).Add(::flash::events::MouseEvent_obj::ROLL_OUT).Add(::flash::events::MouseEvent_obj::ROLL_OVER);
	__touchChanges= Array_obj< ::String >::__new().Add(::flash::events::TouchEvent_obj::TOUCH_OUT).Add(::flash::events::TouchEvent_obj::TOUCH_OVER).Add(::flash::events::TouchEvent_obj::TOUCH_ROLL_OUT).Add(::flash::events::TouchEvent_obj::TOUCH_ROLL_OVER);
	getOrientation = new __default_getOrientation;

	getNormalOrientation = new __default_getNormalOrientation;

	shouldRotateInterface = new __default_shouldRotateInterface;

	nme_set_stage_handler= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_set_stage_handler"),(int)4);
	nme_render_stage= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_render_stage"),(int)1);
	nme_stage_get_focus_id= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_get_focus_id"),(int)1);
	nme_stage_set_focus= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_set_focus"),(int)3);
	nme_stage_get_focus_rect= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_get_focus_rect"),(int)1);
	nme_stage_set_focus_rect= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_set_focus_rect"),(int)2);
	nme_stage_is_opengl= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_is_opengl"),(int)1);
	nme_stage_get_stage_width= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_get_stage_width"),(int)1);
	nme_stage_get_stage_height= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_get_stage_height"),(int)1);
	nme_stage_get_dpi_scale= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_get_dpi_scale"),(int)1);
	nme_stage_get_scale_mode= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_get_scale_mode"),(int)1);
	nme_stage_set_scale_mode= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_set_scale_mode"),(int)2);
	nme_stage_get_align= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_get_align"),(int)1);
	nme_stage_set_align= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_set_align"),(int)2);
	nme_stage_get_quality= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_get_quality"),(int)1);
	nme_stage_set_quality= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_set_quality"),(int)2);
	nme_stage_get_display_state= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_get_display_state"),(int)1);
	nme_stage_set_display_state= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_set_display_state"),(int)2);
	nme_stage_set_next_wake= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_set_next_wake"),(int)2);
	nme_stage_request_render= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_request_render"),(int)0);
	nme_stage_resize_window= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_resize_window"),(int)3);
	nme_stage_show_cursor= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_show_cursor"),(int)2);
	nme_stage_set_fixed_orientation= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_set_fixed_orientation"),(int)1);
	nme_stage_get_orientation= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_get_orientation"),(int)0);
	nme_stage_get_normal_orientation= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_get_normal_orientation"),(int)0);
}

} // end namespace flash
} // end namespace display
