#include <hxcpp.h>

#ifndef INCLUDED_de_polygonal_ds_HashKey
#include <de/polygonal/ds/HashKey.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

Void HashKey_obj::__construct()
{
	return null();
}

HashKey_obj::~HashKey_obj() { }

Dynamic HashKey_obj::__CreateEmpty() { return  new HashKey_obj; }
hx::ObjectPtr< HashKey_obj > HashKey_obj::__new()
{  hx::ObjectPtr< HashKey_obj > result = new HashKey_obj();
	result->__construct();
	return result;}

Dynamic HashKey_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HashKey_obj > result = new HashKey_obj();
	result->__construct();
	return result;}

int HashKey_obj::_counter;

int HashKey_obj::next( ){
	HX_STACK_PUSH("HashKey::next","de/polygonal/ds/HashKey.hx",43);
	HX_STACK_LINE(43)
	return (::de::polygonal::ds::HashKey_obj::_counter)++;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HashKey_obj,next,return )


HashKey_obj::HashKey_obj()
{
}

void HashKey_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HashKey);
	HX_MARK_END_CLASS();
}

void HashKey_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic HashKey_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_counter") ) { return _counter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HashKey_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_counter") ) { _counter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HashKey_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_counter"),
	HX_CSTRING("next"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HashKey_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HashKey_obj::_counter,"_counter");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HashKey_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HashKey_obj::_counter,"_counter");
};

Class HashKey_obj::__mClass;

void HashKey_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.HashKey"), hx::TCanCast< HashKey_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void HashKey_obj::__boot()
{
	_counter= (int)0;
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
