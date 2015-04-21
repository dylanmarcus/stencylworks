#include <hxcpp.h>

#ifndef INCLUDED_haxe_Int64
#include <haxe/Int64.h>
#endif
namespace haxe{

Void Int64_obj::__construct(int high,int low)
{
HX_STACK_PUSH("Int64::new","haxe/Int64.hx",29);
{
	HX_STACK_LINE(30)
	this->high = high;
	HX_STACK_LINE(31)
	this->low = low;
}
;
	return null();
}

Int64_obj::~Int64_obj() { }

Dynamic Int64_obj::__CreateEmpty() { return  new Int64_obj; }
hx::ObjectPtr< Int64_obj > Int64_obj::__new(int high,int low)
{  hx::ObjectPtr< Int64_obj > result = new Int64_obj();
	result->__construct(high,low);
	return result;}

Dynamic Int64_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Int64_obj > result = new Int64_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Int64_obj::toString( ){
	HX_STACK_PUSH("Int64::toString","haxe/Int64.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_LINE(54)
	if (((((int(this->high) | int(this->low))) == (int)0))){
		HX_STACK_LINE(55)
		return HX_CSTRING("0");
	}
	HX_STACK_LINE(56)
	::String str = HX_CSTRING("");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(57)
	bool neg = false;		HX_STACK_VAR(neg,"neg");
	HX_STACK_LINE(58)
	::haxe::Int64 i = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(59)
	if (((i->high < (int)0))){
		HX_STACK_LINE(60)
		neg = true;
		struct _Function_2_1{
			inline static ::haxe::Int64 Block( ::haxe::Int64 &i){
				HX_STACK_PUSH("*::closure","haxe/Int64.hx",61);
				{
					HX_STACK_LINE(61)
					int high = ~(int)(i->high);		HX_STACK_VAR(high,"high");
					HX_STACK_LINE(61)
					int low = -(i->low);		HX_STACK_VAR(low,"low");
					HX_STACK_LINE(61)
					if (((low == (int)0))){
						HX_STACK_LINE(61)
						(high)++;
					}
					HX_STACK_LINE(61)
					return ::haxe::Int64_obj::__new(high,low);
				}
				return null();
			}
		};
		HX_STACK_LINE(61)
		i = _Function_2_1::Block(i);
	}
	HX_STACK_LINE(63)
	::haxe::Int64 ten = ::haxe::Int64_obj::__new((int)0,(int)10);		HX_STACK_VAR(ten,"ten");
	HX_STACK_LINE(64)
	while((!(((((int(i->high) | int(i->low))) == (int)0))))){
		HX_STACK_LINE(65)
		Dynamic r = ::haxe::Int64_obj::divMod(i,ten);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(66)
		str = (r->__Field(HX_CSTRING("modulus"),true)->__Field(HX_CSTRING("low"),true) + str);
		HX_STACK_LINE(67)
		i = r->__Field(HX_CSTRING("quotient"),true);
	}
	HX_STACK_LINE(69)
	if ((neg)){
		HX_STACK_LINE(69)
		str = (HX_CSTRING("-") + str);
	}
	HX_STACK_LINE(70)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC0(Int64_obj,toString,return )

::haxe::Int64 Int64_obj::sub( ::haxe::Int64 a,::haxe::Int64 b){
	HX_STACK_PUSH("Int64::sub","haxe/Int64.hx",106);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(107)
	int high = (a->high - b->high);		HX_STACK_VAR(high,"high");
	HX_STACK_LINE(108)
	int low = (a->low - b->low);		HX_STACK_VAR(low,"low");
	HX_STACK_LINE(109)
	if (((::haxe::Int64_obj::uicompare(a->low,b->low) < (int)0))){
		HX_STACK_LINE(110)
		(high)--;
	}
	HX_STACK_LINE(111)
	return ::haxe::Int64_obj::__new(high,low);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_obj,sub,return )

Dynamic Int64_obj::divMod( ::haxe::Int64 modulus,::haxe::Int64 divisor){
	HX_STACK_PUSH("Int64::divMod","haxe/Int64.hx",131);
	HX_STACK_ARG(modulus,"modulus");
	HX_STACK_ARG(divisor,"divisor");
	HX_STACK_LINE(132)
	::haxe::Int64 quotient = ::haxe::Int64_obj::__new((int)0,(int)0);		HX_STACK_VAR(quotient,"quotient");
	HX_STACK_LINE(133)
	int mask_high = (int)0;		HX_STACK_VAR(mask_high,"mask_high");
	int mask_low = (int)1;		HX_STACK_VAR(mask_low,"mask_low");
	HX_STACK_LINE(134)
	divisor = ::haxe::Int64_obj::__new(divisor->high,divisor->low);
	HX_STACK_LINE(135)
	while(((divisor->high >= (int)0))){
		struct _Function_2_1{
			inline static int Block( ::haxe::Int64 &divisor,::haxe::Int64 &modulus){
				HX_STACK_PUSH("*::closure","haxe/Int64.hx",136);
				{
					HX_STACK_LINE(136)
					int v = ::haxe::Int64_obj::uicompare(divisor->high,modulus->high);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(136)
					return (  (((v != (int)0))) ? int(v) : int(::haxe::Int64_obj::uicompare(divisor->low,modulus->low)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(136)
		int cmp = _Function_2_1::Block(divisor,modulus);		HX_STACK_VAR(cmp,"cmp");
		HX_STACK_LINE(137)
		divisor->high = (int((int(divisor->high) << int((int)1))) | int(hx::UShr(divisor->low,(int)31)));
		HX_STACK_LINE(138)
		hx::ShlEq(divisor->low,(int)1);
		HX_STACK_LINE(139)
		mask_high = (int((int(mask_high) << int((int)1))) | int(hx::UShr(mask_low,(int)31)));
		HX_STACK_LINE(140)
		hx::ShlEq(mask_low,(int)1);
		HX_STACK_LINE(141)
		if (((cmp >= (int)0))){
			HX_STACK_LINE(141)
			break;
		}
	}
	HX_STACK_LINE(143)
	while(((((int(mask_low) | int(mask_high))) != (int)0))){
		struct _Function_2_1{
			inline static int Block( ::haxe::Int64 &divisor,::haxe::Int64 &modulus){
				HX_STACK_PUSH("*::closure","haxe/Int64.hx",144);
				{
					HX_STACK_LINE(144)
					int v = ::haxe::Int64_obj::uicompare(modulus->high,divisor->high);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(144)
					return (  (((v != (int)0))) ? int(v) : int(::haxe::Int64_obj::uicompare(modulus->low,divisor->low)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(144)
		if (((_Function_2_1::Block(divisor,modulus) >= (int)0))){
			HX_STACK_LINE(145)
			hx::OrEq(quotient->high,mask_high);
			HX_STACK_LINE(146)
			hx::OrEq(quotient->low,mask_low);
			HX_STACK_LINE(147)
			modulus = ::haxe::Int64_obj::sub(modulus,divisor);
		}
		HX_STACK_LINE(149)
		mask_low = (int(hx::UShr(mask_low,(int)1)) | int((int(mask_high) << int((int)31))));
		HX_STACK_LINE(150)
		hx::UShrEq(mask_high,(int)1);
		HX_STACK_LINE(152)
		divisor->low = (int(hx::UShr(divisor->low,(int)1)) | int((int(divisor->high) << int((int)31))));
		HX_STACK_LINE(153)
		hx::UShrEq(divisor->high,(int)1);
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::Int64 &quotient,::haxe::Int64 &modulus){
			HX_STACK_PUSH("*::closure","haxe/Int64.hx",155);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("quotient") , quotient,false);
				__result->Add(HX_CSTRING("modulus") , modulus,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(155)
	return _Function_1_1::Block(quotient,modulus);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_obj,divMod,return )

int Int64_obj::uicompare( int a,int b){
	HX_STACK_PUSH("Int64::uicompare","haxe/Int64.hx",214);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	struct _Function_1_1{
		inline static int Block( int &b,int &a){
			HX_STACK_PUSH("*::closure","haxe/Int64.hx",215);
			{
				HX_STACK_LINE(215)
				return (  (((b < (int)0))) ? int((~(int)(b) - ~(int)(a))) : int((int)1) );
			}
			return null();
		}
	};
	HX_STACK_LINE(214)
	return (  (((a < (int)0))) ? int(_Function_1_1::Block(b,a)) : int((  (((b < (int)0))) ? int((int)-1) : int((a - b)) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int64_obj,uicompare,return )


Int64_obj::Int64_obj()
{
}

void Int64_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Int64);
	HX_MARK_MEMBER_NAME(low,"low");
	HX_MARK_MEMBER_NAME(high,"high");
	HX_MARK_END_CLASS();
}

void Int64_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(low,"low");
	HX_VISIT_MEMBER_NAME(high,"high");
}

Dynamic Int64_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return sub_dyn(); }
		if (HX_FIELD_EQ(inName,"low") ) { return low; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"high") ) { return high; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"divMod") ) { return divMod_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uicompare") ) { return uicompare_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Int64_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"low") ) { low=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"high") ) { high=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Int64_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("low"));
	outFields->push(HX_CSTRING("high"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sub"),
	HX_CSTRING("divMod"),
	HX_CSTRING("uicompare"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("low"),
	HX_CSTRING("high"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int64_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int64_obj::__mClass,"__mClass");
};

Class Int64_obj::__mClass;

void Int64_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.Int64"), hx::TCanCast< Int64_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Int64_obj::__boot()
{
}

} // end namespace haxe
