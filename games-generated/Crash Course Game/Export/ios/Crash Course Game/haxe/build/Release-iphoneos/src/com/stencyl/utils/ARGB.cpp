#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_ARGB
#include <com/stencyl/utils/ARGB.h>
#endif
namespace com{
namespace stencyl{
namespace utils{

Void ARGB_obj::__construct(Dynamic __o_a,Dynamic __o_r,Dynamic __o_g,Dynamic __o_b)
{
HX_STACK_PUSH("ARGB::new","com/stencyl/utils/ARGB.hx",143);
Dynamic a = __o_a.Default(0.0);
Dynamic r = __o_r.Default(0.0);
Dynamic g = __o_g.Default(0.0);
Dynamic b = __o_b.Default(0.0);
{
	HX_STACK_LINE(144)
	this->a = a;
	HX_STACK_LINE(145)
	this->r = r;
	HX_STACK_LINE(146)
	this->g = g;
	HX_STACK_LINE(147)
	this->b = b;
}
;
	return null();
}

ARGB_obj::~ARGB_obj() { }

Dynamic ARGB_obj::__CreateEmpty() { return  new ARGB_obj; }
hx::ObjectPtr< ARGB_obj > ARGB_obj::__new(Dynamic __o_a,Dynamic __o_r,Dynamic __o_g,Dynamic __o_b)
{  hx::ObjectPtr< ARGB_obj > result = new ARGB_obj();
	result->__construct(__o_a,__o_r,__o_g,__o_b);
	return result;}

Dynamic ARGB_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ARGB_obj > result = new ARGB_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::com::stencyl::utils::ARGB ARGB_obj::copy( ::com::stencyl::utils::ARGB target){
	HX_STACK_PUSH("ARGB::copy","com/stencyl/utils/ARGB.hx",183);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(184)
	target->a = this->a;
	HX_STACK_LINE(185)
	target->r = this->r;
	HX_STACK_LINE(186)
	target->g = this->g;
	HX_STACK_LINE(187)
	target->b = this->b;
	HX_STACK_LINE(188)
	return target;
}


HX_DEFINE_DYNAMIC_FUNC1(ARGB_obj,copy,return )

Void ARGB_obj::set32( int a,int r,int g,int b){
{
		HX_STACK_PUSH("ARGB::set32","com/stencyl/utils/ARGB.hx",179);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(r,"r");
		HX_STACK_ARG(g,"g");
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(179)
		this->a = (((int(a) & int((int)255))) * ((Float(1.0) / Float(255.0))));
		HX_STACK_LINE(179)
		this->r = (((int(r) & int((int)255))) * ((Float(1.0) / Float(255.0))));
		HX_STACK_LINE(179)
		this->g = (((int(g) & int((int)255))) * ((Float(1.0) / Float(255.0))));
		HX_STACK_LINE(179)
		this->b = (((int(b) & int((int)255))) * ((Float(1.0) / Float(255.0))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ARGB_obj,set32,(void))

int ARGB_obj::get32( ){
	HX_STACK_PUSH("ARGB::get32","com/stencyl/utils/ARGB.hx",177);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static int Block( ::com::stencyl::utils::ARGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",177);
			{
				HX_STACK_LINE(177)
				Float x = (__this->a * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(177)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static int Block( ::com::stencyl::utils::ARGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",177);
			{
				HX_STACK_LINE(177)
				Float x = (__this->r * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(177)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static int Block( ::com::stencyl::utils::ARGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",177);
			{
				HX_STACK_LINE(177)
				Float x = (__this->g * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(177)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static int Block( ::com::stencyl::utils::ARGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",177);
			{
				HX_STACK_LINE(177)
				Float x = (__this->b * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(177)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(177)
	return (int((int((int((int(_Function_1_1::Block(this)) << int((int)24))) | int((int(_Function_1_2::Block(this)) << int((int)16))))) | int((int(_Function_1_3::Block(this)) << int((int)8))))) | int(_Function_1_4::Block(this)));
}


HX_DEFINE_DYNAMIC_FUNC0(ARGB_obj,get32,return )

Void ARGB_obj::set24( int r,int g,int b){
{
		HX_STACK_PUSH("ARGB::set24","com/stencyl/utils/ARGB.hx",174);
		HX_STACK_THIS(this);
		HX_STACK_ARG(r,"r");
		HX_STACK_ARG(g,"g");
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(174)
		this->a = this->a;
		HX_STACK_LINE(174)
		this->r = (((int(r) & int((int)255))) * ((Float(1.0) / Float(255.0))));
		HX_STACK_LINE(174)
		this->g = (((int(g) & int((int)255))) * ((Float(1.0) / Float(255.0))));
		HX_STACK_LINE(174)
		this->b = (((int(b) & int((int)255))) * ((Float(1.0) / Float(255.0))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ARGB_obj,set24,(void))

int ARGB_obj::get24( ){
	HX_STACK_PUSH("ARGB::get24","com/stencyl/utils/ARGB.hx",172);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static int Block( ::com::stencyl::utils::ARGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",172);
			{
				HX_STACK_LINE(172)
				Float x = (__this->r * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(172)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static int Block( ::com::stencyl::utils::ARGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",172);
			{
				HX_STACK_LINE(172)
				Float x = (__this->g * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(172)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static int Block( ::com::stencyl::utils::ARGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",172);
			{
				HX_STACK_LINE(172)
				Float x = (__this->b * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(172)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(172)
	return (int((int((int(_Function_1_1::Block(this)) << int((int)16))) | int((int(_Function_1_2::Block(this)) << int((int)8))))) | int(_Function_1_3::Block(this)));
}


HX_DEFINE_DYNAMIC_FUNC0(ARGB_obj,get24,return )

int ARGB_obj::getB8( ){
	HX_STACK_PUSH("ARGB::getB8","com/stencyl/utils/ARGB.hx",169);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static int Block( ::com::stencyl::utils::ARGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",169);
			{
				HX_STACK_LINE(169)
				Float x = (__this->b * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(169)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(169)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ARGB_obj,getB8,return )

int ARGB_obj::getG8( ){
	HX_STACK_PUSH("ARGB::getG8","com/stencyl/utils/ARGB.hx",167);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static int Block( ::com::stencyl::utils::ARGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",167);
			{
				HX_STACK_LINE(167)
				Float x = (__this->g * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(167)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(167)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ARGB_obj,getG8,return )

int ARGB_obj::getR8( ){
	HX_STACK_PUSH("ARGB::getR8","com/stencyl/utils/ARGB.hx",165);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static int Block( ::com::stencyl::utils::ARGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",165);
			{
				HX_STACK_LINE(165)
				Float x = (__this->r * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(165)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(165)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ARGB_obj,getR8,return )

int ARGB_obj::getA8( ){
	HX_STACK_PUSH("ARGB::getA8","com/stencyl/utils/ARGB.hx",163);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static int Block( ::com::stencyl::utils::ARGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",163);
			{
				HX_STACK_LINE(163)
				Float x = (__this->a * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(163)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(163)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ARGB_obj,getA8,return )

Void ARGB_obj::lerp( ::com::stencyl::utils::ARGB input,Float t,::com::stencyl::utils::ARGB output){
{
		HX_STACK_PUSH("ARGB::lerp","com/stencyl/utils/ARGB.hx",155);
		HX_STACK_THIS(this);
		HX_STACK_ARG(input,"input");
		HX_STACK_ARG(t,"t");
		HX_STACK_ARG(output,"output");
		HX_STACK_LINE(156)
		output->a = (this->a + (((input->a - this->a)) * t));
		HX_STACK_LINE(157)
		output->r = (this->r + (((input->r - this->r)) * t));
		HX_STACK_LINE(158)
		output->g = (this->g + (((input->g - this->g)) * t));
		HX_STACK_LINE(159)
		output->b = (this->b + (((input->b - this->b)) * t));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ARGB_obj,lerp,(void))

Void ARGB_obj::set( Float a,Float r,Float g,Float b){
{
		HX_STACK_PUSH("ARGB::set","com/stencyl/utils/ARGB.hx",151);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(r,"r");
		HX_STACK_ARG(g,"g");
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(151)
		this->a = a;
		HX_STACK_LINE(151)
		this->r = r;
		HX_STACK_LINE(151)
		this->g = g;
		HX_STACK_LINE(151)
		this->b = b;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ARGB_obj,set,(void))

int ARGB_obj::BLACK;

int ARGB_obj::WHITE;

int ARGB_obj::RED;

int ARGB_obj::GREEN;

int ARGB_obj::BLUE;

int ARGB_obj::CYAN;

int ARGB_obj::MAGENTA;

int ARGB_obj::YELLOW;

int ARGB_obj::setARGBi( int a,int r,int g,int b){
	HX_STACK_PUSH("ARGB::setARGBi","com/stencyl/utils/ARGB.hx",62);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(g,"g");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(62)
	return (int((int((int((int(((int(a) & int((int)255)))) << int((int)24))) | int((int(((int(r) & int((int)255)))) << int((int)16))))) | int((int(((int(g) & int((int)255)))) << int((int)8))))) | int((int(b) & int((int)255))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ARGB_obj,setARGBi,return )

int ARGB_obj::setARGBf( Float a,Float r,Float g,Float b){
	HX_STACK_PUSH("ARGB::setARGBf","com/stencyl/utils/ARGB.hx",71);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(g,"g");
	HX_STACK_ARG(b,"b");
	struct _Function_1_1{
		inline static int Block( Float &a){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",74);
			{
				HX_STACK_LINE(74)
				Float x = (((  (((a < (int)0))) ? Float((int)0) : Float((  (((a > (int)1))) ? Float((int)1) : Float(a) )) )) * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(74)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static int Block( Float &r){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",75);
			{
				HX_STACK_LINE(75)
				Float x = (((  (((r < (int)0))) ? Float((int)0) : Float((  (((r > (int)1))) ? Float((int)1) : Float(r) )) )) * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(75)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static int Block( Float &g){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",76);
			{
				HX_STACK_LINE(76)
				Float x = (((  (((g < (int)0))) ? Float((int)0) : Float((  (((g > (int)1))) ? Float((int)1) : Float(g) )) )) * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(76)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static int Block( Float &b){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",77);
			{
				HX_STACK_LINE(77)
				Float x = (((  (((b < (int)0))) ? Float((int)0) : Float((  (((b > (int)1))) ? Float((int)1) : Float(b) )) )) * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(77)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(71)
	return (int((int((int((int(((int(_Function_1_1::Block(a)) & int((int)255)))) << int((int)24))) | int((int(((int(_Function_1_2::Block(r)) & int((int)255)))) << int((int)16))))) | int((int(((int(_Function_1_3::Block(g)) & int((int)255)))) << int((int)8))))) | int((int(_Function_1_4::Block(b)) & int((int)255))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ARGB_obj,setARGBf,return )

::com::stencyl::utils::ARGB ARGB_obj::toARGB( int x){
	HX_STACK_PUSH("ARGB::toARGB","com/stencyl/utils/ARGB.hx",82);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(82)
	return ::com::stencyl::utils::ARGB_obj::__new(((hx::UShr(x,(int)24)) * ((Float(1.0) / Float(255.0)))),(((int(hx::UShr(x,(int)16)) & int((int)255))) * ((Float(1.0) / Float(255.0)))),(((int(hx::UShr(x,(int)8)) & int((int)255))) * ((Float(1.0) / Float(255.0)))),(((int(x) & int((int)255))) * ((Float(1.0) / Float(255.0)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_obj,toARGB,return )

int ARGB_obj::getRGB( int x){
	HX_STACK_PUSH("ARGB::getRGB","com/stencyl/utils/ARGB.hx",87);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(87)
	return (int(x) & int((int)16777215));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_obj,getRGB,return )

int ARGB_obj::setRGB( int x,int r,int g,int b){
	HX_STACK_PUSH("ARGB::setRGB","com/stencyl/utils/ARGB.hx",89);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(g,"g");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(89)
	return (int((int((int((int(r) << int((int)16))) | int((int(g) << int((int)8))))) | int(b))) | int((int(x) & int((int)-16777216))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ARGB_obj,setRGB,return )

int ARGB_obj::getA( int x){
	HX_STACK_PUSH("ARGB::getA","com/stencyl/utils/ARGB.hx",92);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(92)
	return hx::UShr(x,(int)24);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_obj,getA,return )

Float ARGB_obj::getAf( int x){
	HX_STACK_PUSH("ARGB::getAf","com/stencyl/utils/ARGB.hx",94);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(94)
	return ((hx::UShr(x,(int)24)) * ((Float(1.0) / Float(255.0))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_obj,getAf,return )

int ARGB_obj::getR( int x){
	HX_STACK_PUSH("ARGB::getR","com/stencyl/utils/ARGB.hx",97);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(97)
	return (int(hx::UShr(x,(int)16)) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_obj,getR,return )

Float ARGB_obj::getRf( int x){
	HX_STACK_PUSH("ARGB::getRf","com/stencyl/utils/ARGB.hx",99);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(99)
	return (((int(hx::UShr(x,(int)16)) & int((int)255))) * ((Float(1.0) / Float(255.0))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_obj,getRf,return )

int ARGB_obj::getG( int x){
	HX_STACK_PUSH("ARGB::getG","com/stencyl/utils/ARGB.hx",102);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(102)
	return (int(hx::UShr(x,(int)8)) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_obj,getG,return )

Float ARGB_obj::getGf( int x){
	HX_STACK_PUSH("ARGB::getGf","com/stencyl/utils/ARGB.hx",104);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(104)
	return (((int(hx::UShr(x,(int)8)) & int((int)255))) * ((Float(1.0) / Float(255.0))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_obj,getGf,return )

int ARGB_obj::getB( int x){
	HX_STACK_PUSH("ARGB::getB","com/stencyl/utils/ARGB.hx",107);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(107)
	return (int(x) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_obj,getB,return )

Float ARGB_obj::getBf( int x){
	HX_STACK_PUSH("ARGB::getBf","com/stencyl/utils/ARGB.hx",109);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(109)
	return (((int(x) & int((int)255))) * ((Float(1.0) / Float(255.0))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_obj,getBf,return )

int ARGB_obj::setA( int x,int a){
	HX_STACK_PUSH("ARGB::setA","com/stencyl/utils/ARGB.hx",112);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(a,"a");
	HX_STACK_LINE(112)
	return (int((int(a) << int((int)24))) | int((int(x) & int((int)16777215))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ARGB_obj,setA,return )

int ARGB_obj::setAf( int x,Float a){
	HX_STACK_PUSH("ARGB::setAf","com/stencyl/utils/ARGB.hx",114);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(a,"a");
	struct _Function_1_1{
		inline static int Block( Float &a){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",114);
			{
				HX_STACK_LINE(114)
				Float x1 = (((  (((a < 0.0))) ? Float(0.0) : Float((  (((a > 1.0))) ? Float(1.0) : Float(a) )) )) * (int)255);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(114)
				return ::Std_obj::_int((  (((x1 > (int)0))) ? Float((x1 + .5)) : Float((  (((x1 < (int)0))) ? Float((x1 - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(114)
	return (int((int(_Function_1_1::Block(a)) << int((int)24))) | int((int(x) & int((int)16777215))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ARGB_obj,setAf,return )

int ARGB_obj::setR( int x,int r){
	HX_STACK_PUSH("ARGB::setR","com/stencyl/utils/ARGB.hx",117);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(r,"r");
	HX_STACK_LINE(117)
	return (int((int(((int(r) & int((int)255)))) << int((int)16))) | int((int(x) & int((int)-16711681))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ARGB_obj,setR,return )

int ARGB_obj::setRf( int x,Float r){
	HX_STACK_PUSH("ARGB::setRf","com/stencyl/utils/ARGB.hx",119);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(r,"r");
	struct _Function_1_1{
		inline static int Block( Float &r){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",119);
			{
				HX_STACK_LINE(119)
				Float x1 = (((  (((r < 0.0))) ? Float(0.0) : Float((  (((r > 1.0))) ? Float(1.0) : Float(r) )) )) * (int)255);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(119)
				return ::Std_obj::_int((  (((x1 > (int)0))) ? Float((x1 + .5)) : Float((  (((x1 < (int)0))) ? Float((x1 - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(119)
	return (int((int(((int(_Function_1_1::Block(r)) & int((int)255)))) << int((int)16))) | int((int(x) & int((int)-16711681))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ARGB_obj,setRf,return )

int ARGB_obj::setG( int x,int g){
	HX_STACK_PUSH("ARGB::setG","com/stencyl/utils/ARGB.hx",122);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(g,"g");
	HX_STACK_LINE(122)
	return (int((int(g) << int((int)8))) | int((int(x) & int((int)-65281))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ARGB_obj,setG,return )

int ARGB_obj::setGf( int x,Float g){
	HX_STACK_PUSH("ARGB::setGf","com/stencyl/utils/ARGB.hx",124);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(g,"g");
	struct _Function_1_1{
		inline static int Block( Float &g){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",124);
			{
				HX_STACK_LINE(124)
				Float x1 = (((  (((g < 0.0))) ? Float(0.0) : Float((  (((g > 1.0))) ? Float(1.0) : Float(g) )) )) * (int)255);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(124)
				return ::Std_obj::_int((  (((x1 > (int)0))) ? Float((x1 + .5)) : Float((  (((x1 < (int)0))) ? Float((x1 - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(124)
	return (int((int(_Function_1_1::Block(g)) << int((int)8))) | int((int(x) & int((int)-65281))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ARGB_obj,setGf,return )

int ARGB_obj::setB( int x,int b){
	HX_STACK_PUSH("ARGB::setB","com/stencyl/utils/ARGB.hx",127);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(127)
	return (int(b) | int((int(x) & int((int)-256))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ARGB_obj,setB,return )

int ARGB_obj::setBf( int x,Float b){
	HX_STACK_PUSH("ARGB::setBf","com/stencyl/utils/ARGB.hx",129);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(b,"b");
	struct _Function_1_1{
		inline static int Block( Float &b){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/ARGB.hx",129);
			{
				HX_STACK_LINE(129)
				Float x1 = (((  (((b < 0.0))) ? Float(0.0) : Float((  (((b > 1.0))) ? Float(1.0) : Float(b) )) )) * (int)255);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(129)
				return ::Std_obj::_int((  (((x1 > (int)0))) ? Float((x1 + .5)) : Float((  (((x1 < (int)0))) ? Float((x1 - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(129)
	return (int(_Function_1_1::Block(b)) | int((int(x) & int((int)-256))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ARGB_obj,setBf,return )


ARGB_obj::ARGB_obj()
{
}

void ARGB_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ARGB);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_END_CLASS();
}

void ARGB_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(a,"a");
}

Dynamic ARGB_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"getA") ) { return getA_dyn(); }
		if (HX_FIELD_EQ(inName,"getR") ) { return getR_dyn(); }
		if (HX_FIELD_EQ(inName,"getG") ) { return getG_dyn(); }
		if (HX_FIELD_EQ(inName,"getB") ) { return getB_dyn(); }
		if (HX_FIELD_EQ(inName,"setA") ) { return setA_dyn(); }
		if (HX_FIELD_EQ(inName,"setR") ) { return setR_dyn(); }
		if (HX_FIELD_EQ(inName,"setG") ) { return setG_dyn(); }
		if (HX_FIELD_EQ(inName,"setB") ) { return setB_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"getAf") ) { return getAf_dyn(); }
		if (HX_FIELD_EQ(inName,"getRf") ) { return getRf_dyn(); }
		if (HX_FIELD_EQ(inName,"getGf") ) { return getGf_dyn(); }
		if (HX_FIELD_EQ(inName,"getBf") ) { return getBf_dyn(); }
		if (HX_FIELD_EQ(inName,"setAf") ) { return setAf_dyn(); }
		if (HX_FIELD_EQ(inName,"setRf") ) { return setRf_dyn(); }
		if (HX_FIELD_EQ(inName,"setGf") ) { return setGf_dyn(); }
		if (HX_FIELD_EQ(inName,"setBf") ) { return setBf_dyn(); }
		if (HX_FIELD_EQ(inName,"set32") ) { return set32_dyn(); }
		if (HX_FIELD_EQ(inName,"get32") ) { return get32_dyn(); }
		if (HX_FIELD_EQ(inName,"set24") ) { return set24_dyn(); }
		if (HX_FIELD_EQ(inName,"get24") ) { return get24_dyn(); }
		if (HX_FIELD_EQ(inName,"getB8") ) { return getB8_dyn(); }
		if (HX_FIELD_EQ(inName,"getG8") ) { return getG8_dyn(); }
		if (HX_FIELD_EQ(inName,"getR8") ) { return getR8_dyn(); }
		if (HX_FIELD_EQ(inName,"getA8") ) { return getA8_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toARGB") ) { return toARGB_dyn(); }
		if (HX_FIELD_EQ(inName,"getRGB") ) { return getRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"setRGB") ) { return setRGB_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setARGBi") ) { return setARGBi_dyn(); }
		if (HX_FIELD_EQ(inName,"setARGBf") ) { return setARGBf_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ARGB_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ARGB_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("g"));
	outFields->push(HX_CSTRING("r"));
	outFields->push(HX_CSTRING("a"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BLACK"),
	HX_CSTRING("WHITE"),
	HX_CSTRING("RED"),
	HX_CSTRING("GREEN"),
	HX_CSTRING("BLUE"),
	HX_CSTRING("CYAN"),
	HX_CSTRING("MAGENTA"),
	HX_CSTRING("YELLOW"),
	HX_CSTRING("setARGBi"),
	HX_CSTRING("setARGBf"),
	HX_CSTRING("toARGB"),
	HX_CSTRING("getRGB"),
	HX_CSTRING("setRGB"),
	HX_CSTRING("getA"),
	HX_CSTRING("getAf"),
	HX_CSTRING("getR"),
	HX_CSTRING("getRf"),
	HX_CSTRING("getG"),
	HX_CSTRING("getGf"),
	HX_CSTRING("getB"),
	HX_CSTRING("getBf"),
	HX_CSTRING("setA"),
	HX_CSTRING("setAf"),
	HX_CSTRING("setR"),
	HX_CSTRING("setRf"),
	HX_CSTRING("setG"),
	HX_CSTRING("setGf"),
	HX_CSTRING("setB"),
	HX_CSTRING("setBf"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("copy"),
	HX_CSTRING("set32"),
	HX_CSTRING("get32"),
	HX_CSTRING("set24"),
	HX_CSTRING("get24"),
	HX_CSTRING("getB8"),
	HX_CSTRING("getG8"),
	HX_CSTRING("getR8"),
	HX_CSTRING("getA8"),
	HX_CSTRING("lerp"),
	HX_CSTRING("set"),
	HX_CSTRING("b"),
	HX_CSTRING("g"),
	HX_CSTRING("r"),
	HX_CSTRING("a"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ARGB_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ARGB_obj::BLACK,"BLACK");
	HX_MARK_MEMBER_NAME(ARGB_obj::WHITE,"WHITE");
	HX_MARK_MEMBER_NAME(ARGB_obj::RED,"RED");
	HX_MARK_MEMBER_NAME(ARGB_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(ARGB_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(ARGB_obj::CYAN,"CYAN");
	HX_MARK_MEMBER_NAME(ARGB_obj::MAGENTA,"MAGENTA");
	HX_MARK_MEMBER_NAME(ARGB_obj::YELLOW,"YELLOW");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ARGB_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ARGB_obj::BLACK,"BLACK");
	HX_VISIT_MEMBER_NAME(ARGB_obj::WHITE,"WHITE");
	HX_VISIT_MEMBER_NAME(ARGB_obj::RED,"RED");
	HX_VISIT_MEMBER_NAME(ARGB_obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(ARGB_obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(ARGB_obj::CYAN,"CYAN");
	HX_VISIT_MEMBER_NAME(ARGB_obj::MAGENTA,"MAGENTA");
	HX_VISIT_MEMBER_NAME(ARGB_obj::YELLOW,"YELLOW");
};

Class ARGB_obj::__mClass;

void ARGB_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.utils.ARGB"), hx::TCanCast< ARGB_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ARGB_obj::__boot()
{
	BLACK= (int)-16777216;
	WHITE= (int)-1;
	RED= (int)-65536;
	GREEN= (int)-16711936;
	BLUE= (int)-16776961;
	CYAN= (int)-16711681;
	MAGENTA= (int)-65281;
	YELLOW= (int)-256;
}

} // end namespace com
} // end namespace stencyl
} // end namespace utils
