#include <hxcpp.h>

#ifndef INCLUDED_de_polygonal_ds_Collection
#include <de/polygonal/ds/Collection.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_DA
#include <de/polygonal/ds/DA.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_DAIterator
#include <de/polygonal/ds/DAIterator.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Hashable
#include <de/polygonal/ds/Hashable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

Void DAIterator_obj::__construct(::de::polygonal::ds::DA f)
{
HX_STACK_PUSH("DAIterator::new","de/polygonal/ds/DA.hx",1209);
{
	HX_STACK_LINE(1210)
	this->_f = f;
	HX_STACK_LINE(1211)
	{
		HX_STACK_LINE(1211)
		this->_a = this->_f->_a;
		HX_STACK_LINE(1211)
		this->_s = this->_f->_size;
		HX_STACK_LINE(1211)
		this->_i = (int)0;
		HX_STACK_LINE(1211)
		hx::ObjectPtr<OBJ_>(this);
	}
}
;
	return null();
}

DAIterator_obj::~DAIterator_obj() { }

Dynamic DAIterator_obj::__CreateEmpty() { return  new DAIterator_obj; }
hx::ObjectPtr< DAIterator_obj > DAIterator_obj::__new(::de::polygonal::ds::DA f)
{  hx::ObjectPtr< DAIterator_obj > result = new DAIterator_obj();
	result->__construct(f);
	return result;}

Dynamic DAIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DAIterator_obj > result = new DAIterator_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *DAIterator_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::de::polygonal::ds::Itr_obj)) return operator ::de::polygonal::ds::Itr_obj *();
	return super::__ToInterface(inType);
}

int DAIterator_obj::__size( Dynamic f){
	HX_STACK_PUSH("DAIterator::__size","de/polygonal/ds/DA.hx",1247);
	HX_STACK_THIS(this);
	HX_STACK_ARG(f,"f");
	HX_STACK_LINE(1247)
	return f->__Field(HX_CSTRING("_size"),true);
}


HX_DEFINE_DYNAMIC_FUNC1(DAIterator_obj,__size,return )

Dynamic DAIterator_obj::__a( Dynamic f){
	HX_STACK_PUSH("DAIterator::__a","de/polygonal/ds/DA.hx",1243);
	HX_STACK_THIS(this);
	HX_STACK_ARG(f,"f");
	HX_STACK_LINE(1243)
	return f->__Field(HX_CSTRING("_a"),true);
}


HX_DEFINE_DYNAMIC_FUNC1(DAIterator_obj,__a,return )

Void DAIterator_obj::remove( ){
{
		HX_STACK_PUSH("DAIterator::remove","de/polygonal/ds/DA.hx",1233);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1238)
		{
			HX_STACK_LINE(1238)
			::de::polygonal::ds::DA _this = this->_f;		HX_STACK_VAR(_this,"_this");
			int i = --(this->_i);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1238)
			Dynamic x = _this->_a->__GetItem(i);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1238)
			int k = (_this->_size - (int)1);		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(1238)
			int p = i;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(1238)
			while(((p < k))){
				HX_STACK_LINE(1238)
				hx::IndexRef((_this->_a).mPtr,p) = _this->_a->__GetItem((p + (int)1));
				HX_STACK_LINE(1238)
				(p)++;
			}
			HX_STACK_LINE(1238)
			(_this->_size)--;
			HX_STACK_LINE(1238)
			x;
		}
		HX_STACK_LINE(1239)
		(this->_s)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DAIterator_obj,remove,(void))

Dynamic DAIterator_obj::next( ){
	HX_STACK_PUSH("DAIterator::next","de/polygonal/ds/DA.hx",1228);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1228)
	return this->_a->__GetItem((this->_i)++);
}


HX_DEFINE_DYNAMIC_FUNC0(DAIterator_obj,next,return )

bool DAIterator_obj::hasNext( ){
	HX_STACK_PUSH("DAIterator::hasNext","de/polygonal/ds/DA.hx",1223);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1223)
	return (this->_i < this->_s);
}


HX_DEFINE_DYNAMIC_FUNC0(DAIterator_obj,hasNext,return )

::de::polygonal::ds::Itr DAIterator_obj::reset( ){
	HX_STACK_PUSH("DAIterator::reset","de/polygonal/ds/DA.hx",1215);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1216)
	this->_a = this->_f->_a;
	HX_STACK_LINE(1217)
	this->_s = this->_f->_size;
	HX_STACK_LINE(1218)
	this->_i = (int)0;
	HX_STACK_LINE(1219)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DAIterator_obj,reset,return )


DAIterator_obj::DAIterator_obj()
{
}

void DAIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DAIterator);
	HX_MARK_MEMBER_NAME(_s,"_s");
	HX_MARK_MEMBER_NAME(_i,"_i");
	HX_MARK_MEMBER_NAME(_a,"_a");
	HX_MARK_MEMBER_NAME(_f,"_f");
	HX_MARK_END_CLASS();
}

void DAIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_s,"_s");
	HX_VISIT_MEMBER_NAME(_i,"_i");
	HX_VISIT_MEMBER_NAME(_a,"_a");
	HX_VISIT_MEMBER_NAME(_f,"_f");
}

Dynamic DAIterator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_s") ) { return _s; }
		if (HX_FIELD_EQ(inName,"_i") ) { return _i; }
		if (HX_FIELD_EQ(inName,"_a") ) { return _a; }
		if (HX_FIELD_EQ(inName,"_f") ) { return _f; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__a") ) { return __a_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__size") ) { return __size_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DAIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_s") ) { _s=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_i") ) { _i=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_a") ) { _a=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_f") ) { _f=inValue.Cast< ::de::polygonal::ds::DA >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DAIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_s"));
	outFields->push(HX_CSTRING("_i"));
	outFields->push(HX_CSTRING("_a"));
	outFields->push(HX_CSTRING("_f"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__size"),
	HX_CSTRING("__a"),
	HX_CSTRING("remove"),
	HX_CSTRING("next"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("reset"),
	HX_CSTRING("_s"),
	HX_CSTRING("_i"),
	HX_CSTRING("_a"),
	HX_CSTRING("_f"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DAIterator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DAIterator_obj::__mClass,"__mClass");
};

Class DAIterator_obj::__mClass;

void DAIterator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.DAIterator"), hx::TCanCast< DAIterator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DAIterator_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
