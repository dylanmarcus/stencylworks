#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_de_polygonal_Printf
#include <de/polygonal/Printf.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Collection
#include <de/polygonal/ds/Collection.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_HashKey
#include <de/polygonal/ds/HashKey.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Hashable
#include <de/polygonal/ds/Hashable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntHashSet
#include <de/polygonal/ds/IntHashSet.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntHashSetIterator
#include <de/polygonal/ds/IntHashSetIterator.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Set
#include <de/polygonal/ds/Set.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

Void IntHashSet_obj::__construct(int slotCount,hx::Null< int >  __o_capacity,hx::Null< bool >  __o_isResizable,hx::Null< int >  __o_maxSize)
{
HX_STACK_PUSH("IntHashSet::new","de/polygonal/ds/IntHashSet.hx",153);
int capacity = __o_capacity.Default(-1);
bool isResizable = __o_isResizable.Default(true);
int maxSize = __o_maxSize.Default(-1);
{
	HX_STACK_LINE(158)
	this->_isResizable = isResizable;
	HX_STACK_LINE(160)
	if (((capacity == (int)-1))){
		HX_STACK_LINE(161)
		capacity = slotCount;
	}
	else{
	}
	HX_STACK_LINE(170)
	this->_free = (int)0;
	HX_STACK_LINE(171)
	this->_capacity = capacity;
	HX_STACK_LINE(172)
	this->_size = (int)0;
	HX_STACK_LINE(173)
	this->_mask = (slotCount - (int)1);
	HX_STACK_LINE(174)
	this->_sizeLevel = (int)0;
	HX_STACK_LINE(175)
	this->_iterator = null();
	HX_STACK_LINE(180)
	this->maxSize = (int)-1;
	struct _Function_1_1{
		inline static Array< int > Block( int &slotCount){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashSet.hx",196);
			{
				HX_STACK_LINE(196)
				Array< int > a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(196)
				a = Array_obj< int >::__new();
				HX_STACK_LINE(196)
				a[(slotCount - (int)1)] = null();
				HX_STACK_LINE(196)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(196)
	this->_hash = _Function_1_1::Block(slotCount);
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(197)
		Array< int > dst = this->_hash;		HX_STACK_VAR(dst,"dst");
		int k = slotCount;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(197)
		if (((k == (int)-1))){
			HX_STACK_LINE(197)
			k = dst->length;
		}
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(197)
			while(((_g < k))){
				HX_STACK_LINE(197)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(197)
				dst[i] = (int)-1;
			}
		}
	}
	struct _Function_1_2{
		inline static Array< int > Block( ::de::polygonal::ds::IntHashSet_obj *__this){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashSet.hx",198);
			{
				HX_STACK_LINE(198)
				Array< int > a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(198)
				a = Array_obj< int >::__new();
				HX_STACK_LINE(198)
				a[(((int(__this->_capacity) << int((int)1))) - (int)1)] = null();
				HX_STACK_LINE(198)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(198)
	this->_data = _Function_1_2::Block(this);
	struct _Function_1_3{
		inline static Array< int > Block( ::de::polygonal::ds::IntHashSet_obj *__this){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashSet.hx",199);
			{
				HX_STACK_LINE(199)
				Array< int > a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(199)
				a = Array_obj< int >::__new();
				HX_STACK_LINE(199)
				a[(__this->_capacity - (int)1)] = null();
				HX_STACK_LINE(199)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(199)
	this->_next = _Function_1_3::Block(this);
	HX_STACK_LINE(202)
	int j = (int)1;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(203)
	{
		HX_STACK_LINE(203)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(203)
		while(((_g < capacity))){
			HX_STACK_LINE(203)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(205)
			this->_data[(j - (int)1)] = (int)-2147483647;
			HX_STACK_LINE(206)
			this->_data[j] = (int)-1;
			HX_STACK_LINE(207)
			hx::AddEq(j,(int)2);
		}
	}
	HX_STACK_LINE(210)
	{
		HX_STACK_LINE(210)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = (this->_capacity - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(210)
		while(((_g1 < _g))){
			HX_STACK_LINE(210)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(210)
			this->_next[i] = (i + (int)1);
		}
	}
	HX_STACK_LINE(211)
	this->_next[(this->_capacity - (int)1)] = (int)-1;
	HX_STACK_LINE(213)
	this->key = (::de::polygonal::ds::HashKey_obj::_counter)++;
	HX_STACK_LINE(214)
	this->reuseIterator = false;
}
;
	return null();
}

IntHashSet_obj::~IntHashSet_obj() { }

Dynamic IntHashSet_obj::__CreateEmpty() { return  new IntHashSet_obj; }
hx::ObjectPtr< IntHashSet_obj > IntHashSet_obj::__new(int slotCount,hx::Null< int >  __o_capacity,hx::Null< bool >  __o_isResizable,hx::Null< int >  __o_maxSize)
{  hx::ObjectPtr< IntHashSet_obj > result = new IntHashSet_obj();
	result->__construct(slotCount,__o_capacity,__o_isResizable,__o_maxSize);
	return result;}

Dynamic IntHashSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntHashSet_obj > result = new IntHashSet_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *IntHashSet_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::de::polygonal::ds::Set_obj)) return operator ::de::polygonal::ds::Set_obj *();
	if (inType==typeid( ::de::polygonal::ds::Collection_obj)) return operator ::de::polygonal::ds::Collection_obj *();
	if (inType==typeid( ::de::polygonal::ds::Hashable_obj)) return operator ::de::polygonal::ds::Hashable_obj *();
	return super::__ToInterface(inType);
}

Void IntHashSet_obj::__setData( int i,int x){
{
		HX_STACK_PUSH("IntHashSet::__setData","de/polygonal/ds/IntHashSet.hx",1097);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1097)
		this->_data[i] = x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(IntHashSet_obj,__setData,(void))

int IntHashSet_obj::__getData( int i){
	HX_STACK_PUSH("IntHashSet::__getData","de/polygonal/ds/IntHashSet.hx",1089);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(1089)
	return this->_data->__get(i);
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashSet_obj,__getData,return )

Void IntHashSet_obj::__setNext( int i,int x){
{
		HX_STACK_PUSH("IntHashSet::__setNext","de/polygonal/ds/IntHashSet.hx",1080);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1080)
		this->_next[i] = x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(IntHashSet_obj,__setNext,(void))

int IntHashSet_obj::__getNext( int i){
	HX_STACK_PUSH("IntHashSet::__getNext","de/polygonal/ds/IntHashSet.hx",1072);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(1072)
	return this->_next->__get(i);
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashSet_obj,__getNext,return )

Void IntHashSet_obj::__setHash( int i,int x){
{
		HX_STACK_PUSH("IntHashSet::__setHash","de/polygonal/ds/IntHashSet.hx",1063);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1063)
		this->_hash[i] = x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(IntHashSet_obj,__setHash,(void))

int IntHashSet_obj::__getHash( int i){
	HX_STACK_PUSH("IntHashSet::__getHash","de/polygonal/ds/IntHashSet.hx",1055);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(1055)
	return this->_hash->__get(i);
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashSet_obj,__getHash,return )

Void IntHashSet_obj::_shrink( ){
{
		HX_STACK_PUSH("IntHashSet::_shrink","de/polygonal/ds/IntHashSet.hx",946);
		HX_STACK_THIS(this);
		HX_STACK_LINE(947)
		(this->_sizeLevel)--;
		HX_STACK_LINE(949)
		int oldSize = this->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
		HX_STACK_LINE(950)
		int newSize = (int(oldSize) >> int((int)1));		HX_STACK_VAR(newSize,"newSize");
		HX_STACK_LINE(951)
		this->_capacity = newSize;
		HX_STACK_LINE(1011)
		int k = (int(newSize) << int((int)1));		HX_STACK_VAR(k,"k");
		struct _Function_1_1{
			inline static Array< int > Block( int &k){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashSet.hx",1016);
				{
					HX_STACK_LINE(1016)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1016)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(1016)
					a[(k - (int)1)] = null();
					HX_STACK_LINE(1016)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(1016)
		Array< int > tmp = _Function_1_1::Block(k);		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Array< int > Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashSet.hx",1017);
				{
					HX_STACK_LINE(1017)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1017)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(1017)
					a[(newSize - (int)1)] = null();
					HX_STACK_LINE(1017)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(1017)
		this->_next = _Function_1_2::Block(newSize);
		HX_STACK_LINE(1020)
		int e = (int)0;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(1021)
		{
			HX_STACK_LINE(1021)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (this->_mask + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1021)
			while(((_g1 < _g))){
				HX_STACK_LINE(1021)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1023)
				int j = this->_hash->__get(i);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(1024)
				if (((j == (int)-1))){
					HX_STACK_LINE(1024)
					continue;
				}
				HX_STACK_LINE(1026)
				this->_hash[i] = e;
				HX_STACK_LINE(1028)
				tmp[(e)++] = this->_data->__get(j);
				HX_STACK_LINE(1029)
				tmp[(e)++] = (int)-1;
				HX_STACK_LINE(1031)
				j = this->_data->__get((j + (int)1));
				HX_STACK_LINE(1032)
				while(((j != (int)-1))){
					HX_STACK_LINE(1034)
					tmp[(e - (int)1)] = e;
					HX_STACK_LINE(1035)
					tmp[(e)++] = this->_data->__get(j);
					HX_STACK_LINE(1036)
					tmp[(e)++] = (int)-1;
					HX_STACK_LINE(1037)
					j = this->_data->__get((j + (int)1));
				}
			}
		}
		HX_STACK_LINE(1040)
		int i = (int(k) >> int((int)1));		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1041)
		while(((i < k))){
			HX_STACK_LINE(1043)
			tmp[(i)++] = (int)-2147483647;
			HX_STACK_LINE(1044)
			tmp[(i)++] = (int)-1;
		}
		HX_STACK_LINE(1046)
		this->_data = tmp;
		HX_STACK_LINE(1049)
		{
			HX_STACK_LINE(1049)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1049)
			while(((_g1 < _g))){
				HX_STACK_LINE(1049)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(1049)
				this->_next[i1] = (i1 + (int)1);
			}
		}
		HX_STACK_LINE(1050)
		this->_next[(newSize - (int)1)] = (int)-1;
		HX_STACK_LINE(1051)
		this->_free = (int(newSize) >> int((int)1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSet_obj,_shrink,(void))

Void IntHashSet_obj::_expand( ){
{
		HX_STACK_PUSH("IntHashSet::_expand","de/polygonal/ds/IntHashSet.hx",897);
		HX_STACK_THIS(this);
		HX_STACK_LINE(898)
		(this->_sizeLevel)++;
		HX_STACK_LINE(900)
		int oldSize = this->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
		HX_STACK_LINE(901)
		int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
		HX_STACK_LINE(902)
		this->_capacity = newSize;
		struct _Function_1_1{
			inline static Array< int > Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashSet.hx",917);
				{
					HX_STACK_LINE(917)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(917)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(917)
					a[(newSize - (int)1)] = null();
					HX_STACK_LINE(917)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(917)
		Array< int > copy = _Function_1_1::Block(newSize);		HX_STACK_VAR(copy,"copy");
		HX_STACK_LINE(918)
		{
			HX_STACK_LINE(918)
			Array< int > src = this->_next;		HX_STACK_VAR(src,"src");
			int max = oldSize;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(918)
			if (((max == (int)-1))){
				HX_STACK_LINE(918)
				max = src->length;
			}
			HX_STACK_LINE(918)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(918)
			{
				HX_STACK_LINE(918)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(918)
				while(((_g < max))){
					HX_STACK_LINE(918)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(918)
					copy[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(918)
			copy;
		}
		HX_STACK_LINE(919)
		this->_next = copy;
		struct _Function_1_2{
			inline static Array< int > Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashSet.hx",920);
				{
					HX_STACK_LINE(920)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(920)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(920)
					a[(((int(newSize) << int((int)1))) - (int)1)] = null();
					HX_STACK_LINE(920)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(920)
		Array< int > copy1 = _Function_1_2::Block(newSize);		HX_STACK_VAR(copy1,"copy1");
		HX_STACK_LINE(921)
		{
			HX_STACK_LINE(921)
			Array< int > src = this->_data;		HX_STACK_VAR(src,"src");
			int max = (int(oldSize) << int((int)1));		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(921)
			if (((max == (int)-1))){
				HX_STACK_LINE(921)
				max = src->length;
			}
			HX_STACK_LINE(921)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(921)
			{
				HX_STACK_LINE(921)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(921)
				while(((_g < max))){
					HX_STACK_LINE(921)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(921)
					copy1[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(921)
			copy1;
		}
		HX_STACK_LINE(922)
		this->_data = copy1;
		HX_STACK_LINE(925)
		{
			HX_STACK_LINE(925)
			int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
			int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(925)
			while(((_g1 < _g))){
				HX_STACK_LINE(925)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(925)
				this->_next[i] = (i + (int)1);
			}
		}
		HX_STACK_LINE(926)
		this->_next[(newSize - (int)1)] = (int)-1;
		HX_STACK_LINE(927)
		this->_free = oldSize;
		HX_STACK_LINE(929)
		int j = (((int(oldSize) << int((int)1))) + (int)1);		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(930)
		{
			HX_STACK_LINE(930)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(930)
			while(((_g < oldSize))){
				HX_STACK_LINE(930)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(937)
				this->_data[(j - (int)1)] = (int)-2147483647;
				HX_STACK_LINE(938)
				this->_data[j] = (int)-1;
				HX_STACK_LINE(941)
				hx::AddEq(j,(int)2);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSet_obj,_expand,(void))

int IntHashSet_obj::_hashCode( int x){
	HX_STACK_PUSH("IntHashSet::_hashCode","de/polygonal/ds/IntHashSet.hx",892);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(892)
	return (int((x * (int)73856093)) & int(this->_mask));
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashSet_obj,_hashCode,return )

::de::polygonal::ds::Collection IntHashSet_obj::clone( hx::Null< bool >  __o_assign,Dynamic _tmp_copier){
bool assign = __o_assign.Default(true);
	HX_STACK_PUSH("IntHashSet::clone","de/polygonal/ds/IntHashSet.hx",855);
	HX_STACK_THIS(this);
	HX_STACK_ARG(assign,"assign");
	HX_STACK_ARG(_tmp_copier,"_tmp_copier");
{
		HX_STACK_LINE(856)
		Dynamic copier = _tmp_copier;		HX_STACK_VAR(copier,"copier");
		HX_STACK_LINE(856)
		::de::polygonal::ds::IntHashSet c = ::Type_obj::createEmptyInstance(hx::ClassOf< ::de::polygonal::ds::IntHashSet >());		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(857)
		c->key = (::de::polygonal::ds::HashKey_obj::_counter)++;
		HX_STACK_LINE(858)
		c->maxSize = this->maxSize;
		HX_STACK_LINE(874)
		c->_hash = Array_obj< int >::__new();
		HX_STACK_LINE(875)
		{
			HX_STACK_LINE(875)
			Array< int > src = this->_hash;		HX_STACK_VAR(src,"src");
			Array< int > dst = c->_hash;		HX_STACK_VAR(dst,"dst");
			int min = (int)0;		HX_STACK_VAR(min,"min");
			int max = (int)-1;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(875)
			if (((max == (int)-1))){
				HX_STACK_LINE(875)
				max = src->length;
			}
			HX_STACK_LINE(875)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(875)
			{
				HX_STACK_LINE(875)
				int _g = min;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(875)
				while(((_g < max))){
					HX_STACK_LINE(875)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(875)
					dst[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(875)
			dst;
		}
		HX_STACK_LINE(876)
		c->_data = Array_obj< int >::__new();
		HX_STACK_LINE(877)
		{
			HX_STACK_LINE(877)
			Array< int > src = this->_data;		HX_STACK_VAR(src,"src");
			Array< int > dst = c->_data;		HX_STACK_VAR(dst,"dst");
			int min = (int)0;		HX_STACK_VAR(min,"min");
			int max = (int)-1;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(877)
			if (((max == (int)-1))){
				HX_STACK_LINE(877)
				max = src->length;
			}
			HX_STACK_LINE(877)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(877)
			{
				HX_STACK_LINE(877)
				int _g = min;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(877)
				while(((_g < max))){
					HX_STACK_LINE(877)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(877)
					dst[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(877)
			dst;
		}
		HX_STACK_LINE(878)
		c->_next = Array_obj< int >::__new();
		HX_STACK_LINE(879)
		{
			HX_STACK_LINE(879)
			Array< int > src = this->_next;		HX_STACK_VAR(src,"src");
			Array< int > dst = c->_next;		HX_STACK_VAR(dst,"dst");
			int min = (int)0;		HX_STACK_VAR(min,"min");
			int max = (int)-1;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(879)
			if (((max == (int)-1))){
				HX_STACK_LINE(879)
				max = src->length;
			}
			HX_STACK_LINE(879)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(879)
			{
				HX_STACK_LINE(879)
				int _g = min;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(879)
				while(((_g < max))){
					HX_STACK_LINE(879)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(879)
					dst[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(879)
			dst;
		}
		HX_STACK_LINE(882)
		c->_mask = this->_mask;
		HX_STACK_LINE(883)
		c->_capacity = this->_capacity;
		HX_STACK_LINE(884)
		c->_free = this->_free;
		HX_STACK_LINE(885)
		c->_size = this->_size;
		HX_STACK_LINE(886)
		c->_sizeLevel = this->_sizeLevel;
		HX_STACK_LINE(888)
		return c;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IntHashSet_obj,clone,return )

Dynamic IntHashSet_obj::toArray( ){
	HX_STACK_PUSH("IntHashSet::toArray","de/polygonal/ds/IntHashSet.hx",822);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Array< int > Block( ::de::polygonal::ds::IntHashSet_obj *__this){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashSet.hx",823);
			{
				HX_STACK_LINE(823)
				Array< int > a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(823)
				a = Array_obj< int >::__new();
				HX_STACK_LINE(823)
				a[(__this->_size - (int)1)] = null();
				HX_STACK_LINE(823)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(823)
	Array< int > a = _Function_1_1::Block(this);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(824)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(825)
	{
		HX_STACK_LINE(825)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(825)
		while(((_g1 < _g))){
			HX_STACK_LINE(825)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(827)
			int v = this->_data->__get((int(i) << int((int)1)));		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(828)
			if (((v != (int)-2147483647))){
				HX_STACK_LINE(828)
				a[(j)++] = v;
			}
		}
	}
	HX_STACK_LINE(830)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSet_obj,toArray,return )

bool IntHashSet_obj::isEmpty( ){
	HX_STACK_PUSH("IntHashSet::isEmpty","de/polygonal/ds/IntHashSet.hx",814);
	HX_STACK_THIS(this);
	HX_STACK_LINE(814)
	return (this->_size == (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSet_obj,isEmpty,return )

::de::polygonal::ds::Itr IntHashSet_obj::iterator( ){
	HX_STACK_PUSH("IntHashSet::iterator","de/polygonal/ds/IntHashSet.hx",796);
	HX_STACK_THIS(this);
	HX_STACK_LINE(796)
	if ((this->reuseIterator)){
		HX_STACK_LINE(799)
		if (((this->_iterator == null()))){
			HX_STACK_LINE(800)
			this->_iterator = ::de::polygonal::ds::IntHashSetIterator_obj::__new(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(802)
			::de::polygonal::ds::IntHashSetIterator _this = this->_iterator;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(802)
			_this->_data = _this->_f->__Field(HX_CSTRING("_data"),true);
			HX_STACK_LINE(802)
			_this->_i = (int)0;
			HX_STACK_LINE(802)
			_this->_s = _this->_f->__Field(HX_CSTRING("_capacity"),true);
			HX_STACK_LINE(802)
			while(((bool((_this->_i < _this->_s)) && bool((_this->_data->__get((int(_this->_i) << int((int)1))) == (int)-2147483647))))){
				HX_STACK_LINE(802)
				(_this->_i)++;
			}
			HX_STACK_LINE(802)
			_this;
		}
		HX_STACK_LINE(803)
		return this->_iterator;
	}
	else{
		HX_STACK_LINE(806)
		return ::de::polygonal::ds::IntHashSetIterator_obj::__new(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(796)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSet_obj,iterator,return )

Void IntHashSet_obj::clear( hx::Null< bool >  __o_purge){
bool purge = __o_purge.Default(false);
	HX_STACK_PUSH("IntHashSet::clear","de/polygonal/ds/IntHashSet.hx",746);
	HX_STACK_THIS(this);
	HX_STACK_ARG(purge,"purge");
{
		HX_STACK_LINE(747)
		if (((bool(purge) && bool((this->_sizeLevel > (int)0))))){
			HX_STACK_LINE(749)
			hx::ShrEq(this->_capacity,this->_sizeLevel);
			HX_STACK_LINE(750)
			this->_sizeLevel = (int)0;
			struct _Function_2_1{
				inline static Array< int > Block( ::de::polygonal::ds::IntHashSet_obj *__this){
					HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashSet.hx",761);
					{
						HX_STACK_LINE(761)
						Array< int > a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(761)
						a = Array_obj< int >::__new();
						HX_STACK_LINE(761)
						a[(((int(__this->_capacity) << int((int)1))) - (int)1)] = null();
						HX_STACK_LINE(761)
						return a;
					}
					return null();
				}
			};
			HX_STACK_LINE(761)
			this->_data = _Function_2_1::Block(this);
			struct _Function_2_2{
				inline static Array< int > Block( ::de::polygonal::ds::IntHashSet_obj *__this){
					HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashSet.hx",762);
					{
						HX_STACK_LINE(762)
						Array< int > a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(762)
						a = Array_obj< int >::__new();
						HX_STACK_LINE(762)
						a[(__this->_capacity - (int)1)] = null();
						HX_STACK_LINE(762)
						return a;
					}
					return null();
				}
			};
			HX_STACK_LINE(762)
			this->_next = _Function_2_2::Block(this);
		}
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(773)
			Array< int > dst = this->_hash;		HX_STACK_VAR(dst,"dst");
			int k = (this->_mask + (int)1);		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(773)
			if (((k == (int)-1))){
				HX_STACK_LINE(773)
				k = dst->length;
			}
			HX_STACK_LINE(773)
			{
				HX_STACK_LINE(773)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(773)
				while(((_g < k))){
					HX_STACK_LINE(773)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(773)
					dst[i] = (int)-1;
				}
			}
		}
		HX_STACK_LINE(776)
		int j = (int)1;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(777)
		{
			HX_STACK_LINE(777)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_capacity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(777)
			while(((_g1 < _g))){
				HX_STACK_LINE(777)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(779)
				this->_data[(j - (int)1)] = (int)-2147483647;
				HX_STACK_LINE(780)
				this->_data[j] = (int)-1;
				HX_STACK_LINE(781)
				hx::AddEq(j,(int)2);
			}
		}
		HX_STACK_LINE(783)
		{
			HX_STACK_LINE(783)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (this->_capacity - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(783)
			while(((_g1 < _g))){
				HX_STACK_LINE(783)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(783)
				this->_next[i] = (i + (int)1);
			}
		}
		HX_STACK_LINE(784)
		this->_next[(this->_capacity - (int)1)] = (int)-1;
		HX_STACK_LINE(786)
		this->_free = (int)0;
		HX_STACK_LINE(787)
		this->_size = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashSet_obj,clear,(void))

int IntHashSet_obj::size( ){
	HX_STACK_PUSH("IntHashSet::size","de/polygonal/ds/IntHashSet.hx",736);
	HX_STACK_THIS(this);
	HX_STACK_LINE(736)
	return this->_size;
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSet_obj,size,return )

bool IntHashSet_obj::remove( Dynamic _tmp_x){
	HX_STACK_PUSH("IntHashSet::remove","de/polygonal/ds/IntHashSet.hx",623);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_x,"_tmp_x");
	HX_STACK_LINE(624)
	int x = _tmp_x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(624)
	int b = (int((x * (int)73856093)) & int(this->_mask));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(625)
	int i = this->_hash->__get(b);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(626)
	if (((i == (int)-1))){
		HX_STACK_LINE(627)
		return false;
	}
	else{
		HX_STACK_LINE(629)
		if (((x == this->_data->__get(i)))){
			HX_STACK_LINE(640)
			if (((this->_data->__get((i + (int)1)) == (int)-1))){
				HX_STACK_LINE(642)
				this->_hash[b] = (int)-1;
			}
			else{
				HX_STACK_LINE(644)
				this->_hash[b] = this->_data->__get((i + (int)1));
			}
			HX_STACK_LINE(646)
			int j = (int(i) >> int((int)1));		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(647)
			this->_next[j] = this->_free;
			HX_STACK_LINE(648)
			this->_free = j;
			HX_STACK_LINE(654)
			this->_data[i] = (int)-2147483647;
			HX_STACK_LINE(655)
			this->_data[(i + (int)1)] = (int)-1;
			HX_STACK_LINE(658)
			(this->_size)--;
			HX_STACK_LINE(660)
			if (((this->_sizeLevel > (int)0))){
				HX_STACK_LINE(661)
				if (((this->_size == (int(this->_capacity) >> int((int)2))))){
					HX_STACK_LINE(662)
					if ((this->_isResizable)){
						HX_STACK_LINE(663)
						this->_shrink();
					}
				}
			}
			HX_STACK_LINE(665)
			return true;
		}
		else{
			HX_STACK_LINE(669)
			bool exists = false;		HX_STACK_VAR(exists,"exists");
			HX_STACK_LINE(671)
			int i0 = i;		HX_STACK_VAR(i0,"i0");
			HX_STACK_LINE(675)
			i = this->_data->__get((i + (int)1));
			HX_STACK_LINE(678)
			while(((i != (int)-1))){
				HX_STACK_LINE(690)
				if (((this->_data->__get(i) == x))){
					HX_STACK_LINE(692)
					exists = true;
					HX_STACK_LINE(693)
					break;
				}
				HX_STACK_LINE(695)
				i = this->_data->__get(((i0 = i) + (int)1));
			}
			HX_STACK_LINE(699)
			if ((exists)){
				HX_STACK_LINE(701)
				this->_data[(i0 + (int)1)] = this->_data->__get((i + (int)1));
				HX_STACK_LINE(703)
				int j = (int(i) >> int((int)1));		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(704)
				this->_next[j] = this->_free;
				HX_STACK_LINE(705)
				this->_free = j;
				HX_STACK_LINE(712)
				this->_data[i] = (int)-2147483647;
				HX_STACK_LINE(713)
				this->_data[(i + (int)1)] = (int)-1;
				HX_STACK_LINE(716)
				--(this->_size);
				HX_STACK_LINE(718)
				if (((this->_sizeLevel > (int)0))){
					HX_STACK_LINE(719)
					if (((this->_size == (int(this->_capacity) >> int((int)2))))){
						HX_STACK_LINE(720)
						if ((this->_isResizable)){
							HX_STACK_LINE(721)
							this->_shrink();
						}
					}
				}
				HX_STACK_LINE(723)
				return true;
			}
			else{
				HX_STACK_LINE(726)
				return false;
			}
		}
	}
	HX_STACK_LINE(626)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashSet_obj,remove,return )

bool IntHashSet_obj::contains( Dynamic _tmp_x){
	HX_STACK_PUSH("IntHashSet::contains","de/polygonal/ds/IntHashSet.hx",613);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_x,"_tmp_x");
	HX_STACK_LINE(613)
	int x = _tmp_x;		HX_STACK_VAR(x,"x");
	struct _Function_1_1{
		inline static bool Block( ::de::polygonal::ds::IntHashSet_obj *__this,int &x){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashSet.hx",614);
			{
				HX_STACK_LINE(614)
				int i = __this->_hash->__get((int((x * (int)73856093)) & int(__this->_mask)));		HX_STACK_VAR(i,"i");
				struct _Function_2_1{
					inline static bool Block( int &i,::de::polygonal::ds::IntHashSet_obj *__this,int &x){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashSet.hx",614);
						{
							HX_STACK_LINE(614)
							bool exists = false;		HX_STACK_VAR(exists,"exists");
							HX_STACK_LINE(614)
							i = __this->_data->__get((i + (int)1));
							HX_STACK_LINE(614)
							while(((i != (int)-1))){
								HX_STACK_LINE(614)
								if (((__this->_data->__get(i) == x))){
									HX_STACK_LINE(614)
									exists = true;
									HX_STACK_LINE(614)
									break;
								}
								HX_STACK_LINE(614)
								i = __this->_data->__get((i + (int)1));
							}
							HX_STACK_LINE(614)
							return exists;
						}
						return null();
					}
				};
				HX_STACK_LINE(614)
				return (  (((i == (int)-1))) ? bool(false) : bool((  (((__this->_data->__get(i) == x))) ? bool(true) : bool(_Function_2_1::Block(i,__this,x)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(613)
	return _Function_1_1::Block(this,x);
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashSet_obj,contains,return )

Void IntHashSet_obj::free( ){
{
		HX_STACK_PUSH("IntHashSet::free","de/polygonal/ds/IntHashSet.hx",595);
		HX_STACK_THIS(this);
		HX_STACK_LINE(602)
		this->_hash = null();
		HX_STACK_LINE(603)
		this->_data = null();
		HX_STACK_LINE(604)
		this->_next = null();
		HX_STACK_LINE(605)
		this->_iterator = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSet_obj,free,(void))

bool IntHashSet_obj::set( Dynamic _tmp_x){
	HX_STACK_PUSH("IntHashSet::set","de/polygonal/ds/IntHashSet.hx",482);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_x,"_tmp_x");
	HX_STACK_LINE(488)
	int x = _tmp_x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(488)
	int b = (int((x * (int)73856093)) & int(this->_mask));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(494)
	int j = this->_hash->__get(b);		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(496)
	if (((j == (int)-1))){
		HX_STACK_LINE(498)
		if (((this->_size == this->_capacity))){
			HX_STACK_LINE(499)
			this->_expand();
		}
		HX_STACK_LINE(508)
		int i = (int(this->_free) << int((int)1));		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(509)
		this->_free = this->_next->__get(this->_free);
		HX_STACK_LINE(514)
		this->_hash[b] = i;
		HX_STACK_LINE(517)
		this->_data[i] = x;
		HX_STACK_LINE(519)
		(this->_size)++;
		HX_STACK_LINE(520)
		return true;
	}
	else{
		HX_STACK_LINE(523)
		if (((this->_data->__get(j) == x))){
			HX_STACK_LINE(530)
			return false;
		}
		else{
			HX_STACK_LINE(549)
			int t = this->_data->__get((j + (int)1));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(550)
			while(((t != (int)-1))){
				HX_STACK_LINE(552)
				if (((this->_data->__get(t) == x))){
					HX_STACK_LINE(554)
					j = (int)-1;
					HX_STACK_LINE(555)
					break;
				}
				HX_STACK_LINE(558)
				j = t;
				HX_STACK_LINE(559)
				t = this->_data->__get((t + (int)1));
			}
			HX_STACK_LINE(563)
			if (((j == (int)-1))){
				HX_STACK_LINE(564)
				return false;
			}
			else{
				HX_STACK_LINE(567)
				if (((this->_size == this->_capacity))){
					HX_STACK_LINE(569)
					if ((!(this->_isResizable))){
						HX_STACK_LINE(570)
						hx::Throw (((HX_CSTRING("hash set is full (") + this->_capacity) + HX_CSTRING(")")));
					}
					HX_STACK_LINE(571)
					this->_expand();
				}
				HX_STACK_LINE(573)
				int i = (int(this->_free) << int((int)1));		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(574)
				this->_free = this->_next->__get(this->_free);
				HX_STACK_LINE(575)
				this->_data[i] = x;
				HX_STACK_LINE(577)
				this->_data[(j + (int)1)] = i;
				HX_STACK_LINE(578)
				(this->_size)++;
				HX_STACK_LINE(579)
				return true;
			}
		}
	}
	HX_STACK_LINE(496)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashSet_obj,set,return )

bool IntHashSet_obj::has( Dynamic _tmp_x){
	HX_STACK_PUSH("IntHashSet::has","de/polygonal/ds/IntHashSet.hx",423);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_x,"_tmp_x");
	HX_STACK_LINE(428)
	int x = _tmp_x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(428)
	int i = this->_hash->__get((int((x * (int)73856093)) & int(this->_mask)));		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(429)
	if (((i == (int)-1))){
		HX_STACK_LINE(430)
		return false;
	}
	else{
		HX_STACK_LINE(432)
		if (((this->_data->__get(i) == x))){
			HX_STACK_LINE(439)
			return true;
		}
		else{
			HX_STACK_LINE(443)
			bool exists = false;		HX_STACK_VAR(exists,"exists");
			HX_STACK_LINE(457)
			i = this->_data->__get((i + (int)1));
			HX_STACK_LINE(458)
			while(((i != (int)-1))){
				HX_STACK_LINE(460)
				if (((this->_data->__get(i) == x))){
					HX_STACK_LINE(462)
					exists = true;
					HX_STACK_LINE(463)
					break;
				}
				HX_STACK_LINE(465)
				i = this->_data->__get((i + (int)1));
			}
			HX_STACK_LINE(468)
			return exists;
		}
	}
	HX_STACK_LINE(429)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashSet_obj,has,return )

::String IntHashSet_obj::toString( ){
	HX_STACK_PUSH("IntHashSet::toString","de/polygonal/ds/IntHashSet.hx",401);
	HX_STACK_THIS(this);
	HX_STACK_LINE(402)
	::String s = ::de::polygonal::Printf_obj::format(HX_CSTRING("{ IntHashSet size/capacity: %d/%d, load factor: %.2f }"),Dynamic( Array_obj<Dynamic>::__new().Add(this->_size).Add(this->_capacity).Add((Float(this->_size) / Float(((this->_mask + (int)1)))))));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(403)
	if (((this->_size == (int)0))){
		HX_STACK_LINE(403)
		return s;
	}
	HX_STACK_LINE(404)
	hx::AddEq(s,HX_CSTRING("\n[\n"));
	HX_STACK_LINE(405)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->iterator());  __it->hasNext(); ){
		int x = __it->next();
		hx::AddEq(s,((HX_CSTRING("  ") + x) + HX_CSTRING("\n")));
	}
	HX_STACK_LINE(409)
	hx::AddEq(s,HX_CSTRING("]"));
	HX_STACK_LINE(410)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSet_obj,toString,return )

Void IntHashSet_obj::rehash( int slotCount){
{
		HX_STACK_PUSH("IntHashSet::rehash","de/polygonal/ds/IntHashSet.hx",343);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slotCount,"slotCount");
		HX_STACK_LINE(348)
		if (((slotCount == (this->_mask + (int)1)))){
			HX_STACK_LINE(348)
			return null();
		}
		HX_STACK_LINE(350)
		::de::polygonal::ds::IntHashSet tmp = ::de::polygonal::ds::IntHashSet_obj::__new(slotCount,this->_capacity,null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(361)
		{
			HX_STACK_LINE(361)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_capacity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(361)
			while(((_g1 < _g))){
				HX_STACK_LINE(361)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(363)
				int v = this->_data->__get((int(i) << int((int)1)));		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(364)
				if (((v != (int)-2147483647))){
					HX_STACK_LINE(364)
					int b = (int((v * (int)73856093)) & int(tmp->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(364)
					int j = tmp->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(364)
					if (((j == (int)-1))){
						HX_STACK_LINE(364)
						if (((tmp->_size == tmp->_capacity))){
							HX_STACK_LINE(364)
							tmp->_expand();
						}
						HX_STACK_LINE(364)
						int i1 = (int(tmp->_free) << int((int)1));		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(364)
						tmp->_free = tmp->_next->__get(tmp->_free);
						HX_STACK_LINE(364)
						tmp->_hash[b] = i1;
						HX_STACK_LINE(364)
						tmp->_data[i1] = v;
						HX_STACK_LINE(364)
						(tmp->_size)++;
						HX_STACK_LINE(364)
						true;
					}
					else{
						HX_STACK_LINE(364)
						if (((tmp->_data->__get(j) == v))){
							HX_STACK_LINE(364)
							false;
						}
						else{
							HX_STACK_LINE(364)
							int t = tmp->_data->__get((j + (int)1));		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(364)
							while(((t != (int)-1))){
								HX_STACK_LINE(364)
								if (((tmp->_data->__get(t) == v))){
									HX_STACK_LINE(364)
									j = (int)-1;
									HX_STACK_LINE(364)
									break;
								}
								HX_STACK_LINE(364)
								j = t;
								HX_STACK_LINE(364)
								t = tmp->_data->__get((t + (int)1));
							}
							HX_STACK_LINE(364)
							if (((j == (int)-1))){
								HX_STACK_LINE(364)
								false;
							}
							else{
								HX_STACK_LINE(364)
								if (((tmp->_size == tmp->_capacity))){
									HX_STACK_LINE(364)
									if ((!(tmp->_isResizable))){
										HX_STACK_LINE(364)
										hx::Throw (((HX_CSTRING("hash set is full (") + tmp->_capacity) + HX_CSTRING(")")));
									}
									HX_STACK_LINE(364)
									tmp->_expand();
								}
								HX_STACK_LINE(364)
								int i1 = (int(tmp->_free) << int((int)1));		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(364)
								tmp->_free = tmp->_next->__get(tmp->_free);
								HX_STACK_LINE(364)
								tmp->_data[i1] = v;
								HX_STACK_LINE(364)
								tmp->_data[(j + (int)1)] = i1;
								HX_STACK_LINE(364)
								(tmp->_size)++;
								HX_STACK_LINE(364)
								true;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(373)
		this->_hash = tmp->_hash;
		HX_STACK_LINE(374)
		this->_data = tmp->_data;
		HX_STACK_LINE(375)
		this->_next = tmp->_next;
		HX_STACK_LINE(377)
		this->_mask = tmp->_mask;
		HX_STACK_LINE(378)
		this->_free = tmp->_free;
		HX_STACK_LINE(379)
		this->_sizeLevel = tmp->_sizeLevel;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashSet_obj,rehash,(void))

bool IntHashSet_obj::hasFront( int x){
	HX_STACK_PUSH("IntHashSet::hasFront","de/polygonal/ds/IntHashSet.hx",275);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(280)
	int b = (int((x * (int)73856093)) & int(this->_mask));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(281)
	int i = this->_hash->__get(b);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(282)
	if (((i == (int)-1))){
		HX_STACK_LINE(283)
		return false;
	}
	else{
		HX_STACK_LINE(285)
		if (((this->_data->__get(i) == x))){
			HX_STACK_LINE(292)
			return true;
		}
		else{
			HX_STACK_LINE(296)
			bool exists = false;		HX_STACK_VAR(exists,"exists");
			HX_STACK_LINE(298)
			int first = i;		HX_STACK_VAR(first,"first");
			int i0 = first;		HX_STACK_VAR(i0,"i0");
			HX_STACK_LINE(303)
			i = this->_data->__get((i + (int)1));
			HX_STACK_LINE(306)
			while(((i != (int)-1))){
				HX_STACK_LINE(312)
				if (((this->_data->__get(i) == x))){
					HX_STACK_LINE(321)
					this->_data[(i0 + (int)1)] = this->_data->__get((i + (int)1));
					HX_STACK_LINE(322)
					this->_data[(i + (int)1)] = first;
					HX_STACK_LINE(323)
					this->_hash[b] = i;
					HX_STACK_LINE(326)
					exists = true;
					HX_STACK_LINE(327)
					break;
				}
				HX_STACK_LINE(329)
				i = this->_data->__get(((i0 = i) + (int)1));
			}
			HX_STACK_LINE(331)
			return exists;
		}
	}
	HX_STACK_LINE(282)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashSet_obj,hasFront,return )

int IntHashSet_obj::getCollisionCount( ){
	HX_STACK_PUSH("IntHashSet::getCollisionCount","de/polygonal/ds/IntHashSet.hx",252);
	HX_STACK_THIS(this);
	HX_STACK_LINE(253)
	int c = (int)0;		HX_STACK_VAR(c,"c");
	int j;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(254)
	{
		HX_STACK_LINE(254)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = (this->_mask + (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(254)
		while(((_g1 < _g))){
			HX_STACK_LINE(254)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(256)
			j = this->_hash->__get(i);
			HX_STACK_LINE(257)
			if (((j == (int)-1))){
				HX_STACK_LINE(257)
				continue;
			}
			HX_STACK_LINE(258)
			j = this->_data->__get((j + (int)1));
			HX_STACK_LINE(259)
			while(((j != (int)-1))){
				HX_STACK_LINE(261)
				j = this->_data->__get((j + (int)1));
				HX_STACK_LINE(262)
				(c)++;
			}
		}
	}
	HX_STACK_LINE(265)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSet_obj,getCollisionCount,return )

int IntHashSet_obj::getCapacity( ){
	HX_STACK_PUSH("IntHashSet::getCapacity","de/polygonal/ds/IntHashSet.hx",242);
	HX_STACK_THIS(this);
	HX_STACK_LINE(242)
	return this->_capacity;
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSet_obj,getCapacity,return )

int IntHashSet_obj::getSlotCount( ){
	HX_STACK_PUSH("IntHashSet::getSlotCount","de/polygonal/ds/IntHashSet.hx",232);
	HX_STACK_THIS(this);
	HX_STACK_LINE(232)
	return (this->_mask + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSet_obj,getSlotCount,return )

Float IntHashSet_obj::getLoadFactor( ){
	HX_STACK_PUSH("IntHashSet::getLoadFactor","de/polygonal/ds/IntHashSet.hx",224);
	HX_STACK_THIS(this);
	HX_STACK_LINE(224)
	return (Float(this->_size) / Float(((this->_mask + (int)1))));
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashSet_obj,getLoadFactor,return )

int IntHashSet_obj::VAL_ABSENT;

int IntHashSet_obj::EMPTY_SLOT;

int IntHashSet_obj::NULL_POINTER;


IntHashSet_obj::IntHashSet_obj()
{
}

void IntHashSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntHashSet);
	HX_MARK_MEMBER_NAME(_iterator,"_iterator");
	HX_MARK_MEMBER_NAME(_isResizable,"_isResizable");
	HX_MARK_MEMBER_NAME(_sizeLevel,"_sizeLevel");
	HX_MARK_MEMBER_NAME(_size,"_size");
	HX_MARK_MEMBER_NAME(_capacity,"_capacity");
	HX_MARK_MEMBER_NAME(_free,"_free");
	HX_MARK_MEMBER_NAME(_mask,"_mask");
	HX_MARK_MEMBER_NAME(_next,"_next");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_hash,"_hash");
	HX_MARK_MEMBER_NAME(reuseIterator,"reuseIterator");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_END_CLASS();
}

void IntHashSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_iterator,"_iterator");
	HX_VISIT_MEMBER_NAME(_isResizable,"_isResizable");
	HX_VISIT_MEMBER_NAME(_sizeLevel,"_sizeLevel");
	HX_VISIT_MEMBER_NAME(_size,"_size");
	HX_VISIT_MEMBER_NAME(_capacity,"_capacity");
	HX_VISIT_MEMBER_NAME(_free,"_free");
	HX_VISIT_MEMBER_NAME(_mask,"_mask");
	HX_VISIT_MEMBER_NAME(_next,"_next");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_hash,"_hash");
	HX_VISIT_MEMBER_NAME(reuseIterator,"reuseIterator");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(key,"key");
}

Dynamic IntHashSet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
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
		if (HX_FIELD_EQ(inName,"_size") ) { return _size; }
		if (HX_FIELD_EQ(inName,"_free") ) { return _free; }
		if (HX_FIELD_EQ(inName,"_mask") ) { return _mask; }
		if (HX_FIELD_EQ(inName,"_next") ) { return _next; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"_hash") ) { return _hash; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"rehash") ) { return rehash_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_shrink") ) { return _shrink_dyn(); }
		if (HX_FIELD_EQ(inName,"_expand") ) { return _expand_dyn(); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"hasFront") ) { return hasFront_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__setData") ) { return __setData_dyn(); }
		if (HX_FIELD_EQ(inName,"__getData") ) { return __getData_dyn(); }
		if (HX_FIELD_EQ(inName,"__setNext") ) { return __setNext_dyn(); }
		if (HX_FIELD_EQ(inName,"__getNext") ) { return __getNext_dyn(); }
		if (HX_FIELD_EQ(inName,"__setHash") ) { return __setHash_dyn(); }
		if (HX_FIELD_EQ(inName,"__getHash") ) { return __getHash_dyn(); }
		if (HX_FIELD_EQ(inName,"_hashCode") ) { return _hashCode_dyn(); }
		if (HX_FIELD_EQ(inName,"_iterator") ) { return _iterator; }
		if (HX_FIELD_EQ(inName,"_capacity") ) { return _capacity; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_sizeLevel") ) { return _sizeLevel; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getCapacity") ) { return getCapacity_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getSlotCount") ) { return getSlotCount_dyn(); }
		if (HX_FIELD_EQ(inName,"_isResizable") ) { return _isResizable; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getLoadFactor") ) { return getLoadFactor_dyn(); }
		if (HX_FIELD_EQ(inName,"reuseIterator") ) { return reuseIterator; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getCollisionCount") ) { return getCollisionCount_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntHashSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_size") ) { _size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_free") ) { _free=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mask") ) { _mask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_next") ) { _next=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hash") ) { _hash=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"maxSize") ) { maxSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_iterator") ) { _iterator=inValue.Cast< ::de::polygonal::ds::IntHashSetIterator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_capacity") ) { _capacity=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_sizeLevel") ) { _sizeLevel=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_isResizable") ) { _isResizable=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"reuseIterator") ) { reuseIterator=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntHashSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_iterator"));
	outFields->push(HX_CSTRING("_isResizable"));
	outFields->push(HX_CSTRING("_sizeLevel"));
	outFields->push(HX_CSTRING("_size"));
	outFields->push(HX_CSTRING("_capacity"));
	outFields->push(HX_CSTRING("_free"));
	outFields->push(HX_CSTRING("_mask"));
	outFields->push(HX_CSTRING("_next"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_hash"));
	outFields->push(HX_CSTRING("reuseIterator"));
	outFields->push(HX_CSTRING("maxSize"));
	outFields->push(HX_CSTRING("key"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("VAL_ABSENT"),
	HX_CSTRING("EMPTY_SLOT"),
	HX_CSTRING("NULL_POINTER"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__setData"),
	HX_CSTRING("__getData"),
	HX_CSTRING("__setNext"),
	HX_CSTRING("__getNext"),
	HX_CSTRING("__setHash"),
	HX_CSTRING("__getHash"),
	HX_CSTRING("_shrink"),
	HX_CSTRING("_expand"),
	HX_CSTRING("_hashCode"),
	HX_CSTRING("clone"),
	HX_CSTRING("toArray"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("iterator"),
	HX_CSTRING("clear"),
	HX_CSTRING("size"),
	HX_CSTRING("remove"),
	HX_CSTRING("contains"),
	HX_CSTRING("free"),
	HX_CSTRING("set"),
	HX_CSTRING("has"),
	HX_CSTRING("toString"),
	HX_CSTRING("rehash"),
	HX_CSTRING("hasFront"),
	HX_CSTRING("getCollisionCount"),
	HX_CSTRING("getCapacity"),
	HX_CSTRING("getSlotCount"),
	HX_CSTRING("getLoadFactor"),
	HX_CSTRING("_iterator"),
	HX_CSTRING("_isResizable"),
	HX_CSTRING("_sizeLevel"),
	HX_CSTRING("_size"),
	HX_CSTRING("_capacity"),
	HX_CSTRING("_free"),
	HX_CSTRING("_mask"),
	HX_CSTRING("_next"),
	HX_CSTRING("_data"),
	HX_CSTRING("_hash"),
	HX_CSTRING("reuseIterator"),
	HX_CSTRING("maxSize"),
	HX_CSTRING("key"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntHashSet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(IntHashSet_obj::VAL_ABSENT,"VAL_ABSENT");
	HX_MARK_MEMBER_NAME(IntHashSet_obj::EMPTY_SLOT,"EMPTY_SLOT");
	HX_MARK_MEMBER_NAME(IntHashSet_obj::NULL_POINTER,"NULL_POINTER");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntHashSet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(IntHashSet_obj::VAL_ABSENT,"VAL_ABSENT");
	HX_VISIT_MEMBER_NAME(IntHashSet_obj::EMPTY_SLOT,"EMPTY_SLOT");
	HX_VISIT_MEMBER_NAME(IntHashSet_obj::NULL_POINTER,"NULL_POINTER");
};

Class IntHashSet_obj::__mClass;

void IntHashSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.IntHashSet"), hx::TCanCast< IntHashSet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IntHashSet_obj::__boot()
{
	VAL_ABSENT= (int)-2147483647;
	EMPTY_SLOT= (int)-1;
	NULL_POINTER= (int)-1;
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
