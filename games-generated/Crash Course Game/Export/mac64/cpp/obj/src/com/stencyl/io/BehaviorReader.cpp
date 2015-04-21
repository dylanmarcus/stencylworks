#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Attribute
#include <com/stencyl/behavior/Attribute.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Behavior
#include <com/stencyl/behavior/Behavior.h>
#endif
#ifndef INCLUDED_com_stencyl_io_BehaviorReader
#include <com/stencyl/io/BehaviorReader.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
namespace com{
namespace stencyl{
namespace io{

Void BehaviorReader_obj::__construct()
{
HX_STACK_PUSH("BehaviorReader::new","com/stencyl/io/BehaviorReader.hx",11);
{
}
;
	return null();
}

BehaviorReader_obj::~BehaviorReader_obj() { }

Dynamic BehaviorReader_obj::__CreateEmpty() { return  new BehaviorReader_obj; }
hx::ObjectPtr< BehaviorReader_obj > BehaviorReader_obj::__new()
{  hx::ObjectPtr< BehaviorReader_obj > result = new BehaviorReader_obj();
	result->__construct();
	return result;}

Dynamic BehaviorReader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BehaviorReader_obj > result = new BehaviorReader_obj();
	result->__construct();
	return result;}

::com::stencyl::behavior::Behavior BehaviorReader_obj::readBehavior( ::haxe::xml::Fast xml){
	HX_STACK_PUSH("BehaviorReader::readBehavior","com/stencyl/io/BehaviorReader.hx",15);
	HX_STACK_ARG(xml,"xml");
	HX_STACK_LINE(16)
	int elementID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(elementID,"elementID");
	HX_STACK_LINE(17)
	::String name = xml->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(18)
	::String classname = HX_CSTRING("");		HX_STACK_VAR(classname,"classname");
	HX_STACK_LINE(19)
	bool isEvent = false;		HX_STACK_VAR(isEvent,"isEvent");
	HX_STACK_LINE(21)
	try{
		HX_STACK_LINE(22)
		classname = xml->att->resolve(HX_CSTRING("class"));
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::String >() ){
			HX_STACK_BEGIN_CATCH
			::String e = __e;{
			}
		}
		else throw(__e);
	}
	HX_STACK_LINE(30)
	try{
		HX_STACK_LINE(31)
		isEvent = (xml->att->resolve(HX_CSTRING("attachedevent")) == HX_CSTRING("true"));
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::String >() ){
			HX_STACK_BEGIN_CATCH
			::String e = __e;{
			}
		}
		else throw(__e);
	}
	HX_STACK_LINE(39)
	::haxe::ds::StringMap attributes = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(attributes,"attributes");
	HX_STACK_LINE(40)
	::String type = xml->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(42)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(xml->get_elements());  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(44)
			::String type1 = e->get_name();		HX_STACK_VAR(type1,"type1");
			HX_STACK_LINE(46)
			if (((type1 == HX_CSTRING("snippets")))){
			}
			else{
				HX_STACK_LINE(51)
				if (((type1 == HX_CSTRING("blocks")))){
				}
				else{
					HX_STACK_LINE(56)
					if (((type1 == HX_CSTRING("events")))){
					}
					else{
						HX_STACK_LINE(63)
						attributes->set(e->att->resolve(HX_CSTRING("id")),::com::stencyl::io::BehaviorReader_obj::readAttribute(e));
					}
				}
			}
		}
;
	}
	HX_STACK_LINE(68)
	::com::stencyl::behavior::Behavior b = ::com::stencyl::behavior::Behavior_obj::__new(null(),null(),elementID,name,classname,true,true,attributes,type,isEvent);		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(82)
	return b;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BehaviorReader_obj,readBehavior,return )

::com::stencyl::behavior::Attribute BehaviorReader_obj::readAttribute( ::haxe::xml::Fast xml){
	HX_STACK_PUSH("BehaviorReader::readAttribute","com/stencyl/io/BehaviorReader.hx",86);
	HX_STACK_ARG(xml,"xml");
	HX_STACK_LINE(87)
	int ID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(ID,"ID");
	HX_STACK_LINE(88)
	::String fieldName = xml->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(fieldName,"fieldName");
	HX_STACK_LINE(89)
	::String fullName = xml->att->resolve(HX_CSTRING("fullname"));		HX_STACK_VAR(fullName,"fullName");
	HX_STACK_LINE(90)
	bool hidden = (xml->att->resolve(HX_CSTRING("hidden")) == HX_CSTRING("true"));		HX_STACK_VAR(hidden,"hidden");
	HX_STACK_LINE(91)
	::String defaultValue = HX_CSTRING("");		HX_STACK_VAR(defaultValue,"defaultValue");
	HX_STACK_LINE(93)
	try{
		HX_STACK_LINE(94)
		defaultValue = xml->att->resolve(HX_CSTRING("defaultValue"));
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::String >() ){
			HX_STACK_BEGIN_CATCH
			::String e = __e;{
			}
		}
		else throw(__e);
	}
	HX_STACK_LINE(102)
	::String type = xml->get_name();		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(104)
	return ::com::stencyl::behavior::Attribute_obj::__new(ID,fieldName,fullName,defaultValue,type,null(),hidden);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BehaviorReader_obj,readAttribute,return )


BehaviorReader_obj::BehaviorReader_obj()
{
}

void BehaviorReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BehaviorReader);
	HX_MARK_END_CLASS();
}

void BehaviorReader_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic BehaviorReader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"readBehavior") ) { return readBehavior_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readAttribute") ) { return readAttribute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BehaviorReader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BehaviorReader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("readBehavior"),
	HX_CSTRING("readAttribute"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BehaviorReader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BehaviorReader_obj::__mClass,"__mClass");
};

Class BehaviorReader_obj::__mClass;

void BehaviorReader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.io.BehaviorReader"), hx::TCanCast< BehaviorReader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BehaviorReader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace io
