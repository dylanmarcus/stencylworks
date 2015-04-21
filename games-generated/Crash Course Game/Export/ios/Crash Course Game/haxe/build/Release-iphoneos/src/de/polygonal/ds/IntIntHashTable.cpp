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
#ifndef INCLUDED_de_polygonal_ds_IntHashSet
#include <de/polygonal/ds/IntHashSet.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntIntHashTable
#include <de/polygonal/ds/IntIntHashTable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntIntHashTableKeyIterator
#include <de/polygonal/ds/IntIntHashTableKeyIterator.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntIntHashTableValIterator
#include <de/polygonal/ds/IntIntHashTableValIterator.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Map
#include <de/polygonal/ds/Map.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Set
#include <de/polygonal/ds/Set.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

Void IntIntHashTable_obj::__construct(int slotCount,hx::Null< int >  __o_capacity,hx::Null< bool >  __o_isResizable,hx::Null< int >  __o_maxSize)
{
HX_STACK_PUSH("IntIntHashTable::new","de/polygonal/ds/IntIntHashTable.hx",173);
int capacity = __o_capacity.Default(-1);
bool isResizable = __o_isResizable.Default(true);
int maxSize = __o_maxSize.Default(-1);
{
	HX_STACK_LINE(178)
	if (((capacity == (int)-1))){
		HX_STACK_LINE(179)
		capacity = slotCount;
	}
	else{
	}
	HX_STACK_LINE(188)
	this->_isResizable = isResizable;
	HX_STACK_LINE(189)
	this->_free = (int)0;
	HX_STACK_LINE(190)
	this->_capacity = capacity;
	HX_STACK_LINE(191)
	this->_size = (int)0;
	HX_STACK_LINE(192)
	this->_mask = (slotCount - (int)1);
	HX_STACK_LINE(193)
	this->_sizeLevel = (int)0;
	HX_STACK_LINE(194)
	this->_iterator = null();
	HX_STACK_LINE(199)
	this->maxSize = (int)-1;
	struct _Function_1_1{
		inline static Array< int > Block( int &slotCount){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntIntHashTable.hx",215);
			{
				HX_STACK_LINE(215)
				Array< int > a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(215)
				a = Array_obj< int >::__new();
				HX_STACK_LINE(215)
				a[(slotCount - (int)1)] = null();
				HX_STACK_LINE(215)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(215)
	this->_hash = _Function_1_1::Block(slotCount);
	HX_STACK_LINE(216)
	{
		HX_STACK_LINE(216)
		Array< int > dst = this->_hash;		HX_STACK_VAR(dst,"dst");
		int k = slotCount;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(216)
		if (((k == (int)-1))){
			HX_STACK_LINE(216)
			k = dst->length;
		}
		HX_STACK_LINE(216)
		{
			HX_STACK_LINE(216)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(216)
			while(((_g < k))){
				HX_STACK_LINE(216)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(216)
				dst[i] = (int)-1;
			}
		}
	}
	struct _Function_1_2{
		inline static Array< int > Block( ::de::polygonal::ds::IntIntHashTable_obj *__this){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntIntHashTable.hx",217);
			{
				HX_STACK_LINE(217)
				Array< int > a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(217)
				a = Array_obj< int >::__new();
				HX_STACK_LINE(217)
				a[((__this->_capacity * (int)3) - (int)1)] = null();
				HX_STACK_LINE(217)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(217)
	this->_data = _Function_1_2::Block(this);
	HX_STACK_LINE(218)
	{
		HX_STACK_LINE(218)
		Array< int > dst = this->_data;		HX_STACK_VAR(dst,"dst");
		int k = (this->_capacity * (int)3);		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(218)
		if (((k == (int)-1))){
			HX_STACK_LINE(218)
			k = dst->length;
		}
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(218)
			while(((_g < k))){
				HX_STACK_LINE(218)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(218)
				dst[i] = (int)0;
			}
		}
	}
	struct _Function_1_3{
		inline static Array< int > Block( ::de::polygonal::ds::IntIntHashTable_obj *__this){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntIntHashTable.hx",219);
			{
				HX_STACK_LINE(219)
				Array< int > a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(219)
				a = Array_obj< int >::__new();
				HX_STACK_LINE(219)
				a[(__this->_capacity - (int)1)] = null();
				HX_STACK_LINE(219)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(219)
	this->_next = _Function_1_3::Block(this);
	HX_STACK_LINE(220)
	{
		HX_STACK_LINE(220)
		Array< int > dst = this->_next;		HX_STACK_VAR(dst,"dst");
		int k = this->_capacity;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(220)
		if (((k == (int)-1))){
			HX_STACK_LINE(220)
			k = dst->length;
		}
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(220)
			while(((_g < k))){
				HX_STACK_LINE(220)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(220)
				dst[i] = (int)0;
			}
		}
	}
	HX_STACK_LINE(223)
	int j = (int)2;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(224)
	{
		HX_STACK_LINE(224)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(224)
		while(((_g < capacity))){
			HX_STACK_LINE(224)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(226)
			this->_data[(j - (int)1)] = (int)-2147483647;
			HX_STACK_LINE(227)
			this->_data[j] = (int)-1;
			HX_STACK_LINE(228)
			hx::AddEq(j,(int)3);
		}
	}
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(231)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = (this->_capacity - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(231)
		while(((_g1 < _g))){
			HX_STACK_LINE(231)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(231)
			this->_next[i] = (i + (int)1);
		}
	}
	HX_STACK_LINE(232)
	this->_next[(this->_capacity - (int)1)] = (int)-1;
	HX_STACK_LINE(234)
	this->key = (::de::polygonal::ds::HashKey_obj::_counter)++;
	HX_STACK_LINE(235)
	this->reuseIterator = false;
}
;
	return null();
}

IntIntHashTable_obj::~IntIntHashTable_obj() { }

Dynamic IntIntHashTable_obj::__CreateEmpty() { return  new IntIntHashTable_obj; }
hx::ObjectPtr< IntIntHashTable_obj > IntIntHashTable_obj::__new(int slotCount,hx::Null< int >  __o_capacity,hx::Null< bool >  __o_isResizable,hx::Null< int >  __o_maxSize)
{  hx::ObjectPtr< IntIntHashTable_obj > result = new IntIntHashTable_obj();
	result->__construct(slotCount,__o_capacity,__o_isResizable,__o_maxSize);
	return result;}

Dynamic IntIntHashTable_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntIntHashTable_obj > result = new IntIntHashTable_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *IntIntHashTable_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::de::polygonal::ds::Map_obj)) return operator ::de::polygonal::ds::Map_obj *();
	if (inType==typeid( ::de::polygonal::ds::Collection_obj)) return operator ::de::polygonal::ds::Collection_obj *();
	if (inType==typeid( ::de::polygonal::ds::Hashable_obj)) return operator ::de::polygonal::ds::Hashable_obj *();
	return super::__ToInterface(inType);
}

Void IntIntHashTable_obj::__setData( int i,int x){
{
		HX_STACK_PUSH("IntIntHashTable::__setData","de/polygonal/ds/IntIntHashTable.hx",1688);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1688)
		this->_data[i] = x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(IntIntHashTable_obj,__setData,(void))

int IntIntHashTable_obj::__getData( int i){
	HX_STACK_PUSH("IntIntHashTable::__getData","de/polygonal/ds/IntIntHashTable.hx",1678);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(1678)
	return this->_data->__get(i);
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTable_obj,__getData,return )

Void IntIntHashTable_obj::__setNext( int i,int x){
{
		HX_STACK_PUSH("IntIntHashTable::__setNext","de/polygonal/ds/IntIntHashTable.hx",1667);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1667)
		this->_next[i] = x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(IntIntHashTable_obj,__setNext,(void))

int IntIntHashTable_obj::__getNext( int i){
	HX_STACK_PUSH("IntIntHashTable::__getNext","de/polygonal/ds/IntIntHashTable.hx",1657);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(1657)
	return this->_next->__get(i);
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTable_obj,__getNext,return )

Void IntIntHashTable_obj::__setHash( int i,int x){
{
		HX_STACK_PUSH("IntIntHashTable::__setHash","de/polygonal/ds/IntIntHashTable.hx",1646);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1646)
		this->_hash[i] = x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(IntIntHashTable_obj,__setHash,(void))

int IntIntHashTable_obj::__getHash( int i){
	HX_STACK_PUSH("IntIntHashTable::__getHash","de/polygonal/ds/IntIntHashTable.hx",1636);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(1636)
	return this->_hash->__get(i);
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTable_obj,__getHash,return )

Void IntIntHashTable_obj::_shrink( ){
{
		HX_STACK_PUSH("IntIntHashTable::_shrink","de/polygonal/ds/IntIntHashTable.hx",1518);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1519)
		(this->_sizeLevel)--;
		HX_STACK_LINE(1521)
		int oldSize = this->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
		HX_STACK_LINE(1522)
		int newSize = (int(oldSize) >> int((int)1));		HX_STACK_VAR(newSize,"newSize");
		HX_STACK_LINE(1523)
		this->_capacity = newSize;
		HX_STACK_LINE(1586)
		int k = (newSize * (int)3);		HX_STACK_VAR(k,"k");
		struct _Function_1_1{
			inline static Array< int > Block( int &k){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntIntHashTable.hx",1591);
				{
					HX_STACK_LINE(1591)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1591)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(1591)
					a[(k - (int)1)] = null();
					HX_STACK_LINE(1591)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(1591)
		Array< int > tmp = _Function_1_1::Block(k);		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Array< int > Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntIntHashTable.hx",1592);
				{
					HX_STACK_LINE(1592)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1592)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(1592)
					a[(newSize - (int)1)] = null();
					HX_STACK_LINE(1592)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(1592)
		this->_next = _Function_1_2::Block(newSize);
		HX_STACK_LINE(1595)
		int e = (int)0;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(1596)
		{
			HX_STACK_LINE(1596)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (this->_mask + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1596)
			while(((_g1 < _g))){
				HX_STACK_LINE(1596)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1598)
				int j = this->_hash->__get(i);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(1599)
				if (((j == (int)-1))){
					HX_STACK_LINE(1599)
					continue;
				}
				HX_STACK_LINE(1601)
				this->_hash[i] = e;
				HX_STACK_LINE(1603)
				tmp[e] = this->_data->__get(j);
				HX_STACK_LINE(1604)
				tmp[(e + (int)1)] = this->_data->__get((j + (int)1));
				HX_STACK_LINE(1605)
				tmp[(e + (int)2)] = (int)-1;
				HX_STACK_LINE(1607)
				hx::AddEq(e,(int)3);
				HX_STACK_LINE(1608)
				j = this->_data->__get((j + (int)2));
				HX_STACK_LINE(1609)
				while(((j != (int)-1))){
					HX_STACK_LINE(1611)
					tmp[(e - (int)1)] = e;
					HX_STACK_LINE(1612)
					tmp[e] = this->_data->__get(j);
					HX_STACK_LINE(1613)
					tmp[(e + (int)1)] = this->_data->__get((j + (int)1));
					HX_STACK_LINE(1614)
					tmp[(e + (int)2)] = (int)-1;
					HX_STACK_LINE(1616)
					hx::AddEq(e,(int)3);
					HX_STACK_LINE(1617)
					j = this->_data->__get((j + (int)2));
				}
			}
		}
		HX_STACK_LINE(1620)
		int i = (int(k) >> int((int)1));		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1621)
		while(((i < k))){
			HX_STACK_LINE(1623)
			tmp[(i + (int)1)] = (int)-2147483647;
			HX_STACK_LINE(1624)
			tmp[(i + (int)2)] = (int)-1;
			HX_STACK_LINE(1625)
			hx::AddEq(i,(int)3);
		}
		HX_STACK_LINE(1627)
		this->_data = tmp;
		HX_STACK_LINE(1630)
		{
			HX_STACK_LINE(1630)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1630)
			while(((_g1 < _g))){
				HX_STACK_LINE(1630)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(1630)
				this->_next[i1] = (i1 + (int)1);
			}
		}
		HX_STACK_LINE(1631)
		this->_next[(newSize - (int)1)] = (int)-1;
		HX_STACK_LINE(1632)
		this->_free = (int(newSize) >> int((int)1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,_shrink,(void))

Void IntIntHashTable_obj::_expand( ){
{
		HX_STACK_PUSH("IntIntHashTable::_expand","de/polygonal/ds/IntIntHashTable.hx",1469);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1470)
		(this->_sizeLevel)++;
		HX_STACK_LINE(1472)
		int oldSize = this->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
		HX_STACK_LINE(1473)
		int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
		HX_STACK_LINE(1474)
		this->_capacity = newSize;
		struct _Function_1_1{
			inline static Array< int > Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntIntHashTable.hx",1489);
				{
					HX_STACK_LINE(1489)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1489)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(1489)
					a[(newSize - (int)1)] = null();
					HX_STACK_LINE(1489)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(1489)
		Array< int > copy = _Function_1_1::Block(newSize);		HX_STACK_VAR(copy,"copy");
		HX_STACK_LINE(1490)
		{
			HX_STACK_LINE(1490)
			Array< int > src = this->_next;		HX_STACK_VAR(src,"src");
			int max = oldSize;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(1490)
			if (((max == (int)-1))){
				HX_STACK_LINE(1490)
				max = src->length;
			}
			HX_STACK_LINE(1490)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1490)
			{
				HX_STACK_LINE(1490)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1490)
				while(((_g < max))){
					HX_STACK_LINE(1490)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1490)
					copy[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(1490)
			copy;
		}
		HX_STACK_LINE(1491)
		this->_next = copy;
		struct _Function_1_2{
			inline static Array< int > Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntIntHashTable.hx",1492);
				{
					HX_STACK_LINE(1492)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1492)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(1492)
					a[((newSize * (int)3) - (int)1)] = null();
					HX_STACK_LINE(1492)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(1492)
		Array< int > copy1 = _Function_1_2::Block(newSize);		HX_STACK_VAR(copy1,"copy1");
		HX_STACK_LINE(1493)
		{
			HX_STACK_LINE(1493)
			Array< int > src = this->_data;		HX_STACK_VAR(src,"src");
			int max = (oldSize * (int)3);		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(1493)
			if (((max == (int)-1))){
				HX_STACK_LINE(1493)
				max = src->length;
			}
			HX_STACK_LINE(1493)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1493)
			{
				HX_STACK_LINE(1493)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1493)
				while(((_g < max))){
					HX_STACK_LINE(1493)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1493)
					copy1[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(1493)
			copy1;
		}
		HX_STACK_LINE(1494)
		this->_data = copy1;
		HX_STACK_LINE(1497)
		{
			HX_STACK_LINE(1497)
			int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
			int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1497)
			while(((_g1 < _g))){
				HX_STACK_LINE(1497)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1497)
				this->_next[i] = (i + (int)1);
			}
		}
		HX_STACK_LINE(1498)
		this->_next[(newSize - (int)1)] = (int)-1;
		HX_STACK_LINE(1499)
		this->_free = oldSize;
		HX_STACK_LINE(1501)
		int j = ((oldSize * (int)3) + (int)2);		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(1502)
		{
			HX_STACK_LINE(1502)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1502)
			while(((_g < oldSize))){
				HX_STACK_LINE(1502)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1509)
				this->_data[(j - (int)1)] = (int)-2147483647;
				HX_STACK_LINE(1510)
				this->_data[j] = (int)-1;
				HX_STACK_LINE(1513)
				hx::AddEq(j,(int)3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,_expand,(void))

int IntIntHashTable_obj::_hashCode( int x){
	HX_STACK_PUSH("IntIntHashTable::_hashCode","de/polygonal/ds/IntIntHashTable.hx",1464);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(1464)
	return (int((x * (int)73856093)) & int(this->_mask));
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTable_obj,_hashCode,return )

::de::polygonal::ds::Collection IntIntHashTable_obj::clone( hx::Null< bool >  __o_assign,Dynamic _tmp_copier){
bool assign = __o_assign.Default(true);
	HX_STACK_PUSH("IntIntHashTable::clone","de/polygonal/ds/IntIntHashTable.hx",1426);
	HX_STACK_THIS(this);
	HX_STACK_ARG(assign,"assign");
	HX_STACK_ARG(_tmp_copier,"_tmp_copier");
{
		HX_STACK_LINE(1427)
		Dynamic copier = _tmp_copier;		HX_STACK_VAR(copier,"copier");
		HX_STACK_LINE(1427)
		::de::polygonal::ds::IntIntHashTable c = ::Type_obj::createEmptyInstance(hx::ClassOf< ::de::polygonal::ds::IntIntHashTable >());		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(1428)
		c->key = (::de::polygonal::ds::HashKey_obj::_counter)++;
		HX_STACK_LINE(1429)
		c->maxSize = this->maxSize;
		HX_STACK_LINE(1445)
		c->_hash = Array_obj< int >::__new();
		HX_STACK_LINE(1446)
		{
			HX_STACK_LINE(1446)
			Array< int > src = this->_hash;		HX_STACK_VAR(src,"src");
			Array< int > dst = c->_hash;		HX_STACK_VAR(dst,"dst");
			int min = (int)0;		HX_STACK_VAR(min,"min");
			int max = (int)-1;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(1446)
			if (((max == (int)-1))){
				HX_STACK_LINE(1446)
				max = src->length;
			}
			HX_STACK_LINE(1446)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1446)
			{
				HX_STACK_LINE(1446)
				int _g = min;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1446)
				while(((_g < max))){
					HX_STACK_LINE(1446)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1446)
					dst[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(1446)
			dst;
		}
		HX_STACK_LINE(1447)
		c->_data = Array_obj< int >::__new();
		HX_STACK_LINE(1448)
		{
			HX_STACK_LINE(1448)
			Array< int > src = this->_data;		HX_STACK_VAR(src,"src");
			Array< int > dst = c->_data;		HX_STACK_VAR(dst,"dst");
			int min = (int)0;		HX_STACK_VAR(min,"min");
			int max = (int)-1;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(1448)
			if (((max == (int)-1))){
				HX_STACK_LINE(1448)
				max = src->length;
			}
			HX_STACK_LINE(1448)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1448)
			{
				HX_STACK_LINE(1448)
				int _g = min;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1448)
				while(((_g < max))){
					HX_STACK_LINE(1448)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1448)
					dst[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(1448)
			dst;
		}
		HX_STACK_LINE(1449)
		c->_next = Array_obj< int >::__new();
		HX_STACK_LINE(1450)
		{
			HX_STACK_LINE(1450)
			Array< int > src = this->_next;		HX_STACK_VAR(src,"src");
			Array< int > dst = c->_next;		HX_STACK_VAR(dst,"dst");
			int min = (int)0;		HX_STACK_VAR(min,"min");
			int max = (int)-1;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(1450)
			if (((max == (int)-1))){
				HX_STACK_LINE(1450)
				max = src->length;
			}
			HX_STACK_LINE(1450)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1450)
			{
				HX_STACK_LINE(1450)
				int _g = min;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1450)
				while(((_g < max))){
					HX_STACK_LINE(1450)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1450)
					dst[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(1450)
			dst;
		}
		HX_STACK_LINE(1454)
		c->_mask = this->_mask;
		HX_STACK_LINE(1455)
		c->_capacity = this->_capacity;
		HX_STACK_LINE(1456)
		c->_free = this->_free;
		HX_STACK_LINE(1457)
		c->_size = this->_size;
		HX_STACK_LINE(1458)
		c->_sizeLevel = this->_sizeLevel;
		HX_STACK_LINE(1460)
		return c;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IntIntHashTable_obj,clone,return )

Dynamic IntIntHashTable_obj::toArray( ){
	HX_STACK_PUSH("IntIntHashTable::toArray","de/polygonal/ds/IntIntHashTable.hx",1393);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Array< int > Block( ::de::polygonal::ds::IntIntHashTable_obj *__this){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntIntHashTable.hx",1394);
			{
				HX_STACK_LINE(1394)
				Array< int > a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(1394)
				a = Array_obj< int >::__new();
				HX_STACK_LINE(1394)
				a[(__this->_size - (int)1)] = null();
				HX_STACK_LINE(1394)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(1394)
	Array< int > a = _Function_1_1::Block(this);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(1395)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(1396)
	{
		HX_STACK_LINE(1396)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1396)
		while(((_g1 < _g))){
			HX_STACK_LINE(1396)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1398)
			int v = this->_data->__get(((i * (int)3) + (int)1));		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(1399)
			if (((v != (int)-2147483647))){
				HX_STACK_LINE(1399)
				a[(j)++] = v;
			}
		}
	}
	HX_STACK_LINE(1401)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,toArray,return )

bool IntIntHashTable_obj::isEmpty( ){
	HX_STACK_PUSH("IntIntHashTable::isEmpty","de/polygonal/ds/IntIntHashTable.hx",1385);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1385)
	return (this->_size == (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,isEmpty,return )

::de::polygonal::ds::Itr IntIntHashTable_obj::iterator( ){
	HX_STACK_PUSH("IntIntHashTable::iterator","de/polygonal/ds/IntIntHashTable.hx",1368);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1368)
	if ((this->reuseIterator)){
		HX_STACK_LINE(1371)
		if (((this->_iterator == null()))){
			HX_STACK_LINE(1372)
			this->_iterator = ::de::polygonal::ds::IntIntHashTableValIterator_obj::__new(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(1374)
			::de::polygonal::ds::IntIntHashTableValIterator _this = this->_iterator;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1374)
			_this->_data = _this->_f->__Field(HX_CSTRING("_data"),true);
			HX_STACK_LINE(1374)
			_this->_i = (int)0;
			HX_STACK_LINE(1374)
			_this->_s = _this->_f->__Field(HX_CSTRING("_capacity"),true);
			HX_STACK_LINE(1374)
			while(((bool((_this->_i < _this->_s)) && bool((_this->_data->__get(((_this->_i * (int)3) + (int)1)) == (int)-2147483647))))){
				HX_STACK_LINE(1374)
				(_this->_i)++;
			}
			HX_STACK_LINE(1374)
			_this;
		}
		HX_STACK_LINE(1375)
		return this->_iterator;
	}
	else{
		HX_STACK_LINE(1378)
		return ::de::polygonal::ds::IntIntHashTableValIterator_obj::__new(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(1368)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,iterator,return )

Void IntIntHashTable_obj::clear( hx::Null< bool >  __o_purge){
bool purge = __o_purge.Default(false);
	HX_STACK_PUSH("IntIntHashTable::clear","de/polygonal/ds/IntIntHashTable.hx",1318);
	HX_STACK_THIS(this);
	HX_STACK_ARG(purge,"purge");
{
		HX_STACK_LINE(1319)
		if (((bool(purge) && bool((this->_sizeLevel > (int)0))))){
			HX_STACK_LINE(1321)
			hx::ShrEq(this->_capacity,this->_sizeLevel);
			HX_STACK_LINE(1322)
			this->_sizeLevel = (int)0;
			struct _Function_2_1{
				inline static Array< int > Block( ::de::polygonal::ds::IntIntHashTable_obj *__this){
					HX_STACK_PUSH("*::closure","de/polygonal/ds/IntIntHashTable.hx",1333);
					{
						HX_STACK_LINE(1333)
						Array< int > a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(1333)
						a = Array_obj< int >::__new();
						HX_STACK_LINE(1333)
						a[((__this->_capacity * (int)3) - (int)1)] = null();
						HX_STACK_LINE(1333)
						return a;
					}
					return null();
				}
			};
			HX_STACK_LINE(1333)
			this->_data = _Function_2_1::Block(this);
			struct _Function_2_2{
				inline static Array< int > Block( ::de::polygonal::ds::IntIntHashTable_obj *__this){
					HX_STACK_PUSH("*::closure","de/polygonal/ds/IntIntHashTable.hx",1334);
					{
						HX_STACK_LINE(1334)
						Array< int > a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(1334)
						a = Array_obj< int >::__new();
						HX_STACK_LINE(1334)
						a[(__this->_capacity - (int)1)] = null();
						HX_STACK_LINE(1334)
						return a;
					}
					return null();
				}
			};
			HX_STACK_LINE(1334)
			this->_next = _Function_2_2::Block(this);
		}
		HX_STACK_LINE(1345)
		{
			HX_STACK_LINE(1345)
			Array< int > dst = this->_hash;		HX_STACK_VAR(dst,"dst");
			int k = (this->_mask + (int)1);		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(1345)
			if (((k == (int)-1))){
				HX_STACK_LINE(1345)
				k = dst->length;
			}
			HX_STACK_LINE(1345)
			{
				HX_STACK_LINE(1345)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1345)
				while(((_g < k))){
					HX_STACK_LINE(1345)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1345)
					dst[i] = (int)-1;
				}
			}
		}
		HX_STACK_LINE(1348)
		int j = (int)2;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(1349)
		{
			HX_STACK_LINE(1349)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_capacity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1349)
			while(((_g1 < _g))){
				HX_STACK_LINE(1349)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1351)
				this->_data[(j - (int)1)] = (int)-2147483647;
				HX_STACK_LINE(1352)
				this->_data[j] = (int)-1;
				HX_STACK_LINE(1353)
				hx::AddEq(j,(int)3);
			}
		}
		HX_STACK_LINE(1355)
		{
			HX_STACK_LINE(1355)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (this->_capacity - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1355)
			while(((_g1 < _g))){
				HX_STACK_LINE(1355)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1355)
				this->_next[i] = (i + (int)1);
			}
		}
		HX_STACK_LINE(1356)
		this->_next[(this->_capacity - (int)1)] = (int)-1;
		HX_STACK_LINE(1358)
		this->_free = (int)0;
		HX_STACK_LINE(1359)
		this->_size = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTable_obj,clear,(void))

int IntIntHashTable_obj::size( ){
	HX_STACK_PUSH("IntIntHashTable::size","de/polygonal/ds/IntIntHashTable.hx",1309);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1309)
	return this->_size;
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,size,return )

bool IntIntHashTable_obj::remove( Dynamic _tmp_val){
	HX_STACK_PUSH("IntIntHashTable::remove","de/polygonal/ds/IntIntHashTable.hx",1276);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_val,"_tmp_val");
	HX_STACK_LINE(1281)
	int val = _tmp_val;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(1281)
	int c = (int)0;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(1282)
	Array< int > keys = Array_obj< int >::__new();		HX_STACK_VAR(keys,"keys");
	HX_STACK_LINE(1283)
	{
		HX_STACK_LINE(1283)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1283)
		while(((_g1 < _g))){
			HX_STACK_LINE(1283)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1290)
			int j = (i * (int)3);		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1291)
			if (((this->_data->__get((j + (int)1)) == val))){
				HX_STACK_LINE(1292)
				keys[(c)++] = this->_data->__get(j);
			}
		}
	}
	HX_STACK_LINE(1296)
	if (((c > (int)0))){
		HX_STACK_LINE(1298)
		{
			HX_STACK_LINE(1298)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1298)
			while(((_g < keys->length))){
				HX_STACK_LINE(1298)
				int key = keys->__get(_g);		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(1298)
				++(_g);
				HX_STACK_LINE(1298)
				int b = (int((key * (int)73856093)) & int(this->_mask));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(1298)
				int i = this->_hash->__get(b);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1298)
				if (((i == (int)-1))){
					HX_STACK_LINE(1298)
					false;
				}
				else{
					HX_STACK_LINE(1298)
					if (((key == this->_data->__get(i)))){
						HX_STACK_LINE(1298)
						if (((this->_data->__get((i + (int)2)) == (int)-1))){
							HX_STACK_LINE(1298)
							this->_hash[b] = (int)-1;
						}
						else{
							HX_STACK_LINE(1298)
							this->_hash[b] = this->_data->__get((i + (int)2));
						}
						HX_STACK_LINE(1298)
						int j = ::Std_obj::_int((Float(i) / Float((int)3)));		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1298)
						this->_next[j] = this->_free;
						HX_STACK_LINE(1298)
						this->_free = j;
						HX_STACK_LINE(1298)
						this->_data[(i + (int)1)] = (int)-2147483647;
						HX_STACK_LINE(1298)
						this->_data[(i + (int)2)] = (int)-1;
						HX_STACK_LINE(1298)
						(this->_size)--;
						HX_STACK_LINE(1298)
						if (((this->_sizeLevel > (int)0))){
							HX_STACK_LINE(1298)
							if (((this->_size == (int(this->_capacity) >> int((int)2))))){
								HX_STACK_LINE(1298)
								if ((this->_isResizable)){
									HX_STACK_LINE(1298)
									this->_shrink();
								}
							}
						}
						HX_STACK_LINE(1298)
						true;
					}
					else{
						HX_STACK_LINE(1298)
						bool exists = false;		HX_STACK_VAR(exists,"exists");
						HX_STACK_LINE(1298)
						int i0 = i;		HX_STACK_VAR(i0,"i0");
						HX_STACK_LINE(1298)
						i = this->_data->__get((i + (int)2));
						HX_STACK_LINE(1298)
						while(((i != (int)-1))){
							HX_STACK_LINE(1298)
							if (((this->_data->__get(i) == key))){
								HX_STACK_LINE(1298)
								exists = true;
								HX_STACK_LINE(1298)
								break;
							}
							HX_STACK_LINE(1298)
							i = this->_data->__get(((i0 = i) + (int)2));
						}
						HX_STACK_LINE(1298)
						if ((exists)){
							HX_STACK_LINE(1298)
							this->_data[(i0 + (int)2)] = this->_data->__get((i + (int)2));
							HX_STACK_LINE(1298)
							int j = ::Std_obj::_int((Float(i) / Float((int)3)));		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(1298)
							this->_next[j] = this->_free;
							HX_STACK_LINE(1298)
							this->_free = j;
							HX_STACK_LINE(1298)
							this->_data[(i + (int)1)] = (int)-2147483647;
							HX_STACK_LINE(1298)
							this->_data[(i + (int)2)] = (int)-1;
							HX_STACK_LINE(1298)
							--(this->_size);
							HX_STACK_LINE(1298)
							if (((this->_sizeLevel > (int)0))){
								HX_STACK_LINE(1298)
								if (((this->_size == (int(this->_capacity) >> int((int)2))))){
									HX_STACK_LINE(1298)
									if ((this->_isResizable)){
										HX_STACK_LINE(1298)
										this->_shrink();
									}
								}
							}
							HX_STACK_LINE(1298)
							true;
						}
						else{
							HX_STACK_LINE(1298)
							false;
						}
					}
				}
			}
		}
		HX_STACK_LINE(1299)
		return true;
	}
	else{
		HX_STACK_LINE(1302)
		return false;
	}
	HX_STACK_LINE(1296)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTable_obj,remove,return )

bool IntIntHashTable_obj::contains( Dynamic _tmp_val){
	HX_STACK_PUSH("IntIntHashTable::contains","de/polygonal/ds/IntIntHashTable.hx",1266);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_val,"_tmp_val");
	HX_STACK_LINE(1266)
	int val = _tmp_val;		HX_STACK_VAR(val,"val");
	struct _Function_1_1{
		inline static bool Block( ::de::polygonal::ds::IntIntHashTable_obj *__this,int &val){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntIntHashTable.hx",1267);
			{
				HX_STACK_LINE(1267)
				bool exists = false;		HX_STACK_VAR(exists,"exists");
				HX_STACK_LINE(1267)
				{
					HX_STACK_LINE(1267)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = __this->_capacity;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1267)
					while(((_g1 < _g))){
						HX_STACK_LINE(1267)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(1267)
						int v = __this->_data->__get(((i * (int)3) + (int)1));		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(1267)
						if (((v == val))){
							HX_STACK_LINE(1267)
							exists = true;
							HX_STACK_LINE(1267)
							break;
						}
					}
				}
				HX_STACK_LINE(1267)
				return exists;
			}
			return null();
		}
	};
	HX_STACK_LINE(1266)
	return _Function_1_1::Block(this,val);
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTable_obj,contains,return )

Void IntIntHashTable_obj::free( ){
{
		HX_STACK_PUSH("IntIntHashTable::free","de/polygonal/ds/IntIntHashTable.hx",1249);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1256)
		this->_hash = null();
		HX_STACK_LINE(1257)
		this->_data = null();
		HX_STACK_LINE(1258)
		this->_next = null();
		HX_STACK_LINE(1259)
		this->_iterator = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,free,(void))

::de::polygonal::ds::Itr IntIntHashTable_obj::keys( ){
	HX_STACK_PUSH("IntIntHashTable::keys","de/polygonal/ds/IntIntHashTable.hx",1236);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1236)
	return ::de::polygonal::ds::IntIntHashTableKeyIterator_obj::__new(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,keys,return )

::de::polygonal::ds::Set IntIntHashTable_obj::toKeySet( ){
	HX_STACK_PUSH("IntIntHashTable::toKeySet","de/polygonal/ds/IntIntHashTable.hx",1216);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1217)
	::de::polygonal::ds::IntHashSet s = ::de::polygonal::ds::IntHashSet_obj::__new(this->_capacity,null(),null(),null());		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(1218)
	{
		HX_STACK_LINE(1218)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1218)
		while(((_g1 < _g))){
			HX_STACK_LINE(1218)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1220)
			int v = this->_data->__get(((i * (int)3) + (int)1));		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(1221)
			if (((v != (int)-2147483647))){
				HX_STACK_LINE(1223)
				int x = this->_data->__get((i * (int)3));		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1223)
				int b = (int((x * (int)73856093)) & int(s->_mask));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(1223)
				int j = s->_hash->__get(b);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(1223)
				if (((j == (int)-1))){
					HX_STACK_LINE(1223)
					if (((s->_size == s->_capacity))){
						HX_STACK_LINE(1223)
						s->_expand();
					}
					HX_STACK_LINE(1223)
					int i1 = (int(s->_free) << int((int)1));		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1223)
					s->_free = s->_next->__get(s->_free);
					HX_STACK_LINE(1223)
					s->_hash[b] = i1;
					HX_STACK_LINE(1223)
					s->_data[i1] = x;
					HX_STACK_LINE(1223)
					(s->_size)++;
					HX_STACK_LINE(1223)
					true;
				}
				else{
					HX_STACK_LINE(1223)
					if (((s->_data->__get(j) == x))){
						HX_STACK_LINE(1223)
						false;
					}
					else{
						HX_STACK_LINE(1223)
						int t = s->_data->__get((j + (int)1));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1223)
						while(((t != (int)-1))){
							HX_STACK_LINE(1223)
							if (((s->_data->__get(t) == x))){
								HX_STACK_LINE(1223)
								j = (int)-1;
								HX_STACK_LINE(1223)
								break;
							}
							HX_STACK_LINE(1223)
							j = t;
							HX_STACK_LINE(1223)
							t = s->_data->__get((t + (int)1));
						}
						HX_STACK_LINE(1223)
						if (((j == (int)-1))){
							HX_STACK_LINE(1223)
							false;
						}
						else{
							HX_STACK_LINE(1223)
							if (((s->_size == s->_capacity))){
								HX_STACK_LINE(1223)
								if ((!(s->_isResizable))){
									HX_STACK_LINE(1223)
									hx::Throw (((HX_CSTRING("hash set is full (") + s->_capacity) + HX_CSTRING(")")));
								}
								HX_STACK_LINE(1223)
								s->_expand();
							}
							HX_STACK_LINE(1223)
							int i1 = (int(s->_free) << int((int)1));		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1223)
							s->_free = s->_next->__get(s->_free);
							HX_STACK_LINE(1223)
							s->_data[i1] = x;
							HX_STACK_LINE(1223)
							s->_data[(j + (int)1)] = i1;
							HX_STACK_LINE(1223)
							(s->_size)++;
							HX_STACK_LINE(1223)
							true;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(1227)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,toKeySet,return )

::de::polygonal::ds::Set IntIntHashTable_obj::toValSet( ){
	HX_STACK_PUSH("IntIntHashTable::toValSet","de/polygonal/ds/IntIntHashTable.hx",1201);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1202)
	::de::polygonal::ds::IntHashSet s = ::de::polygonal::ds::IntHashSet_obj::__new(this->_capacity,null(),null(),null());		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(1203)
	{
		HX_STACK_LINE(1203)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1203)
		while(((_g1 < _g))){
			HX_STACK_LINE(1203)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1205)
			int v = this->_data->__get(((i * (int)3) + (int)1));		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(1206)
			if (((v != (int)-2147483647))){
				HX_STACK_LINE(1206)
				int b = (int((v * (int)73856093)) & int(s->_mask));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(1206)
				int j = s->_hash->__get(b);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(1206)
				if (((j == (int)-1))){
					HX_STACK_LINE(1206)
					if (((s->_size == s->_capacity))){
						HX_STACK_LINE(1206)
						s->_expand();
					}
					HX_STACK_LINE(1206)
					int i1 = (int(s->_free) << int((int)1));		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1206)
					s->_free = s->_next->__get(s->_free);
					HX_STACK_LINE(1206)
					s->_hash[b] = i1;
					HX_STACK_LINE(1206)
					s->_data[i1] = v;
					HX_STACK_LINE(1206)
					(s->_size)++;
					HX_STACK_LINE(1206)
					true;
				}
				else{
					HX_STACK_LINE(1206)
					if (((s->_data->__get(j) == v))){
						HX_STACK_LINE(1206)
						false;
					}
					else{
						HX_STACK_LINE(1206)
						int t = s->_data->__get((j + (int)1));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1206)
						while(((t != (int)-1))){
							HX_STACK_LINE(1206)
							if (((s->_data->__get(t) == v))){
								HX_STACK_LINE(1206)
								j = (int)-1;
								HX_STACK_LINE(1206)
								break;
							}
							HX_STACK_LINE(1206)
							j = t;
							HX_STACK_LINE(1206)
							t = s->_data->__get((t + (int)1));
						}
						HX_STACK_LINE(1206)
						if (((j == (int)-1))){
							HX_STACK_LINE(1206)
							false;
						}
						else{
							HX_STACK_LINE(1206)
							if (((s->_size == s->_capacity))){
								HX_STACK_LINE(1206)
								if ((!(s->_isResizable))){
									HX_STACK_LINE(1206)
									hx::Throw (((HX_CSTRING("hash set is full (") + s->_capacity) + HX_CSTRING(")")));
								}
								HX_STACK_LINE(1206)
								s->_expand();
							}
							HX_STACK_LINE(1206)
							int i1 = (int(s->_free) << int((int)1));		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1206)
							s->_free = s->_next->__get(s->_free);
							HX_STACK_LINE(1206)
							s->_data[i1] = v;
							HX_STACK_LINE(1206)
							s->_data[(j + (int)1)] = i1;
							HX_STACK_LINE(1206)
							(s->_size)++;
							HX_STACK_LINE(1206)
							true;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(1209)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,toValSet,return )

bool IntIntHashTable_obj::clr( Dynamic _tmp_key){
	HX_STACK_PUSH("IntIntHashTable::clr","de/polygonal/ds/IntIntHashTable.hx",1088);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_key,"_tmp_key");
	HX_STACK_LINE(1090)
	int key = _tmp_key;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(1090)
	int b = (int((key * (int)73856093)) & int(this->_mask));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(1091)
	int i = this->_hash->__get(b);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1092)
	if (((i == (int)-1))){
		HX_STACK_LINE(1093)
		return false;
	}
	else{
		HX_STACK_LINE(1095)
		if (((key == this->_data->__get(i)))){
			HX_STACK_LINE(1106)
			if (((this->_data->__get((i + (int)2)) == (int)-1))){
				HX_STACK_LINE(1108)
				this->_hash[b] = (int)-1;
			}
			else{
				HX_STACK_LINE(1110)
				this->_hash[b] = this->_data->__get((i + (int)2));
			}
			HX_STACK_LINE(1112)
			int j = ::Std_obj::_int((Float(i) / Float((int)3)));		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1113)
			this->_next[j] = this->_free;
			HX_STACK_LINE(1114)
			this->_free = j;
			HX_STACK_LINE(1120)
			this->_data[(i + (int)1)] = (int)-2147483647;
			HX_STACK_LINE(1121)
			this->_data[(i + (int)2)] = (int)-1;
			HX_STACK_LINE(1124)
			(this->_size)--;
			HX_STACK_LINE(1126)
			if (((this->_sizeLevel > (int)0))){
				HX_STACK_LINE(1127)
				if (((this->_size == (int(this->_capacity) >> int((int)2))))){
					HX_STACK_LINE(1128)
					if ((this->_isResizable)){
						HX_STACK_LINE(1129)
						this->_shrink();
					}
				}
			}
			HX_STACK_LINE(1131)
			return true;
		}
		else{
			HX_STACK_LINE(1135)
			bool exists = false;		HX_STACK_VAR(exists,"exists");
			HX_STACK_LINE(1137)
			int i0 = i;		HX_STACK_VAR(i0,"i0");
			HX_STACK_LINE(1141)
			i = this->_data->__get((i + (int)2));
			HX_STACK_LINE(1144)
			while(((i != (int)-1))){
				HX_STACK_LINE(1156)
				if (((this->_data->__get(i) == key))){
					HX_STACK_LINE(1158)
					exists = true;
					HX_STACK_LINE(1159)
					break;
				}
				HX_STACK_LINE(1161)
				i = this->_data->__get(((i0 = i) + (int)2));
			}
			HX_STACK_LINE(1165)
			if ((exists)){
				HX_STACK_LINE(1167)
				this->_data[(i0 + (int)2)] = this->_data->__get((i + (int)2));
				HX_STACK_LINE(1169)
				int j = ::Std_obj::_int((Float(i) / Float((int)3)));		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(1170)
				this->_next[j] = this->_free;
				HX_STACK_LINE(1171)
				this->_free = j;
				HX_STACK_LINE(1178)
				this->_data[(i + (int)1)] = (int)-2147483647;
				HX_STACK_LINE(1179)
				this->_data[(i + (int)2)] = (int)-1;
				HX_STACK_LINE(1182)
				--(this->_size);
				HX_STACK_LINE(1184)
				if (((this->_sizeLevel > (int)0))){
					HX_STACK_LINE(1185)
					if (((this->_size == (int(this->_capacity) >> int((int)2))))){
						HX_STACK_LINE(1186)
						if ((this->_isResizable)){
							HX_STACK_LINE(1187)
							this->_shrink();
						}
					}
				}
				HX_STACK_LINE(1189)
				return true;
			}
			else{
				HX_STACK_LINE(1192)
				return false;
			}
		}
	}
	HX_STACK_LINE(1092)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTable_obj,clr,return )

bool IntIntHashTable_obj::set( Dynamic _tmp_key,Dynamic _tmp_val){
	HX_STACK_PUSH("IntIntHashTable::set","de/polygonal/ds/IntIntHashTable.hx",998);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_key,"_tmp_key");
	HX_STACK_ARG(_tmp_val,"_tmp_val");
	HX_STACK_LINE(1004)
	int key = _tmp_key;		HX_STACK_VAR(key,"key");
	int val = _tmp_val;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(1004)
	if (((this->_size == this->_capacity))){
		HX_STACK_LINE(1005)
		if ((this->_isResizable)){
			HX_STACK_LINE(1012)
			this->_expand();
		}
	}
	HX_STACK_LINE(1015)
	int i = (this->_free * (int)3);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1016)
	this->_free = this->_next->__get(this->_free);
	HX_STACK_LINE(1023)
	this->_data[i] = key;
	HX_STACK_LINE(1024)
	this->_data[(i + (int)1)] = val;
	HX_STACK_LINE(1027)
	int b = (int((key * (int)73856093)) & int(this->_mask));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(1039)
	int j = this->_hash->__get(b);		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(1040)
	if (((j == (int)-1))){
		HX_STACK_LINE(1042)
		this->_hash[b] = i;
		HX_STACK_LINE(1043)
		(this->_size)++;
		HX_STACK_LINE(1044)
		return true;
	}
	else{
		HX_STACK_LINE(1054)
		bool first = (this->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
		HX_STACK_LINE(1055)
		int t = this->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1058)
		while(((t != (int)-1))){
			HX_STACK_LINE(1066)
			if (((this->_data->__get(t) == key))){
				HX_STACK_LINE(1066)
				first = false;
			}
			HX_STACK_LINE(1067)
			j = t;
			HX_STACK_LINE(1068)
			t = this->_data->__get((t + (int)2));
		}
		HX_STACK_LINE(1075)
		this->_data[(j + (int)2)] = i;
		HX_STACK_LINE(1078)
		(this->_size)++;
		HX_STACK_LINE(1079)
		return first;
	}
	HX_STACK_LINE(1040)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(IntIntHashTable_obj,set,return )

int IntIntHashTable_obj::getAll( int key,Array< int > values){
	HX_STACK_PUSH("IntIntHashTable::getAll","de/polygonal/ds/IntIntHashTable.hx",954);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_ARG(values,"values");
	HX_STACK_LINE(955)
	int i = this->_hash->__get((int((key * (int)73856093)) & int(this->_mask)));		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(956)
	if (((i == (int)-1))){
		HX_STACK_LINE(957)
		return (int)0;
	}
	else{
		HX_STACK_LINE(960)
		int c = (int)0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(974)
		if (((this->_data->__get(i) == key))){
			HX_STACK_LINE(975)
			values[(c)++] = this->_data->__get((i + (int)1));
		}
		HX_STACK_LINE(976)
		i = this->_data->__get((i + (int)2));
		HX_STACK_LINE(977)
		while(((i != (int)-1))){
			HX_STACK_LINE(979)
			if (((this->_data->__get(i) == key))){
				HX_STACK_LINE(980)
				values[(c)++] = this->_data->__get((i + (int)1));
			}
			HX_STACK_LINE(981)
			i = this->_data->__get((i + (int)2));
		}
		HX_STACK_LINE(984)
		return c;
	}
	HX_STACK_LINE(956)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(IntIntHashTable_obj,getAll,return )

Dynamic IntIntHashTable_obj::get( Dynamic _tmp_key){
	HX_STACK_PUSH("IntIntHashTable::get","de/polygonal/ds/IntIntHashTable.hx",903);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_key,"_tmp_key");
	HX_STACK_LINE(904)
	int key = _tmp_key;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(904)
	int i = this->_hash->__get((int((key * (int)73856093)) & int(this->_mask)));		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(905)
	if (((i == (int)-1))){
		HX_STACK_LINE(906)
		return (int)-2147483647;
	}
	else{
		HX_STACK_LINE(908)
		if (((this->_data->__get(i) == key))){
			HX_STACK_LINE(915)
			return this->_data->__get((i + (int)1));
		}
		else{
			HX_STACK_LINE(919)
			int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(933)
			i = this->_data->__get((i + (int)2));
			HX_STACK_LINE(934)
			while(((i != (int)-1))){
				HX_STACK_LINE(936)
				if (((this->_data->__get(i) == key))){
					HX_STACK_LINE(938)
					v = this->_data->__get((i + (int)1));
					HX_STACK_LINE(939)
					break;
				}
				HX_STACK_LINE(941)
				i = this->_data->__get((i + (int)2));
			}
			HX_STACK_LINE(944)
			return v;
		}
	}
	HX_STACK_LINE(905)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTable_obj,get,return )

int IntIntHashTable_obj::count( int key){
	HX_STACK_PUSH("IntIntHashTable::count","de/polygonal/ds/IntIntHashTable.hx",874);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(875)
	int c = (int)0;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(876)
	int i = this->_hash->__get((int((key * (int)73856093)) & int(this->_mask)));		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(877)
	if (((i == (int)-1))){
		HX_STACK_LINE(878)
		return c;
	}
	else{
		HX_STACK_LINE(889)
		while(((i != (int)-1))){
			HX_STACK_LINE(891)
			if (((this->_data->__get(i) == key))){
				HX_STACK_LINE(891)
				(c)++;
			}
			HX_STACK_LINE(892)
			i = this->_data->__get((i + (int)2));
		}
		HX_STACK_LINE(895)
		return c;
	}
	HX_STACK_LINE(877)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTable_obj,count,return )

bool IntIntHashTable_obj::hasKey( Dynamic _tmp_key){
	HX_STACK_PUSH("IntIntHashTable::hasKey","de/polygonal/ds/IntIntHashTable.hx",824);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_key,"_tmp_key");
	HX_STACK_LINE(825)
	int key = _tmp_key;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(825)
	int i = this->_hash->__get((int((key * (int)73856093)) & int(this->_mask)));		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(826)
	if (((i == (int)-1))){
		HX_STACK_LINE(827)
		return false;
	}
	else{
		HX_STACK_LINE(829)
		if (((this->_data->__get(i) == key))){
			HX_STACK_LINE(836)
			return true;
		}
		else{
			HX_STACK_LINE(840)
			bool exists = false;		HX_STACK_VAR(exists,"exists");
			HX_STACK_LINE(854)
			i = this->_data->__get((i + (int)2));
			HX_STACK_LINE(855)
			while(((i != (int)-1))){
				HX_STACK_LINE(857)
				if (((this->_data->__get(i) == key))){
					HX_STACK_LINE(859)
					exists = true;
					HX_STACK_LINE(860)
					break;
				}
				HX_STACK_LINE(862)
				i = this->_data->__get((i + (int)2));
			}
			HX_STACK_LINE(865)
			return exists;
		}
	}
	HX_STACK_LINE(826)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTable_obj,hasKey,return )

bool IntIntHashTable_obj::has( Dynamic _tmp_val){
	HX_STACK_PUSH("IntIntHashTable::has","de/polygonal/ds/IntIntHashTable.hx",802);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_val,"_tmp_val");
	HX_STACK_LINE(807)
	int val = _tmp_val;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(807)
	bool exists = false;		HX_STACK_VAR(exists,"exists");
	HX_STACK_LINE(808)
	{
		HX_STACK_LINE(808)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(808)
		while(((_g1 < _g))){
			HX_STACK_LINE(808)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(810)
			int v = this->_data->__get(((i * (int)3) + (int)1));		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(811)
			if (((v == val))){
				HX_STACK_LINE(813)
				exists = true;
				HX_STACK_LINE(814)
				break;
			}
		}
	}
	HX_STACK_LINE(817)
	return exists;
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTable_obj,has,return )

::String IntIntHashTable_obj::toString( ){
	HX_STACK_PUSH("IntIntHashTable::toString","de/polygonal/ds/IntIntHashTable.hx",772);
	HX_STACK_THIS(this);
	HX_STACK_LINE(773)
	::String s = ::de::polygonal::Printf_obj::format(HX_CSTRING("[ IntIntHashTable size/capacity: %d/%d, load factor: %.2f }"),Dynamic( Array_obj<Dynamic>::__new().Add(this->_size).Add(this->_capacity).Add((Float(this->_size) / Float(((this->_mask + (int)1)))))));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(774)
	if (((this->_size == (int)0))){
		HX_STACK_LINE(774)
		return s;
	}
	HX_STACK_LINE(775)
	hx::AddEq(s,HX_CSTRING("\n[\n"));
	HX_STACK_LINE(777)
	Float max = 0.;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(778)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->keys());  __it->hasNext(); ){
		int key = __it->next();
		max = ::Math_obj::max(max,key);
	}
	HX_STACK_LINE(779)
	int i = (int)1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(780)
	while(((max != (int)0))){
		HX_STACK_LINE(782)
		(i)++;
		HX_STACK_LINE(783)
		max = ::Std_obj::_int((Float(max) / Float((int)10)));
	}
	struct _Function_1_1{
		inline static int Block( ::de::polygonal::ds::IntIntHashTable_obj *__this,int &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntIntHashTable.hx",787);
			{
				HX_STACK_LINE(787)
				int i1 = __this->_hash->__get((int((key * (int)73856093)) & int(__this->_mask)));		HX_STACK_VAR(i1,"i1");
				struct _Function_2_1{
					inline static int Block( int &i1,::de::polygonal::ds::IntIntHashTable_obj *__this,int &key){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/IntIntHashTable.hx",787);
						{
							HX_STACK_LINE(787)
							int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(787)
							i1 = __this->_data->__get((i1 + (int)2));
							HX_STACK_LINE(787)
							while(((i1 != (int)-1))){
								HX_STACK_LINE(787)
								if (((__this->_data->__get(i1) == key))){
									HX_STACK_LINE(787)
									v = __this->_data->__get((i1 + (int)1));
									HX_STACK_LINE(787)
									break;
								}
								HX_STACK_LINE(787)
								i1 = __this->_data->__get((i1 + (int)2));
							}
							HX_STACK_LINE(787)
							return v;
						}
						return null();
					}
				};
				HX_STACK_LINE(787)
				return (  (((i1 == (int)-1))) ? int((int)-2147483647) : int((  (((__this->_data->__get(i1) == key))) ? int(__this->_data->__get((i1 + (int)1))) : int(_Function_2_1::Block(i1,__this,key)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(786)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->keys());  __it->hasNext(); ){
		int key = __it->next();
		hx::AddEq(s,::de::polygonal::Printf_obj::format(((HX_CSTRING("  %- ") + i) + HX_CSTRING("d -> %d\n")),Dynamic( Array_obj<Dynamic>::__new().Add(key).Add(_Function_1_1::Block(this,key)))));
	}
	HX_STACK_LINE(789)
	hx::AddEq(s,HX_CSTRING("]"));
	HX_STACK_LINE(790)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,toString,return )

::de::polygonal::ds::DA IntIntHashTable_obj::toKeyDA( ){
	HX_STACK_PUSH("IntIntHashTable::toKeyDA","de/polygonal/ds/IntIntHashTable.hx",737);
	HX_STACK_THIS(this);
	HX_STACK_LINE(738)
	::de::polygonal::ds::DA a = ::de::polygonal::ds::DA_obj::__new(this->_size,null());		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(739)
	{
		HX_STACK_LINE(739)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(739)
		while(((_g1 < _g))){
			HX_STACK_LINE(739)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(746)
			if (((this->_data->__get(((i * (int)3) + (int)1)) != (int)-2147483647))){
				HX_STACK_LINE(747)
				int i1 = a->_size;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(747)
				hx::IndexRef((a->_a).mPtr,i1) = this->_data->__get((i * (int)3));
				HX_STACK_LINE(747)
				if (((i1 >= a->_size))){
					HX_STACK_LINE(747)
					(a->_size)++;
				}
			}
		}
	}
	HX_STACK_LINE(750)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,toKeyDA,return )

Array< int > IntIntHashTable_obj::toKeyArray( ){
	HX_STACK_PUSH("IntIntHashTable::toKeyArray","de/polygonal/ds/IntIntHashTable.hx",714);
	HX_STACK_THIS(this);
	HX_STACK_LINE(715)
	if (((this->_size == (int)0))){
		HX_STACK_LINE(715)
		return Array_obj< int >::__new();
	}
	struct _Function_1_1{
		inline static Array< int > Block( ::de::polygonal::ds::IntIntHashTable_obj *__this){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntIntHashTable.hx",717);
			{
				HX_STACK_LINE(717)
				Array< int > a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(717)
				a = Array_obj< int >::__new();
				HX_STACK_LINE(717)
				a[(__this->_size - (int)1)] = null();
				HX_STACK_LINE(717)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(717)
	Array< int > a = _Function_1_1::Block(this);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(718)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(719)
	{
		HX_STACK_LINE(719)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(719)
		while(((_g1 < _g))){
			HX_STACK_LINE(719)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(726)
			if (((this->_data->__get(((i * (int)3) + (int)1)) != (int)-2147483647))){
				HX_STACK_LINE(727)
				a[(j)++] = this->_data->__get((i * (int)3));
			}
		}
	}
	HX_STACK_LINE(730)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,toKeyArray,return )

bool IntIntHashTable_obj::removePair( int key,int val){
	HX_STACK_PUSH("IntIntHashTable::removePair","de/polygonal/ds/IntIntHashTable.hx",705);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(705)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(IntIntHashTable_obj,removePair,return )

int IntIntHashTable_obj::extract( int key){
	HX_STACK_PUSH("IntIntHashTable::extract","de/polygonal/ds/IntIntHashTable.hx",593);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(594)
	int b = (int((key * (int)73856093)) & int(this->_mask));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(595)
	int i = this->_hash->__get(b);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(596)
	if (((i == (int)-1))){
		HX_STACK_LINE(597)
		return (int)-2147483647;
	}
	else{
		HX_STACK_LINE(599)
		if (((key == this->_data->__get(i)))){
			HX_STACK_LINE(608)
			int val = this->_data->__get((i + (int)1));		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(613)
			if (((this->_data->__get((i + (int)2)) == (int)-1))){
				HX_STACK_LINE(615)
				this->_hash[b] = (int)-1;
			}
			else{
				HX_STACK_LINE(617)
				this->_hash[b] = this->_data->__get((i + (int)2));
			}
			HX_STACK_LINE(619)
			int j = ::Std_obj::_int((Float(i) / Float((int)3)));		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(620)
			this->_next[j] = this->_free;
			HX_STACK_LINE(621)
			this->_free = j;
			HX_STACK_LINE(627)
			this->_data[(i + (int)1)] = (int)-2147483647;
			HX_STACK_LINE(628)
			this->_data[(i + (int)2)] = (int)-1;
			HX_STACK_LINE(631)
			(this->_size)--;
			HX_STACK_LINE(633)
			if (((this->_sizeLevel > (int)0))){
				HX_STACK_LINE(634)
				if (((this->_size == (int(this->_capacity) >> int((int)2))))){
					HX_STACK_LINE(635)
					if ((this->_isResizable)){
						HX_STACK_LINE(636)
						this->_shrink();
					}
				}
			}
			HX_STACK_LINE(638)
			return val;
		}
		else{
			HX_STACK_LINE(642)
			int i0 = i;		HX_STACK_VAR(i0,"i0");
			HX_STACK_LINE(646)
			i = this->_data->__get((i + (int)2));
			HX_STACK_LINE(649)
			int val = (int)-2147483647;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(651)
			while(((i != (int)-1))){
				HX_STACK_LINE(663)
				if (((this->_data->__get(i) == key))){
					HX_STACK_LINE(665)
					val = this->_data->__get((i + (int)1));
					HX_STACK_LINE(666)
					break;
				}
				HX_STACK_LINE(668)
				i = this->_data->__get(((i0 = i) + (int)2));
			}
			HX_STACK_LINE(672)
			if (((val != (int)-2147483647))){
				HX_STACK_LINE(674)
				this->_data[(i0 + (int)2)] = this->_data->__get((i + (int)2));
				HX_STACK_LINE(676)
				int j = ::Std_obj::_int((Float(i) / Float((int)3)));		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(677)
				this->_next[j] = this->_free;
				HX_STACK_LINE(678)
				this->_free = j;
				HX_STACK_LINE(685)
				this->_data[(i + (int)1)] = (int)-2147483647;
				HX_STACK_LINE(686)
				this->_data[(i + (int)2)] = (int)-1;
				HX_STACK_LINE(689)
				--(this->_size);
				HX_STACK_LINE(691)
				if (((this->_sizeLevel > (int)0))){
					HX_STACK_LINE(692)
					if (((this->_size == (int(this->_capacity) >> int((int)2))))){
						HX_STACK_LINE(693)
						if ((this->_isResizable)){
							HX_STACK_LINE(694)
							this->_shrink();
						}
					}
				}
				HX_STACK_LINE(696)
				return val;
			}
			else{
				HX_STACK_LINE(699)
				return (int)-2147483647;
			}
		}
	}
	HX_STACK_LINE(596)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTable_obj,extract,return )

bool IntIntHashTable_obj::remap( Dynamic _tmp_key,Dynamic _tmp_val){
	HX_STACK_PUSH("IntIntHashTable::remap","de/polygonal/ds/IntIntHashTable.hx",536);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_key,"_tmp_key");
	HX_STACK_ARG(_tmp_val,"_tmp_val");
	HX_STACK_LINE(537)
	int key = _tmp_key;		HX_STACK_VAR(key,"key");
	int val = _tmp_val;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(537)
	int i = this->_hash->__get((int((key * (int)73856093)) & int(this->_mask)));		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(538)
	if (((i == (int)-1))){
		HX_STACK_LINE(539)
		return false;
	}
	else{
		HX_STACK_LINE(541)
		if (((this->_data->__get(i) == key))){
			HX_STACK_LINE(552)
			this->_data[(i + (int)1)] = val;
			HX_STACK_LINE(553)
			return true;
		}
		else{
			HX_STACK_LINE(571)
			i = this->_data->__get((i + (int)2));
			HX_STACK_LINE(572)
			while(((i != (int)-1))){
				HX_STACK_LINE(574)
				if (((this->_data->__get(i) == key))){
					HX_STACK_LINE(576)
					this->_data[(i + (int)1)] = val;
					HX_STACK_LINE(577)
					break;
				}
				HX_STACK_LINE(579)
				i = this->_data->__get((i + (int)2));
			}
			HX_STACK_LINE(582)
			return (i != (int)-1);
		}
	}
	HX_STACK_LINE(538)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(IntIntHashTable_obj,remap,return )

Void IntIntHashTable_obj::rehash( int slotCount){
{
		HX_STACK_PUSH("IntIntHashTable::rehash","de/polygonal/ds/IntIntHashTable.hx",491);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slotCount,"slotCount");
		HX_STACK_LINE(496)
		if (((slotCount == (this->_mask + (int)1)))){
			HX_STACK_LINE(496)
			return null();
		}
		HX_STACK_LINE(498)
		::de::polygonal::ds::IntIntHashTable tmp = ::de::polygonal::ds::IntIntHashTable_obj::__new(slotCount,this->_capacity,null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(509)
		{
			HX_STACK_LINE(509)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_capacity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(509)
			while(((_g1 < _g))){
				HX_STACK_LINE(509)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(511)
				int v = this->_data->__get(((i * (int)3) + (int)1));		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(512)
				if (((v != (int)-2147483647))){
					HX_STACK_LINE(512)
					int key = this->_data->__get((i * (int)3));		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(512)
					if (((tmp->_size == tmp->_capacity))){
						HX_STACK_LINE(512)
						if ((tmp->_isResizable)){
							HX_STACK_LINE(512)
							tmp->_expand();
						}
					}
					HX_STACK_LINE(512)
					int i1 = (tmp->_free * (int)3);		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(512)
					tmp->_free = tmp->_next->__get(tmp->_free);
					HX_STACK_LINE(512)
					tmp->_data[i1] = key;
					HX_STACK_LINE(512)
					tmp->_data[(i1 + (int)1)] = v;
					HX_STACK_LINE(512)
					int b = (int((key * (int)73856093)) & int(tmp->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(512)
					int j = tmp->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(512)
					if (((j == (int)-1))){
						HX_STACK_LINE(512)
						tmp->_hash[b] = i1;
						HX_STACK_LINE(512)
						(tmp->_size)++;
						HX_STACK_LINE(512)
						true;
					}
					else{
						HX_STACK_LINE(512)
						bool first = (tmp->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
						HX_STACK_LINE(512)
						int t = tmp->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(512)
						while(((t != (int)-1))){
							HX_STACK_LINE(512)
							if (((tmp->_data->__get(t) == key))){
								HX_STACK_LINE(512)
								first = false;
							}
							HX_STACK_LINE(512)
							j = t;
							HX_STACK_LINE(512)
							t = tmp->_data->__get((t + (int)2));
						}
						HX_STACK_LINE(512)
						tmp->_data[(j + (int)2)] = i1;
						HX_STACK_LINE(512)
						(tmp->_size)++;
						HX_STACK_LINE(512)
						first;
					}
				}
			}
		}
		HX_STACK_LINE(521)
		this->_hash = tmp->_hash;
		HX_STACK_LINE(522)
		this->_data = tmp->_data;
		HX_STACK_LINE(523)
		this->_next = tmp->_next;
		HX_STACK_LINE(525)
		this->_mask = tmp->_mask;
		HX_STACK_LINE(526)
		this->_free = tmp->_free;
		HX_STACK_LINE(527)
		this->_sizeLevel = tmp->_sizeLevel;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTable_obj,rehash,(void))

bool IntIntHashTable_obj::setIfAbsent( int key,int val){
	HX_STACK_PUSH("IntIntHashTable::setIfAbsent","de/polygonal/ds/IntIntHashTable.hx",362);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(367)
	int b = (int((key * (int)73856093)) & int(this->_mask));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(373)
	int j = this->_hash->__get(b);		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(375)
	if (((j == (int)-1))){
		HX_STACK_LINE(381)
		if (((this->_size == this->_capacity))){
			HX_STACK_LINE(382)
			if ((this->_isResizable)){
				HX_STACK_LINE(389)
				this->_expand();
			}
		}
		HX_STACK_LINE(392)
		int i = (this->_free * (int)3);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(393)
		this->_free = this->_next->__get(this->_free);
		HX_STACK_LINE(401)
		this->_hash[b] = i;
		HX_STACK_LINE(402)
		this->_data[i] = key;
		HX_STACK_LINE(403)
		this->_data[(i + (int)1)] = val;
		HX_STACK_LINE(406)
		(this->_size)++;
		HX_STACK_LINE(407)
		return true;
	}
	else{
		HX_STACK_LINE(410)
		if (((this->_data->__get(j) == key))){
			HX_STACK_LINE(417)
			return false;
		}
		else{
			HX_STACK_LINE(435)
			int t = this->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(436)
			while(((t != (int)-1))){
				HX_STACK_LINE(438)
				if (((this->_data->__get(t) == key))){
					HX_STACK_LINE(440)
					j = (int)-1;
					HX_STACK_LINE(441)
					break;
				}
				HX_STACK_LINE(444)
				t = this->_data->__get(((j = t) + (int)2));
			}
			HX_STACK_LINE(448)
			if (((j == (int)-1))){
				HX_STACK_LINE(449)
				return false;
			}
			else{
				HX_STACK_LINE(452)
				if (((this->_size == this->_capacity))){
					HX_STACK_LINE(453)
					if ((this->_isResizable)){
						HX_STACK_LINE(460)
						this->_expand();
					}
				}
				HX_STACK_LINE(463)
				int i = (this->_free * (int)3);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(464)
				this->_free = this->_next->__get(this->_free);
				HX_STACK_LINE(466)
				this->_data[(j + (int)2)] = i;
				HX_STACK_LINE(473)
				this->_data[i] = key;
				HX_STACK_LINE(474)
				this->_data[(i + (int)1)] = val;
				HX_STACK_LINE(477)
				(this->_size)++;
				HX_STACK_LINE(478)
				return true;
			}
		}
	}
	HX_STACK_LINE(375)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(IntIntHashTable_obj,setIfAbsent,return )

int IntIntHashTable_obj::getFront( int key){
	HX_STACK_PUSH("IntIntHashTable::getFront","de/polygonal/ds/IntIntHashTable.hx",295);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(296)
	int b = (int((key * (int)73856093)) & int(this->_mask));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(297)
	int i = this->_hash->__get(b);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(298)
	if (((i == (int)-1))){
		HX_STACK_LINE(299)
		return (int)-2147483647;
	}
	else{
		HX_STACK_LINE(301)
		if (((this->_data->__get(i) == key))){
			HX_STACK_LINE(308)
			return this->_data->__get((i + (int)1));
		}
		else{
			HX_STACK_LINE(312)
			int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(314)
			int first = i;		HX_STACK_VAR(first,"first");
			int i0 = first;		HX_STACK_VAR(i0,"i0");
			HX_STACK_LINE(319)
			i = this->_data->__get((i + (int)2));
			HX_STACK_LINE(322)
			while(((i != (int)-1))){
				HX_STACK_LINE(328)
				if (((this->_data->__get(i) == key))){
					HX_STACK_LINE(340)
					v = this->_data->__get((i + (int)1));
					HX_STACK_LINE(341)
					this->_data[(i0 + (int)2)] = this->_data->__get((i + (int)2));
					HX_STACK_LINE(342)
					this->_data[(i + (int)2)] = first;
					HX_STACK_LINE(343)
					this->_hash[b] = i;
					HX_STACK_LINE(345)
					break;
				}
				HX_STACK_LINE(347)
				i = this->_data->__get(((i0 = i) + (int)2));
			}
			HX_STACK_LINE(349)
			return v;
		}
	}
	HX_STACK_LINE(298)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTable_obj,getFront,return )

int IntIntHashTable_obj::getCollisionCount( ){
	HX_STACK_PUSH("IntIntHashTable::getCollisionCount","de/polygonal/ds/IntIntHashTable.hx",273);
	HX_STACK_THIS(this);
	HX_STACK_LINE(274)
	int c = (int)0;		HX_STACK_VAR(c,"c");
	int j;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(275)
	{
		HX_STACK_LINE(275)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = (this->_mask + (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(275)
		while(((_g1 < _g))){
			HX_STACK_LINE(275)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(277)
			j = this->_hash->__get(i);
			HX_STACK_LINE(278)
			if (((j == (int)-1))){
				HX_STACK_LINE(278)
				continue;
			}
			HX_STACK_LINE(279)
			j = this->_data->__get((j + (int)2));
			HX_STACK_LINE(280)
			while(((j != (int)-1))){
				HX_STACK_LINE(282)
				j = this->_data->__get((j + (int)2));
				HX_STACK_LINE(283)
				(c)++;
			}
		}
	}
	HX_STACK_LINE(286)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,getCollisionCount,return )

int IntIntHashTable_obj::getCapacity( ){
	HX_STACK_PUSH("IntIntHashTable::getCapacity","de/polygonal/ds/IntIntHashTable.hx",263);
	HX_STACK_THIS(this);
	HX_STACK_LINE(263)
	return this->_capacity;
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,getCapacity,return )

int IntIntHashTable_obj::getSlotCount( ){
	HX_STACK_PUSH("IntIntHashTable::getSlotCount","de/polygonal/ds/IntIntHashTable.hx",253);
	HX_STACK_THIS(this);
	HX_STACK_LINE(253)
	return (this->_mask + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,getSlotCount,return )

Float IntIntHashTable_obj::getLoadFactor( ){
	HX_STACK_PUSH("IntIntHashTable::getLoadFactor","de/polygonal/ds/IntIntHashTable.hx",245);
	HX_STACK_THIS(this);
	HX_STACK_LINE(245)
	return (Float(this->_size) / Float(((this->_mask + (int)1))));
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTable_obj,getLoadFactor,return )

int IntIntHashTable_obj::KEY_ABSENT;

int IntIntHashTable_obj::VAL_ABSENT;

int IntIntHashTable_obj::EMPTY_SLOT;

int IntIntHashTable_obj::NULL_POINTER;


IntIntHashTable_obj::IntIntHashTable_obj()
{
}

void IntIntHashTable_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntIntHashTable);
	HX_MARK_MEMBER_NAME(_iterator,"_iterator");
	HX_MARK_MEMBER_NAME(_sizeLevel,"_sizeLevel");
	HX_MARK_MEMBER_NAME(_size,"_size");
	HX_MARK_MEMBER_NAME(_capacity,"_capacity");
	HX_MARK_MEMBER_NAME(_free,"_free");
	HX_MARK_MEMBER_NAME(_mask,"_mask");
	HX_MARK_MEMBER_NAME(_next,"_next");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_hash,"_hash");
	HX_MARK_MEMBER_NAME(_isResizable,"_isResizable");
	HX_MARK_MEMBER_NAME(reuseIterator,"reuseIterator");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_END_CLASS();
}

void IntIntHashTable_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_iterator,"_iterator");
	HX_VISIT_MEMBER_NAME(_sizeLevel,"_sizeLevel");
	HX_VISIT_MEMBER_NAME(_size,"_size");
	HX_VISIT_MEMBER_NAME(_capacity,"_capacity");
	HX_VISIT_MEMBER_NAME(_free,"_free");
	HX_VISIT_MEMBER_NAME(_mask,"_mask");
	HX_VISIT_MEMBER_NAME(_next,"_next");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_hash,"_hash");
	HX_VISIT_MEMBER_NAME(_isResizable,"_isResizable");
	HX_VISIT_MEMBER_NAME(reuseIterator,"reuseIterator");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(key,"key");
}

Dynamic IntIntHashTable_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"clr") ) { return clr_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"keys") ) { return keys_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"count") ) { return count_dyn(); }
		if (HX_FIELD_EQ(inName,"remap") ) { return remap_dyn(); }
		if (HX_FIELD_EQ(inName,"_size") ) { return _size; }
		if (HX_FIELD_EQ(inName,"_free") ) { return _free; }
		if (HX_FIELD_EQ(inName,"_mask") ) { return _mask; }
		if (HX_FIELD_EQ(inName,"_next") ) { return _next; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"_hash") ) { return _hash; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"getAll") ) { return getAll_dyn(); }
		if (HX_FIELD_EQ(inName,"hasKey") ) { return hasKey_dyn(); }
		if (HX_FIELD_EQ(inName,"rehash") ) { return rehash_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_shrink") ) { return _shrink_dyn(); }
		if (HX_FIELD_EQ(inName,"_expand") ) { return _expand_dyn(); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"toKeyDA") ) { return toKeyDA_dyn(); }
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"toKeySet") ) { return toKeySet_dyn(); }
		if (HX_FIELD_EQ(inName,"toValSet") ) { return toValSet_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"getFront") ) { return getFront_dyn(); }
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
		if (HX_FIELD_EQ(inName,"toKeyArray") ) { return toKeyArray_dyn(); }
		if (HX_FIELD_EQ(inName,"removePair") ) { return removePair_dyn(); }
		if (HX_FIELD_EQ(inName,"_sizeLevel") ) { return _sizeLevel; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setIfAbsent") ) { return setIfAbsent_dyn(); }
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

Dynamic IntIntHashTable_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"_iterator") ) { _iterator=inValue.Cast< ::de::polygonal::ds::IntIntHashTableValIterator >(); return inValue; }
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

void IntIntHashTable_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_iterator"));
	outFields->push(HX_CSTRING("_sizeLevel"));
	outFields->push(HX_CSTRING("_size"));
	outFields->push(HX_CSTRING("_capacity"));
	outFields->push(HX_CSTRING("_free"));
	outFields->push(HX_CSTRING("_mask"));
	outFields->push(HX_CSTRING("_next"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_hash"));
	outFields->push(HX_CSTRING("_isResizable"));
	outFields->push(HX_CSTRING("reuseIterator"));
	outFields->push(HX_CSTRING("maxSize"));
	outFields->push(HX_CSTRING("key"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("KEY_ABSENT"),
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
	HX_CSTRING("keys"),
	HX_CSTRING("toKeySet"),
	HX_CSTRING("toValSet"),
	HX_CSTRING("clr"),
	HX_CSTRING("set"),
	HX_CSTRING("getAll"),
	HX_CSTRING("get"),
	HX_CSTRING("count"),
	HX_CSTRING("hasKey"),
	HX_CSTRING("has"),
	HX_CSTRING("toString"),
	HX_CSTRING("toKeyDA"),
	HX_CSTRING("toKeyArray"),
	HX_CSTRING("removePair"),
	HX_CSTRING("extract"),
	HX_CSTRING("remap"),
	HX_CSTRING("rehash"),
	HX_CSTRING("setIfAbsent"),
	HX_CSTRING("getFront"),
	HX_CSTRING("getCollisionCount"),
	HX_CSTRING("getCapacity"),
	HX_CSTRING("getSlotCount"),
	HX_CSTRING("getLoadFactor"),
	HX_CSTRING("_iterator"),
	HX_CSTRING("_sizeLevel"),
	HX_CSTRING("_size"),
	HX_CSTRING("_capacity"),
	HX_CSTRING("_free"),
	HX_CSTRING("_mask"),
	HX_CSTRING("_next"),
	HX_CSTRING("_data"),
	HX_CSTRING("_hash"),
	HX_CSTRING("_isResizable"),
	HX_CSTRING("reuseIterator"),
	HX_CSTRING("maxSize"),
	HX_CSTRING("key"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntIntHashTable_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(IntIntHashTable_obj::KEY_ABSENT,"KEY_ABSENT");
	HX_MARK_MEMBER_NAME(IntIntHashTable_obj::VAL_ABSENT,"VAL_ABSENT");
	HX_MARK_MEMBER_NAME(IntIntHashTable_obj::EMPTY_SLOT,"EMPTY_SLOT");
	HX_MARK_MEMBER_NAME(IntIntHashTable_obj::NULL_POINTER,"NULL_POINTER");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntIntHashTable_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(IntIntHashTable_obj::KEY_ABSENT,"KEY_ABSENT");
	HX_VISIT_MEMBER_NAME(IntIntHashTable_obj::VAL_ABSENT,"VAL_ABSENT");
	HX_VISIT_MEMBER_NAME(IntIntHashTable_obj::EMPTY_SLOT,"EMPTY_SLOT");
	HX_VISIT_MEMBER_NAME(IntIntHashTable_obj::NULL_POINTER,"NULL_POINTER");
};

Class IntIntHashTable_obj::__mClass;

void IntIntHashTable_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.IntIntHashTable"), hx::TCanCast< IntIntHashTable_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IntIntHashTable_obj::__boot()
{
	KEY_ABSENT= (int)-2147483647;
	VAL_ABSENT= (int)-2147483647;
	EMPTY_SLOT= (int)-1;
	NULL_POINTER= (int)-1;
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
