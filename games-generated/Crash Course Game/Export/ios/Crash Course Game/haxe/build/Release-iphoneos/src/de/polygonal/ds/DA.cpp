#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_de_polygonal_Printf
#include <de/polygonal/Printf.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_ArrayUtil
#include <de/polygonal/ds/ArrayUtil.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Cloneable
#include <de/polygonal/ds/Cloneable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Collection
#include <de/polygonal/ds/Collection.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Comparable
#include <de/polygonal/ds/Comparable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_DA
#include <de/polygonal/ds/DA.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_DAIterator
#include <de/polygonal/ds/DAIterator.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

Void DA_obj::__construct(hx::Null< int >  __o_reservedSize,hx::Null< int >  __o_maxSize)
{
HX_STACK_PUSH("DA::new","de/polygonal/ds/DA.hx",82);
int reservedSize = __o_reservedSize.Default(0);
int maxSize = __o_maxSize.Default(-1);
{
	HX_STACK_LINE(83)
	this->_size = (int)0;
	HX_STACK_LINE(84)
	this->_iterator = null();
	HX_STACK_LINE(89)
	this->maxSize = (int)-1;
	HX_STACK_LINE(92)
	if (((reservedSize > (int)0))){
		struct _Function_2_1{
			inline static Dynamic Block( int &reservedSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/DA.hx",97);
				{
					HX_STACK_LINE(97)
					Dynamic a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(97)
					a = Dynamic( Array_obj<Dynamic>::__new() );
					HX_STACK_LINE(97)
					hx::IndexRef((a).mPtr,(reservedSize - (int)1)) = null();
					HX_STACK_LINE(97)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(93)
		this->_a = _Function_2_1::Block(reservedSize);
	}
	else{
		HX_STACK_LINE(100)
		this->_a = Dynamic( Array_obj<Dynamic>::__new() );
	}
	HX_STACK_LINE(102)
	this->key = (::de::polygonal::ds::HashKey_obj::_counter)++;
	HX_STACK_LINE(103)
	this->reuseIterator = false;
}
;
	return null();
}

DA_obj::~DA_obj() { }

Dynamic DA_obj::__CreateEmpty() { return  new DA_obj; }
hx::ObjectPtr< DA_obj > DA_obj::__new(hx::Null< int >  __o_reservedSize,hx::Null< int >  __o_maxSize)
{  hx::ObjectPtr< DA_obj > result = new DA_obj();
	result->__construct(__o_reservedSize,__o_maxSize);
	return result;}

Dynamic DA_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DA_obj > result = new DA_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *DA_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::de::polygonal::ds::Collection_obj)) return operator ::de::polygonal::ds::Collection_obj *();
	if (inType==typeid( ::de::polygonal::ds::Hashable_obj)) return operator ::de::polygonal::ds::Hashable_obj *();
	return super::__ToInterface(inType);
}

Void DA_obj::__cpy( int i,int j){
{
		HX_STACK_PUSH("DA::__cpy","de/polygonal/ds/DA.hx",1190);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_ARG(j,"j");
		HX_STACK_LINE(1190)
		hx::IndexRef((this->_a).mPtr,i) = this->_a->__GetItem(j);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DA_obj,__cpy,(void))

Void DA_obj::__set( int i,Dynamic x){
{
		HX_STACK_PUSH("DA::__set","de/polygonal/ds/DA.hx",1185);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1185)
		hx::IndexRef((this->_a).mPtr,i) = x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DA_obj,__set,(void))

Dynamic DA_obj::__get( int i){
	HX_STACK_PUSH("DA::__get","de/polygonal/ds/DA.hx",1180);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(1180)
	return this->_a->__GetItem(i);
}


HX_DEFINE_DYNAMIC_FUNC1(DA_obj,__get,return )

Void DA_obj::_insertionSortComparable( int first,int k){
{
		HX_STACK_PUSH("DA::_insertionSortComparable","de/polygonal/ds/DA.hx",1149);
		HX_STACK_THIS(this);
		HX_STACK_ARG(first,"first");
		HX_STACK_ARG(k,"k");
		HX_STACK_LINE(1150)
		int _g1 = (first + (int)1);		HX_STACK_VAR(_g1,"_g1");
		int _g = (first + k);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1150)
		while(((_g1 < _g))){
			HX_STACK_LINE(1150)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1152)
			Dynamic x = this->_a->__GetItem(i);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1158)
			int j = i;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1159)
			while(((j > first))){
				HX_STACK_LINE(1161)
				Dynamic y = this->_a->__GetItem((j - (int)1));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1167)
				if ((((hx::TCast< de::polygonal::ds::Comparable >::cast(y))->compare(x) > (int)0))){
					HX_STACK_LINE(1169)
					hx::IndexRef((this->_a).mPtr,j) = y;
					HX_STACK_LINE(1170)
					(j)--;
				}
				else{
					HX_STACK_LINE(1173)
					break;
				}
			}
			HX_STACK_LINE(1175)
			hx::IndexRef((this->_a).mPtr,j) = x;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DA_obj,_insertionSortComparable,(void))

Void DA_obj::_insertionSort( int first,int k,Dynamic cmp){
{
		HX_STACK_PUSH("DA::_insertionSort","de/polygonal/ds/DA.hx",1128);
		HX_STACK_THIS(this);
		HX_STACK_ARG(first,"first");
		HX_STACK_ARG(k,"k");
		HX_STACK_ARG(cmp,"cmp");
		HX_STACK_LINE(1129)
		int _g1 = (first + (int)1);		HX_STACK_VAR(_g1,"_g1");
		int _g = (first + k);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1129)
		while(((_g1 < _g))){
			HX_STACK_LINE(1129)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1131)
			Dynamic x = this->_a->__GetItem(i);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1132)
			int j = i;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1133)
			while(((j > first))){
				HX_STACK_LINE(1135)
				Dynamic y = this->_a->__GetItem((j - (int)1));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1136)
				if (((cmp(y,x).Cast< int >() > (int)0))){
					HX_STACK_LINE(1138)
					hx::IndexRef((this->_a).mPtr,j) = y;
					HX_STACK_LINE(1139)
					(j)--;
				}
				else{
					HX_STACK_LINE(1142)
					break;
				}
			}
			HX_STACK_LINE(1144)
			hx::IndexRef((this->_a).mPtr,j) = x;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DA_obj,_insertionSort,(void))

Void DA_obj::_quickSortComparable( int first,int k){
{
		HX_STACK_PUSH("DA::_quickSortComparable","de/polygonal/ds/DA.hx",1061);
		HX_STACK_THIS(this);
		HX_STACK_ARG(first,"first");
		HX_STACK_ARG(k,"k");
		HX_STACK_LINE(1062)
		int last = ((first + k) - (int)1);		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(1063)
		int lo = first;		HX_STACK_VAR(lo,"lo");
		HX_STACK_LINE(1064)
		int hi = last;		HX_STACK_VAR(hi,"hi");
		HX_STACK_LINE(1065)
		if (((k > (int)1))){
			HX_STACK_LINE(1067)
			int i0 = first;		HX_STACK_VAR(i0,"i0");
			HX_STACK_LINE(1068)
			int i1 = (i0 + ((int(k) >> int((int)1))));		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(1069)
			int i2 = ((i0 + k) - (int)1);		HX_STACK_VAR(i2,"i2");
			HX_STACK_LINE(1077)
			Dynamic t0 = hx::TCast< de::polygonal::ds::Comparable >::cast(this->_a->__GetItem(i0));		HX_STACK_VAR(t0,"t0");
			HX_STACK_LINE(1078)
			Dynamic t1 = hx::TCast< de::polygonal::ds::Comparable >::cast(this->_a->__GetItem(i1));		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(1079)
			Dynamic t2 = hx::TCast< de::polygonal::ds::Comparable >::cast(this->_a->__GetItem(i2));		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(1081)
			int mid;		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(1082)
			int t = t0->__Field(HX_CSTRING("compare"),true)(t2);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1083)
			if (((bool((t < (int)0)) && bool((t0->__Field(HX_CSTRING("compare"),true)(t1) < (int)0))))){
				HX_STACK_LINE(1084)
				mid = (  (((t1->__Field(HX_CSTRING("compare"),true)(t2) < (int)0))) ? int(i1) : int(i2) );
			}
			else{
				HX_STACK_LINE(1086)
				if (((bool((t0->__Field(HX_CSTRING("compare"),true)(t1) < (int)0)) && bool((t1->__Field(HX_CSTRING("compare"),true)(t2) < (int)0))))){
					HX_STACK_LINE(1088)
					mid = (  (((t < (int)0))) ? int(i0) : int(i2) );
				}
				else{
					HX_STACK_LINE(1090)
					mid = (  (((t2->__Field(HX_CSTRING("compare"),true)(t0) < (int)0))) ? int(i1) : int(i0) );
				}
			}
			HX_STACK_LINE(1097)
			Dynamic pivot = hx::TCast< de::polygonal::ds::Comparable >::cast(this->_a->__GetItem(mid));		HX_STACK_VAR(pivot,"pivot");
			HX_STACK_LINE(1099)
			hx::IndexRef((this->_a).mPtr,mid) = this->_a->__GetItem(first);
			HX_STACK_LINE(1101)
			while(((lo < hi))){
				HX_STACK_LINE(1108)
				while(((bool((pivot->__Field(HX_CSTRING("compare"),true)(hx::TCast< de::polygonal::ds::Comparable >::cast(this->_a->__GetItem(hi))) < (int)0)) && bool((lo < hi))))){
					HX_STACK_LINE(1108)
					(hi)--;
				}
				HX_STACK_LINE(1109)
				if (((hi != lo))){
					HX_STACK_LINE(1111)
					hx::IndexRef((this->_a).mPtr,lo) = this->_a->__GetItem(hi);
					HX_STACK_LINE(1112)
					(lo)++;
				}
				HX_STACK_LINE(1114)
				while(((bool((pivot->__Field(HX_CSTRING("compare"),true)(hx::TCast< de::polygonal::ds::Comparable >::cast(this->_a->__GetItem(lo))) > (int)0)) && bool((lo < hi))))){
					HX_STACK_LINE(1114)
					(lo)++;
				}
				HX_STACK_LINE(1115)
				if (((hi != lo))){
					HX_STACK_LINE(1117)
					hx::IndexRef((this->_a).mPtr,hi) = this->_a->__GetItem(lo);
					HX_STACK_LINE(1118)
					(hi)--;
				}
			}
			HX_STACK_LINE(1121)
			hx::IndexRef((this->_a).mPtr,lo) = pivot;
			HX_STACK_LINE(1122)
			this->_quickSortComparable(first,(lo - first));
			HX_STACK_LINE(1123)
			this->_quickSortComparable((lo + (int)1),(last - lo));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DA_obj,_quickSortComparable,(void))

Void DA_obj::_quickSort( int first,int k,Dynamic cmp){
{
		HX_STACK_PUSH("DA::_quickSort","de/polygonal/ds/DA.hx",1012);
		HX_STACK_THIS(this);
		HX_STACK_ARG(first,"first");
		HX_STACK_ARG(k,"k");
		HX_STACK_ARG(cmp,"cmp");
		HX_STACK_LINE(1013)
		int last = ((first + k) - (int)1);		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(1014)
		int lo = first;		HX_STACK_VAR(lo,"lo");
		HX_STACK_LINE(1015)
		int hi = last;		HX_STACK_VAR(hi,"hi");
		HX_STACK_LINE(1016)
		if (((k > (int)1))){
			HX_STACK_LINE(1018)
			int i0 = first;		HX_STACK_VAR(i0,"i0");
			HX_STACK_LINE(1019)
			int i1 = (i0 + ((int(k) >> int((int)1))));		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(1020)
			int i2 = ((i0 + k) - (int)1);		HX_STACK_VAR(i2,"i2");
			HX_STACK_LINE(1021)
			Dynamic t0 = this->_a->__GetItem(i0);		HX_STACK_VAR(t0,"t0");
			HX_STACK_LINE(1022)
			Dynamic t1 = this->_a->__GetItem(i1);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(1023)
			Dynamic t2 = this->_a->__GetItem(i2);		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(1024)
			int mid;		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(1025)
			int t = cmp(t0,t2).Cast< int >();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1026)
			if (((bool((t < (int)0)) && bool((cmp(t0,t1).Cast< int >() < (int)0))))){
				HX_STACK_LINE(1027)
				mid = (  (((cmp(t1,t2).Cast< int >() < (int)0))) ? int(i1) : int(i2) );
			}
			else{
				HX_STACK_LINE(1029)
				if (((bool((cmp(t1,t0).Cast< int >() < (int)0)) && bool((cmp(t1,t2).Cast< int >() < (int)0))))){
					HX_STACK_LINE(1031)
					mid = (  (((t < (int)0))) ? int(i0) : int(i2) );
				}
				else{
					HX_STACK_LINE(1033)
					mid = (  (((cmp(t2,t0).Cast< int >() < (int)0))) ? int(i1) : int(i0) );
				}
			}
			HX_STACK_LINE(1036)
			Dynamic pivot = this->_a->__GetItem(mid);		HX_STACK_VAR(pivot,"pivot");
			HX_STACK_LINE(1037)
			hx::IndexRef((this->_a).mPtr,mid) = this->_a->__GetItem(first);
			HX_STACK_LINE(1039)
			while(((lo < hi))){
				HX_STACK_LINE(1041)
				while(((bool((cmp(pivot,this->_a->__GetItem(hi)).Cast< int >() < (int)0)) && bool((lo < hi))))){
					HX_STACK_LINE(1041)
					(hi)--;
				}
				HX_STACK_LINE(1042)
				if (((hi != lo))){
					HX_STACK_LINE(1044)
					hx::IndexRef((this->_a).mPtr,lo) = this->_a->__GetItem(hi);
					HX_STACK_LINE(1045)
					(lo)++;
				}
				HX_STACK_LINE(1047)
				while(((bool((cmp(pivot,this->_a->__GetItem(lo)).Cast< int >() > (int)0)) && bool((lo < hi))))){
					HX_STACK_LINE(1047)
					(lo)++;
				}
				HX_STACK_LINE(1048)
				if (((hi != lo))){
					HX_STACK_LINE(1050)
					hx::IndexRef((this->_a).mPtr,hi) = this->_a->__GetItem(lo);
					HX_STACK_LINE(1051)
					(hi)--;
				}
			}
			HX_STACK_LINE(1054)
			hx::IndexRef((this->_a).mPtr,lo) = pivot;
			HX_STACK_LINE(1055)
			this->_quickSort(first,(lo - first),cmp);
			HX_STACK_LINE(1056)
			this->_quickSort((lo + (int)1),(last - lo),cmp);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DA_obj,_quickSort,(void))

::String DA_obj::toString( ){
	HX_STACK_PUSH("DA::toString","de/polygonal/ds/DA.hx",1001);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1002)
	::String s = ((HX_CSTRING("{ DA size: ") + this->_size) + HX_CSTRING(" }"));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(1003)
	if (((this->_size == (int)0))){
		HX_STACK_LINE(1003)
		return s;
	}
	HX_STACK_LINE(1004)
	hx::AddEq(s,HX_CSTRING("\n[\n"));
	HX_STACK_LINE(1005)
	{
		HX_STACK_LINE(1005)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_size;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1005)
		while(((_g1 < _g))){
			HX_STACK_LINE(1005)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1006)
			hx::AddEq(s,::de::polygonal::Printf_obj::format(HX_CSTRING("  %4d -> %s\n"),Dynamic( Array_obj<Dynamic>::__new().Add(i).Add(::Std_obj::string(this->_a->__GetItem(i))))));
		}
	}
	HX_STACK_LINE(1007)
	hx::AddEq(s,HX_CSTRING("]"));
	HX_STACK_LINE(1008)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(DA_obj,toString,return )

Void DA_obj::shuffle( ::de::polygonal::ds::DA rval){
{
		HX_STACK_PUSH("DA::shuffle","de/polygonal/ds/DA.hx",953);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rval,"rval");
		HX_STACK_LINE(954)
		int s = this->_size;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(955)
		if (((rval == null()))){
			HX_STACK_LINE(957)
			Dynamic m = hx::ClassOf< ::Math >();		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(958)
			while(((--(s) > (int)1))){
				HX_STACK_LINE(960)
				int i = ::Std_obj::_int((m->__Field(HX_CSTRING("random"),true)() * s));		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(961)
				Dynamic t = this->_a->__GetItem(s);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(962)
				hx::IndexRef((this->_a).mPtr,s) = this->_a->__GetItem(i);
				HX_STACK_LINE(963)
				hx::IndexRef((this->_a).mPtr,i) = t;
			}
		}
		else{
			HX_STACK_LINE(972)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(973)
			while(((--(s) > (int)1))){
				HX_STACK_LINE(975)
				int i = ::Std_obj::_int((rval->_a->__GetItem((j)++) * s));		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(976)
				Dynamic t = this->_a->__GetItem(s);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(977)
				hx::IndexRef((this->_a).mPtr,s) = this->_a->__GetItem(i);
				HX_STACK_LINE(978)
				hx::IndexRef((this->_a).mPtr,i) = t;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DA_obj,shuffle,(void))

::de::polygonal::ds::Collection DA_obj::clone( hx::Null< bool >  __o_assign,Dynamic _tmp_copier){
bool assign = __o_assign.Default(true);
	HX_STACK_PUSH("DA::clone","de/polygonal/ds/DA.hx",914);
	HX_STACK_THIS(this);
	HX_STACK_ARG(assign,"assign");
	HX_STACK_ARG(_tmp_copier,"_tmp_copier");
{
		HX_STACK_LINE(915)
		Dynamic copier = _tmp_copier;		HX_STACK_VAR(copier,"copier");
		HX_STACK_LINE(915)
		::de::polygonal::ds::DA copy = ::de::polygonal::ds::DA_obj::__new(this->_size,this->maxSize);		HX_STACK_VAR(copy,"copy");
		HX_STACK_LINE(916)
		copy->_size = this->_size;
		HX_STACK_LINE(917)
		if ((assign)){
			HX_STACK_LINE(919)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_size;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(919)
			while(((_g1 < _g))){
				HX_STACK_LINE(919)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(920)
				hx::IndexRef((copy->_a).mPtr,i) = this->_a->__GetItem(i);
			}
		}
		else{
			HX_STACK_LINE(923)
			if (((copier == null()))){
				HX_STACK_LINE(925)
				::de::polygonal::ds::Cloneable c = null();		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(926)
				{
					HX_STACK_LINE(926)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->_size;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(926)
					while(((_g1 < _g))){
						HX_STACK_LINE(926)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(932)
						c = hx::TCast< de::polygonal::ds::Cloneable >::cast(this->_a->__GetItem(i));
						HX_STACK_LINE(933)
						{
							HX_STACK_LINE(933)
							Dynamic x = c->clone();		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(933)
							hx::IndexRef((copy->_a).mPtr,i) = x;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(938)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_size;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(938)
				while(((_g1 < _g))){
					HX_STACK_LINE(938)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(939)
					hx::IndexRef((copy->_a).mPtr,i) = copier(this->_a->__GetItem(i));
				}
			}
		}
		HX_STACK_LINE(942)
		return copy;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(DA_obj,clone,return )

Dynamic DA_obj::toArray( ){
	HX_STACK_PUSH("DA::toArray","de/polygonal/ds/DA.hx",887);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Dynamic Block( ::de::polygonal::ds::DA_obj *__this){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/DA.hx",888);
			{
				HX_STACK_LINE(888)
				Dynamic a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(888)
				a = Dynamic( Array_obj<Dynamic>::__new() );
				HX_STACK_LINE(888)
				hx::IndexRef((a).mPtr,(__this->_size - (int)1)) = null();
				HX_STACK_LINE(888)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(888)
	Dynamic a = _Function_1_1::Block(this);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(889)
	{
		HX_STACK_LINE(889)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_size;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(889)
		while(((_g1 < _g))){
			HX_STACK_LINE(889)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(889)
			hx::IndexRef((a).mPtr,i) = this->_a->__GetItem(i);
		}
	}
	HX_STACK_LINE(890)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(DA_obj,toArray,return )

bool DA_obj::isEmpty( ){
	HX_STACK_PUSH("DA::isEmpty","de/polygonal/ds/DA.hx",878);
	HX_STACK_THIS(this);
	HX_STACK_LINE(878)
	return (this->_size == (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(DA_obj,isEmpty,return )

int DA_obj::size( ){
	HX_STACK_PUSH("DA::size","de/polygonal/ds/DA.hx",869);
	HX_STACK_THIS(this);
	HX_STACK_LINE(869)
	return this->_size;
}


HX_DEFINE_DYNAMIC_FUNC0(DA_obj,size,return )

::de::polygonal::ds::Itr DA_obj::iterator( ){
	HX_STACK_PUSH("DA::iterator","de/polygonal/ds/DA.hx",851);
	HX_STACK_THIS(this);
	HX_STACK_LINE(851)
	if ((this->reuseIterator)){
		HX_STACK_LINE(854)
		if (((this->_iterator == null()))){
			HX_STACK_LINE(855)
			this->_iterator = ::de::polygonal::ds::DAIterator_obj::__new(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(857)
			::de::polygonal::ds::DAIterator _this = this->_iterator;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(857)
			_this->_a = _this->_f->_a;
			HX_STACK_LINE(857)
			_this->_s = _this->_f->_size;
			HX_STACK_LINE(857)
			_this->_i = (int)0;
			HX_STACK_LINE(857)
			_this;
		}
		HX_STACK_LINE(858)
		return this->_iterator;
	}
	else{
		HX_STACK_LINE(861)
		return ::de::polygonal::ds::DAIterator_obj::__new(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(851)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DA_obj,iterator,return )

Void DA_obj::clear( hx::Null< bool >  __o_purge){
bool purge = __o_purge.Default(false);
	HX_STACK_PUSH("DA::clear","de/polygonal/ds/DA.hx",838);
	HX_STACK_THIS(this);
	HX_STACK_ARG(purge,"purge");
{
		HX_STACK_LINE(839)
		if ((purge)){
			HX_STACK_LINE(840)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_a->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(840)
			while(((_g1 < _g))){
				HX_STACK_LINE(840)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(841)
				hx::IndexRef((this->_a).mPtr,i) = null();
			}
		}
		HX_STACK_LINE(842)
		this->_size = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DA_obj,clear,(void))

bool DA_obj::remove( Dynamic _tmp_x){
	HX_STACK_PUSH("DA::remove","de/polygonal/ds/DA.hx",806);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_x,"_tmp_x");
	HX_STACK_LINE(807)
	Dynamic x = _tmp_x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(807)
	if (((this->_size == (int)0))){
		HX_STACK_LINE(807)
		return false;
	}
	HX_STACK_LINE(809)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(810)
	int s = this->_size;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(811)
	while(((i < s))){
		HX_STACK_LINE(813)
		if (((this->_a->__GetItem(i) == x))){
			HX_STACK_LINE(815)
			(s)--;
			HX_STACK_LINE(816)
			int p = i;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(817)
			while(((p < s))){
				HX_STACK_LINE(819)
				hx::IndexRef((this->_a).mPtr,p) = this->_a->__GetItem((p + (int)1));
				HX_STACK_LINE(820)
				++(p);
			}
			HX_STACK_LINE(822)
			continue;
		}
		HX_STACK_LINE(824)
		(i)++;
	}
	HX_STACK_LINE(827)
	bool found = ((this->_size - s) != (int)0);		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(828)
	this->_size = s;
	HX_STACK_LINE(829)
	return found;
}


HX_DEFINE_DYNAMIC_FUNC1(DA_obj,remove,return )

bool DA_obj::contains( Dynamic _tmp_x){
	HX_STACK_PUSH("DA::contains","de/polygonal/ds/DA.hx",787);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_x,"_tmp_x");
	HX_STACK_LINE(788)
	Dynamic x = _tmp_x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(788)
	bool found = false;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(789)
	{
		HX_STACK_LINE(789)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_size;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(789)
		while(((_g1 < _g))){
			HX_STACK_LINE(789)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(791)
			if (((this->_a->__GetItem(i) == x))){
				HX_STACK_LINE(793)
				found = true;
				HX_STACK_LINE(794)
				break;
			}
		}
	}
	HX_STACK_LINE(797)
	return found;
}


HX_DEFINE_DYNAMIC_FUNC1(DA_obj,contains,return )

Void DA_obj::free( ){
{
		HX_STACK_PUSH("DA::free","de/polygonal/ds/DA.hx",776);
		HX_STACK_THIS(this);
		HX_STACK_LINE(777)
		{
			HX_STACK_LINE(777)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_a->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(777)
			while(((_g1 < _g))){
				HX_STACK_LINE(777)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(777)
				hx::IndexRef((this->_a).mPtr,i) = null();
			}
		}
		HX_STACK_LINE(778)
		this->_a = null();
		HX_STACK_LINE(779)
		this->_iterator = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DA_obj,free,(void))

Dynamic DA_obj::getArray( ){
	HX_STACK_PUSH("DA::getArray","de/polygonal/ds/DA.hx",762);
	HX_STACK_THIS(this);
	HX_STACK_LINE(762)
	return this->_a;
}


HX_DEFINE_DYNAMIC_FUNC0(DA_obj,getArray,return )

bool DA_obj::inRange( int i){
	HX_STACK_PUSH("DA::inRange","de/polygonal/ds/DA.hx",751);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(751)
	return (bool((i >= (int)0)) && bool((i < this->_size)));
}


HX_DEFINE_DYNAMIC_FUNC1(DA_obj,inRange,return )

Void DA_obj::sort( Dynamic compare,hx::Null< bool >  __o_useInsertionSort,hx::Null< int >  __o_first,hx::Null< int >  __o_count){
bool useInsertionSort = __o_useInsertionSort.Default(false);
int first = __o_first.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_PUSH("DA::sort","de/polygonal/ds/DA.hx",712);
	HX_STACK_THIS(this);
	HX_STACK_ARG(compare,"compare");
	HX_STACK_ARG(useInsertionSort,"useInsertionSort");
	HX_STACK_ARG(first,"first");
	HX_STACK_ARG(count,"count");
{
		HX_STACK_LINE(712)
		if (((this->_size > (int)1))){
			HX_STACK_LINE(715)
			if (((count == (int)-1))){
				HX_STACK_LINE(715)
				count = (this->_size - first);
			}
			HX_STACK_LINE(722)
			if (((compare == null()))){
				HX_STACK_LINE(723)
				if ((useInsertionSort)){
					HX_STACK_LINE(723)
					this->_insertionSortComparable(first,count);
				}
				else{
					HX_STACK_LINE(723)
					this->_quickSortComparable(first,count);
				}
			}
			else{
				HX_STACK_LINE(725)
				if ((useInsertionSort)){
					HX_STACK_LINE(727)
					this->_insertionSort(first,count,compare);
				}
				else{
					HX_STACK_LINE(729)
					this->_quickSort(first,count,compare);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DA_obj,sort,(void))

::String DA_obj::join( ::String x){
	HX_STACK_PUSH("DA::join","de/polygonal/ds/DA.hx",686);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(687)
	if (((this->_size == (int)0))){
		HX_STACK_LINE(687)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(688)
	if (((this->_size == (int)1))){
		HX_STACK_LINE(688)
		return ::Std_obj::string(this->_a->__GetItem((int)0));
	}
	HX_STACK_LINE(689)
	::String s = (::Std_obj::string(this->_a->__GetItem((int)0)) + x);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(690)
	{
		HX_STACK_LINE(690)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		int _g = (this->_size - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(690)
		while(((_g1 < _g))){
			HX_STACK_LINE(690)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(692)
			hx::AddEq(s,::Std_obj::string(this->_a->__GetItem(i)));
			HX_STACK_LINE(693)
			hx::AddEq(s,x);
		}
	}
	HX_STACK_LINE(695)
	hx::AddEq(s,::Std_obj::string(this->_a->__GetItem((this->_size - (int)1))));
	HX_STACK_LINE(696)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC1(DA_obj,join,return )

Void DA_obj::memmove( int destination,int source,int n){
{
		HX_STACK_PUSH("DA::memmove","de/polygonal/ds/DA.hx",646);
		HX_STACK_THIS(this);
		HX_STACK_ARG(destination,"destination");
		HX_STACK_ARG(source,"source");
		HX_STACK_ARG(n,"n");
		HX_STACK_LINE(646)
		if (((source == destination))){
			HX_STACK_LINE(655)
			return null();
		}
		else{
			HX_STACK_LINE(657)
			if (((source <= destination))){
				HX_STACK_LINE(659)
				int i = (source + n);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(660)
				int j = (destination + n);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(661)
				{
					HX_STACK_LINE(661)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(661)
					while(((_g < n))){
						HX_STACK_LINE(661)
						int k = (_g)++;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(663)
						(i)--;
						HX_STACK_LINE(664)
						(j)--;
						HX_STACK_LINE(665)
						hx::IndexRef((this->_a).mPtr,j) = this->_a->__GetItem(i);
					}
				}
			}
			else{
				HX_STACK_LINE(670)
				int i = source;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(671)
				int j = destination;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(672)
				{
					HX_STACK_LINE(672)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(672)
					while(((_g < n))){
						HX_STACK_LINE(672)
						int k = (_g)++;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(674)
						hx::IndexRef((this->_a).mPtr,j) = this->_a->__GetItem(i);
						HX_STACK_LINE(675)
						(i)++;
						HX_STACK_LINE(676)
						(j)++;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DA_obj,memmove,(void))

::de::polygonal::ds::DA DA_obj::fill( Dynamic x,hx::Null< int >  __o_n){
int n = __o_n.Default(0);
	HX_STACK_PUSH("DA::fill","de/polygonal/ds/DA.hx",616);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(n,"n");
{
		HX_STACK_LINE(621)
		if (((n > (int)0))){
			HX_STACK_LINE(622)
			this->_size = n;
		}
		else{
			HX_STACK_LINE(630)
			n = this->_size;
		}
		HX_STACK_LINE(632)
		{
			HX_STACK_LINE(632)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(632)
			while(((_g < n))){
				HX_STACK_LINE(632)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(633)
				hx::IndexRef((this->_a).mPtr,i) = x;
			}
		}
		HX_STACK_LINE(635)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(DA_obj,fill,return )

Void DA_obj::assign( ::Class C,Dynamic args,hx::Null< int >  __o_n){
int n = __o_n.Default(0);
	HX_STACK_PUSH("DA::assign","de/polygonal/ds/DA.hx",590);
	HX_STACK_THIS(this);
	HX_STACK_ARG(C,"C");
	HX_STACK_ARG(args,"args");
	HX_STACK_ARG(n,"n");
{
		HX_STACK_LINE(595)
		if (((n > (int)0))){
			HX_STACK_LINE(596)
			this->_size = n;
		}
		else{
			HX_STACK_LINE(604)
			n = this->_size;
		}
		HX_STACK_LINE(605)
		if (((args == null()))){
			HX_STACK_LINE(605)
			args = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(606)
		{
			HX_STACK_LINE(606)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(606)
			while(((_g < n))){
				HX_STACK_LINE(606)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(606)
				hx::IndexRef((this->_a).mPtr,i) = ::Type_obj::createInstance(C,args);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DA_obj,assign,(void))

Void DA_obj::reverse( ){
{
		HX_STACK_PUSH("DA::reverse","de/polygonal/ds/DA.hx",575);
		HX_STACK_THIS(this);
		HX_STACK_LINE(576)
		if (((this->_a->__Field(HX_CSTRING("length"),true) > this->_size))){
			struct _Function_2_1{
				inline static Dynamic Block( ::de::polygonal::ds::DA_obj *__this){
					HX_STACK_PUSH("*::closure","de/polygonal/ds/DA.hx",577);
					{
						HX_STACK_LINE(577)
						Dynamic a = __this->_a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(577)
						a->__FieldRef(HX_CSTRING("length")) = __this->_size;
						HX_STACK_LINE(577)
						return a;
					}
					return null();
				}
			};
			HX_STACK_LINE(577)
			this->_a = _Function_2_1::Block(this);
		}
		HX_STACK_LINE(578)
		this->_a->__Field(HX_CSTRING("reverse"),true)();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DA_obj,reverse,(void))

int DA_obj::lastIndexOf( Dynamic x,hx::Null< int >  __o_from){
int from = __o_from.Default(-1);
	HX_STACK_PUSH("DA::lastIndexOf","de/polygonal/ds/DA.hx",543);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(from,"from");
{
		HX_STACK_LINE(543)
		if (((this->_size == (int)0))){
			HX_STACK_LINE(545)
			return (int)-1;
		}
		else{
			HX_STACK_LINE(548)
			if (((from < (int)0))){
				HX_STACK_LINE(548)
				from = (this->_size + from);
			}
			HX_STACK_LINE(554)
			int j = (int)-1;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(555)
			int i = from;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(557)
			do{
				HX_STACK_LINE(558)
				if (((this->_a->__GetItem(i) == x))){
					HX_STACK_LINE(561)
					j = i;
					HX_STACK_LINE(562)
					break;
				}
			}
while((((i)-- > (int)0)));
			HX_STACK_LINE(566)
			return j;
		}
		HX_STACK_LINE(543)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(DA_obj,lastIndexOf,return )

int DA_obj::indexOf( Dynamic x,hx::Null< int >  __o_from,hx::Null< bool >  __o_binarySearch,Dynamic comparator){
int from = __o_from.Default(0);
bool binarySearch = __o_binarySearch.Default(false);
	HX_STACK_PUSH("DA::indexOf","de/polygonal/ds/DA.hx",475);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(from,"from");
	HX_STACK_ARG(binarySearch,"binarySearch");
	HX_STACK_ARG(comparator,"comparator");
{
		HX_STACK_LINE(475)
		if (((this->_size == (int)0))){
			HX_STACK_LINE(477)
			return (int)-1;
		}
		else{
			HX_STACK_LINE(479)
			if ((binarySearch)){
				HX_STACK_LINE(485)
				if (((comparator != null()))){
					HX_STACK_LINE(487)
					return ::de::polygonal::ds::ArrayUtil_obj::bsearchComparator(this->_a,x,from,(this->_size - (int)1),comparator);
				}
				else{
					HX_STACK_LINE(494)
					int k = this->_size;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(495)
					int l = from;		HX_STACK_VAR(l,"l");
					int m;		HX_STACK_VAR(m,"m");
					int h = k;		HX_STACK_VAR(h,"h");
					HX_STACK_LINE(496)
					while(((l < h))){
						HX_STACK_LINE(498)
						m = (l + ((int((h - l)) >> int((int)1))));
						HX_STACK_LINE(504)
						if ((((hx::TCast< de::polygonal::ds::Comparable >::cast(this->_a->__GetItem(m)))->compare(x) < (int)0))){
							HX_STACK_LINE(505)
							l = (m + (int)1);
						}
						else{
							HX_STACK_LINE(507)
							h = m;
						}
					}
					HX_STACK_LINE(514)
					return (  (((bool((l <= k)) && bool(((hx::TCast< de::polygonal::ds::Comparable >::cast(this->_a->__GetItem(l)))->compare(x) == (int)0))))) ? int(l) : int(-(l)) );
				}
			}
			else{
				HX_STACK_LINE(519)
				int i = from;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(520)
				int j = (int)-1;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(521)
				int k = (this->_size - (int)1);		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(522)
				do{
					HX_STACK_LINE(523)
					if (((this->_a->__GetItem(i) == x))){
						HX_STACK_LINE(526)
						j = i;
						HX_STACK_LINE(527)
						break;
					}
				}
while((((i)++ < k)));
				HX_STACK_LINE(531)
				return j;
			}
		}
		HX_STACK_LINE(475)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(DA_obj,indexOf,return )

::de::polygonal::ds::DA DA_obj::concat( ::de::polygonal::ds::DA x,hx::Null< bool >  __o_copy){
bool copy = __o_copy.Default(false);
	HX_STACK_PUSH("DA::concat","de/polygonal/ds/DA.hx",437);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(copy,"copy");
{
		HX_STACK_LINE(437)
		if ((copy)){
			HX_STACK_LINE(444)
			::de::polygonal::ds::DA copy1 = ::de::polygonal::ds::DA_obj::__new(null(),null());		HX_STACK_VAR(copy1,"copy1");
			HX_STACK_LINE(445)
			copy1->_size = (this->_size + x->_size);
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(446)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_size;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(446)
				while(((_g1 < _g))){
					HX_STACK_LINE(446)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(446)
					hx::IndexRef((copy1->_a).mPtr,i) = this->_a->__GetItem(i);
					HX_STACK_LINE(446)
					if (((i >= copy1->_size))){
						HX_STACK_LINE(446)
						(copy1->_size)++;
					}
				}
			}
			HX_STACK_LINE(447)
			{
				HX_STACK_LINE(447)
				int _g1 = this->_size;		HX_STACK_VAR(_g1,"_g1");
				int _g = (this->_size + x->_size);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(447)
				while(((_g1 < _g))){
					HX_STACK_LINE(447)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(447)
					hx::IndexRef((copy1->_a).mPtr,i) = x->_a->__GetItem((i - this->_size));
					HX_STACK_LINE(447)
					if (((i >= copy1->_size))){
						HX_STACK_LINE(447)
						(copy1->_size)++;
					}
				}
			}
			HX_STACK_LINE(448)
			return copy1;
		}
		else{
			HX_STACK_LINE(456)
			int j = this->_size;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(457)
			hx::AddEq(this->_size,x->_size);
			HX_STACK_LINE(458)
			{
				HX_STACK_LINE(458)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = x->_size;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(458)
				while(((_g1 < _g))){
					HX_STACK_LINE(458)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(458)
					hx::IndexRef((this->_a).mPtr,(j)++) = x->_a->__GetItem(i);
				}
			}
			HX_STACK_LINE(459)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(437)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(DA_obj,concat,return )

::de::polygonal::ds::DA DA_obj::removeRange( int i,int n,::de::polygonal::ds::DA output){
	HX_STACK_PUSH("DA::removeRange","de/polygonal/ds/DA.hx",394);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_ARG(n,"n");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(400)
	if (((output == null()))){
		HX_STACK_LINE(402)
		int s = this->_size;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(403)
		int p = (i + n);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(404)
		while(((p < s))){
			HX_STACK_LINE(406)
			hx::IndexRef((this->_a).mPtr,(p - n)) = this->_a->__GetItem(p);
			HX_STACK_LINE(407)
			(p)++;
		}
	}
	else{
		HX_STACK_LINE(412)
		int s = this->_size;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(413)
		int p = (i + n);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(414)
		Dynamic e;		HX_STACK_VAR(e,"e");
		int j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(415)
		while(((p < s))){
			HX_STACK_LINE(417)
			j = (p - n);
			HX_STACK_LINE(418)
			e = this->_a->__GetItem(j);
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				int i1 = output->_size;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(419)
				hx::IndexRef((output->_a).mPtr,i1) = e;
				HX_STACK_LINE(419)
				if (((i1 >= output->_size))){
					HX_STACK_LINE(419)
					(output->_size)++;
				}
			}
			HX_STACK_LINE(420)
			hx::IndexRef((this->_a).mPtr,j) = this->_a->__GetItem((p)++);
		}
	}
	HX_STACK_LINE(424)
	hx::SubEq(this->_size,n);
	HX_STACK_LINE(426)
	return output;
}


HX_DEFINE_DYNAMIC_FUNC3(DA_obj,removeRange,return )

Void DA_obj::swapPop( int i){
{
		HX_STACK_PUSH("DA::swapPop","de/polygonal/ds/DA.hx",378);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(378)
		hx::IndexRef((this->_a).mPtr,i) = this->_a->__GetItem(--(this->_size));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DA_obj,swapPop,(void))

Dynamic DA_obj::removeAt( int i){
	HX_STACK_PUSH("DA::removeAt","de/polygonal/ds/DA.hx",352);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(357)
	Dynamic x = this->_a->__GetItem(i);		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(358)
	int k = (this->_size - (int)1);		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(359)
	int p = i;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(360)
	while(((p < k))){
		HX_STACK_LINE(363)
		hx::IndexRef((this->_a).mPtr,p) = this->_a->__GetItem((p + (int)1));
		HX_STACK_LINE(363)
		(p)++;
	}
	HX_STACK_LINE(368)
	(this->_size)--;
	HX_STACK_LINE(369)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(DA_obj,removeAt,return )

Void DA_obj::insertAt( int i,Dynamic x){
{
		HX_STACK_PUSH("DA::insertAt","de/polygonal/ds/DA.hx",325);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(331)
		int p = this->_size;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(332)
		while(((p > i))){
			HX_STACK_LINE(335)
			hx::IndexRef((this->_a).mPtr,p) = this->_a->__GetItem((p - (int)1));
			HX_STACK_LINE(335)
			(p)--;
		}
		HX_STACK_LINE(341)
		hx::IndexRef((this->_a).mPtr,i) = x;
		HX_STACK_LINE(342)
		(this->_size)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DA_obj,insertAt,(void))

Void DA_obj::pushFront( Dynamic x){
{
		HX_STACK_PUSH("DA::pushFront","de/polygonal/ds/DA.hx",308);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(314)
		int p = this->_size;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(314)
		while(((p > (int)0))){
			HX_STACK_LINE(314)
			hx::IndexRef((this->_a).mPtr,p) = this->_a->__GetItem((p - (int)1));
			HX_STACK_LINE(314)
			(p)--;
		}
		HX_STACK_LINE(314)
		hx::IndexRef((this->_a).mPtr,(int)0) = x;
		HX_STACK_LINE(314)
		(this->_size)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DA_obj,pushFront,(void))

Dynamic DA_obj::popFront( ){
	HX_STACK_PUSH("DA::popFront","de/polygonal/ds/DA.hx",297);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Dynamic Block( ::de::polygonal::ds::DA_obj *__this){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/DA.hx",298);
			{
				HX_STACK_LINE(298)
				Dynamic x = __this->_a->__GetItem((int)0);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(298)
				int k = (__this->_size - (int)1);		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(298)
				int p = (int)0;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(298)
				while(((p < k))){
					HX_STACK_LINE(298)
					hx::IndexRef((__this->_a).mPtr,p) = __this->_a->__GetItem((p + (int)1));
					HX_STACK_LINE(298)
					(p)++;
				}
				HX_STACK_LINE(298)
				(__this->_size)--;
				HX_STACK_LINE(298)
				return x;
			}
			return null();
		}
	};
	HX_STACK_LINE(297)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DA_obj,popFront,return )

Void DA_obj::pushBack( Dynamic x){
{
		HX_STACK_PUSH("DA::pushBack","de/polygonal/ds/DA.hx",286);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(287)
		int i = this->_size;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(287)
		hx::IndexRef((this->_a).mPtr,i) = x;
		HX_STACK_LINE(287)
		if (((i >= this->_size))){
			HX_STACK_LINE(287)
			(this->_size)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DA_obj,pushBack,(void))

Dynamic DA_obj::popBack( ){
	HX_STACK_PUSH("DA::popBack","de/polygonal/ds/DA.hx",274);
	HX_STACK_THIS(this);
	HX_STACK_LINE(275)
	Dynamic x = this->_a->__GetItem((this->_size - (int)1));		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(276)
	(this->_size)--;
	HX_STACK_LINE(277)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC0(DA_obj,popBack,return )

Dynamic DA_obj::back( ){
	HX_STACK_PUSH("DA::back","de/polygonal/ds/DA.hx",264);
	HX_STACK_THIS(this);
	HX_STACK_LINE(264)
	return this->_a->__GetItem((this->_size - (int)1));
}


HX_DEFINE_DYNAMIC_FUNC0(DA_obj,back,return )

Dynamic DA_obj::front( ){
	HX_STACK_PUSH("DA::front","de/polygonal/ds/DA.hx",253);
	HX_STACK_THIS(this);
	HX_STACK_LINE(253)
	return this->_a->__GetItem((int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(DA_obj,front,return )

Void DA_obj::cpy( int i,int j){
{
		HX_STACK_PUSH("DA::cpy","de/polygonal/ds/DA.hx",238);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_ARG(j,"j");
		HX_STACK_LINE(243)
		hx::IndexRef((this->_a).mPtr,i) = this->_a->__GetItem(j);
		HX_STACK_LINE(243)
		if (((i >= this->_size))){
			HX_STACK_LINE(243)
			(this->_size)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DA_obj,cpy,(void))

Void DA_obj::swp( int i,int j){
{
		HX_STACK_PUSH("DA::swp","de/polygonal/ds/DA.hx",222);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_ARG(j,"j");
		HX_STACK_LINE(227)
		Dynamic tmp = this->_a->__GetItem(i);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			hx::IndexRef((this->_a).mPtr,i) = this->_a->__GetItem(j);
			HX_STACK_LINE(228)
			if (((i >= this->_size))){
				HX_STACK_LINE(228)
				(this->_size)++;
			}
		}
		HX_STACK_LINE(229)
		{
			HX_STACK_LINE(229)
			hx::IndexRef((this->_a).mPtr,j) = tmp;
			HX_STACK_LINE(229)
			if (((j >= this->_size))){
				HX_STACK_LINE(229)
				(this->_size)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DA_obj,swp,(void))

Void DA_obj::set( int i,Dynamic x){
{
		HX_STACK_PUSH("DA::set","de/polygonal/ds/DA.hx",206);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(212)
		hx::IndexRef((this->_a).mPtr,i) = x;
		HX_STACK_LINE(213)
		if (((i >= this->_size))){
			HX_STACK_LINE(213)
			(this->_size)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DA_obj,set,(void))

Dynamic DA_obj::getPrev( int i){
	HX_STACK_PUSH("DA::getPrev","de/polygonal/ds/DA.hx",192);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(192)
	return this->_a->__GetItem((  ((((i - (int)1) == (int)-1))) ? int((this->_size - (int)1)) : int((i - (int)1)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(DA_obj,getPrev,return )

Dynamic DA_obj::getNext( int i){
	HX_STACK_PUSH("DA::getNext","de/polygonal/ds/DA.hx",177);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(177)
	return this->_a->__GetItem((  ((((i + (int)1) == this->_size))) ? int((int)0) : int((i + (int)1)) ));
}


HX_DEFINE_DYNAMIC_FUNC1(DA_obj,getNext,return )

Dynamic DA_obj::get( int i){
	HX_STACK_PUSH("DA::get","de/polygonal/ds/DA.hx",162);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(162)
	return this->_a->__GetItem(i);
}


HX_DEFINE_DYNAMIC_FUNC1(DA_obj,get,return )

Void DA_obj::trim( int x){
{
		HX_STACK_PUSH("DA::trim","de/polygonal/ds/DA.hx",148);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(148)
		this->_size = x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DA_obj,trim,(void))

Void DA_obj::reserve( int x){
{
		HX_STACK_PUSH("DA::reserve","de/polygonal/ds/DA.hx",127);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(128)
		if (((this->_size == x))){
			HX_STACK_LINE(128)
			return null();
		}
		HX_STACK_LINE(130)
		Dynamic tmp = this->_a;		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_1{
			inline static Dynamic Block( int &x){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/DA.hx",131);
				{
					HX_STACK_LINE(131)
					Dynamic a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(131)
					a = Dynamic( Array_obj<Dynamic>::__new() );
					HX_STACK_LINE(131)
					hx::IndexRef((a).mPtr,(x - (int)1)) = null();
					HX_STACK_LINE(131)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(131)
		this->_a = _Function_1_1::Block(x);
		HX_STACK_LINE(132)
		if (((this->_size < x))){
			HX_STACK_LINE(134)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_size;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(134)
			while(((_g1 < _g))){
				HX_STACK_LINE(134)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(135)
				hx::IndexRef((this->_a).mPtr,i) = tmp->__GetItem(i);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DA_obj,reserve,(void))

Void DA_obj::pack( ){
{
		HX_STACK_PUSH("DA::pack","de/polygonal/ds/DA.hx",112);
		HX_STACK_THIS(this);
		HX_STACK_LINE(113)
		int s = this->_a->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(114)
		if (((s == this->_size))){
			HX_STACK_LINE(114)
			return null();
		}
		HX_STACK_LINE(115)
		Dynamic tmp = this->_a;		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_1{
			inline static Dynamic Block( ::de::polygonal::ds::DA_obj *__this){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/DA.hx",116);
				{
					HX_STACK_LINE(116)
					Dynamic a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(116)
					a = Dynamic( Array_obj<Dynamic>::__new() );
					HX_STACK_LINE(116)
					hx::IndexRef((a).mPtr,(__this->_size - (int)1)) = null();
					HX_STACK_LINE(116)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(116)
		this->_a = _Function_1_1::Block(this);
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_size;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(117)
			while(((_g1 < _g))){
				HX_STACK_LINE(117)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(117)
				hx::IndexRef((this->_a).mPtr,i) = tmp->__GetItem(i);
			}
		}
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			int _g1 = this->_size;		HX_STACK_VAR(_g1,"_g1");
			int _g = tmp->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(118)
			while(((_g1 < _g))){
				HX_STACK_LINE(118)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(118)
				hx::IndexRef((tmp).mPtr,i) = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DA_obj,pack,(void))


DA_obj::DA_obj()
{
}

void DA_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DA);
	HX_MARK_MEMBER_NAME(reuseIterator,"reuseIterator");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(_iterator,"_iterator");
	HX_MARK_MEMBER_NAME(_size,"_size");
	HX_MARK_MEMBER_NAME(_a,"_a");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_END_CLASS();
}

void DA_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(reuseIterator,"reuseIterator");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(_iterator,"_iterator");
	HX_VISIT_MEMBER_NAME(_size,"_size");
	HX_VISIT_MEMBER_NAME(_a,"_a");
	HX_VISIT_MEMBER_NAME(key,"key");
}

Dynamic DA_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_a") ) { return _a; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cpy") ) { return cpy_dyn(); }
		if (HX_FIELD_EQ(inName,"swp") ) { return swp_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"join") ) { return join_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"trim") ) { return trim_dyn(); }
		if (HX_FIELD_EQ(inName,"pack") ) { return pack_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__cpy") ) { return __cpy_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		if (HX_FIELD_EQ(inName,"_size") ) { return _size; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"assign") ) { return assign_dyn(); }
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shuffle") ) { return shuffle_dyn(); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"inRange") ) { return inRange_dyn(); }
		if (HX_FIELD_EQ(inName,"memmove") ) { return memmove_dyn(); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"swapPop") ) { return swapPop_dyn(); }
		if (HX_FIELD_EQ(inName,"popBack") ) { return popBack_dyn(); }
		if (HX_FIELD_EQ(inName,"getPrev") ) { return getPrev_dyn(); }
		if (HX_FIELD_EQ(inName,"getNext") ) { return getNext_dyn(); }
		if (HX_FIELD_EQ(inName,"reserve") ) { return reserve_dyn(); }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"getArray") ) { return getArray_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		if (HX_FIELD_EQ(inName,"insertAt") ) { return insertAt_dyn(); }
		if (HX_FIELD_EQ(inName,"popFront") ) { return popFront_dyn(); }
		if (HX_FIELD_EQ(inName,"pushBack") ) { return pushBack_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pushFront") ) { return pushFront_dyn(); }
		if (HX_FIELD_EQ(inName,"_iterator") ) { return _iterator; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_quickSort") ) { return _quickSort_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastIndexOf") ) { return lastIndexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRange") ) { return removeRange_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"reuseIterator") ) { return reuseIterator; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_insertionSort") ) { return _insertionSort_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_quickSortComparable") ) { return _quickSortComparable_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_insertionSortComparable") ) { return _insertionSortComparable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DA_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_a") ) { _a=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_size") ) { _size=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"maxSize") ) { maxSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_iterator") ) { _iterator=inValue.Cast< ::de::polygonal::ds::DAIterator >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"reuseIterator") ) { reuseIterator=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DA_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("reuseIterator"));
	outFields->push(HX_CSTRING("maxSize"));
	outFields->push(HX_CSTRING("_iterator"));
	outFields->push(HX_CSTRING("_size"));
	outFields->push(HX_CSTRING("_a"));
	outFields->push(HX_CSTRING("key"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__cpy"),
	HX_CSTRING("__set"),
	HX_CSTRING("__get"),
	HX_CSTRING("_insertionSortComparable"),
	HX_CSTRING("_insertionSort"),
	HX_CSTRING("_quickSortComparable"),
	HX_CSTRING("_quickSort"),
	HX_CSTRING("toString"),
	HX_CSTRING("shuffle"),
	HX_CSTRING("clone"),
	HX_CSTRING("toArray"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("size"),
	HX_CSTRING("iterator"),
	HX_CSTRING("clear"),
	HX_CSTRING("remove"),
	HX_CSTRING("contains"),
	HX_CSTRING("free"),
	HX_CSTRING("getArray"),
	HX_CSTRING("inRange"),
	HX_CSTRING("sort"),
	HX_CSTRING("join"),
	HX_CSTRING("memmove"),
	HX_CSTRING("fill"),
	HX_CSTRING("assign"),
	HX_CSTRING("reverse"),
	HX_CSTRING("lastIndexOf"),
	HX_CSTRING("indexOf"),
	HX_CSTRING("concat"),
	HX_CSTRING("removeRange"),
	HX_CSTRING("swapPop"),
	HX_CSTRING("removeAt"),
	HX_CSTRING("insertAt"),
	HX_CSTRING("pushFront"),
	HX_CSTRING("popFront"),
	HX_CSTRING("pushBack"),
	HX_CSTRING("popBack"),
	HX_CSTRING("back"),
	HX_CSTRING("front"),
	HX_CSTRING("cpy"),
	HX_CSTRING("swp"),
	HX_CSTRING("set"),
	HX_CSTRING("getPrev"),
	HX_CSTRING("getNext"),
	HX_CSTRING("get"),
	HX_CSTRING("trim"),
	HX_CSTRING("reserve"),
	HX_CSTRING("pack"),
	HX_CSTRING("reuseIterator"),
	HX_CSTRING("maxSize"),
	HX_CSTRING("_iterator"),
	HX_CSTRING("_size"),
	HX_CSTRING("_a"),
	HX_CSTRING("key"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DA_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DA_obj::__mClass,"__mClass");
};

Class DA_obj::__mClass;

void DA_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.DA"), hx::TCanCast< DA_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DA_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
