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
#ifndef INCLUDED_de_polygonal_ds_HashTable
#include <de/polygonal/ds/HashTable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_HashTableKeyIterator
#include <de/polygonal/ds/HashTableKeyIterator.h>
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
#ifndef INCLUDED_de_polygonal_ds_ListSet
#include <de/polygonal/ds/ListSet.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Map
#include <de/polygonal/ds/Map.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Set
#include <de/polygonal/ds/Set.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

Void HashTable_obj::__construct(int slotCount,hx::Null< int >  __o_capacity,hx::Null< bool >  __o_isResizable,hx::Null< int >  __o_maxSize)
{
HX_STACK_PUSH("HashTable::new","de/polygonal/ds/HashTable.hx",119);
int capacity = __o_capacity.Default(-1);
bool isResizable = __o_isResizable.Default(true);
int maxSize = __o_maxSize.Default(-1);
{
	HX_STACK_LINE(120)
	if (((capacity == (int)-1))){
		HX_STACK_LINE(120)
		capacity = slotCount;
	}
	HX_STACK_LINE(122)
	this->_isResizable = isResizable;
	HX_STACK_LINE(124)
	this->_h = ::de::polygonal::ds::IntIntHashTable_obj::__new(slotCount,capacity,isResizable,maxSize);
	struct _Function_1_1{
		inline static Dynamic Block( int &capacity){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",125);
			{
				HX_STACK_LINE(125)
				Dynamic a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(125)
				a = Dynamic( Array_obj<Dynamic>::__new() );
				HX_STACK_LINE(125)
				hx::IndexRef((a).mPtr,(capacity - (int)1)) = null();
				HX_STACK_LINE(125)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(125)
	this->_keys = _Function_1_1::Block(capacity);
	struct _Function_1_2{
		inline static Dynamic Block( int &capacity){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",126);
			{
				HX_STACK_LINE(126)
				Dynamic a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(126)
				a = Dynamic( Array_obj<Dynamic>::__new() );
				HX_STACK_LINE(126)
				hx::IndexRef((a).mPtr,(capacity - (int)1)) = null();
				HX_STACK_LINE(126)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(126)
	this->_vals = _Function_1_2::Block(capacity);
	struct _Function_1_3{
		inline static Array< int > Block( int &capacity){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",135);
			{
				HX_STACK_LINE(135)
				Array< int > a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(135)
				a = Array_obj< int >::__new();
				HX_STACK_LINE(135)
				a[(capacity - (int)1)] = null();
				HX_STACK_LINE(135)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(135)
	this->_next = _Function_1_3::Block(capacity);
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = (capacity - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(138)
		while(((_g1 < _g))){
			HX_STACK_LINE(138)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(138)
			this->_next[i] = (i + (int)1);
		}
	}
	HX_STACK_LINE(139)
	this->_next[(capacity - (int)1)] = (int)-1;
	HX_STACK_LINE(140)
	this->_free = (int)0;
	HX_STACK_LINE(141)
	this->_sizeLevel = (int)0;
	HX_STACK_LINE(142)
	this->_iterator = null();
	HX_STACK_LINE(143)
	this->_tmpArr = Array_obj< int >::__new();
	HX_STACK_LINE(145)
	this->key = (::de::polygonal::ds::HashKey_obj::_counter)++;
	HX_STACK_LINE(146)
	this->reuseIterator = false;
}
;
	return null();
}

HashTable_obj::~HashTable_obj() { }

Dynamic HashTable_obj::__CreateEmpty() { return  new HashTable_obj; }
hx::ObjectPtr< HashTable_obj > HashTable_obj::__new(int slotCount,hx::Null< int >  __o_capacity,hx::Null< bool >  __o_isResizable,hx::Null< int >  __o_maxSize)
{  hx::ObjectPtr< HashTable_obj > result = new HashTable_obj();
	result->__construct(slotCount,__o_capacity,__o_isResizable,__o_maxSize);
	return result;}

Dynamic HashTable_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HashTable_obj > result = new HashTable_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *HashTable_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::de::polygonal::ds::Map_obj)) return operator ::de::polygonal::ds::Map_obj *();
	if (inType==typeid( ::de::polygonal::ds::Collection_obj)) return operator ::de::polygonal::ds::Collection_obj *();
	if (inType==typeid( ::de::polygonal::ds::Hashable_obj)) return operator ::de::polygonal::ds::Hashable_obj *();
	return super::__ToInterface(inType);
}

int HashTable_obj::__key( ::de::polygonal::ds::Hashable x){
	HX_STACK_PUSH("HashTable::__key","de/polygonal/ds/HashTable.hx",856);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(856)
	return x->__Field(HX_CSTRING("key"),true);
}


HX_DEFINE_DYNAMIC_FUNC1(HashTable_obj,__key,return )

Void HashTable_obj::__setNext( int i,int x){
{
		HX_STACK_PUSH("HashTable::__setNext","de/polygonal/ds/HashTable.hx",847);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(847)
		this->_next[i] = x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HashTable_obj,__setNext,(void))

int HashTable_obj::__getNext( int i){
	HX_STACK_PUSH("HashTable::__getNext","de/polygonal/ds/HashTable.hx",839);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(839)
	return this->_next->__get(i);
}


HX_DEFINE_DYNAMIC_FUNC1(HashTable_obj,__getNext,return )

Void HashTable_obj::_shrink( ){
{
		HX_STACK_PUSH("HashTable::_shrink","de/polygonal/ds/HashTable.hx",801);
		HX_STACK_THIS(this);
		HX_STACK_LINE(802)
		(this->_sizeLevel)--;
		HX_STACK_LINE(804)
		int oldSize = (int(this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
		HX_STACK_LINE(805)
		int newSize = this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
		struct _Function_1_1{
			inline static Array< int > Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",814);
				{
					HX_STACK_LINE(814)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(814)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(814)
					a[(newSize - (int)1)] = null();
					HX_STACK_LINE(814)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(814)
		this->_next = _Function_1_1::Block(newSize);
		HX_STACK_LINE(817)
		{
			HX_STACK_LINE(817)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(817)
			while(((_g1 < _g))){
				HX_STACK_LINE(817)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(817)
				this->_next[i] = (i + (int)1);
			}
		}
		HX_STACK_LINE(818)
		this->_next[(newSize - (int)1)] = (int)-1;
		HX_STACK_LINE(819)
		this->_free = (int)0;
		struct _Function_1_2{
			inline static Dynamic Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",821);
				{
					HX_STACK_LINE(821)
					Dynamic a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(821)
					a = Dynamic( Array_obj<Dynamic>::__new() );
					HX_STACK_LINE(821)
					hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
					HX_STACK_LINE(821)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(821)
		Dynamic tmpKeys = _Function_1_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
		struct _Function_1_3{
			inline static Dynamic Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",822);
				{
					HX_STACK_LINE(822)
					Dynamic a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(822)
					a = Dynamic( Array_obj<Dynamic>::__new() );
					HX_STACK_LINE(822)
					hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
					HX_STACK_LINE(822)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(822)
		Dynamic tmpVals = _Function_1_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
		HX_STACK_LINE(824)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_h->iterator());  __it->hasNext(); ){
			int i = __it->next();
			{
				HX_STACK_LINE(826)
				hx::IndexRef((tmpKeys).mPtr,this->_free) = this->_keys->__GetItem(i);
				HX_STACK_LINE(827)
				hx::IndexRef((tmpVals).mPtr,this->_free) = this->_vals->__GetItem(i);
				HX_STACK_LINE(828)
				this->_free = this->_next->__get(this->_free);
			}
;
		}
		HX_STACK_LINE(831)
		this->_keys = tmpKeys;
		HX_STACK_LINE(832)
		this->_vals = tmpVals;
		HX_STACK_LINE(834)
		{
			HX_STACK_LINE(834)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_free;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(834)
			while(((_g1 < _g))){
				HX_STACK_LINE(834)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(835)
				::de::polygonal::ds::IntIntHashTable _this = this->_h;		HX_STACK_VAR(_this,"_this");
				int key = this->_keys->__GetItem(i)->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(835)
				int i1 = _this->_hash->__get((int((key * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(835)
				if (((i1 == (int)-1))){
					HX_STACK_LINE(835)
					false;
				}
				else{
					HX_STACK_LINE(835)
					if (((_this->_data->__get(i1) == key))){
						HX_STACK_LINE(835)
						_this->_data[(i1 + (int)1)] = i;
						HX_STACK_LINE(835)
						true;
					}
					else{
						HX_STACK_LINE(835)
						i1 = _this->_data->__get((i1 + (int)2));
						HX_STACK_LINE(835)
						while(((i1 != (int)-1))){
							HX_STACK_LINE(835)
							if (((_this->_data->__get(i1) == key))){
								HX_STACK_LINE(835)
								_this->_data[(i1 + (int)1)] = i;
								HX_STACK_LINE(835)
								break;
							}
							HX_STACK_LINE(835)
							i1 = _this->_data->__get((i1 + (int)2));
						}
						HX_STACK_LINE(835)
						(i1 != (int)-1);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,_shrink,(void))

Void HashTable_obj::_expand( int oldSize){
{
		HX_STACK_PUSH("HashTable::_expand","de/polygonal/ds/HashTable.hx",768);
		HX_STACK_THIS(this);
		HX_STACK_ARG(oldSize,"oldSize");
		HX_STACK_LINE(769)
		int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
		struct _Function_1_1{
			inline static Array< int > Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",780);
				{
					HX_STACK_LINE(780)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(780)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(780)
					a[(newSize - (int)1)] = null();
					HX_STACK_LINE(780)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(780)
		Array< int > tmp = _Function_1_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(781)
		{
			HX_STACK_LINE(781)
			Array< int > src = this->_next;		HX_STACK_VAR(src,"src");
			int max = oldSize;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(781)
			if (((max == (int)-1))){
				HX_STACK_LINE(781)
				max = src->length;
			}
			HX_STACK_LINE(781)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(781)
			{
				HX_STACK_LINE(781)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(781)
				while(((_g < max))){
					HX_STACK_LINE(781)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(781)
					tmp[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(781)
			tmp;
		}
		HX_STACK_LINE(782)
		this->_next = tmp;
		struct _Function_1_2{
			inline static Dynamic Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",785);
				{
					HX_STACK_LINE(785)
					Dynamic a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(785)
					a = Dynamic( Array_obj<Dynamic>::__new() );
					HX_STACK_LINE(785)
					hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
					HX_STACK_LINE(785)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(785)
		Dynamic tmp1 = _Function_1_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(786)
		{
			HX_STACK_LINE(786)
			Dynamic src = this->_keys;		HX_STACK_VAR(src,"src");
			int max = oldSize;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(786)
			if (((max == (int)-1))){
				HX_STACK_LINE(786)
				max = src->__Field(HX_CSTRING("length"),true);
			}
			HX_STACK_LINE(786)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(786)
			{
				HX_STACK_LINE(786)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(786)
				while(((_g < max))){
					HX_STACK_LINE(786)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(786)
					hx::IndexRef((tmp1).mPtr,(j)++) = src->__GetItem(i);
				}
			}
			HX_STACK_LINE(786)
			tmp1;
		}
		HX_STACK_LINE(787)
		this->_keys = tmp1;
		HX_STACK_LINE(789)
		{
			HX_STACK_LINE(789)
			int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
			int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(789)
			while(((_g1 < _g))){
				HX_STACK_LINE(789)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(789)
				this->_next[i] = (i + (int)1);
			}
		}
		HX_STACK_LINE(790)
		this->_next[(newSize - (int)1)] = (int)-1;
		HX_STACK_LINE(791)
		this->_free = oldSize;
		struct _Function_1_3{
			inline static Dynamic Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",793);
				{
					HX_STACK_LINE(793)
					Dynamic a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(793)
					a = Dynamic( Array_obj<Dynamic>::__new() );
					HX_STACK_LINE(793)
					hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
					HX_STACK_LINE(793)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(793)
		Dynamic tmp2 = _Function_1_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(794)
		{
			HX_STACK_LINE(794)
			Dynamic src = this->_vals;		HX_STACK_VAR(src,"src");
			int max = oldSize;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(794)
			if (((max == (int)-1))){
				HX_STACK_LINE(794)
				max = src->__Field(HX_CSTRING("length"),true);
			}
			HX_STACK_LINE(794)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(794)
			{
				HX_STACK_LINE(794)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(794)
				while(((_g < max))){
					HX_STACK_LINE(794)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(794)
					hx::IndexRef((tmp2).mPtr,(j)++) = src->__GetItem(i);
				}
			}
			HX_STACK_LINE(794)
			tmp2;
		}
		HX_STACK_LINE(795)
		this->_vals = tmp2;
		HX_STACK_LINE(797)
		(this->_sizeLevel)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HashTable_obj,_expand,(void))

::de::polygonal::ds::Collection HashTable_obj::clone( hx::Null< bool >  __o_assign,Dynamic _tmp_copier){
bool assign = __o_assign.Default(true);
	HX_STACK_PUSH("HashTable::clone","de/polygonal/ds/HashTable.hx",705);
	HX_STACK_THIS(this);
	HX_STACK_ARG(assign,"assign");
	HX_STACK_ARG(_tmp_copier,"_tmp_copier");
{
		HX_STACK_LINE(706)
		Dynamic copier = _tmp_copier;		HX_STACK_VAR(copier,"copier");
		HX_STACK_LINE(706)
		::de::polygonal::ds::HashTable c = ::Type_obj::createEmptyInstance(hx::ClassOf< ::de::polygonal::ds::HashTable >());		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(708)
		c->key = (::de::polygonal::ds::HashKey_obj::_counter)++;
		HX_STACK_LINE(709)
		c->_h = this->_h->clone(false,null());
		HX_STACK_LINE(711)
		if ((assign)){
			HX_STACK_LINE(713)
			c->_vals = Dynamic( Array_obj<Dynamic>::__new() );
			HX_STACK_LINE(714)
			{
				HX_STACK_LINE(714)
				Dynamic src = this->_vals;		HX_STACK_VAR(src,"src");
				Dynamic dst = c->_vals;		HX_STACK_VAR(dst,"dst");
				int min = (int)0;		HX_STACK_VAR(min,"min");
				int max = (int)-1;		HX_STACK_VAR(max,"max");
				HX_STACK_LINE(714)
				if (((max == (int)-1))){
					HX_STACK_LINE(714)
					max = src->__Field(HX_CSTRING("length"),true);
				}
				HX_STACK_LINE(714)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(714)
				{
					HX_STACK_LINE(714)
					int _g = min;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(714)
					while(((_g < max))){
						HX_STACK_LINE(714)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(714)
						hx::IndexRef((dst).mPtr,(j)++) = src->__GetItem(i);
					}
				}
				HX_STACK_LINE(714)
				dst;
			}
		}
		else{
			struct _Function_2_1{
				inline static Dynamic Block( ::de::polygonal::ds::HashTable_obj *__this){
					HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",718);
					{
						HX_STACK_LINE(718)
						Dynamic a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(718)
						a = Dynamic( Array_obj<Dynamic>::__new() );
						HX_STACK_LINE(718)
						hx::IndexRef((a).mPtr,(__this->_h->_capacity - (int)1)) = null();
						HX_STACK_LINE(718)
						return a;
					}
					return null();
				}
			};
			HX_STACK_LINE(718)
			Dynamic tmp = _Function_2_1::Block(this);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(719)
			if (((copier != null()))){
				HX_STACK_LINE(721)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(721)
				while(((_g1 < _g))){
					HX_STACK_LINE(721)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(723)
					if (((this->_keys->__GetItem(i) != null()))){
						HX_STACK_LINE(724)
						hx::IndexRef((tmp).mPtr,i) = copier(this->_vals->__GetItem(i));
					}
				}
			}
			else{
				HX_STACK_LINE(729)
				::de::polygonal::ds::Cloneable c1 = null();		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(730)
				{
					HX_STACK_LINE(730)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(730)
					while(((_g1 < _g))){
						HX_STACK_LINE(730)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(732)
						if (((this->_keys->__GetItem(i) != null()))){
							HX_STACK_LINE(738)
							c1 = this->_vals->__GetItem(i);
							HX_STACK_LINE(739)
							hx::IndexRef((tmp).mPtr,i) = c1->clone();
						}
					}
				}
			}
			HX_STACK_LINE(743)
			c->_vals = tmp;
		}
		HX_STACK_LINE(746)
		c->_sizeLevel = this->_sizeLevel;
		HX_STACK_LINE(747)
		c->_free = this->_free;
		HX_STACK_LINE(757)
		c->_next = Array_obj< int >::__new();
		HX_STACK_LINE(758)
		{
			HX_STACK_LINE(758)
			Array< int > src = this->_next;		HX_STACK_VAR(src,"src");
			Array< int > dst = c->_next;		HX_STACK_VAR(dst,"dst");
			int min = (int)0;		HX_STACK_VAR(min,"min");
			int max = (int)-1;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(758)
			if (((max == (int)-1))){
				HX_STACK_LINE(758)
				max = src->length;
			}
			HX_STACK_LINE(758)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(758)
			{
				HX_STACK_LINE(758)
				int _g = min;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(758)
				while(((_g < max))){
					HX_STACK_LINE(758)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(758)
					dst[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(758)
			dst;
		}
		HX_STACK_LINE(761)
		c->_keys = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(762)
		{
			HX_STACK_LINE(762)
			Dynamic src = this->_keys;		HX_STACK_VAR(src,"src");
			Dynamic dst = c->_keys;		HX_STACK_VAR(dst,"dst");
			int min = (int)0;		HX_STACK_VAR(min,"min");
			int max = (int)-1;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(762)
			if (((max == (int)-1))){
				HX_STACK_LINE(762)
				max = src->__Field(HX_CSTRING("length"),true);
			}
			HX_STACK_LINE(762)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(762)
			{
				HX_STACK_LINE(762)
				int _g = min;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(762)
				while(((_g < max))){
					HX_STACK_LINE(762)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(762)
					hx::IndexRef((dst).mPtr,(j)++) = src->__GetItem(i);
				}
			}
			HX_STACK_LINE(762)
			dst;
		}
		HX_STACK_LINE(764)
		return c;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(HashTable_obj,clone,return )

Dynamic HashTable_obj::toArray( ){
	HX_STACK_PUSH("HashTable::toArray","de/polygonal/ds/HashTable.hx",669);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Dynamic Block( ::de::polygonal::ds::HashTable_obj *__this){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",670);
			{
				HX_STACK_LINE(670)
				Dynamic a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(670)
				a = Dynamic( Array_obj<Dynamic>::__new() );
				HX_STACK_LINE(670)
				hx::IndexRef((a).mPtr,(__this->_h->_size - (int)1)) = null();
				HX_STACK_LINE(670)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(670)
	Dynamic a = _Function_1_1::Block(this);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(671)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(672)
	{
		HX_STACK_LINE(672)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(672)
		while(((_g1 < _g))){
			HX_STACK_LINE(672)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(674)
			if (((this->_keys->__GetItem(i) != null()))){
				HX_STACK_LINE(675)
				hx::IndexRef((a).mPtr,(j)++) = this->_vals->__GetItem(i);
			}
		}
	}
	HX_STACK_LINE(677)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,toArray,return )

int HashTable_obj::size( ){
	HX_STACK_PUSH("HashTable::size","de/polygonal/ds/HashTable.hx",661);
	HX_STACK_THIS(this);
	HX_STACK_LINE(661)
	return this->_h->_size;
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,size,return )

bool HashTable_obj::isEmpty( ){
	HX_STACK_PUSH("HashTable::isEmpty","de/polygonal/ds/HashTable.hx",652);
	HX_STACK_THIS(this);
	HX_STACK_LINE(652)
	return (this->_h->_size == (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,isEmpty,return )

::de::polygonal::ds::Itr HashTable_obj::iterator( ){
	HX_STACK_PUSH("HashTable::iterator","de/polygonal/ds/HashTable.hx",634);
	HX_STACK_THIS(this);
	HX_STACK_LINE(634)
	if ((this->reuseIterator)){
		HX_STACK_LINE(637)
		if (((this->_iterator == null()))){
			HX_STACK_LINE(638)
			this->_iterator = ::de::polygonal::ds::HashTableValIterator_obj::__new(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(640)
			::de::polygonal::ds::HashTableValIterator _this = this->_iterator;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(640)
			_this->_vals = _this->_f->__Field(HX_CSTRING("_vals"),true);
			HX_STACK_LINE(640)
			_this->_keys = _this->_f->__Field(HX_CSTRING("_keys"),true);
			HX_STACK_LINE(640)
			_this->_i = (int)-1;
			HX_STACK_LINE(640)
			_this->_s = _this->_f->__Field(HX_CSTRING("_h"),true)->__Field(HX_CSTRING("_capacity"),true);
			HX_STACK_LINE(640)
			_this;
		}
		HX_STACK_LINE(641)
		return this->_iterator;
	}
	else{
		HX_STACK_LINE(644)
		return ::de::polygonal::ds::HashTableValIterator_obj::__new(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(634)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,iterator,return )

Void HashTable_obj::clear( hx::Null< bool >  __o_purge){
bool purge = __o_purge.Default(false);
	HX_STACK_PUSH("HashTable::clear","de/polygonal/ds/HashTable.hx",608);
	HX_STACK_THIS(this);
	HX_STACK_ARG(purge,"purge");
{
		HX_STACK_LINE(609)
		this->_h->clear(purge);
		HX_STACK_LINE(610)
		{
			HX_STACK_LINE(610)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(610)
			while(((_g1 < _g))){
				HX_STACK_LINE(610)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(610)
				hx::IndexRef((this->_keys).mPtr,i) = null();
			}
		}
		HX_STACK_LINE(612)
		if ((purge)){
			HX_STACK_LINE(614)
			{
				HX_STACK_LINE(614)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(614)
				while(((_g1 < _g))){
					HX_STACK_LINE(614)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(616)
					hx::IndexRef((this->_vals).mPtr,i) = null();
					HX_STACK_LINE(617)
					hx::IndexRef((this->_keys).mPtr,i) = null();
				}
			}
			HX_STACK_LINE(620)
			while(((this->_sizeLevel > (int)0))){
				HX_STACK_LINE(620)
				(this->_sizeLevel)--;
				HX_STACK_LINE(620)
				int oldSize = (int(this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
				HX_STACK_LINE(620)
				int newSize = this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
				struct _Function_3_1{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",620);
						{
							HX_STACK_LINE(620)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(620)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(620)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(620)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(620)
				this->_next = _Function_3_1::Block(newSize);
				HX_STACK_LINE(620)
				{
					HX_STACK_LINE(620)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(620)
					while(((_g1 < _g))){
						HX_STACK_LINE(620)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(620)
						this->_next[i] = (i + (int)1);
					}
				}
				HX_STACK_LINE(620)
				this->_next[(newSize - (int)1)] = (int)-1;
				HX_STACK_LINE(620)
				this->_free = (int)0;
				struct _Function_3_2{
					inline static Dynamic Block( int &newSize){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",620);
						{
							HX_STACK_LINE(620)
							Dynamic a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(620)
							a = Dynamic( Array_obj<Dynamic>::__new() );
							HX_STACK_LINE(620)
							hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
							HX_STACK_LINE(620)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(620)
				Dynamic tmpKeys = _Function_3_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
				struct _Function_3_3{
					inline static Dynamic Block( int &newSize){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",620);
						{
							HX_STACK_LINE(620)
							Dynamic a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(620)
							a = Dynamic( Array_obj<Dynamic>::__new() );
							HX_STACK_LINE(620)
							hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
							HX_STACK_LINE(620)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(620)
				Dynamic tmpVals = _Function_3_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
				HX_STACK_LINE(620)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_h->iterator());  __it->hasNext(); ){
					int i = __it->next();
					{
						HX_STACK_LINE(620)
						hx::IndexRef((tmpKeys).mPtr,this->_free) = this->_keys->__GetItem(i);
						HX_STACK_LINE(620)
						hx::IndexRef((tmpVals).mPtr,this->_free) = this->_vals->__GetItem(i);
						HX_STACK_LINE(620)
						this->_free = this->_next->__get(this->_free);
					}
;
				}
				HX_STACK_LINE(620)
				this->_keys = tmpKeys;
				HX_STACK_LINE(620)
				this->_vals = tmpVals;
				HX_STACK_LINE(620)
				{
					HX_STACK_LINE(620)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->_free;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(620)
					while(((_g1 < _g))){
						HX_STACK_LINE(620)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(620)
						::de::polygonal::ds::IntIntHashTable _this = this->_h;		HX_STACK_VAR(_this,"_this");
						int key = this->_keys->__GetItem(i)->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(620)
						int i1 = _this->_hash->__get((int((key * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(620)
						if (((i1 == (int)-1))){
							HX_STACK_LINE(620)
							false;
						}
						else{
							HX_STACK_LINE(620)
							if (((_this->_data->__get(i1) == key))){
								HX_STACK_LINE(620)
								_this->_data[(i1 + (int)1)] = i;
								HX_STACK_LINE(620)
								true;
							}
							else{
								HX_STACK_LINE(620)
								i1 = _this->_data->__get((i1 + (int)2));
								HX_STACK_LINE(620)
								while(((i1 != (int)-1))){
									HX_STACK_LINE(620)
									if (((_this->_data->__get(i1) == key))){
										HX_STACK_LINE(620)
										_this->_data[(i1 + (int)1)] = i;
										HX_STACK_LINE(620)
										break;
									}
									HX_STACK_LINE(620)
									i1 = _this->_data->__get((i1 + (int)2));
								}
								HX_STACK_LINE(620)
								(i1 != (int)-1);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(623)
		{
			HX_STACK_LINE(623)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (this->_h->_capacity - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(623)
			while(((_g1 < _g))){
				HX_STACK_LINE(623)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(623)
				this->_next[i] = (i + (int)1);
			}
		}
		HX_STACK_LINE(624)
		this->_next[(this->_h->_capacity - (int)1)] = (int)-1;
		HX_STACK_LINE(625)
		this->_free = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HashTable_obj,clear,(void))

bool HashTable_obj::remove( Dynamic _tmp_val){
	HX_STACK_PUSH("HashTable::remove","de/polygonal/ds/HashTable.hx",578);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_val,"_tmp_val");
	HX_STACK_LINE(579)
	Dynamic val = _tmp_val;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(579)
	bool found = false;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(580)
	Dynamic tmp = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(581)
	{
		HX_STACK_LINE(581)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(581)
		while(((_g1 < _g))){
			HX_STACK_LINE(581)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(583)
			if (((this->_keys->__GetItem(i) != null()))){
				HX_STACK_LINE(584)
				if (((this->_vals->__GetItem(i) == val))){
					HX_STACK_LINE(587)
					tmp->__Field(HX_CSTRING("push"),true)(this->_keys->__GetItem(i));
					HX_STACK_LINE(588)
					found = true;
				}
			}
		}
	}
	HX_STACK_LINE(593)
	if ((found)){
		HX_STACK_LINE(595)
		{
			HX_STACK_LINE(595)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(595)
			while(((_g < tmp->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(595)
				Dynamic key = tmp->__GetItem(_g);		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(595)
				++(_g);
				struct _Function_4_1{
					inline static int Block( ::de::polygonal::ds::HashTable_obj *__this,Dynamic &key){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",595);
						{
							HX_STACK_LINE(595)
							::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
							int key1 = key->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key1,"key1");
							HX_STACK_LINE(595)
							int i = _this->_hash->__get((int((key1 * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
							struct _Function_5_1{
								inline static int Block( int &i,int &key1,::de::polygonal::ds::IntIntHashTable _this){
									HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",595);
									{
										HX_STACK_LINE(595)
										int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(595)
										i = _this->_data->__get((i + (int)2));
										HX_STACK_LINE(595)
										while(((i != (int)-1))){
											HX_STACK_LINE(595)
											if (((_this->_data->__get(i) == key1))){
												HX_STACK_LINE(595)
												v = _this->_data->__get((i + (int)1));
												HX_STACK_LINE(595)
												break;
											}
											HX_STACK_LINE(595)
											i = _this->_data->__get((i + (int)2));
										}
										HX_STACK_LINE(595)
										return v;
									}
									return null();
								}
							};
							HX_STACK_LINE(595)
							return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this->_data->__get(i) == key1))) ? int(_this->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,key1,_this)) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(595)
				int i = _Function_4_1::Block(this,key);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(595)
				if (((i == (int)-2147483647))){
					HX_STACK_LINE(595)
					false;
				}
				else{
					HX_STACK_LINE(595)
					hx::IndexRef((this->_keys).mPtr,i) = null();
					HX_STACK_LINE(595)
					this->_next[i] = this->_free;
					HX_STACK_LINE(595)
					this->_free = i;
					HX_STACK_LINE(595)
					bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
					HX_STACK_LINE(595)
					if (((this->_sizeLevel > (int)0))){
						HX_STACK_LINE(595)
						if ((((this->_h->_size - (int)1) == (int(this->_h->_capacity) >> int((int)2))))){
							HX_STACK_LINE(595)
							if ((this->_isResizable)){
								HX_STACK_LINE(595)
								shrink = true;
							}
						}
					}
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						::de::polygonal::ds::IntIntHashTable _this = this->_h;		HX_STACK_VAR(_this,"_this");
						int key1 = key->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key1,"key1");
						HX_STACK_LINE(595)
						int b = (int((key1 * (int)73856093)) & int(_this->_mask));		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(595)
						int i1 = _this->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(595)
						if (((i1 == (int)-1))){
							HX_STACK_LINE(595)
							false;
						}
						else{
							HX_STACK_LINE(595)
							if (((key1 == _this->_data->__get(i1)))){
								HX_STACK_LINE(595)
								if (((_this->_data->__get((i1 + (int)2)) == (int)-1))){
									HX_STACK_LINE(595)
									_this->_hash[b] = (int)-1;
								}
								else{
									HX_STACK_LINE(595)
									_this->_hash[b] = _this->_data->__get((i1 + (int)2));
								}
								HX_STACK_LINE(595)
								int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(595)
								_this->_next[j] = _this->_free;
								HX_STACK_LINE(595)
								_this->_free = j;
								HX_STACK_LINE(595)
								_this->_data[(i1 + (int)1)] = (int)-2147483647;
								HX_STACK_LINE(595)
								_this->_data[(i1 + (int)2)] = (int)-1;
								HX_STACK_LINE(595)
								(_this->_size)--;
								HX_STACK_LINE(595)
								if (((_this->_sizeLevel > (int)0))){
									HX_STACK_LINE(595)
									if (((_this->_size == (int(_this->_capacity) >> int((int)2))))){
										HX_STACK_LINE(595)
										if ((_this->_isResizable)){
											HX_STACK_LINE(595)
											_this->_shrink();
										}
									}
								}
								HX_STACK_LINE(595)
								true;
							}
							else{
								HX_STACK_LINE(595)
								bool exists = false;		HX_STACK_VAR(exists,"exists");
								HX_STACK_LINE(595)
								int i0 = i1;		HX_STACK_VAR(i0,"i0");
								HX_STACK_LINE(595)
								i1 = _this->_data->__get((i1 + (int)2));
								HX_STACK_LINE(595)
								while(((i1 != (int)-1))){
									HX_STACK_LINE(595)
									if (((_this->_data->__get(i1) == key1))){
										HX_STACK_LINE(595)
										exists = true;
										HX_STACK_LINE(595)
										break;
									}
									HX_STACK_LINE(595)
									i1 = _this->_data->__get(((i0 = i1) + (int)2));
								}
								HX_STACK_LINE(595)
								if ((exists)){
									HX_STACK_LINE(595)
									_this->_data[(i0 + (int)2)] = _this->_data->__get((i1 + (int)2));
									HX_STACK_LINE(595)
									int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(595)
									_this->_next[j] = _this->_free;
									HX_STACK_LINE(595)
									_this->_free = j;
									HX_STACK_LINE(595)
									_this->_data[(i1 + (int)1)] = (int)-2147483647;
									HX_STACK_LINE(595)
									_this->_data[(i1 + (int)2)] = (int)-1;
									HX_STACK_LINE(595)
									--(_this->_size);
									HX_STACK_LINE(595)
									if (((_this->_sizeLevel > (int)0))){
										HX_STACK_LINE(595)
										if (((_this->_size == (int(_this->_capacity) >> int((int)2))))){
											HX_STACK_LINE(595)
											if ((_this->_isResizable)){
												HX_STACK_LINE(595)
												_this->_shrink();
											}
										}
									}
									HX_STACK_LINE(595)
									true;
								}
								else{
									HX_STACK_LINE(595)
									false;
								}
							}
						}
					}
					HX_STACK_LINE(595)
					if ((shrink)){
						HX_STACK_LINE(595)
						(this->_sizeLevel)--;
						HX_STACK_LINE(595)
						int oldSize = (int(this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
						HX_STACK_LINE(595)
						int newSize = this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
						struct _Function_6_1{
							inline static Array< int > Block( int &newSize){
								HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",595);
								{
									HX_STACK_LINE(595)
									Array< int > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(595)
									a = Array_obj< int >::__new();
									HX_STACK_LINE(595)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(595)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(595)
						this->_next = _Function_6_1::Block(newSize);
						HX_STACK_LINE(595)
						{
							HX_STACK_LINE(595)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							int _g2 = (newSize - (int)1);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(595)
							while(((_g1 < _g2))){
								HX_STACK_LINE(595)
								int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(595)
								this->_next[i1] = (i1 + (int)1);
							}
						}
						HX_STACK_LINE(595)
						this->_next[(newSize - (int)1)] = (int)-1;
						HX_STACK_LINE(595)
						this->_free = (int)0;
						struct _Function_6_2{
							inline static Dynamic Block( int &newSize){
								HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",595);
								{
									HX_STACK_LINE(595)
									Dynamic a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(595)
									a = Dynamic( Array_obj<Dynamic>::__new() );
									HX_STACK_LINE(595)
									hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
									HX_STACK_LINE(595)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(595)
						Dynamic tmpKeys = _Function_6_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
						struct _Function_6_3{
							inline static Dynamic Block( int &newSize){
								HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",595);
								{
									HX_STACK_LINE(595)
									Dynamic a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(595)
									a = Dynamic( Array_obj<Dynamic>::__new() );
									HX_STACK_LINE(595)
									hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
									HX_STACK_LINE(595)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(595)
						Dynamic tmpVals = _Function_6_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
						HX_STACK_LINE(595)
						for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_h->iterator());  __it->hasNext(); ){
							int i1 = __it->next();
							{
								HX_STACK_LINE(595)
								hx::IndexRef((tmpKeys).mPtr,this->_free) = this->_keys->__GetItem(i1);
								HX_STACK_LINE(595)
								hx::IndexRef((tmpVals).mPtr,this->_free) = this->_vals->__GetItem(i1);
								HX_STACK_LINE(595)
								this->_free = this->_next->__get(this->_free);
							}
;
						}
						HX_STACK_LINE(595)
						this->_keys = tmpKeys;
						HX_STACK_LINE(595)
						this->_vals = tmpVals;
						HX_STACK_LINE(595)
						{
							HX_STACK_LINE(595)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							int _g2 = this->_free;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(595)
							while(((_g1 < _g2))){
								HX_STACK_LINE(595)
								int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(595)
								::de::polygonal::ds::IntIntHashTable _this = this->_h;		HX_STACK_VAR(_this,"_this");
								int key1 = this->_keys->__GetItem(i1)->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key1,"key1");
								HX_STACK_LINE(595)
								int i2 = _this->_hash->__get((int((key1 * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i2,"i2");
								HX_STACK_LINE(595)
								if (((i2 == (int)-1))){
									HX_STACK_LINE(595)
									false;
								}
								else{
									HX_STACK_LINE(595)
									if (((_this->_data->__get(i2) == key1))){
										HX_STACK_LINE(595)
										_this->_data[(i2 + (int)1)] = i1;
										HX_STACK_LINE(595)
										true;
									}
									else{
										HX_STACK_LINE(595)
										i2 = _this->_data->__get((i2 + (int)2));
										HX_STACK_LINE(595)
										while(((i2 != (int)-1))){
											HX_STACK_LINE(595)
											if (((_this->_data->__get(i2) == key1))){
												HX_STACK_LINE(595)
												_this->_data[(i2 + (int)1)] = i1;
												HX_STACK_LINE(595)
												break;
											}
											HX_STACK_LINE(595)
											i2 = _this->_data->__get((i2 + (int)2));
										}
										HX_STACK_LINE(595)
										(i2 != (int)-1);
									}
								}
							}
						}
					}
					HX_STACK_LINE(595)
					true;
				}
			}
		}
		HX_STACK_LINE(596)
		return true;
	}
	else{
		HX_STACK_LINE(599)
		return false;
	}
	HX_STACK_LINE(593)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HashTable_obj,remove,return )

bool HashTable_obj::contains( Dynamic _tmp_val){
	HX_STACK_PUSH("HashTable::contains","de/polygonal/ds/HashTable.hx",568);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_val,"_tmp_val");
	HX_STACK_LINE(568)
	Dynamic val = _tmp_val;		HX_STACK_VAR(val,"val");
	struct _Function_1_1{
		inline static bool Block( ::de::polygonal::ds::HashTable_obj *__this,Dynamic &val){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",569);
			{
				HX_STACK_LINE(569)
				bool exists = false;		HX_STACK_VAR(exists,"exists");
				HX_STACK_LINE(569)
				{
					HX_STACK_LINE(569)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = __this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(569)
					while(((_g1 < _g))){
						HX_STACK_LINE(569)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(569)
						if (((__this->_keys->__GetItem(i) != null()))){
							HX_STACK_LINE(569)
							if (((__this->_vals->__GetItem(i) == val))){
								HX_STACK_LINE(569)
								exists = true;
								HX_STACK_LINE(569)
								break;
							}
						}
					}
				}
				HX_STACK_LINE(569)
				return exists;
			}
			return null();
		}
	};
	HX_STACK_LINE(568)
	return _Function_1_1::Block(this,val);
}


HX_DEFINE_DYNAMIC_FUNC1(HashTable_obj,contains,return )

Void HashTable_obj::free( ){
{
		HX_STACK_PUSH("HashTable::free","de/polygonal/ds/HashTable.hx",543);
		HX_STACK_THIS(this);
		HX_STACK_LINE(544)
		{
			HX_STACK_LINE(544)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_h->_size;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(544)
			while(((_g1 < _g))){
				HX_STACK_LINE(544)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(546)
				hx::IndexRef((this->_vals).mPtr,i) = null();
				HX_STACK_LINE(547)
				hx::IndexRef((this->_keys).mPtr,i) = null();
			}
		}
		HX_STACK_LINE(549)
		this->_vals = null();
		HX_STACK_LINE(550)
		this->_keys = null();
		HX_STACK_LINE(555)
		this->_next = null();
		HX_STACK_LINE(557)
		this->_h->free();
		HX_STACK_LINE(558)
		this->_h = null();
		HX_STACK_LINE(559)
		this->_iterator = null();
		HX_STACK_LINE(560)
		this->_tmpArr = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,free,(void))

::de::polygonal::ds::Itr HashTable_obj::keys( ){
	HX_STACK_PUSH("HashTable::keys","de/polygonal/ds/HashTable.hx",529);
	HX_STACK_THIS(this);
	HX_STACK_LINE(529)
	return ::de::polygonal::ds::HashTableKeyIterator_obj::__new(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,keys,return )

::de::polygonal::ds::Set HashTable_obj::toKeySet( ){
	HX_STACK_PUSH("HashTable::toKeySet","de/polygonal/ds/HashTable.hx",511);
	HX_STACK_THIS(this);
	HX_STACK_LINE(512)
	::de::polygonal::ds::ListSet s = ::de::polygonal::ds::ListSet_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(513)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(513)
		while(((_g1 < _g))){
			HX_STACK_LINE(513)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(515)
			if (((this->_keys->__GetItem(i) != null()))){
				HX_STACK_LINE(516)
				s->set(this->_keys->__GetItem(i));
			}
		}
	}
	HX_STACK_LINE(519)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,toKeySet,return )

::de::polygonal::ds::Set HashTable_obj::toValSet( ){
	HX_STACK_PUSH("HashTable::toValSet","de/polygonal/ds/HashTable.hx",495);
	HX_STACK_THIS(this);
	HX_STACK_LINE(496)
	::de::polygonal::ds::ListSet s = ::de::polygonal::ds::ListSet_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(497)
	{
		HX_STACK_LINE(497)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(497)
		while(((_g1 < _g))){
			HX_STACK_LINE(497)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(499)
			if (((this->_keys->__GetItem(i) != null()))){
				HX_STACK_LINE(500)
				s->set(this->_vals->__GetItem(i));
			}
		}
	}
	HX_STACK_LINE(503)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,toValSet,return )

bool HashTable_obj::clr( Dynamic _tmp_key){
	HX_STACK_PUSH("HashTable::clr","de/polygonal/ds/HashTable.hx",465);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_key,"_tmp_key");
	HX_STACK_LINE(466)
	Dynamic key = _tmp_key;		HX_STACK_VAR(key,"key");
	struct _Function_1_1{
		inline static int Block( ::de::polygonal::ds::HashTable_obj *__this,Dynamic &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",466);
			{
				HX_STACK_LINE(466)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				int key1 = key->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key1,"key1");
				HX_STACK_LINE(466)
				int i = _this->_hash->__get((int((key1 * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
				struct _Function_2_1{
					inline static int Block( int &i,int &key1,::de::polygonal::ds::IntIntHashTable _this){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",466);
						{
							HX_STACK_LINE(466)
							int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(466)
							i = _this->_data->__get((i + (int)2));
							HX_STACK_LINE(466)
							while(((i != (int)-1))){
								HX_STACK_LINE(466)
								if (((_this->_data->__get(i) == key1))){
									HX_STACK_LINE(466)
									v = _this->_data->__get((i + (int)1));
									HX_STACK_LINE(466)
									break;
								}
								HX_STACK_LINE(466)
								i = _this->_data->__get((i + (int)2));
							}
							HX_STACK_LINE(466)
							return v;
						}
						return null();
					}
				};
				HX_STACK_LINE(466)
				return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this->_data->__get(i) == key1))) ? int(_this->_data->__get((i + (int)1))) : int(_Function_2_1::Block(i,key1,_this)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(466)
	int i = _Function_1_1::Block(this,key);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(467)
	if (((i == (int)-2147483647))){
		HX_STACK_LINE(468)
		return false;
	}
	else{
		HX_STACK_LINE(471)
		hx::IndexRef((this->_keys).mPtr,i) = null();
		HX_STACK_LINE(472)
		this->_next[i] = this->_free;
		HX_STACK_LINE(473)
		this->_free = i;
		HX_STACK_LINE(475)
		bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
		HX_STACK_LINE(477)
		if (((this->_sizeLevel > (int)0))){
			HX_STACK_LINE(478)
			if ((((this->_h->_size - (int)1) == (int(this->_h->_capacity) >> int((int)2))))){
				HX_STACK_LINE(479)
				if ((this->_isResizable)){
					HX_STACK_LINE(480)
					shrink = true;
				}
			}
		}
		HX_STACK_LINE(482)
		{
			HX_STACK_LINE(482)
			::de::polygonal::ds::IntIntHashTable _this = this->_h;		HX_STACK_VAR(_this,"_this");
			int key1 = key->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key1,"key1");
			HX_STACK_LINE(482)
			int b = (int((key1 * (int)73856093)) & int(_this->_mask));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(482)
			int i1 = _this->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(482)
			if (((i1 == (int)-1))){
				HX_STACK_LINE(482)
				false;
			}
			else{
				HX_STACK_LINE(482)
				if (((key1 == _this->_data->__get(i1)))){
					HX_STACK_LINE(482)
					if (((_this->_data->__get((i1 + (int)2)) == (int)-1))){
						HX_STACK_LINE(482)
						_this->_hash[b] = (int)-1;
					}
					else{
						HX_STACK_LINE(482)
						_this->_hash[b] = _this->_data->__get((i1 + (int)2));
					}
					HX_STACK_LINE(482)
					int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(482)
					_this->_next[j] = _this->_free;
					HX_STACK_LINE(482)
					_this->_free = j;
					HX_STACK_LINE(482)
					_this->_data[(i1 + (int)1)] = (int)-2147483647;
					HX_STACK_LINE(482)
					_this->_data[(i1 + (int)2)] = (int)-1;
					HX_STACK_LINE(482)
					(_this->_size)--;
					HX_STACK_LINE(482)
					if (((_this->_sizeLevel > (int)0))){
						HX_STACK_LINE(482)
						if (((_this->_size == (int(_this->_capacity) >> int((int)2))))){
							HX_STACK_LINE(482)
							if ((_this->_isResizable)){
								HX_STACK_LINE(482)
								_this->_shrink();
							}
						}
					}
					HX_STACK_LINE(482)
					true;
				}
				else{
					HX_STACK_LINE(482)
					bool exists = false;		HX_STACK_VAR(exists,"exists");
					HX_STACK_LINE(482)
					int i0 = i1;		HX_STACK_VAR(i0,"i0");
					HX_STACK_LINE(482)
					i1 = _this->_data->__get((i1 + (int)2));
					HX_STACK_LINE(482)
					while(((i1 != (int)-1))){
						HX_STACK_LINE(482)
						if (((_this->_data->__get(i1) == key1))){
							HX_STACK_LINE(482)
							exists = true;
							HX_STACK_LINE(482)
							break;
						}
						HX_STACK_LINE(482)
						i1 = _this->_data->__get(((i0 = i1) + (int)2));
					}
					HX_STACK_LINE(482)
					if ((exists)){
						HX_STACK_LINE(482)
						_this->_data[(i0 + (int)2)] = _this->_data->__get((i1 + (int)2));
						HX_STACK_LINE(482)
						int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(482)
						_this->_next[j] = _this->_free;
						HX_STACK_LINE(482)
						_this->_free = j;
						HX_STACK_LINE(482)
						_this->_data[(i1 + (int)1)] = (int)-2147483647;
						HX_STACK_LINE(482)
						_this->_data[(i1 + (int)2)] = (int)-1;
						HX_STACK_LINE(482)
						--(_this->_size);
						HX_STACK_LINE(482)
						if (((_this->_sizeLevel > (int)0))){
							HX_STACK_LINE(482)
							if (((_this->_size == (int(_this->_capacity) >> int((int)2))))){
								HX_STACK_LINE(482)
								if ((_this->_isResizable)){
									HX_STACK_LINE(482)
									_this->_shrink();
								}
							}
						}
						HX_STACK_LINE(482)
						true;
					}
					else{
						HX_STACK_LINE(482)
						false;
					}
				}
			}
		}
		HX_STACK_LINE(484)
		if ((shrink)){
			HX_STACK_LINE(484)
			(this->_sizeLevel)--;
			HX_STACK_LINE(484)
			int oldSize = (int(this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
			HX_STACK_LINE(484)
			int newSize = this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
			struct _Function_3_1{
				inline static Array< int > Block( int &newSize){
					HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",484);
					{
						HX_STACK_LINE(484)
						Array< int > a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(484)
						a = Array_obj< int >::__new();
						HX_STACK_LINE(484)
						a[(newSize - (int)1)] = null();
						HX_STACK_LINE(484)
						return a;
					}
					return null();
				}
			};
			HX_STACK_LINE(484)
			this->_next = _Function_3_1::Block(newSize);
			HX_STACK_LINE(484)
			{
				HX_STACK_LINE(484)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(484)
				while(((_g1 < _g))){
					HX_STACK_LINE(484)
					int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(484)
					this->_next[i1] = (i1 + (int)1);
				}
			}
			HX_STACK_LINE(484)
			this->_next[(newSize - (int)1)] = (int)-1;
			HX_STACK_LINE(484)
			this->_free = (int)0;
			struct _Function_3_2{
				inline static Dynamic Block( int &newSize){
					HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",484);
					{
						HX_STACK_LINE(484)
						Dynamic a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(484)
						a = Dynamic( Array_obj<Dynamic>::__new() );
						HX_STACK_LINE(484)
						hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
						HX_STACK_LINE(484)
						return a;
					}
					return null();
				}
			};
			HX_STACK_LINE(484)
			Dynamic tmpKeys = _Function_3_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
			struct _Function_3_3{
				inline static Dynamic Block( int &newSize){
					HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",484);
					{
						HX_STACK_LINE(484)
						Dynamic a;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(484)
						a = Dynamic( Array_obj<Dynamic>::__new() );
						HX_STACK_LINE(484)
						hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
						HX_STACK_LINE(484)
						return a;
					}
					return null();
				}
			};
			HX_STACK_LINE(484)
			Dynamic tmpVals = _Function_3_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
			HX_STACK_LINE(484)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_h->iterator());  __it->hasNext(); ){
				int i1 = __it->next();
				{
					HX_STACK_LINE(484)
					hx::IndexRef((tmpKeys).mPtr,this->_free) = this->_keys->__GetItem(i1);
					HX_STACK_LINE(484)
					hx::IndexRef((tmpVals).mPtr,this->_free) = this->_vals->__GetItem(i1);
					HX_STACK_LINE(484)
					this->_free = this->_next->__get(this->_free);
				}
;
			}
			HX_STACK_LINE(484)
			this->_keys = tmpKeys;
			HX_STACK_LINE(484)
			this->_vals = tmpVals;
			HX_STACK_LINE(484)
			{
				HX_STACK_LINE(484)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_free;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(484)
				while(((_g1 < _g))){
					HX_STACK_LINE(484)
					int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(484)
					::de::polygonal::ds::IntIntHashTable _this = this->_h;		HX_STACK_VAR(_this,"_this");
					int key1 = this->_keys->__GetItem(i1)->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key1,"key1");
					HX_STACK_LINE(484)
					int i2 = _this->_hash->__get((int((key1 * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i2,"i2");
					HX_STACK_LINE(484)
					if (((i2 == (int)-1))){
						HX_STACK_LINE(484)
						false;
					}
					else{
						HX_STACK_LINE(484)
						if (((_this->_data->__get(i2) == key1))){
							HX_STACK_LINE(484)
							_this->_data[(i2 + (int)1)] = i1;
							HX_STACK_LINE(484)
							true;
						}
						else{
							HX_STACK_LINE(484)
							i2 = _this->_data->__get((i2 + (int)2));
							HX_STACK_LINE(484)
							while(((i2 != (int)-1))){
								HX_STACK_LINE(484)
								if (((_this->_data->__get(i2) == key1))){
									HX_STACK_LINE(484)
									_this->_data[(i2 + (int)1)] = i1;
									HX_STACK_LINE(484)
									break;
								}
								HX_STACK_LINE(484)
								i2 = _this->_data->__get((i2 + (int)2));
							}
							HX_STACK_LINE(484)
							(i2 != (int)-1);
						}
					}
				}
			}
		}
		HX_STACK_LINE(486)
		return true;
	}
	HX_STACK_LINE(467)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HashTable_obj,clr,return )

bool HashTable_obj::set( Dynamic _tmp_key,Dynamic _tmp_val){
	HX_STACK_PUSH("HashTable::set","de/polygonal/ds/HashTable.hx",443);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_key,"_tmp_key");
	HX_STACK_ARG(_tmp_val,"_tmp_val");
	HX_STACK_LINE(444)
	Dynamic key = _tmp_key;		HX_STACK_VAR(key,"key");
	Dynamic val = _tmp_val;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(444)
	if (((this->_h->_size == this->_h->_capacity))){
		HX_STACK_LINE(446)
		int oldSize = this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
		HX_STACK_LINE(446)
		int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
		struct _Function_2_1{
			inline static Array< int > Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",446);
				{
					HX_STACK_LINE(446)
					Array< int > a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(446)
					a = Array_obj< int >::__new();
					HX_STACK_LINE(446)
					a[(newSize - (int)1)] = null();
					HX_STACK_LINE(446)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(446)
		Array< int > tmp = _Function_2_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			Array< int > src = this->_next;		HX_STACK_VAR(src,"src");
			int max = oldSize;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(446)
			if (((max == (int)-1))){
				HX_STACK_LINE(446)
				max = src->length;
			}
			HX_STACK_LINE(446)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(446)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(446)
				while(((_g < max))){
					HX_STACK_LINE(446)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(446)
					tmp[(j)++] = src->__get(i);
				}
			}
			HX_STACK_LINE(446)
			tmp;
		}
		HX_STACK_LINE(446)
		this->_next = tmp;
		struct _Function_2_2{
			inline static Dynamic Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",446);
				{
					HX_STACK_LINE(446)
					Dynamic a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(446)
					a = Dynamic( Array_obj<Dynamic>::__new() );
					HX_STACK_LINE(446)
					hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
					HX_STACK_LINE(446)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(446)
		Dynamic tmp1 = _Function_2_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			Dynamic src = this->_keys;		HX_STACK_VAR(src,"src");
			int max = oldSize;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(446)
			if (((max == (int)-1))){
				HX_STACK_LINE(446)
				max = src->__Field(HX_CSTRING("length"),true);
			}
			HX_STACK_LINE(446)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(446)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(446)
				while(((_g < max))){
					HX_STACK_LINE(446)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(446)
					hx::IndexRef((tmp1).mPtr,(j)++) = src->__GetItem(i);
				}
			}
			HX_STACK_LINE(446)
			tmp1;
		}
		HX_STACK_LINE(446)
		this->_keys = tmp1;
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
			int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(446)
			while(((_g1 < _g))){
				HX_STACK_LINE(446)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(446)
				this->_next[i] = (i + (int)1);
			}
		}
		HX_STACK_LINE(446)
		this->_next[(newSize - (int)1)] = (int)-1;
		HX_STACK_LINE(446)
		this->_free = oldSize;
		struct _Function_2_3{
			inline static Dynamic Block( int &newSize){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",446);
				{
					HX_STACK_LINE(446)
					Dynamic a;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(446)
					a = Dynamic( Array_obj<Dynamic>::__new() );
					HX_STACK_LINE(446)
					hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
					HX_STACK_LINE(446)
					return a;
				}
				return null();
			}
		};
		HX_STACK_LINE(446)
		Dynamic tmp2 = _Function_2_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			Dynamic src = this->_vals;		HX_STACK_VAR(src,"src");
			int max = oldSize;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(446)
			if (((max == (int)-1))){
				HX_STACK_LINE(446)
				max = src->__Field(HX_CSTRING("length"),true);
			}
			HX_STACK_LINE(446)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(446)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(446)
				while(((_g < max))){
					HX_STACK_LINE(446)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(446)
					hx::IndexRef((tmp2).mPtr,(j)++) = src->__GetItem(i);
				}
			}
			HX_STACK_LINE(446)
			tmp2;
		}
		HX_STACK_LINE(446)
		this->_vals = tmp2;
		HX_STACK_LINE(446)
		(this->_sizeLevel)++;
	}
	struct _Function_1_1{
		inline static bool Block( ::de::polygonal::ds::HashTable_obj *__this,Dynamic &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",449);
			{
				HX_STACK_LINE(449)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				int key1 = key->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key1,"key1");
				HX_STACK_LINE(449)
				if (((_this->_size == _this->_capacity))){
					HX_STACK_LINE(449)
					if ((_this->_isResizable)){
						HX_STACK_LINE(449)
						_this->_expand();
					}
				}
				HX_STACK_LINE(449)
				int i = (_this->_free * (int)3);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(449)
				_this->_free = _this->_next->__get(_this->_free);
				HX_STACK_LINE(449)
				_this->_data[i] = key1;
				HX_STACK_LINE(449)
				_this->_data[(i + (int)1)] = __this->_free;
				HX_STACK_LINE(449)
				int b = (int((key1 * (int)73856093)) & int(_this->_mask));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(449)
				int j = _this->_hash->__get(b);		HX_STACK_VAR(j,"j");
				struct _Function_2_1{
					inline static bool Block( int &i,int &b,::de::polygonal::ds::IntIntHashTable _this){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",449);
						{
							HX_STACK_LINE(449)
							_this->_hash[b] = i;
							HX_STACK_LINE(449)
							(_this->_size)++;
							HX_STACK_LINE(449)
							return true;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static bool Block( int &i,int &j,int &key1,::de::polygonal::ds::IntIntHashTable _this){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",449);
						{
							HX_STACK_LINE(449)
							bool first = (_this->_data->__get(j) != key1);		HX_STACK_VAR(first,"first");
							HX_STACK_LINE(449)
							int t = _this->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(449)
							while(((t != (int)-1))){
								HX_STACK_LINE(449)
								if (((_this->_data->__get(t) == key1))){
									HX_STACK_LINE(449)
									first = false;
								}
								HX_STACK_LINE(449)
								j = t;
								HX_STACK_LINE(449)
								t = _this->_data->__get((t + (int)2));
							}
							HX_STACK_LINE(449)
							_this->_data[(j + (int)2)] = i;
							HX_STACK_LINE(449)
							(_this->_size)++;
							HX_STACK_LINE(449)
							return first;
						}
						return null();
					}
				};
				HX_STACK_LINE(449)
				return (  (((j == (int)-1))) ? bool(_Function_2_1::Block(i,b,_this)) : bool(_Function_2_2::Block(i,j,key1,_this)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(449)
	bool first = _Function_1_1::Block(this,key);		HX_STACK_VAR(first,"first");
	HX_STACK_LINE(450)
	hx::IndexRef((this->_vals).mPtr,this->_free) = val;
	HX_STACK_LINE(451)
	hx::IndexRef((this->_keys).mPtr,this->_free) = key;
	HX_STACK_LINE(453)
	this->_free = this->_next->__get(this->_free);
	HX_STACK_LINE(454)
	return first;
}


HX_DEFINE_DYNAMIC_FUNC2(HashTable_obj,set,return )

int HashTable_obj::getAll( Dynamic key,Dynamic values){
	HX_STACK_PUSH("HashTable::getAll","de/polygonal/ds/HashTable.hx",420);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_ARG(values,"values");
	struct _Function_1_1{
		inline static int Block( ::de::polygonal::ds::HashTable_obj *__this,Dynamic &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",421);
			{
				HX_STACK_LINE(421)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				int key1 = key->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key1,"key1");
				HX_STACK_LINE(421)
				int i = _this->_hash->__get((int((key1 * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
				struct _Function_2_1{
					inline static int Block( int &i,int &key1,::de::polygonal::ds::IntIntHashTable _this){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",421);
						{
							HX_STACK_LINE(421)
							int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(421)
							i = _this->_data->__get((i + (int)2));
							HX_STACK_LINE(421)
							while(((i != (int)-1))){
								HX_STACK_LINE(421)
								if (((_this->_data->__get(i) == key1))){
									HX_STACK_LINE(421)
									v = _this->_data->__get((i + (int)1));
									HX_STACK_LINE(421)
									break;
								}
								HX_STACK_LINE(421)
								i = _this->_data->__get((i + (int)2));
							}
							HX_STACK_LINE(421)
							return v;
						}
						return null();
					}
				};
				HX_STACK_LINE(421)
				return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this->_data->__get(i) == key1))) ? int(_this->_data->__get((i + (int)1))) : int(_Function_2_1::Block(i,key1,_this)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(421)
	int i = _Function_1_1::Block(this,key);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(422)
	if (((i == (int)-2147483647))){
		HX_STACK_LINE(423)
		return (int)0;
	}
	else{
		HX_STACK_LINE(426)
		int c = this->_h->getAll(key->__Field(HX_CSTRING("key"),true),this->_tmpArr);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(427)
		{
			HX_STACK_LINE(427)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(427)
			while(((_g < c))){
				HX_STACK_LINE(427)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(427)
				hx::IndexRef((values).mPtr,i1) = this->_vals->__GetItem(this->_tmpArr->__get(i1));
			}
		}
		HX_STACK_LINE(428)
		return c;
	}
	HX_STACK_LINE(422)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(HashTable_obj,getAll,return )

Dynamic HashTable_obj::get( Dynamic _tmp_key){
	HX_STACK_PUSH("HashTable::get","de/polygonal/ds/HashTable.hx",403);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_key,"_tmp_key");
	HX_STACK_LINE(408)
	Dynamic key = _tmp_key;		HX_STACK_VAR(key,"key");
	struct _Function_1_1{
		inline static int Block( ::de::polygonal::ds::HashTable_obj *__this,Dynamic &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",408);
			{
				HX_STACK_LINE(408)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				int key1 = key->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key1,"key1");
				HX_STACK_LINE(408)
				int i = _this->_hash->__get((int((key1 * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
				struct _Function_2_1{
					inline static int Block( int &i,int &key1,::de::polygonal::ds::IntIntHashTable _this){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",408);
						{
							HX_STACK_LINE(408)
							int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(408)
							i = _this->_data->__get((i + (int)2));
							HX_STACK_LINE(408)
							while(((i != (int)-1))){
								HX_STACK_LINE(408)
								if (((_this->_data->__get(i) == key1))){
									HX_STACK_LINE(408)
									v = _this->_data->__get((i + (int)1));
									HX_STACK_LINE(408)
									break;
								}
								HX_STACK_LINE(408)
								i = _this->_data->__get((i + (int)2));
							}
							HX_STACK_LINE(408)
							return v;
						}
						return null();
					}
				};
				HX_STACK_LINE(408)
				return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this->_data->__get(i) == key1))) ? int(_this->_data->__get((i + (int)1))) : int(_Function_2_1::Block(i,key1,_this)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(408)
	int i = _Function_1_1::Block(this,key);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(409)
	if (((i == (int)-2147483647))){
		HX_STACK_LINE(410)
		return null();
	}
	else{
		HX_STACK_LINE(412)
		return this->_vals->__GetItem(i);
	}
	HX_STACK_LINE(409)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HashTable_obj,get,return )

bool HashTable_obj::hasKey( Dynamic _tmp_key){
	HX_STACK_PUSH("HashTable::hasKey","de/polygonal/ds/HashTable.hx",393);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_key,"_tmp_key");
	HX_STACK_LINE(393)
	Dynamic key = _tmp_key;		HX_STACK_VAR(key,"key");
	struct _Function_1_1{
		inline static bool Block( ::de::polygonal::ds::HashTable_obj *__this,Dynamic &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",394);
			{
				HX_STACK_LINE(394)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				int key1 = key->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key1,"key1");
				HX_STACK_LINE(394)
				int i = _this->_hash->__get((int((key1 * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
				struct _Function_2_1{
					inline static bool Block( int &i,int &key1,::de::polygonal::ds::IntIntHashTable _this){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",394);
						{
							HX_STACK_LINE(394)
							bool exists = false;		HX_STACK_VAR(exists,"exists");
							HX_STACK_LINE(394)
							i = _this->_data->__get((i + (int)2));
							HX_STACK_LINE(394)
							while(((i != (int)-1))){
								HX_STACK_LINE(394)
								if (((_this->_data->__get(i) == key1))){
									HX_STACK_LINE(394)
									exists = true;
									HX_STACK_LINE(394)
									break;
								}
								HX_STACK_LINE(394)
								i = _this->_data->__get((i + (int)2));
							}
							HX_STACK_LINE(394)
							return exists;
						}
						return null();
					}
				};
				HX_STACK_LINE(394)
				return (  (((i == (int)-1))) ? bool(false) : bool((  (((_this->_data->__get(i) == key1))) ? bool(true) : bool(_Function_2_1::Block(i,key1,_this)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(393)
	return _Function_1_1::Block(this,key);
}


HX_DEFINE_DYNAMIC_FUNC1(HashTable_obj,hasKey,return )

bool HashTable_obj::has( Dynamic _tmp_val){
	HX_STACK_PUSH("HashTable::has","de/polygonal/ds/HashTable.hx",371);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_val,"_tmp_val");
	HX_STACK_LINE(372)
	Dynamic val = _tmp_val;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(372)
	bool exists = false;		HX_STACK_VAR(exists,"exists");
	HX_STACK_LINE(373)
	{
		HX_STACK_LINE(373)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(373)
		while(((_g1 < _g))){
			HX_STACK_LINE(373)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(375)
			if (((this->_keys->__GetItem(i) != null()))){
				HX_STACK_LINE(376)
				if (((this->_vals->__GetItem(i) == val))){
					HX_STACK_LINE(379)
					exists = true;
					HX_STACK_LINE(380)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(384)
	return exists;
}


HX_DEFINE_DYNAMIC_FUNC1(HashTable_obj,has,return )

::String HashTable_obj::toString( ){
	HX_STACK_PUSH("HashTable::toString","de/polygonal/ds/HashTable.hx",347);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Float Block( ::de::polygonal::ds::HashTable_obj *__this){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",348);
			{
				HX_STACK_LINE(348)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(348)
				return (Float(_this->_size) / Float(((_this->_mask + (int)1))));
			}
			return null();
		}
	};
	HX_STACK_LINE(348)
	::String s = ::de::polygonal::Printf_obj::format(HX_CSTRING("{ HashTable size/capacity: %d/%d, load factor: %.2f }"),Dynamic( Array_obj<Dynamic>::__new().Add(this->_h->_size).Add(this->_h->_capacity).Add(_Function_1_1::Block(this))));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(349)
	if (((this->_h->_size == (int)0))){
		HX_STACK_LINE(349)
		return s;
	}
	HX_STACK_LINE(350)
	hx::AddEq(s,HX_CSTRING("\n[\n"));
	HX_STACK_LINE(352)
	int max = (int)0;		HX_STACK_VAR(max,"max");
	struct _Function_1_2{
		inline static int Block( int &max,Dynamic &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",353);
			{
				HX_STACK_LINE(353)
				int y = ::Std_obj::string(key).length;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(353)
				return (  (((max > y))) ? int(max) : int(y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(353)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(this->keys());  __it->hasNext(); ){
		Dynamic key = __it->next();
		max = _Function_1_2::Block(max,key);
	}
	struct _Function_1_3{
		inline static Dynamic Block( ::de::polygonal::ds::HashTable_obj *__this,Dynamic &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",356);
			{
				struct _Function_2_1{
					inline static int Block( ::de::polygonal::ds::HashTable_obj *__this,Dynamic &key){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",356);
						{
							HX_STACK_LINE(356)
							::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
							int key1 = key->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key1,"key1");
							HX_STACK_LINE(356)
							int i = _this->_hash->__get((int((key1 * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
							struct _Function_3_1{
								inline static int Block( int &i,int &key1,::de::polygonal::ds::IntIntHashTable _this){
									HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",356);
									{
										HX_STACK_LINE(356)
										int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(356)
										i = _this->_data->__get((i + (int)2));
										HX_STACK_LINE(356)
										while(((i != (int)-1))){
											HX_STACK_LINE(356)
											if (((_this->_data->__get(i) == key1))){
												HX_STACK_LINE(356)
												v = _this->_data->__get((i + (int)1));
												HX_STACK_LINE(356)
												break;
											}
											HX_STACK_LINE(356)
											i = _this->_data->__get((i + (int)2));
										}
										HX_STACK_LINE(356)
										return v;
									}
									return null();
								}
							};
							HX_STACK_LINE(356)
							return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this->_data->__get(i) == key1))) ? int(_this->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,key1,_this)) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(356)
				int i = _Function_2_1::Block(__this,key);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(356)
				return (  (((i == (int)-2147483647))) ? Dynamic(null()) : Dynamic(__this->_vals->__GetItem(i)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(355)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(this->keys());  __it->hasNext(); ){
		Dynamic key = __it->next();
		hx::AddEq(s,::de::polygonal::Printf_obj::format(((HX_CSTRING("  %- ") + max) + HX_CSTRING("s -> %s\n")),Dynamic( Array_obj<Dynamic>::__new().Add(key).Add(::Std_obj::string(_Function_1_3::Block(this,key))))));
	}
	HX_STACK_LINE(358)
	hx::AddEq(s,HX_CSTRING("]"));
	HX_STACK_LINE(359)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,toString,return )

Void HashTable_obj::pack( ){
{
		HX_STACK_PUSH("HashTable::pack","de/polygonal/ds/HashTable.hx",306);
		HX_STACK_THIS(this);
		HX_STACK_LINE(307)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(307)
		while(((_g1 < _g))){
			HX_STACK_LINE(307)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(308)
			if (((this->_keys->__GetItem(i) != null()))){
				HX_STACK_LINE(308)
				hx::IndexRef((this->_vals).mPtr,i) = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,pack,(void))

::de::polygonal::ds::DA HashTable_obj::toKeyDA( ){
	HX_STACK_PUSH("HashTable::toKeyDA","de/polygonal/ds/HashTable.hx",290);
	HX_STACK_THIS(this);
	HX_STACK_LINE(291)
	::de::polygonal::ds::DA a = ::de::polygonal::ds::DA_obj::__new(this->_h->_size,null());		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(292)
	{
		HX_STACK_LINE(292)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(292)
		while(((_g1 < _g))){
			HX_STACK_LINE(292)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(294)
			if (((this->_keys->__GetItem(i) != null()))){
				HX_STACK_LINE(295)
				int i1 = a->_size;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(295)
				hx::IndexRef((a->_a).mPtr,i1) = this->_keys->__GetItem(i);
				HX_STACK_LINE(295)
				if (((i1 >= a->_size))){
					HX_STACK_LINE(295)
					(a->_size)++;
				}
			}
		}
	}
	HX_STACK_LINE(297)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,toKeyDA,return )

Dynamic HashTable_obj::toKeyArray( ){
	HX_STACK_PUSH("HashTable::toKeyArray","de/polygonal/ds/HashTable.hx",274);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Dynamic Block( ::de::polygonal::ds::HashTable_obj *__this){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",275);
			{
				HX_STACK_LINE(275)
				Dynamic a;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(275)
				a = Dynamic( Array_obj<Dynamic>::__new() );
				HX_STACK_LINE(275)
				hx::IndexRef((a).mPtr,(__this->_h->_size - (int)1)) = null();
				HX_STACK_LINE(275)
				return a;
			}
			return null();
		}
	};
	HX_STACK_LINE(275)
	Dynamic a = _Function_1_1::Block(this);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(276)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(277)
	{
		HX_STACK_LINE(277)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_h->_capacity;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(277)
		while(((_g1 < _g))){
			HX_STACK_LINE(277)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(279)
			if (((this->_keys->__GetItem(i) != null()))){
				HX_STACK_LINE(280)
				hx::IndexRef((a).mPtr,(j)++) = this->_keys->__GetItem(i);
			}
		}
	}
	HX_STACK_LINE(282)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,toKeyArray,return )

bool HashTable_obj::remap( Dynamic _tmp_key,Dynamic _tmp_val){
	HX_STACK_PUSH("HashTable::remap","de/polygonal/ds/HashTable.hx",258);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_key,"_tmp_key");
	HX_STACK_ARG(_tmp_val,"_tmp_val");
	HX_STACK_LINE(259)
	Dynamic key = _tmp_key;		HX_STACK_VAR(key,"key");
	Dynamic val = _tmp_val;		HX_STACK_VAR(val,"val");
	struct _Function_1_1{
		inline static int Block( ::de::polygonal::ds::HashTable_obj *__this,Dynamic &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",259);
			{
				HX_STACK_LINE(259)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				int key1 = key->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key1,"key1");
				HX_STACK_LINE(259)
				int i = _this->_hash->__get((int((key1 * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
				struct _Function_2_1{
					inline static int Block( int &i,int &key1,::de::polygonal::ds::IntIntHashTable _this){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",259);
						{
							HX_STACK_LINE(259)
							int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(259)
							i = _this->_data->__get((i + (int)2));
							HX_STACK_LINE(259)
							while(((i != (int)-1))){
								HX_STACK_LINE(259)
								if (((_this->_data->__get(i) == key1))){
									HX_STACK_LINE(259)
									v = _this->_data->__get((i + (int)1));
									HX_STACK_LINE(259)
									break;
								}
								HX_STACK_LINE(259)
								i = _this->_data->__get((i + (int)2));
							}
							HX_STACK_LINE(259)
							return v;
						}
						return null();
					}
				};
				HX_STACK_LINE(259)
				return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this->_data->__get(i) == key1))) ? int(_this->_data->__get((i + (int)1))) : int(_Function_2_1::Block(i,key1,_this)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(259)
	int i = _Function_1_1::Block(this,key);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(260)
	if (((i != (int)-2147483647))){
		HX_STACK_LINE(262)
		hx::IndexRef((this->_vals).mPtr,i) = val;
		HX_STACK_LINE(263)
		return true;
	}
	else{
		HX_STACK_LINE(266)
		return false;
	}
	HX_STACK_LINE(260)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(HashTable_obj,remap,return )

Void HashTable_obj::rehash( int slotCount){
{
		HX_STACK_PUSH("HashTable::rehash","de/polygonal/ds/HashTable.hx",247);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slotCount,"slotCount");
		HX_STACK_LINE(247)
		this->_h->rehash(slotCount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HashTable_obj,rehash,(void))

bool HashTable_obj::setIfAbsent( Dynamic key,Dynamic val){
	HX_STACK_PUSH("HashTable::setIfAbsent","de/polygonal/ds/HashTable.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(211)
	if (((this->_h->_size == this->_h->_capacity))){
		struct _Function_2_1{
			inline static bool Block( ::de::polygonal::ds::HashTable_obj *__this,Dynamic &key){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",214);
				{
					HX_STACK_LINE(214)
					::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
					int key1 = key->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key1,"key1");
					int val1 = __this->_h->_size;		HX_STACK_VAR(val1,"val1");
					HX_STACK_LINE(214)
					int b = (int((key1 * (int)73856093)) & int(_this->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(214)
					int j = _this->_hash->__get(b);		HX_STACK_VAR(j,"j");
					struct _Function_3_1{
						inline static bool Block( int &b,int &key1,int &val1,::de::polygonal::ds::IntIntHashTable _this){
							HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",214);
							{
								HX_STACK_LINE(214)
								if (((_this->_size == _this->_capacity))){
									HX_STACK_LINE(214)
									if ((_this->_isResizable)){
										HX_STACK_LINE(214)
										_this->_expand();
									}
								}
								HX_STACK_LINE(214)
								int i = (_this->_free * (int)3);		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(214)
								_this->_free = _this->_next->__get(_this->_free);
								HX_STACK_LINE(214)
								_this->_hash[b] = i;
								HX_STACK_LINE(214)
								_this->_data[i] = key1;
								HX_STACK_LINE(214)
								_this->_data[(i + (int)1)] = val1;
								HX_STACK_LINE(214)
								(_this->_size)++;
								HX_STACK_LINE(214)
								return true;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static bool Block( int &j,int &key1,int &val1,::de::polygonal::ds::IntIntHashTable _this){
							HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",214);
							{
								HX_STACK_LINE(214)
								int t = _this->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(214)
								while(((t != (int)-1))){
									HX_STACK_LINE(214)
									if (((_this->_data->__get(t) == key1))){
										HX_STACK_LINE(214)
										j = (int)-1;
										HX_STACK_LINE(214)
										break;
									}
									HX_STACK_LINE(214)
									t = _this->_data->__get(((j = t) + (int)2));
								}
								struct _Function_4_1{
									inline static bool Block( int &j,int &key1,int &val1,::de::polygonal::ds::IntIntHashTable _this){
										HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",214);
										{
											HX_STACK_LINE(214)
											if (((_this->_size == _this->_capacity))){
												HX_STACK_LINE(214)
												if ((_this->_isResizable)){
													HX_STACK_LINE(214)
													_this->_expand();
												}
											}
											HX_STACK_LINE(214)
											int i = (_this->_free * (int)3);		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(214)
											_this->_free = _this->_next->__get(_this->_free);
											HX_STACK_LINE(214)
											_this->_data[(j + (int)2)] = i;
											HX_STACK_LINE(214)
											_this->_data[i] = key1;
											HX_STACK_LINE(214)
											_this->_data[(i + (int)1)] = val1;
											HX_STACK_LINE(214)
											(_this->_size)++;
											HX_STACK_LINE(214)
											return true;
										}
										return null();
									}
								};
								HX_STACK_LINE(214)
								return (  (((j == (int)-1))) ? bool(false) : bool(_Function_4_1::Block(j,key1,val1,_this)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(214)
					return (  (((j == (int)-1))) ? bool(_Function_3_1::Block(b,key1,val1,_this)) : bool((  (((_this->_data->__get(j) == key1))) ? bool(false) : bool(_Function_3_2::Block(j,key1,val1,_this)) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(213)
		if ((_Function_2_1::Block(this,key))){
			HX_STACK_LINE(216)
			{
				HX_STACK_LINE(216)
				int oldSize = (int(this->_h->_capacity) >> int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
				HX_STACK_LINE(216)
				int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
				struct _Function_4_1{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",216);
						{
							HX_STACK_LINE(216)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(216)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(216)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(216)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(216)
				Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					Array< int > src = this->_next;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(216)
					if (((max == (int)-1))){
						HX_STACK_LINE(216)
						max = src->length;
					}
					HX_STACK_LINE(216)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(216)
						while(((_g < max))){
							HX_STACK_LINE(216)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(216)
							tmp[(j)++] = src->__get(i);
						}
					}
					HX_STACK_LINE(216)
					tmp;
				}
				HX_STACK_LINE(216)
				this->_next = tmp;
				struct _Function_4_2{
					inline static Dynamic Block( int &newSize){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",216);
						{
							HX_STACK_LINE(216)
							Dynamic a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(216)
							a = Dynamic( Array_obj<Dynamic>::__new() );
							HX_STACK_LINE(216)
							hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
							HX_STACK_LINE(216)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(216)
				Dynamic tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					Dynamic src = this->_keys;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(216)
					if (((max == (int)-1))){
						HX_STACK_LINE(216)
						max = src->__Field(HX_CSTRING("length"),true);
					}
					HX_STACK_LINE(216)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(216)
						while(((_g < max))){
							HX_STACK_LINE(216)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(216)
							hx::IndexRef((tmp1).mPtr,(j)++) = src->__GetItem(i);
						}
					}
					HX_STACK_LINE(216)
					tmp1;
				}
				HX_STACK_LINE(216)
				this->_keys = tmp1;
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
					int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(216)
					while(((_g1 < _g))){
						HX_STACK_LINE(216)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(216)
						this->_next[i] = (i + (int)1);
					}
				}
				HX_STACK_LINE(216)
				this->_next[(newSize - (int)1)] = (int)-1;
				HX_STACK_LINE(216)
				this->_free = oldSize;
				struct _Function_4_3{
					inline static Dynamic Block( int &newSize){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",216);
						{
							HX_STACK_LINE(216)
							Dynamic a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(216)
							a = Dynamic( Array_obj<Dynamic>::__new() );
							HX_STACK_LINE(216)
							hx::IndexRef((a).mPtr,(newSize - (int)1)) = null();
							HX_STACK_LINE(216)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(216)
				Dynamic tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					Dynamic src = this->_vals;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(216)
					if (((max == (int)-1))){
						HX_STACK_LINE(216)
						max = src->__Field(HX_CSTRING("length"),true);
					}
					HX_STACK_LINE(216)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(216)
						while(((_g < max))){
							HX_STACK_LINE(216)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(216)
							hx::IndexRef((tmp2).mPtr,(j)++) = src->__GetItem(i);
						}
					}
					HX_STACK_LINE(216)
					tmp2;
				}
				HX_STACK_LINE(216)
				this->_vals = tmp2;
				HX_STACK_LINE(216)
				(this->_sizeLevel)++;
			}
			HX_STACK_LINE(218)
			hx::IndexRef((this->_vals).mPtr,this->_free) = val;
			HX_STACK_LINE(219)
			hx::IndexRef((this->_keys).mPtr,this->_free) = key;
			HX_STACK_LINE(220)
			this->_free = this->_next->__get(this->_free);
			HX_STACK_LINE(221)
			return true;
		}
		else{
			HX_STACK_LINE(224)
			return false;
		}
	}
	else{
		struct _Function_2_1{
			inline static bool Block( ::de::polygonal::ds::HashTable_obj *__this,Dynamic &key){
				HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",228);
				{
					HX_STACK_LINE(228)
					::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
					int key1 = key->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key1,"key1");
					int val1 = __this->_free;		HX_STACK_VAR(val1,"val1");
					HX_STACK_LINE(228)
					int b = (int((key1 * (int)73856093)) & int(_this->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(228)
					int j = _this->_hash->__get(b);		HX_STACK_VAR(j,"j");
					struct _Function_3_1{
						inline static bool Block( int &b,int &key1,int &val1,::de::polygonal::ds::IntIntHashTable _this){
							HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",228);
							{
								HX_STACK_LINE(228)
								if (((_this->_size == _this->_capacity))){
									HX_STACK_LINE(228)
									if ((_this->_isResizable)){
										HX_STACK_LINE(228)
										_this->_expand();
									}
								}
								HX_STACK_LINE(228)
								int i = (_this->_free * (int)3);		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(228)
								_this->_free = _this->_next->__get(_this->_free);
								HX_STACK_LINE(228)
								_this->_hash[b] = i;
								HX_STACK_LINE(228)
								_this->_data[i] = key1;
								HX_STACK_LINE(228)
								_this->_data[(i + (int)1)] = val1;
								HX_STACK_LINE(228)
								(_this->_size)++;
								HX_STACK_LINE(228)
								return true;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static bool Block( int &j,int &key1,int &val1,::de::polygonal::ds::IntIntHashTable _this){
							HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",228);
							{
								HX_STACK_LINE(228)
								int t = _this->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(228)
								while(((t != (int)-1))){
									HX_STACK_LINE(228)
									if (((_this->_data->__get(t) == key1))){
										HX_STACK_LINE(228)
										j = (int)-1;
										HX_STACK_LINE(228)
										break;
									}
									HX_STACK_LINE(228)
									t = _this->_data->__get(((j = t) + (int)2));
								}
								struct _Function_4_1{
									inline static bool Block( int &j,int &key1,int &val1,::de::polygonal::ds::IntIntHashTable _this){
										HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",228);
										{
											HX_STACK_LINE(228)
											if (((_this->_size == _this->_capacity))){
												HX_STACK_LINE(228)
												if ((_this->_isResizable)){
													HX_STACK_LINE(228)
													_this->_expand();
												}
											}
											HX_STACK_LINE(228)
											int i = (_this->_free * (int)3);		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(228)
											_this->_free = _this->_next->__get(_this->_free);
											HX_STACK_LINE(228)
											_this->_data[(j + (int)2)] = i;
											HX_STACK_LINE(228)
											_this->_data[i] = key1;
											HX_STACK_LINE(228)
											_this->_data[(i + (int)1)] = val1;
											HX_STACK_LINE(228)
											(_this->_size)++;
											HX_STACK_LINE(228)
											return true;
										}
										return null();
									}
								};
								HX_STACK_LINE(228)
								return (  (((j == (int)-1))) ? bool(false) : bool(_Function_4_1::Block(j,key1,val1,_this)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(228)
					return (  (((j == (int)-1))) ? bool(_Function_3_1::Block(b,key1,val1,_this)) : bool((  (((_this->_data->__get(j) == key1))) ? bool(false) : bool(_Function_3_2::Block(j,key1,val1,_this)) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(227)
		if ((_Function_2_1::Block(this,key))){
			HX_STACK_LINE(230)
			hx::IndexRef((this->_vals).mPtr,this->_free) = val;
			HX_STACK_LINE(231)
			hx::IndexRef((this->_keys).mPtr,this->_free) = key;
			HX_STACK_LINE(232)
			this->_free = this->_next->__get(this->_free);
			HX_STACK_LINE(233)
			return true;
		}
		else{
			HX_STACK_LINE(236)
			return false;
		}
	}
	HX_STACK_LINE(211)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(HashTable_obj,setIfAbsent,return )

Dynamic HashTable_obj::getFront( Dynamic key){
	HX_STACK_PUSH("HashTable::getFront","de/polygonal/ds/HashTable.hx",194);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	struct _Function_1_1{
		inline static int Block( ::de::polygonal::ds::HashTable_obj *__this,Dynamic &key){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",195);
			{
				HX_STACK_LINE(195)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				int key1 = key->__Field(HX_CSTRING("key"),true);		HX_STACK_VAR(key1,"key1");
				HX_STACK_LINE(195)
				int b = (int((key1 * (int)73856093)) & int(_this->_mask));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(195)
				int i = _this->_hash->__get(b);		HX_STACK_VAR(i,"i");
				struct _Function_2_1{
					inline static int Block( int &i,int &key1,int &b,::de::polygonal::ds::IntIntHashTable _this){
						HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",195);
						{
							HX_STACK_LINE(195)
							int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(195)
							int first = i;		HX_STACK_VAR(first,"first");
							int i0 = first;		HX_STACK_VAR(i0,"i0");
							HX_STACK_LINE(195)
							i = _this->_data->__get((i + (int)2));
							HX_STACK_LINE(195)
							while(((i != (int)-1))){
								HX_STACK_LINE(195)
								if (((_this->_data->__get(i) == key1))){
									HX_STACK_LINE(195)
									v = _this->_data->__get((i + (int)1));
									HX_STACK_LINE(195)
									_this->_data[(i0 + (int)2)] = _this->_data->__get((i + (int)2));
									HX_STACK_LINE(195)
									_this->_data[(i + (int)2)] = first;
									HX_STACK_LINE(195)
									_this->_hash[b] = i;
									HX_STACK_LINE(195)
									break;
								}
								HX_STACK_LINE(195)
								i = _this->_data->__get(((i0 = i) + (int)2));
							}
							HX_STACK_LINE(195)
							return v;
						}
						return null();
					}
				};
				HX_STACK_LINE(195)
				return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this->_data->__get(i) == key1))) ? int(_this->_data->__get((i + (int)1))) : int(_Function_2_1::Block(i,key1,b,_this)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(195)
	int i = _Function_1_1::Block(this,key);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(196)
	if (((i == (int)-2147483647))){
		HX_STACK_LINE(197)
		return null();
	}
	else{
		HX_STACK_LINE(199)
		return this->_vals->__GetItem(i);
	}
	HX_STACK_LINE(196)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HashTable_obj,getFront,return )

int HashTable_obj::getCollisionCount( ){
	HX_STACK_PUSH("HashTable::getCollisionCount","de/polygonal/ds/HashTable.hx",183);
	HX_STACK_THIS(this);
	HX_STACK_LINE(183)
	return this->_h->getCollisionCount();
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,getCollisionCount,return )

int HashTable_obj::getCapacity( ){
	HX_STACK_PUSH("HashTable::getCapacity","de/polygonal/ds/HashTable.hx",174);
	HX_STACK_THIS(this);
	HX_STACK_LINE(174)
	return this->_h->_capacity;
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,getCapacity,return )

int HashTable_obj::getSlotCount( ){
	HX_STACK_PUSH("HashTable::getSlotCount","de/polygonal/ds/HashTable.hx",164);
	HX_STACK_THIS(this);
	HX_STACK_LINE(164)
	return (this->_h->_mask + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,getSlotCount,return )

Float HashTable_obj::getLoadFactor( ){
	HX_STACK_PUSH("HashTable::getLoadFactor","de/polygonal/ds/HashTable.hx",156);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Float Block( ::de::polygonal::ds::HashTable_obj *__this){
			HX_STACK_PUSH("*::closure","de/polygonal/ds/HashTable.hx",157);
			{
				HX_STACK_LINE(157)
				::de::polygonal::ds::IntIntHashTable _this = __this->_h;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(157)
				return (Float(_this->_size) / Float(((_this->_mask + (int)1))));
			}
			return null();
		}
	};
	HX_STACK_LINE(156)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(HashTable_obj,getLoadFactor,return )


HashTable_obj::HashTable_obj()
{
}

void HashTable_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HashTable);
	HX_MARK_MEMBER_NAME(_tmpArr,"_tmpArr");
	HX_MARK_MEMBER_NAME(_iterator,"_iterator");
	HX_MARK_MEMBER_NAME(_isResizable,"_isResizable");
	HX_MARK_MEMBER_NAME(_sizeLevel,"_sizeLevel");
	HX_MARK_MEMBER_NAME(_free,"_free");
	HX_MARK_MEMBER_NAME(_next,"_next");
	HX_MARK_MEMBER_NAME(_vals,"_vals");
	HX_MARK_MEMBER_NAME(_keys,"_keys");
	HX_MARK_MEMBER_NAME(_h,"_h");
	HX_MARK_MEMBER_NAME(reuseIterator,"reuseIterator");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_END_CLASS();
}

void HashTable_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tmpArr,"_tmpArr");
	HX_VISIT_MEMBER_NAME(_iterator,"_iterator");
	HX_VISIT_MEMBER_NAME(_isResizable,"_isResizable");
	HX_VISIT_MEMBER_NAME(_sizeLevel,"_sizeLevel");
	HX_VISIT_MEMBER_NAME(_free,"_free");
	HX_VISIT_MEMBER_NAME(_next,"_next");
	HX_VISIT_MEMBER_NAME(_vals,"_vals");
	HX_VISIT_MEMBER_NAME(_keys,"_keys");
	HX_VISIT_MEMBER_NAME(_h,"_h");
	HX_VISIT_MEMBER_NAME(reuseIterator,"reuseIterator");
	HX_VISIT_MEMBER_NAME(key,"key");
}

Dynamic HashTable_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"keys") ) { return keys_dyn(); }
		if (HX_FIELD_EQ(inName,"pack") ) { return pack_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__key") ) { return __key_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"remap") ) { return remap_dyn(); }
		if (HX_FIELD_EQ(inName,"_free") ) { return _free; }
		if (HX_FIELD_EQ(inName,"_next") ) { return _next; }
		if (HX_FIELD_EQ(inName,"_vals") ) { return _vals; }
		if (HX_FIELD_EQ(inName,"_keys") ) { return _keys; }
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
		if (HX_FIELD_EQ(inName,"__setNext") ) { return __setNext_dyn(); }
		if (HX_FIELD_EQ(inName,"__getNext") ) { return __getNext_dyn(); }
		if (HX_FIELD_EQ(inName,"_iterator") ) { return _iterator; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toKeyArray") ) { return toKeyArray_dyn(); }
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

Dynamic HashTable_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_h") ) { _h=inValue.Cast< ::de::polygonal::ds::IntIntHashTable >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_free") ) { _free=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_next") ) { _next=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vals") ) { _vals=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keys") ) { _keys=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_tmpArr") ) { _tmpArr=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_iterator") ) { _iterator=inValue.Cast< ::de::polygonal::ds::HashTableValIterator >(); return inValue; }
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

void HashTable_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_tmpArr"));
	outFields->push(HX_CSTRING("_iterator"));
	outFields->push(HX_CSTRING("_isResizable"));
	outFields->push(HX_CSTRING("_sizeLevel"));
	outFields->push(HX_CSTRING("_free"));
	outFields->push(HX_CSTRING("_next"));
	outFields->push(HX_CSTRING("_vals"));
	outFields->push(HX_CSTRING("_keys"));
	outFields->push(HX_CSTRING("_h"));
	outFields->push(HX_CSTRING("reuseIterator"));
	outFields->push(HX_CSTRING("key"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__key"),
	HX_CSTRING("__setNext"),
	HX_CSTRING("__getNext"),
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
	HX_CSTRING("hasKey"),
	HX_CSTRING("has"),
	HX_CSTRING("toString"),
	HX_CSTRING("pack"),
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
	HX_CSTRING("_free"),
	HX_CSTRING("_next"),
	HX_CSTRING("_vals"),
	HX_CSTRING("_keys"),
	HX_CSTRING("_h"),
	HX_CSTRING("reuseIterator"),
	HX_CSTRING("key"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HashTable_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HashTable_obj::__mClass,"__mClass");
};

Class HashTable_obj::__mClass;

void HashTable_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.HashTable"), hx::TCanCast< HashTable_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void HashTable_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
