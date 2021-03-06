#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_filesystem_File
#include <flash/filesystem/File.h>
#endif
#ifndef INCLUDED_flash_net_SharedObject
#include <flash/net/SharedObject.h>
#endif
#ifndef INCLUDED_flash_net_SharedObjectFlushStatus
#include <flash/net/SharedObjectFlushStatus.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
namespace flash{
namespace net{

Void SharedObject_obj::__construct(::String name,::String localPath,Dynamic data)
{
HX_STACK_PUSH("SharedObject::new","flash/net/SharedObject.hx",25);
{
	HX_STACK_LINE(27)
	super::__construct(null());
	HX_STACK_LINE(29)
	this->name = name;
	HX_STACK_LINE(30)
	this->localPath = localPath;
	HX_STACK_LINE(31)
	this->data = data;
}
;
	return null();
}

SharedObject_obj::~SharedObject_obj() { }

Dynamic SharedObject_obj::__CreateEmpty() { return  new SharedObject_obj; }
hx::ObjectPtr< SharedObject_obj > SharedObject_obj::__new(::String name,::String localPath,Dynamic data)
{  hx::ObjectPtr< SharedObject_obj > result = new SharedObject_obj();
	result->__construct(name,localPath,data);
	return result;}

Dynamic SharedObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SharedObject_obj > result = new SharedObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void SharedObject_obj::setProperty( ::String propertyName,Dynamic value){
{
		HX_STACK_PUSH("SharedObject::setProperty","flash/net/SharedObject.hx",223);
		HX_STACK_THIS(this);
		HX_STACK_ARG(propertyName,"propertyName");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(223)
		if (((this->data != null()))){
			HX_STACK_LINE(227)
			Dynamic o = this->data;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(227)
			if (((o != null()))){
				HX_STACK_LINE(227)
				o->__SetField(propertyName,value,false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SharedObject_obj,setProperty,(void))

::flash::net::SharedObjectFlushStatus SharedObject_obj::flush( hx::Null< int >  __o_minDiskSpace){
int minDiskSpace = __o_minDiskSpace.Default(0);
	HX_STACK_PUSH("SharedObject::flush","flash/net/SharedObject.hx",121);
	HX_STACK_THIS(this);
	HX_STACK_ARG(minDiskSpace,"minDiskSpace");
{
		HX_STACK_LINE(123)
		::String encodedData = ::haxe::Serializer_obj::run(this->data);		HX_STACK_VAR(encodedData,"encodedData");
		HX_STACK_LINE(127)
		::flash::net::SharedObject_obj::nme_set_user_preference(this->name,encodedData);
		HX_STACK_LINE(146)
		return ::flash::net::SharedObjectFlushStatus_obj::FLUSHED;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,flush,return )

Void SharedObject_obj::close( ){
{
		HX_STACK_PUSH("SharedObject::close","flash/net/SharedObject.hx",57);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SharedObject_obj,close,(void))

Void SharedObject_obj::clear( ){
{
		HX_STACK_PUSH("SharedObject::clear","flash/net/SharedObject.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_LINE(36)
		::flash::net::SharedObject_obj::nme_clear_user_preference(this->name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SharedObject_obj,clear,(void))

::String SharedObject_obj::getFilePath( ::String name,::String localPath){
	HX_STACK_PUSH("SharedObject::getFilePath","flash/net/SharedObject.hx",151);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(localPath,"localPath");
	HX_STACK_LINE(153)
	::String path = ::flash::filesystem::File_obj::get_applicationStorageDirectory()->nativePath;		HX_STACK_VAR(path,"path");
	HX_STACK_LINE(154)
	hx::AddEq(path,((((HX_CSTRING("/") + localPath) + HX_CSTRING("/")) + name) + HX_CSTRING(".sol")));
	HX_STACK_LINE(155)
	return path;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SharedObject_obj,getFilePath,return )

::flash::net::SharedObject SharedObject_obj::getLocal( ::String name,::String localPath,hx::Null< bool >  __o_secure){
bool secure = __o_secure.Default(false);
	HX_STACK_PUSH("SharedObject::getLocal","flash/net/SharedObject.hx",160);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(localPath,"localPath");
	HX_STACK_ARG(secure,"secure");
{
		HX_STACK_LINE(162)
		if (((localPath == null()))){
			HX_STACK_LINE(162)
			localPath = HX_CSTRING("");
		}
		HX_STACK_LINE(170)
		::String rawData = ::flash::net::SharedObject_obj::nme_get_user_preference(name);		HX_STACK_VAR(rawData,"rawData");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","flash/net/SharedObject.hx",185);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(185)
		Dynamic loadedData = _Function_1_1::Block();		HX_STACK_VAR(loadedData,"loadedData");
		HX_STACK_LINE(187)
		if (((bool((rawData != HX_CSTRING(""))) && bool((rawData != null()))))){
			HX_STACK_LINE(187)
			try{
				HX_STACK_LINE(191)
				::haxe::Unserializer unserializer = ::haxe::Unserializer_obj::__new(rawData);		HX_STACK_VAR(unserializer,"unserializer");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_PUSH("*::closure","flash/net/SharedObject.hx",192);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("resolveEnum") , ::Type_obj::resolveEnum_dyn(),false);
							__result->Add(HX_CSTRING("resolveClass") , ::flash::net::SharedObject_obj::resolveClass_dyn(),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(192)
				unserializer->setResolver(_Function_3_1::Block());
				HX_STACK_LINE(193)
				loadedData = unserializer->unserialize();
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(197)
						::haxe::Log_obj::trace(HX_CSTRING("Could not unserialize SharedObject"),hx::SourceInfo(HX_CSTRING("SharedObject.hx"),197,HX_CSTRING("flash.net.SharedObject"),HX_CSTRING("getLocal")));
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_PUSH("*::closure","flash/net/SharedObject.hx",198);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(198)
						loadedData = _Function_3_1::Block();
					}
				}
			}
		}
		HX_STACK_LINE(204)
		::flash::net::SharedObject so = ::flash::net::SharedObject_obj::__new(name,localPath,loadedData);		HX_STACK_VAR(so,"so");
		HX_STACK_LINE(205)
		return so;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SharedObject_obj,getLocal,return )

::Class SharedObject_obj::resolveClass( ::String name){
	HX_STACK_PUSH("SharedObject::resolveClass","flash/net/SharedObject.hx",210);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(212)
	if (((name != null()))){
		HX_STACK_LINE(212)
		return ::Type_obj::resolveClass(::StringTools_obj::replace(::StringTools_obj::replace(name,HX_CSTRING("neash."),HX_CSTRING("native.")),HX_CSTRING("native."),HX_CSTRING("flash.")));
	}
	HX_STACK_LINE(218)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,resolveClass,return )

Dynamic SharedObject_obj::nme_get_user_preference;

Dynamic SharedObject_obj::nme_set_user_preference;

Dynamic SharedObject_obj::nme_clear_user_preference;


SharedObject_obj::SharedObject_obj()
{
}

void SharedObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SharedObject);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(localPath,"localPath");
	HX_MARK_MEMBER_NAME(data,"data");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SharedObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(localPath,"localPath");
	HX_VISIT_MEMBER_NAME(data,"data");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SharedObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getLocal") ) { return getLocal_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"localPath") ) { return localPath; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getFilePath") ) { return getFilePath_dyn(); }
		if (HX_FIELD_EQ(inName,"setProperty") ) { return setProperty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveClass") ) { return resolveClass_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_get_user_preference") ) { return nme_get_user_preference; }
		if (HX_FIELD_EQ(inName,"nme_set_user_preference") ) { return nme_set_user_preference; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_clear_user_preference") ) { return nme_clear_user_preference; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SharedObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"localPath") ) { localPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_get_user_preference") ) { nme_get_user_preference=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_set_user_preference") ) { nme_set_user_preference=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_clear_user_preference") ) { nme_clear_user_preference=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SharedObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("localPath"));
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getFilePath"),
	HX_CSTRING("getLocal"),
	HX_CSTRING("resolveClass"),
	HX_CSTRING("nme_get_user_preference"),
	HX_CSTRING("nme_set_user_preference"),
	HX_CSTRING("nme_clear_user_preference"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setProperty"),
	HX_CSTRING("flush"),
	HX_CSTRING("close"),
	HX_CSTRING("clear"),
	HX_CSTRING("name"),
	HX_CSTRING("localPath"),
	HX_CSTRING("data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SharedObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SharedObject_obj::nme_get_user_preference,"nme_get_user_preference");
	HX_MARK_MEMBER_NAME(SharedObject_obj::nme_set_user_preference,"nme_set_user_preference");
	HX_MARK_MEMBER_NAME(SharedObject_obj::nme_clear_user_preference,"nme_clear_user_preference");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SharedObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SharedObject_obj::nme_get_user_preference,"nme_get_user_preference");
	HX_VISIT_MEMBER_NAME(SharedObject_obj::nme_set_user_preference,"nme_set_user_preference");
	HX_VISIT_MEMBER_NAME(SharedObject_obj::nme_clear_user_preference,"nme_clear_user_preference");
};

Class SharedObject_obj::__mClass;

void SharedObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.net.SharedObject"), hx::TCanCast< SharedObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SharedObject_obj::__boot()
{
	nme_get_user_preference= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_get_user_preference"),(int)1);
	nme_set_user_preference= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_set_user_preference"),(int)2);
	nme_clear_user_preference= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_clear_user_preference"),(int)1);
}

} // end namespace flash
} // end namespace net
