#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_ActorScript
#include <com/stencyl/behavior/ActorScript.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Attribute
#include <com/stencyl/behavior/Attribute.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Behavior
#include <com/stencyl/behavior/Behavior.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_SceneScript
#include <com/stencyl/behavior/SceneScript.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Region
#include <com/stencyl/models/Region.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Group
#include <com/stencyl/models/actor/Group.h>
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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace stencyl{
namespace behavior{

Void Behavior_obj::__construct(Dynamic parent,::com::stencyl::Engine engine,int ID,::String name,::String classname,bool enabled,bool drawable,::haxe::ds::StringMap attributes,::String type,bool isEvent)
{
HX_STACK_PUSH("Behavior::new","com/stencyl/behavior/Behavior.hx",37);
{
	HX_STACK_LINE(38)
	this->isEvent = isEvent;
	HX_STACK_LINE(39)
	this->parent = parent;
	HX_STACK_LINE(40)
	this->engine = engine;
	HX_STACK_LINE(41)
	this->classname = classname;
	HX_STACK_LINE(43)
	if (((engine != null()))){
		HX_STACK_LINE(44)
		try{
			HX_STACK_LINE(46)
			this->cls = ::Type_obj::resolveClass(classname);
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::String >() ){
				HX_STACK_BEGIN_CATCH
				::String e = __e;{
					HX_STACK_LINE(52)
					::haxe::Log_obj::trace((HX_CSTRING("Could not load: ") + classname),hx::SourceInfo(HX_CSTRING("Behavior.hx"),52,HX_CSTRING("com.stencyl.behavior.Behavior"),HX_CSTRING("new")));
					HX_STACK_LINE(53)
					::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Behavior.hx"),53,HX_CSTRING("com.stencyl.behavior.Behavior"),HX_CSTRING("new")));
				}
			}
			else throw(__e);
		}
	}
	HX_STACK_LINE(57)
	this->enabled = enabled;
	HX_STACK_LINE(58)
	this->drawable = drawable;
	HX_STACK_LINE(60)
	this->ID = ID;
	HX_STACK_LINE(61)
	this->name = name;
	HX_STACK_LINE(62)
	this->type = type;
	HX_STACK_LINE(64)
	this->attributes = attributes;
}
;
	return null();
}

Behavior_obj::~Behavior_obj() { }

Dynamic Behavior_obj::__CreateEmpty() { return  new Behavior_obj; }
hx::ObjectPtr< Behavior_obj > Behavior_obj::__new(Dynamic parent,::com::stencyl::Engine engine,int ID,::String name,::String classname,bool enabled,bool drawable,::haxe::ds::StringMap attributes,::String type,bool isEvent)
{  hx::ObjectPtr< Behavior_obj > result = new Behavior_obj();
	result->__construct(parent,engine,ID,name,classname,enabled,drawable,attributes,type,isEvent);
	return result;}

Dynamic Behavior_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Behavior_obj > result = new Behavior_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return result;}

Void Behavior_obj::initAttributes( ){
{
		HX_STACK_PUSH("Behavior::initAttributes","com/stencyl/behavior/Behavior.hx",106);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::behavior::Behavior_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Behavior.hx",107);
				{
					HX_STACK_LINE(107)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->attributes);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/behavior/Behavior.hx",107);
						{
							HX_STACK_LINE(107)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(107)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(106)
		for(::cpp::FastIterator_obj< ::com::stencyl::behavior::Attribute > *__it = ::cpp::CreateFastIterator< ::com::stencyl::behavior::Attribute >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::behavior::Attribute a = __it->next();
			try{
				HX_STACK_LINE(112)
				if ((a->hidden)){
					HX_STACK_LINE(113)
					continue;
				}
				HX_STACK_LINE(117)
				if (((bool((bool((a->type == HX_CSTRING("actor"))) && bool((a->fieldName == HX_CSTRING("actor"))))) && bool(::Std_obj::is(this->script,hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))))){
					HX_STACK_LINE(118)
					continue;
				}
				HX_STACK_LINE(122)
				::String attributeName = this->script->toInternalName(a->fieldName);		HX_STACK_VAR(attributeName,"attributeName");
				HX_STACK_LINE(124)
				if (((bool((bool((a->type == HX_CSTRING("actor"))) || bool((a->type == HX_CSTRING("joint"))))) || bool((a->type == HX_CSTRING("region")))))){
					HX_STACK_LINE(126)
					int eID = ::Std_obj::parseInt((HX_CSTRING("") + ::Std_obj::string(a->getRealValue())));		HX_STACK_VAR(eID,"eID");
					HX_STACK_LINE(128)
					if (((a->type == HX_CSTRING("actor")))){
						HX_STACK_LINE(130)
						Dynamic o = this->script;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(130)
						if (((o != null()))){
							HX_STACK_LINE(130)
							o->__SetField(attributeName,this->engine->getActor(eID),false);
						}
					}
					else{
						HX_STACK_LINE(133)
						if (((a->type == HX_CSTRING("joint")))){
						}
						else{
							HX_STACK_LINE(139)
							if (((a->type == HX_CSTRING("region")))){
								HX_STACK_LINE(141)
								Dynamic o = this->script;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(141)
								if (((o != null()))){
									HX_STACK_LINE(141)
									o->__SetField(attributeName,this->engine->getRegion(eID),false);
								}
							}
							else{
								HX_STACK_LINE(144)
								if (((a->type == HX_CSTRING("terrainregion")))){
								}
							}
						}
					}
				}
				else{
					HX_STACK_LINE(151)
					if (((a->type == HX_CSTRING("actorgroup")))){
						HX_STACK_LINE(153)
						int groupID = ::Std_obj::parseInt((HX_CSTRING("") + ::Std_obj::string(a->getRealValue())));		HX_STACK_VAR(groupID,"groupID");
						HX_STACK_LINE(154)
						{
							HX_STACK_LINE(154)
							Dynamic o = this->script;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(154)
							if (((o != null()))){
								HX_STACK_LINE(154)
								o->__SetField(attributeName,this->engine->getGroup(groupID,null()),false);
							}
						}
					}
					else{
						HX_STACK_LINE(159)
						Dynamic realValue = a->getRealValue();		HX_STACK_VAR(realValue,"realValue");
						HX_STACK_LINE(163)
						if (((a->type == HX_CSTRING("list")))){
							HX_STACK_LINE(165)
							Dynamic list = null();		HX_STACK_VAR(list,"list");
							HX_STACK_LINE(167)
							if (((realValue != null()))){
								HX_STACK_LINE(169)
								list = hx::TCastToArray(realValue);
								HX_STACK_LINE(170)
								list = list->__Field(HX_CSTRING("copy"),true)();
							}
							else{
								HX_STACK_LINE(174)
								list = Dynamic( Array_obj<Dynamic>::__new());
							}
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								Dynamic o = this->script;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(178)
								if (((o != null()))){
									HX_STACK_LINE(178)
									o->__SetField(attributeName,list,false);
								}
							}
						}
						else{
							HX_STACK_LINE(183)
							Dynamic o = this->script;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(183)
							if (((o != null()))){
								HX_STACK_LINE(183)
								o->__SetField(attributeName,realValue,false);
							}
						}
					}
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(189)
						::haxe::Log_obj::trace((((HX_CSTRING("Could not init attribute: ") + a->fieldName) + HX_CSTRING(" - ")) + e),hx::SourceInfo(HX_CSTRING("Behavior.hx"),190,HX_CSTRING("com.stencyl.behavior.Behavior"),HX_CSTRING("initAttributes")));
					}
				}
				else throw(__e);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Behavior_obj,initAttributes,(void))

Void Behavior_obj::initScript( hx::Null< bool >  __o_initJustScript){
bool initJustScript = __o_initJustScript.Default(false);
	HX_STACK_PUSH("Behavior::initScript","com/stencyl/behavior/Behavior.hx",68);
	HX_STACK_THIS(this);
	HX_STACK_ARG(initJustScript,"initJustScript");
{
		HX_STACK_LINE(69)
		if (((this->cls == null()))){
			HX_STACK_LINE(71)
			::haxe::Log_obj::trace((((HX_CSTRING("Could not init Behavior: ") + this->name) + HX_CSTRING(" with ")) + this->classname),hx::SourceInfo(HX_CSTRING("Behavior.hx"),71,HX_CSTRING("com.stencyl.behavior.Behavior"),HX_CSTRING("initScript")));
			HX_STACK_LINE(72)
			this->script = ::com::stencyl::behavior::SceneScript_obj::__new(this->engine);
			HX_STACK_LINE(73)
			return null();
		}
		HX_STACK_LINE(76)
		if (((this->type == HX_CSTRING("actor")))){
			HX_STACK_LINE(77)
			this->script = ::Type_obj::createInstance(this->cls,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add(this->parent).Add(this->engine)));
		}
		else{
			HX_STACK_LINE(82)
			this->script = ::Type_obj::createInstance(this->cls,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add(this->engine)));
		}
		HX_STACK_LINE(86)
		this->script->wrapper = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(87)
		this->initAttributes();
		HX_STACK_LINE(89)
		if ((!(initJustScript))){
			HX_STACK_LINE(90)
			try{
				HX_STACK_LINE(93)
				this->script->init();
				HX_STACK_LINE(94)
				this->script->scriptInit = true;
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(99)
						::haxe::Log_obj::trace((HX_CSTRING("Error in when created for behavior: ") + this->name),hx::SourceInfo(HX_CSTRING("Behavior.hx"),99,HX_CSTRING("com.stencyl.behavior.Behavior"),HX_CSTRING("initScript")));
						HX_STACK_LINE(100)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Behavior.hx"),100,HX_CSTRING("com.stencyl.behavior.Behavior"),HX_CSTRING("initScript")));
					}
				}
				else throw(__e);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Behavior_obj,initScript,(void))


Behavior_obj::Behavior_obj()
{
}

void Behavior_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Behavior);
	HX_MARK_MEMBER_NAME(attributes,"attributes");
	HX_MARK_MEMBER_NAME(script,"script");
	HX_MARK_MEMBER_NAME(cls,"cls");
	HX_MARK_MEMBER_NAME(classname,"classname");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(isEvent,"isEvent");
	HX_MARK_MEMBER_NAME(drawable,"drawable");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(engine,"engine");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void Behavior_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(attributes,"attributes");
	HX_VISIT_MEMBER_NAME(script,"script");
	HX_VISIT_MEMBER_NAME(cls,"cls");
	HX_VISIT_MEMBER_NAME(classname,"classname");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(isEvent,"isEvent");
	HX_VISIT_MEMBER_NAME(drawable,"drawable");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(engine,"engine");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic Behavior_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cls") ) { return cls; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { return script; }
		if (HX_FIELD_EQ(inName,"engine") ) { return engine; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEvent") ) { return isEvent; }
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawable") ) { return drawable; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"classname") ) { return classname; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initScript") ) { return initScript_dyn(); }
		if (HX_FIELD_EQ(inName,"attributes") ) { return attributes; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initAttributes") ) { return initAttributes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Behavior_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cls") ) { cls=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { script=inValue.Cast< ::com::stencyl::behavior::Script >(); return inValue; }
		if (HX_FIELD_EQ(inName,"engine") ) { engine=inValue.Cast< ::com::stencyl::Engine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEvent") ) { isEvent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawable") ) { drawable=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"classname") ) { classname=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { attributes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Behavior_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("attributes"));
	outFields->push(HX_CSTRING("script"));
	outFields->push(HX_CSTRING("cls"));
	outFields->push(HX_CSTRING("classname"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("ID"));
	outFields->push(HX_CSTRING("isEvent"));
	outFields->push(HX_CSTRING("drawable"));
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("engine"));
	outFields->push(HX_CSTRING("parent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("initAttributes"),
	HX_CSTRING("initScript"),
	HX_CSTRING("attributes"),
	HX_CSTRING("script"),
	HX_CSTRING("cls"),
	HX_CSTRING("classname"),
	HX_CSTRING("type"),
	HX_CSTRING("name"),
	HX_CSTRING("ID"),
	HX_CSTRING("isEvent"),
	HX_CSTRING("drawable"),
	HX_CSTRING("enabled"),
	HX_CSTRING("engine"),
	HX_CSTRING("parent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Behavior_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Behavior_obj::__mClass,"__mClass");
};

Class Behavior_obj::__mClass;

void Behavior_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.behavior.Behavior"), hx::TCanCast< Behavior_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Behavior_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace behavior
