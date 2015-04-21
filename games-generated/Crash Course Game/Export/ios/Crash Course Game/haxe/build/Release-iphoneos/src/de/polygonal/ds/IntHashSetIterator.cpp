#include <hxcpp.h>

#ifndef INCLUDED_de_polygonal_ds_IntHashSetIterator
#include <de/polygonal/ds/IntHashSetIterator.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

Void IntHashSetIterator_obj::__construct(Dynamic hash)
{
HX_STACK_PUSH("IntHashSetIterator::new","de/polygonal/ds/IntHashSet.hx",1126);
{
	HX_STACK_LINE(1127)
	this->_f = hash;
	HX_STACK_LINE(1128)
	this->_data = this->_f->__Field(HX_CSTRING("_data"),true);
	HX_STACK_LINE(1129)
	this->_i = (int)0;
	HX_STACK_LINE(1130)
	this->_s = this->_f->__Field(HX_CSTRING("_capacity"),true);
	HX_STACK_LINE(1131)
	while(((bool((this->_i < this->_s)) && bool((this->_data->__get((int(this->_i) << int((int)1))) == (int)-2147483647))))){
		HX_STACK_LINE(1131)
		(this->_i)++;
	}
}
;
	return null();
}

IntHashSetIterator_obj::~IntHashSetIterator_obj() { }

Dynamic IntHashSetIterator_obj::__CreateEmpty() { return  new IntHashSetIterator_obj; }
hx::ObjectPtr< IntHashSetIterator_obj > IntHashSetIterator_obj::__new(Dynamic hash)
{  hx::ObjectPtr< IntHashSetIterator_obj > result = new IntHashSetIterator_obj();
	result->__construct(hash);
	return result;}

Dynamic IntHashSetIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntHashSetIterator_obj > result = new IntHashSetIterator_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *IntHashSetIterator_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::de::polygonal::ds::Itr_obj)) return operator ::de::polygonal::ds::Itr_obj *();
	return super::__ToInterface(inType);
}

int IntHashSetIterator_obj::__getData( int i){
	HX_STACK_PUSH("IntHashSetIterator::__getData","de/polygonal/ds/IntHashSet.hx",1166);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(1166)
	return this->_data->__get(i);
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashSetIterator_obj,__getData,return )

Void IntHashSetIterator_obj::_scan( ){
{
		HX_STACK_PUSH("IntHashSetIterator::_scan","de/polygonal/ds/IntHashSet.hx",1161);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1161)
		while(((bool((this->_i < this->_s)) && bool((this->_data->__get((int(this->_i) << int((int)1))) == (int)-2147483647))))){
			HX_STACK_LINE(1162)
			(this->_i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSetIterator_obj,_scan,(void))

Void IntHashSetIterator_obj::remove( ){
{
		HX_STACK_PUSH("IntHashSetIterator::remove","de/polygonal/ds/IntHashSet.hx",1156);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1156)
		hx::Throw (HX_CSTRING("unsupported operation"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSetIterator_obj,remove,(void))

Dynamic IntHashSetIterator_obj::next( ){
	HX_STACK_PUSH("IntHashSetIterator::next","de/polygonal/ds/IntHashSet.hx",1149);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1150)
	int x = this->_data->__get((int((this->_i)++) << int((int)1)));		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(1151)
	while(((bool((this->_i < this->_s)) && bool((this->_data->__get((int(this->_i) << int((int)1))) == (int)-2147483647))))){
		HX_STACK_LINE(1151)
		(this->_i)++;
	}
	HX_STACK_LINE(1152)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSetIterator_obj,next,return )

bool IntHashSetIterator_obj::hasNext( ){
	HX_STACK_PUSH("IntHashSetIterator::hasNext","de/polygonal/ds/IntHashSet.hx",1144);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1144)
	return (this->_i < this->_s);
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSetIterator_obj,hasNext,return )

::de::polygonal::ds::Itr IntHashSetIterator_obj::reset( ){
	HX_STACK_PUSH("IntHashSetIterator::reset","de/polygonal/ds/IntHashSet.hx",1135);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1136)
	this->_data = this->_f->__Field(HX_CSTRING("_data"),true);
	HX_STACK_LINE(1137)
	this->_i = (int)0;
	HX_STACK_LINE(1138)
	this->_s = this->_f->__Field(HX_CSTRING("_capacity"),true);
	HX_STACK_LINE(1139)
	while(((bool((this->_i < this->_s)) && bool((this->_data->__get((int(this->_i) << int((int)1))) == (int)-2147483647))))){
		HX_STACK_LINE(1139)
		(this->_i)++;
	}
	HX_STACK_LINE(1140)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSetIterator_obj,reset,return )


IntHashSetIterator_obj::IntHashSetIterator_obj()
{
}

void IntHashSetIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntHashSetIterator);
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_s,"_s");
	HX_MARK_MEMBER_NAME(_i,"_i");
	HX_MARK_MEMBER_NAME(_f,"_f");
	HX_MARK_END_CLASS();
}

void IntHashSetIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_s,"_s");
	HX_VISIT_MEMBER_NAME(_i,"_i");
	HX_VISIT_MEMBER_NAME(_f,"_f");
}

Dynamic IntHashSetIterator_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic IntHashSetIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void IntHashSetIterator_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(IntHashSetIterator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntHashSetIterator_obj::__mClass,"__mClass");
};

Class IntHashSetIterator_obj::__mClass;

void IntHashSetIterator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.IntHashSetIterator"), hx::TCanCast< IntHashSetIterator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IntHashSetIterator_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds