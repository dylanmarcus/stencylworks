#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_CollisionGroupDef
#include <com/stencyl/models/CollisionGroupDef.h>
#endif
namespace com{
namespace stencyl{
namespace models{

Void CollisionGroupDef_obj::__construct(int group1,int group2)
{
HX_STACK_PUSH("CollisionGroupDef::new","com/stencyl/models/CollisionGroupDef.hx",9);
{
	HX_STACK_LINE(10)
	this->group1 = group1;
	HX_STACK_LINE(11)
	this->group2 = group2;
}
;
	return null();
}

CollisionGroupDef_obj::~CollisionGroupDef_obj() { }

Dynamic CollisionGroupDef_obj::__CreateEmpty() { return  new CollisionGroupDef_obj; }
hx::ObjectPtr< CollisionGroupDef_obj > CollisionGroupDef_obj::__new(int group1,int group2)
{  hx::ObjectPtr< CollisionGroupDef_obj > result = new CollisionGroupDef_obj();
	result->__construct(group1,group2);
	return result;}

Dynamic CollisionGroupDef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollisionGroupDef_obj > result = new CollisionGroupDef_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


CollisionGroupDef_obj::CollisionGroupDef_obj()
{
}

void CollisionGroupDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CollisionGroupDef);
	HX_MARK_MEMBER_NAME(group2,"group2");
	HX_MARK_MEMBER_NAME(group1,"group1");
	HX_MARK_END_CLASS();
}

void CollisionGroupDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(group2,"group2");
	HX_VISIT_MEMBER_NAME(group1,"group1");
}

Dynamic CollisionGroupDef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"group2") ) { return group2; }
		if (HX_FIELD_EQ(inName,"group1") ) { return group1; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CollisionGroupDef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"group2") ) { group2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group1") ) { group1=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CollisionGroupDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("group2"));
	outFields->push(HX_CSTRING("group1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("group2"),
	HX_CSTRING("group1"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollisionGroupDef_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollisionGroupDef_obj::__mClass,"__mClass");
};

Class CollisionGroupDef_obj::__mClass;

void CollisionGroupDef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.CollisionGroupDef"), hx::TCanCast< CollisionGroupDef_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CollisionGroupDef_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
