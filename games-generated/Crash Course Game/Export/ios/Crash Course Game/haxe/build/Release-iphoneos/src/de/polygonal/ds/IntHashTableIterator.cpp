#include <hxcpp.h>

#ifndef INCLUDED_de_polygonal_ds_Collection
#include <de/polygonal/ds/Collection.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Hashable
#include <de/polygonal/ds/Hashable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntHashTableIterator
#include <de/polygonal/ds/IntHashTableIterator.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntIntHashTable
#include <de/polygonal/ds/IntIntHashTable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Map
#include <de/polygonal/ds/Map.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

Void IntHashTableIterator_obj::__construct(Dynamic f)
{
HX_STACK_PUSH("IntHashTableIterator::new","de/polygonal/ds/IntHashTable.hx",966);
{
	HX_STACK_LINE(967)
	this->_f = f;
	HX_STACK_LINE(968)
	{
		HX_STACK_LINE(968)
		this->_vals = this->_f->__Field(HX_CSTRING("_vals"),true);
		HX_STACK_LINE(968)
		this->_keys = this->_f->__Field(HX_CSTRING("_keys"),true);
		HX_STACK_LINE(968)
		this->_i = (int)-1;
		HX_STACK_LINE(968)
		this->_s = this->_f->__Field(HX_CSTRING("_h"),true)->__Field(HX_CSTRING("_capacity"),true);
		HX_STACK_LINE(968)
		hx::ObjectPtr<OBJ_>(this);
	}
}
;
	return null();
}

IntHashTableIterator_obj::~IntHashTableIterator_obj() { }

Dynamic IntHashTableIterator_obj::__CreateEmpty() { return  new IntHashTableIterator_obj; }
hx::ObjectPtr< IntHashTableIterator_obj > IntHashTableIterator_obj::__new(Dynamic f)
{  hx::ObjectPtr< IntHashTableIterator_obj > result = new IntHashTableIterator_obj();
	result->__construct(f);
	return result;}

Dynamic IntHashTableIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntHashTableIterator_obj > result = new IntHashTableIterator_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *IntHashTableIterator_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::de::polygonal::ds::Itr_obj)) return operator ::de::polygonal::ds::Itr_obj *();
	return super::__ToInterface(inType);
}

Array< int > IntHashTableIterator_obj::__keys( Dynamic f){
	HX_STACK_PUSH("IntHashTableIterator::__keys","de/polygonal/ds/IntHashTable.hx",1009);
	HX_STACK_THIS(this);
	HX_STACK_ARG(f,"f");
	HX_STACK_LINE(1009)
	return f->__Field(HX_CSTRING("_keys"),true);
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTableIterator_obj,__keys,return )

Dynamic IntHashTableIterator_obj::__vals( Dynamic f){
	HX_STACK_PUSH("IntHashTableIterator::__vals","de/polygonal/ds/IntHashTable.hx",1005);
	HX_STACK_THIS(this);
	HX_STACK_ARG(f,"f");
	HX_STACK_LINE(1005)
	return f->__Field(HX_CSTRING("_vals"),true);
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTableIterator_obj,__vals,return )

Void IntHashTableIterator_obj::remove( ){
{
		HX_STACK_PUSH("IntHashTableIterator::remove","de/polygonal/ds/IntHashTable.hx",1000);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1000)
		hx::Throw (HX_CSTRING("unsupported operation"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTableIterator_obj,remove,(void))

Dynamic IntHashTableIterator_obj::next( ){
	HX_STACK_PUSH("IntHashTableIterator::next","de/polygonal/ds/IntHashTable.hx",995);
	HX_STACK_THIS(this);
	HX_STACK_LINE(995)
	return this->_vals->__GetItem(this->_i);
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTableIterator_obj,next,return )

bool IntHashTableIterator_obj::hasNext( ){
	HX_STACK_PUSH("IntHashTableIterator::hasNext","de/polygonal/ds/IntHashTable.hx",981);
	HX_STACK_THIS(this);
	HX_STACK_LINE(982)
	while(((++(this->_i) < this->_s))){
		HX_STACK_LINE(983)
		if (((this->_keys->__get(this->_i) != (int)-2147483647))){
			HX_STACK_LINE(989)
			return true;
		}
	}
	HX_STACK_LINE(991)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTableIterator_obj,hasNext,return )

::de::polygonal::ds::Itr IntHashTableIterator_obj::reset( ){
	HX_STACK_PUSH("IntHashTableIterator::reset","de/polygonal/ds/IntHashTable.hx",972);
	HX_STACK_THIS(this);
	HX_STACK_LINE(973)
	this->_vals = this->_f->__Field(HX_CSTRING("_vals"),true);
	HX_STACK_LINE(974)
	this->_keys = this->_f->__Field(HX_CSTRING("_keys"),true);
	HX_STACK_LINE(975)
	this->_i = (int)-1;
	HX_STACK_LINE(976)
	this->_s = this->_f->__Field(HX_CSTRING("_h"),true)->__Field(HX_CSTRING("_capacity"),true);
	HX_STACK_LINE(977)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTableIterator_obj,reset,return )


IntHashTableIterator_obj::IntHashTableIterator_obj()
{
}

void IntHashTableIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntHashTableIterator);
	HX_MARK_MEMBER_NAME(_s,"_s");
	HX_MARK_MEMBER_NAME(_i,"_i");
	HX_MARK_MEMBER_NAME(_keys,"_keys");
	HX_MARK_MEMBER_NAME(_vals,"_vals");
	HX_MARK_MEMBER_NAME(_f,"_f");
	HX_MARK_END_CLASS();
}

void IntHashTableIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_s,"_s");
	HX_VISIT_MEMBER_NAME(_i,"_i");
	HX_VISIT_MEMBER_NAME(_keys,"_keys");
	HX_VISIT_MEMBER_NAME(_vals,"_vals");
	HX_VISIT_MEMBER_NAME(_f,"_f");
}

Dynamic IntHashTableIterator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_s") ) { return _s; }
		if (HX_FIELD_EQ(inName,"_i") ) { return _i; }
		if (HX_FIELD_EQ(inName,"_f") ) { return _f; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"_keys") ) { return _keys; }
		if (HX_FIELD_EQ(inName,"_vals") ) { return _vals; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__keys") ) { return __keys_dyn(); }
		if (HX_FIELD_EQ(inName,"__vals") ) { return __vals_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntHashTableIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_s") ) { _s=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_i") ) { _i=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_f") ) { _f=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { _keys=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vals") ) { _vals=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntHashTableIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_s"));
	outFields->push(HX_CSTRING("_i"));
	outFields->push(HX_CSTRING("_keys"));
	outFields->push(HX_CSTRING("_vals"));
	outFields->push(HX_CSTRING("_f"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__keys"),
	HX_CSTRING("__vals"),
	HX_CSTRING("remove"),
	HX_CSTRING("next"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("reset"),
	HX_CSTRING("_s"),
	HX_CSTRING("_i"),
	HX_CSTRING("_keys"),
	HX_CSTRING("_vals"),
	HX_CSTRING("_f"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntHashTableIterator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntHashTableIterator_obj::__mClass,"__mClass");
};

Class IntHashTableIterator_obj::__mClass;

void IntHashTableIterator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.IntHashTableIterator"), hx::TCanCast< IntHashTableIterator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IntHashTableIterator_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
