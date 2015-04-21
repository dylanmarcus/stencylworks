#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_GroupDef
#include <com/stencyl/models/GroupDef.h>
#endif
namespace com{
namespace stencyl{
namespace models{

Void GroupDef_obj::__construct(int ID,::String name)
{
HX_STACK_PUSH("GroupDef::new","com/stencyl/models/GroupDef.hx",9);
{
	HX_STACK_LINE(10)
	this->ID = ID;
	HX_STACK_LINE(11)
	this->name = name;
}
;
	return null();
}

GroupDef_obj::~GroupDef_obj() { }

Dynamic GroupDef_obj::__CreateEmpty() { return  new GroupDef_obj; }
hx::ObjectPtr< GroupDef_obj > GroupDef_obj::__new(int ID,::String name)
{  hx::ObjectPtr< GroupDef_obj > result = new GroupDef_obj();
	result->__construct(ID,name);
	return result;}

Dynamic GroupDef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GroupDef_obj > result = new GroupDef_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


GroupDef_obj::GroupDef_obj()
{
}

void GroupDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GroupDef);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_END_CLASS();
}

void GroupDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(ID,"ID");
}

Dynamic GroupDef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GroupDef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GroupDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("ID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("ID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GroupDef_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GroupDef_obj::__mClass,"__mClass");
};

Class GroupDef_obj::__mClass;

void GroupDef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.GroupDef"), hx::TCanCast< GroupDef_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GroupDef_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
