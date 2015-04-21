#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Behavior
#include <com/stencyl/behavior/Behavior.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_BehaviorManager
#include <com/stencyl/behavior/BehaviorManager.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
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

Void BehaviorManager_obj::__construct()
{
HX_STACK_PUSH("BehaviorManager::new","com/stencyl/behavior/BehaviorManager.hx",14);
{
	HX_STACK_LINE(15)
	this->behaviors = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(16)
	this->cache = ::haxe::ds::StringMap_obj::__new();
}
;
	return null();
}

BehaviorManager_obj::~BehaviorManager_obj() { }

Dynamic BehaviorManager_obj::__CreateEmpty() { return  new BehaviorManager_obj; }
hx::ObjectPtr< BehaviorManager_obj > BehaviorManager_obj::__new()
{  hx::ObjectPtr< BehaviorManager_obj > result = new BehaviorManager_obj();
	result->__construct();
	return result;}

Dynamic BehaviorManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BehaviorManager_obj > result = new BehaviorManager_obj();
	result->__construct();
	return result;}

Dynamic BehaviorManager_obj::call2( ::String behaviorName,::String msg,Dynamic args){
	HX_STACK_PUSH("BehaviorManager::call2","com/stencyl/behavior/BehaviorManager.hx",221);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(222)
	if (((this->cache == null()))){
		HX_STACK_LINE(223)
		return null();
	}
	HX_STACK_LINE(227)
	Dynamic toReturn = null();		HX_STACK_VAR(toReturn,"toReturn");
	HX_STACK_LINE(228)
	::com::stencyl::behavior::Behavior item = this->cache->get(behaviorName);		HX_STACK_VAR(item,"item");
	HX_STACK_LINE(230)
	if (((item != null()))){
		HX_STACK_LINE(232)
		if (((bool(!(item->enabled)) || bool((item->script == null()))))){
			HX_STACK_LINE(233)
			return toReturn;
		}
		HX_STACK_LINE(243)
		try{
			HX_STACK_LINE(246)
			Dynamic f = ::Reflect_obj::field(item->script,msg);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(248)
			if (((f != null()))){
				HX_STACK_LINE(249)
				toReturn = ::Reflect_obj::callMethod(item->script,f,args);
			}
			else{
				HX_STACK_LINE(254)
				item->script->forwardMessage(msg);
			}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::String >() ){
				HX_STACK_BEGIN_CATCH
				::String e = __e;{
					HX_STACK_LINE(266)
					item->script->forwardMessage(msg);
				}
			}
			else throw(__e);
		}
	}
	HX_STACK_LINE(271)
	return toReturn;
}


HX_DEFINE_DYNAMIC_FUNC3(BehaviorManager_obj,call2,return )

Dynamic BehaviorManager_obj::call( ::String msg,Dynamic args){
	HX_STACK_PUSH("BehaviorManager::call","com/stencyl/behavior/BehaviorManager.hx",166);
	HX_STACK_THIS(this);
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(167)
	if (((this->cache == null()))){
		HX_STACK_LINE(168)
		return null();
	}
	HX_STACK_LINE(172)
	Dynamic toReturn = null();		HX_STACK_VAR(toReturn,"toReturn");
	HX_STACK_LINE(174)
	{
		HX_STACK_LINE(174)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->behaviors->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(174)
		while(((_g1 < _g))){
			HX_STACK_LINE(174)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(176)
			::com::stencyl::behavior::Behavior item = this->behaviors->__get(i).StaticCast< ::com::stencyl::behavior::Behavior >();		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(178)
			if (((bool(!(item->enabled)) || bool((item->script == null()))))){
				HX_STACK_LINE(179)
				continue;
			}
			HX_STACK_LINE(189)
			try{
				HX_STACK_LINE(192)
				Dynamic f = ::Reflect_obj::field(item->script,msg);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(194)
				if (((f != null()))){
					HX_STACK_LINE(195)
					toReturn = ::Reflect_obj::callMethod(item->script,f,args);
				}
				else{
					HX_STACK_LINE(200)
					item->script->forwardMessage(msg);
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(212)
						item->script->forwardMessage(msg);
					}
				}
				else throw(__e);
			}
		}
	}
	HX_STACK_LINE(217)
	return toReturn;
}


HX_DEFINE_DYNAMIC_FUNC2(BehaviorManager_obj,call,return )

Void BehaviorManager_obj::setAttribute( ::String behaviorName,::String attributeName,Dynamic value){
{
		HX_STACK_PUSH("BehaviorManager::setAttribute","com/stencyl/behavior/BehaviorManager.hx",135);
		HX_STACK_THIS(this);
		HX_STACK_ARG(behaviorName,"behaviorName");
		HX_STACK_ARG(attributeName,"attributeName");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(136)
		::com::stencyl::behavior::Behavior b = this->cache->get(behaviorName);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(138)
		if (((bool((b != null())) && bool((b->script != null()))))){
			HX_STACK_LINE(140)
			Dynamic field = ::Reflect_obj::field(b->script,attributeName);		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(142)
			if (((bool((field != null())) || bool(::Reflect_obj::hasField(b->script,attributeName))))){
				HX_STACK_LINE(145)
				Dynamic o = b->script;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(145)
				if (((o != null()))){
					HX_STACK_LINE(145)
					o->__SetField(attributeName,value,false);
				}
			}
			else{
				HX_STACK_LINE(152)
				Dynamic o = b->script;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(152)
				if (((o != null()))){
					HX_STACK_LINE(152)
					o->__SetField(attributeName,value,false);
				}
			}
		}
		else{
			HX_STACK_LINE(160)
			::haxe::Log_obj::trace((HX_CSTRING("Warning: Behavior does not exist - ") + behaviorName),hx::SourceInfo(HX_CSTRING("BehaviorManager.hx"),161,HX_CSTRING("com.stencyl.behavior.BehaviorManager"),HX_CSTRING("setAttribute")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BehaviorManager_obj,setAttribute,(void))

Dynamic BehaviorManager_obj::getAttribute( ::String behaviorName,::String attributeName){
	HX_STACK_PUSH("BehaviorManager::getAttribute","com/stencyl/behavior/BehaviorManager.hx",106);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(attributeName,"attributeName");
	HX_STACK_LINE(107)
	::com::stencyl::behavior::Behavior b = this->cache->get(behaviorName);		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(109)
	if (((bool((b != null())) && bool((b->script != null()))))){
		HX_STACK_LINE(111)
		attributeName = b->script->toInternalName(attributeName);
		HX_STACK_LINE(113)
		Dynamic field = ::Reflect_obj::field(b->script,attributeName);		HX_STACK_VAR(field,"field");
		HX_STACK_LINE(115)
		if (((field == null()))){
			HX_STACK_LINE(116)
			if ((!(::Reflect_obj::hasField(b->script,attributeName)))){
				HX_STACK_LINE(118)
				::haxe::Log_obj::trace((((HX_CSTRING("Get Warning: Attribute ") + attributeName) + HX_CSTRING(" does not exist for ")) + behaviorName),hx::SourceInfo(HX_CSTRING("BehaviorManager.hx"),119,HX_CSTRING("com.stencyl.behavior.BehaviorManager"),HX_CSTRING("getAttribute")));
			}
		}
		HX_STACK_LINE(123)
		return field;
	}
	else{
		HX_STACK_LINE(127)
		::haxe::Log_obj::trace((HX_CSTRING("Warning: Behavior does not exist - ") + behaviorName),hx::SourceInfo(HX_CSTRING("BehaviorManager.hx"),128,HX_CSTRING("com.stencyl.behavior.BehaviorManager"),HX_CSTRING("getAttribute")));
	}
	HX_STACK_LINE(131)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BehaviorManager_obj,getAttribute,return )

Void BehaviorManager_obj::initScripts( ){
{
		HX_STACK_PUSH("BehaviorManager::initScripts","com/stencyl/behavior/BehaviorManager.hx",93);
		HX_STACK_THIS(this);
		HX_STACK_LINE(94)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->behaviors->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		while(((_g1 < _g))){
			HX_STACK_LINE(94)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(96)
			::com::stencyl::behavior::Behavior b = this->behaviors->__get(i).StaticCast< ::com::stencyl::behavior::Behavior >();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(97)
			b->initScript(!(b->enabled));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BehaviorManager_obj,initScripts,(void))

bool BehaviorManager_obj::isBehaviorEnabled( ::String b){
	HX_STACK_PUSH("BehaviorManager::isBehaviorEnabled","com/stencyl/behavior/BehaviorManager.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(80)
	if ((this->hasBehavior(b))){
		HX_STACK_LINE(81)
		return this->cache->get(b)->__Field(HX_CSTRING("enabled"),true);
	}
	HX_STACK_LINE(85)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(BehaviorManager_obj,isBehaviorEnabled,return )

Void BehaviorManager_obj::disableBehavior( ::String b){
{
		HX_STACK_PUSH("BehaviorManager::disableBehavior","com/stencyl/behavior/BehaviorManager.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(71)
		if ((this->hasBehavior(b))){
			HX_STACK_LINE(73)
			this->cache->get(b)->__FieldRef(HX_CSTRING("enabled")) = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BehaviorManager_obj,disableBehavior,(void))

Void BehaviorManager_obj::enableBehavior( ::String b){
{
		HX_STACK_PUSH("BehaviorManager::enableBehavior","com/stencyl/behavior/BehaviorManager.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(46)
		if ((this->hasBehavior(b))){
			HX_STACK_LINE(49)
			::com::stencyl::behavior::Behavior bObj = this->cache->get(b);		HX_STACK_VAR(bObj,"bObj");
			HX_STACK_LINE(51)
			if (((bool((bObj->script != null())) && bool(!(bObj->script->scriptInit))))){
				HX_STACK_LINE(52)
				try{
					HX_STACK_LINE(55)
					bObj->script->init();
					HX_STACK_LINE(56)
					bObj->script->scriptInit = true;
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(61)
							::haxe::Log_obj::trace((HX_CSTRING("Error in when created for behavior: ") + bObj->name),hx::SourceInfo(HX_CSTRING("BehaviorManager.hx"),61,HX_CSTRING("com.stencyl.behavior.BehaviorManager"),HX_CSTRING("enableBehavior")));
							HX_STACK_LINE(62)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("BehaviorManager.hx"),62,HX_CSTRING("com.stencyl.behavior.BehaviorManager"),HX_CSTRING("enableBehavior")));
						}
					}
					else throw(__e);
				}
			}
			HX_STACK_LINE(66)
			bObj->enabled = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BehaviorManager_obj,enableBehavior,(void))

bool BehaviorManager_obj::hasBehavior( ::String b){
	HX_STACK_PUSH("BehaviorManager::hasBehavior","com/stencyl/behavior/BehaviorManager.hx",36);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(37)
	if (((this->cache == null()))){
		HX_STACK_LINE(38)
		return false;
	}
	HX_STACK_LINE(42)
	return (this->cache->get(b) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(BehaviorManager_obj,hasBehavior,return )

Void BehaviorManager_obj::add( ::com::stencyl::behavior::Behavior b){
{
		HX_STACK_PUSH("BehaviorManager::add","com/stencyl/behavior/BehaviorManager.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(31)
		this->cache->set(b->name,b);
		HX_STACK_LINE(32)
		this->behaviors->push(b);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BehaviorManager_obj,add,(void))

Void BehaviorManager_obj::destroy( ){
{
		HX_STACK_PUSH("BehaviorManager::destroy","com/stencyl/behavior/BehaviorManager.hx",20);
		HX_STACK_THIS(this);
		HX_STACK_LINE(21)
		this->behaviors = null();
		HX_STACK_LINE(22)
		this->cache = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BehaviorManager_obj,destroy,(void))


BehaviorManager_obj::BehaviorManager_obj()
{
}

void BehaviorManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BehaviorManager);
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(behaviors,"behaviors");
	HX_MARK_END_CLASS();
}

void BehaviorManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(behaviors,"behaviors");
}

Dynamic BehaviorManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"call2") ) { return call2_dyn(); }
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"behaviors") ) { return behaviors; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initScripts") ) { return initScripts_dyn(); }
		if (HX_FIELD_EQ(inName,"hasBehavior") ) { return hasBehavior_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setAttribute") ) { return setAttribute_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttribute") ) { return getAttribute_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enableBehavior") ) { return enableBehavior_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"disableBehavior") ) { return disableBehavior_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isBehaviorEnabled") ) { return isBehaviorEnabled_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BehaviorManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"behaviors") ) { behaviors=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BehaviorManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cache"));
	outFields->push(HX_CSTRING("behaviors"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("call2"),
	HX_CSTRING("call"),
	HX_CSTRING("setAttribute"),
	HX_CSTRING("getAttribute"),
	HX_CSTRING("initScripts"),
	HX_CSTRING("isBehaviorEnabled"),
	HX_CSTRING("disableBehavior"),
	HX_CSTRING("enableBehavior"),
	HX_CSTRING("hasBehavior"),
	HX_CSTRING("add"),
	HX_CSTRING("destroy"),
	HX_CSTRING("cache"),
	HX_CSTRING("behaviors"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BehaviorManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BehaviorManager_obj::__mClass,"__mClass");
};

Class BehaviorManager_obj::__mClass;

void BehaviorManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.behavior.BehaviorManager"), hx::TCanCast< BehaviorManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BehaviorManager_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace behavior
