#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2BodyDef
#include <box2D/dynamics/B2BodyDef.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_BehaviorInstance
#include <com/stencyl/behavior/BehaviorInstance.h>
#endif
#ifndef INCLUDED_com_stencyl_io_AbstractReader
#include <com/stencyl/io/AbstractReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_ActorTypeReader
#include <com/stencyl/io/ActorTypeReader.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
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
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
namespace com{
namespace stencyl{
namespace io{

Void ActorTypeReader_obj::__construct()
{
HX_STACK_PUSH("ActorTypeReader::new","com/stencyl/io/ActorTypeReader.hx",16);
{
}
;
	return null();
}

ActorTypeReader_obj::~ActorTypeReader_obj() { }

Dynamic ActorTypeReader_obj::__CreateEmpty() { return  new ActorTypeReader_obj; }
hx::ObjectPtr< ActorTypeReader_obj > ActorTypeReader_obj::__new()
{  hx::ObjectPtr< ActorTypeReader_obj > result = new ActorTypeReader_obj();
	result->__construct();
	return result;}

Dynamic ActorTypeReader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ActorTypeReader_obj > result = new ActorTypeReader_obj();
	result->__construct();
	return result;}

hx::Object *ActorTypeReader_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::stencyl::io::AbstractReader_obj)) return operator ::com::stencyl::io::AbstractReader_obj *();
	return super::__ToInterface(inType);
}

::com::stencyl::models::Resource ActorTypeReader_obj::read( int ID,int atlasID,::String type,::String name,::haxe::xml::Fast xml){
	HX_STACK_PUSH("ActorTypeReader::read","com/stencyl/io/ActorTypeReader.hx",25);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_ARG(atlasID,"atlasID");
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(xml,"xml");
	HX_STACK_LINE(28)
	::box2D::dynamics::B2BodyDef bodyDef = ::box2D::dynamics::B2BodyDef_obj::__new();		HX_STACK_VAR(bodyDef,"bodyDef");
	HX_STACK_LINE(30)
	bodyDef->fixedRotation = ::com::stencyl::utils::Utils_obj::toBoolean(xml->att->resolve(HX_CSTRING("fixedrot")));
	HX_STACK_LINE(32)
	if (((xml->att->resolve(HX_CSTRING("bodytype")) == HX_CSTRING("0")))){
		HX_STACK_LINE(33)
		bodyDef->type = ::box2D::dynamics::B2Body_obj::b2_staticBody;
	}
	else{
		HX_STACK_LINE(37)
		if (((xml->att->resolve(HX_CSTRING("bodytype")) == HX_CSTRING("1")))){
			HX_STACK_LINE(38)
			bodyDef->type = ::box2D::dynamics::B2Body_obj::b2_kinematicBody;
		}
		else{
			HX_STACK_LINE(43)
			bodyDef->type = ::box2D::dynamics::B2Body_obj::b2_dynamicBody;
		}
	}
	HX_STACK_LINE(47)
	bodyDef->linearDamping = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("ldamp")));
	HX_STACK_LINE(48)
	bodyDef->angularDamping = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("adamp")));
	HX_STACK_LINE(50)
	bodyDef->friction = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("fric")));
	HX_STACK_LINE(51)
	bodyDef->bounciness = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("rest")));
	HX_STACK_LINE(52)
	bodyDef->mass = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("mass")));
	HX_STACK_LINE(53)
	bodyDef->aMass = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("inertia")));
	HX_STACK_LINE(55)
	bodyDef->active = true;
	HX_STACK_LINE(56)
	bodyDef->bullet = false;
	HX_STACK_LINE(57)
	bodyDef->allowSleep = false;
	HX_STACK_LINE(58)
	bodyDef->awake = true;
	HX_STACK_LINE(59)
	bodyDef->ignoreGravity = ::com::stencyl::utils::Utils_obj::toBoolean(xml->att->resolve(HX_CSTRING("ignoreg")));
	HX_STACK_LINE(60)
	bodyDef->bullet = ::com::stencyl::utils::Utils_obj::toBoolean(xml->att->resolve(HX_CSTRING("continuous")));
	HX_STACK_LINE(62)
	int spriteID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("sprite")));		HX_STACK_VAR(spriteID,"spriteID");
	HX_STACK_LINE(63)
	int groupID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("gid")));		HX_STACK_VAR(groupID,"groupID");
	HX_STACK_LINE(64)
	bool isLightweight = ::com::stencyl::utils::Utils_obj::toBoolean(xml->att->resolve(HX_CSTRING("lw")));		HX_STACK_VAR(isLightweight,"isLightweight");
	HX_STACK_LINE(65)
	bool autoScale = ::com::stencyl::utils::Utils_obj::toBoolean(xml->att->resolve(HX_CSTRING("ascale")));		HX_STACK_VAR(autoScale,"autoScale");
	HX_STACK_LINE(66)
	bool pausable = ::com::stencyl::utils::Utils_obj::toBoolean(xml->att->resolve(HX_CSTRING("pausable")));		HX_STACK_VAR(pausable,"pausable");
	HX_STACK_LINE(67)
	bool ignoreGravity = (bool((bool(bodyDef->ignoreGravity) || bool((bodyDef->type == ::box2D::dynamics::B2Body_obj::b2_staticBody)))) || bool((bodyDef->type == ::box2D::dynamics::B2Body_obj::b2_kinematicBody)));		HX_STACK_VAR(ignoreGravity,"ignoreGravity");
	HX_STACK_LINE(71)
	::haxe::ds::StringMap behaviorValues = ::com::stencyl::io::ActorTypeReader_obj::readBehaviors(xml->node->resolve(HX_CSTRING("snippets")));		HX_STACK_VAR(behaviorValues,"behaviorValues");
	HX_STACK_LINE(73)
	if (((xml->att->resolve(HX_CSTRING("eventsnippetid")) != HX_CSTRING("")))){
		HX_STACK_LINE(75)
		int eventID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("eventsnippetid")));		HX_STACK_VAR(eventID,"eventID");
		HX_STACK_LINE(77)
		if (((eventID > (int)-1))){
			HX_STACK_LINE(78)
			behaviorValues->set(xml->att->resolve(HX_CSTRING("eventsnippetid")),::com::stencyl::behavior::BehaviorInstance_obj::__new(eventID,::haxe::ds::StringMap_obj::__new()));
		}
	}
	HX_STACK_LINE(83)
	return ::com::stencyl::models::actor::ActorType_obj::__new(ID,atlasID,name,groupID,spriteID,behaviorValues,bodyDef,isLightweight,autoScale,pausable,ignoreGravity);
}


HX_DEFINE_DYNAMIC_FUNC5(ActorTypeReader_obj,read,return )

bool ActorTypeReader_obj::accepts( ::String type){
	HX_STACK_PUSH("ActorTypeReader::accepts","com/stencyl/io/ActorTypeReader.hx",20);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(20)
	return (type == HX_CSTRING("actor"));
}


HX_DEFINE_DYNAMIC_FUNC1(ActorTypeReader_obj,accepts,return )

::haxe::ds::StringMap ActorTypeReader_obj::readBehaviors( ::haxe::xml::Fast xml){
	HX_STACK_PUSH("ActorTypeReader::readBehaviors","com/stencyl/io/ActorTypeReader.hx",87);
	HX_STACK_ARG(xml,"xml");
	HX_STACK_LINE(88)
	::haxe::ds::StringMap toReturn = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(toReturn,"toReturn");
	HX_STACK_LINE(90)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(xml->get_elements());  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(92)
			bool enabled = ::com::stencyl::utils::Utils_obj::toBoolean(e->att->resolve(HX_CSTRING("enabled")));		HX_STACK_VAR(enabled,"enabled");
			HX_STACK_LINE(94)
			if ((!(enabled))){
				HX_STACK_LINE(95)
				continue;
			}
			HX_STACK_LINE(99)
			toReturn->set(e->att->resolve(HX_CSTRING("id")),::com::stencyl::io::ActorTypeReader_obj::readBehavior(e));
		}
;
	}
	HX_STACK_LINE(102)
	return toReturn;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ActorTypeReader_obj,readBehaviors,return )

::com::stencyl::behavior::BehaviorInstance ActorTypeReader_obj::readBehavior( ::haxe::xml::Fast xml){
	HX_STACK_PUSH("ActorTypeReader::readBehavior","com/stencyl/io/ActorTypeReader.hx",106);
	HX_STACK_ARG(xml,"xml");
	HX_STACK_LINE(107)
	int ID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(ID,"ID");
	HX_STACK_LINE(108)
	::haxe::ds::StringMap map = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(110)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(xml->get_elements());  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(112)
			map->set(e->att->resolve(HX_CSTRING("id")),e->att->resolve(HX_CSTRING("val")));
			HX_STACK_LINE(114)
			if ((e->get_elements()->__Field(HX_CSTRING("hasNext"),true)())){
				HX_STACK_LINE(115)
				map->set(e->att->resolve(HX_CSTRING("id")),::com::stencyl::io::ActorTypeReader_obj::readList(e));
			}
		}
;
	}
	HX_STACK_LINE(120)
	return ::com::stencyl::behavior::BehaviorInstance_obj::__new(ID,map);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ActorTypeReader_obj,readBehavior,return )

Dynamic ActorTypeReader_obj::readList( ::haxe::xml::Fast list){
	HX_STACK_PUSH("ActorTypeReader::readList","com/stencyl/io/ActorTypeReader.hx",124);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(125)
	Dynamic map = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(127)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list->get_elements());  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(129)
			int index = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("order")));		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(130)
			::String type = e->get_name();		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(132)
			if (((type == HX_CSTRING("number")))){
				HX_STACK_LINE(134)
				Float num = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("value")));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(135)
				map->__Field(HX_CSTRING("insert"),true)(index,num);
			}
			else{
				HX_STACK_LINE(138)
				if (((type == HX_CSTRING("text")))){
					HX_STACK_LINE(140)
					::String str = e->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(str,"str");
					HX_STACK_LINE(141)
					map->__Field(HX_CSTRING("insert"),true)(index,str);
				}
				else{
					HX_STACK_LINE(144)
					if (((type == HX_CSTRING("bool")))){
						HX_STACK_LINE(146)
						bool _bool = ::com::stencyl::utils::Utils_obj::toBoolean(e->att->resolve(HX_CSTRING("value")));		HX_STACK_VAR(_bool,"bool");
						HX_STACK_LINE(147)
						map->__Field(HX_CSTRING("insert"),true)(index,_bool);
					}
					else{
						HX_STACK_LINE(150)
						if (((type == HX_CSTRING("list")))){
							HX_STACK_LINE(152)
							Dynamic value = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(154)
							for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(e->get_elements());  __it->hasNext(); ){
								::haxe::xml::Fast item = __it->next();
								{
									HX_STACK_LINE(156)
									int index2 = ::Std_obj::parseInt(item->att->resolve(HX_CSTRING("order")));		HX_STACK_VAR(index2,"index2");
									HX_STACK_LINE(157)
									hx::IndexRef((value).mPtr,index2) = item->att->resolve(HX_CSTRING("value"));
								}
;
							}
							HX_STACK_LINE(160)
							map->__Field(HX_CSTRING("insert"),true)(index,value);
						}
					}
				}
			}
		}
;
	}
	HX_STACK_LINE(164)
	return map;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ActorTypeReader_obj,readList,return )


ActorTypeReader_obj::ActorTypeReader_obj()
{
}

void ActorTypeReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ActorTypeReader);
	HX_MARK_END_CLASS();
}

void ActorTypeReader_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ActorTypeReader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"accepts") ) { return accepts_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readList") ) { return readList_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readBehavior") ) { return readBehavior_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readBehaviors") ) { return readBehaviors_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ActorTypeReader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ActorTypeReader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("readBehaviors"),
	HX_CSTRING("readBehavior"),
	HX_CSTRING("readList"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("read"),
	HX_CSTRING("accepts"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ActorTypeReader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActorTypeReader_obj::__mClass,"__mClass");
};

Class ActorTypeReader_obj::__mClass;

void ActorTypeReader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.io.ActorTypeReader"), hx::TCanCast< ActorTypeReader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ActorTypeReader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace io
