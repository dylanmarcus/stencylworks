#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
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
namespace com{
namespace stencyl{
namespace models{
namespace actor{

Void Group_obj::__construct(int ID,::String name)
{
HX_STACK_PUSH("Group::new","com/stencyl/models/actor/Group.hx",11);
{
	HX_STACK_LINE(12)
	this->name = name;
	HX_STACK_LINE(13)
	this->ID = ID;
	HX_STACK_LINE(15)
	this->sID = ((((HX_CSTRING("[Group ") + ID) + HX_CSTRING(",")) + name) + HX_CSTRING("]"));
	HX_STACK_LINE(17)
	this->list = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

Group_obj::~Group_obj() { }

Dynamic Group_obj::__CreateEmpty() { return  new Group_obj; }
hx::ObjectPtr< Group_obj > Group_obj::__new(int ID,::String name)
{  hx::ObjectPtr< Group_obj > result = new Group_obj();
	result->__construct(ID,name);
	return result;}

Dynamic Group_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Group_obj > result = new Group_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Group_obj::toString( ){
	HX_STACK_PUSH("Group::toString","com/stencyl/models/actor/Group.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_LINE(31)
	return this->sID;
}


HX_DEFINE_DYNAMIC_FUNC0(Group_obj,toString,return )

Void Group_obj::removeChild( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Group::removeChild","com/stencyl/models/actor/Group.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Group_obj,removeChild,(void))

Void Group_obj::addChild( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Group::addChild","com/stencyl/models/actor/Group.hx",21);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(21)
		this->list->push(a);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Group_obj,addChild,(void))


Group_obj::Group_obj()
{
}

void Group_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Group);
	HX_MARK_MEMBER_NAME(sID,"sID");
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void Group_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sID,"sID");
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic Group_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sID") ) { return sID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Group_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sID") ) { sID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Group_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sID"));
	outFields->push(HX_CSTRING("ID"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("addChild"),
	HX_CSTRING("sID"),
	HX_CSTRING("ID"),
	HX_CSTRING("name"),
	HX_CSTRING("list"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Group_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Group_obj::__mClass,"__mClass");
};

Class Group_obj::__mClass;

void Group_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.actor.Group"), hx::TCanCast< Group_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Group_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor
