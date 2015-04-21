#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_transitions_Transition
#include <com/stencyl/graphics/transitions/Transition.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
namespace com{
namespace stencyl{
namespace graphics{
namespace transitions{

Void Transition_obj::__construct(Float duration)
{
HX_STACK_PUSH("Transition::new","com/stencyl/graphics/transitions/Transition.hx",18);
{
	HX_STACK_LINE(19)
	this->duration = duration;
	HX_STACK_LINE(20)
	this->active = false;
	HX_STACK_LINE(21)
	this->complete = false;
	HX_STACK_LINE(23)
	if (((duration == (int)0))){
		HX_STACK_LINE(24)
		this->complete = true;
	}
}
;
	return null();
}

Transition_obj::~Transition_obj() { }

Dynamic Transition_obj::__CreateEmpty() { return  new Transition_obj; }
hx::ObjectPtr< Transition_obj > Transition_obj::__new(Float duration)
{  hx::ObjectPtr< Transition_obj > result = new Transition_obj();
	result->__construct(duration);
	return result;}

Dynamic Transition_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transition_obj > result = new Transition_obj();
	result->__construct(inArgs[0]);
	return result;}

Float Transition_obj::getDuration( ){
	HX_STACK_PUSH("Transition::getDuration","com/stencyl/graphics/transitions/Transition.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_LINE(73)
	return this->duration;
}


HX_DEFINE_DYNAMIC_FUNC0(Transition_obj,getDuration,return )

Void Transition_obj::draw( ::flash::display::Graphics g){
{
		HX_STACK_PUSH("Transition::draw","com/stencyl/graphics/transitions/Transition.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transition_obj,draw,(void))

Void Transition_obj::update( Float elapsedTime){
{
		HX_STACK_PUSH("Transition::update","com/stencyl/graphics/transitions/Transition.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Transition_obj,update,(void))

bool Transition_obj::isComplete( ){
	HX_STACK_PUSH("Transition::isComplete","com/stencyl/graphics/transitions/Transition.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_LINE(60)
	return this->complete;
}


HX_DEFINE_DYNAMIC_FUNC0(Transition_obj,isComplete,return )

bool Transition_obj::isActive( ){
	HX_STACK_PUSH("Transition::isActive","com/stencyl/graphics/transitions/Transition.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_LINE(55)
	return this->active;
}


HX_DEFINE_DYNAMIC_FUNC0(Transition_obj,isActive,return )

Void Transition_obj::cleanup( ){
{
		HX_STACK_PUSH("Transition::cleanup","com/stencyl/graphics/transitions/Transition.hx",51);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transition_obj,cleanup,(void))

Void Transition_obj::deactivate( ){
{
		HX_STACK_PUSH("Transition::deactivate","com/stencyl/graphics/transitions/Transition.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_LINE(45)
		this->active = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transition_obj,deactivate,(void))

Void Transition_obj::stop( ){
{
		HX_STACK_PUSH("Transition::stop","com/stencyl/graphics/transitions/Transition.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_LINE(40)
		this->complete = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transition_obj,stop,(void))

Void Transition_obj::reset( ){
{
		HX_STACK_PUSH("Transition::reset","com/stencyl/graphics/transitions/Transition.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_LINE(35)
		this->complete = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transition_obj,reset,(void))

Void Transition_obj::start( ){
{
		HX_STACK_PUSH("Transition::start","com/stencyl/graphics/transitions/Transition.hx",30);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transition_obj,start,(void))

::String Transition_obj::IN;

::String Transition_obj::OUT;

::String Transition_obj::THROUGH;


Transition_obj::Transition_obj()
{
}

void Transition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transition);
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_END_CLASS();
}

void Transition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(duration,"duration");
}

Dynamic Transition_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"IN") ) { return IN; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"OUT") ) { return OUT; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"THROUGH") ) { return THROUGH; }
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isActive") ) { return isActive_dyn(); }
		if (HX_FIELD_EQ(inName,"complete") ) { return complete; }
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return direction; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { return isComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDuration") ) { return getDuration_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Transition_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"IN") ) { IN=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"OUT") ) { OUT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"THROUGH") ) { THROUGH=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("complete"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("direction"));
	outFields->push(HX_CSTRING("duration"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("IN"),
	HX_CSTRING("OUT"),
	HX_CSTRING("THROUGH"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getDuration"),
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("isComplete"),
	HX_CSTRING("isActive"),
	HX_CSTRING("cleanup"),
	HX_CSTRING("deactivate"),
	HX_CSTRING("stop"),
	HX_CSTRING("reset"),
	HX_CSTRING("start"),
	HX_CSTRING("complete"),
	HX_CSTRING("active"),
	HX_CSTRING("direction"),
	HX_CSTRING("duration"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transition_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Transition_obj::IN,"IN");
	HX_MARK_MEMBER_NAME(Transition_obj::OUT,"OUT");
	HX_MARK_MEMBER_NAME(Transition_obj::THROUGH,"THROUGH");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transition_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Transition_obj::IN,"IN");
	HX_VISIT_MEMBER_NAME(Transition_obj::OUT,"OUT");
	HX_VISIT_MEMBER_NAME(Transition_obj::THROUGH,"THROUGH");
};

Class Transition_obj::__mClass;

void Transition_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.transitions.Transition"), hx::TCanCast< Transition_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Transition_obj::__boot()
{
	IN= HX_CSTRING("in");
	OUT= HX_CSTRING("out");
	THROUGH= HX_CSTRING("through");
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions
