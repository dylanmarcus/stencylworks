#include <hxcpp.h>

#ifndef INCLUDED_de_polygonal_ds_IntIntHashTableValIterator
#include <de/polygonal/ds/IntIntHashTableValIterator.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

Void IntIntHashTableValIterator_obj::__construct(Dynamic hash)
{
HX_STACK_PUSH("IntIntHashTableValIterator::new","de/polygonal/ds/IntIntHashTable.hx",1719);
{
	HX_STACK_LINE(1720)
	this->_f = hash;
	HX_STACK_LINE(1721)
	this->_data = this->_f->__Field(HX_CSTRING("_data"),true);
	HX_STACK_LINE(1722)
	this->_i = (int)0;
	HX_STACK_LINE(1723)
	this->_s = this->_f->__Field(HX_CSTRING("_capacity"),true);
	HX_STACK_LINE(1724)
	while(((bool((this->_i < this->_s)) && bool((this->_data->__get(((this->_i * (int)3) + (int)1)) == (int)-2147483647))))){
		HX_STACK_LINE(1724)
		(this->_i)++;
	}
}
;
	return null();
}

IntIntHashTableValIterator_obj::~IntIntHashTableValIterator_obj() { }

Dynamic IntIntHashTableValIterator_obj::__CreateEmpty() { return  new IntIntHashTableValIterator_obj; }
hx::ObjectPtr< IntIntHashTableValIterator_obj > IntIntHashTableValIterator_obj::__new(Dynamic hash)
{  hx::ObjectPtr< IntIntHashTableValIterator_obj > result = new IntIntHashTableValIterator_obj();
	result->__construct(hash);
	return result;}

Dynamic IntIntHashTableValIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntIntHashTableValIterator_obj > result = new IntIntHashTableValIterator_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *IntIntHashTableValIterator_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::de::polygonal::ds::Itr_obj)) return operator ::de::polygonal::ds::Itr_obj *();
	return super::__ToInterface(inType);
}

int IntIntHashTableValIterator_obj::__getData( int i){
	HX_STACK_PUSH("IntIntHashTableValIterator::__getData","de/polygonal/ds/IntIntHashTable.hx",1759);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(1759)
	return this->_data->__get(i);
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTableValIterator_obj,__getData,return )

Void IntIntHashTableValIterator_obj::_scan( ){
{
		HX_STACK_PUSH("IntIntHashTableValIterator::_scan","de/polygonal/ds/IntIntHashTable.hx",1754);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1754)
		while(((bool((this->_i < this->_s)) && bool((this->_data->__get(((this->_i * (int)3) + (int)1)) == (int)-2147483647))))){
			HX_STACK_LINE(1755)
			(this->_i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTableValIterator_obj,_scan,(void))

Void IntIntHashTableValIterator_obj::remove( ){
{
		HX_STACK_PUSH("IntIntHashTableValIterator::remove","de/polygonal/ds/IntIntHashTable.hx",1749);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1749)
		hx::Throw (HX_CSTRING("unsupported operation"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTableValIterator_obj,remove,(void))

Dynamic IntIntHashTableValIterator_obj::next( ){
	HX_STACK_PUSH("IntIntHashTableValIterator::next","de/polygonal/ds/IntIntHashTable.hx",1742);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1743)
	int val = this->_data->__get((((this->_i)++ * (int)3) + (int)1));		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(1744)
	while(((bool((this->_i < this->_s)) && bool((this->_data->__get(((this->_i * (int)3) + (int)1)) == (int)-2147483647))))){
		HX_STACK_LINE(1744)
		(this->_i)++;
	}
	HX_STACK_LINE(1745)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTableValIterator_obj,next,return )

bool IntIntHashTableValIterator_obj::hasNext( ){
	HX_STACK_PUSH("IntIntHashTableValIterator::hasNext","de/polygonal/ds/IntIntHashTable.hx",1737);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1737)
	return (this->_i < this->_s);
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTableValIterator_obj,hasNext,return )

::de::polygonal::ds::Itr IntIntHashTableValIterator_obj::reset( ){
	HX_STACK_PUSH("IntIntHashTableValIterator::reset","de/polygonal/ds/IntIntHashTable.hx",1728);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1729)
	this->_data = this->_f->__Field(HX_CSTRING("_data"),true);
	HX_STACK_LINE(1730)
	this->_i = (int)0;
	HX_STACK_LINE(1731)
	this->_s = this->_f->__Field(HX_CSTRING("_capacity"),true);
	HX_STACK_LINE(1732)
	while(((bool((this->_i < this->_s)) && bool((this->_data->__get(((this->_i * (int)3) + (int)1)) == (int)-2147483647))))){
		HX_STACK_LINE(1732)
		(this->_i)++;
	}
	HX_STACK_LINE(1733)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTableValIterator_obj,reset,return )


IntIntHashTableValIterator_obj::IntIntHashTableValIterator_obj()
{
}

void IntIntHashTableValIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntIntHashTableValIterator);
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_s,"_s");
	HX_MARK_MEMBER_NAME(_i,"_i");
	HX_MARK_MEMBER_NAME(_f,"_f");
	HX_MARK_END_CLASS();
}

void IntIntHashTableValIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_s,"_s");
	HX_VISIT_MEMBER_NAME(_i,"_i");
	HX_VISIT_MEMBER_NAME(_f,"_f");
}

Dynamic IntIntHashTableValIterator_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"_scan") ) { return _scan_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__getData") ) { return __getData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntIntHashTableValIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_s") ) { _s=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_i") ) { _i=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_f") ) { _f=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntIntHashTableValIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_s"));
	outFields->push(HX_CSTRING("_i"));
	outFields->push(HX_CSTRING("_f"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__getData"),
	HX_CSTRING("_scan"),
	HX_CSTRING("remove"),
	HX_CSTRING("next"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("reset"),
	HX_CSTRING("_data"),
	HX_CSTRING("_s"),
	HX_CSTRING("_i"),
	HX_CSTRING("_f"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntIntHashTableValIterator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntIntHashTableValIterator_obj::__mClass,"__mClass");
};

Class IntIntHashTableValIterator_obj::__mClass;

void IntIntHashTableValIterator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.IntIntHashTableValIterator"), hx::TCanCast< IntIntHashTableValIterator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IntIntHashTableValIterator_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
