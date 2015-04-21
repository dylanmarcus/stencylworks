#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_ArrayUtil
#include <de/polygonal/ds/ArrayUtil.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

Void ArrayUtil_obj::__construct()
{
	return null();
}

ArrayUtil_obj::~ArrayUtil_obj() { }

Dynamic ArrayUtil_obj::__CreateEmpty() { return  new ArrayUtil_obj; }
hx::ObjectPtr< ArrayUtil_obj > ArrayUtil_obj::__new()
{  hx::ObjectPtr< ArrayUtil_obj > result = new ArrayUtil_obj();
	result->__construct();
	return result;}

Dynamic ArrayUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayUtil_obj > result = new ArrayUtil_obj();
	result->__construct();
	return result;}

Dynamic ArrayUtil_obj::alloc( int x){
	HX_STACK_PUSH("ArrayUtil::alloc","de/polygonal/ds/ArrayUtil.hx",44);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(49)
	Dynamic a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(53)
	a = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(54)
	hx::IndexRef((a).mPtr,(x - (int)1)) = null();
	HX_STACK_LINE(59)
	return a;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayUtil_obj,alloc,return )

Dynamic ArrayUtil_obj::shrink( Dynamic a,int x){
	HX_STACK_PUSH("ArrayUtil::shrink","de/polygonal/ds/ArrayUtil.hx",66);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(72)
	a->__FieldRef(HX_CSTRING("length")) = x;
	HX_STACK_LINE(73)
	return a;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayUtil_obj,shrink,return )

Dynamic ArrayUtil_obj::copy( Dynamic src,Dynamic dst,hx::Null< int >  __o_min,hx::Null< int >  __o_max){
int min = __o_min.Default(0);
int max = __o_max.Default(-1);
	HX_STACK_PUSH("ArrayUtil::copy","de/polygonal/ds/ArrayUtil.hx",88);
	HX_STACK_ARG(src,"src");
	HX_STACK_ARG(dst,"dst");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
{
		HX_STACK_LINE(89)
		if (((max == (int)-1))){
			HX_STACK_LINE(89)
			max = src->__Field(HX_CSTRING("length"),true);
		}
		HX_STACK_LINE(99)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			int _g = min;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(100)
			while(((_g < max))){
				HX_STACK_LINE(100)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(100)
				hx::IndexRef((dst).mPtr,(j)++) = src->__GetItem(i);
			}
		}
		HX_STACK_LINE(101)
		return dst;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayUtil_obj,copy,return )

Void ArrayUtil_obj::fill( Dynamic dst,Dynamic x,hx::Null< int >  __o_k){
int k = __o_k.Default(-1);
	HX_STACK_PUSH("ArrayUtil::fill","de/polygonal/ds/ArrayUtil.hx",110);
	HX_STACK_ARG(dst,"dst");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(k,"k");
{
		HX_STACK_LINE(111)
		if (((k == (int)-1))){
			HX_STACK_LINE(111)
			k = dst->__Field(HX_CSTRING("length"),true);
		}
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(112)
			while(((_g < k))){
				HX_STACK_LINE(112)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(112)
				hx::IndexRef((dst).mPtr,i) = x;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayUtil_obj,fill,(void))

Void ArrayUtil_obj::assign( Dynamic dst,::Class C,Dynamic args,hx::Null< int >  __o_k){
int k = __o_k.Default(-1);
	HX_STACK_PUSH("ArrayUtil::assign","de/polygonal/ds/ArrayUtil.hx",121);
	HX_STACK_ARG(dst,"dst");
	HX_STACK_ARG(C,"C");
	HX_STACK_ARG(args,"args");
	HX_STACK_ARG(k,"k");
{
		HX_STACK_LINE(122)
		if (((k == (int)-1))){
			HX_STACK_LINE(122)
			k = dst->__Field(HX_CSTRING("length"),true);
		}
		HX_STACK_LINE(123)
		if (((args == null()))){
			HX_STACK_LINE(123)
			args = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(124)
			while(((_g < k))){
				HX_STACK_LINE(124)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(124)
				hx::IndexRef((dst).mPtr,i) = ::Type_obj::createInstance(C,args);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayUtil_obj,assign,(void))

Void ArrayUtil_obj::memmove( Dynamic a,int destination,int source,int n){
{
		HX_STACK_PUSH("ArrayUtil::memmove","de/polygonal/ds/ArrayUtil.hx",134);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(destination,"destination");
		HX_STACK_ARG(source,"source");
		HX_STACK_ARG(n,"n");
		HX_STACK_LINE(134)
		if (((source == destination))){
			HX_STACK_LINE(143)
			return null();
		}
		else{
			HX_STACK_LINE(145)
			if (((source <= destination))){
				HX_STACK_LINE(147)
				int i = (source + n);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(148)
				int j = (destination + n);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(149)
				{
					HX_STACK_LINE(149)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(149)
					while(((_g < n))){
						HX_STACK_LINE(149)
						int k = (_g)++;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(151)
						(i)--;
						HX_STACK_LINE(152)
						(j)--;
						HX_STACK_LINE(153)
						hx::IndexRef((a).mPtr,j) = a->__GetItem(i);
					}
				}
			}
			else{
				HX_STACK_LINE(158)
				int i = source;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(159)
				int j = destination;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(160)
				{
					HX_STACK_LINE(160)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(160)
					while(((_g < n))){
						HX_STACK_LINE(160)
						int k = (_g)++;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(162)
						hx::IndexRef((a).mPtr,j) = a->__GetItem(i);
						HX_STACK_LINE(163)
						(i)++;
						HX_STACK_LINE(164)
						(j)++;
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayUtil_obj,memmove,(void))

int ArrayUtil_obj::bsearchComparator( Dynamic a,Dynamic x,int min,int max,Dynamic comparator){
	HX_STACK_PUSH("ArrayUtil::bsearchComparator","de/polygonal/ds/ArrayUtil.hx",177);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_ARG(comparator,"comparator");
	HX_STACK_LINE(185)
	int l = min;		HX_STACK_VAR(l,"l");
	int m;		HX_STACK_VAR(m,"m");
	int h = (max + (int)1);		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(186)
	while(((l < h))){
		HX_STACK_LINE(188)
		m = (l + ((int((h - l)) >> int((int)1))));
		HX_STACK_LINE(189)
		if (((comparator(a->__GetItem(m),x).Cast< int >() < (int)0))){
			HX_STACK_LINE(190)
			l = (m + (int)1);
		}
		else{
			HX_STACK_LINE(192)
			h = m;
		}
	}
	HX_STACK_LINE(195)
	if (((bool((l <= max)) && bool((comparator(a->__GetItem(l),x).Cast< int >() == (int)0))))){
		HX_STACK_LINE(196)
		return l;
	}
	else{
		HX_STACK_LINE(198)
		return ~(int)(l);
	}
	HX_STACK_LINE(195)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ArrayUtil_obj,bsearchComparator,return )

int ArrayUtil_obj::bsearchInt( Array< int > a,int x,int min,int max){
	HX_STACK_PUSH("ArrayUtil::bsearchInt","de/polygonal/ds/ArrayUtil.hx",209);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(216)
	int l = min;		HX_STACK_VAR(l,"l");
	int m;		HX_STACK_VAR(m,"m");
	int h = (max + (int)1);		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(217)
	while(((l < h))){
		HX_STACK_LINE(219)
		m = (l + ((int((h - l)) >> int((int)1))));
		HX_STACK_LINE(220)
		if (((a->__get(m) < x))){
			HX_STACK_LINE(221)
			l = (m + (int)1);
		}
		else{
			HX_STACK_LINE(223)
			h = m;
		}
	}
	HX_STACK_LINE(226)
	if (((bool((l <= max)) && bool((a->__get(l) == x))))){
		HX_STACK_LINE(227)
		return l;
	}
	else{
		HX_STACK_LINE(229)
		return ~(int)(l);
	}
	HX_STACK_LINE(226)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayUtil_obj,bsearchInt,return )

int ArrayUtil_obj::bsearchFloat( Array< Float > a,Float x,int min,int max){
	HX_STACK_PUSH("ArrayUtil::bsearchFloat","de/polygonal/ds/ArrayUtil.hx",240);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(247)
	int l = min;		HX_STACK_VAR(l,"l");
	int m;		HX_STACK_VAR(m,"m");
	int h = (max + (int)1);		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(248)
	while(((l < h))){
		HX_STACK_LINE(250)
		m = (l + ((int((h - l)) >> int((int)1))));
		HX_STACK_LINE(251)
		if (((a->__get(m) < x))){
			HX_STACK_LINE(252)
			l = (m + (int)1);
		}
		else{
			HX_STACK_LINE(254)
			h = m;
		}
	}
	HX_STACK_LINE(257)
	if (((bool((l <= max)) && bool((a->__get(l) == x))))){
		HX_STACK_LINE(258)
		return l;
	}
	else{
		HX_STACK_LINE(260)
		return ~(int)(l);
	}
	HX_STACK_LINE(257)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayUtil_obj,bsearchFloat,return )

Void ArrayUtil_obj::shuffle( Dynamic a,Array< Float > rval){
{
		HX_STACK_PUSH("ArrayUtil::shuffle","de/polygonal/ds/ArrayUtil.hx",270);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(rval,"rval");
		HX_STACK_LINE(275)
		int s = a->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(276)
		if (((rval == null()))){
			HX_STACK_LINE(278)
			Dynamic m = hx::ClassOf< ::Math >();		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(279)
			while(((--(s) > (int)1))){
				HX_STACK_LINE(281)
				int i = ::Std_obj::_int((m->__Field(HX_CSTRING("random"),true)() * s));		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(282)
				Dynamic t = a->__GetItem(s);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(283)
				hx::IndexRef((a).mPtr,s) = a->__GetItem(i);
				HX_STACK_LINE(284)
				hx::IndexRef((a).mPtr,i) = t;
			}
		}
		else{
			HX_STACK_LINE(293)
			int j = (int)0;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(294)
			while(((--(s) > (int)1))){
				HX_STACK_LINE(296)
				int i = ::Std_obj::_int((rval->__get((j)++) * s));		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(297)
				Dynamic t = a->__GetItem(s);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(298)
				hx::IndexRef((a).mPtr,s) = a->__GetItem(i);
				HX_STACK_LINE(299)
				hx::IndexRef((a).mPtr,i) = t;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayUtil_obj,shuffle,(void))

Void ArrayUtil_obj::sortRange( Array< Float > a,Dynamic compare,bool useInsertionSort,int first,int count){
{
		HX_STACK_PUSH("ArrayUtil::sortRange","de/polygonal/ds/ArrayUtil.hx",314);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(compare,"compare");
		HX_STACK_ARG(useInsertionSort,"useInsertionSort");
		HX_STACK_ARG(first,"first");
		HX_STACK_ARG(count,"count");
		HX_STACK_LINE(315)
		int k = a->length;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(316)
		if (((k > (int)1))){
			HX_STACK_LINE(317)
			if ((useInsertionSort)){
				HX_STACK_LINE(324)
				::de::polygonal::ds::ArrayUtil_obj::_insertionSort(a,first,count,compare);
			}
			else{
				HX_STACK_LINE(326)
				::de::polygonal::ds::ArrayUtil_obj::_quickSort(a,first,count,compare);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ArrayUtil_obj,sortRange,(void))

Array< ::Dynamic > ArrayUtil_obj::quickPerm( int n){
	HX_STACK_PUSH("ArrayUtil::quickPerm","de/polygonal/ds/ArrayUtil.hx",336);
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(337)
	Array< ::Dynamic > results = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(339)
	Array< int > a = Array_obj< int >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(340)
	Array< int > p = Array_obj< int >::__new();		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(342)
	int i;		HX_STACK_VAR(i,"i");
	int j;		HX_STACK_VAR(j,"j");
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(344)
	{
		HX_STACK_LINE(344)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(344)
		while(((_g < n))){
			HX_STACK_LINE(344)
			int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(346)
			a[i1] = (i1 + (int)1);
			HX_STACK_LINE(347)
			p[i1] = (int)0;
		}
	}
	HX_STACK_LINE(350)
	results->push(a->copy());
	HX_STACK_LINE(352)
	i = (int)1;
	HX_STACK_LINE(353)
	while(((i < n))){
		HX_STACK_LINE(354)
		if (((p->__get(i) < i))){
			HX_STACK_LINE(357)
			j = (hx::Mod(i,(int)2) * p->__get(i));
			HX_STACK_LINE(358)
			tmp = a->__get(j);
			HX_STACK_LINE(359)
			a[j] = a->__get(i);
			HX_STACK_LINE(360)
			a[i] = tmp;
			HX_STACK_LINE(361)
			results->push(a->copy());
			HX_STACK_LINE(362)
			(p[i])++;
			HX_STACK_LINE(363)
			i = (int)1;
		}
		else{
			HX_STACK_LINE(367)
			p[i] = (int)0;
			HX_STACK_LINE(368)
			(i)++;
		}
	}
	HX_STACK_LINE(372)
	return results;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayUtil_obj,quickPerm,return )

bool ArrayUtil_obj::equals( Dynamic a,Dynamic b){
	HX_STACK_PUSH("ArrayUtil::equals","de/polygonal/ds/ArrayUtil.hx",376);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(377)
	if (((a->__Field(HX_CSTRING("length"),true) != b->__Field(HX_CSTRING("length"),true)))){
		HX_STACK_LINE(377)
		return false;
	}
	HX_STACK_LINE(378)
	{
		HX_STACK_LINE(378)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = a->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(378)
		while(((_g1 < _g))){
			HX_STACK_LINE(378)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(379)
			if (((a->__GetItem(i) != b->__GetItem(i)))){
				HX_STACK_LINE(380)
				return false;
			}
		}
	}
	HX_STACK_LINE(381)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayUtil_obj,equals,return )

Dynamic ArrayUtil_obj::split( Dynamic a,int n,int k){
	HX_STACK_PUSH("ArrayUtil::split","de/polygonal/ds/ArrayUtil.hx",389);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(n,"n");
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(394)
	Dynamic output = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(395)
	Dynamic b = null();		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(396)
	{
		HX_STACK_LINE(396)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(396)
		while(((_g < n))){
			HX_STACK_LINE(396)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(398)
			if (((hx::Mod(i,k) == (int)0))){
				HX_STACK_LINE(399)
				hx::IndexRef((output).mPtr,::Std_obj::_int((Float(i) / Float(k)))) = b = Dynamic( Array_obj<Dynamic>::__new());
			}
			HX_STACK_LINE(400)
			b->__Field(HX_CSTRING("push"),true)(a->__GetItem(i));
		}
	}
	HX_STACK_LINE(402)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayUtil_obj,split,return )

Void ArrayUtil_obj::_insertionSort( Array< Float > a,int first,int k,Dynamic cmp){
{
		HX_STACK_PUSH("ArrayUtil::_insertionSort","de/polygonal/ds/ArrayUtil.hx",406);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(first,"first");
		HX_STACK_ARG(k,"k");
		HX_STACK_ARG(cmp,"cmp");
		HX_STACK_LINE(407)
		int _g1 = (first + (int)1);		HX_STACK_VAR(_g1,"_g1");
		int _g = (first + k);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(407)
		while(((_g1 < _g))){
			HX_STACK_LINE(407)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(409)
			Float x = a->__get(i);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(410)
			int j = i;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(411)
			while(((j > first))){
				HX_STACK_LINE(413)
				Float y = a->__get((j - (int)1));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(414)
				if (((cmp(y,x).Cast< int >() > (int)0))){
					HX_STACK_LINE(416)
					a[j] = y;
					HX_STACK_LINE(417)
					(j)--;
				}
				else{
					HX_STACK_LINE(420)
					break;
				}
			}
			HX_STACK_LINE(423)
			a[j] = x;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayUtil_obj,_insertionSort,(void))

Void ArrayUtil_obj::_quickSort( Array< Float > a,int first,int k,Dynamic cmp){
{
		HX_STACK_PUSH("ArrayUtil::_quickSort","de/polygonal/ds/ArrayUtil.hx",428);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(first,"first");
		HX_STACK_ARG(k,"k");
		HX_STACK_ARG(cmp,"cmp");
		HX_STACK_LINE(429)
		int last = ((first + k) - (int)1);		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(430)
		int lo = first;		HX_STACK_VAR(lo,"lo");
		HX_STACK_LINE(431)
		int hi = last;		HX_STACK_VAR(hi,"hi");
		HX_STACK_LINE(432)
		if (((k > (int)1))){
			HX_STACK_LINE(434)
			int i0 = first;		HX_STACK_VAR(i0,"i0");
			HX_STACK_LINE(435)
			int i1 = (i0 + ((int(k) >> int((int)1))));		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(436)
			int i2 = ((i0 + k) - (int)1);		HX_STACK_VAR(i2,"i2");
			HX_STACK_LINE(437)
			Float t0 = a->__get(i0);		HX_STACK_VAR(t0,"t0");
			HX_STACK_LINE(438)
			Float t1 = a->__get(i1);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(439)
			Float t2 = a->__get(i2);		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(440)
			int mid;		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(441)
			int t = cmp(t0,t2).Cast< int >();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(442)
			if (((bool((t < (int)0)) && bool((cmp(t0,t1).Cast< int >() < (int)0))))){
				HX_STACK_LINE(443)
				mid = (  (((cmp(t1,t2).Cast< int >() < (int)0))) ? int(i1) : int(i2) );
			}
			else{
				HX_STACK_LINE(445)
				if (((bool((cmp(t1,t0).Cast< int >() < (int)0)) && bool((cmp(t1,t2).Cast< int >() < (int)0))))){
					HX_STACK_LINE(447)
					mid = (  (((t < (int)0))) ? int(i0) : int(i2) );
				}
				else{
					HX_STACK_LINE(449)
					mid = (  (((cmp(t2,t0).Cast< int >() < (int)0))) ? int(i1) : int(i0) );
				}
			}
			HX_STACK_LINE(452)
			Float pivot = a->__get(mid);		HX_STACK_VAR(pivot,"pivot");
			HX_STACK_LINE(453)
			a[mid] = a->__get(first);
			HX_STACK_LINE(455)
			while(((lo < hi))){
				HX_STACK_LINE(457)
				while(((bool((cmp(pivot,a->__get(hi)).Cast< int >() < (int)0)) && bool((lo < hi))))){
					HX_STACK_LINE(457)
					(hi)--;
				}
				HX_STACK_LINE(458)
				if (((hi != lo))){
					HX_STACK_LINE(460)
					a[lo] = a->__get(hi);
					HX_STACK_LINE(461)
					(lo)++;
				}
				HX_STACK_LINE(463)
				while(((bool((cmp(pivot,a->__get(lo)).Cast< int >() > (int)0)) && bool((lo < hi))))){
					HX_STACK_LINE(463)
					(lo)++;
				}
				HX_STACK_LINE(464)
				if (((hi != lo))){
					HX_STACK_LINE(466)
					a[hi] = a->__get(lo);
					HX_STACK_LINE(467)
					(hi)--;
				}
			}
			HX_STACK_LINE(471)
			a[lo] = pivot;
			HX_STACK_LINE(472)
			::de::polygonal::ds::ArrayUtil_obj::_quickSort(a,first,(lo - first),cmp);
			HX_STACK_LINE(473)
			::de::polygonal::ds::ArrayUtil_obj::_quickSort(a,(lo + (int)1),(last - lo),cmp);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayUtil_obj,_quickSort,(void))


ArrayUtil_obj::ArrayUtil_obj()
{
}

void ArrayUtil_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayUtil);
	HX_MARK_END_CLASS();
}

void ArrayUtil_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ArrayUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"split") ) { return split_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shrink") ) { return shrink_dyn(); }
		if (HX_FIELD_EQ(inName,"assign") ) { return assign_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"memmove") ) { return memmove_dyn(); }
		if (HX_FIELD_EQ(inName,"shuffle") ) { return shuffle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sortRange") ) { return sortRange_dyn(); }
		if (HX_FIELD_EQ(inName,"quickPerm") ) { return quickPerm_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bsearchInt") ) { return bsearchInt_dyn(); }
		if (HX_FIELD_EQ(inName,"_quickSort") ) { return _quickSort_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bsearchFloat") ) { return bsearchFloat_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_insertionSort") ) { return _insertionSort_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bsearchComparator") ) { return bsearchComparator_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("alloc"),
	HX_CSTRING("shrink"),
	HX_CSTRING("copy"),
	HX_CSTRING("fill"),
	HX_CSTRING("assign"),
	HX_CSTRING("memmove"),
	HX_CSTRING("bsearchComparator"),
	HX_CSTRING("bsearchInt"),
	HX_CSTRING("bsearchFloat"),
	HX_CSTRING("shuffle"),
	HX_CSTRING("sortRange"),
	HX_CSTRING("quickPerm"),
	HX_CSTRING("equals"),
	HX_CSTRING("split"),
	HX_CSTRING("_insertionSort"),
	HX_CSTRING("_quickSort"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayUtil_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayUtil_obj::__mClass,"__mClass");
};

Class ArrayUtil_obj::__mClass;

void ArrayUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.ArrayUtil"), hx::TCanCast< ArrayUtil_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ArrayUtil_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
