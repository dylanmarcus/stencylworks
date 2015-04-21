#include <hxcpp.h>

#ifndef INCLUDED_de_polygonal_ds_Collection
#include <de/polygonal/ds/Collection.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_HashTableKeyIterator
#include <de/polygonal/ds/HashTableKeyIterator.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Hashable
#include <de/polygonal/ds/Hashable.h>
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

Void HashTableKeyIterator_obj::__construct(Dynamic f)
{
HX_STACK_PUSH("HashTableKeyIterator::new","de/polygonal/ds/HashTable.hx",878);
{
	HX_STACK_LINE(879)
	this->_f = f;
	HX_STACK_LINE(880)
	{
		HX_STACK_LINE(880)
		this->_keys = this->_f->__Field(HX_CSTRING("_keys"),true);
		HX_STACK_LINE(880)
		this->_i = (int)-1;
		HX_STACK_LINE(880)
		this->_s = this->_f->__Field(HX_CSTRING("_h"),true)->__Field(HX_CSTRING("_capacity"),true);
		HX_STACK_LINE(880)
		hx::ObjectPtr<OBJ_>(this);
	}
}
;
	return null();
}

HashTableKeyIterator_obj::~HashTableKeyIterator_obj() { }

Dynamic HashTableKeyIterator_obj::__CreateEmpty() { return  new HashTableKeyIterator_obj; }
hx::ObjectPtr< HashTableKeyIterator_obj > HashTableKeyIterator_obj::__new(Dynamic f)
{  hx::ObjectPtr< HashTableKeyIterator_obj > result = new HashTableKeyIterator_obj();
	result->__construct(f);
	return result;}

Dynamic HashTableKeyIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HashTableKeyIterator_obj > result = new HashTableKeyIterator_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *HashTableKeyIterator_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::de::polygonal::ds::Itr_obj)) return operator ::de::polygonal::ds::Itr_obj *();
	return super::__ToInterface(inType);
}

Dynamic HashTableKeyIterator_obj::__keys( Dynamic f){
	HX_STACK_PUSH("HashTableKeyIterator::__keys","de/polygonal/ds/HashTable.hx",916);
	HX_STACK_THIS(this);
	HX_STACK_ARG(f,"f");
	HX_STACK_LINE(916)
	return f->__Field(HX_CSTRING("_keys"),true);
}


HX_DEFINE_DYNAMIC_FUNC1(HashTableKeyIterator_obj,__keys,return )

Dynamic HashTableKeyIterator_obj::__vals( Dynamic f){
	HX_STACK_PUSH("HashTableKeyIterator::__vals","de/polygonal/ds/HashTable.hx",912);
	HX_STACK_THIS(this);
	HX_STACK_ARG(f,"f");
	HX_STACK_LINE(912)
	return f->__Field(HX_CSTRING("_vals"),true);
}


HX_DEFINE_DYNAMIC_FUNC1(HashTableKeyIterator_obj,__vals,return )

Void HashTableKeyIterator_obj::remove( ){
{
		HX_STACK_PUSH("HashTableKeyIterator::remove","de/polygonal/ds/HashTable.hx",907);
		HX_STACK_THIS(this);
		HX_STACK_LINE(907)
		hx::Throw (HX_CSTRING("unsupported operation"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HashTableKeyIterator_obj,remove,(void))

Dynamic HashTableKeyIterator_obj::next( ){
	HX_STACK_PUSH("HashTableKeyIterator::next","de/polygonal/ds/HashTable.hx",902);
	HX_STACK_THIS(this);
	HX_STACK_LINE(902)
	return this->_keys->__GetItem(this->_i);
}


HX_DEFINE_DYNAMIC_FUNC0(HashTableKeyIterator_obj,next,return )

bool HashTableKeyIterator_obj::hasNext( ){
	HX_STACK_PUSH("HashTableKeyIterator::hasNext","de/polygonal/ds/HashTable.hx",892);
	HX_STACK_THIS(this);
	HX_STACK_LINE(893)
	while(((++(this->_i) < this->_s))){
		HX_STACK_LINE(894)
		if (((this->_keys->__GetItem(this->_i) != null()))){
			HX_STACK_LINE(896)
			return true;
		}
	}
	HX_STACK_LINE(898)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(HashTableKeyIterator_obj,hasNext,return )

::de::polygonal::ds::Itr HashTableKeyIterator_obj::reset( ){
	HX_STACK_PUSH("HashTableKeyIterator::reset","de/polygonal/ds/HashTable.hx",884);
	HX_STACK_THIS(this);
	HX_STACK_LINE(885)
	this->_keys = this->_f->__Field(HX_CSTRING("_keys"),true);
	HX_STACK_LINE(886)
	this->_i = (int)-1;
	HX_STACK_LINE(887)
	this->_s = this->_f->__Field(HX_CSTRING("_h"),true)->__Field(HX_CSTRING("_capacity"),true);
	HX_STACK_LINE(888)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(HashTableKeyIterator_obj,reset,return )


HashTableKeyIterator_obj::HashTableKeyIterator_obj()
{
}

void HashTableKeyIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HashTableKeyIterator);
	HX_MARK_MEMBER_NAME(_s,"_s");
	HX_MARK_MEMBER_NAME(_i,"_i");
	HX_MARK_MEMBER_NAME(_keys,"_keys");
	HX_MARK_MEMBER_NAME(_f,"_f");
	HX_MARK_END_CLASS();
}

void HashTableKeyIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_s,"_s");
	HX_VISIT_MEMBER_NAME(_i,"_i");
	HX_VISIT_MEMBER_NAME(_keys,"_keys");
	HX_VISIT_MEMBER_NAME(_f,"_f");
}

Dynamic HashTableKeyIterator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic HashTableKeyIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_s") ) { _s=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_i") ) { _i=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_f") ) { _f=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_keys") ) { _keys=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HashTableKeyIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_s"));
	outFields->push(HX_CSTRING("_i"));
	outFields->push(HX_CSTRING("_keys"));
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
	HX_CSTRING("_f"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HashTableKeyIterator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HashTableKeyIterator_obj::__mClass,"__mClass");
};

Class HashTableKeyIterator_obj::__mClass;

void HashTableKeyIterator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.HashTableKeyIterator"), hx::TCanCast< HashTableKeyIterator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void HashTableKeyIterator_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
