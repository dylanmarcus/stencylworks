#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_RGB
#include <com/stencyl/utils/RGB.h>
#endif
namespace com{
namespace stencyl{
namespace utils{

Void RGB_obj::__construct(Dynamic __o_r,Dynamic __o_g,Dynamic __o_b)
{
HX_STACK_PUSH("RGB::new","com/stencyl/utils/RGB.hx",118);
Dynamic r = __o_r.Default(0.0);
Dynamic g = __o_g.Default(0.0);
Dynamic b = __o_b.Default(0.0);
{
	HX_STACK_LINE(119)
	this->r = r;
	HX_STACK_LINE(120)
	this->g = g;
	HX_STACK_LINE(121)
	this->b = b;
}
;
	return null();
}

RGB_obj::~RGB_obj() { }

Dynamic RGB_obj::__CreateEmpty() { return  new RGB_obj; }
hx::ObjectPtr< RGB_obj > RGB_obj::__new(Dynamic __o_r,Dynamic __o_g,Dynamic __o_b)
{  hx::ObjectPtr< RGB_obj > result = new RGB_obj();
	result->__construct(__o_r,__o_g,__o_b);
	return result;}

Dynamic RGB_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RGB_obj > result = new RGB_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::com::stencyl::utils::RGB RGB_obj::copy( ::com::stencyl::utils::RGB target){
	HX_STACK_PUSH("RGB::copy","com/stencyl/utils/RGB.hx",149);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(150)
	target->r = this->r;
	HX_STACK_LINE(151)
	target->g = this->g;
	HX_STACK_LINE(152)
	target->b = this->b;
	HX_STACK_LINE(153)
	return target;
}


HX_DEFINE_DYNAMIC_FUNC1(RGB_obj,copy,return )

Void RGB_obj::set24( int r,int g,int b){
{
		HX_STACK_PUSH("RGB::set24","com/stencyl/utils/RGB.hx",145);
		HX_STACK_THIS(this);
		HX_STACK_ARG(r,"r");
		HX_STACK_ARG(g,"g");
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(145)
		this->r = (((int(r) & int((int)255))) * ((Float(1.0) / Float(255.0))));
		HX_STACK_LINE(145)
		this->g = (((int(g) & int((int)255))) * ((Float(1.0) / Float(255.0))));
		HX_STACK_LINE(145)
		this->b = (((int(b) & int((int)255))) * ((Float(1.0) / Float(255.0))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(RGB_obj,set24,(void))

int RGB_obj::get24( ){
	HX_STACK_PUSH("RGB::get24","com/stencyl/utils/RGB.hx",143);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static int Block( ::com::stencyl::utils::RGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/RGB.hx",143);
			{
				HX_STACK_LINE(143)
				Float x = (__this->r * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(143)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static int Block( ::com::stencyl::utils::RGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/RGB.hx",143);
			{
				HX_STACK_LINE(143)
				Float x = (__this->g * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(143)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static int Block( ::com::stencyl::utils::RGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/RGB.hx",143);
			{
				HX_STACK_LINE(143)
				Float x = (__this->b * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(143)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(143)
	return (int((int((int(_Function_1_1::Block(this)) << int((int)16))) | int((int(_Function_1_2::Block(this)) << int((int)8))))) | int(_Function_1_3::Block(this)));
}


HX_DEFINE_DYNAMIC_FUNC0(RGB_obj,get24,return )

int RGB_obj::getB8( ){
	HX_STACK_PUSH("RGB::getB8","com/stencyl/utils/RGB.hx",140);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static int Block( ::com::stencyl::utils::RGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/RGB.hx",140);
			{
				HX_STACK_LINE(140)
				Float x = (__this->b * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(140)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(140)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(RGB_obj,getB8,return )

int RGB_obj::getG8( ){
	HX_STACK_PUSH("RGB::getG8","com/stencyl/utils/RGB.hx",138);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static int Block( ::com::stencyl::utils::RGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/RGB.hx",138);
			{
				HX_STACK_LINE(138)
				Float x = (__this->g * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(138)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(138)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(RGB_obj,getG8,return )

int RGB_obj::getR8( ){
	HX_STACK_PUSH("RGB::getR8","com/stencyl/utils/RGB.hx",136);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static int Block( ::com::stencyl::utils::RGB_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/RGB.hx",136);
			{
				HX_STACK_LINE(136)
				Float x = (__this->r * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(136)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(136)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(RGB_obj,getR8,return )

Void RGB_obj::lerp( ::com::stencyl::utils::RGB input,::com::stencyl::utils::RGB output,Float t){
{
		HX_STACK_PUSH("RGB::lerp","com/stencyl/utils/RGB.hx",129);
		HX_STACK_THIS(this);
		HX_STACK_ARG(input,"input");
		HX_STACK_ARG(output,"output");
		HX_STACK_ARG(t,"t");
		HX_STACK_LINE(130)
		output->r = (this->r + (((input->r - this->r)) * t));
		HX_STACK_LINE(131)
		output->g = (this->g + (((input->g - this->g)) * t));
		HX_STACK_LINE(132)
		output->b = (this->b + (((input->b - this->b)) * t));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(RGB_obj,lerp,(void))

Void RGB_obj::set( Float r,Float g,Float b){
{
		HX_STACK_PUSH("RGB::set","com/stencyl/utils/RGB.hx",125);
		HX_STACK_THIS(this);
		HX_STACK_ARG(r,"r");
		HX_STACK_ARG(g,"g");
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(125)
		this->r = r;
		HX_STACK_LINE(125)
		this->g = g;
		HX_STACK_LINE(125)
		this->b = b;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(RGB_obj,set,(void))

int RGB_obj::BLACK;

int RGB_obj::WHITE;

int RGB_obj::RED;

int RGB_obj::GREEN;

int RGB_obj::BLUE;

int RGB_obj::CYAN;

int RGB_obj::MAGENTA;

int RGB_obj::YELLOW;

int RGB_obj::setRGBi( int r,int g,int b){
	HX_STACK_PUSH("RGB::setRGBi","com/stencyl/utils/RGB.hx",61);
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(g,"g");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(61)
	return (int((int((int(((int(r) & int((int)255)))) << int((int)16))) | int((int(((int(g) & int((int)255)))) << int((int)8))))) | int((int(b) & int((int)255))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(RGB_obj,setRGBi,return )

int RGB_obj::setRGBf( Float r,Float g,Float b){
	HX_STACK_PUSH("RGB::setRGBf","com/stencyl/utils/RGB.hx",70);
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(g,"g");
	HX_STACK_ARG(b,"b");
	struct _Function_1_1{
		inline static int Block( Float &r){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/RGB.hx",73);
			{
				HX_STACK_LINE(73)
				Float x = (((  (((r < (int)0))) ? Float((int)0) : Float((  (((r > (int)1))) ? Float((int)1) : Float(r) )) )) * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(73)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static int Block( Float &g){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/RGB.hx",74);
			{
				HX_STACK_LINE(74)
				Float x = (((  (((g < (int)0))) ? Float((int)0) : Float((  (((g > (int)1))) ? Float((int)1) : Float(g) )) )) * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(74)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static int Block( Float &b){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/RGB.hx",75);
			{
				HX_STACK_LINE(75)
				Float x = (((  (((b < (int)0))) ? Float((int)0) : Float((  (((b > (int)1))) ? Float((int)1) : Float(b) )) )) * (int)255);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(75)
				return ::Std_obj::_int((  (((x > (int)0))) ? Float((x + .5)) : Float((  (((x < (int)0))) ? Float((x - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(70)
	return (int((int((int(((int(_Function_1_1::Block(r)) & int((int)255)))) << int((int)16))) | int((int(((int(_Function_1_2::Block(g)) & int((int)255)))) << int((int)8))))) | int((int(_Function_1_3::Block(b)) & int((int)255))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(RGB_obj,setRGBf,return )

int RGB_obj::getR( int x){
	HX_STACK_PUSH("RGB::getR","com/stencyl/utils/RGB.hx",80);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(80)
	return (int(hx::UShr(x,(int)16)) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGB_obj,getR,return )

Float RGB_obj::getRf( int x){
	HX_STACK_PUSH("RGB::getRf","com/stencyl/utils/RGB.hx",82);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(82)
	return (((int(hx::UShr(x,(int)16)) & int((int)255))) * ((Float(1.0) / Float(255.0))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGB_obj,getRf,return )

int RGB_obj::getG( int x){
	HX_STACK_PUSH("RGB::getG","com/stencyl/utils/RGB.hx",85);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(85)
	return (int(hx::UShr(x,(int)8)) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGB_obj,getG,return )

Float RGB_obj::getGf( int x){
	HX_STACK_PUSH("RGB::getGf","com/stencyl/utils/RGB.hx",87);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(87)
	return (((int(hx::UShr(x,(int)8)) & int((int)255))) * ((Float(1.0) / Float(255.0))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGB_obj,getGf,return )

int RGB_obj::getB( int x){
	HX_STACK_PUSH("RGB::getB","com/stencyl/utils/RGB.hx",90);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(90)
	return (int(x) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGB_obj,getB,return )

Float RGB_obj::getBf( int x){
	HX_STACK_PUSH("RGB::getBf","com/stencyl/utils/RGB.hx",92);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(92)
	return (((int(x) & int((int)255))) * ((Float(1.0) / Float(255.0))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGB_obj,getBf,return )

int RGB_obj::setR( int x,int r){
	HX_STACK_PUSH("RGB::setR","com/stencyl/utils/RGB.hx",95);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(r,"r");
	HX_STACK_LINE(95)
	return (int((int(((int(r) & int((int)255)))) << int((int)16))) | int((int(x) & int((int)-16711681))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RGB_obj,setR,return )

int RGB_obj::setRf( int x,Float r){
	HX_STACK_PUSH("RGB::setRf","com/stencyl/utils/RGB.hx",97);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(r,"r");
	struct _Function_1_1{
		inline static int Block( Float &r){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/RGB.hx",97);
			{
				HX_STACK_LINE(97)
				Float x1 = (((  (((r < 0.0))) ? Float(0.0) : Float((  (((r > 1.0))) ? Float(1.0) : Float(r) )) )) * (int)255);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(97)
				return ::Std_obj::_int((  (((x1 > (int)0))) ? Float((x1 + .5)) : Float((  (((x1 < (int)0))) ? Float((x1 - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(97)
	return (int((int(((int(_Function_1_1::Block(r)) & int((int)255)))) << int((int)16))) | int((int(x) & int((int)-16711681))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RGB_obj,setRf,return )

int RGB_obj::setG( int x,int g){
	HX_STACK_PUSH("RGB::setG","com/stencyl/utils/RGB.hx",100);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(g,"g");
	HX_STACK_LINE(100)
	return (int((int(((int(g) & int((int)255)))) << int((int)8))) | int((int(x) & int((int)-65281))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RGB_obj,setG,return )

int RGB_obj::setGf( int x,Float g){
	HX_STACK_PUSH("RGB::setGf","com/stencyl/utils/RGB.hx",102);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(g,"g");
	struct _Function_1_1{
		inline static int Block( Float &g){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/RGB.hx",102);
			{
				HX_STACK_LINE(102)
				Float x1 = (((  (((g < 0.0))) ? Float(0.0) : Float((  (((g > 1.0))) ? Float(1.0) : Float(g) )) )) * (int)255);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(102)
				return ::Std_obj::_int((  (((x1 > (int)0))) ? Float((x1 + .5)) : Float((  (((x1 < (int)0))) ? Float((x1 - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(102)
	return (int((int(((int(_Function_1_1::Block(g)) & int((int)255)))) << int((int)8))) | int((int(x) & int((int)-65281))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RGB_obj,setGf,return )

int RGB_obj::setB( int x,int b){
	HX_STACK_PUSH("RGB::setB","com/stencyl/utils/RGB.hx",105);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(105)
	return (int((int(b) & int((int)255))) | int((int(x) & int((int)-256))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RGB_obj,setB,return )

int RGB_obj::setBf( int x,Float b){
	HX_STACK_PUSH("RGB::setBf","com/stencyl/utils/RGB.hx",107);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(b,"b");
	struct _Function_1_1{
		inline static int Block( Float &b){
			HX_STACK_PUSH("*::closure","com/stencyl/utils/RGB.hx",107);
			{
				HX_STACK_LINE(107)
				Float x1 = (((  (((b < 0.0))) ? Float(0.0) : Float((  (((b > 1.0))) ? Float(1.0) : Float(b) )) )) * (int)255);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(107)
				return ::Std_obj::_int((  (((x1 > (int)0))) ? Float((x1 + .5)) : Float((  (((x1 < (int)0))) ? Float((x1 - .5)) : Float((int)0) )) ));
			}
			return null();
		}
	};
	HX_STACK_LINE(107)
	return (int((int(_Function_1_1::Block(b)) & int((int)255))) | int((int(x) & int((int)-256))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RGB_obj,setBf,return )


RGB_obj::RGB_obj()
{
}

void RGB_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RGB);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_END_CLASS();
}

void RGB_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(r,"r");
}

Dynamic RGB_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"getR") ) { return getR_dyn(); }
		if (HX_FIELD_EQ(inName,"getG") ) { return getG_dyn(); }
		if (HX_FIELD_EQ(inName,"getB") ) { return getB_dyn(); }
		if (HX_FIELD_EQ(inName,"setR") ) { return setR_dyn(); }
		if (HX_FIELD_EQ(inName,"setG") ) { return setG_dyn(); }
		if (HX_FIELD_EQ(inName,"setB") ) { return setB_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"getRf") ) { return getRf_dyn(); }
		if (HX_FIELD_EQ(inName,"getGf") ) { return getGf_dyn(); }
		if (HX_FIELD_EQ(inName,"getBf") ) { return getBf_dyn(); }
		if (HX_FIELD_EQ(inName,"setRf") ) { return setRf_dyn(); }
		if (HX_FIELD_EQ(inName,"setGf") ) { return setGf_dyn(); }
		if (HX_FIELD_EQ(inName,"setBf") ) { return setBf_dyn(); }
		if (HX_FIELD_EQ(inName,"set24") ) { return set24_dyn(); }
		if (HX_FIELD_EQ(inName,"get24") ) { return get24_dyn(); }
		if (HX_FIELD_EQ(inName,"getB8") ) { return getB8_dyn(); }
		if (HX_FIELD_EQ(inName,"getG8") ) { return getG8_dyn(); }
		if (HX_FIELD_EQ(inName,"getR8") ) { return getR8_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setRGBi") ) { return setRGBi_dyn(); }
		if (HX_FIELD_EQ(inName,"setRGBf") ) { return setRGBf_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RGB_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RGB_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("g"));
	outFields->push(HX_CSTRING("r"));
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
	HX_CSTRING("setRGBi"),
	HX_CSTRING("setRGBf"),
	HX_CSTRING("getR"),
	HX_CSTRING("getRf"),
	HX_CSTRING("getG"),
	HX_CSTRING("getGf"),
	HX_CSTRING("getB"),
	HX_CSTRING("getBf"),
	HX_CSTRING("setR"),
	HX_CSTRING("setRf"),
	HX_CSTRING("setG"),
	HX_CSTRING("setGf"),
	HX_CSTRING("setB"),
	HX_CSTRING("setBf"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("copy"),
	HX_CSTRING("set24"),
	HX_CSTRING("get24"),
	HX_CSTRING("getB8"),
	HX_CSTRING("getG8"),
	HX_CSTRING("getR8"),
	HX_CSTRING("lerp"),
	HX_CSTRING("set"),
	HX_CSTRING("b"),
	HX_CSTRING("g"),
	HX_CSTRING("r"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RGB_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RGB_obj::BLACK,"BLACK");
	HX_MARK_MEMBER_NAME(RGB_obj::WHITE,"WHITE");
	HX_MARK_MEMBER_NAME(RGB_obj::RED,"RED");
	HX_MARK_MEMBER_NAME(RGB_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(RGB_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(RGB_obj::CYAN,"CYAN");
	HX_MARK_MEMBER_NAME(RGB_obj::MAGENTA,"MAGENTA");
	HX_MARK_MEMBER_NAME(RGB_obj::YELLOW,"YELLOW");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RGB_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RGB_obj::BLACK,"BLACK");
	HX_VISIT_MEMBER_NAME(RGB_obj::WHITE,"WHITE");
	HX_VISIT_MEMBER_NAME(RGB_obj::RED,"RED");
	HX_VISIT_MEMBER_NAME(RGB_obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(RGB_obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(RGB_obj::CYAN,"CYAN");
	HX_VISIT_MEMBER_NAME(RGB_obj::MAGENTA,"MAGENTA");
	HX_VISIT_MEMBER_NAME(RGB_obj::YELLOW,"YELLOW");
};

Class RGB_obj::__mClass;

void RGB_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.utils.RGB"), hx::TCanCast< RGB_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RGB_obj::__boot()
{
	BLACK= (int)0;
	WHITE= (int)16777215;
	RED= (int)16711680;
	GREEN= (int)65280;
	BLUE= (int)255;
	CYAN= (int)65535;
	MAGENTA= (int)16711935;
	YELLOW= (int)16776960;
}

} // end namespace com
} // end namespace stencyl
} // end namespace utils
