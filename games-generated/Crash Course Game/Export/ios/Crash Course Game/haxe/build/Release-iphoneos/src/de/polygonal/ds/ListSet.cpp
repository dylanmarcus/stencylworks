#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Collection
#include <de/polygonal/ds/Collection.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_DA
#include <de/polygonal/ds/DA.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_HashKey
#include <de/polygonal/ds/HashKey.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Hashable
#include <de/polygonal/ds/Hashable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_ListSet
#include <de/polygonal/ds/ListSet.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Set
#include <de/polygonal/ds/Set.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

Void ListSet_obj::__construct()
{
HX_STACK_PUSH("ListSet::new","de/polygonal/ds/ListSet.hx",57);
{
	HX_STACK_LINE(58)
	this->_a = ::de::polygonal::ds::DA_obj::__new(null(),null());
	HX_STACK_LINE(59)
	this->key = (::de::polygonal::ds::HashKey_obj::_counter)++;
	HX_STACK_LINE(60)
	this->reuseIterator = false;
}
;
	return null();
}

ListSet_obj::~ListSet_obj() { }

Dynamic ListSet_obj::__CreateEmpty() { return  new ListSet_obj; }
hx::ObjectPtr< ListSet_obj > ListSet_obj::__new()
{  hx::ObjectPtr< ListSet_obj > result = new ListSet_obj();
	result->__construct();
	return result;}

Dynamic ListSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ListSet_obj > result = new ListSet_obj();
	result->__construct();
	return result;}

hx::Object *ListSet_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::de::polygonal::ds::Set_obj)) return operator ::de::polygonal::ds::Set_obj *();
	if (inType==typeid( ::de::polygonal::ds::Collection_obj)) return operator ::de::polygonal::ds::Collection_obj *();
	if (inType==typeid( ::de::polygonal::ds::Hashable_obj)) return operator ::de::polygonal::ds::Hashable_obj *();
	return super::__ToInterface(inType);
}

::de::polygonal::ds::Collection ListSet_obj::clone( hx::Null< bool >  __o_assign,Dynamic _tmp_copier){
bool assign = __o_assign.Default(true);
	HX_STACK_PUSH("ListSet::clone","de/polygonal/ds/ListSet.hx",253);
	HX_STACK_THIS(this);
	HX_STACK_ARG(assign,"assign");
	HX_STACK_ARG(_tmp_copier,"_tmp_copier");
{
		HX_STACK_LINE(254)
		Dynamic copier = _tmp_copier;		HX_STACK_VAR(copier,"copier");
		HX_STACK_LINE(254)
		::de::polygonal::ds::ListSet copy = ::Type_obj::createEmptyInstance(hx::ClassOf< ::de::polygonal::ds::ListSet >());		HX_STACK_VAR(copy,"copy");
		HX_STACK_LINE(255)
		copy->key = (::de::polygonal::ds::HashKey_obj::_counter)++;
		HX_STACK_LINE(256)
		copy->_a = this->_a->clone(assign,copier);
		HX_STACK_LINE(257)
		return copy;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ListSet_obj,clone,return )

Dynamic ListSet_obj::toArray( ){
	HX_STACK_PUSH("ListSet::toArray","de/polygonal/ds/ListSet.hx",231);
	HX_STACK_THIS(this);
	HX_STACK_LINE(231)
	return this->_a->toArray();
}


HX_DEFINE_DYNAMIC_FUNC0(ListSet_obj,toArray,return )

int ListSet_obj::size( ){
	HX_STACK_PUSH("ListSet::size","de/polygonal/ds/ListSet.hx",223);
	HX_STACK_THIS(this);
	HX_STACK_LINE(223)
	return this->_a->_size;
}


HX_DEFINE_DYNAMIC_FUNC0(ListSet_obj,size,return )

bool ListSet_obj::isEmpty( ){
	HX_STACK_PUSH("ListSet::isEmpty","de/polygonal/ds/ListSet.hx",214);
	HX_STACK_THIS(this);
	HX_STACK_LINE(214)
	return (this->_a->_size == (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(ListSet_obj,isEmpty,return )

::de::polygonal::ds::Itr ListSet_obj::iterator( ){
	HX_STACK_PUSH("ListSet::iterator","de/polygonal/ds/ListSet.hx",204);
	HX_STACK_THIS(this);
	HX_STACK_LINE(205)
	this->_a->reuseIterator = this->reuseIterator;
	HX_STACK_LINE(206)
	return this->_a->iterator();
}


HX_DEFINE_DYNAMIC_FUNC0(ListSet_obj,iterator,return )

Void ListSet_obj::clear( hx::Null< bool >  __o_purge){
bool purge = __o_purge.Default(false);
	HX_STACK_PUSH("ListSet::clear","de/polygonal/ds/ListSet.hx",194);
	HX_STACK_THIS(this);
	HX_STACK_ARG(purge,"purge");
{
		HX_STACK_LINE(195)
		::de::polygonal::ds::DA _this = this->_a;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(195)
		if ((purge)){
			HX_STACK_LINE(195)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = _this->_a->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(195)
			while(((_g1 < _g))){
				HX_STACK_LINE(195)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(195)
				hx::IndexRef((_this->_a).mPtr,i) = null();
			}
		}
		HX_STACK_LINE(195)
		_this->_size = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListSet_obj,clear,(void))

bool ListSet_obj::remove( Dynamic _tmp_x){
	HX_STACK_PUSH("ListSet::remove","de/polygonal/ds/ListSet.hx",184);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_x,"_tmp_x");
	HX_STACK_LINE(184)
	Dynamic x = _tmp_x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(184)
	return this->_a->remove(x);
}


HX_DEFINE_DYNAMIC_FUNC1(ListSet_obj,remove,return )

bool ListSet_obj::contains( Dynamic _tmp_x){
	HX_STACK_PUSH("ListSet::contains","de/polygonal/ds/ListSet.hx",174);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_x,"_tmp_x");
	HX_STACK_LINE(174)
	Dynamic x = _tmp_x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(174)
	return this->_a->contains(x);
}


HX_DEFINE_DYNAMIC_FUNC1(ListSet_obj,contains,return )

Void ListSet_obj::free( ){
{
		HX_STACK_PUSH("ListSet::free","de/polygonal/ds/ListSet.hx",164);
		HX_STACK_THIS(this);
		HX_STACK_LINE(165)
		this->_a->free();
		HX_STACK_LINE(166)
		this->_a = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ListSet_obj,free,(void))

Void ListSet_obj::merge( ::de::polygonal::ds::Set x,bool assign,Dynamic copier){
{
		HX_STACK_PUSH("ListSet::merge","de/polygonal/ds/ListSet.hx",127);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(assign,"assign");
		HX_STACK_ARG(copier,"copier");
		HX_STACK_LINE(127)
		if ((assign)){
			HX_STACK_LINE(129)
			for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(x->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
				Dynamic val = __it->next();
				this->set(val);
			}
		}
		else{
			HX_STACK_LINE(133)
			if (((copier != null()))){
				HX_STACK_LINE(135)
				for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(x->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
					Dynamic val = __it->next();
					this->set(copier(val));
				}
			}
			else{
				HX_STACK_LINE(140)
				for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(x->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
					Dynamic val = __it->next();
					this->set(val->__Field(HX_CSTRING("clone"),true)());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ListSet_obj,merge,(void))

bool ListSet_obj::set( Dynamic _tmp_x){
	HX_STACK_PUSH("ListSet::set","de/polygonal/ds/ListSet.hx",108);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_x,"_tmp_x");
	HX_STACK_LINE(108)
	Dynamic x = _tmp_x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(108)
	if ((this->_a->contains(x))){
		HX_STACK_LINE(110)
		return false;
	}
	else{
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			::de::polygonal::ds::DA _this = this->_a;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(113)
			{
				HX_STACK_LINE(113)
				int i = _this->_size;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(113)
				hx::IndexRef((_this->_a).mPtr,i) = x;
				HX_STACK_LINE(113)
				if (((i >= _this->_size))){
					HX_STACK_LINE(113)
					(_this->_size)++;
				}
			}
		}
		HX_STACK_LINE(114)
		return true;
	}
	HX_STACK_LINE(108)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ListSet_obj,set,return )

bool ListSet_obj::has( Dynamic _tmp_x){
	HX_STACK_PUSH("ListSet::has","de/polygonal/ds/ListSet.hx",98);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_x,"_tmp_x");
	HX_STACK_LINE(98)
	Dynamic x = _tmp_x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(98)
	return this->_a->contains(x);
}


HX_DEFINE_DYNAMIC_FUNC1(ListSet_obj,has,return )

::String ListSet_obj::toString( ){
	HX_STACK_PUSH("ListSet::toString","de/polygonal/ds/ListSet.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_LINE(80)
	::String s = ((HX_CSTRING("{ ListSet size: ") + this->size()) + HX_CSTRING(" }"));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(81)
	if ((this->isEmpty())){
		HX_STACK_LINE(81)
		return s;
	}
	HX_STACK_LINE(82)
	hx::AddEq(s,HX_CSTRING("\n[\n"));
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->size();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		while(((_g1 < _g))){
			HX_STACK_LINE(83)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(84)
			hx::AddEq(s,((HX_CSTRING("  ") + ::Std_obj::string(this->_a->_a->__GetItem(i))) + HX_CSTRING("\n")));
		}
	}
	HX_STACK_LINE(85)
	hx::AddEq(s,HX_CSTRING("]"));
	HX_STACK_LINE(86)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(ListSet_obj,toString,return )


ListSet_obj::ListSet_obj()
{
}

void ListSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListSet);
	HX_MARK_MEMBER_NAME(_a,"_a");
	HX_MARK_MEMBER_NAME(reuseIterator,"reuseIterator");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_END_CLASS();
}

void ListSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_a,"_a");
	HX_VISIT_MEMBER_NAME(reuseIterator,"reuseIterator");
	HX_VISIT_MEMBER_NAME(key,"key");
}

Dynamic ListSet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_a") ) { return _a; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"reuseIterator") ) { return reuseIterator; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ListSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_a") ) { _a=inValue.Cast< ::de::polygonal::ds::DA >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"reuseIterator") ) { reuseIterator=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_a"));
	outFields->push(HX_CSTRING("reuseIterator"));
	outFields->push(HX_CSTRING("key"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("toArray"),
	HX_CSTRING("size"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("iterator"),
	HX_CSTRING("clear"),
	HX_CSTRING("remove"),
	HX_CSTRING("contains"),
	HX_CSTRING("free"),
	HX_CSTRING("merge"),
	HX_CSTRING("set"),
	HX_CSTRING("has"),
	HX_CSTRING("toString"),
	HX_CSTRING("_a"),
	HX_CSTRING("reuseIterator"),
	HX_CSTRING("key"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListSet_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListSet_obj::__mClass,"__mClass");
};

Class ListSet_obj::__mClass;

void ListSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.ListSet"), hx::TCanCast< ListSet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ListSet_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
