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
#ifndef INCLUDED_de_polygonal_ds_Cloneable
#include <de/polygonal/ds/Cloneable.h>
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
#ifndef INCLUDED_de_polygonal_ds_IntHashTable
#include <de/polygonal/ds/IntHashTable.h>
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
#ifndef INCLUDED_de_polygonal_ds_ListSet
#include <de/polygonal/ds/ListSet.h>
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

Void IntHashTable_obj::__construct(int slotCount,hx::Null< int >  __o_capacity,hx::Null< bool >  __o_isResizable,hx::Null< int >  __o_maxSize)
{
HX_STACK_PUSH("IntHashTable::new","de/polygonal/ds/IntHashTable.hx",142);
int capacity = __o_capacity.Default(-1);
bool isResizable = __o_isResizable.Default(true);
int maxSize = __o_maxSize.Default(-1);
{
	HX_STACK_LINE(143)
	if (((capacity == (int)-1))){
		HX_STACK_LINE(143)
		capacity = slotCount;
	}
	HX_STACK_LINE(145)
	this->_isResizable = isResizable;
	HX_STACK_LINE(147)
	this->_h = ::de::polygonal::ds::IntIntHashTable_obj::__new(slotCount,capacity,isResizable,maxSize);
	struct _Function_1_1{
		inline static Dynamic Block( int &capacity){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",148);
			{
				HX_STACK_LINE(148)
				Dynamic a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(148)
				a = Dynamic( Array_obj<Dynamic>::__new() );
				HX_STACK_LINE(148)
				hx::IndexRef((a).mPtr,(capacity - (int)1)) = null();
				HX_STACK_LINE(148)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(148)
	this->_vals = _Function_1_1::Block(capacity);
	HX_STACK_LINE(153)
	this->maxSize = (int)-1;
	struct _Function_1_2{
		inline static Array< int > Block( int &capacity){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",167);
			{
				HX_STACK_LINE(167)
				Array< int > a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(167)
				a = Array_obj< int >::__new();
				HX_STACK_LINE(167)
				a[(capacity - (int)1)] = null();
				HX_STACK_LINE(167)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(167)
	this->_next = _Function_1_2::Block(capacity);
	struct _Function_1_3{
		inline static Array< int > Block( int &capacity){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",168);
			{
				HX_STACK_LINE(168)
				Array< int > a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(168)
				a = Array_obj< int >::__new();
				HX_STACK_LINE(168)
				a[(capacity - (int)1)] = null();
				HX_STACK_LINE(168)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(168)
	this->_keys = _Function_1_3::Block(capacity);
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		Array< int > dst = this->_keys;		HX_STACK_VAR(dst,"dst");
		int k = capacity;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(169)
		if (((k == (int)-1))){
			HX_STACK_LINE(169)
			k = dst->length;
		}
		HX_STACK_LINE(169)
		{
			HX_STACK_LINE(169)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(169)
			while(((_g < k))){
				HX_STACK_LINE(169)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(169)
				dst[i] = (int)-2147483647;
			}
		}
	}
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = (capacity - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		while(((_g1 < _g))){
			HX_STACK_LINE(172)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(172)
			this->_next[i] = (i + (int)1);
		}
	}
	HX_STACK_LINE(173)
	this->_next[(capacity - (int)1)] = (int)-1;
	HX_STACK_LINE(174)
	this->_free = (int)0;
	HX_STACK_LINE(175)
	this->_key0 = (int)0;
	HX_STACK_LINE(176)
	this->_i0 = (int)0;
	HX_STACK_LINE(177)
	this->_sizeLevel = (int)0;
	HX_STACK_LINE(178)
	this->_iterator = null();
	HX_STACK_LINE(179)
	this->_tmpArr = Array_obj< int >::__new();
	HX_STACK_LINE(181)
	this->key = (::de::polygonal::ds::HashKey_obj::_counter)++;
	HX_STACK_LINE(182)
	this->reuseIterator = false;
}
;
	return null();
}

IntHashTable_obj::~IntHashTable_obj() { }

Dynamic IntHashTable_obj::__CreateEmpty() { return  new IntHashTable_obj; }
hx::ObjectPtr< IntHashTable_obj > IntHashTable_obj::__new(int slotCount,hx::Null< int >  __o_capacity,hx::Null< bool >  __o_isResizable,hx::Null< int >  __o_maxSize)
{  hx::ObjectPtr< IntHashTable_obj > result = new IntHashTable_obj();
	result->__construct(slotCount,__o_capacity,__o_isResizable,__o_maxSize);
	return result;}

Dynamic IntHashTable_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntHashTable_obj > result = new IntHashTable_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *IntHashTable_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::de::polygonal::ds::Map_obj)) return operator ::de::polygonal::ds::Map_obj *();
	if (inType==typeid( ::de::polygonal::ds::Collection_obj)) return operator ::de::polygonal::ds::Collection_obj *();
	if (inType==typeid( ::de::polygonal::ds::Hashable_obj)) return operator ::de::polygonal::ds::Hashable_obj *();
	return super::__ToInterface(inType);
}

bool IntHashTable_obj::__hasKey( int i){
	HX_STACK_PUSH("IntHashTable::__hasKey","de/polygonal/ds/IntHashTable.hx",934);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(934)
	return (this->_keys->__get(i) != (int)-2147483647);
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTable_obj,__hasKey,return )

Void IntHashTable_obj::__clrKey( int i){
{
		HX_STACK_PUSH("IntHashTable::__clrKey","de/polygonal/ds/IntHashTable.hx",926);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(926)
		this->_keys[i] = (int)-2147483647;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTable_obj,__clrKey,(void))

Void IntHashTable_obj::__setKey( int i,int x){
{
		HX_STACK_PUSH("IntHashTable::__setKey","de/polygonal/ds/IntHashTable.hx",918);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(918)
		this->_keys[i] = x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(IntHashTable_obj,__setKey,(void))

int IntHashTable_obj::__getKey( int i){
	HX_STACK_PUSH("IntHashTable::__getKey","de/polygonal/ds/IntHashTable.hx",910);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(910)
	return this->_keys->__get(i);
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTable_obj,__getKey,return )

Void IntHashTable_obj::__setNext( int i,int x){
{
		HX_STACK_PUSH("IntHashTable::__setNext","de/polygonal/ds/IntHashTable.hx",901);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(901)
		this->_next[i] = x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(IntHashTable_obj,__setNext,(void))

int IntHashTable_obj::__getNext( int i){
	HX_STACK_PUSH("IntHashTable::__getNext","de/polygonal/ds/IntHashTable.hx",893);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(893)
	return this->_next->__get(i);
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTable_obj,__getNext,return )

Void IntHashTable_obj::_invalidate( ){
{
		HX_STACK_PUSH("IntHashTable::_invalidate","de/polygonal/ds/IntHashTable.hx",888);
		HX_STACK_THIS(this);
		HX_STACK_LINE(888)
		this->_key0 = (int)-2147483647;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,_invalidate,(void))

Void IntHashTable_obj::_shrink( ){
{
		HX_STACK_PUSH("IntHashTable::_shrink","de/polygonal/ds/IntHashTable.hx",840);
		HX_STACK_THIS(this);
		HX_STACK_LINE(841)
		(this->_sizeLevel)--;
		HX_STACK_LINE(843)
		int oldSize = (int(this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
		HX_STACK_LINE(844)
		int newSize = this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
		struct _Function_1_1{
			inline static Array< int > Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",853);
				{
					HX_STACK_LINE(853)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(853)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(853)
					a[(newSize - (int)1)] = null();
					HX_STACK_LINE(853)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(853)
		this->_next = _Function_1_1::Block(newSize);
		HX_STACK_LINE(856)
		{
			HX_STACK_LINE(856)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(856)
			while(((_g1 < _g))){
				HX_STACK_LINE(856)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(856)
				this->_next[i] = (i + (int)1);
			}
		}
		HX_STACK_LINE(857)
		this->_next[(newSize - (int)1)] = (int)-1;
		HX_STACK_LINE(858)
		this->_free = (int)0;
		struct _Function_1_2{
			inline static Array< int > Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",864);
				{
					HX_STACK_LINE(864)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(864)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(864)
					a[(newSize - (int)1)] = null();
					HX_STACK_LINE(864)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(864)
		Array< int > tmpKeys = _Function_1_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
		HX_STACK_LINE(865)
		{
			HX_STACK_LINE(865)
			int k = newSize;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(865)
			if (((k == (int)-1))){
				HX_STACK_LINE(865)
				k = tmpKeys->length;
			}
			HX_STACK_LINE(865)
			{
				HX_STACK_LINE(865)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(865)
				while(((_g < k))){
					HX_STACK_LINE(865)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(865)
					tmpKeys[i] = (int)-2147483647;
				}
			}
		}
		struct _Function_1_3{
			inline static Dynamic Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",867);
				{
					HX_STACK_LINE(867)
					Dynamic a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(867)
					a = Dynamic( Array_obj<Dynamic>::__new() );
					HX_STACK_LINE(867)
					hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
					HX_STACK_LINE(867)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(867)
		Dynamic tmpVals = _Function_1_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
		HX_STACK_LINE(869)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_h->iterator());  __it->hasNext(); ){
			int i = __it->next();
			{
				HX_STACK_LINE(871)
				tmpKeys[this->_free] = this->_keys->__get(i);
				HX_STACK_LINE(872)
				hx::IndexRef((tmpVals).mPtr,this->_free) = this->_vals->__GetItem(i);
				HX_STACK_LINE(873)
				this->_free = this->_next->__get(this->_free);
			}
;
		}
		HX_STACK_LINE(879)
		this->_keys = tmpKeys;
		HX_STACK_LINE(882)
		this->_vals = tmpVals;
		HX_STACK_LINE(884)
		{
			HX_STACK_LINE(884)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_free;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(884)
			while(((_g1 < _g))){
				HX_STACK_LINE(884)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(884)
				::de::polygonal::ds::IntIntHashTable _this = this->_h;		HX_STACK_VAR(_this,"_this");
				int key = this->_keys->__get(i);		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(884)
				int i1 = _this->_hash->__get((int((key * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(884)
				if (((i1 == (int)-1))){
					HX_STACK_LINE(884)
					false;
				}
				else{
					HX_STACK_LINE(884)
					if (((_this->_data->__get(i1) == key))){
						HX_STACK_LINE(884)
						_this->_data[(i1 + (int)1)] = i;
						HX_STACK_LINE(884)
						true;
					}
					else{
						HX_STACK_LINE(884)
						i1 = _this->_data->__get((i1 + (int)2));
						HX_STACK_LINE(884)
						while(((i1 != (int)-1))){
							HX_STACK_LINE(884)
							if (((_this->_data->__get(i1) == key))){
								HX_STACK_LINE(884)
								_this->_data[(i1 + (int)1)] = i;
								HX_STACK_LINE(884)
								break;
							}
							HX_STACK_LINE(884)
							i1 = _this->_data->__get((i1 + (int)2));
						}
						HX_STACK_LINE(884)
						(i1 != (int)-1);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,_shrink,(void))

Void IntHashTable_obj::_expand( int oldSize){
{
		HX_STACK_PUSH("IntHashTable::_expand","de/polygonal/ds/IntHashTable.hx",803);
		HX_STACK_THIS(this);
		HX_STACK_ARG(oldSize,"oldSize");
		HX_STACK_LINE(804)
		int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
		struct _Function_1_1{
			inline static Array< int > Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",819);
				{
					HX_STACK_LINE(819)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(819)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(819)
					a[(newSize - (int)1)] = null();
					HX_STACK_LINE(819)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(819)
		Array< int > tmp = _Function_1_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(820)
		{
			HX_STACK_LINE(820)
			Array< int > src = this->_next;		HX_STACK_VAR(src,"src");
			int max = oldSize;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(820)
			if (((max == (int)-1))){
				HX_STACK_LINE(820)
				max = src->length;
			}
			HX_STACK_LINE(820)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(820)
			{
				HX_STACK_LINE(820)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(820)
				while(((_g < max))){
					HX_STACK_LINE(820)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(820)
					tmp[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(820)
			tmp;
		}
		HX_STACK_LINE(821)
		this->_next = tmp;
		struct _Function_1_2{
			inline static Array< int > Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",822);
				{
					HX_STACK_LINE(822)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(822)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(822)
					a[(newSize - (int)1)] = null();
					HX_STACK_LINE(822)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(822)
		Array< int > tmp1 = _Function_1_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(823)
		{
			HX_STACK_LINE(823)
			Array< int > src = this->_keys;		HX_STACK_VAR(src,"src");
			int max = oldSize;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(823)
			if (((max == (int)-1))){
				HX_STACK_LINE(823)
				max = src->length;
			}
			HX_STACK_LINE(823)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(823)
			{
				HX_STACK_LINE(823)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(823)
				while(((_g < max))){
					HX_STACK_LINE(823)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(823)
					tmp1[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(823)
			tmp1;
		}
		HX_STACK_LINE(824)
		this->_keys = tmp1;
		HX_STACK_LINE(827)
		{
			HX_STACK_LINE(827)
			int _g = oldSize;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(827)
			while(((_g < newSize))){
				HX_STACK_LINE(827)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(827)
				this->_keys[i] = (int)-2147483647;
			}
		}
		HX_STACK_LINE(828)
		{
			HX_STACK_LINE(828)
			int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
			int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(828)
			while(((_g1 < _g))){
				HX_STACK_LINE(828)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(828)
				this->_next[i] = (i + (int)1);
			}
		}
		HX_STACK_LINE(829)
		this->_next[(newSize - (int)1)] = (int)-1;
		HX_STACK_LINE(830)
		this->_free = oldSize;
		struct _Function_1_3{
			inline static Dynamic Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",832);
				{
					HX_STACK_LINE(832)
					Dynamic a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(832)
					a = Dynamic( Array_obj<Dynamic>::__new() );
					HX_STACK_LINE(832)
					hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
					HX_STACK_LINE(832)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(832)
		Dynamic tmp2 = _Function_1_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(833)
		{
			HX_STACK_LINE(833)
			Dynamic src = this->_vals;		HX_STACK_VAR(src,"src");
			int max = oldSize;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(833)
			if (((max == (int)-1))){
				HX_STACK_LINE(833)
				max = src->__Field(HX_CSTRING("length"),true);
			}
			HX_STACK_LINE(833)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(833)
			{
				HX_STACK_LINE(833)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(833)
				while(((_g < max))){
					HX_STACK_LINE(833)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(833)
					hx::IndexRef((tmp2).mPtr,(j)++) = src->__GetItem(i);
				}
			}
			HX_STACK_LINE(833)
			tmp2;
		}
		HX_STACK_LINE(834)
		this->_vals = tmp2;
		HX_STACK_LINE(836)
		(this->_sizeLevel)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTable_obj,_expand,(void))

::de::polygonal::ds::Collection IntHashTable_obj::clone( hx::Null< bool >  __o_assign,Dynamic _tmp_copier){
bool assign = __o_assign.Default(true);
	HX_STACK_PUSH("IntHashTable::clone","de/polygonal/ds/IntHashTable.hx",736);
	HX_STACK_THIS(this);
	HX_STACK_ARG(assign,"assign");
	HX_STACK_ARG(_tmp_copier,"_tmp_copier");
{
		HX_STACK_LINE(737)
		Dynamic copier = _tmp_copier;		HX_STACK_VAR(copier,"copier");
		HX_STACK_LINE(737)
		::de::polygonal::ds::IntHashTable c = ::Type_obj::createEmptyInstance(hx::ClassOf< ::de::polygonal::ds::IntHashTable >());		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(738)
		c->key = (::de::polygonal::ds::HashKey_obj::_counter)++;
		HX_STACK_LINE(739)
		c->maxSize = this->maxSize;
		HX_STACK_LINE(740)
		c->_h = this->_h->clone(false,null());
		HX_STACK_LINE(742)
		if ((assign)){
			HX_STACK_LINE(744)
			c->_vals = Dynamic( Array_obj<Dynamic>::__new() );
			HX_STACK_LINE(745)
			{
				HX_STACK_LINE(745)
				Dynamic src = this->_vals;		HX_STACK_VAR(src,"src");
				Dynamic dst = c->_vals;		HX_STACK_VAR(dst,"dst");
				int min = (int)0;		HX_STACK_VAR(min,"min");
				int max = (int)-1;		HX_STACK_VAR(max,"max");
				HX_STACK_LINE(745)
				if (((max == (int)-1))){
					HX_STACK_LINE(745)
					max = src->__Field(HX_CSTRING("length"),true);
				}
				HX_STACK_LINE(745)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(745)
				{
					HX_STACK_LINE(745)
					int _g = min;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(745)
					while(((_g < max))){
						HX_STACK_LINE(745)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(745)
						hx::IndexRef((dst).mPtr,(j)++) = src->__GetItem(i);
					}
				}
				HX_STACK_LINE(745)
				dst;
			}
		}
		else{
			struct _Function_2_1{
				inline static Dynamic Block( ::de::polygonal::ds::IntHashTable_obj *__this){
					HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",749);
					{
						HX_STACK_LINE(749)
						Dynamic a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(749)
						a = Dynamic( Array_obj<Dynamic>::__new() );
						HX_STACK_LINE(749)
						hx::IndexRef((a).mPtr,(__this->_h->_capacity - (int)1)) = null();
						HX_STACK_LINE(749)
						return a;
					}
					return null();
				}
			};
			HX_STACK_LINE(749)
			Dynamic tmp = _Function_2_1::Block(this);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(750)
			if (((copier != null()))){
				HX_STACK_LINE(752)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(752)
				while(((_g1 < _g))){
					HX_STACK_LINE(752)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(754)
					if (((this->_keys->__get(i) != (int)-2147483647))){
						HX_STACK_LINE(755)
						hx::IndexRef((tmp).mPtr,i) = copier(this->_vals->__GetItem(i));
					}
				}
			}
			else{
				HX_STACK_LINE(760)
				::de::polygonal::ds::Cloneable c1 = null();		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(761)
				{
					HX_STACK_LINE(761)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(761)
					while(((_g1 < _g))){
						HX_STACK_LINE(761)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(763)
						if (((this->_keys->__get(i) != (int)-2147483647))){
							HX_STACK_LINE(769)
							c1 = this->_vals->__GetItem(i);
							HX_STACK_LINE(770)
							hx::IndexRef((tmp).mPtr,i) = c1->clone();
						}
					}
				}
			}
			HX_STACK_LINE(774)
			c->_vals = tmp;
		}
		HX_STACK_LINE(777)
		c->_sizeLevel = this->_sizeLevel;
		HX_STACK_LINE(778)
		c->_free = this->_free;
		HX_STACK_LINE(779)
		c->_key0 = this->_key0;
		HX_STACK_LINE(780)
		c->_i0 = this->_i0;
		HX_STACK_LINE(793)
		c->_next = Array_obj< int >::__new();
		HX_STACK_LINE(794)
		{
			HX_STACK_LINE(794)
			Array< int > src = this->_next;		HX_STACK_VAR(src,"src");
			Array< int > dst = c->_next;		HX_STACK_VAR(dst,"dst");
			int min = (int)0;		HX_STACK_VAR(min,"min");
			int max = (int)-1;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(794)
			if (((max == (int)-1))){
				HX_STACK_LINE(794)
				max = src->length;
			}
			HX_STACK_LINE(794)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(794)
			{
				HX_STACK_LINE(794)
				int _g = min;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(794)
				while(((_g < max))){
					HX_STACK_LINE(794)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(794)
					dst[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(794)
			dst;
		}
		HX_STACK_LINE(795)
		c->_keys = Array_obj< int >::__new();
		HX_STACK_LINE(796)
		{
			HX_STACK_LINE(796)
			Array< int > src = this->_keys;		HX_STACK_VAR(src,"src");
			Array< int > dst = c->_keys;		HX_STACK_VAR(dst,"dst");
			int min = (int)0;		HX_STACK_VAR(min,"min");
			int max = (int)-1;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(796)
			if (((max == (int)-1))){
				HX_STACK_LINE(796)
				max = src->length;
			}
			HX_STACK_LINE(796)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(796)
			{
				HX_STACK_LINE(796)
				int _g = min;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(796)
				while(((_g < max))){
					HX_STACK_LINE(796)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(796)
					dst[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(796)
			dst;
		}
		HX_STACK_LINE(799)
		return c;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IntHashTable_obj,clone,return )

Dynamic IntHashTable_obj::toArray( ){
	HX_STACK_PUSH("IntHashTable::toArray","de/polygonal/ds/IntHashTable.hx",700);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Dynamic Block( ::de::polygonal::ds::IntHashTable_obj *__this){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",701);
			{
				HX_STACK_LINE(701)
				Dynamic a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(701)
				a = Dynamic( Array_obj<Dynamic>::__new() );
				HX_STACK_LINE(701)
				hx::IndexRef((a).mPtr,(__this->_h->_size - (int)1)) = null();
				HX_STACK_LINE(701)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(701)
	Dynamic a = _Function_1_1::Block(this);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(702)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(703)
	{
		HX_STACK_LINE(703)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(703)
		while(((_g1 < _g))){
			HX_STACK_LINE(703)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(705)
			if (((this->_keys->__get(i) != (int)-2147483647))){
				HX_STACK_LINE(706)
				hx::IndexRef((a).mPtr,(j)++) = this->_vals->__GetItem(i);
			}
		}
	}
	HX_STACK_LINE(708)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,toArray,return )

int IntHashTable_obj::size( ){
	HX_STACK_PUSH("IntHashTable::size","de/polygonal/ds/IntHashTable.hx",692);
	HX_STACK_THIS(this);
	HX_STACK_LINE(692)
	return this->_h->_size;
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,size,return )

bool IntHashTable_obj::isEmpty( ){
	HX_STACK_PUSH("IntHashTable::isEmpty","de/polygonal/ds/IntHashTable.hx",683);
	HX_STACK_THIS(this);
	HX_STACK_LINE(683)
	return (this->_h->_size == (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,isEmpty,return )

::de::polygonal::ds::Itr IntHashTable_obj::iterator( ){
	HX_STACK_PUSH("IntHashTable::iterator","de/polygonal/ds/IntHashTable.hx",665);
	HX_STACK_THIS(this);
	HX_STACK_LINE(665)
	if ((this->reuseIterator)){
		HX_STACK_LINE(668)
		if (((this->_iterator == null()))){
			HX_STACK_LINE(669)
			this->_iterator = ::de::polygonal::ds::IntHashTableIterator_obj::__new(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(671)
			::de::polygonal::ds::IntHashTableIterator _this = this->_iterator;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(671)
			_this->_vals = _this->_f->__Field(HX_CSTRING("_vals"),true);
			HX_STACK_LINE(671)
			_this->_keys = _this->_f->__Field(HX_CSTRING("_keys"),true);
			HX_STACK_LINE(671)
			_this->_i = (int)-1;
			HX_STACK_LINE(671)
			_this->_s = _this->_f->__Field(HX_CSTRING("_h"),true)->__Field(HX_CSTRING("_capacity"),true);
			HX_STACK_LINE(671)
			_this;
		}
		HX_STACK_LINE(672)
		return this->_iterator;
	}
	else{
		HX_STACK_LINE(675)
		return ::de::polygonal::ds::IntHashTableIterator_obj::__new(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(665)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,iterator,return )

Void IntHashTable_obj::clear( hx::Null< bool >  __o_purge){
bool purge = __o_purge.Default(false);
	HX_STACK_PUSH("IntHashTable::clear","de/polygonal/ds/IntHashTable.hx",639);
	HX_STACK_THIS(this);
	HX_STACK_ARG(purge,"purge");
{
		HX_STACK_LINE(640)
		this->_h->clear(purge);
		HX_STACK_LINE(641)
		{
			HX_STACK_LINE(641)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(641)
			while(((_g1 < _g))){
				HX_STACK_LINE(641)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(641)
				this->_keys[i] = (int)-2147483647;
			}
		}
		HX_STACK_LINE(643)
		if ((purge)){
			HX_STACK_LINE(645)
			while(((this->_sizeLevel > (int)0))){
				HX_STACK_LINE(645)
				(this->_sizeLevel)--;
				HX_STACK_LINE(645)
				int oldSize = (int(this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
				HX_STACK_LINE(645)
				int newSize = this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
				struct _Function_3_1{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",645);
						{
							HX_STACK_LINE(645)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(645)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(645)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(645)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(645)
				this->_next = _Function_3_1::Block(newSize);
				HX_STACK_LINE(645)
				{
					HX_STACK_LINE(645)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(645)
					while(((_g1 < _g))){
						HX_STACK_LINE(645)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(645)
						this->_next[i] = (i + (int)1);
					}
				}
				HX_STACK_LINE(645)
				this->_next[(newSize - (int)1)] = (int)-1;
				HX_STACK_LINE(645)
				this->_free = (int)0;
				struct _Function_3_2{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",645);
						{
							HX_STACK_LINE(645)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(645)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(645)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(645)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(645)
				Array< int > tmpKeys = _Function_3_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
				HX_STACK_LINE(645)
				{
					HX_STACK_LINE(645)
					int k = newSize;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(645)
					if (((k == (int)-1))){
						HX_STACK_LINE(645)
						k = tmpKeys->length;
					}
					HX_STACK_LINE(645)
					{
						HX_STACK_LINE(645)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(645)
						while(((_g < k))){
							HX_STACK_LINE(645)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(645)
							tmpKeys[i] = (int)-2147483647;
						}
					}
				}
				struct _Function_3_3{
					inline static Dynamic Block( int &newSize){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",645);
						{
							HX_STACK_LINE(645)
							Dynamic a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(645)
							a = Dynamic( Array_obj<Dynamic>::__new() );
							HX_STACK_LINE(645)
							hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
							HX_STACK_LINE(645)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(645)
				Dynamic tmpVals = _Function_3_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
				HX_STACK_LINE(645)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_h->iterator());  __it->hasNext(); ){
					int i = __it->next();
					{
						HX_STACK_LINE(645)
						tmpKeys[this->_free] = this->_keys->__get(i);
						HX_STACK_LINE(645)
						hx::IndexRef((tmpVals).mPtr,this->_free) = this->_vals->__GetItem(i);
						HX_STACK_LINE(645)
						this->_free = this->_next->__get(this->_free);
					}
;
				}
				HX_STACK_LINE(645)
				this->_keys = tmpKeys;
				HX_STACK_LINE(645)
				this->_vals = tmpVals;
				HX_STACK_LINE(645)
				{
					HX_STACK_LINE(645)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->_free;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(645)
					while(((_g1 < _g))){
						HX_STACK_LINE(645)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(645)
						::de::polygonal::ds::IntIntHashTable _this = this->_h;		HX_STACK_VAR(_this,"_this");
						int key = this->_keys->__get(i);		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(645)
						int i1 = _this->_hash->__get((int((key * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(645)
						if (((i1 == (int)-1))){
							HX_STACK_LINE(645)
							false;
						}
						else{
							HX_STACK_LINE(645)
							if (((_this->_data->__get(i1) == key))){
								HX_STACK_LINE(645)
								_this->_data[(i1 + (int)1)] = i;
								HX_STACK_LINE(645)
								true;
							}
							else{
								HX_STACK_LINE(645)
								i1 = _this->_data->__get((i1 + (int)2));
								HX_STACK_LINE(645)
								while(((i1 != (int)-1))){
									HX_STACK_LINE(645)
									if (((_this->_data->__get(i1) == key))){
										HX_STACK_LINE(645)
										_this->_data[(i1 + (int)1)] = i;
										HX_STACK_LINE(645)
										break;
									}
									HX_STACK_LINE(645)
									i1 = _this->_data->__get((i1 + (int)2));
								}
								HX_STACK_LINE(645)
								(i1 != (int)-1);
							}
						}
					}
				}
			}
			HX_STACK_LINE(647)
			{
				HX_STACK_LINE(647)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(647)
				while(((_g1 < _g))){
					HX_STACK_LINE(647)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(649)
					hx::IndexRef((this->_vals).mPtr,i) = null();
					HX_STACK_LINE(650)
					this->_keys[i] = (int)-2147483647;
				}
			}
		}
		HX_STACK_LINE(654)
		{
			HX_STACK_LINE(654)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (this->_h->_capacity - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(654)
			while(((_g1 < _g))){
				HX_STACK_LINE(654)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(654)
				this->_next[i] = (i + (int)1);
			}
		}
		HX_STACK_LINE(655)
		this->_next[(this->_h->_capacity - (int)1)] = (int)-1;
		HX_STACK_LINE(656)
		this->_free = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTable_obj,clear,(void))

bool IntHashTable_obj::remove( Dynamic _tmp_x){
	HX_STACK_PUSH("IntHashTable::remove","de/polygonal/ds/IntHashTable.hx",609);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_x,"_tmp_x");
	HX_STACK_LINE(610)
	Dynamic x = _tmp_x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(610)
	bool found = false;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(611)
	Array< int > tmp = Array_obj< int >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(612)
	{
		HX_STACK_LINE(612)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(612)
		while(((_g1 < _g))){
			HX_STACK_LINE(612)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(614)
			if (((this->_keys->__get(i) != (int)-2147483647))){
				HX_STACK_LINE(615)
				if (((this->_vals->__GetItem(i) == x))){
					HX_STACK_LINE(618)
					tmp->push(this->_keys->__get(i));
					HX_STACK_LINE(619)
					found = true;
				}
			}
		}
	}
	HX_STACK_LINE(624)
	if ((found)){
		HX_STACK_LINE(626)
		{
			HX_STACK_LINE(626)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(626)
			while(((_g < tmp->length))){
				HX_STACK_LINE(626)
				int key = tmp->__get(_g);		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(626)
				++(_g);
				struct _Function_4_1{
					inline static int Block( ::de::polygonal::ds::IntHashTable_obj *__this,int &key){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",626);
						{
							HX_STACK_LINE(626)
							::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(626)
							int i = _this->_hash->__get((int((key * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
							struct _Function_5_1{
								inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable _this,int &key){
									HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",626);
									{
										HX_STACK_LINE(626)
										int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(626)
										i = _this->_data->__get((i + (int)2));
										HX_STACK_LINE(626)
										while(((i != (int)-1))){
											HX_STACK_LINE(626)
											if (((_this->_data->__get(i) == key))){
												HX_STACK_LINE(626)
												v = _this->_data->__get((i + (int)1));
												HX_STACK_LINE(626)
												break;
											}
											HX_STACK_LINE(626)
											i = _this->_data->__get((i + (int)2));
										}
										HX_STACK_LINE(626)
										return v;
									}
									return null();
								}
							};
							HX_STACK_LINE(626)
							return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this->_data->__get(i) == key))) ? int(_this->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,_this,key)) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(626)
				int i = _Function_4_1::Block(this,key);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(626)
				if (((i == (int)-2147483647))){
					HX_STACK_LINE(626)
					false;
				}
				else{
					HX_STACK_LINE(626)
					this->_key0 = (int)-2147483647;
					HX_STACK_LINE(626)
					hx::IndexRef((this->_vals).mPtr,i) = null();
					HX_STACK_LINE(626)
					this->_keys[i] = (int)-2147483647;
					HX_STACK_LINE(626)
					this->_next[i] = this->_free;
					HX_STACK_LINE(626)
					this->_free = i;
					HX_STACK_LINE(626)
					bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
					HX_STACK_LINE(626)
					if (((this->_sizeLevel > (int)0))){
						HX_STACK_LINE(626)
						if ((((this->_h->_size - (int)1) == (int(this->_h->_capacity) >> int((int)2))))){
							HX_STACK_LINE(626)
							if ((this->_isResizable)){
								HX_STACK_LINE(626)
								shrink = true;
							}
						}
					}
					HX_STACK_LINE(626)
					{
						HX_STACK_LINE(626)
						::de::polygonal::ds::IntIntHashTable _this = this->_h;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(626)
						int b = (int((key * (int)73856093)) & int(_this->_mask));		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(626)
						int i1 = _this->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(626)
						if (((i1 == (int)-1))){
							HX_STACK_LINE(626)
							false;
						}
						else{
							HX_STACK_LINE(626)
							if (((key == _this->_data->__get(i1)))){
								HX_STACK_LINE(626)
								if (((_this->_data->__get((i1 + (int)2)) == (int)-1))){
									HX_STACK_LINE(626)
									_this->_hash[b] = (int)-1;
								}
								else{
									HX_STACK_LINE(626)
									_this->_hash[b] = _this->_data->__get((i1 + (int)2));
								}
								HX_STACK_LINE(626)
								int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(626)
								_this->_next[j] = _this->_free;
								HX_STACK_LINE(626)
								_this->_free = j;
								HX_STACK_LINE(626)
								_this->_data[(i1 + (int)1)] = (int)-2147483647;
								HX_STACK_LINE(626)
								_this->_data[(i1 + (int)2)] = (int)-1;
								HX_STACK_LINE(626)
								(_this->_size)--;
								HX_STACK_LINE(626)
								if (((_this->_sizeLevel > (int)0))){
									HX_STACK_LINE(626)
									if (((_this->_size == (int(_this->_capacity) >> int((int)2))))){
										HX_STACK_LINE(626)
										if ((_this->_isResizable)){
											HX_STACK_LINE(626)
											_this->_shrink();
										}
									}
								}
								HX_STACK_LINE(626)
								true;
							}
							else{
								HX_STACK_LINE(626)
								bool exists = false;		HX_STACK_VAR(exists,"exists");
								HX_STACK_LINE(626)
								int i0 = i1;		HX_STACK_VAR(i0,"i0");
								HX_STACK_LINE(626)
								i1 = _this->_data->__get((i1 + (int)2));
								HX_STACK_LINE(626)
								while(((i1 != (int)-1))){
									HX_STACK_LINE(626)
									if (((_this->_data->__get(i1) == key))){
										HX_STACK_LINE(626)
										exists = true;
										HX_STACK_LINE(626)
										break;
									}
									HX_STACK_LINE(626)
									i1 = _this->_data->__get(((i0 = i1) + (int)2));
								}
								HX_STACK_LINE(626)
								if ((exists)){
									HX_STACK_LINE(626)
									_this->_data[(i0 + (int)2)] = _this->_data->__get((i1 + (int)2));
									HX_STACK_LINE(626)
									int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(626)
									_this->_next[j] = _this->_free;
									HX_STACK_LINE(626)
									_this->_free = j;
									HX_STACK_LINE(626)
									_this->_data[(i1 + (int)1)] = (int)-2147483647;
									HX_STACK_LINE(626)
									_this->_data[(i1 + (int)2)] = (int)-1;
									HX_STACK_LINE(626)
									--(_this->_size);
									HX_STACK_LINE(626)
									if (((_this->_sizeLevel > (int)0))){
										HX_STACK_LINE(626)
										if (((_this->_size == (int(_this->_capacity) >> int((int)2))))){
											HX_STACK_LINE(626)
											if ((_this->_isResizable)){
												HX_STACK_LINE(626)
												_this->_shrink();
											}
										}
									}
									HX_STACK_LINE(626)
									true;
								}
								else{
									HX_STACK_LINE(626)
									false;
								}
							}
						}
					}
					HX_STACK_LINE(626)
					if ((shrink)){
						HX_STACK_LINE(626)
						(this->_sizeLevel)--;
						HX_STACK_LINE(626)
						int oldSize = (int(this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
						HX_STACK_LINE(626)
						int newSize = this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
						struct _Function_6_1{
							inline static Array< int > Block( int &newSize){
								HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",626);
								{
									HX_STACK_LINE(626)
									Array< int > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(626)
									a = Array_obj< int >::__new();
									HX_STACK_LINE(626)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(626)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(626)
						this->_next = _Function_6_1::Block(newSize);
						HX_STACK_LINE(626)
						{
							HX_STACK_LINE(626)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							int _g2 = (newSize - (int)1);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(626)
							while(((_g1 < _g2))){
								HX_STACK_LINE(626)
								int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(626)
								this->_next[i1] = (i1 + (int)1);
							}
						}
						HX_STACK_LINE(626)
						this->_next[(newSize - (int)1)] = (int)-1;
						HX_STACK_LINE(626)
						this->_free = (int)0;
						struct _Function_6_2{
							inline static Array< int > Block( int &newSize){
								HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",626);
								{
									HX_STACK_LINE(626)
									Array< int > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(626)
									a = Array_obj< int >::__new();
									HX_STACK_LINE(626)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(626)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(626)
						Array< int > tmpKeys = _Function_6_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
						HX_STACK_LINE(626)
						{
							HX_STACK_LINE(626)
							int k = newSize;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(626)
							if (((k == (int)-1))){
								HX_STACK_LINE(626)
								k = tmpKeys->length;
							}
							HX_STACK_LINE(626)
							{
								HX_STACK_LINE(626)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(626)
								while(((_g1 < k))){
									HX_STACK_LINE(626)
									int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(626)
									tmpKeys[i1] = (int)-2147483647;
								}
							}
						}
						struct _Function_6_3{
							inline static Dynamic Block( int &newSize){
								HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",626);
								{
									HX_STACK_LINE(626)
									Dynamic a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(626)
									a = Dynamic( Array_obj<Dynamic>::__new() );
									HX_STACK_LINE(626)
									hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
									HX_STACK_LINE(626)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(626)
						Dynamic tmpVals = _Function_6_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
						HX_STACK_LINE(626)
						for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_h->iterator());  __it->hasNext(); ){
							int i1 = __it->next();
							{
								HX_STACK_LINE(626)
								tmpKeys[this->_free] = this->_keys->__get(i1);
								HX_STACK_LINE(626)
								hx::IndexRef((tmpVals).mPtr,this->_free) = this->_vals->__GetItem(i1);
								HX_STACK_LINE(626)
								this->_free = this->_next->__get(this->_free);
							}
;
						}
						HX_STACK_LINE(626)
						this->_keys = tmpKeys;
						HX_STACK_LINE(626)
						this->_vals = tmpVals;
						HX_STACK_LINE(626)
						{
							HX_STACK_LINE(626)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							int _g2 = this->_free;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(626)
							while(((_g1 < _g2))){
								HX_STACK_LINE(626)
								int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(626)
								::de::polygonal::ds::IntIntHashTable _this = this->_h;		HX_STACK_VAR(_this,"_this");
								int key1 = this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
								HX_STACK_LINE(626)
								int i2 = _this->_hash->__get((int((key1 * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i2,"i2");
								HX_STACK_LINE(626)
								if (((i2 == (int)-1))){
									HX_STACK_LINE(626)
									false;
								}
								else{
									HX_STACK_LINE(626)
									if (((_this->_data->__get(i2) == key1))){
										HX_STACK_LINE(626)
										_this->_data[(i2 + (int)1)] = i1;
										HX_STACK_LINE(626)
										true;
									}
									else{
										HX_STACK_LINE(626)
										i2 = _this->_data->__get((i2 + (int)2));
										HX_STACK_LINE(626)
										while(((i2 != (int)-1))){
											HX_STACK_LINE(626)
											if (((_this->_data->__get(i2) == key1))){
												HX_STACK_LINE(626)
												_this->_data[(i2 + (int)1)] = i1;
												HX_STACK_LINE(626)
												break;
											}
											HX_STACK_LINE(626)
											i2 = _this->_data->__get((i2 + (int)2));
										}
										HX_STACK_LINE(626)
										(i2 != (int)-1);
									}
								}
							}
						}
					}
					HX_STACK_LINE(626)
					true;
				}
			}
		}
		HX_STACK_LINE(627)
		return true;
	}
	else{
		HX_STACK_LINE(630)
		return false;
	}
	HX_STACK_LINE(624)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTable_obj,remove,return )

bool IntHashTable_obj::contains( Dynamic _tmp_val){
	HX_STACK_PUSH("IntHashTable::contains","de/polygonal/ds/IntHashTable.hx",599);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_val,"_tmp_val");
	HX_STACK_LINE(599)
	Dynamic val = _tmp_val;		HX_STACK_VAR(val,"val");
	struct _Function_1_1{
		inline static bool Block( ::de::polygonal::ds::IntHashTable_obj *__this,Dynamic &val){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",600);
			{
				HX_STACK_LINE(600)
				bool exists = false;		HX_STACK_VAR(exists,"exists");
				HX_STACK_LINE(600)
				{
					HX_STACK_LINE(600)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = __this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(600)
					while(((_g1 < _g))){
						HX_STACK_LINE(600)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(600)
						if (((__this->_keys->__get(i) != (int)-2147483647))){
							HX_STACK_LINE(600)
							if (((__this->_vals->__GetItem(i) == val))){
								HX_STACK_LINE(600)
								exists = true;
								HX_STACK_LINE(600)
								break;
							}
						}
					}
				}
				HX_STACK_LINE(600)
				return exists;
			}
			return null();
		}
	};
	HX_STACK_LINE(599)
	return _Function_1_1::Block(this,val);
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTable_obj,contains,return )

Void IntHashTable_obj::free( ){
{
		HX_STACK_PUSH("IntHashTable::free","de/polygonal/ds/IntHashTable.hx",576);
		HX_STACK_THIS(this);
		HX_STACK_LINE(577)
		{
			HX_STACK_LINE(577)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_h->_size;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(577)
			while(((_g1 < _g))){
				HX_STACK_LINE(577)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(577)
				hx::IndexRef((this->_vals).mPtr,i) = null();
			}
		}
		HX_STACK_LINE(578)
		this->_vals = null();
		HX_STACK_LINE(585)
		this->_keys = null();
		HX_STACK_LINE(586)
		this->_next = null();
		HX_STACK_LINE(588)
		this->_h->free();
		HX_STACK_LINE(589)
		this->_h = null();
		HX_STACK_LINE(590)
		this->_iterator = null();
		HX_STACK_LINE(591)
		this->_tmpArr = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,free,(void))

::de::polygonal::ds::Itr IntHashTable_obj::keys( ){
	HX_STACK_PUSH("IntHashTable::keys","de/polygonal/ds/IntHashTable.hx",562);
	HX_STACK_THIS(this);
	HX_STACK_LINE(562)
	return this->_h->keys();
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,keys,return )

::de::polygonal::ds::Set IntHashTable_obj::toKeySet( ){
	HX_STACK_PUSH("IntHashTable::toKeySet","de/polygonal/ds/IntHashTable.hx",551);
	HX_STACK_THIS(this);
	HX_STACK_LINE(551)
	return this->_h->toKeySet();
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,toKeySet,return )

::de::polygonal::ds::Set IntHashTable_obj::toValSet( ){
	HX_STACK_PUSH("IntHashTable::toValSet","de/polygonal/ds/IntHashTable.hx",535);
	HX_STACK_THIS(this);
	HX_STACK_LINE(536)
	::de::polygonal::ds::ListSet s = ::de::polygonal::ds::ListSet_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(537)
	{
		HX_STACK_LINE(537)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(537)
		while(((_g1 < _g))){
			HX_STACK_LINE(537)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(539)
			if (((this->_keys->__get(i) != (int)-2147483647))){
				HX_STACK_LINE(540)
				s->set(this->_vals->__GetItem(i));
			}
		}
	}
	HX_STACK_LINE(543)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,toValSet,return )

bool IntHashTable_obj::clr( Dynamic _tmp_key){
	HX_STACK_PUSH("IntHashTable::clr","de/polygonal/ds/IntHashTable.hx",502);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_key,"_tmp_key");
	HX_STACK_LINE(503)
	int key = _tmp_key;		HX_STACK_VAR(key,"key");
	struct _Function_1_1{
		inline static int Block( ::de::polygonal::ds::IntHashTable_obj *__this,int &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",503);
			{
				HX_STACK_LINE(503)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(503)
				int i = _this->_hash->__get((int((key * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
				struct _Function_2_1{
					inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable _this,int &key){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",503);
						{
							HX_STACK_LINE(503)
							int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(503)
							i = _this->_data->__get((i + (int)2));
							HX_STACK_LINE(503)
							while(((i != (int)-1))){
								HX_STACK_LINE(503)
								if (((_this->_data->__get(i) == key))){
									HX_STACK_LINE(503)
									v = _this->_data->__get((i + (int)1));
									HX_STACK_LINE(503)
									break;
								}
								HX_STACK_LINE(503)
								i = _this->_data->__get((i + (int)2));
							}
							HX_STACK_LINE(503)
							return v;
						}
						return null();
					}
				};
				HX_STACK_LINE(503)
				return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this->_data->__get(i) == key))) ? int(_this->_data->__get((i + (int)1))) : int(_Function_2_1::Block(i,_this,key)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(503)
	int i = _Function_1_1::Block(this,key);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(504)
	if (((i == (int)-2147483647))){
		HX_STACK_LINE(505)
		return false;
	}
	else{
		HX_STACK_LINE(508)
		this->_key0 = (int)-2147483647;
		HX_STACK_LINE(510)
		hx::IndexRef((this->_vals).mPtr,i) = null();
		HX_STACK_LINE(511)
		this->_keys[i] = (int)-2147483647;
		HX_STACK_LINE(512)
		this->_next[i] = this->_free;
		HX_STACK_LINE(513)
		this->_free = i;
		HX_STACK_LINE(515)
		bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
		HX_STACK_LINE(517)
		if (((this->_sizeLevel > (int)0))){
			HX_STACK_LINE(518)
			if ((((this->_h->_size - (int)1) == (int(this->_h->_capacity) >> int((int)2))))){
				HX_STACK_LINE(519)
				if ((this->_isResizable)){
					HX_STACK_LINE(520)
					shrink = true;
				}
			}
		}
		HX_STACK_LINE(522)
		{
			HX_STACK_LINE(522)
			::de::polygonal::ds::IntIntHashTable _this = this->_h;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(522)
			int b = (int((key * (int)73856093)) & int(_this->_mask));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(522)
			int i1 = _this->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(522)
			if (((i1 == (int)-1))){
				HX_STACK_LINE(522)
				false;
			}
			else{
				HX_STACK_LINE(522)
				if (((key == _this->_data->__get(i1)))){
					HX_STACK_LINE(522)
					if (((_this->_data->__get((i1 + (int)2)) == (int)-1))){
						HX_STACK_LINE(522)
						_this->_hash[b] = (int)-1;
					}
					else{
						HX_STACK_LINE(522)
						_this->_hash[b] = _this->_data->__get((i1 + (int)2));
					}
					HX_STACK_LINE(522)
					int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(522)
					_this->_next[j] = _this->_free;
					HX_STACK_LINE(522)
					_this->_free = j;
					HX_STACK_LINE(522)
					_this->_data[(i1 + (int)1)] = (int)-2147483647;
					HX_STACK_LINE(522)
					_this->_data[(i1 + (int)2)] = (int)-1;
					HX_STACK_LINE(522)
					(_this->_size)--;
					HX_STACK_LINE(522)
					if (((_this->_sizeLevel > (int)0))){
						HX_STACK_LINE(522)
						if (((_this->_size == (int(_this->_capacity) >> int((int)2))))){
							HX_STACK_LINE(522)
							if ((_this->_isResizable)){
								HX_STACK_LINE(522)
								_this->_shrink();
							}
						}
					}
					HX_STACK_LINE(522)
					true;
				}
				else{
					HX_STACK_LINE(522)
					bool exists = false;		HX_STACK_VAR(exists,"exists");
					HX_STACK_LINE(522)
					int i0 = i1;		HX_STACK_VAR(i0,"i0");
					HX_STACK_LINE(522)
					i1 = _this->_data->__get((i1 + (int)2));
					HX_STACK_LINE(522)
					while(((i1 != (int)-1))){
						HX_STACK_LINE(522)
						if (((_this->_data->__get(i1) == key))){
							HX_STACK_LINE(522)
							exists = true;
							HX_STACK_LINE(522)
							break;
						}
						HX_STACK_LINE(522)
						i1 = _this->_data->__get(((i0 = i1) + (int)2));
					}
					HX_STACK_LINE(522)
					if ((exists)){
						HX_STACK_LINE(522)
						_this->_data[(i0 + (int)2)] = _this->_data->__get((i1 + (int)2));
						HX_STACK_LINE(522)
						int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(522)
						_this->_next[j] = _this->_free;
						HX_STACK_LINE(522)
						_this->_free = j;
						HX_STACK_LINE(522)
						_this->_data[(i1 + (int)1)] = (int)-2147483647;
						HX_STACK_LINE(522)
						_this->_data[(i1 + (int)2)] = (int)-1;
						HX_STACK_LINE(522)
						--(_this->_size);
						HX_STACK_LINE(522)
						if (((_this->_sizeLevel > (int)0))){
							HX_STACK_LINE(522)
							if (((_this->_size == (int(_this->_capacity) >> int((int)2))))){
								HX_STACK_LINE(522)
								if ((_this->_isResizable)){
									HX_STACK_LINE(522)
									_this->_shrink();
								}
							}
						}
						HX_STACK_LINE(522)
						true;
					}
					else{
						HX_STACK_LINE(522)
						false;
					}
				}
			}
		}
		HX_STACK_LINE(524)
		if ((shrink)){
			HX_STACK_LINE(524)
			(this->_sizeLevel)--;
			HX_STACK_LINE(524)
			int oldSize = (int(this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
			HX_STACK_LINE(524)
			int newSize = this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
			struct _Function_3_1{
				inline static Array< int > Block( int &newSize){
					HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",524);
					{
						HX_STACK_LINE(524)
						Array< int > a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(524)
						a = Array_obj< int >::__new();
						HX_STACK_LINE(524)
						a[(newSize - (int)1)] = null();
						HX_STACK_LINE(524)
						return a;
					}
					return null();
				}
			};
			HX_STACK_LINE(524)
			this->_next = _Function_3_1::Block(newSize);
			HX_STACK_LINE(524)
			{
				HX_STACK_LINE(524)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(524)
				while(((_g1 < _g))){
					HX_STACK_LINE(524)
					int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(524)
					this->_next[i1] = (i1 + (int)1);
				}
			}
			HX_STACK_LINE(524)
			this->_next[(newSize - (int)1)] = (int)-1;
			HX_STACK_LINE(524)
			this->_free = (int)0;
			struct _Function_3_2{
				inline static Array< int > Block( int &newSize){
					HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",524);
					{
						HX_STACK_LINE(524)
						Array< int > a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(524)
						a = Array_obj< int >::__new();
						HX_STACK_LINE(524)
						a[(newSize - (int)1)] = null();
						HX_STACK_LINE(524)
						return a;
					}
					return null();
				}
			};
			HX_STACK_LINE(524)
			Array< int > tmpKeys = _Function_3_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
			HX_STACK_LINE(524)
			{
				HX_STACK_LINE(524)
				int k = newSize;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(524)
				if (((k == (int)-1))){
					HX_STACK_LINE(524)
					k = tmpKeys->length;
				}
				HX_STACK_LINE(524)
				{
					HX_STACK_LINE(524)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(524)
					while(((_g < k))){
						HX_STACK_LINE(524)
						int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(524)
						tmpKeys[i1] = (int)-2147483647;
					}
				}
			}
			struct _Function_3_3{
				inline static Dynamic Block( int &newSize){
					HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",524);
					{
						HX_STACK_LINE(524)
						Dynamic a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(524)
						a = Dynamic( Array_obj<Dynamic>::__new() );
						HX_STACK_LINE(524)
						hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
						HX_STACK_LINE(524)
						return a;
					}
					return null();
				}
			};
			HX_STACK_LINE(524)
			Dynamic tmpVals = _Function_3_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
			HX_STACK_LINE(524)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_h->iterator());  __it->hasNext(); ){
				int i1 = __it->next();
				{
					HX_STACK_LINE(524)
					tmpKeys[this->_free] = this->_keys->__get(i1);
					HX_STACK_LINE(524)
					hx::IndexRef((tmpVals).mPtr,this->_free) = this->_vals->__GetItem(i1);
					HX_STACK_LINE(524)
					this->_free = this->_next->__get(this->_free);
				}
;
			}
			HX_STACK_LINE(524)
			this->_keys = tmpKeys;
			HX_STACK_LINE(524)
			this->_vals = tmpVals;
			HX_STACK_LINE(524)
			{
				HX_STACK_LINE(524)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_free;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(524)
				while(((_g1 < _g))){
					HX_STACK_LINE(524)
					int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(524)
					::de::polygonal::ds::IntIntHashTable _this = this->_h;		HX_STACK_VAR(_this,"_this");
					int key1 = this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
					HX_STACK_LINE(524)
					int i2 = _this->_hash->__get((int((key1 * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i2,"i2");
					HX_STACK_LINE(524)
					if (((i2 == (int)-1))){
						HX_STACK_LINE(524)
						false;
					}
					else{
						HX_STACK_LINE(524)
						if (((_this->_data->__get(i2) == key1))){
							HX_STACK_LINE(524)
							_this->_data[(i2 + (int)1)] = i1;
							HX_STACK_LINE(524)
							true;
						}
						else{
							HX_STACK_LINE(524)
							i2 = _this->_data->__get((i2 + (int)2));
							HX_STACK_LINE(524)
							while(((i2 != (int)-1))){
								HX_STACK_LINE(524)
								if (((_this->_data->__get(i2) == key1))){
									HX_STACK_LINE(524)
									_this->_data[(i2 + (int)1)] = i1;
									HX_STACK_LINE(524)
									break;
								}
								HX_STACK_LINE(524)
								i2 = _this->_data->__get((i2 + (int)2));
							}
							HX_STACK_LINE(524)
							(i2 != (int)-1);
						}
					}
				}
			}
		}
		HX_STACK_LINE(526)
		return true;
	}
	HX_STACK_LINE(504)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTable_obj,clr,return )

bool IntHashTable_obj::set( Dynamic _tmp_key,Dynamic _tmp_val){
	HX_STACK_PUSH("IntHashTable::set","de/polygonal/ds/IntHashTable.hx",477);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_key,"_tmp_key");
	HX_STACK_ARG(_tmp_val,"_tmp_val");
	HX_STACK_LINE(483)
	int key = _tmp_key;		HX_STACK_VAR(key,"key");
	Dynamic val = _tmp_val;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(483)
	this->_key0 = (int)-2147483647;
	HX_STACK_LINE(484)
	if (((this->_h->_size == this->_h->_capacity))){
		HX_STACK_LINE(486)
		int oldSize = this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
		HX_STACK_LINE(486)
		int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
		struct _Function_2_1{
			inline static Array< int > Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",486);
				{
					HX_STACK_LINE(486)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(486)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(486)
					a[(newSize - (int)1)] = null();
					HX_STACK_LINE(486)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(486)
		Array< int > tmp = _Function_2_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(486)
		{
			HX_STACK_LINE(486)
			Array< int > src = this->_next;		HX_STACK_VAR(src,"src");
			int max = oldSize;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(486)
			if (((max == (int)-1))){
				HX_STACK_LINE(486)
				max = src->length;
			}
			HX_STACK_LINE(486)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(486)
			{
				HX_STACK_LINE(486)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(486)
				while(((_g < max))){
					HX_STACK_LINE(486)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(486)
					tmp[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(486)
			tmp;
		}
		HX_STACK_LINE(486)
		this->_next = tmp;
		struct _Function_2_2{
			inline static Array< int > Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",486);
				{
					HX_STACK_LINE(486)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(486)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(486)
					a[(newSize - (int)1)] = null();
					HX_STACK_LINE(486)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(486)
		Array< int > tmp1 = _Function_2_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(486)
		{
			HX_STACK_LINE(486)
			Array< int > src = this->_keys;		HX_STACK_VAR(src,"src");
			int max = oldSize;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(486)
			if (((max == (int)-1))){
				HX_STACK_LINE(486)
				max = src->length;
			}
			HX_STACK_LINE(486)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(486)
			{
				HX_STACK_LINE(486)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(486)
				while(((_g < max))){
					HX_STACK_LINE(486)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(486)
					tmp1[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(486)
			tmp1;
		}
		HX_STACK_LINE(486)
		this->_keys = tmp1;
		HX_STACK_LINE(486)
		{
			HX_STACK_LINE(486)
			int _g = oldSize;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(486)
			while(((_g < newSize))){
				HX_STACK_LINE(486)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(486)
				this->_keys[i] = (int)-2147483647;
			}
		}
		HX_STACK_LINE(486)
		{
			HX_STACK_LINE(486)
			int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
			int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(486)
			while(((_g1 < _g))){
				HX_STACK_LINE(486)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(486)
				this->_next[i] = (i + (int)1);
			}
		}
		HX_STACK_LINE(486)
		this->_next[(newSize - (int)1)] = (int)-1;
		HX_STACK_LINE(486)
		this->_free = oldSize;
		struct _Function_2_3{
			inline static Dynamic Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",486);
				{
					HX_STACK_LINE(486)
					Dynamic a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(486)
					a = Dynamic( Array_obj<Dynamic>::__new() );
					HX_STACK_LINE(486)
					hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
					HX_STACK_LINE(486)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(486)
		Dynamic tmp2 = _Function_2_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(486)
		{
			HX_STACK_LINE(486)
			Dynamic src = this->_vals;		HX_STACK_VAR(src,"src");
			int max = oldSize;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(486)
			if (((max == (int)-1))){
				HX_STACK_LINE(486)
				max = src->__Field(HX_CSTRING("length"),true);
			}
			HX_STACK_LINE(486)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(486)
			{
				HX_STACK_LINE(486)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(486)
				while(((_g < max))){
					HX_STACK_LINE(486)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(486)
					hx::IndexRef((tmp2).mPtr,(j)++) = src->__GetItem(i);
				}
			}
			HX_STACK_LINE(486)
			tmp2;
		}
		HX_STACK_LINE(486)
		this->_vals = tmp2;
		HX_STACK_LINE(486)
		(this->_sizeLevel)++;
	}
	HX_STACK_LINE(488)
	{
		HX_STACK_LINE(488)
		::de::polygonal::ds::IntIntHashTable _this = this->_h;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(488)
		if (((_this->_size == _this->_capacity))){
			HX_STACK_LINE(488)
			if ((_this->_isResizable)){
				HX_STACK_LINE(488)
				_this->_expand();
			}
		}
		HX_STACK_LINE(488)
		int i = (_this->_free * (int)3);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(488)
		_this->_free = _this->_next->__get(_this->_free);
		HX_STACK_LINE(488)
		_this->_data[i] = key;
		HX_STACK_LINE(488)
		_this->_data[(i + (int)1)] = this->_free;
		HX_STACK_LINE(488)
		int b = (int((key * (int)73856093)) & int(_this->_mask));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(488)
		int j = _this->_hash->__get(b);		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(488)
		if (((j == (int)-1))){
			HX_STACK_LINE(488)
			_this->_hash[b] = i;
			HX_STACK_LINE(488)
			(_this->_size)++;
			HX_STACK_LINE(488)
			true;
		}
		else{
			HX_STACK_LINE(488)
			bool first = (_this->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
			HX_STACK_LINE(488)
			int t = _this->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(488)
			while(((t != (int)-1))){
				HX_STACK_LINE(488)
				if (((_this->_data->__get(t) == key))){
					HX_STACK_LINE(488)
					first = false;
				}
				HX_STACK_LINE(488)
				j = t;
				HX_STACK_LINE(488)
				t = _this->_data->__get((t + (int)2));
			}
			HX_STACK_LINE(488)
			_this->_data[(j + (int)2)] = i;
			HX_STACK_LINE(488)
			(_this->_size)++;
			HX_STACK_LINE(488)
			first;
		}
	}
	HX_STACK_LINE(489)
	hx::IndexRef((this->_vals).mPtr,this->_free) = val;
	HX_STACK_LINE(490)
	this->_keys[this->_free] = key;
	HX_STACK_LINE(492)
	this->_free = this->_next->__get(this->_free);
	HX_STACK_LINE(493)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(IntHashTable_obj,set,return )

int IntHashTable_obj::getAll( int key,Dynamic values){
	HX_STACK_PUSH("IntHashTable::getAll","de/polygonal/ds/IntHashTable.hx",454);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_ARG(values,"values");
	struct _Function_1_1{
		inline static int Block( ::de::polygonal::ds::IntHashTable_obj *__this,int &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",455);
			{
				HX_STACK_LINE(455)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(455)
				int i = _this->_hash->__get((int((key * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
				struct _Function_2_1{
					inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable _this,int &key){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",455);
						{
							HX_STACK_LINE(455)
							int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(455)
							i = _this->_data->__get((i + (int)2));
							HX_STACK_LINE(455)
							while(((i != (int)-1))){
								HX_STACK_LINE(455)
								if (((_this->_data->__get(i) == key))){
									HX_STACK_LINE(455)
									v = _this->_data->__get((i + (int)1));
									HX_STACK_LINE(455)
									break;
								}
								HX_STACK_LINE(455)
								i = _this->_data->__get((i + (int)2));
							}
							HX_STACK_LINE(455)
							return v;
						}
						return null();
					}
				};
				HX_STACK_LINE(455)
				return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this->_data->__get(i) == key))) ? int(_this->_data->__get((i + (int)1))) : int(_Function_2_1::Block(i,_this,key)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(455)
	int i = _Function_1_1::Block(this,key);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(456)
	if (((i == (int)-2147483647))){
		HX_STACK_LINE(457)
		return (int)0;
	}
	else{
		HX_STACK_LINE(460)
		int c = this->_h->getAll(key,this->_tmpArr);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(461)
		{
			HX_STACK_LINE(461)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(461)
			while(((_g < c))){
				HX_STACK_LINE(461)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(461)
				hx::IndexRef((values).mPtr,i1) = this->_vals->__GetItem(this->_tmpArr->__get(i1));
			}
		}
		HX_STACK_LINE(462)
		return c;
	}
	HX_STACK_LINE(456)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(IntHashTable_obj,getAll,return )

Dynamic IntHashTable_obj::get( Dynamic _tmp_key){
	HX_STACK_PUSH("IntHashTable::get","de/polygonal/ds/IntHashTable.hx",441);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_key,"_tmp_key");
	HX_STACK_LINE(442)
	int key = _tmp_key;		HX_STACK_VAR(key,"key");
	struct _Function_1_1{
		inline static int Block( ::de::polygonal::ds::IntHashTable_obj *__this,int &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",442);
			{
				HX_STACK_LINE(442)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(442)
				int i = _this->_hash->__get((int((key * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
				struct _Function_2_1{
					inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable _this,int &key){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",442);
						{
							HX_STACK_LINE(442)
							int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(442)
							i = _this->_data->__get((i + (int)2));
							HX_STACK_LINE(442)
							while(((i != (int)-1))){
								HX_STACK_LINE(442)
								if (((_this->_data->__get(i) == key))){
									HX_STACK_LINE(442)
									v = _this->_data->__get((i + (int)1));
									HX_STACK_LINE(442)
									break;
								}
								HX_STACK_LINE(442)
								i = _this->_data->__get((i + (int)2));
							}
							HX_STACK_LINE(442)
							return v;
						}
						return null();
					}
				};
				HX_STACK_LINE(442)
				return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this->_data->__get(i) == key))) ? int(_this->_data->__get((i + (int)1))) : int(_Function_2_1::Block(i,_this,key)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(442)
	int i = _Function_1_1::Block(this,key);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(443)
	if (((i == (int)-2147483647))){
		HX_STACK_LINE(444)
		return null();
	}
	else{
		HX_STACK_LINE(446)
		return this->_vals->__GetItem(i);
	}
	HX_STACK_LINE(443)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTable_obj,get,return )

int IntHashTable_obj::count( int key){
	HX_STACK_PUSH("IntHashTable::count","de/polygonal/ds/IntHashTable.hx",432);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	struct _Function_1_1{
		inline static int Block( ::de::polygonal::ds::IntHashTable_obj *__this,int &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",433);
			{
				HX_STACK_LINE(433)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(433)
				int c = (int)0;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(433)
				int i = _this->_hash->__get((int((key * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
				struct _Function_2_1{
					inline static int Block( int &i,int &c,::de::polygonal::ds::IntIntHashTable _this,int &key){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",433);
						{
							HX_STACK_LINE(433)
							while(((i != (int)-1))){
								HX_STACK_LINE(433)
								if (((_this->_data->__get(i) == key))){
									HX_STACK_LINE(433)
									(c)++;
								}
								HX_STACK_LINE(433)
								i = _this->_data->__get((i + (int)2));
							}
							HX_STACK_LINE(433)
							return c;
						}
						return null();
					}
				};
				HX_STACK_LINE(433)
				return (  (((i == (int)-1))) ? int(c) : int(_Function_2_1::Block(i,c,_this,key)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(432)
	return _Function_1_1::Block(this,key);
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTable_obj,count,return )

bool IntHashTable_obj::hasKey( Dynamic _tmp_key){
	HX_STACK_PUSH("IntHashTable::hasKey","de/polygonal/ds/IntHashTable.hx",423);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_key,"_tmp_key");
	HX_STACK_LINE(423)
	int key = _tmp_key;		HX_STACK_VAR(key,"key");
	struct _Function_1_1{
		inline static bool Block( ::de::polygonal::ds::IntHashTable_obj *__this,int &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",424);
			{
				HX_STACK_LINE(424)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(424)
				int i = _this->_hash->__get((int((key * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
				struct _Function_2_1{
					inline static bool Block( int &i,::de::polygonal::ds::IntIntHashTable _this,int &key){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",424);
						{
							HX_STACK_LINE(424)
							bool exists = false;		HX_STACK_VAR(exists,"exists");
							HX_STACK_LINE(424)
							i = _this->_data->__get((i + (int)2));
							HX_STACK_LINE(424)
							while(((i != (int)-1))){
								HX_STACK_LINE(424)
								if (((_this->_data->__get(i) == key))){
									HX_STACK_LINE(424)
									exists = true;
									HX_STACK_LINE(424)
									break;
								}
								HX_STACK_LINE(424)
								i = _this->_data->__get((i + (int)2));
							}
							HX_STACK_LINE(424)
							return exists;
						}
						return null();
					}
				};
				HX_STACK_LINE(424)
				return (  (((i == (int)-1))) ? bool(false) : bool((  (((_this->_data->__get(i) == key))) ? bool(true) : bool(_Function_2_1::Block(i,_this,key)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(423)
	return _Function_1_1::Block(this,key);
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTable_obj,hasKey,return )

bool IntHashTable_obj::has( Dynamic _tmp_val){
	HX_STACK_PUSH("IntHashTable::has","de/polygonal/ds/IntHashTable.hx",402);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_val,"_tmp_val");
	HX_STACK_LINE(403)
	Dynamic val = _tmp_val;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(403)
	bool exists = false;		HX_STACK_VAR(exists,"exists");
	HX_STACK_LINE(404)
	{
		HX_STACK_LINE(404)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(404)
		while(((_g1 < _g))){
			HX_STACK_LINE(404)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(406)
			if (((this->_keys->__get(i) != (int)-2147483647))){
				HX_STACK_LINE(407)
				if (((this->_vals->__GetItem(i) == val))){
					HX_STACK_LINE(410)
					exists = true;
					HX_STACK_LINE(411)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(415)
	return exists;
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTable_obj,has,return )

::String IntHashTable_obj::toString( ){
	HX_STACK_PUSH("IntHashTable::toString","de/polygonal/ds/IntHashTable.hx",373);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Float Block( ::de::polygonal::ds::IntHashTable_obj *__this){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",374);
			{
				HX_STACK_LINE(374)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(374)
				return (Float(_this->_size) / Float(((_this->_mask + (int)1))));
			}
			return null();
		}
	};
	HX_STACK_LINE(374)
	::String s = ::de::polygonal::Printf_obj::format(HX_CSTRING("{ IntHashTable size/capacity: %d/%d, load factor: %.2f }"),Dynamic( Array_obj<Dynamic>::__new().Add(this->_h->_size).Add(this->_h->_capacity).Add(_Function_1_1::Block(this))));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(375)
	if (((this->_h->_size == (int)0))){
		HX_STACK_LINE(375)
		return s;
	}
	HX_STACK_LINE(376)
	hx::AddEq(s,HX_CSTRING("\n[\n"));
	HX_STACK_LINE(378)
	Float max = 0.;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(379)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->keys());  __it->hasNext(); ){
		int key = __it->next();
		max = ::Math_obj::max(max,key);
	}
	HX_STACK_LINE(380)
	int i = (int)1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(381)
	while(((max != (int)0))){
		HX_STACK_LINE(383)
		(i)++;
		HX_STACK_LINE(384)
		max = ::Std_obj::_int((Float(max) / Float((int)10)));
	}
	struct _Function_1_2{
		inline static int Block( ::de::polygonal::ds::IntHashTable_obj *__this,int &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",388);
			{
				HX_STACK_LINE(388)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(388)
				int b = (int((key * (int)73856093)) & int(_this->_mask));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(388)
				int i1 = _this->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
				struct _Function_2_1{
					inline static int Block( int &i1,int &b,::de::polygonal::ds::IntIntHashTable _this,int &key){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",388);
						{
							HX_STACK_LINE(388)
							int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(388)
							int first = i1;		HX_STACK_VAR(first,"first");
							int i0 = first;		HX_STACK_VAR(i0,"i0");
							HX_STACK_LINE(388)
							i1 = _this->_data->__get((i1 + (int)2));
							HX_STACK_LINE(388)
							while(((i1 != (int)-1))){
								HX_STACK_LINE(388)
								if (((_this->_data->__get(i1) == key))){
									HX_STACK_LINE(388)
									v = _this->_data->__get((i1 + (int)1));
									HX_STACK_LINE(388)
									_this->_data[(i0 + (int)2)] = _this->_data->__get((i1 + (int)2));
									HX_STACK_LINE(388)
									_this->_data[(i1 + (int)2)] = first;
									HX_STACK_LINE(388)
									_this->_hash[b] = i1;
									HX_STACK_LINE(388)
									break;
								}
								HX_STACK_LINE(388)
								i1 = _this->_data->__get(((i0 = i1) + (int)2));
							}
							HX_STACK_LINE(388)
							return v;
						}
						return null();
					}
				};
				HX_STACK_LINE(388)
				return (  (((i1 == (int)-1))) ? int((int)-2147483647) : int((  (((_this->_data->__get(i1) == key))) ? int(_this->_data->__get((i1 + (int)1))) : int(_Function_2_1::Block(i1,b,_this,key)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(387)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->keys());  __it->hasNext(); ){
		int key = __it->next();
		hx::AddEq(s,::de::polygonal::Printf_obj::format(((HX_CSTRING("  %- ") + i) + HX_CSTRING("d -> %s\n")),Dynamic( Array_obj<Dynamic>::__new().Add(key).Add(::Std_obj::string(this->_vals->__GetItem(_Function_1_2::Block(this,key)))))));
	}
	HX_STACK_LINE(389)
	hx::AddEq(s,HX_CSTRING("]"));
	HX_STACK_LINE(390)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,toString,return )

::de::polygonal::ds::DA IntHashTable_obj::toKeyDA( ){
	HX_STACK_PUSH("IntHashTable::toKeyDA","de/polygonal/ds/IntHashTable.hx",334);
	HX_STACK_THIS(this);
	HX_STACK_LINE(334)
	return this->_h->toKeyDA();
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,toKeyDA,return )

Array< int > IntHashTable_obj::toKeyArray( ){
	HX_STACK_PUSH("IntHashTable::toKeyArray","de/polygonal/ds/IntHashTable.hx",325);
	HX_STACK_THIS(this);
	HX_STACK_LINE(325)
	return this->_h->toKeyArray();
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,toKeyArray,return )

bool IntHashTable_obj::remap( Dynamic _tmp_key,Dynamic _tmp_val){
	HX_STACK_PUSH("IntHashTable::remap","de/polygonal/ds/IntHashTable.hx",309);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_key,"_tmp_key");
	HX_STACK_ARG(_tmp_val,"_tmp_val");
	HX_STACK_LINE(310)
	int key = _tmp_key;		HX_STACK_VAR(key,"key");
	Dynamic val = _tmp_val;		HX_STACK_VAR(val,"val");
	struct _Function_1_1{
		inline static int Block( ::de::polygonal::ds::IntHashTable_obj *__this,int &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",310);
			{
				HX_STACK_LINE(310)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(310)
				int i = _this->_hash->__get((int((key * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
				struct _Function_2_1{
					inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable _this,int &key){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",310);
						{
							HX_STACK_LINE(310)
							int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(310)
							i = _this->_data->__get((i + (int)2));
							HX_STACK_LINE(310)
							while(((i != (int)-1))){
								HX_STACK_LINE(310)
								if (((_this->_data->__get(i) == key))){
									HX_STACK_LINE(310)
									v = _this->_data->__get((i + (int)1));
									HX_STACK_LINE(310)
									break;
								}
								HX_STACK_LINE(310)
								i = _this->_data->__get((i + (int)2));
							}
							HX_STACK_LINE(310)
							return v;
						}
						return null();
					}
				};
				HX_STACK_LINE(310)
				return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this->_data->__get(i) == key))) ? int(_this->_data->__get((i + (int)1))) : int(_Function_2_1::Block(i,_this,key)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(310)
	int i = _Function_1_1::Block(this,key);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(311)
	if (((i != (int)-2147483647))){
		HX_STACK_LINE(313)
		hx::IndexRef((this->_vals).mPtr,i) = val;
		HX_STACK_LINE(314)
		return true;
	}
	else{
		HX_STACK_LINE(317)
		return false;
	}
	HX_STACK_LINE(311)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(IntHashTable_obj,remap,return )

Void IntHashTable_obj::rehash( int slotCount){
{
		HX_STACK_PUSH("IntHashTable::rehash","de/polygonal/ds/IntHashTable.hx",299);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slotCount,"slotCount");
		HX_STACK_LINE(299)
		this->_h->rehash(slotCount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTable_obj,rehash,(void))

bool IntHashTable_obj::setIfAbsent( int key,Dynamic val){
	HX_STACK_PUSH("IntHashTable::setIfAbsent","de/polygonal/ds/IntHashTable.hx",253);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(253)
	if (((this->_h->_size == this->_h->_capacity))){
		struct _Function_2_1{
			inline static bool Block( ::de::polygonal::ds::IntHashTable_obj *__this,int &key){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",260);
				{
					HX_STACK_LINE(260)
					::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
					int val1 = __this->_free;		HX_STACK_VAR(val1,"val1");
					HX_STACK_LINE(260)
					int b = (int((key * (int)73856093)) & int(_this->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(260)
					int j = _this->_hash->__get(b);		HX_STACK_VAR(j,"j");
					struct _Function_3_1{
						inline static bool Block( int &b,int &val1,::de::polygonal::ds::IntIntHashTable _this,int &key){
							HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",260);
							{
								HX_STACK_LINE(260)
								if (((_this->_size == _this->_capacity))){
									HX_STACK_LINE(260)
									if ((_this->_isResizable)){
										HX_STACK_LINE(260)
										_this->_expand();
									}
								}
								HX_STACK_LINE(260)
								int i = (_this->_free * (int)3);		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(260)
								_this->_free = _this->_next->__get(_this->_free);
								HX_STACK_LINE(260)
								_this->_hash[b] = i;
								HX_STACK_LINE(260)
								_this->_data[i] = key;
								HX_STACK_LINE(260)
								_this->_data[(i + (int)1)] = val1;
								HX_STACK_LINE(260)
								(_this->_size)++;
								HX_STACK_LINE(260)
								return true;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static bool Block( int &j,int &val1,::de::polygonal::ds::IntIntHashTable _this,int &key){
							HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",260);
							{
								HX_STACK_LINE(260)
								int t = _this->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(260)
								while(((t != (int)-1))){
									HX_STACK_LINE(260)
									if (((_this->_data->__get(t) == key))){
										HX_STACK_LINE(260)
										j = (int)-1;
										HX_STACK_LINE(260)
										break;
									}
									HX_STACK_LINE(260)
									t = _this->_data->__get(((j = t) + (int)2));
								}
								struct _Function_4_1{
									inline static bool Block( int &j,int &val1,::de::polygonal::ds::IntIntHashTable _this,int &key){
										HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",260);
										{
											HX_STACK_LINE(260)
											if (((_this->_size == _this->_capacity))){
												HX_STACK_LINE(260)
												if ((_this->_isResizable)){
													HX_STACK_LINE(260)
													_this->_expand();
												}
											}
											HX_STACK_LINE(260)
											int i = (_this->_free * (int)3);		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(260)
											_this->_free = _this->_next->__get(_this->_free);
											HX_STACK_LINE(260)
											_this->_data[(j + (int)2)] = i;
											HX_STACK_LINE(260)
											_this->_data[i] = key;
											HX_STACK_LINE(260)
											_this->_data[(i + (int)1)] = val1;
											HX_STACK_LINE(260)
											(_this->_size)++;
											HX_STACK_LINE(260)
											return true;
										}
										return null();
									}
								};
								HX_STACK_LINE(260)
								return (  (((j == (int)-1))) ? bool(false) : bool(_Function_4_1::Block(j,val1,_this,key)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(260)
					return (  (((j == (int)-1))) ? bool(_Function_3_1::Block(b,val1,_this,key)) : bool((  (((_this->_data->__get(j) == key))) ? bool(false) : bool(_Function_3_2::Block(j,val1,_this,key)) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(259)
		if ((_Function_2_1::Block(this,key))){
			HX_STACK_LINE(262)
			this->_key0 = (int)-2147483647;
			HX_STACK_LINE(264)
			{
				HX_STACK_LINE(264)
				int oldSize = (int(this->_h->_capacity) >> int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
				HX_STACK_LINE(264)
				int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
				struct _Function_4_1{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",264);
						{
							HX_STACK_LINE(264)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(264)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(264)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(264)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(264)
				Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(264)
				{
					HX_STACK_LINE(264)
					Array< int > src = this->_next;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(264)
					if (((max == (int)-1))){
						HX_STACK_LINE(264)
						max = src->length;
					}
					HX_STACK_LINE(264)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(264)
						while(((_g < max))){
							HX_STACK_LINE(264)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(264)
							tmp[(j)++] = src->__get(i);
						}
					}
					HX_STACK_LINE(264)
					tmp;
				}
				HX_STACK_LINE(264)
				this->_next = tmp;
				struct _Function_4_2{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",264);
						{
							HX_STACK_LINE(264)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(264)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(264)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(264)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(264)
				Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(264)
				{
					HX_STACK_LINE(264)
					Array< int > src = this->_keys;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(264)
					if (((max == (int)-1))){
						HX_STACK_LINE(264)
						max = src->length;
					}
					HX_STACK_LINE(264)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(264)
						while(((_g < max))){
							HX_STACK_LINE(264)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(264)
							tmp1[(j)++] = src->__get(i);
						}
					}
					HX_STACK_LINE(264)
					tmp1;
				}
				HX_STACK_LINE(264)
				this->_keys = tmp1;
				HX_STACK_LINE(264)
				{
					HX_STACK_LINE(264)
					int _g = oldSize;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(264)
					while(((_g < newSize))){
						HX_STACK_LINE(264)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(264)
						this->_keys[i] = (int)-2147483647;
					}
				}
				HX_STACK_LINE(264)
				{
					HX_STACK_LINE(264)
					int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
					int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(264)
					while(((_g1 < _g))){
						HX_STACK_LINE(264)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(264)
						this->_next[i] = (i + (int)1);
					}
				}
				HX_STACK_LINE(264)
				this->_next[(newSize - (int)1)] = (int)-1;
				HX_STACK_LINE(264)
				this->_free = oldSize;
				struct _Function_4_3{
					inline static Dynamic Block( int &newSize){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",264);
						{
							HX_STACK_LINE(264)
							Dynamic a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(264)
							a = Dynamic( Array_obj<Dynamic>::__new() );
							HX_STACK_LINE(264)
							hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
							HX_STACK_LINE(264)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(264)
				Dynamic tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(264)
				{
					HX_STACK_LINE(264)
					Dynamic src = this->_vals;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(264)
					if (((max == (int)-1))){
						HX_STACK_LINE(264)
						max = src->__Field(HX_CSTRING("length"),true);
					}
					HX_STACK_LINE(264)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(264)
					{
						HX_STACK_LINE(264)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(264)
						while(((_g < max))){
							HX_STACK_LINE(264)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(264)
							hx::IndexRef((tmp2).mPtr,(j)++) = src->__GetItem(i);
						}
					}
					HX_STACK_LINE(264)
					tmp2;
				}
				HX_STACK_LINE(264)
				this->_vals = tmp2;
				HX_STACK_LINE(264)
				(this->_sizeLevel)++;
			}
			HX_STACK_LINE(266)
			hx::IndexRef((this->_vals).mPtr,this->_free) = val;
			HX_STACK_LINE(267)
			this->_keys[this->_free] = key;
			HX_STACK_LINE(268)
			this->_free = this->_next->__get(this->_free);
			HX_STACK_LINE(270)
			return true;
		}
		else{
			HX_STACK_LINE(273)
			return false;
		}
	}
	else{
		struct _Function_2_1{
			inline static bool Block( ::de::polygonal::ds::IntHashTable_obj *__this,int &key){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",277);
				{
					HX_STACK_LINE(277)
					::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
					int val1 = __this->_free;		HX_STACK_VAR(val1,"val1");
					HX_STACK_LINE(277)
					int b = (int((key * (int)73856093)) & int(_this->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(277)
					int j = _this->_hash->__get(b);		HX_STACK_VAR(j,"j");
					struct _Function_3_1{
						inline static bool Block( int &b,int &val1,::de::polygonal::ds::IntIntHashTable _this,int &key){
							HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",277);
							{
								HX_STACK_LINE(277)
								if (((_this->_size == _this->_capacity))){
									HX_STACK_LINE(277)
									if ((_this->_isResizable)){
										HX_STACK_LINE(277)
										_this->_expand();
									}
								}
								HX_STACK_LINE(277)
								int i = (_this->_free * (int)3);		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(277)
								_this->_free = _this->_next->__get(_this->_free);
								HX_STACK_LINE(277)
								_this->_hash[b] = i;
								HX_STACK_LINE(277)
								_this->_data[i] = key;
								HX_STACK_LINE(277)
								_this->_data[(i + (int)1)] = val1;
								HX_STACK_LINE(277)
								(_this->_size)++;
								HX_STACK_LINE(277)
								return true;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static bool Block( int &j,int &val1,::de::polygonal::ds::IntIntHashTable _this,int &key){
							HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",277);
							{
								HX_STACK_LINE(277)
								int t = _this->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(277)
								while(((t != (int)-1))){
									HX_STACK_LINE(277)
									if (((_this->_data->__get(t) == key))){
										HX_STACK_LINE(277)
										j = (int)-1;
										HX_STACK_LINE(277)
										break;
									}
									HX_STACK_LINE(277)
									t = _this->_data->__get(((j = t) + (int)2));
								}
								struct _Function_4_1{
									inline static bool Block( int &j,int &val1,::de::polygonal::ds::IntIntHashTable _this,int &key){
										HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",277);
										{
											HX_STACK_LINE(277)
											if (((_this->_size == _this->_capacity))){
												HX_STACK_LINE(277)
												if ((_this->_isResizable)){
													HX_STACK_LINE(277)
													_this->_expand();
												}
											}
											HX_STACK_LINE(277)
											int i = (_this->_free * (int)3);		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(277)
											_this->_free = _this->_next->__get(_this->_free);
											HX_STACK_LINE(277)
											_this->_data[(j + (int)2)] = i;
											HX_STACK_LINE(277)
											_this->_data[i] = key;
											HX_STACK_LINE(277)
											_this->_data[(i + (int)1)] = val1;
											HX_STACK_LINE(277)
											(_this->_size)++;
											HX_STACK_LINE(277)
											return true;
										}
										return null();
									}
								};
								HX_STACK_LINE(277)
								return (  (((j == (int)-1))) ? bool(false) : bool(_Function_4_1::Block(j,val1,_this,key)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(277)
					return (  (((j == (int)-1))) ? bool(_Function_3_1::Block(b,val1,_this,key)) : bool((  (((_this->_data->__get(j) == key))) ? bool(false) : bool(_Function_3_2::Block(j,val1,_this,key)) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(276)
		if ((_Function_2_1::Block(this,key))){
			HX_STACK_LINE(279)
			this->_key0 = (int)-2147483647;
			HX_STACK_LINE(281)
			hx::IndexRef((this->_vals).mPtr,this->_free) = val;
			HX_STACK_LINE(282)
			this->_keys[this->_free] = key;
			HX_STACK_LINE(283)
			this->_free = this->_next->__get(this->_free);
			HX_STACK_LINE(285)
			return true;
		}
		else{
			HX_STACK_LINE(288)
			return false;
		}
	}
	HX_STACK_LINE(253)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(IntHashTable_obj,setIfAbsent,return )

Dynamic IntHashTable_obj::getFront( int key){
	HX_STACK_PUSH("IntHashTable::getFront","de/polygonal/ds/IntHashTable.hx",229);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(229)
	if (((this->_key0 == key))){
		HX_STACK_LINE(231)
		return this->_vals->__GetItem(this->_i0);
	}
	else{
		struct _Function_2_1{
			inline static int Block( ::de::polygonal::ds::IntHashTable_obj *__this,int &key){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",234);
				{
					HX_STACK_LINE(234)
					::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(234)
					int b = (int((key * (int)73856093)) & int(_this->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(234)
					int i = _this->_hash->__get(b);		HX_STACK_VAR(i,"i");
					struct _Function_3_1{
						inline static int Block( int &i,int &b,::de::polygonal::ds::IntIntHashTable _this,int &key){
							HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",234);
							{
								HX_STACK_LINE(234)
								int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(234)
								int first = i;		HX_STACK_VAR(first,"first");
								int i0 = first;		HX_STACK_VAR(i0,"i0");
								HX_STACK_LINE(234)
								i = _this->_data->__get((i + (int)2));
								HX_STACK_LINE(234)
								while(((i != (int)-1))){
									HX_STACK_LINE(234)
									if (((_this->_data->__get(i) == key))){
										HX_STACK_LINE(234)
										v = _this->_data->__get((i + (int)1));
										HX_STACK_LINE(234)
										_this->_data[(i0 + (int)2)] = _this->_data->__get((i + (int)2));
										HX_STACK_LINE(234)
										_this->_data[(i + (int)2)] = first;
										HX_STACK_LINE(234)
										_this->_hash[b] = i;
										HX_STACK_LINE(234)
										break;
									}
									HX_STACK_LINE(234)
									i = _this->_data->__get(((i0 = i) + (int)2));
								}
								HX_STACK_LINE(234)
								return v;
							}
							return null();
						}
					};
					HX_STACK_LINE(234)
					return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this->_data->__get(i) == key))) ? int(_this->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,b,_this,key)) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(234)
		int i = _Function_2_1::Block(this,key);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(235)
		if (((i == (int)-2147483647))){
			HX_STACK_LINE(236)
			return null();
		}
		else{
			HX_STACK_LINE(239)
			this->_key0 = key;
			HX_STACK_LINE(240)
			return this->_vals->__GetItem(this->_i0 = i);
		}
	}
	HX_STACK_LINE(229)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntHashTable_obj,getFront,return )

int IntHashTable_obj::getCollisionCount( ){
	HX_STACK_PUSH("IntHashTable::getCollisionCount","de/polygonal/ds/IntHashTable.hx",219);
	HX_STACK_THIS(this);
	HX_STACK_LINE(219)
	return this->_h->getCollisionCount();
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,getCollisionCount,return )

int IntHashTable_obj::getCapacity( ){
	HX_STACK_PUSH("IntHashTable::getCapacity","de/polygonal/ds/IntHashTable.hx",210);
	HX_STACK_THIS(this);
	HX_STACK_LINE(210)
	return this->_h->_capacity;
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,getCapacity,return )

int IntHashTable_obj::getSlotCount( ){
	HX_STACK_PUSH("IntHashTable::getSlotCount","de/polygonal/ds/IntHashTable.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_LINE(200)
	return (this->_h->_mask + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,getSlotCount,return )

Float IntHashTable_obj::getLoadFactor( ){
	HX_STACK_PUSH("IntHashTable::getLoadFactor","de/polygonal/ds/IntHashTable.hx",192);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Float Block( ::de::polygonal::ds::IntHashTable_obj *__this){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/IntHashTable.hx",193);
			{
				HX_STACK_LINE(193)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(193)
				return (Float(_this->_size) / Float(((_this->_mask + (int)1))));
			}
			return null();
		}
	};
	HX_STACK_LINE(192)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(IntHashTable_obj,getLoadFactor,return )


IntHashTable_obj::IntHashTable_obj()
{
}

void IntHashTable_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntHashTable);
	HX_MARK_MEMBER_NAME(_tmpArr,"_tmpArr");
	HX_MARK_MEMBER_NAME(_iterator,"_iterator");
	HX_MARK_MEMBER_NAME(_isResizable,"_isResizable");
	HX_MARK_MEMBER_NAME(_sizeLevel,"_sizeLevel");
	HX_MARK_MEMBER_NAME(_i0,"_i0");
	HX_MARK_MEMBER_NAME(_key0,"_key0");
	HX_MARK_MEMBER_NAME(_free,"_free");
	HX_MARK_MEMBER_NAME(_keys,"_keys");
	HX_MARK_MEMBER_NAME(_next,"_next");
	HX_MARK_MEMBER_NAME(_vals,"_vals");
	HX_MARK_MEMBER_NAME(_h,"_h");
	HX_MARK_MEMBER_NAME(reuseIterator,"reuseIterator");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_END_CLASS();
}

void IntHashTable_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tmpArr,"_tmpArr");
	HX_VISIT_MEMBER_NAME(_iterator,"_iterator");
	HX_VISIT_MEMBER_NAME(_isResizable,"_isResizable");
	HX_VISIT_MEMBER_NAME(_sizeLevel,"_sizeLevel");
	HX_VISIT_MEMBER_NAME(_i0,"_i0");
	HX_VISIT_MEMBER_NAME(_key0,"_key0");
	HX_VISIT_MEMBER_NAME(_free,"_free");
	HX_VISIT_MEMBER_NAME(_keys,"_keys");
	HX_VISIT_MEMBER_NAME(_next,"_next");
	HX_VISIT_MEMBER_NAME(_vals,"_vals");
	HX_VISIT_MEMBER_NAME(_h,"_h");
	HX_VISIT_MEMBER_NAME(reuseIterator,"reuseIterator");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(key,"key");
}

Dynamic IntHashTable_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_h") ) { return _h; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"clr") ) { return clr_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"_i0") ) { return _i0; }
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
		if (HX_FIELD_EQ(inName,"_key0") ) { return _key0; }
		if (HX_FIELD_EQ(inName,"_free") ) { return _free; }
		if (HX_FIELD_EQ(inName,"_keys") ) { return _keys; }
		if (HX_FIELD_EQ(inName,"_next") ) { return _next; }
		if (HX_FIELD_EQ(inName,"_vals") ) { return _vals; }
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
		if (HX_FIELD_EQ(inName,"_tmpArr") ) { return _tmpArr; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__hasKey") ) { return __hasKey_dyn(); }
		if (HX_FIELD_EQ(inName,"__clrKey") ) { return __clrKey_dyn(); }
		if (HX_FIELD_EQ(inName,"__setKey") ) { return __setKey_dyn(); }
		if (HX_FIELD_EQ(inName,"__getKey") ) { return __getKey_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"toKeySet") ) { return toKeySet_dyn(); }
		if (HX_FIELD_EQ(inName,"toValSet") ) { return toValSet_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"getFront") ) { return getFront_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__setNext") ) { return __setNext_dyn(); }
		if (HX_FIELD_EQ(inName,"__getNext") ) { return __getNext_dyn(); }
		if (HX_FIELD_EQ(inName,"_iterator") ) { return _iterator; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toKeyArray") ) { return toKeyArray_dyn(); }
		if (HX_FIELD_EQ(inName,"_sizeLevel") ) { return _sizeLevel; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { return _invalidate_dyn(); }
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

Dynamic IntHashTable_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_h") ) { _h=inValue.Cast< ::de::polygonal::ds::IntIntHashTable >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_i0") ) { _i0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_key0") ) { _key0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_free") ) { _free=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keys") ) { _keys=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_next") ) { _next=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vals") ) { _vals=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_tmpArr") ) { _tmpArr=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { maxSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_iterator") ) { _iterator=inValue.Cast< ::de::polygonal::ds::IntHashTableIterator >(); return inValue; }
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

void IntHashTable_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_tmpArr"));
	outFields->push(HX_CSTRING("_iterator"));
	outFields->push(HX_CSTRING("_isResizable"));
	outFields->push(HX_CSTRING("_sizeLevel"));
	outFields->push(HX_CSTRING("_i0"));
	outFields->push(HX_CSTRING("_key0"));
	outFields->push(HX_CSTRING("_free"));
	outFields->push(HX_CSTRING("_keys"));
	outFields->push(HX_CSTRING("_next"));
	outFields->push(HX_CSTRING("_vals"));
	outFields->push(HX_CSTRING("_h"));
	outFields->push(HX_CSTRING("reuseIterator"));
	outFields->push(HX_CSTRING("maxSize"));
	outFields->push(HX_CSTRING("key"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__hasKey"),
	HX_CSTRING("__clrKey"),
	HX_CSTRING("__setKey"),
	HX_CSTRING("__getKey"),
	HX_CSTRING("__setNext"),
	HX_CSTRING("__getNext"),
	HX_CSTRING("_invalidate"),
	HX_CSTRING("_shrink"),
	HX_CSTRING("_expand"),
	HX_CSTRING("clone"),
	HX_CSTRING("toArray"),
	HX_CSTRING("size"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("iterator"),
	HX_CSTRING("clear"),
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
	HX_CSTRING("remap"),
	HX_CSTRING("rehash"),
	HX_CSTRING("setIfAbsent"),
	HX_CSTRING("getFront"),
	HX_CSTRING("getCollisionCount"),
	HX_CSTRING("getCapacity"),
	HX_CSTRING("getSlotCount"),
	HX_CSTRING("getLoadFactor"),
	HX_CSTRING("_tmpArr"),
	HX_CSTRING("_iterator"),
	HX_CSTRING("_isResizable"),
	HX_CSTRING("_sizeLevel"),
	HX_CSTRING("_i0"),
	HX_CSTRING("_key0"),
	HX_CSTRING("_free"),
	HX_CSTRING("_keys"),
	HX_CSTRING("_next"),
	HX_CSTRING("_vals"),
	HX_CSTRING("_h"),
	HX_CSTRING("reuseIterator"),
	HX_CSTRING("maxSize"),
	HX_CSTRING("key"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntHashTable_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntHashTable_obj::__mClass,"__mClass");
};

Class IntHashTable_obj::__mClass;

void IntHashTable_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.IntHashTable"), hx::TCanCast< IntHashTable_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IntHashTable_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
