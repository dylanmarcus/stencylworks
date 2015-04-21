#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_actor_AngleHolder
#include <com/stencyl/models/actor/AngleHolder.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace actor{

Void AngleHolder_obj::__construct()
{
HX_STACK_PUSH("AngleHolder::new","com/stencyl/models/actor/AngleHolder.hx",8);
{
}
;
	return null();
}

AngleHolder_obj::~AngleHolder_obj() { }

Dynamic AngleHolder_obj::__CreateEmpty() { return  new AngleHolder_obj; }
hx::ObjectPtr< AngleHolder_obj > AngleHolder_obj::__new()
{  hx::ObjectPtr< AngleHolder_obj > result = new AngleHolder_obj();
	result->__construct();
	return result;}

Dynamic AngleHolder_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AngleHolder_obj > result = new AngleHolder_obj();
	result->__construct();
	return result;}


AngleHolder_obj::AngleHolder_obj()
{
}

void AngleHolder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AngleHolder);
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_END_CLASS();
}

void AngleHolder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(angle,"angle");
}

Dynamic AngleHolder_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AngleHolder_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AngleHolder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("angle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("angle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AngleHolder_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AngleHolder_obj::__mClass,"__mClass");
};

Class AngleHolder_obj::__mClass;

void AngleHolder_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.actor.AngleHolder"), hx::TCanCast< AngleHolder_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AngleHolder_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor
