#include <hxcpp.h>

#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion__Actuate_TransformOptions
#include <motion/_Actuate/TransformOptions.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_TransformActuator
#include <motion/actuators/TransformActuator.h>
#endif
namespace motion{
namespace _Actuate{

Void TransformOptions_obj::__construct(Dynamic target,Float duration,bool overwrite)
{
HX_STACK_PUSH("TransformOptions::new","motion/Actuate.hx",460);
{
	HX_STACK_LINE(462)
	this->target = target;
	HX_STACK_LINE(463)
	this->duration = duration;
	HX_STACK_LINE(464)
	this->overwrite = overwrite;
}
;
	return null();
}

TransformOptions_obj::~TransformOptions_obj() { }

Dynamic TransformOptions_obj::__CreateEmpty() { return  new TransformOptions_obj; }
hx::ObjectPtr< TransformOptions_obj > TransformOptions_obj::__new(Dynamic target,Float duration,bool overwrite)
{  hx::ObjectPtr< TransformOptions_obj > result = new TransformOptions_obj();
	result->__construct(target,duration,overwrite);
	return result;}

Dynamic TransformOptions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TransformOptions_obj > result = new TransformOptions_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::motion::actuators::IGenericActuator TransformOptions_obj::sound( Dynamic volume,Dynamic pan){
	HX_STACK_PUSH("TransformOptions::sound","motion/Actuate.hx",497);
	HX_STACK_THIS(this);
	HX_STACK_ARG(volume,"volume");
	HX_STACK_ARG(pan,"pan");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_PUSH("*::closure","motion/Actuate.hx",499);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(499)
	Dynamic properties = _Function_1_1::Block();		HX_STACK_VAR(properties,"properties");
	HX_STACK_LINE(501)
	if (((volume != null()))){
		HX_STACK_LINE(501)
		properties->__FieldRef(HX_CSTRING("soundVolume")) = volume;
	}
	HX_STACK_LINE(507)
	if (((pan != null()))){
		HX_STACK_LINE(507)
		properties->__FieldRef(HX_CSTRING("soundPan")) = pan;
	}
	HX_STACK_LINE(513)
	return ::motion::Actuate_obj::tween(this->target,this->duration,properties,this->overwrite,hx::ClassOf< ::motion::actuators::TransformActuator >());
}


HX_DEFINE_DYNAMIC_FUNC2(TransformOptions_obj,sound,return )

::motion::actuators::IGenericActuator TransformOptions_obj::color( hx::Null< Float >  __o_value,hx::Null< Float >  __o_strength,Dynamic alpha){
Float value = __o_value.Default(0);
Float strength = __o_strength.Default(1);
	HX_STACK_PUSH("TransformOptions::color","motion/Actuate.hx",476);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(strength,"strength");
	HX_STACK_ARG(alpha,"alpha");
{
		struct _Function_1_1{
			inline static Dynamic Block( Float &value,Float &strength){
				HX_STACK_PUSH("*::closure","motion/Actuate.hx",478);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("colorValue") , value,false);
					__result->Add(HX_CSTRING("colorStrength") , strength,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(478)
		Dynamic properties = _Function_1_1::Block(value,strength);		HX_STACK_VAR(properties,"properties");
		HX_STACK_LINE(480)
		if (((alpha != null()))){
			HX_STACK_LINE(480)
			properties->__FieldRef(HX_CSTRING("colorAlpha")) = alpha;
		}
		HX_STACK_LINE(486)
		return ::motion::Actuate_obj::tween(this->target,this->duration,properties,this->overwrite,hx::ClassOf< ::motion::actuators::TransformActuator >());
	}
}


HX_DEFINE_DYNAMIC_FUNC3(TransformOptions_obj,color,return )


TransformOptions_obj::TransformOptions_obj()
{
}

void TransformOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TransformOptions);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(overwrite,"overwrite");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_END_CLASS();
}

void TransformOptions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(overwrite,"overwrite");
	HX_VISIT_MEMBER_NAME(duration,"duration");
}

Dynamic TransformOptions_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return sound_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"overwrite") ) { return overwrite; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TransformOptions_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"overwrite") ) { overwrite=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TransformOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("overwrite"));
	outFields->push(HX_CSTRING("duration"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("sound"),
	HX_CSTRING("color"),
	HX_CSTRING("target"),
	HX_CSTRING("overwrite"),
	HX_CSTRING("duration"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TransformOptions_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TransformOptions_obj::__mClass,"__mClass");
};

Class TransformOptions_obj::__mClass;

void TransformOptions_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion._Actuate.TransformOptions"), hx::TCanCast< TransformOptions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TransformOptions_obj::__boot()
{
}

} // end namespace motion
} // end namespace _Actuate
