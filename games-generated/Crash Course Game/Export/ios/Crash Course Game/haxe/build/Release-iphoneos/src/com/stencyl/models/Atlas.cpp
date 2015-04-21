#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_Atlas
#include <com/stencyl/models/Atlas.h>
#endif
namespace com{
namespace stencyl{
namespace models{

Void Atlas_obj::__construct(int ID,::String name,Array< int > members,bool active)
{
HX_STACK_PUSH("Atlas::new","com/stencyl/models/Atlas.hx",11);
{
	HX_STACK_LINE(12)
	this->ID = ID;
	HX_STACK_LINE(13)
	this->name = name;
	HX_STACK_LINE(14)
	this->members = members;
	HX_STACK_LINE(15)
	this->active = active;
}
;
	return null();
}

Atlas_obj::~Atlas_obj() { }

Dynamic Atlas_obj::__CreateEmpty() { return  new Atlas_obj; }
hx::ObjectPtr< Atlas_obj > Atlas_obj::__new(int ID,::String name,Array< int > members,bool active)
{  hx::ObjectPtr< Atlas_obj > result = new Atlas_obj();
	result->__construct(ID,name,members,active);
	return result;}

Dynamic Atlas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Atlas_obj > result = new Atlas_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


Atlas_obj::Atlas_obj()
{
}

void Atlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Atlas);
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_END_CLASS();
}

void Atlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(ID,"ID");
}

Dynamic Atlas_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { return members; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Atlas_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Atlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("members"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("ID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("members"),
	HX_CSTRING("active"),
	HX_CSTRING("name"),
	HX_CSTRING("ID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Atlas_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Atlas_obj::__mClass,"__mClass");
};

Class Atlas_obj::__mClass;

void Atlas_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.Atlas"), hx::TCanCast< Atlas_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Atlas_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
