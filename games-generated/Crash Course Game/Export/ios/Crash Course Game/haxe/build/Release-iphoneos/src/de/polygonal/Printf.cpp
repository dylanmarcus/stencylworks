#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_de_polygonal_Printf
#include <de/polygonal/Printf.h>
#endif
#ifndef INCLUDED_de_polygonal__Printf_FloatType
#include <de/polygonal/_Printf/FloatType.h>
#endif
#ifndef INCLUDED_de_polygonal__Printf_FormatDataType
#include <de/polygonal/_Printf/FormatDataType.h>
#endif
#ifndef INCLUDED_de_polygonal__Printf_FormatFlags
#include <de/polygonal/_Printf/FormatFlags.h>
#endif
#ifndef INCLUDED_de_polygonal__Printf_FormatToken
#include <de/polygonal/_Printf/FormatToken.h>
#endif
#ifndef INCLUDED_de_polygonal__Printf_IntegerType
#include <de/polygonal/_Printf/IntegerType.h>
#endif
#ifndef INCLUDED_haxe_Int64
#include <haxe/Int64.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace de{
namespace polygonal{

Void Printf_obj::__construct()
{
	return null();
}

Printf_obj::~Printf_obj() { }

Dynamic Printf_obj::__CreateEmpty() { return  new Printf_obj; }
hx::ObjectPtr< Printf_obj > Printf_obj::__new()
{  hx::ObjectPtr< Printf_obj > result = new Printf_obj();
	result->__construct();
	return result;}

Dynamic Printf_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Printf_obj > result = new Printf_obj();
	result->__construct();
	return result;}

::haxe::ds::IntMap Printf_obj::dataTypeMap;

::haxe::ds::IntMap Printf_obj::formatIntFuncHash;

::haxe::ds::IntMap Printf_obj::formatFloatFuncHash;

::haxe::ds::IntMap Printf_obj::formatStringFuncHash;

bool Printf_obj::_initialized;

Void Printf_obj::init( ){
{
		HX_STACK_PUSH("Printf::init","de/polygonal/Printf.hx",62);
		HX_STACK_LINE(63)
		::de::polygonal::Printf_obj::dataTypeMap = ::de::polygonal::Printf_obj::makeDataTypeMap();
		HX_STACK_LINE(65)
		::de::polygonal::Printf_obj::formatIntFuncHash = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(66)
		::de::polygonal::Printf_obj::formatIntFuncHash->set((int)1,::de::polygonal::Printf_obj::formatSignedDecimal_dyn());
		HX_STACK_LINE(67)
		::de::polygonal::Printf_obj::formatIntFuncHash->set((int)2,::de::polygonal::Printf_obj::formatUnsignedDecimal_dyn());
		HX_STACK_LINE(68)
		::de::polygonal::Printf_obj::formatIntFuncHash->set((int)0,::de::polygonal::Printf_obj::formatCharacter_dyn());
		HX_STACK_LINE(69)
		::de::polygonal::Printf_obj::formatIntFuncHash->set((int)4,::de::polygonal::Printf_obj::formatHexadecimal_dyn());
		HX_STACK_LINE(70)
		::de::polygonal::Printf_obj::formatIntFuncHash->set((int)3,::de::polygonal::Printf_obj::formatOctal_dyn());
		HX_STACK_LINE(71)
		::de::polygonal::Printf_obj::formatIntFuncHash->set((int)5,::de::polygonal::Printf_obj::formatBinary_dyn());
		HX_STACK_LINE(73)
		::de::polygonal::Printf_obj::formatFloatFuncHash = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(74)
		::de::polygonal::Printf_obj::formatFloatFuncHash->set((int)0,::de::polygonal::Printf_obj::formatNormalFloat_dyn());
		HX_STACK_LINE(75)
		::de::polygonal::Printf_obj::formatFloatFuncHash->set((int)1,::de::polygonal::Printf_obj::formatScientific_dyn());
		HX_STACK_LINE(76)
		::de::polygonal::Printf_obj::formatFloatFuncHash->set((int)2,::de::polygonal::Printf_obj::formatNaturalFloat_dyn());
		HX_STACK_LINE(78)
		::de::polygonal::Printf_obj::formatStringFuncHash = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(79)
		::de::polygonal::Printf_obj::formatStringFuncHash->set((int)2,::de::polygonal::Printf_obj::formatString_dyn());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Printf_obj,init,(void))

::haxe::ds::IntMap Printf_obj::makeDataTypeMap( ){
	HX_STACK_PUSH("Printf::makeDataTypeMap","de/polygonal/Printf.hx",108);
	HX_STACK_LINE(109)
	::haxe::ds::IntMap hash = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(hash,"hash");
	HX_STACK_LINE(110)
	hash->set((int)105,::de::polygonal::_Printf::FormatDataType_obj::FmtInteger(::de::polygonal::_Printf::IntegerType_obj::ISignedDecimal));
	HX_STACK_LINE(111)
	hash->set((int)100,::de::polygonal::_Printf::FormatDataType_obj::FmtInteger(::de::polygonal::_Printf::IntegerType_obj::ISignedDecimal));
	HX_STACK_LINE(112)
	hash->set((int)117,::de::polygonal::_Printf::FormatDataType_obj::FmtInteger(::de::polygonal::_Printf::IntegerType_obj::IUnsignedDecimal));
	HX_STACK_LINE(113)
	hash->set((int)99,::de::polygonal::_Printf::FormatDataType_obj::FmtInteger(::de::polygonal::_Printf::IntegerType_obj::ICharacter));
	HX_STACK_LINE(114)
	hash->set((int)120,::de::polygonal::_Printf::FormatDataType_obj::FmtInteger(::de::polygonal::_Printf::IntegerType_obj::IHex));
	HX_STACK_LINE(115)
	hash->set((int)88,::de::polygonal::_Printf::FormatDataType_obj::FmtInteger(::de::polygonal::_Printf::IntegerType_obj::IHex));
	HX_STACK_LINE(116)
	hash->set((int)111,::de::polygonal::_Printf::FormatDataType_obj::FmtInteger(::de::polygonal::_Printf::IntegerType_obj::IOctal));
	HX_STACK_LINE(117)
	hash->set((int)98,::de::polygonal::_Printf::FormatDataType_obj::FmtInteger(::de::polygonal::_Printf::IntegerType_obj::IBin));
	HX_STACK_LINE(119)
	hash->set((int)102,::de::polygonal::_Printf::FormatDataType_obj::FmtFloat(::de::polygonal::_Printf::FloatType_obj::FNormal));
	HX_STACK_LINE(120)
	hash->set((int)101,::de::polygonal::_Printf::FormatDataType_obj::FmtFloat(::de::polygonal::_Printf::FloatType_obj::FScientific));
	HX_STACK_LINE(121)
	hash->set((int)69,::de::polygonal::_Printf::FormatDataType_obj::FmtFloat(::de::polygonal::_Printf::FloatType_obj::FScientific));
	HX_STACK_LINE(122)
	hash->set((int)103,::de::polygonal::_Printf::FormatDataType_obj::FmtFloat(::de::polygonal::_Printf::FloatType_obj::FNatural));
	HX_STACK_LINE(123)
	hash->set((int)71,::de::polygonal::_Printf::FormatDataType_obj::FmtFloat(::de::polygonal::_Printf::FloatType_obj::FNatural));
	HX_STACK_LINE(125)
	hash->set((int)115,::de::polygonal::_Printf::FormatDataType_obj::FmtString);
	HX_STACK_LINE(127)
	hash->set((int)112,::de::polygonal::_Printf::FormatDataType_obj::FmtPointer);
	HX_STACK_LINE(128)
	hash->set((int)110,::de::polygonal::_Printf::FormatDataType_obj::FmtNothing);
	HX_STACK_LINE(130)
	return hash;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Printf_obj,makeDataTypeMap,return )

::String Printf_obj::format( ::String fmt,Dynamic args){
	HX_STACK_PUSH("Printf::format","de/polygonal/Printf.hx",523);
	HX_STACK_ARG(fmt,"fmt");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(524)
	if ((!(::de::polygonal::Printf_obj::_initialized))){
		HX_STACK_LINE(526)
		::de::polygonal::Printf_obj::_initialized = true;
		HX_STACK_LINE(527)
		::de::polygonal::Printf_obj::init();
	}
	HX_STACK_LINE(530)
	::String output = HX_CSTRING("");		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(531)
	int argIndex = (int)0;		HX_STACK_VAR(argIndex,"argIndex");
	HX_STACK_LINE(532)
	Array< ::Dynamic > tokens = ::de::polygonal::Printf_obj::tokenize(fmt);		HX_STACK_VAR(tokens,"tokens");
	HX_STACK_LINE(533)
	{
		HX_STACK_LINE(533)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(533)
		while(((_g < tokens->length))){
			HX_STACK_LINE(533)
			::de::polygonal::_Printf::FormatToken token = tokens->__get(_g).StaticCast< ::de::polygonal::_Printf::FormatToken >();		HX_STACK_VAR(token,"token");
			HX_STACK_LINE(533)
			++(_g);
			HX_STACK_LINE(535)
			{
				::de::polygonal::_Printf::FormatToken _switch_1 = (token);
				switch((_switch_1)->GetIndex()){
					case 3: {
						HX_STACK_LINE(537)
						hx::Throw (HX_CSTRING("invalid format specifier"));
					}
					;break;
					case 0: {
						::String str = _switch_1->__Param(0);
{
							HX_STACK_LINE(539)
							hx::AddEq(output,str);
						}
					}
					;break;
					case 2: {
						::String name = _switch_1->__Param(0);
{
							HX_STACK_LINE(542)
							if ((!(::Reflect_obj::hasField(args->__GetItem((int)0),name)))){
								HX_STACK_LINE(543)
								hx::Throw ((HX_CSTRING("no field named ") + name));
							}
							HX_STACK_LINE(544)
							hx::AddEq(output,::Std_obj::string(::Reflect_obj::field(args->__GetItem((int)0),name)));
						}
					}
					;break;
					case 1: {
						Dynamic tagArgs = _switch_1->__Param(1);
						::de::polygonal::_Printf::FormatDataType type = _switch_1->__Param(0);
{
							HX_STACK_LINE(546)
							tagArgs->__FieldRef(HX_CSTRING("width")) = (  (((tagArgs->__Field(HX_CSTRING("width"),true) != null()))) ? Dynamic(tagArgs->__Field(HX_CSTRING("width"),true)) : Dynamic(hx::TCast< Int >::cast(args->__GetItem((argIndex)++))) );
							HX_STACK_LINE(547)
							tagArgs->__FieldRef(HX_CSTRING("precision")) = (  (((tagArgs->__Field(HX_CSTRING("precision"),true) != null()))) ? Dynamic(tagArgs->__Field(HX_CSTRING("precision"),true)) : Dynamic(hx::TCast< Int >::cast(args->__GetItem((argIndex)++))) );
							HX_STACK_LINE(548)
							Dynamic value = args->__GetItem((argIndex)++);		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(550)
							Dynamic formatFunction;		HX_STACK_VAR(formatFunction,"formatFunction");
							HX_STACK_LINE(552)
							{
								::de::polygonal::_Printf::FormatDataType _switch_2 = (type);
								switch((_switch_2)->GetIndex()){
									case 1: {
										::de::polygonal::_Printf::FloatType floatType = _switch_2->__Param(0);
{
											HX_STACK_LINE(554)
											formatFunction = ::de::polygonal::Printf_obj::formatFloatFuncHash->get(floatType->__Index());
										}
									}
									;break;
									case 0: {
										::de::polygonal::_Printf::IntegerType integerType = _switch_2->__Param(0);
{
											HX_STACK_LINE(556)
											formatFunction = ::de::polygonal::Printf_obj::formatIntFuncHash->get(integerType->__Index());
										}
									}
									;break;
									case 2: {
										HX_STACK_LINE(558)
										formatFunction = ::de::polygonal::Printf_obj::formatStringFuncHash->get((int)2);
									}
									;break;
									case 3: {
										HX_STACK_LINE(560)
										hx::Throw (HX_CSTRING("specifier 'p' is not supported"));
									}
									;break;
									case 4: {
										HX_STACK_LINE(562)
										hx::Throw (HX_CSTRING("specifier 'n' is not supported"));
									}
									;break;
								}
							}
							HX_STACK_LINE(566)
							hx::AddEq(output,formatFunction(value,tagArgs).Cast< ::String >());
						}
					}
					;break;
				}
			}
		}
	}
	HX_STACK_LINE(569)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printf_obj,format,return )

Array< ::Dynamic > Printf_obj::tokenize( ::String fmt){
	HX_STACK_PUSH("Printf::tokenize","de/polygonal/Printf.hx",573);
	HX_STACK_ARG(fmt,"fmt");
	HX_STACK_LINE(574)
	Array< ::Dynamic > tokens = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tokens,"tokens");
	HX_STACK_LINE(575)
	return tokens;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Printf_obj,tokenize,return )

::String Printf_obj::formatBinary( int value,Dynamic args){
	HX_STACK_PUSH("Printf::formatBinary","de/polygonal/Printf.hx",579);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(580)
	::String output = HX_CSTRING("");		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(581)
	int flags = args->__Field(HX_CSTRING("flags"),true);		HX_STACK_VAR(flags,"flags");
	HX_STACK_LINE(582)
	Dynamic precision = args->__Field(HX_CSTRING("precision"),true);		HX_STACK_VAR(precision,"precision");
	HX_STACK_LINE(583)
	Dynamic width = args->__Field(HX_CSTRING("width"),true);		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(585)
	if (((precision == (int)-1))){
		HX_STACK_LINE(585)
		precision = (int)1;
	}
	HX_STACK_LINE(587)
	if (((value != (int)0))){
		HX_STACK_LINE(589)
		if (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::LengthH->__Index()))))) != (int)0))){
			HX_STACK_LINE(590)
			hx::AndEq(value,(int)65535);
		}
		HX_STACK_LINE(593)
		int i = value;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(594)
		do{
			HX_STACK_LINE(596)
			output = (((  (((((int(i) & int((int)1))) > (int)0))) ? ::String(HX_CSTRING("1")) : ::String(HX_CSTRING("0")) )) + output);
			HX_STACK_LINE(597)
			hx::UShrEq(i,(int)1);
		}
while(((i > (int)0)));
		HX_STACK_LINE(601)
		if (((precision > (int)1))){
			HX_STACK_LINE(603)
			if (((precision > output.length))){
				HX_STACK_LINE(604)
				output = ::de::polygonal::Printf_obj::lpad(output,HX_CSTRING("0"),precision);
			}
			HX_STACK_LINE(606)
			if (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Sharp->__Index()))))) != (int)0))){
				HX_STACK_LINE(606)
				output = (HX_CSTRING("b") + output);
			}
		}
	}
	struct _Function_1_1{
		inline static ::String Block( Dynamic &width,::String &output){
			HX_STACK_PUSH("*::closure","de/polygonal/Printf.hx",612);
			{
				HX_STACK_LINE(612)
				return (  (((width > output.length))) ? ::String(::de::polygonal::Printf_obj::rpad(output,HX_CSTRING(" "),width)) : ::String(output) );
			}
			return null();
		}
	};
	HX_STACK_LINE(610)
	return (  (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Minus->__Index()))))) != (int)0))) ? ::String(_Function_1_1::Block(width,output)) : ::String((  (((width > output.length))) ? ::String(::de::polygonal::Printf_obj::lpad(output,(  (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Zero->__Index()))))) != (int)0))) ? ::String(HX_CSTRING("0")) : ::String(HX_CSTRING(" ")) ),width)) : ::String(output) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printf_obj,formatBinary,return )

::String Printf_obj::formatOctal( int value,Dynamic args){
	HX_STACK_PUSH("Printf::formatOctal","de/polygonal/Printf.hx",618);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(619)
	::String output = HX_CSTRING("");		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(620)
	int flags = args->__Field(HX_CSTRING("flags"),true);		HX_STACK_VAR(flags,"flags");
	HX_STACK_LINE(621)
	Dynamic precision = args->__Field(HX_CSTRING("precision"),true);		HX_STACK_VAR(precision,"precision");
	HX_STACK_LINE(622)
	Dynamic width = args->__Field(HX_CSTRING("width"),true);		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(624)
	if (((precision == (int)-1))){
		HX_STACK_LINE(624)
		precision = (int)1;
	}
	HX_STACK_LINE(626)
	if (((value != (int)0))){
		HX_STACK_LINE(628)
		if (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::LengthH->__Index()))))) != (int)0))){
			HX_STACK_LINE(628)
			hx::AndEq(value,(int)65535);
		}
		HX_STACK_LINE(630)
		output = ::de::polygonal::Printf_obj::toOct(value);
		HX_STACK_LINE(632)
		if (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Sharp->__Index()))))) != (int)0))){
			HX_STACK_LINE(632)
			output = (HX_CSTRING("0") + output);
		}
		HX_STACK_LINE(634)
		if (((bool((precision > (int)1)) && bool((output.length < precision))))){
			HX_STACK_LINE(635)
			output = ::de::polygonal::Printf_obj::lpad(output,HX_CSTRING("0"),precision);
		}
	}
	struct _Function_1_1{
		inline static ::String Block( Dynamic &width,::String &output){
			HX_STACK_PUSH("*::closure","de/polygonal/Printf.hx",640);
			{
				HX_STACK_LINE(640)
				return (  (((width > output.length))) ? ::String(::de::polygonal::Printf_obj::rpad(output,HX_CSTRING(" "),width)) : ::String(output) );
			}
			return null();
		}
	};
	HX_STACK_LINE(638)
	return (  (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Minus->__Index()))))) != (int)0))) ? ::String(_Function_1_1::Block(width,output)) : ::String((  (((width > output.length))) ? ::String(::de::polygonal::Printf_obj::lpad(output,(  (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Zero->__Index()))))) != (int)0))) ? ::String(HX_CSTRING("0")) : ::String(HX_CSTRING(" ")) ),width)) : ::String(output) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printf_obj,formatOctal,return )

::String Printf_obj::formatHexadecimal( int value,Dynamic args){
	HX_STACK_PUSH("Printf::formatHexadecimal","de/polygonal/Printf.hx",646);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(647)
	::String output = HX_CSTRING("");		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(648)
	int flags = args->__Field(HX_CSTRING("flags"),true);		HX_STACK_VAR(flags,"flags");
	HX_STACK_LINE(649)
	Dynamic precision = args->__Field(HX_CSTRING("precision"),true);		HX_STACK_VAR(precision,"precision");
	HX_STACK_LINE(650)
	Dynamic width = args->__Field(HX_CSTRING("width"),true);		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(652)
	if (((precision == (int)-1))){
		HX_STACK_LINE(652)
		precision = (int)1;
	}
	HX_STACK_LINE(654)
	if (((value != (int)0))){
		HX_STACK_LINE(656)
		if (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::LengthH->__Index()))))) != (int)0))){
			HX_STACK_LINE(657)
			hx::AndEq(value,(int)65535);
		}
		struct _Function_2_1{
			inline static ::String Block( int &value){
				HX_STACK_PUSH("*::closure","de/polygonal/Printf.hx",659);
				{
					HX_STACK_LINE(659)
					int x = value;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(659)
					::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(659)
					::String hexChars = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(hexChars,"hexChars");
					HX_STACK_LINE(659)
					do{
						HX_STACK_LINE(659)
						s = (hexChars.charAt((int(x) & int((int)15))) + s);
						HX_STACK_LINE(659)
						hx::UShrEq(x,(int)4);
					}
while(((x > (int)0)));
					HX_STACK_LINE(659)
					return s;
				}
				return null();
			}
		};
		HX_STACK_LINE(659)
		output = _Function_2_1::Block(value);
		HX_STACK_LINE(661)
		if (((bool((precision > (int)1)) && bool((output.length < precision))))){
			HX_STACK_LINE(662)
			output = ::de::polygonal::Printf_obj::lpad(output,HX_CSTRING("0"),precision);
		}
		HX_STACK_LINE(664)
		if (((bool((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Sharp->__Index()))))) != (int)0)) && bool((value != (int)0))))){
			HX_STACK_LINE(665)
			output = (HX_CSTRING("0x") + output);
		}
		HX_STACK_LINE(667)
		output = (  (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::UpperCase->__Index()))))) != (int)0))) ? ::String(output.toUpperCase()) : ::String(output.toLowerCase()) );
	}
	struct _Function_1_1{
		inline static ::String Block( Dynamic &width,::String &output){
			HX_STACK_PUSH("*::closure","de/polygonal/Printf.hx",672);
			{
				HX_STACK_LINE(672)
				return (  (((width > output.length))) ? ::String(::de::polygonal::Printf_obj::rpad(output,HX_CSTRING(" "),width)) : ::String(output) );
			}
			return null();
		}
	};
	HX_STACK_LINE(670)
	return (  (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Minus->__Index()))))) != (int)0))) ? ::String(_Function_1_1::Block(width,output)) : ::String((  (((width > output.length))) ? ::String(::de::polygonal::Printf_obj::lpad(output,(  (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Zero->__Index()))))) != (int)0))) ? ::String(HX_CSTRING("0")) : ::String(HX_CSTRING(" ")) ),width)) : ::String(output) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printf_obj,formatHexadecimal,return )

::String Printf_obj::formatUnsignedDecimal( int value,Dynamic args){
	HX_STACK_PUSH("Printf::formatUnsignedDecimal","de/polygonal/Printf.hx",678);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(679)
	::String output;		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(680)
	Dynamic precision = args->__Field(HX_CSTRING("precision"),true);		HX_STACK_VAR(precision,"precision");
	HX_STACK_LINE(682)
	if (((value >= (int)0))){
		HX_STACK_LINE(683)
		output = ::de::polygonal::Printf_obj::formatSignedDecimal(value,args);
	}
	else{
		HX_STACK_LINE(686)
		::haxe::Int64 x = ::haxe::Int64_obj::__new((int)0,value);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(687)
		output = x->toString();
		HX_STACK_LINE(688)
		if (((bool((precision > (int)1)) && bool((output.length < precision))))){
			HX_STACK_LINE(689)
			output = ::de::polygonal::Printf_obj::lpad(output,HX_CSTRING("0"),precision);
		}
		HX_STACK_LINE(690)
		output = ::de::polygonal::Printf_obj::padNumber(output,value,args->__Field(HX_CSTRING("flags"),true),args->__Field(HX_CSTRING("width"),true));
	}
	HX_STACK_LINE(693)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printf_obj,formatUnsignedDecimal,return )

::String Printf_obj::formatNaturalFloat( Float value,Dynamic args){
	HX_STACK_PUSH("Printf::formatNaturalFloat","de/polygonal/Printf.hx",697);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(699)
	args->__FieldRef(HX_CSTRING("precision")) = (int)0;
	HX_STACK_LINE(701)
	::String formatedFloat = ::de::polygonal::Printf_obj::formatNormalFloat(value,args);		HX_STACK_VAR(formatedFloat,"formatedFloat");
	HX_STACK_LINE(702)
	::String formatedScientific = ::de::polygonal::Printf_obj::formatScientific(value,args);		HX_STACK_VAR(formatedScientific,"formatedScientific");
	HX_STACK_LINE(704)
	if (((((int(args->__Field(HX_CSTRING("flags"),true)) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Sharp->__Index()))))) != (int)0))){
		HX_STACK_LINE(705)
		if (((formatedFloat.indexOf(HX_CSTRING("."),null()) != (int)-1))){
			HX_STACK_LINE(708)
			int pos = (formatedFloat.length - (int)1);		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(709)
			while(((::de::polygonal::Printf_obj::codeAt(formatedFloat,pos) == (int)48))){
				HX_STACK_LINE(709)
				(pos)--;
			}
			HX_STACK_LINE(710)
			formatedFloat = formatedFloat.substr((int)0,pos);
		}
	}
	HX_STACK_LINE(714)
	return (  (((formatedFloat.length <= formatedScientific.length))) ? ::String(formatedFloat) : ::String(formatedScientific) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printf_obj,formatNaturalFloat,return )

::String Printf_obj::formatScientific( Float value,Dynamic args){
	HX_STACK_PUSH("Printf::formatScientific","de/polygonal/Printf.hx",718);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(719)
	::String output = HX_CSTRING("");		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(720)
	int flags = args->__Field(HX_CSTRING("flags"),true);		HX_STACK_VAR(flags,"flags");
	HX_STACK_LINE(721)
	Dynamic precision = args->__Field(HX_CSTRING("precision"),true);		HX_STACK_VAR(precision,"precision");
	HX_STACK_LINE(722)
	if (((precision == (int)-1))){
		HX_STACK_LINE(722)
		precision = (int)6;
	}
	HX_STACK_LINE(724)
	int sign;		HX_STACK_VAR(sign,"sign");
	int exponent;		HX_STACK_VAR(exponent,"exponent");
	HX_STACK_LINE(726)
	if (((value == (int)0))){
		HX_STACK_LINE(728)
		sign = (int)0;
		HX_STACK_LINE(729)
		exponent = (int)0;
		HX_STACK_LINE(730)
		hx::AddEq(output,HX_CSTRING("0"));
		HX_STACK_LINE(731)
		if (((precision > (int)0))){
			HX_STACK_LINE(733)
			hx::AddEq(output,HX_CSTRING("."));
			HX_STACK_LINE(734)
			{
				HX_STACK_LINE(734)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(734)
				while(((_g < precision))){
					HX_STACK_LINE(734)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(734)
					hx::AddEq(output,HX_CSTRING("0"));
				}
			}
		}
	}
	else{
		HX_STACK_LINE(739)
		sign = (  (((value > 0.))) ? int((int)1) : int((  (((value < 0.))) ? int((int)-1) : int((int)0) )) );
		HX_STACK_LINE(740)
		value = (  (((value < (int)0))) ? Float(-(value)) : Float(value) );
		HX_STACK_LINE(741)
		exponent = ::Math_obj::floor((Float(::Math_obj::log(value)) / Float(2.302585092994046)));
		HX_STACK_LINE(742)
		value = (Float(value) / Float(::Math_obj::pow((int)10,exponent)));
		HX_STACK_LINE(743)
		Float p = ::Math_obj::pow(0.1,precision);		HX_STACK_VAR(p,"p");
		struct _Function_2_1{
			inline static Float Block( Float &value,Float &p){
				HX_STACK_PUSH("*::closure","de/polygonal/Printf.hx",744);
				{
					HX_STACK_LINE(744)
					int min = (int)-2147483647;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(744)
					Float t = (Float(value) / Float(p));		HX_STACK_VAR(t,"t");
					struct _Function_3_1{
						inline static Float Block( Float &t,Float &p){
							HX_STACK_PUSH("*::closure","de/polygonal/Printf.hx",744);
							{
								HX_STACK_LINE(744)
								t = (  (((t > (int)0))) ? Float((t + .5)) : Float((  (((t < (int)0))) ? Float((t - .5)) : Float(t) )) );
								HX_STACK_LINE(744)
								return (((t - hx::Mod(t,(int)1))) * p);
							}
							return null();
						}
					};
					HX_STACK_LINE(744)
					return (  (((bool((t < (int)2147483647)) && bool((t > min))))) ? Float((::Math_obj::round(t) * p)) : Float(_Function_3_1::Block(t,p)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(744)
		value = _Function_2_1::Block(value,p);
	}
	HX_STACK_LINE(747)
	hx::AddEq(output,(  (((sign < (int)0))) ? ::String(HX_CSTRING("-")) : ::String((  (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Plus->__Index()))))) != (int)0))) ? ::String(HX_CSTRING("+")) : ::String(HX_CSTRING("")) )) ));
	HX_STACK_LINE(749)
	if (((value != (int)0))){
		HX_STACK_LINE(750)
		hx::AddEq(output,::de::polygonal::Printf_obj::rpad(::de::polygonal::Printf_obj::str(value).substr((int)0,(precision + (int)2)),HX_CSTRING("0"),(precision + (int)2)));
	}
	HX_STACK_LINE(751)
	hx::AddEq(output,(  (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::UpperCase->__Index()))))) != (int)0))) ? ::String(HX_CSTRING("E")) : ::String(HX_CSTRING("e")) ));
	HX_STACK_LINE(752)
	hx::AddEq(output,(  (((exponent >= (int)0))) ? ::String(HX_CSTRING("+")) : ::String(HX_CSTRING("-")) ));
	HX_STACK_LINE(754)
	if (((exponent < (int)10))){
		HX_STACK_LINE(755)
		hx::AddEq(output,HX_CSTRING("00"));
	}
	else{
		HX_STACK_LINE(757)
		if (((exponent < (int)100))){
			HX_STACK_LINE(758)
			hx::AddEq(output,HX_CSTRING("0"));
		}
	}
	HX_STACK_LINE(760)
	hx::AddEq(output,::de::polygonal::Printf_obj::str(::de::polygonal::Printf_obj::abs(exponent)));
	HX_STACK_LINE(761)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printf_obj,formatScientific,return )

::String Printf_obj::formatSignedDecimal( int value,Dynamic args){
	HX_STACK_PUSH("Printf::formatSignedDecimal","de/polygonal/Printf.hx",765);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(766)
	::String output;		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(767)
	int flags = args->__Field(HX_CSTRING("flags"),true);		HX_STACK_VAR(flags,"flags");
	HX_STACK_LINE(768)
	Dynamic precision = args->__Field(HX_CSTRING("precision"),true);		HX_STACK_VAR(precision,"precision");
	HX_STACK_LINE(769)
	Dynamic width = args->__Field(HX_CSTRING("width"),true);		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(771)
	if (((bool((precision == (int)0)) && bool((value == (int)0))))){
		HX_STACK_LINE(772)
		output = HX_CSTRING("");
	}
	else{
		HX_STACK_LINE(775)
		if (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::LengthH->__Index()))))) != (int)0))){
			HX_STACK_LINE(776)
			hx::AndEq(value,(int)65535);
		}
		HX_STACK_LINE(778)
		output = ::de::polygonal::Printf_obj::str(::de::polygonal::Printf_obj::abs(value));
		HX_STACK_LINE(780)
		if (((bool((precision > (int)1)) && bool((output.length < precision))))){
			HX_STACK_LINE(781)
			output = ::de::polygonal::Printf_obj::lpad(output,HX_CSTRING("0"),precision);
		}
		HX_STACK_LINE(783)
		if (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Zero->__Index()))))) != (int)0))){
			HX_STACK_LINE(784)
			output = ::de::polygonal::Printf_obj::lpad(output,HX_CSTRING("0"),(  (((value < (int)0))) ? int((width - (int)1)) : int(width) ));
		}
		HX_STACK_LINE(786)
		if (((value < (int)0))){
			HX_STACK_LINE(787)
			output = (HX_CSTRING("-") + output);
		}
	}
	HX_STACK_LINE(790)
	if (((value >= (int)0))){
		HX_STACK_LINE(791)
		if (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Plus->__Index()))))) != (int)0))){
			HX_STACK_LINE(793)
			output = (HX_CSTRING("+") + output);
		}
		else{
			HX_STACK_LINE(795)
			if (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Space->__Index()))))) != (int)0))){
				HX_STACK_LINE(796)
				output = (HX_CSTRING(" ") + output);
			}
		}
	}
	HX_STACK_LINE(799)
	if (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Minus->__Index()))))) != (int)0))){
		HX_STACK_LINE(800)
		output = ::de::polygonal::Printf_obj::rpad(output,HX_CSTRING(" "),args->__Field(HX_CSTRING("width"),true));
	}
	else{
		HX_STACK_LINE(802)
		output = ::de::polygonal::Printf_obj::lpad(output,HX_CSTRING(" "),args->__Field(HX_CSTRING("width"),true));
	}
	HX_STACK_LINE(804)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printf_obj,formatSignedDecimal,return )

::String Printf_obj::formatString( ::String x,Dynamic args){
	HX_STACK_PUSH("Printf::formatString","de/polygonal/Printf.hx",808);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(809)
	::String output = x;		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(810)
	Dynamic precision = args->__Field(HX_CSTRING("precision"),true);		HX_STACK_VAR(precision,"precision");
	HX_STACK_LINE(811)
	Dynamic width = args->__Field(HX_CSTRING("width"),true);		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(813)
	if (((precision > (int)0))){
		HX_STACK_LINE(814)
		output = x.substr((int)0,precision);
	}
	HX_STACK_LINE(816)
	int k = output.length;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(817)
	if (((bool((width > (int)0)) && bool((k < width))))){
		HX_STACK_LINE(818)
		if (((((int(args->__Field(HX_CSTRING("flags"),true)) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Minus->__Index()))))) != (int)0))){
			HX_STACK_LINE(820)
			output = ::de::polygonal::Printf_obj::rpad(output,HX_CSTRING(" "),width);
		}
		else{
			HX_STACK_LINE(822)
			output = ::de::polygonal::Printf_obj::lpad(output,HX_CSTRING(" "),width);
		}
	}
	HX_STACK_LINE(825)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printf_obj,formatString,return )

::String Printf_obj::formatNormalFloat( Float value,Dynamic args){
	HX_STACK_PUSH("Printf::formatNormalFloat","de/polygonal/Printf.hx",829);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(830)
	::String output;		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(832)
	int flags = args->__Field(HX_CSTRING("flags"),true);		HX_STACK_VAR(flags,"flags");
	HX_STACK_LINE(833)
	Dynamic precision = args->__Field(HX_CSTRING("precision"),true);		HX_STACK_VAR(precision,"precision");
	HX_STACK_LINE(834)
	Dynamic width = args->__Field(HX_CSTRING("width"),true);		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(837)
	if (((precision == (int)-1))){
		HX_STACK_LINE(837)
		precision = (int)6;
	}
	HX_STACK_LINE(839)
	if (((precision == (int)0))){
		HX_STACK_LINE(841)
		output = ::de::polygonal::Printf_obj::str(::de::polygonal::Printf_obj::abs(::Math_obj::round(value)));
		HX_STACK_LINE(843)
		if (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Sharp->__Index()))))) != (int)0))){
			HX_STACK_LINE(843)
			hx::AddEq(output,HX_CSTRING("."));
		}
	}
	else{
		struct _Function_2_1{
			inline static Float Block( Dynamic &precision,Float &value){
				HX_STACK_PUSH("*::closure","de/polygonal/Printf.hx",848);
				{
					HX_STACK_LINE(848)
					Float y = ::Math_obj::pow(.1,precision);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(848)
					int min = (int)-2147483647;		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(848)
					Float t = (Float(value) / Float(y));		HX_STACK_VAR(t,"t");
					struct _Function_3_1{
						inline static Float Block( Float &y,Float &t){
							HX_STACK_PUSH("*::closure","de/polygonal/Printf.hx",848);
							{
								HX_STACK_LINE(848)
								t = (  (((t > (int)0))) ? Float((t + .5)) : Float((  (((t < (int)0))) ? Float((t - .5)) : Float(t) )) );
								HX_STACK_LINE(848)
								return (((t - hx::Mod(t,(int)1))) * y);
							}
							return null();
						}
					};
					HX_STACK_LINE(848)
					return (  (((bool((t < (int)2147483647)) && bool((t > min))))) ? Float((::Math_obj::round(t) * y)) : Float(_Function_3_1::Block(y,t)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(848)
		value = _Function_2_1::Block(precision,value);
		HX_STACK_LINE(849)
		Dynamic decimalPlaces = precision;		HX_STACK_VAR(decimalPlaces,"decimalPlaces");
		HX_STACK_LINE(850)
		if ((::Math_obj::isNaN(value))){
			HX_STACK_LINE(851)
			output = HX_CSTRING("NaN");
		}
		else{
			struct _Function_3_1{
				inline static int Block( Dynamic &decimalPlaces){
					HX_STACK_PUSH("*::closure","de/polygonal/Printf.hx",854);
					{
						HX_STACK_LINE(854)
						int exp = decimalPlaces;		HX_STACK_VAR(exp,"exp");
						HX_STACK_LINE(854)
						return ::Std_obj::_int(::Math_obj::pow((int)10,exp));
					}
					return null();
				}
			};
			HX_STACK_LINE(854)
			int t = _Function_3_1::Block(decimalPlaces);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(855)
			output = ::de::polygonal::Printf_obj::str((Float(::Std_obj::_int((value * t))) / Float(t)));
			HX_STACK_LINE(856)
			int i = output.indexOf(HX_CSTRING("."),null());		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(857)
			if (((i != (int)-1))){
				HX_STACK_LINE(859)
				int _g = output.substr((i + (int)1),null()).length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(859)
				while(((_g < decimalPlaces))){
					HX_STACK_LINE(859)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(860)
					hx::AddEq(output,HX_CSTRING("0"));
				}
			}
			else{
				HX_STACK_LINE(864)
				hx::AddEq(output,HX_CSTRING("."));
				HX_STACK_LINE(865)
				{
					HX_STACK_LINE(865)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(865)
					while(((_g < decimalPlaces))){
						HX_STACK_LINE(865)
						int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(866)
						hx::AddEq(output,HX_CSTRING("0"));
					}
				}
			}
		}
	}
	HX_STACK_LINE(871)
	if (((bool((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Plus->__Index()))))) != (int)0)) && bool((value >= (int)0))))){
		HX_STACK_LINE(872)
		output = (HX_CSTRING("+") + output);
	}
	else{
		HX_STACK_LINE(874)
		if (((bool((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Space->__Index()))))) != (int)0)) && bool((value >= (int)0))))){
			HX_STACK_LINE(875)
			output = (HX_CSTRING(" ") + output);
		}
	}
	HX_STACK_LINE(877)
	if (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Zero->__Index()))))) != (int)0))){
		HX_STACK_LINE(878)
		output = ::de::polygonal::Printf_obj::lpad(output,HX_CSTRING("0"),(  (((value < (int)0))) ? int((width - (int)1)) : int(width) ));
	}
	HX_STACK_LINE(880)
	if (((value < (int)0))){
		HX_STACK_LINE(881)
		output = (HX_CSTRING("-") + output);
	}
	HX_STACK_LINE(883)
	if (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Minus->__Index()))))) != (int)0))){
		HX_STACK_LINE(884)
		output = ::de::polygonal::Printf_obj::rpad(output,HX_CSTRING(" "),width);
	}
	else{
		HX_STACK_LINE(886)
		output = ::de::polygonal::Printf_obj::lpad(output,HX_CSTRING(" "),width);
	}
	HX_STACK_LINE(888)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printf_obj,formatNormalFloat,return )

::String Printf_obj::formatCharacter( int x,Dynamic args){
	HX_STACK_PUSH("Printf::formatCharacter","de/polygonal/Printf.hx",892);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(893)
	::String output = ::String::fromCharCode(x);		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(894)
	if (((args->__Field(HX_CSTRING("width"),true) > (int)1))){
		HX_STACK_LINE(895)
		if (((((int(args->__Field(HX_CSTRING("flags"),true)) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Minus->__Index()))))) != (int)0))){
			HX_STACK_LINE(898)
			output = ::de::polygonal::Printf_obj::rpad(output,HX_CSTRING(" "),args->__Field(HX_CSTRING("width"),true));
		}
		else{
			HX_STACK_LINE(900)
			output = ::de::polygonal::Printf_obj::lpad(output,HX_CSTRING(" "),args->__Field(HX_CSTRING("width"),true));
		}
	}
	HX_STACK_LINE(903)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printf_obj,formatCharacter,return )

::String Printf_obj::padNumber( ::String x,Float n,int flags,int width){
	HX_STACK_PUSH("Printf::padNumber","de/polygonal/Printf.hx",914);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(n,"n");
	HX_STACK_ARG(flags,"flags");
	HX_STACK_ARG(width,"width");
	HX_STACK_LINE(915)
	int k = x.length;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(916)
	if (((bool((width > (int)0)) && bool((k < width))))){
		HX_STACK_LINE(917)
		if (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Minus->__Index()))))) != (int)0))){
			HX_STACK_LINE(920)
			x = ::de::polygonal::Printf_obj::rpad(x,HX_CSTRING(" "),width);
		}
		else{
			HX_STACK_LINE(922)
			if (((n >= (int)0))){
				HX_STACK_LINE(924)
				x = ::de::polygonal::Printf_obj::lpad(x,(  (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Zero->__Index()))))) != (int)0))) ? ::String(HX_CSTRING("0")) : ::String(HX_CSTRING(" ")) ),width);
			}
			else{
				HX_STACK_LINE(926)
				if (((((int(flags) & int((int((int)1) << int(::de::polygonal::_Printf::FormatFlags_obj::Zero->__Index()))))) != (int)0))){
					HX_STACK_LINE(928)
					x = (HX_CSTRING("-") + ::de::polygonal::Printf_obj::lpad(x.substr((int)1,null()),HX_CSTRING("0"),width));
				}
				else{
					HX_STACK_LINE(933)
					x = ::de::polygonal::Printf_obj::lpad(x,HX_CSTRING(" "),width);
				}
			}
		}
	}
	HX_STACK_LINE(938)
	return x;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Printf_obj,padNumber,return )

::String Printf_obj::lpad( ::String s,::String c,int l){
	HX_STACK_PUSH("Printf::lpad","de/polygonal/Printf.hx",942);
	HX_STACK_ARG(s,"s");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(l,"l");
	HX_STACK_LINE(943)
	if (((c.length <= (int)0))){
		HX_STACK_LINE(943)
		hx::Throw (HX_CSTRING("error"));
	}
	HX_STACK_LINE(946)
	while(((s.length < l))){
		HX_STACK_LINE(946)
		s = (c + s);
	}
	HX_STACK_LINE(949)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Printf_obj,lpad,return )

::String Printf_obj::rpad( ::String s,::String c,int l){
	HX_STACK_PUSH("Printf::rpad","de/polygonal/Printf.hx",953);
	HX_STACK_ARG(s,"s");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(l,"l");
	HX_STACK_LINE(954)
	if (((c.length <= (int)0))){
		HX_STACK_LINE(954)
		hx::Throw (HX_CSTRING("error"));
	}
	HX_STACK_LINE(957)
	while(((s.length < l))){
		HX_STACK_LINE(957)
		s = (s + c);
	}
	HX_STACK_LINE(960)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Printf_obj,rpad,return )

::String Printf_obj::toHex( int x){
	HX_STACK_PUSH("Printf::toHex","de/polygonal/Printf.hx",964);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(970)
	::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(971)
	::String hexChars = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(hexChars,"hexChars");
	HX_STACK_LINE(972)
	do{
		HX_STACK_LINE(973)
		s = (hexChars.charAt((int(x) & int((int)15))) + s);
		HX_STACK_LINE(974)
		hx::UShrEq(x,(int)4);
	}
while(((x > (int)0)));
	HX_STACK_LINE(977)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Printf_obj,toHex,return )

::String Printf_obj::toOct( int x){
	HX_STACK_PUSH("Printf::toOct","de/polygonal/Printf.hx",981);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(982)
	::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(983)
	int t = x;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(984)
	do{
		HX_STACK_LINE(986)
		s = (((int(t) & int((int)7))) + s);
		HX_STACK_LINE(987)
		hx::UShrEq(t,(int)3);
	}
while(((t > (int)0)));
	HX_STACK_LINE(990)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Printf_obj,toOct,return )

int Printf_obj::abs( int x){
	HX_STACK_PUSH("Printf::abs","de/polygonal/Printf.hx",994);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(994)
	return ::Std_obj::_int(::Math_obj::abs(x));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Printf_obj,abs,return )

::String Printf_obj::str( Dynamic x){
	HX_STACK_PUSH("Printf::str","de/polygonal/Printf.hx",997);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(997)
	return ::Std_obj::string(x);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Printf_obj,str,return )

int Printf_obj::codeAt( ::String x,int i){
	HX_STACK_PUSH("Printf::codeAt","de/polygonal/Printf.hx",1000);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(1000)
	return x.cca(i);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printf_obj,codeAt,return )

bool Printf_obj::isDigit( int x){
	HX_STACK_PUSH("Printf::isDigit","de/polygonal/Printf.hx",1010);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(1010)
	return (bool((x >= (int)48)) && bool((x <= (int)57)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Printf_obj,isDigit,return )

Float Printf_obj::roundTo( Float x,Float y){
	HX_STACK_PUSH("Printf::roundTo","de/polygonal/Printf.hx",1013);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(1015)
	int min = (int)-2147483647;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(1029)
	Float t = (Float(x) / Float(y));		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(1030)
	if (((bool((t < (int)2147483647)) && bool((t > min))))){
		HX_STACK_LINE(1031)
		return (::Math_obj::round(t) * y);
	}
	else{
		HX_STACK_LINE(1034)
		t = (  (((t > (int)0))) ? Float((t + .5)) : Float((  (((t < (int)0))) ? Float((t - .5)) : Float(t) )) );
		HX_STACK_LINE(1035)
		return (((t - hx::Mod(t,(int)1))) * y);
	}
	HX_STACK_LINE(1030)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printf_obj,roundTo,return )

int Printf_obj::round( Float x){
	HX_STACK_PUSH("Printf::round","de/polygonal/Printf.hx",1041);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(1041)
	return ::Math_obj::round(x);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Printf_obj,round,return )

int Printf_obj::exp( int a,int exp){
	HX_STACK_PUSH("Printf::exp","de/polygonal/Printf.hx",1044);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(exp,"exp");
	HX_STACK_LINE(1044)
	return ::Std_obj::_int(::Math_obj::pow(a,exp));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printf_obj,exp,return )

Float Printf_obj::fabs( Float x){
	HX_STACK_PUSH("Printf::fabs","de/polygonal/Printf.hx",1066);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(1066)
	return (  (((x < (int)0))) ? Float(-(x)) : Float(x) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Printf_obj,fabs,return )

int Printf_obj::fsgn( Float x){
	HX_STACK_PUSH("Printf::fsgn","de/polygonal/Printf.hx",1073);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(1073)
	return (  (((x > 0.))) ? int((int)1) : int((  (((x < 0.))) ? int((int)-1) : int((int)0) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Printf_obj,fsgn,return )


Printf_obj::Printf_obj()
{
}

void Printf_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Printf);
	HX_MARK_END_CLASS();
}

void Printf_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Printf_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"abs") ) { return abs_dyn(); }
		if (HX_FIELD_EQ(inName,"str") ) { return str_dyn(); }
		if (HX_FIELD_EQ(inName,"exp") ) { return exp_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"lpad") ) { return lpad_dyn(); }
		if (HX_FIELD_EQ(inName,"rpad") ) { return rpad_dyn(); }
		if (HX_FIELD_EQ(inName,"fabs") ) { return fabs_dyn(); }
		if (HX_FIELD_EQ(inName,"fsgn") ) { return fsgn_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toHex") ) { return toHex_dyn(); }
		if (HX_FIELD_EQ(inName,"toOct") ) { return toOct_dyn(); }
		if (HX_FIELD_EQ(inName,"round") ) { return round_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format_dyn(); }
		if (HX_FIELD_EQ(inName,"codeAt") ) { return codeAt_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isDigit") ) { return isDigit_dyn(); }
		if (HX_FIELD_EQ(inName,"roundTo") ) { return roundTo_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tokenize") ) { return tokenize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"padNumber") ) { return padNumber_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"dataTypeMap") ) { return dataTypeMap; }
		if (HX_FIELD_EQ(inName,"formatOctal") ) { return formatOctal_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initialized") ) { return _initialized; }
		if (HX_FIELD_EQ(inName,"formatBinary") ) { return formatBinary_dyn(); }
		if (HX_FIELD_EQ(inName,"formatString") ) { return formatString_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"makeDataTypeMap") ) { return makeDataTypeMap_dyn(); }
		if (HX_FIELD_EQ(inName,"formatCharacter") ) { return formatCharacter_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"formatScientific") ) { return formatScientific_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"formatIntFuncHash") ) { return formatIntFuncHash; }
		if (HX_FIELD_EQ(inName,"formatHexadecimal") ) { return formatHexadecimal_dyn(); }
		if (HX_FIELD_EQ(inName,"formatNormalFloat") ) { return formatNormalFloat_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"formatNaturalFloat") ) { return formatNaturalFloat_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"formatFloatFuncHash") ) { return formatFloatFuncHash; }
		if (HX_FIELD_EQ(inName,"formatSignedDecimal") ) { return formatSignedDecimal_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"formatStringFuncHash") ) { return formatStringFuncHash; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"formatUnsignedDecimal") ) { return formatUnsignedDecimal_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Printf_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"dataTypeMap") ) { dataTypeMap=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initialized") ) { _initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"formatIntFuncHash") ) { formatIntFuncHash=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"formatFloatFuncHash") ) { formatFloatFuncHash=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"formatStringFuncHash") ) { formatStringFuncHash=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Printf_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("dataTypeMap"),
	HX_CSTRING("formatIntFuncHash"),
	HX_CSTRING("formatFloatFuncHash"),
	HX_CSTRING("formatStringFuncHash"),
	HX_CSTRING("_initialized"),
	HX_CSTRING("init"),
	HX_CSTRING("makeDataTypeMap"),
	HX_CSTRING("format"),
	HX_CSTRING("tokenize"),
	HX_CSTRING("formatBinary"),
	HX_CSTRING("formatOctal"),
	HX_CSTRING("formatHexadecimal"),
	HX_CSTRING("formatUnsignedDecimal"),
	HX_CSTRING("formatNaturalFloat"),
	HX_CSTRING("formatScientific"),
	HX_CSTRING("formatSignedDecimal"),
	HX_CSTRING("formatString"),
	HX_CSTRING("formatNormalFloat"),
	HX_CSTRING("formatCharacter"),
	HX_CSTRING("padNumber"),
	HX_CSTRING("lpad"),
	HX_CSTRING("rpad"),
	HX_CSTRING("toHex"),
	HX_CSTRING("toOct"),
	HX_CSTRING("abs"),
	HX_CSTRING("str"),
	HX_CSTRING("codeAt"),
	HX_CSTRING("isDigit"),
	HX_CSTRING("roundTo"),
	HX_CSTRING("round"),
	HX_CSTRING("exp"),
	HX_CSTRING("fabs"),
	HX_CSTRING("fsgn"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Printf_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Printf_obj::dataTypeMap,"dataTypeMap");
	HX_MARK_MEMBER_NAME(Printf_obj::formatIntFuncHash,"formatIntFuncHash");
	HX_MARK_MEMBER_NAME(Printf_obj::formatFloatFuncHash,"formatFloatFuncHash");
	HX_MARK_MEMBER_NAME(Printf_obj::formatStringFuncHash,"formatStringFuncHash");
	HX_MARK_MEMBER_NAME(Printf_obj::_initialized,"_initialized");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Printf_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Printf_obj::dataTypeMap,"dataTypeMap");
	HX_VISIT_MEMBER_NAME(Printf_obj::formatIntFuncHash,"formatIntFuncHash");
	HX_VISIT_MEMBER_NAME(Printf_obj::formatFloatFuncHash,"formatFloatFuncHash");
	HX_VISIT_MEMBER_NAME(Printf_obj::formatStringFuncHash,"formatStringFuncHash");
	HX_VISIT_MEMBER_NAME(Printf_obj::_initialized,"_initialized");
};

Class Printf_obj::__mClass;

void Printf_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.Printf"), hx::TCanCast< Printf_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Printf_obj::__boot()
{
	_initialized= false;
}

} // end namespace de
} // end namespace polygonal
