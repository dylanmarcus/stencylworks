#include <hxcpp.h>

#ifndef INCLUDED_de_polygonal_ds_Collection
#include <de/polygonal/ds/Collection.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_HashTableValIterator
#include <de/polygonal/ds/HashTableValIterator.h>
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

Void HashTableValIterator_obj::__construct(Dynamic f)
{
HX_STACK_PUSH("HashTableValIterator::new","de/polygonal/ds/HashTable.hx",935);
{
	HX_STACK_LINE(936)
	this->_f = f;
	HX_STACK_LINE(937)
	{
		HX_STACK_LINE(937)
		this->_vals = this->_f->__Field(HX_CSTRING("_vals"),true);
		HX_STACK_LINE(937)
		this->_keys = this->_f->__Field(HX_CSTRING("_keys"),true);
		HX_STACK_LINE(937)
		this->_i = (int)-1;
		HX_STACK_LINE(937)
		this->_s = this->_f->__Field(HX_CSTRING("_h"),true)->__Field(HX_CSTRING("_capacity"),true);
		HX_STACK_LINE(937)
		hx::ObjectPtr<OBJ_>(this);
	}
}
;
	return null();
}

HashTableValIterator_obj::~HashTableValIterator_obj() { }

Dynamic HashTableValIterator_obj::__CreateEmpty() { return  new HashTableValIterator_obj; }
hx::ObjectPtr< HashTableValIterator_obj > HashTableValIterator_obj::__new(Dynamic f)
{  hx::ObjectPtr< HashTableValIterator_obj > result = new HashTableValIterator_obj();
	result->__construct(f);
	return result;}

Dynamic HashTableValIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HashTableValIterator_obj > result = new HashTableValIterator_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *HashTableValIterator_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::de::polygonal::ds::Itr_obj)) return operator ::de::polygonal::ds::Itr_obj *();
	return super::__ToInterface(inType);
}

Dynamic HashTableValIterator_obj::__keys( Dynamic f){
	HX_STACK_PUSH("HashTableValIterator::__keys","de/polygonal/ds/HashTable.hx",974);
	HX_STACK_THIS(this);
	HX_STACK_ARG(f,"f");
	HX_STACK_LINE(974)
	return f->__Field(HX_CSTRING("_keys"),true);
}


HX_DEFINE_DYNAMIC_FUNC1(HashTableValIterator_obj,__keys,return )

Dynamic HashTableValIterator_obj::__vals( Dynamic f){
	HX_STACK_PUSH("HashTableValIterator::__vals","de/polygonal/ds/HashTable.hx",970);
	HX_STACK_THIS(this);
	HX_STACK_ARG(f,"f");
	HX_STACK_LINE(970)
	return f->__Field(HX_CSTRING("_vals"),true);
}


HX_DEFINE_DYNAMIC_FUNC1(HashTableValIterator_obj,__vals,return )

Void HashTableValIterator_obj::remove( ){
{
		HX_STACK_PUSH("HashTableValIterator::remove","de/polygonal/ds/HashTable.hx",965);
		HX_STACK_THIS(this);
		HX_STACK_LINE(965)
		hx::Throw (HX_CSTRING("unsupported operation"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HashTableValIterator_obj,remove,(void))

Dynamic HashTableValIterator_obj::next( ){
	HX_STACK_PUSH("HashTableValIterator::next","de/polygonal/ds/HashTable.hx",960);
	HX_STACK_THIS(this);
	HX_STACK_LINE(960)
	return this->_vals->__GetItem(this->_i);
}


HX_DEFINE_DYNAMIC_FUNC0(HashTableValIterator_obj,next,return )

bool HashTableValIterator_obj::hasNext( ){
	HX_STACK_PUSH("HashTableValIterator::hasNext","de/polygonal/ds/HashTable.hx",950);
	HX_STACK_THIS(this);
	HX_STACK_LINE(951)
	while(((++(this->_i) < this->_s))){
		HX_STACK_LINE(952)
		if (((this->_keys->__GetItem(this->_i) != null()))){
			HX_STACK_LINE(954)
			return true;
		}
	}
	HX_STACK_LINE(956)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(HashTableValIterator_obj,hasNext,return )

::de::polygonal::ds::Itr HashTableValIterator_obj::reset( ){
	HX_STACK_PUSH("HashTableValIterator::reset","de/polygonal/ds/HashTable.hx",941);
	HX_STACK_THIS(this);
	HX_STACK_LINE(942)
	this->_vals = this->_f->__Field(HX_CSTRING("_vals"),true);
	HX_STACK_LINE(943)
	this->_keys = this->_f->__Field(HX_CSTRING("_keys"),true);
	HX_STACK_LINE(944)
	this->_i = (int)-1;
	HX_STACK_LINE(945)
	this->_s = this->_f->__Field(HX_CSTRING("_h"),true)->__Field(HX_CSTRING("_capacity"),true);
	HX_STACK_LINE(946)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(HashTableValIterator_obj,reset,return )


HashTableValIterator_obj::HashTableValIterator_obj()
{
}

void HashTableValIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HashTableValIterator);
	HX_MARK_MEMBER_NAME(_s,"_s");
	HX_MARK_MEMBER_NAME(_i,"_i");
	HX_MARK_MEMBER_NAME(_vals,"_vals");
	HX_MARK_MEMBER_NAME(_keys,"_keys");
	HX_MARK_MEMBER_NAME(_f,"_f");
	HX_MARK_END_CLASS();
}

void HashTableValIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_s,"_s");
	HX_VISIT_MEMBER_NAME(_i,"_i");
	HX_VISIT_MEMBER_NAME(_vals,"_vals");
	HX_VISIT_MEMBER_NAME(_keys,"_keys");
	HX_VISIT_MEMBER_NAME(_f,"_f");
}

Dynamic HashTableValIterator_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"_vals") ) { return _vals; }
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

Dynamic HashTableValIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_s") ) { _s=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_i") ) { _i=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_f") ) { _f=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_vals") ) { _vals=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keys") ) { _keys=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HashTableValIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_s"));
	outFields->push(HX_CSTRING("_i"));
	outFields->push(HX_CSTRING("_vals"));
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
	HX_CSTRING("_vals"),
	HX_CSTRING("_keys"),
	HX_CSTRING("_f"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HashTableValIterator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HashTableValIterator_obj::__mClass,"__mClass");
};

Class HashTableValIterator_obj::__mClass;

void HashTableValIterator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.HashTableValIterator"), hx::TCanCast< HashTableValIterator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void HashTableValIterator_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
