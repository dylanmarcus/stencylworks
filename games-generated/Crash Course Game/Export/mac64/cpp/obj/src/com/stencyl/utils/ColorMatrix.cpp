#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_ARGB
#include <com/stencyl/utils/ARGB.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_ColorDeficiencyTypes
#include <com/stencyl/utils/ColorDeficiencyTypes.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_ColorMatrix
#include <com/stencyl/utils/ColorMatrix.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace stencyl{
namespace utils{

Void ColorMatrix_obj::__construct()
{
HX_STACK_PUSH("ColorMatrix::new","com/stencyl/utils/ColorMatrix.hx",189);
{
	HX_STACK_LINE(190)
	this->identity();
	HX_STACK_LINE(191)
	this->matrix = Array_obj< Float >::__new();
}
;
	return null();
}

ColorMatrix_obj::~ColorMatrix_obj() { }

Dynamic ColorMatrix_obj::__CreateEmpty() { return  new ColorMatrix_obj; }
hx::ObjectPtr< ColorMatrix_obj > ColorMatrix_obj::__new()
{  hx::ObjectPtr< ColorMatrix_obj > result = new ColorMatrix_obj();
	result->__construct();
	return result;}

Dynamic ColorMatrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorMatrix_obj > result = new ColorMatrix_obj();
	result->__construct();
	return result;}

Void ColorMatrix_obj::mul( Float i11,Float i12,Float i13,Float i14,Float i15,Float i21,Float i22,Float i23,Float i24,Float i25,Float i31,Float i32,Float i33,Float i34,Float i35,Float i41,Float i42,Float i43,Float i44,Float i45){
{
		HX_STACK_PUSH("ColorMatrix::mul","com/stencyl/utils/ColorMatrix.hx",733);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i11,"i11");
		HX_STACK_ARG(i12,"i12");
		HX_STACK_ARG(i13,"i13");
		HX_STACK_ARG(i14,"i14");
		HX_STACK_ARG(i15,"i15");
		HX_STACK_ARG(i21,"i21");
		HX_STACK_ARG(i22,"i22");
		HX_STACK_ARG(i23,"i23");
		HX_STACK_ARG(i24,"i24");
		HX_STACK_ARG(i25,"i25");
		HX_STACK_ARG(i31,"i31");
		HX_STACK_ARG(i32,"i32");
		HX_STACK_ARG(i33,"i33");
		HX_STACK_ARG(i34,"i34");
		HX_STACK_ARG(i35,"i35");
		HX_STACK_ARG(i41,"i41");
		HX_STACK_ARG(i42,"i42");
		HX_STACK_ARG(i43,"i43");
		HX_STACK_ARG(i44,"i44");
		HX_STACK_ARG(i45,"i45");
		HX_STACK_LINE(734)
		Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
		HX_STACK_LINE(735)
		Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
		HX_STACK_LINE(736)
		Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
		HX_STACK_LINE(737)
		Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
		HX_STACK_LINE(739)
		this->m11 = ((((this->m11 * i11) + (this->m12 * i21)) + (this->m13 * i31)) + (this->m14 * i41));
		HX_STACK_LINE(740)
		this->m12 = ((((t11 * i12) + (this->m12 * i22)) + (this->m13 * i32)) + (this->m14 * i42));
		HX_STACK_LINE(741)
		this->m13 = ((((t11 * i13) + (t12 * i23)) + (this->m13 * i33)) + (this->m14 * i43));
		HX_STACK_LINE(742)
		this->m14 = ((((t11 * i14) + (t12 * i24)) + (t13 * i34)) + (this->m14 * i44));
		HX_STACK_LINE(743)
		this->m15 = ((((t11 * i15) + (t12 * i25)) + (t13 * i35)) + (t14 * i45));
		HX_STACK_LINE(745)
		Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
		HX_STACK_LINE(746)
		Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
		HX_STACK_LINE(747)
		Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
		HX_STACK_LINE(748)
		Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
		HX_STACK_LINE(750)
		this->m21 = ((((this->m21 * i11) + (this->m22 * i21)) + (this->m23 * i31)) + (this->m24 * i41));
		HX_STACK_LINE(751)
		this->m22 = ((((t21 * i12) + (this->m22 * i22)) + (this->m23 * i32)) + (this->m24 * i42));
		HX_STACK_LINE(752)
		this->m23 = ((((t21 * i13) + (t22 * i23)) + (this->m23 * i33)) + (this->m24 * i43));
		HX_STACK_LINE(753)
		this->m24 = ((((t21 * i14) + (t22 * i24)) + (t23 * i34)) + (this->m24 * i44));
		HX_STACK_LINE(754)
		this->m25 = ((((t21 * i15) + (t22 * i25)) + (t23 * i35)) + (t24 * i45));
		HX_STACK_LINE(756)
		Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
		HX_STACK_LINE(757)
		Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
		HX_STACK_LINE(758)
		Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
		HX_STACK_LINE(759)
		Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
		HX_STACK_LINE(761)
		this->m31 = ((((this->m31 * i11) + (this->m32 * i21)) + (this->m33 * i31)) + (this->m34 * i41));
		HX_STACK_LINE(762)
		this->m32 = ((((t31 * i12) + (this->m32 * i22)) + (this->m33 * i32)) + (this->m34 * i42));
		HX_STACK_LINE(763)
		this->m33 = ((((t31 * i13) + (t32 * i23)) + (this->m33 * i33)) + (this->m34 * i43));
		HX_STACK_LINE(764)
		this->m34 = ((((t31 * i14) + (t32 * i24)) + (t33 * i34)) + (this->m34 * i44));
		HX_STACK_LINE(765)
		this->m35 = ((((t31 * i15) + (t32 * i25)) + (t33 * i35)) + (t34 * i45));
		HX_STACK_LINE(767)
		Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
		HX_STACK_LINE(768)
		Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
		HX_STACK_LINE(769)
		Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
		HX_STACK_LINE(770)
		Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
		HX_STACK_LINE(772)
		this->m41 = ((((this->m41 * i11) + (this->m42 * i21)) + (this->m43 * i31)) + (this->m44 * i41));
		HX_STACK_LINE(773)
		this->m42 = ((((t41 * i12) + (this->m42 * i22)) + (this->m43 * i32)) + (this->m44 * i42));
		HX_STACK_LINE(774)
		this->m43 = ((((t41 * i13) + (t42 * i23)) + (this->m43 * i33)) + (this->m44 * i43));
		HX_STACK_LINE(775)
		this->m44 = ((((t41 * i14) + (t42 * i24)) + (t43 * i34)) + (this->m44 * i44));
		HX_STACK_LINE(776)
		this->m45 = ((((t41 * i15) + (t42 * i25)) + (t43 * i35)) + (t44 * i45));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC20(ColorMatrix_obj,mul,(void))

Void ColorMatrix_obj::set( Float i11,Float i12,Float i13,Float i14,Float i15,Float i21,Float i22,Float i23,Float i24,Float i25,Float i31,Float i32,Float i33,Float i34,Float i35,Float i41,Float i42,Float i43,Float i44,Float i45){
{
		HX_STACK_PUSH("ColorMatrix::set","com/stencyl/utils/ColorMatrix.hx",719);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i11,"i11");
		HX_STACK_ARG(i12,"i12");
		HX_STACK_ARG(i13,"i13");
		HX_STACK_ARG(i14,"i14");
		HX_STACK_ARG(i15,"i15");
		HX_STACK_ARG(i21,"i21");
		HX_STACK_ARG(i22,"i22");
		HX_STACK_ARG(i23,"i23");
		HX_STACK_ARG(i24,"i24");
		HX_STACK_ARG(i25,"i25");
		HX_STACK_ARG(i31,"i31");
		HX_STACK_ARG(i32,"i32");
		HX_STACK_ARG(i33,"i33");
		HX_STACK_ARG(i34,"i34");
		HX_STACK_ARG(i35,"i35");
		HX_STACK_ARG(i41,"i41");
		HX_STACK_ARG(i42,"i42");
		HX_STACK_ARG(i43,"i43");
		HX_STACK_ARG(i44,"i44");
		HX_STACK_ARG(i45,"i45");
		HX_STACK_LINE(720)
		this->m11 = i11;
		HX_STACK_LINE(720)
		this->m12 = i12;
		HX_STACK_LINE(720)
		this->m13 = i13;
		HX_STACK_LINE(720)
		this->m14 = i14;
		HX_STACK_LINE(720)
		this->m15 = i15;
		HX_STACK_LINE(721)
		this->m21 = i21;
		HX_STACK_LINE(721)
		this->m22 = i22;
		HX_STACK_LINE(721)
		this->m23 = i23;
		HX_STACK_LINE(721)
		this->m24 = i24;
		HX_STACK_LINE(721)
		this->m25 = i25;
		HX_STACK_LINE(722)
		this->m31 = i31;
		HX_STACK_LINE(722)
		this->m32 = i32;
		HX_STACK_LINE(722)
		this->m33 = i33;
		HX_STACK_LINE(722)
		this->m34 = i34;
		HX_STACK_LINE(722)
		this->m35 = i35;
		HX_STACK_LINE(723)
		this->m41 = i41;
		HX_STACK_LINE(723)
		this->m42 = i42;
		HX_STACK_LINE(723)
		this->m43 = i43;
		HX_STACK_LINE(723)
		this->m44 = i44;
		HX_STACK_LINE(723)
		this->m45 = i45;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC20(ColorMatrix_obj,set,(void))

Array< Float > ColorMatrix_obj::toArray( Array< Float > out){
	HX_STACK_PUSH("ColorMatrix::toArray","com/stencyl/utils/ColorMatrix.hx",704);
	HX_STACK_THIS(this);
	HX_STACK_ARG(out,"out");
	HX_STACK_LINE(705)
	out[(int)0] = this->m11;
	HX_STACK_LINE(705)
	out[(int)1] = this->m12;
	HX_STACK_LINE(705)
	out[(int)2] = this->m13;
	HX_STACK_LINE(705)
	out[(int)3] = this->m14;
	HX_STACK_LINE(705)
	out[(int)4] = this->m15;
	HX_STACK_LINE(706)
	out[(int)5] = this->m21;
	HX_STACK_LINE(706)
	out[(int)6] = this->m22;
	HX_STACK_LINE(706)
	out[(int)7] = this->m23;
	HX_STACK_LINE(706)
	out[(int)8] = this->m24;
	HX_STACK_LINE(706)
	out[(int)9] = this->m25;
	HX_STACK_LINE(707)
	out[(int)10] = this->m31;
	HX_STACK_LINE(707)
	out[(int)11] = this->m32;
	HX_STACK_LINE(707)
	out[(int)12] = this->m33;
	HX_STACK_LINE(707)
	out[(int)13] = this->m34;
	HX_STACK_LINE(707)
	out[(int)14] = this->m35;
	HX_STACK_LINE(708)
	out[(int)15] = this->m41;
	HX_STACK_LINE(708)
	out[(int)16] = this->m42;
	HX_STACK_LINE(708)
	out[(int)17] = this->m43;
	HX_STACK_LINE(708)
	out[(int)18] = this->m44;
	HX_STACK_LINE(708)
	out[(int)19] = this->m45;
	HX_STACK_LINE(709)
	return out;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_obj,toArray,return )

Void ColorMatrix_obj::initHue( ){
{
		HX_STACK_PUSH("ColorMatrix::initHue","com/stencyl/utils/ColorMatrix.hx",669);
		HX_STACK_THIS(this);
		HX_STACK_LINE(670)
		Float greenRotation = 39.182655;		HX_STACK_VAR(greenRotation,"greenRotation");
		HX_STACK_LINE(672)
		if ((!(this->hueInitialized))){
			HX_STACK_LINE(674)
			this->hueInitialized = true;
			HX_STACK_LINE(675)
			this->preHue = ::com::stencyl::utils::ColorMatrix_obj::__new();
			HX_STACK_LINE(676)
			this->preHue->rotateRed(45.0);
			HX_STACK_LINE(677)
			this->preHue->rotateGreen(-(greenRotation));
			HX_STACK_LINE(682)
			Array< Float > lum = Array_obj< Float >::__new();		HX_STACK_VAR(lum,"lum");
			HX_STACK_LINE(684)
			lum[(int)0] = ::com::stencyl::utils::ColorMatrix_obj::LUMA_R2;
			HX_STACK_LINE(685)
			lum[(int)1] = ::com::stencyl::utils::ColorMatrix_obj::LUMA_G2;
			HX_STACK_LINE(686)
			lum[(int)2] = ::com::stencyl::utils::ColorMatrix_obj::LUMA_B2;
			HX_STACK_LINE(687)
			lum[(int)3] = 1.0;
			HX_STACK_LINE(689)
			this->preHue->transformVector(lum);
			HX_STACK_LINE(691)
			Float red = (Float(lum->__get((int)0)) / Float(lum->__get((int)2)));		HX_STACK_VAR(red,"red");
			HX_STACK_LINE(692)
			Float green = (Float(lum->__get((int)1)) / Float(lum->__get((int)2)));		HX_STACK_VAR(green,"green");
			HX_STACK_LINE(694)
			this->preHue->shearBlue(red,green);
			HX_STACK_LINE(696)
			this->postHue = ::com::stencyl::utils::ColorMatrix_obj::__new();
			HX_STACK_LINE(697)
			this->postHue->shearBlue(-(red),-(green));
			HX_STACK_LINE(698)
			this->postHue->rotateGreen(greenRotation);
			HX_STACK_LINE(699)
			this->postHue->rotateRed(-45.0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ColorMatrix_obj,initHue,(void))

Array< Float > ColorMatrix_obj::transformVector( Array< Float > values){
	HX_STACK_PUSH("ColorMatrix::transformVector","com/stencyl/utils/ColorMatrix.hx",649);
	HX_STACK_THIS(this);
	HX_STACK_ARG(values,"values");
	HX_STACK_LINE(650)
	Float v0 = values->__get((int)0);		HX_STACK_VAR(v0,"v0");
	HX_STACK_LINE(651)
	Float v1 = values->__get((int)1);		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(652)
	Float v2 = values->__get((int)2);		HX_STACK_VAR(v2,"v2");
	HX_STACK_LINE(653)
	Float v3 = values->__get((int)3);		HX_STACK_VAR(v3,"v3");
	HX_STACK_LINE(655)
	Float r = (((((v0 * this->m11) + (v1 * this->m12)) + (v2 * this->m13)) + (v3 * this->m14)) + this->m15);		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(656)
	Float g = (((((v0 * this->m21) + (v1 * this->m22)) + (v2 * this->m23)) + (v3 * this->m24)) + this->m25);		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(657)
	Float b = (((((v0 * this->m31) + (v1 * this->m32)) + (v2 * this->m33)) + (v3 * this->m34)) + this->m35);		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(658)
	Float a = (((((v0 * this->m41) + (v1 * this->m42)) + (v2 * this->m43)) + (v3 * this->m44)) + this->m45);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(660)
	values[(int)0] = r;
	HX_STACK_LINE(661)
	values[(int)1] = g;
	HX_STACK_LINE(662)
	values[(int)2] = b;
	HX_STACK_LINE(663)
	values[(int)3] = a;
	HX_STACK_LINE(665)
	return values;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_obj,transformVector,return )

::com::stencyl::utils::ARGB ColorMatrix_obj::applyMatrix( ::com::stencyl::utils::ARGB argb,::com::stencyl::utils::ARGB out){
	HX_STACK_PUSH("ColorMatrix::applyMatrix","com/stencyl/utils/ColorMatrix.hx",629);
	HX_STACK_THIS(this);
	HX_STACK_ARG(argb,"argb");
	HX_STACK_ARG(out,"out");
	HX_STACK_LINE(630)
	Float a = argb->a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(631)
	Float r = argb->r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(632)
	Float g = argb->g;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(633)
	Float b = argb->b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(635)
	Float a2 = ::com::stencyl::utils::Utils_obj::clamp(::Std_obj::_int((((((0.5 + (r * this->m41)) + (g * this->m42)) + (b * this->m43)) + (a * this->m44)) + this->m45)),(int)0,(int)255);		HX_STACK_VAR(a2,"a2");
	HX_STACK_LINE(636)
	Float r2 = ::com::stencyl::utils::Utils_obj::clamp(::Std_obj::_int((((((0.5 + (r * this->m11)) + (g * this->m12)) + (b * this->m13)) + (a * this->m14)) + this->m15)),(int)0,(int)255);		HX_STACK_VAR(r2,"r2");
	HX_STACK_LINE(637)
	Float g2 = ::com::stencyl::utils::Utils_obj::clamp(::Std_obj::_int((((((0.5 + (r * this->m21)) + (g * this->m22)) + (b * this->m23)) + (a * this->m24)) + this->m25)),(int)0,(int)255);		HX_STACK_VAR(g2,"g2");
	HX_STACK_LINE(638)
	Float b2 = ::com::stencyl::utils::Utils_obj::clamp(::Std_obj::_int((((((0.5 + (r * this->m31)) + (g * this->m32)) + (b * this->m33)) + (a * this->m34)) + this->m35)),(int)0,(int)255);		HX_STACK_VAR(b2,"b2");
	HX_STACK_LINE(640)
	{
		HX_STACK_LINE(640)
		out->a = a2;
		HX_STACK_LINE(640)
		out->r = r2;
		HX_STACK_LINE(640)
		out->g = g2;
		HX_STACK_LINE(640)
		out->b = b2;
	}
	HX_STACK_LINE(641)
	return out;
}


HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_obj,applyMatrix,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::applyColorDeficiency( ::com::stencyl::utils::ColorDeficiencyTypes type){
	HX_STACK_PUSH("ColorMatrix::applyColorDeficiency","com/stencyl/utils/ColorMatrix.hx",612);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(614)
	{
		::com::stencyl::utils::ColorDeficiencyTypes _switch_1 = (type);
		switch((_switch_1)->GetIndex()){
			case 0: {
				HX_STACK_LINE(616)
				Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
				HX_STACK_LINE(616)
				Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
				HX_STACK_LINE(616)
				Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
				HX_STACK_LINE(616)
				Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
				HX_STACK_LINE(616)
				this->m11 = ((((this->m11 * 0.567) + (this->m12 * 0.558)) + (this->m13 * (int)0)) + (this->m14 * (int)0));
				HX_STACK_LINE(616)
				this->m12 = ((((t11 * 0.433) + (this->m12 * 0.442)) + (this->m13 * 0.242)) + (this->m14 * (int)0));
				HX_STACK_LINE(616)
				this->m13 = ((((t11 * (int)0) + (t12 * (int)0)) + (this->m13 * 0.758)) + (this->m14 * (int)0));
				HX_STACK_LINE(616)
				this->m14 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + this->m14);
				HX_STACK_LINE(616)
				this->m15 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + (t14 * (int)0));
				HX_STACK_LINE(616)
				Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
				HX_STACK_LINE(616)
				Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
				HX_STACK_LINE(616)
				Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
				HX_STACK_LINE(616)
				Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
				HX_STACK_LINE(616)
				this->m21 = ((((this->m21 * 0.567) + (this->m22 * 0.558)) + (this->m23 * (int)0)) + (this->m24 * (int)0));
				HX_STACK_LINE(616)
				this->m22 = ((((t21 * 0.433) + (this->m22 * 0.442)) + (this->m23 * 0.242)) + (this->m24 * (int)0));
				HX_STACK_LINE(616)
				this->m23 = ((((t21 * (int)0) + (t22 * (int)0)) + (this->m23 * 0.758)) + (this->m24 * (int)0));
				HX_STACK_LINE(616)
				this->m24 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + this->m24);
				HX_STACK_LINE(616)
				this->m25 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + (t24 * (int)0));
				HX_STACK_LINE(616)
				Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
				HX_STACK_LINE(616)
				Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
				HX_STACK_LINE(616)
				Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
				HX_STACK_LINE(616)
				Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
				HX_STACK_LINE(616)
				this->m31 = ((((this->m31 * 0.567) + (this->m32 * 0.558)) + (this->m33 * (int)0)) + (this->m34 * (int)0));
				HX_STACK_LINE(616)
				this->m32 = ((((t31 * 0.433) + (this->m32 * 0.442)) + (this->m33 * 0.242)) + (this->m34 * (int)0));
				HX_STACK_LINE(616)
				this->m33 = ((((t31 * (int)0) + (t32 * (int)0)) + (this->m33 * 0.758)) + (this->m34 * (int)0));
				HX_STACK_LINE(616)
				this->m34 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + this->m34);
				HX_STACK_LINE(616)
				this->m35 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + (t34 * (int)0));
				HX_STACK_LINE(616)
				Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
				HX_STACK_LINE(616)
				Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
				HX_STACK_LINE(616)
				Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
				HX_STACK_LINE(616)
				Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
				HX_STACK_LINE(616)
				this->m41 = ((((this->m41 * 0.567) + (this->m42 * 0.558)) + (this->m43 * (int)0)) + (this->m44 * (int)0));
				HX_STACK_LINE(616)
				this->m42 = ((((t41 * 0.433) + (this->m42 * 0.442)) + (this->m43 * 0.242)) + (this->m44 * (int)0));
				HX_STACK_LINE(616)
				this->m43 = ((((t41 * (int)0) + (t42 * (int)0)) + (this->m43 * 0.758)) + (this->m44 * (int)0));
				HX_STACK_LINE(616)
				this->m44 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + this->m44);
				HX_STACK_LINE(616)
				this->m45 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + (t44 * (int)0));
			}
			;break;
			case 1: {
				HX_STACK_LINE(617)
				Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
				HX_STACK_LINE(617)
				Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
				HX_STACK_LINE(617)
				Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
				HX_STACK_LINE(617)
				Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
				HX_STACK_LINE(617)
				this->m11 = ((((this->m11 * 0.817) + (this->m12 * 0.333)) + (this->m13 * (int)0)) + (this->m14 * (int)0));
				HX_STACK_LINE(617)
				this->m12 = ((((t11 * 0.183) + (this->m12 * 0.667)) + (this->m13 * 0.125)) + (this->m14 * (int)0));
				HX_STACK_LINE(617)
				this->m13 = ((((t11 * (int)0) + (t12 * (int)0)) + (this->m13 * 0.875)) + (this->m14 * (int)0));
				HX_STACK_LINE(617)
				this->m14 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + this->m14);
				HX_STACK_LINE(617)
				this->m15 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + (t14 * (int)0));
				HX_STACK_LINE(617)
				Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
				HX_STACK_LINE(617)
				Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
				HX_STACK_LINE(617)
				Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
				HX_STACK_LINE(617)
				Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
				HX_STACK_LINE(617)
				this->m21 = ((((this->m21 * 0.817) + (this->m22 * 0.333)) + (this->m23 * (int)0)) + (this->m24 * (int)0));
				HX_STACK_LINE(617)
				this->m22 = ((((t21 * 0.183) + (this->m22 * 0.667)) + (this->m23 * 0.125)) + (this->m24 * (int)0));
				HX_STACK_LINE(617)
				this->m23 = ((((t21 * (int)0) + (t22 * (int)0)) + (this->m23 * 0.875)) + (this->m24 * (int)0));
				HX_STACK_LINE(617)
				this->m24 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + this->m24);
				HX_STACK_LINE(617)
				this->m25 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + (t24 * (int)0));
				HX_STACK_LINE(617)
				Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
				HX_STACK_LINE(617)
				Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
				HX_STACK_LINE(617)
				Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
				HX_STACK_LINE(617)
				Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
				HX_STACK_LINE(617)
				this->m31 = ((((this->m31 * 0.817) + (this->m32 * 0.333)) + (this->m33 * (int)0)) + (this->m34 * (int)0));
				HX_STACK_LINE(617)
				this->m32 = ((((t31 * 0.183) + (this->m32 * 0.667)) + (this->m33 * 0.125)) + (this->m34 * (int)0));
				HX_STACK_LINE(617)
				this->m33 = ((((t31 * (int)0) + (t32 * (int)0)) + (this->m33 * 0.875)) + (this->m34 * (int)0));
				HX_STACK_LINE(617)
				this->m34 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + this->m34);
				HX_STACK_LINE(617)
				this->m35 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + (t34 * (int)0));
				HX_STACK_LINE(617)
				Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
				HX_STACK_LINE(617)
				Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
				HX_STACK_LINE(617)
				Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
				HX_STACK_LINE(617)
				Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
				HX_STACK_LINE(617)
				this->m41 = ((((this->m41 * 0.817) + (this->m42 * 0.333)) + (this->m43 * (int)0)) + (this->m44 * (int)0));
				HX_STACK_LINE(617)
				this->m42 = ((((t41 * 0.183) + (this->m42 * 0.667)) + (this->m43 * 0.125)) + (this->m44 * (int)0));
				HX_STACK_LINE(617)
				this->m43 = ((((t41 * (int)0) + (t42 * (int)0)) + (this->m43 * 0.875)) + (this->m44 * (int)0));
				HX_STACK_LINE(617)
				this->m44 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + this->m44);
				HX_STACK_LINE(617)
				this->m45 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + (t44 * (int)0));
			}
			;break;
			case 2: {
				HX_STACK_LINE(618)
				Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
				HX_STACK_LINE(618)
				Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
				HX_STACK_LINE(618)
				Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
				HX_STACK_LINE(618)
				Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
				HX_STACK_LINE(618)
				this->m11 = ((((this->m11 * 0.625) + (this->m12 * 0.7)) + (this->m13 * (int)0)) + (this->m14 * (int)0));
				HX_STACK_LINE(618)
				this->m12 = ((((t11 * 0.375) + (this->m12 * 0.3)) + (this->m13 * 0.3)) + (this->m14 * (int)0));
				HX_STACK_LINE(618)
				this->m13 = ((((t11 * (int)0) + (t12 * (int)0)) + (this->m13 * 0.7)) + (this->m14 * (int)0));
				HX_STACK_LINE(618)
				this->m14 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + this->m14);
				HX_STACK_LINE(618)
				this->m15 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + (t14 * (int)0));
				HX_STACK_LINE(618)
				Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
				HX_STACK_LINE(618)
				Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
				HX_STACK_LINE(618)
				Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
				HX_STACK_LINE(618)
				Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
				HX_STACK_LINE(618)
				this->m21 = ((((this->m21 * 0.625) + (this->m22 * 0.7)) + (this->m23 * (int)0)) + (this->m24 * (int)0));
				HX_STACK_LINE(618)
				this->m22 = ((((t21 * 0.375) + (this->m22 * 0.3)) + (this->m23 * 0.3)) + (this->m24 * (int)0));
				HX_STACK_LINE(618)
				this->m23 = ((((t21 * (int)0) + (t22 * (int)0)) + (this->m23 * 0.7)) + (this->m24 * (int)0));
				HX_STACK_LINE(618)
				this->m24 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + this->m24);
				HX_STACK_LINE(618)
				this->m25 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + (t24 * (int)0));
				HX_STACK_LINE(618)
				Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
				HX_STACK_LINE(618)
				Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
				HX_STACK_LINE(618)
				Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
				HX_STACK_LINE(618)
				Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
				HX_STACK_LINE(618)
				this->m31 = ((((this->m31 * 0.625) + (this->m32 * 0.7)) + (this->m33 * (int)0)) + (this->m34 * (int)0));
				HX_STACK_LINE(618)
				this->m32 = ((((t31 * 0.375) + (this->m32 * 0.3)) + (this->m33 * 0.3)) + (this->m34 * (int)0));
				HX_STACK_LINE(618)
				this->m33 = ((((t31 * (int)0) + (t32 * (int)0)) + (this->m33 * 0.7)) + (this->m34 * (int)0));
				HX_STACK_LINE(618)
				this->m34 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + this->m34);
				HX_STACK_LINE(618)
				this->m35 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + (t34 * (int)0));
				HX_STACK_LINE(618)
				Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
				HX_STACK_LINE(618)
				Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
				HX_STACK_LINE(618)
				Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
				HX_STACK_LINE(618)
				Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
				HX_STACK_LINE(618)
				this->m41 = ((((this->m41 * 0.625) + (this->m42 * 0.7)) + (this->m43 * (int)0)) + (this->m44 * (int)0));
				HX_STACK_LINE(618)
				this->m42 = ((((t41 * 0.375) + (this->m42 * 0.3)) + (this->m43 * 0.3)) + (this->m44 * (int)0));
				HX_STACK_LINE(618)
				this->m43 = ((((t41 * (int)0) + (t42 * (int)0)) + (this->m43 * 0.7)) + (this->m44 * (int)0));
				HX_STACK_LINE(618)
				this->m44 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + this->m44);
				HX_STACK_LINE(618)
				this->m45 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + (t44 * (int)0));
			}
			;break;
			case 3: {
				HX_STACK_LINE(619)
				Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
				HX_STACK_LINE(619)
				Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
				HX_STACK_LINE(619)
				Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
				HX_STACK_LINE(619)
				Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
				HX_STACK_LINE(619)
				this->m11 = ((((this->m11 * 0.8) + (this->m12 * 0.258)) + (this->m13 * (int)0)) + (this->m14 * (int)0));
				HX_STACK_LINE(619)
				this->m12 = ((((t11 * 0.2) + (this->m12 * 0.742)) + (this->m13 * 0.142)) + (this->m14 * (int)0));
				HX_STACK_LINE(619)
				this->m13 = ((((t11 * (int)0) + (t12 * (int)0)) + (this->m13 * 0.858)) + (this->m14 * (int)0));
				HX_STACK_LINE(619)
				this->m14 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + this->m14);
				HX_STACK_LINE(619)
				this->m15 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + (t14 * (int)0));
				HX_STACK_LINE(619)
				Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
				HX_STACK_LINE(619)
				Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
				HX_STACK_LINE(619)
				Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
				HX_STACK_LINE(619)
				Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
				HX_STACK_LINE(619)
				this->m21 = ((((this->m21 * 0.8) + (this->m22 * 0.258)) + (this->m23 * (int)0)) + (this->m24 * (int)0));
				HX_STACK_LINE(619)
				this->m22 = ((((t21 * 0.2) + (this->m22 * 0.742)) + (this->m23 * 0.142)) + (this->m24 * (int)0));
				HX_STACK_LINE(619)
				this->m23 = ((((t21 * (int)0) + (t22 * (int)0)) + (this->m23 * 0.858)) + (this->m24 * (int)0));
				HX_STACK_LINE(619)
				this->m24 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + this->m24);
				HX_STACK_LINE(619)
				this->m25 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + (t24 * (int)0));
				HX_STACK_LINE(619)
				Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
				HX_STACK_LINE(619)
				Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
				HX_STACK_LINE(619)
				Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
				HX_STACK_LINE(619)
				Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
				HX_STACK_LINE(619)
				this->m31 = ((((this->m31 * 0.8) + (this->m32 * 0.258)) + (this->m33 * (int)0)) + (this->m34 * (int)0));
				HX_STACK_LINE(619)
				this->m32 = ((((t31 * 0.2) + (this->m32 * 0.742)) + (this->m33 * 0.142)) + (this->m34 * (int)0));
				HX_STACK_LINE(619)
				this->m33 = ((((t31 * (int)0) + (t32 * (int)0)) + (this->m33 * 0.858)) + (this->m34 * (int)0));
				HX_STACK_LINE(619)
				this->m34 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + this->m34);
				HX_STACK_LINE(619)
				this->m35 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + (t34 * (int)0));
				HX_STACK_LINE(619)
				Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
				HX_STACK_LINE(619)
				Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
				HX_STACK_LINE(619)
				Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
				HX_STACK_LINE(619)
				Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
				HX_STACK_LINE(619)
				this->m41 = ((((this->m41 * 0.8) + (this->m42 * 0.258)) + (this->m43 * (int)0)) + (this->m44 * (int)0));
				HX_STACK_LINE(619)
				this->m42 = ((((t41 * 0.2) + (this->m42 * 0.742)) + (this->m43 * 0.142)) + (this->m44 * (int)0));
				HX_STACK_LINE(619)
				this->m43 = ((((t41 * (int)0) + (t42 * (int)0)) + (this->m43 * 0.858)) + (this->m44 * (int)0));
				HX_STACK_LINE(619)
				this->m44 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + this->m44);
				HX_STACK_LINE(619)
				this->m45 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + (t44 * (int)0));
			}
			;break;
			case 4: {
				HX_STACK_LINE(620)
				Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
				HX_STACK_LINE(620)
				Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
				HX_STACK_LINE(620)
				Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
				HX_STACK_LINE(620)
				Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
				HX_STACK_LINE(620)
				this->m11 = ((((this->m11 * 0.95) + (this->m12 * (int)0)) + (this->m13 * (int)0)) + (this->m14 * (int)0));
				HX_STACK_LINE(620)
				this->m12 = ((((t11 * 0.05) + (this->m12 * 0.433)) + (this->m13 * 0.475)) + (this->m14 * (int)0));
				HX_STACK_LINE(620)
				this->m13 = ((((t11 * (int)0) + (t12 * 0.567)) + (this->m13 * 0.525)) + (this->m14 * (int)0));
				HX_STACK_LINE(620)
				this->m14 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + this->m14);
				HX_STACK_LINE(620)
				this->m15 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + (t14 * (int)0));
				HX_STACK_LINE(620)
				Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
				HX_STACK_LINE(620)
				Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
				HX_STACK_LINE(620)
				Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
				HX_STACK_LINE(620)
				Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
				HX_STACK_LINE(620)
				this->m21 = ((((this->m21 * 0.95) + (this->m22 * (int)0)) + (this->m23 * (int)0)) + (this->m24 * (int)0));
				HX_STACK_LINE(620)
				this->m22 = ((((t21 * 0.05) + (this->m22 * 0.433)) + (this->m23 * 0.475)) + (this->m24 * (int)0));
				HX_STACK_LINE(620)
				this->m23 = ((((t21 * (int)0) + (t22 * 0.567)) + (this->m23 * 0.525)) + (this->m24 * (int)0));
				HX_STACK_LINE(620)
				this->m24 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + this->m24);
				HX_STACK_LINE(620)
				this->m25 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + (t24 * (int)0));
				HX_STACK_LINE(620)
				Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
				HX_STACK_LINE(620)
				Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
				HX_STACK_LINE(620)
				Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
				HX_STACK_LINE(620)
				Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
				HX_STACK_LINE(620)
				this->m31 = ((((this->m31 * 0.95) + (this->m32 * (int)0)) + (this->m33 * (int)0)) + (this->m34 * (int)0));
				HX_STACK_LINE(620)
				this->m32 = ((((t31 * 0.05) + (this->m32 * 0.433)) + (this->m33 * 0.475)) + (this->m34 * (int)0));
				HX_STACK_LINE(620)
				this->m33 = ((((t31 * (int)0) + (t32 * 0.567)) + (this->m33 * 0.525)) + (this->m34 * (int)0));
				HX_STACK_LINE(620)
				this->m34 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + this->m34);
				HX_STACK_LINE(620)
				this->m35 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + (t34 * (int)0));
				HX_STACK_LINE(620)
				Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
				HX_STACK_LINE(620)
				Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
				HX_STACK_LINE(620)
				Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
				HX_STACK_LINE(620)
				Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
				HX_STACK_LINE(620)
				this->m41 = ((((this->m41 * 0.95) + (this->m42 * (int)0)) + (this->m43 * (int)0)) + (this->m44 * (int)0));
				HX_STACK_LINE(620)
				this->m42 = ((((t41 * 0.05) + (this->m42 * 0.433)) + (this->m43 * 0.475)) + (this->m44 * (int)0));
				HX_STACK_LINE(620)
				this->m43 = ((((t41 * (int)0) + (t42 * 0.567)) + (this->m43 * 0.525)) + (this->m44 * (int)0));
				HX_STACK_LINE(620)
				this->m44 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + this->m44);
				HX_STACK_LINE(620)
				this->m45 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + (t44 * (int)0));
			}
			;break;
			case 5: {
				HX_STACK_LINE(621)
				Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
				HX_STACK_LINE(621)
				Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
				HX_STACK_LINE(621)
				Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
				HX_STACK_LINE(621)
				Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
				HX_STACK_LINE(621)
				this->m11 = ((((this->m11 * 0.967) + (this->m12 * (int)0)) + (this->m13 * (int)0)) + (this->m14 * (int)0));
				HX_STACK_LINE(621)
				this->m12 = ((((t11 * 0.033) + (this->m12 * 0.733)) + (this->m13 * 0.183)) + (this->m14 * (int)0));
				HX_STACK_LINE(621)
				this->m13 = ((((t11 * (int)0) + (t12 * 0.267)) + (this->m13 * 0.817)) + (this->m14 * (int)0));
				HX_STACK_LINE(621)
				this->m14 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + this->m14);
				HX_STACK_LINE(621)
				this->m15 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + (t14 * (int)0));
				HX_STACK_LINE(621)
				Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
				HX_STACK_LINE(621)
				Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
				HX_STACK_LINE(621)
				Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
				HX_STACK_LINE(621)
				Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
				HX_STACK_LINE(621)
				this->m21 = ((((this->m21 * 0.967) + (this->m22 * (int)0)) + (this->m23 * (int)0)) + (this->m24 * (int)0));
				HX_STACK_LINE(621)
				this->m22 = ((((t21 * 0.033) + (this->m22 * 0.733)) + (this->m23 * 0.183)) + (this->m24 * (int)0));
				HX_STACK_LINE(621)
				this->m23 = ((((t21 * (int)0) + (t22 * 0.267)) + (this->m23 * 0.817)) + (this->m24 * (int)0));
				HX_STACK_LINE(621)
				this->m24 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + this->m24);
				HX_STACK_LINE(621)
				this->m25 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + (t24 * (int)0));
				HX_STACK_LINE(621)
				Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
				HX_STACK_LINE(621)
				Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
				HX_STACK_LINE(621)
				Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
				HX_STACK_LINE(621)
				Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
				HX_STACK_LINE(621)
				this->m31 = ((((this->m31 * 0.967) + (this->m32 * (int)0)) + (this->m33 * (int)0)) + (this->m34 * (int)0));
				HX_STACK_LINE(621)
				this->m32 = ((((t31 * 0.033) + (this->m32 * 0.733)) + (this->m33 * 0.183)) + (this->m34 * (int)0));
				HX_STACK_LINE(621)
				this->m33 = ((((t31 * (int)0) + (t32 * 0.267)) + (this->m33 * 0.817)) + (this->m34 * (int)0));
				HX_STACK_LINE(621)
				this->m34 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + this->m34);
				HX_STACK_LINE(621)
				this->m35 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + (t34 * (int)0));
				HX_STACK_LINE(621)
				Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
				HX_STACK_LINE(621)
				Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
				HX_STACK_LINE(621)
				Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
				HX_STACK_LINE(621)
				Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
				HX_STACK_LINE(621)
				this->m41 = ((((this->m41 * 0.967) + (this->m42 * (int)0)) + (this->m43 * (int)0)) + (this->m44 * (int)0));
				HX_STACK_LINE(621)
				this->m42 = ((((t41 * 0.033) + (this->m42 * 0.733)) + (this->m43 * 0.183)) + (this->m44 * (int)0));
				HX_STACK_LINE(621)
				this->m43 = ((((t41 * (int)0) + (t42 * 0.267)) + (this->m43 * 0.817)) + (this->m44 * (int)0));
				HX_STACK_LINE(621)
				this->m44 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + this->m44);
				HX_STACK_LINE(621)
				this->m45 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + (t44 * (int)0));
			}
			;break;
			case 6: {
				HX_STACK_LINE(622)
				Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
				HX_STACK_LINE(622)
				Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
				HX_STACK_LINE(622)
				Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
				HX_STACK_LINE(622)
				Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
				HX_STACK_LINE(622)
				this->m11 = ((((this->m11 * 0.299) + (this->m12 * 0.299)) + (this->m13 * 0.299)) + (this->m14 * (int)0));
				HX_STACK_LINE(622)
				this->m12 = ((((t11 * 0.587) + (this->m12 * 0.587)) + (this->m13 * 0.587)) + (this->m14 * (int)0));
				HX_STACK_LINE(622)
				this->m13 = ((((t11 * 0.114) + (t12 * 0.114)) + (this->m13 * 0.114)) + (this->m14 * (int)0));
				HX_STACK_LINE(622)
				this->m14 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + this->m14);
				HX_STACK_LINE(622)
				this->m15 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + (t14 * (int)0));
				HX_STACK_LINE(622)
				Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
				HX_STACK_LINE(622)
				Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
				HX_STACK_LINE(622)
				Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
				HX_STACK_LINE(622)
				Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
				HX_STACK_LINE(622)
				this->m21 = ((((this->m21 * 0.299) + (this->m22 * 0.299)) + (this->m23 * 0.299)) + (this->m24 * (int)0));
				HX_STACK_LINE(622)
				this->m22 = ((((t21 * 0.587) + (this->m22 * 0.587)) + (this->m23 * 0.587)) + (this->m24 * (int)0));
				HX_STACK_LINE(622)
				this->m23 = ((((t21 * 0.114) + (t22 * 0.114)) + (this->m23 * 0.114)) + (this->m24 * (int)0));
				HX_STACK_LINE(622)
				this->m24 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + this->m24);
				HX_STACK_LINE(622)
				this->m25 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + (t24 * (int)0));
				HX_STACK_LINE(622)
				Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
				HX_STACK_LINE(622)
				Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
				HX_STACK_LINE(622)
				Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
				HX_STACK_LINE(622)
				Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
				HX_STACK_LINE(622)
				this->m31 = ((((this->m31 * 0.299) + (this->m32 * 0.299)) + (this->m33 * 0.299)) + (this->m34 * (int)0));
				HX_STACK_LINE(622)
				this->m32 = ((((t31 * 0.587) + (this->m32 * 0.587)) + (this->m33 * 0.587)) + (this->m34 * (int)0));
				HX_STACK_LINE(622)
				this->m33 = ((((t31 * 0.114) + (t32 * 0.114)) + (this->m33 * 0.114)) + (this->m34 * (int)0));
				HX_STACK_LINE(622)
				this->m34 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + this->m34);
				HX_STACK_LINE(622)
				this->m35 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + (t34 * (int)0));
				HX_STACK_LINE(622)
				Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
				HX_STACK_LINE(622)
				Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
				HX_STACK_LINE(622)
				Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
				HX_STACK_LINE(622)
				Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
				HX_STACK_LINE(622)
				this->m41 = ((((this->m41 * 0.299) + (this->m42 * 0.299)) + (this->m43 * 0.299)) + (this->m44 * (int)0));
				HX_STACK_LINE(622)
				this->m42 = ((((t41 * 0.587) + (this->m42 * 0.587)) + (this->m43 * 0.587)) + (this->m44 * (int)0));
				HX_STACK_LINE(622)
				this->m43 = ((((t41 * 0.114) + (t42 * 0.114)) + (this->m43 * 0.114)) + (this->m44 * (int)0));
				HX_STACK_LINE(622)
				this->m44 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + this->m44);
				HX_STACK_LINE(622)
				this->m45 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + (t44 * (int)0));
			}
			;break;
			case 7: {
				HX_STACK_LINE(623)
				Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
				HX_STACK_LINE(623)
				Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
				HX_STACK_LINE(623)
				Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
				HX_STACK_LINE(623)
				Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
				HX_STACK_LINE(623)
				this->m11 = ((((this->m11 * 0.618) + (this->m12 * 0.163)) + (this->m13 * 0.163)) + (this->m14 * (int)0));
				HX_STACK_LINE(623)
				this->m12 = ((((t11 * 0.320) + (this->m12 * 0.775)) + (this->m13 * 0.320)) + (this->m14 * (int)0));
				HX_STACK_LINE(623)
				this->m13 = ((((t11 * 0.062) + (t12 * 0.062)) + (this->m13 * 0.516)) + (this->m14 * (int)0));
				HX_STACK_LINE(623)
				this->m14 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + this->m14);
				HX_STACK_LINE(623)
				this->m15 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + (t14 * (int)0));
				HX_STACK_LINE(623)
				Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
				HX_STACK_LINE(623)
				Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
				HX_STACK_LINE(623)
				Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
				HX_STACK_LINE(623)
				Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
				HX_STACK_LINE(623)
				this->m21 = ((((this->m21 * 0.618) + (this->m22 * 0.163)) + (this->m23 * 0.163)) + (this->m24 * (int)0));
				HX_STACK_LINE(623)
				this->m22 = ((((t21 * 0.320) + (this->m22 * 0.775)) + (this->m23 * 0.320)) + (this->m24 * (int)0));
				HX_STACK_LINE(623)
				this->m23 = ((((t21 * 0.062) + (t22 * 0.062)) + (this->m23 * 0.516)) + (this->m24 * (int)0));
				HX_STACK_LINE(623)
				this->m24 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + this->m24);
				HX_STACK_LINE(623)
				this->m25 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + (t24 * (int)0));
				HX_STACK_LINE(623)
				Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
				HX_STACK_LINE(623)
				Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
				HX_STACK_LINE(623)
				Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
				HX_STACK_LINE(623)
				Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
				HX_STACK_LINE(623)
				this->m31 = ((((this->m31 * 0.618) + (this->m32 * 0.163)) + (this->m33 * 0.163)) + (this->m34 * (int)0));
				HX_STACK_LINE(623)
				this->m32 = ((((t31 * 0.320) + (this->m32 * 0.775)) + (this->m33 * 0.320)) + (this->m34 * (int)0));
				HX_STACK_LINE(623)
				this->m33 = ((((t31 * 0.062) + (t32 * 0.062)) + (this->m33 * 0.516)) + (this->m34 * (int)0));
				HX_STACK_LINE(623)
				this->m34 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + this->m34);
				HX_STACK_LINE(623)
				this->m35 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + (t34 * (int)0));
				HX_STACK_LINE(623)
				Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
				HX_STACK_LINE(623)
				Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
				HX_STACK_LINE(623)
				Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
				HX_STACK_LINE(623)
				Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
				HX_STACK_LINE(623)
				this->m41 = ((((this->m41 * 0.618) + (this->m42 * 0.163)) + (this->m43 * 0.163)) + (this->m44 * (int)0));
				HX_STACK_LINE(623)
				this->m42 = ((((t41 * 0.320) + (this->m42 * 0.775)) + (this->m43 * 0.320)) + (this->m44 * (int)0));
				HX_STACK_LINE(623)
				this->m43 = ((((t41 * 0.062) + (t42 * 0.062)) + (this->m43 * 0.516)) + (this->m44 * (int)0));
				HX_STACK_LINE(623)
				this->m44 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + this->m44);
				HX_STACK_LINE(623)
				this->m45 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + (t44 * (int)0));
			}
			;break;
		}
	}
	HX_STACK_LINE(625)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_obj,applyColorDeficiency,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::shearBlue( Float red,Float green){
	HX_STACK_PUSH("ColorMatrix::shearBlue","com/stencyl/utils/ColorMatrix.hx",600);
	HX_STACK_THIS(this);
	HX_STACK_ARG(red,"red");
	HX_STACK_ARG(green,"green");
	HX_STACK_LINE(601)
	{
		HX_STACK_LINE(601)
		this->m11 = 1.0;
		HX_STACK_LINE(601)
		this->m12 = 0.0;
		HX_STACK_LINE(601)
		this->m13 = 0.0;
		HX_STACK_LINE(601)
		this->m14 = 0.0;
		HX_STACK_LINE(601)
		this->m15 = 0.0;
		HX_STACK_LINE(601)
		this->m21 = 0.0;
		HX_STACK_LINE(601)
		this->m22 = 1.0;
		HX_STACK_LINE(601)
		this->m23 = 0.0;
		HX_STACK_LINE(601)
		this->m24 = 0.0;
		HX_STACK_LINE(601)
		this->m25 = 0.0;
		HX_STACK_LINE(601)
		this->m31 = red;
		HX_STACK_LINE(601)
		this->m32 = green;
		HX_STACK_LINE(601)
		this->m33 = 1.0;
		HX_STACK_LINE(601)
		this->m34 = 0.0;
		HX_STACK_LINE(601)
		this->m35 = 0.0;
		HX_STACK_LINE(601)
		this->m41 = 0.0;
		HX_STACK_LINE(601)
		this->m42 = 0.0;
		HX_STACK_LINE(601)
		this->m43 = 0.0;
		HX_STACK_LINE(601)
		this->m44 = 1.0;
		HX_STACK_LINE(601)
		this->m45 = 0.0;
	}
	HX_STACK_LINE(608)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_obj,shearBlue,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::shearGreen( Float red,Float blue){
	HX_STACK_PUSH("ColorMatrix::shearGreen","com/stencyl/utils/ColorMatrix.hx",588);
	HX_STACK_THIS(this);
	HX_STACK_ARG(red,"red");
	HX_STACK_ARG(blue,"blue");
	HX_STACK_LINE(589)
	{
		HX_STACK_LINE(589)
		this->m11 = 1.0;
		HX_STACK_LINE(589)
		this->m12 = 0.0;
		HX_STACK_LINE(589)
		this->m13 = 0.0;
		HX_STACK_LINE(589)
		this->m14 = 0.0;
		HX_STACK_LINE(589)
		this->m15 = 0.0;
		HX_STACK_LINE(589)
		this->m21 = red;
		HX_STACK_LINE(589)
		this->m22 = 1.0;
		HX_STACK_LINE(589)
		this->m23 = blue;
		HX_STACK_LINE(589)
		this->m24 = 0.0;
		HX_STACK_LINE(589)
		this->m25 = 0.0;
		HX_STACK_LINE(589)
		this->m31 = 0.0;
		HX_STACK_LINE(589)
		this->m32 = 0.0;
		HX_STACK_LINE(589)
		this->m33 = 1.0;
		HX_STACK_LINE(589)
		this->m34 = 0.0;
		HX_STACK_LINE(589)
		this->m35 = 0.0;
		HX_STACK_LINE(589)
		this->m41 = 0.0;
		HX_STACK_LINE(589)
		this->m42 = 0.0;
		HX_STACK_LINE(589)
		this->m43 = 0.0;
		HX_STACK_LINE(589)
		this->m44 = 1.0;
		HX_STACK_LINE(589)
		this->m45 = 0.0;
	}
	HX_STACK_LINE(596)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_obj,shearGreen,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::shearRed( Float green,Float blue){
	HX_STACK_PUSH("ColorMatrix::shearRed","com/stencyl/utils/ColorMatrix.hx",576);
	HX_STACK_THIS(this);
	HX_STACK_ARG(green,"green");
	HX_STACK_ARG(blue,"blue");
	HX_STACK_LINE(577)
	{
		HX_STACK_LINE(577)
		this->m11 = 1.0;
		HX_STACK_LINE(577)
		this->m12 = green;
		HX_STACK_LINE(577)
		this->m13 = blue;
		HX_STACK_LINE(577)
		this->m14 = 0.0;
		HX_STACK_LINE(577)
		this->m15 = 0.0;
		HX_STACK_LINE(577)
		this->m21 = 0.0;
		HX_STACK_LINE(577)
		this->m22 = 1.0;
		HX_STACK_LINE(577)
		this->m23 = 0.0;
		HX_STACK_LINE(577)
		this->m24 = 0.0;
		HX_STACK_LINE(577)
		this->m25 = 0.0;
		HX_STACK_LINE(577)
		this->m31 = 0.0;
		HX_STACK_LINE(577)
		this->m32 = 0.0;
		HX_STACK_LINE(577)
		this->m33 = 1.0;
		HX_STACK_LINE(577)
		this->m34 = 0.0;
		HX_STACK_LINE(577)
		this->m35 = 0.0;
		HX_STACK_LINE(577)
		this->m41 = 0.0;
		HX_STACK_LINE(577)
		this->m42 = 0.0;
		HX_STACK_LINE(577)
		this->m43 = 0.0;
		HX_STACK_LINE(577)
		this->m44 = 1.0;
		HX_STACK_LINE(577)
		this->m45 = 0.0;
	}
	HX_STACK_LINE(584)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_obj,shearRed,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::rotateBlue( Float angle){
	HX_STACK_PUSH("ColorMatrix::rotateBlue","com/stencyl/utils/ColorMatrix.hx",560);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(561)
	hx::MultEq(angle,(Float(3.14159) / Float((int)180)));
	HX_STACK_LINE(562)
	Float c = ::Math_obj::cos(angle);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(563)
	Float s = ::Math_obj::cos(angle);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(565)
	{
		HX_STACK_LINE(565)
		this->m11 = c;
		HX_STACK_LINE(565)
		this->m12 = -(s);
		HX_STACK_LINE(565)
		this->m13 = 0.0;
		HX_STACK_LINE(565)
		this->m14 = 0.0;
		HX_STACK_LINE(565)
		this->m15 = 0.0;
		HX_STACK_LINE(565)
		this->m21 = s;
		HX_STACK_LINE(565)
		this->m22 = c;
		HX_STACK_LINE(565)
		this->m23 = 0.0;
		HX_STACK_LINE(565)
		this->m24 = 0.0;
		HX_STACK_LINE(565)
		this->m25 = 0.0;
		HX_STACK_LINE(565)
		this->m31 = 0.0;
		HX_STACK_LINE(565)
		this->m32 = 0.0;
		HX_STACK_LINE(565)
		this->m33 = 1.0;
		HX_STACK_LINE(565)
		this->m34 = 0.0;
		HX_STACK_LINE(565)
		this->m35 = 0.0;
		HX_STACK_LINE(565)
		this->m41 = 0.0;
		HX_STACK_LINE(565)
		this->m42 = 0.0;
		HX_STACK_LINE(565)
		this->m43 = 0.0;
		HX_STACK_LINE(565)
		this->m44 = 1.0;
		HX_STACK_LINE(565)
		this->m45 = 0.0;
	}
	HX_STACK_LINE(572)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_obj,rotateBlue,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::rotateGreen( Float angle){
	HX_STACK_PUSH("ColorMatrix::rotateGreen","com/stencyl/utils/ColorMatrix.hx",544);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(545)
	hx::MultEq(angle,(Float(3.14159) / Float((int)180)));
	HX_STACK_LINE(546)
	Float c = ::Math_obj::cos(angle);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(547)
	Float s = ::Math_obj::cos(angle);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(549)
	{
		HX_STACK_LINE(549)
		this->m11 = c;
		HX_STACK_LINE(549)
		this->m12 = 0.0;
		HX_STACK_LINE(549)
		this->m13 = s;
		HX_STACK_LINE(549)
		this->m14 = 0.0;
		HX_STACK_LINE(549)
		this->m15 = 0.0;
		HX_STACK_LINE(549)
		this->m21 = 0.0;
		HX_STACK_LINE(549)
		this->m22 = 1.0;
		HX_STACK_LINE(549)
		this->m23 = 0.0;
		HX_STACK_LINE(549)
		this->m24 = 0.0;
		HX_STACK_LINE(549)
		this->m25 = 0.0;
		HX_STACK_LINE(549)
		this->m31 = -(s);
		HX_STACK_LINE(549)
		this->m32 = 0.0;
		HX_STACK_LINE(549)
		this->m33 = c;
		HX_STACK_LINE(549)
		this->m34 = 0.0;
		HX_STACK_LINE(549)
		this->m35 = 0.0;
		HX_STACK_LINE(549)
		this->m41 = 0.0;
		HX_STACK_LINE(549)
		this->m42 = 0.0;
		HX_STACK_LINE(549)
		this->m43 = 0.0;
		HX_STACK_LINE(549)
		this->m44 = 1.0;
		HX_STACK_LINE(549)
		this->m45 = 0.0;
	}
	HX_STACK_LINE(556)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_obj,rotateGreen,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::rotateRed( Float angle){
	HX_STACK_PUSH("ColorMatrix::rotateRed","com/stencyl/utils/ColorMatrix.hx",528);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(529)
	hx::MultEq(angle,(Float(3.14159) / Float((int)180)));
	HX_STACK_LINE(530)
	Float c = ::Math_obj::cos(angle);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(531)
	Float s = ::Math_obj::cos(angle);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(533)
	{
		HX_STACK_LINE(533)
		this->m11 = 1.0;
		HX_STACK_LINE(533)
		this->m12 = 0.0;
		HX_STACK_LINE(533)
		this->m13 = 0.0;
		HX_STACK_LINE(533)
		this->m14 = 0.0;
		HX_STACK_LINE(533)
		this->m15 = 0.0;
		HX_STACK_LINE(533)
		this->m21 = 0.0;
		HX_STACK_LINE(533)
		this->m22 = c;
		HX_STACK_LINE(533)
		this->m23 = -(s);
		HX_STACK_LINE(533)
		this->m24 = 0.0;
		HX_STACK_LINE(533)
		this->m25 = 0.0;
		HX_STACK_LINE(533)
		this->m31 = 0.0;
		HX_STACK_LINE(533)
		this->m32 = s;
		HX_STACK_LINE(533)
		this->m33 = c;
		HX_STACK_LINE(533)
		this->m34 = 0.0;
		HX_STACK_LINE(533)
		this->m35 = 0.0;
		HX_STACK_LINE(533)
		this->m41 = 0.0;
		HX_STACK_LINE(533)
		this->m42 = 0.0;
		HX_STACK_LINE(533)
		this->m43 = 0.0;
		HX_STACK_LINE(533)
		this->m44 = 1.0;
		HX_STACK_LINE(533)
		this->m45 = 0.0;
	}
	HX_STACK_LINE(540)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_obj,rotateRed,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::setAlpha( Float alpha){
	HX_STACK_PUSH("ColorMatrix::setAlpha","com/stencyl/utils/ColorMatrix.hx",516);
	HX_STACK_THIS(this);
	HX_STACK_ARG(alpha,"alpha");
	HX_STACK_LINE(517)
	{
		HX_STACK_LINE(517)
		Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
		HX_STACK_LINE(517)
		Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
		HX_STACK_LINE(517)
		Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
		HX_STACK_LINE(517)
		Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
		HX_STACK_LINE(517)
		this->m11 = (((this->m11 + (this->m12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * 0.0));
		HX_STACK_LINE(517)
		this->m12 = ((((t11 * 0.0) + this->m12) + (this->m13 * 0.0)) + (this->m14 * 0.0));
		HX_STACK_LINE(517)
		this->m13 = ((((t11 * 0.0) + (t12 * 0.0)) + this->m13) + (this->m14 * 0.0));
		HX_STACK_LINE(517)
		this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (this->m14 * alpha));
		HX_STACK_LINE(517)
		this->m15 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (t14 * 0.0));
		HX_STACK_LINE(517)
		Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
		HX_STACK_LINE(517)
		Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
		HX_STACK_LINE(517)
		Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
		HX_STACK_LINE(517)
		Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
		HX_STACK_LINE(517)
		this->m21 = (((this->m21 + (this->m22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * 0.0));
		HX_STACK_LINE(517)
		this->m22 = ((((t21 * 0.0) + this->m22) + (this->m23 * 0.0)) + (this->m24 * 0.0));
		HX_STACK_LINE(517)
		this->m23 = ((((t21 * 0.0) + (t22 * 0.0)) + this->m23) + (this->m24 * 0.0));
		HX_STACK_LINE(517)
		this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (this->m24 * alpha));
		HX_STACK_LINE(517)
		this->m25 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (t24 * 0.0));
		HX_STACK_LINE(517)
		Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
		HX_STACK_LINE(517)
		Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
		HX_STACK_LINE(517)
		Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
		HX_STACK_LINE(517)
		Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
		HX_STACK_LINE(517)
		this->m31 = (((this->m31 + (this->m32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * 0.0));
		HX_STACK_LINE(517)
		this->m32 = ((((t31 * 0.0) + this->m32) + (this->m33 * 0.0)) + (this->m34 * 0.0));
		HX_STACK_LINE(517)
		this->m33 = ((((t31 * 0.0) + (t32 * 0.0)) + this->m33) + (this->m34 * 0.0));
		HX_STACK_LINE(517)
		this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (this->m34 * alpha));
		HX_STACK_LINE(517)
		this->m35 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (t34 * 0.0));
		HX_STACK_LINE(517)
		Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
		HX_STACK_LINE(517)
		Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
		HX_STACK_LINE(517)
		Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
		HX_STACK_LINE(517)
		Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
		HX_STACK_LINE(517)
		this->m41 = (((this->m41 + (this->m42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * 0.0));
		HX_STACK_LINE(517)
		this->m42 = ((((t41 * 0.0) + this->m42) + (this->m43 * 0.0)) + (this->m44 * 0.0));
		HX_STACK_LINE(517)
		this->m43 = ((((t41 * 0.0) + (t42 * 0.0)) + this->m43) + (this->m44 * 0.0));
		HX_STACK_LINE(517)
		this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (this->m44 * alpha));
		HX_STACK_LINE(517)
		this->m45 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (t44 * 0.0));
	}
	HX_STACK_LINE(524)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_obj,setAlpha,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::rgb2Alpha( Float r,Float g,Float b){
	HX_STACK_PUSH("ColorMatrix::rgb2Alpha","com/stencyl/utils/ColorMatrix.hx",505);
	HX_STACK_THIS(this);
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(g,"g");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(506)
	{
		HX_STACK_LINE(506)
		Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
		HX_STACK_LINE(506)
		Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
		HX_STACK_LINE(506)
		Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
		HX_STACK_LINE(506)
		Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
		HX_STACK_LINE(506)
		this->m11 = ((((this->m11 * 0.0) + (this->m12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * r));
		HX_STACK_LINE(506)
		this->m12 = ((((t11 * 0.0) + (this->m12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * g));
		HX_STACK_LINE(506)
		this->m13 = ((((t11 * 0.0) + (t12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * b));
		HX_STACK_LINE(506)
		this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (this->m14 * 0.0));
		HX_STACK_LINE(506)
		this->m15 = ((((t11 * 255.0) + (t12 * 255.0)) + (t13 * 255.0)) + (t14 * 0.0));
		HX_STACK_LINE(506)
		Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
		HX_STACK_LINE(506)
		Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
		HX_STACK_LINE(506)
		Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
		HX_STACK_LINE(506)
		Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
		HX_STACK_LINE(506)
		this->m21 = ((((this->m21 * 0.0) + (this->m22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * r));
		HX_STACK_LINE(506)
		this->m22 = ((((t21 * 0.0) + (this->m22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * g));
		HX_STACK_LINE(506)
		this->m23 = ((((t21 * 0.0) + (t22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * b));
		HX_STACK_LINE(506)
		this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (this->m24 * 0.0));
		HX_STACK_LINE(506)
		this->m25 = ((((t21 * 255.0) + (t22 * 255.0)) + (t23 * 255.0)) + (t24 * 0.0));
		HX_STACK_LINE(506)
		Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
		HX_STACK_LINE(506)
		Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
		HX_STACK_LINE(506)
		Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
		HX_STACK_LINE(506)
		Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
		HX_STACK_LINE(506)
		this->m31 = ((((this->m31 * 0.0) + (this->m32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * r));
		HX_STACK_LINE(506)
		this->m32 = ((((t31 * 0.0) + (this->m32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * g));
		HX_STACK_LINE(506)
		this->m33 = ((((t31 * 0.0) + (t32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * b));
		HX_STACK_LINE(506)
		this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (this->m34 * 0.0));
		HX_STACK_LINE(506)
		this->m35 = ((((t31 * 255.0) + (t32 * 255.0)) + (t33 * 255.0)) + (t34 * 0.0));
		HX_STACK_LINE(506)
		Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
		HX_STACK_LINE(506)
		Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
		HX_STACK_LINE(506)
		Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
		HX_STACK_LINE(506)
		Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
		HX_STACK_LINE(506)
		this->m41 = ((((this->m41 * 0.0) + (this->m42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * r));
		HX_STACK_LINE(506)
		this->m42 = ((((t41 * 0.0) + (this->m42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * g));
		HX_STACK_LINE(506)
		this->m43 = ((((t41 * 0.0) + (t42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * b));
		HX_STACK_LINE(506)
		this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (this->m44 * 0.0));
		HX_STACK_LINE(506)
		this->m45 = ((((t41 * 255.0) + (t42 * 255.0)) + (t43 * 255.0)) + (t44 * 0.0));
	}
	HX_STACK_LINE(512)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(ColorMatrix_obj,rgb2Alpha,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::invertAlpha( ){
	HX_STACK_PUSH("ColorMatrix::invertAlpha","com/stencyl/utils/ColorMatrix.hx",493);
	HX_STACK_THIS(this);
	HX_STACK_LINE(494)
	{
		HX_STACK_LINE(494)
		Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
		HX_STACK_LINE(494)
		Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
		HX_STACK_LINE(494)
		Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
		HX_STACK_LINE(494)
		Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
		HX_STACK_LINE(494)
		this->m11 = (((this->m11 + (this->m12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * 0.0));
		HX_STACK_LINE(494)
		this->m12 = ((((t11 * 0.0) + this->m12) + (this->m13 * 0.0)) + (this->m14 * 0.0));
		HX_STACK_LINE(494)
		this->m13 = ((((t11 * 0.0) + (t12 * 0.0)) + this->m13) + (this->m14 * 0.0));
		HX_STACK_LINE(494)
		this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (this->m14 * -1.0));
		HX_STACK_LINE(494)
		this->m15 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (t14 * 255.0));
		HX_STACK_LINE(494)
		Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
		HX_STACK_LINE(494)
		Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
		HX_STACK_LINE(494)
		Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
		HX_STACK_LINE(494)
		Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
		HX_STACK_LINE(494)
		this->m21 = (((this->m21 + (this->m22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * 0.0));
		HX_STACK_LINE(494)
		this->m22 = ((((t21 * 0.0) + this->m22) + (this->m23 * 0.0)) + (this->m24 * 0.0));
		HX_STACK_LINE(494)
		this->m23 = ((((t21 * 0.0) + (t22 * 0.0)) + this->m23) + (this->m24 * 0.0));
		HX_STACK_LINE(494)
		this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (this->m24 * -1.0));
		HX_STACK_LINE(494)
		this->m25 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (t24 * 255.0));
		HX_STACK_LINE(494)
		Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
		HX_STACK_LINE(494)
		Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
		HX_STACK_LINE(494)
		Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
		HX_STACK_LINE(494)
		Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
		HX_STACK_LINE(494)
		this->m31 = (((this->m31 + (this->m32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * 0.0));
		HX_STACK_LINE(494)
		this->m32 = ((((t31 * 0.0) + this->m32) + (this->m33 * 0.0)) + (this->m34 * 0.0));
		HX_STACK_LINE(494)
		this->m33 = ((((t31 * 0.0) + (t32 * 0.0)) + this->m33) + (this->m34 * 0.0));
		HX_STACK_LINE(494)
		this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (this->m34 * -1.0));
		HX_STACK_LINE(494)
		this->m35 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (t34 * 255.0));
		HX_STACK_LINE(494)
		Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
		HX_STACK_LINE(494)
		Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
		HX_STACK_LINE(494)
		Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
		HX_STACK_LINE(494)
		Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
		HX_STACK_LINE(494)
		this->m41 = (((this->m41 + (this->m42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * 0.0));
		HX_STACK_LINE(494)
		this->m42 = ((((t41 * 0.0) + this->m42) + (this->m43 * 0.0)) + (this->m44 * 0.0));
		HX_STACK_LINE(494)
		this->m43 = ((((t41 * 0.0) + (t42 * 0.0)) + this->m43) + (this->m44 * 0.0));
		HX_STACK_LINE(494)
		this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (this->m44 * -1.0));
		HX_STACK_LINE(494)
		this->m45 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (t44 * 255.0));
	}
	HX_STACK_LINE(501)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ColorMatrix_obj,invertAlpha,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::averageRGB2Alpha( ){
	HX_STACK_PUSH("ColorMatrix::averageRGB2Alpha","com/stencyl/utils/ColorMatrix.hx",481);
	HX_STACK_THIS(this);
	HX_STACK_LINE(482)
	{
		HX_STACK_LINE(482)
		Float i41 = ::com::stencyl::utils::ColorMatrix_obj::INV3;		HX_STACK_VAR(i41,"i41");
		Float i42 = ::com::stencyl::utils::ColorMatrix_obj::INV3;		HX_STACK_VAR(i42,"i42");
		Float i43 = ::com::stencyl::utils::ColorMatrix_obj::INV3;		HX_STACK_VAR(i43,"i43");
		HX_STACK_LINE(482)
		Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
		HX_STACK_LINE(482)
		Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
		HX_STACK_LINE(482)
		Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
		HX_STACK_LINE(482)
		Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
		HX_STACK_LINE(482)
		this->m11 = ((((this->m11 * 0.0) + (this->m12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * i41));
		HX_STACK_LINE(482)
		this->m12 = ((((t11 * 0.0) + (this->m12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * i42));
		HX_STACK_LINE(482)
		this->m13 = ((((t11 * 0.0) + (t12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * i43));
		HX_STACK_LINE(482)
		this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (this->m14 * 0.0));
		HX_STACK_LINE(482)
		this->m15 = ((((t11 * 255.0) + (t12 * 255.0)) + (t13 * 255.0)) + (t14 * 0.0));
		HX_STACK_LINE(482)
		Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
		HX_STACK_LINE(482)
		Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
		HX_STACK_LINE(482)
		Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
		HX_STACK_LINE(482)
		Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
		HX_STACK_LINE(482)
		this->m21 = ((((this->m21 * 0.0) + (this->m22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * i41));
		HX_STACK_LINE(482)
		this->m22 = ((((t21 * 0.0) + (this->m22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * i42));
		HX_STACK_LINE(482)
		this->m23 = ((((t21 * 0.0) + (t22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * i43));
		HX_STACK_LINE(482)
		this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (this->m24 * 0.0));
		HX_STACK_LINE(482)
		this->m25 = ((((t21 * 255.0) + (t22 * 255.0)) + (t23 * 255.0)) + (t24 * 0.0));
		HX_STACK_LINE(482)
		Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
		HX_STACK_LINE(482)
		Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
		HX_STACK_LINE(482)
		Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
		HX_STACK_LINE(482)
		Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
		HX_STACK_LINE(482)
		this->m31 = ((((this->m31 * 0.0) + (this->m32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * i41));
		HX_STACK_LINE(482)
		this->m32 = ((((t31 * 0.0) + (this->m32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * i42));
		HX_STACK_LINE(482)
		this->m33 = ((((t31 * 0.0) + (t32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * i43));
		HX_STACK_LINE(482)
		this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (this->m34 * 0.0));
		HX_STACK_LINE(482)
		this->m35 = ((((t31 * 255.0) + (t32 * 255.0)) + (t33 * 255.0)) + (t34 * 0.0));
		HX_STACK_LINE(482)
		Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
		HX_STACK_LINE(482)
		Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
		HX_STACK_LINE(482)
		Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
		HX_STACK_LINE(482)
		Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
		HX_STACK_LINE(482)
		this->m41 = ((((this->m41 * 0.0) + (this->m42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * i41));
		HX_STACK_LINE(482)
		this->m42 = ((((t41 * 0.0) + (this->m42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * i42));
		HX_STACK_LINE(482)
		this->m43 = ((((t41 * 0.0) + (t42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * i43));
		HX_STACK_LINE(482)
		this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (this->m44 * 0.0));
		HX_STACK_LINE(482)
		this->m45 = ((((t41 * 255.0) + (t42 * 255.0)) + (t43 * 255.0)) + (t44 * 0.0));
	}
	HX_STACK_LINE(489)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ColorMatrix_obj,averageRGB2Alpha,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::thresholdAlpha( Float threshold,Dynamic __o_factor){
Dynamic factor = __o_factor.Default(256.);
	HX_STACK_PUSH("ColorMatrix::thresholdAlpha","com/stencyl/utils/ColorMatrix.hx",469);
	HX_STACK_THIS(this);
	HX_STACK_ARG(threshold,"threshold");
	HX_STACK_ARG(factor,"factor");
{
		HX_STACK_LINE(470)
		{
			HX_STACK_LINE(470)
			Float i44 = factor;		HX_STACK_VAR(i44,"i44");
			Float i45 = (-(factor) * threshold);		HX_STACK_VAR(i45,"i45");
			HX_STACK_LINE(470)
			Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
			HX_STACK_LINE(470)
			Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
			HX_STACK_LINE(470)
			Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
			HX_STACK_LINE(470)
			Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
			HX_STACK_LINE(470)
			this->m11 = (((this->m11 + (this->m12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * 0.0));
			HX_STACK_LINE(470)
			this->m12 = ((((t11 * 0.0) + this->m12) + (this->m13 * 0.0)) + (this->m14 * 0.0));
			HX_STACK_LINE(470)
			this->m13 = ((((t11 * 0.0) + (t12 * 0.0)) + this->m13) + (this->m14 * 0.0));
			HX_STACK_LINE(470)
			this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (this->m14 * i44));
			HX_STACK_LINE(470)
			this->m15 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (t14 * i45));
			HX_STACK_LINE(470)
			Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
			HX_STACK_LINE(470)
			Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
			HX_STACK_LINE(470)
			Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
			HX_STACK_LINE(470)
			Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
			HX_STACK_LINE(470)
			this->m21 = (((this->m21 + (this->m22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * 0.0));
			HX_STACK_LINE(470)
			this->m22 = ((((t21 * 0.0) + this->m22) + (this->m23 * 0.0)) + (this->m24 * 0.0));
			HX_STACK_LINE(470)
			this->m23 = ((((t21 * 0.0) + (t22 * 0.0)) + this->m23) + (this->m24 * 0.0));
			HX_STACK_LINE(470)
			this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (this->m24 * i44));
			HX_STACK_LINE(470)
			this->m25 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (t24 * i45));
			HX_STACK_LINE(470)
			Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
			HX_STACK_LINE(470)
			Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
			HX_STACK_LINE(470)
			Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
			HX_STACK_LINE(470)
			Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
			HX_STACK_LINE(470)
			this->m31 = (((this->m31 + (this->m32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * 0.0));
			HX_STACK_LINE(470)
			this->m32 = ((((t31 * 0.0) + this->m32) + (this->m33 * 0.0)) + (this->m34 * 0.0));
			HX_STACK_LINE(470)
			this->m33 = ((((t31 * 0.0) + (t32 * 0.0)) + this->m33) + (this->m34 * 0.0));
			HX_STACK_LINE(470)
			this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (this->m34 * i44));
			HX_STACK_LINE(470)
			this->m35 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (t34 * i45));
			HX_STACK_LINE(470)
			Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
			HX_STACK_LINE(470)
			Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
			HX_STACK_LINE(470)
			Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
			HX_STACK_LINE(470)
			Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
			HX_STACK_LINE(470)
			this->m41 = (((this->m41 + (this->m42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * 0.0));
			HX_STACK_LINE(470)
			this->m42 = ((((t41 * 0.0) + this->m42) + (this->m43 * 0.0)) + (this->m44 * 0.0));
			HX_STACK_LINE(470)
			this->m43 = ((((t41 * 0.0) + (t42 * 0.0)) + this->m43) + (this->m44 * 0.0));
			HX_STACK_LINE(470)
			this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (this->m44 * i44));
			HX_STACK_LINE(470)
			this->m45 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (t44 * i45));
		}
		HX_STACK_LINE(477)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_obj,thresholdAlpha,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::clearChannels( Dynamic __o_red,Dynamic __o_green,Dynamic __o_blue,Dynamic __o_alpha){
Dynamic red = __o_red.Default(false);
Dynamic green = __o_green.Default(false);
Dynamic blue = __o_blue.Default(false);
Dynamic alpha = __o_alpha.Default(false);
	HX_STACK_PUSH("ColorMatrix::clearChannels","com/stencyl/utils/ColorMatrix.hx",448);
	HX_STACK_THIS(this);
	HX_STACK_ARG(red,"red");
	HX_STACK_ARG(green,"green");
	HX_STACK_ARG(blue,"blue");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(449)
		if ((red)){
			HX_STACK_LINE(450)
			this->m11 = this->m12 = this->m13 = this->m14 = this->m15 = 0.0;
		}
		HX_STACK_LINE(453)
		if ((green)){
			HX_STACK_LINE(454)
			this->m21 = this->m22 = this->m23 = this->m24 = this->m25 = 0.0;
		}
		HX_STACK_LINE(457)
		if ((blue)){
			HX_STACK_LINE(458)
			this->m31 = this->m32 = this->m33 = this->m34 = this->m35 = 0.0;
		}
		HX_STACK_LINE(461)
		if ((alpha)){
			HX_STACK_LINE(462)
			this->m41 = this->m42 = this->m43 = this->m44 = this->m45 = 0.0;
		}
		HX_STACK_LINE(465)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(ColorMatrix_obj,clearChannels,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::setMultiplicators( Dynamic __o_red,Dynamic __o_green,Dynamic __o_blue,Dynamic __o_alpha){
Dynamic red = __o_red.Default(1.);
Dynamic green = __o_green.Default(1.);
Dynamic blue = __o_blue.Default(1.);
Dynamic alpha = __o_alpha.Default(1.);
	HX_STACK_PUSH("ColorMatrix::setMultiplicators","com/stencyl/utils/ColorMatrix.hx",436);
	HX_STACK_THIS(this);
	HX_STACK_ARG(red,"red");
	HX_STACK_ARG(green,"green");
	HX_STACK_ARG(blue,"blue");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(437)
		{
			HX_STACK_LINE(437)
			Float i11 = red;		HX_STACK_VAR(i11,"i11");
			Float i22 = green;		HX_STACK_VAR(i22,"i22");
			Float i33 = blue;		HX_STACK_VAR(i33,"i33");
			Float i44 = alpha;		HX_STACK_VAR(i44,"i44");
			HX_STACK_LINE(437)
			Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
			HX_STACK_LINE(437)
			Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
			HX_STACK_LINE(437)
			Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
			HX_STACK_LINE(437)
			Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
			HX_STACK_LINE(437)
			this->m11 = ((((this->m11 * i11) + (this->m12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * 0.0));
			HX_STACK_LINE(437)
			this->m12 = ((((t11 * 0.0) + (this->m12 * i22)) + (this->m13 * 0.0)) + (this->m14 * 0.0));
			HX_STACK_LINE(437)
			this->m13 = ((((t11 * 0.0) + (t12 * 0.0)) + (this->m13 * i33)) + (this->m14 * 0.0));
			HX_STACK_LINE(437)
			this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (this->m14 * i44));
			HX_STACK_LINE(437)
			this->m15 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (t14 * 0.0));
			HX_STACK_LINE(437)
			Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
			HX_STACK_LINE(437)
			Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
			HX_STACK_LINE(437)
			Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
			HX_STACK_LINE(437)
			Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
			HX_STACK_LINE(437)
			this->m21 = ((((this->m21 * i11) + (this->m22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * 0.0));
			HX_STACK_LINE(437)
			this->m22 = ((((t21 * 0.0) + (this->m22 * i22)) + (this->m23 * 0.0)) + (this->m24 * 0.0));
			HX_STACK_LINE(437)
			this->m23 = ((((t21 * 0.0) + (t22 * 0.0)) + (this->m23 * i33)) + (this->m24 * 0.0));
			HX_STACK_LINE(437)
			this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (this->m24 * i44));
			HX_STACK_LINE(437)
			this->m25 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (t24 * 0.0));
			HX_STACK_LINE(437)
			Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
			HX_STACK_LINE(437)
			Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
			HX_STACK_LINE(437)
			Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
			HX_STACK_LINE(437)
			Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
			HX_STACK_LINE(437)
			this->m31 = ((((this->m31 * i11) + (this->m32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * 0.0));
			HX_STACK_LINE(437)
			this->m32 = ((((t31 * 0.0) + (this->m32 * i22)) + (this->m33 * 0.0)) + (this->m34 * 0.0));
			HX_STACK_LINE(437)
			this->m33 = ((((t31 * 0.0) + (t32 * 0.0)) + (this->m33 * i33)) + (this->m34 * 0.0));
			HX_STACK_LINE(437)
			this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (this->m34 * i44));
			HX_STACK_LINE(437)
			this->m35 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (t34 * 0.0));
			HX_STACK_LINE(437)
			Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
			HX_STACK_LINE(437)
			Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
			HX_STACK_LINE(437)
			Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
			HX_STACK_LINE(437)
			Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
			HX_STACK_LINE(437)
			this->m41 = ((((this->m41 * i11) + (this->m42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * 0.0));
			HX_STACK_LINE(437)
			this->m42 = ((((t41 * 0.0) + (this->m42 * i22)) + (this->m43 * 0.0)) + (this->m44 * 0.0));
			HX_STACK_LINE(437)
			this->m43 = ((((t41 * 0.0) + (t42 * 0.0)) + (this->m43 * i33)) + (this->m44 * 0.0));
			HX_STACK_LINE(437)
			this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (this->m44 * i44));
			HX_STACK_LINE(437)
			this->m45 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (t44 * 0.0));
		}
		HX_STACK_LINE(444)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(ColorMatrix_obj,setMultiplicators,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::desaturate( ){
	HX_STACK_PUSH("ColorMatrix::desaturate","com/stencyl/utils/ColorMatrix.hx",424);
	HX_STACK_THIS(this);
	HX_STACK_LINE(425)
	{
		HX_STACK_LINE(425)
		Float i11 = ::com::stencyl::utils::ColorMatrix_obj::LUMA_R;		HX_STACK_VAR(i11,"i11");
		Float i12 = ::com::stencyl::utils::ColorMatrix_obj::LUMA_G;		HX_STACK_VAR(i12,"i12");
		Float i13 = ::com::stencyl::utils::ColorMatrix_obj::LUMA_B;		HX_STACK_VAR(i13,"i13");
		Float i21 = ::com::stencyl::utils::ColorMatrix_obj::LUMA_R;		HX_STACK_VAR(i21,"i21");
		Float i22 = ::com::stencyl::utils::ColorMatrix_obj::LUMA_G;		HX_STACK_VAR(i22,"i22");
		Float i23 = ::com::stencyl::utils::ColorMatrix_obj::LUMA_B;		HX_STACK_VAR(i23,"i23");
		Float i31 = ::com::stencyl::utils::ColorMatrix_obj::LUMA_R;		HX_STACK_VAR(i31,"i31");
		Float i32 = ::com::stencyl::utils::ColorMatrix_obj::LUMA_G;		HX_STACK_VAR(i32,"i32");
		Float i33 = ::com::stencyl::utils::ColorMatrix_obj::LUMA_B;		HX_STACK_VAR(i33,"i33");
		HX_STACK_LINE(425)
		Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
		HX_STACK_LINE(425)
		Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
		HX_STACK_LINE(425)
		Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
		HX_STACK_LINE(425)
		Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
		HX_STACK_LINE(425)
		this->m11 = ((((this->m11 * i11) + (this->m12 * i21)) + (this->m13 * i31)) + (this->m14 * 0.0));
		HX_STACK_LINE(425)
		this->m12 = ((((t11 * i12) + (this->m12 * i22)) + (this->m13 * i32)) + (this->m14 * 0.0));
		HX_STACK_LINE(425)
		this->m13 = ((((t11 * i13) + (t12 * i23)) + (this->m13 * i33)) + (this->m14 * 0.0));
		HX_STACK_LINE(425)
		this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + this->m14);
		HX_STACK_LINE(425)
		this->m15 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (t14 * 0.0));
		HX_STACK_LINE(425)
		Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
		HX_STACK_LINE(425)
		Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
		HX_STACK_LINE(425)
		Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
		HX_STACK_LINE(425)
		Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
		HX_STACK_LINE(425)
		this->m21 = ((((this->m21 * i11) + (this->m22 * i21)) + (this->m23 * i31)) + (this->m24 * 0.0));
		HX_STACK_LINE(425)
		this->m22 = ((((t21 * i12) + (this->m22 * i22)) + (this->m23 * i32)) + (this->m24 * 0.0));
		HX_STACK_LINE(425)
		this->m23 = ((((t21 * i13) + (t22 * i23)) + (this->m23 * i33)) + (this->m24 * 0.0));
		HX_STACK_LINE(425)
		this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + this->m24);
		HX_STACK_LINE(425)
		this->m25 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (t24 * 0.0));
		HX_STACK_LINE(425)
		Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
		HX_STACK_LINE(425)
		Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
		HX_STACK_LINE(425)
		Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
		HX_STACK_LINE(425)
		Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
		HX_STACK_LINE(425)
		this->m31 = ((((this->m31 * i11) + (this->m32 * i21)) + (this->m33 * i31)) + (this->m34 * 0.0));
		HX_STACK_LINE(425)
		this->m32 = ((((t31 * i12) + (this->m32 * i22)) + (this->m33 * i32)) + (this->m34 * 0.0));
		HX_STACK_LINE(425)
		this->m33 = ((((t31 * i13) + (t32 * i23)) + (this->m33 * i33)) + (this->m34 * 0.0));
		HX_STACK_LINE(425)
		this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + this->m34);
		HX_STACK_LINE(425)
		this->m35 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (t34 * 0.0));
		HX_STACK_LINE(425)
		Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
		HX_STACK_LINE(425)
		Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
		HX_STACK_LINE(425)
		Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
		HX_STACK_LINE(425)
		Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
		HX_STACK_LINE(425)
		this->m41 = ((((this->m41 * i11) + (this->m42 * i21)) + (this->m43 * i31)) + (this->m44 * 0.0));
		HX_STACK_LINE(425)
		this->m42 = ((((t41 * i12) + (this->m42 * i22)) + (this->m43 * i32)) + (this->m44 * 0.0));
		HX_STACK_LINE(425)
		this->m43 = ((((t41 * i13) + (t42 * i23)) + (this->m43 * i33)) + (this->m44 * 0.0));
		HX_STACK_LINE(425)
		this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + this->m44);
		HX_STACK_LINE(425)
		this->m45 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (t44 * 0.0));
	}
	HX_STACK_LINE(432)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ColorMatrix_obj,desaturate,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::threshold( Float threshold,Dynamic __o_factor){
Dynamic factor = __o_factor.Default(256.);
	HX_STACK_PUSH("ColorMatrix::threshold","com/stencyl/utils/ColorMatrix.hx",412);
	HX_STACK_THIS(this);
	HX_STACK_ARG(threshold,"threshold");
	HX_STACK_ARG(factor,"factor");
{
		HX_STACK_LINE(413)
		{
			HX_STACK_LINE(413)
			Float i11 = (::com::stencyl::utils::ColorMatrix_obj::LUMA_R * factor);		HX_STACK_VAR(i11,"i11");
			Float i12 = (::com::stencyl::utils::ColorMatrix_obj::LUMA_G * factor);		HX_STACK_VAR(i12,"i12");
			Float i13 = (::com::stencyl::utils::ColorMatrix_obj::LUMA_B * factor);		HX_STACK_VAR(i13,"i13");
			Float i15 = (-(factor) * threshold);		HX_STACK_VAR(i15,"i15");
			Float i21 = (::com::stencyl::utils::ColorMatrix_obj::LUMA_R * factor);		HX_STACK_VAR(i21,"i21");
			Float i22 = (::com::stencyl::utils::ColorMatrix_obj::LUMA_G * factor);		HX_STACK_VAR(i22,"i22");
			Float i23 = (::com::stencyl::utils::ColorMatrix_obj::LUMA_B * factor);		HX_STACK_VAR(i23,"i23");
			Float i25 = (-(factor) * threshold);		HX_STACK_VAR(i25,"i25");
			Float i31 = (::com::stencyl::utils::ColorMatrix_obj::LUMA_R * factor);		HX_STACK_VAR(i31,"i31");
			Float i32 = (::com::stencyl::utils::ColorMatrix_obj::LUMA_G * factor);		HX_STACK_VAR(i32,"i32");
			Float i33 = (::com::stencyl::utils::ColorMatrix_obj::LUMA_B * factor);		HX_STACK_VAR(i33,"i33");
			Float i35 = (-(factor) * threshold);		HX_STACK_VAR(i35,"i35");
			HX_STACK_LINE(413)
			Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
			HX_STACK_LINE(413)
			Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
			HX_STACK_LINE(413)
			Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
			HX_STACK_LINE(413)
			Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
			HX_STACK_LINE(413)
			this->m11 = ((((this->m11 * i11) + (this->m12 * i21)) + (this->m13 * i31)) + (this->m14 * 0.0));
			HX_STACK_LINE(413)
			this->m12 = ((((t11 * i12) + (this->m12 * i22)) + (this->m13 * i32)) + (this->m14 * 0.0));
			HX_STACK_LINE(413)
			this->m13 = ((((t11 * i13) + (t12 * i23)) + (this->m13 * i33)) + (this->m14 * 0.0));
			HX_STACK_LINE(413)
			this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + this->m14);
			HX_STACK_LINE(413)
			this->m15 = ((((t11 * i15) + (t12 * i25)) + (t13 * i35)) + (t14 * 0.0));
			HX_STACK_LINE(413)
			Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
			HX_STACK_LINE(413)
			Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
			HX_STACK_LINE(413)
			Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
			HX_STACK_LINE(413)
			Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
			HX_STACK_LINE(413)
			this->m21 = ((((this->m21 * i11) + (this->m22 * i21)) + (this->m23 * i31)) + (this->m24 * 0.0));
			HX_STACK_LINE(413)
			this->m22 = ((((t21 * i12) + (this->m22 * i22)) + (this->m23 * i32)) + (this->m24 * 0.0));
			HX_STACK_LINE(413)
			this->m23 = ((((t21 * i13) + (t22 * i23)) + (this->m23 * i33)) + (this->m24 * 0.0));
			HX_STACK_LINE(413)
			this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + this->m24);
			HX_STACK_LINE(413)
			this->m25 = ((((t21 * i15) + (t22 * i25)) + (t23 * i35)) + (t24 * 0.0));
			HX_STACK_LINE(413)
			Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
			HX_STACK_LINE(413)
			Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
			HX_STACK_LINE(413)
			Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
			HX_STACK_LINE(413)
			Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
			HX_STACK_LINE(413)
			this->m31 = ((((this->m31 * i11) + (this->m32 * i21)) + (this->m33 * i31)) + (this->m34 * 0.0));
			HX_STACK_LINE(413)
			this->m32 = ((((t31 * i12) + (this->m32 * i22)) + (this->m33 * i32)) + (this->m34 * 0.0));
			HX_STACK_LINE(413)
			this->m33 = ((((t31 * i13) + (t32 * i23)) + (this->m33 * i33)) + (this->m34 * 0.0));
			HX_STACK_LINE(413)
			this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + this->m34);
			HX_STACK_LINE(413)
			this->m35 = ((((t31 * i15) + (t32 * i25)) + (t33 * i35)) + (t34 * 0.0));
			HX_STACK_LINE(413)
			Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
			HX_STACK_LINE(413)
			Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
			HX_STACK_LINE(413)
			Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
			HX_STACK_LINE(413)
			Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
			HX_STACK_LINE(413)
			this->m41 = ((((this->m41 * i11) + (this->m42 * i21)) + (this->m43 * i31)) + (this->m44 * 0.0));
			HX_STACK_LINE(413)
			this->m42 = ((((t41 * i12) + (this->m42 * i22)) + (this->m43 * i32)) + (this->m44 * 0.0));
			HX_STACK_LINE(413)
			this->m43 = ((((t41 * i13) + (t42 * i23)) + (this->m43 * i33)) + (this->m44 * 0.0));
			HX_STACK_LINE(413)
			this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + this->m44);
			HX_STACK_LINE(413)
			this->m45 = ((((t41 * i15) + (t42 * i25)) + (t43 * i35)) + (t44 * 0.0));
		}
		HX_STACK_LINE(420)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_obj,threshold,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::average( Dynamic __o_r,Dynamic __o_g,Dynamic __o_b){
Dynamic r = __o_r.Default(0.33333333);
Dynamic g = __o_g.Default(0.33333333);
Dynamic b = __o_b.Default(0.33333333);
	HX_STACK_PUSH("ColorMatrix::average","com/stencyl/utils/ColorMatrix.hx",400);
	HX_STACK_THIS(this);
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(g,"g");
	HX_STACK_ARG(b,"b");
{
		HX_STACK_LINE(401)
		{
			HX_STACK_LINE(401)
			Float i11 = r;		HX_STACK_VAR(i11,"i11");
			Float i12 = g;		HX_STACK_VAR(i12,"i12");
			Float i13 = b;		HX_STACK_VAR(i13,"i13");
			Float i21 = r;		HX_STACK_VAR(i21,"i21");
			Float i22 = g;		HX_STACK_VAR(i22,"i22");
			Float i23 = b;		HX_STACK_VAR(i23,"i23");
			Float i31 = r;		HX_STACK_VAR(i31,"i31");
			Float i32 = g;		HX_STACK_VAR(i32,"i32");
			Float i33 = b;		HX_STACK_VAR(i33,"i33");
			HX_STACK_LINE(401)
			Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
			HX_STACK_LINE(401)
			Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
			HX_STACK_LINE(401)
			Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
			HX_STACK_LINE(401)
			Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
			HX_STACK_LINE(401)
			this->m11 = ((((this->m11 * i11) + (this->m12 * i21)) + (this->m13 * i31)) + (this->m14 * 0.0));
			HX_STACK_LINE(401)
			this->m12 = ((((t11 * i12) + (this->m12 * i22)) + (this->m13 * i32)) + (this->m14 * 0.0));
			HX_STACK_LINE(401)
			this->m13 = ((((t11 * i13) + (t12 * i23)) + (this->m13 * i33)) + (this->m14 * 0.0));
			HX_STACK_LINE(401)
			this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + this->m14);
			HX_STACK_LINE(401)
			this->m15 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (t14 * 0.0));
			HX_STACK_LINE(401)
			Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
			HX_STACK_LINE(401)
			Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
			HX_STACK_LINE(401)
			Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
			HX_STACK_LINE(401)
			Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
			HX_STACK_LINE(401)
			this->m21 = ((((this->m21 * i11) + (this->m22 * i21)) + (this->m23 * i31)) + (this->m24 * 0.0));
			HX_STACK_LINE(401)
			this->m22 = ((((t21 * i12) + (this->m22 * i22)) + (this->m23 * i32)) + (this->m24 * 0.0));
			HX_STACK_LINE(401)
			this->m23 = ((((t21 * i13) + (t22 * i23)) + (this->m23 * i33)) + (this->m24 * 0.0));
			HX_STACK_LINE(401)
			this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + this->m24);
			HX_STACK_LINE(401)
			this->m25 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (t24 * 0.0));
			HX_STACK_LINE(401)
			Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
			HX_STACK_LINE(401)
			Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
			HX_STACK_LINE(401)
			Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
			HX_STACK_LINE(401)
			Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
			HX_STACK_LINE(401)
			this->m31 = ((((this->m31 * i11) + (this->m32 * i21)) + (this->m33 * i31)) + (this->m34 * 0.0));
			HX_STACK_LINE(401)
			this->m32 = ((((t31 * i12) + (this->m32 * i22)) + (this->m33 * i32)) + (this->m34 * 0.0));
			HX_STACK_LINE(401)
			this->m33 = ((((t31 * i13) + (t32 * i23)) + (this->m33 * i33)) + (this->m34 * 0.0));
			HX_STACK_LINE(401)
			this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + this->m34);
			HX_STACK_LINE(401)
			this->m35 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (t34 * 0.0));
			HX_STACK_LINE(401)
			Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
			HX_STACK_LINE(401)
			Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
			HX_STACK_LINE(401)
			Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
			HX_STACK_LINE(401)
			Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
			HX_STACK_LINE(401)
			this->m41 = ((((this->m41 * i11) + (this->m42 * i21)) + (this->m43 * i31)) + (this->m44 * 0.0));
			HX_STACK_LINE(401)
			this->m42 = ((((t41 * i12) + (this->m42 * i22)) + (this->m43 * i32)) + (this->m44 * 0.0));
			HX_STACK_LINE(401)
			this->m43 = ((((t41 * i13) + (t42 * i23)) + (this->m43 * i33)) + (this->m44 * 0.0));
			HX_STACK_LINE(401)
			this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + this->m44);
			HX_STACK_LINE(401)
			this->m45 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (t44 * 0.0));
		}
		HX_STACK_LINE(408)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ColorMatrix_obj,average,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::setChannels( Dynamic __o_r,Dynamic __o_g,Dynamic __o_b,Dynamic __o_a){
Dynamic r = __o_r.Default(1);
Dynamic g = __o_g.Default(2);
Dynamic b = __o_b.Default(4);
Dynamic a = __o_a.Default(8);
	HX_STACK_PUSH("ColorMatrix::setChannels","com/stencyl/utils/ColorMatrix.hx",354);
	HX_STACK_THIS(this);
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(g,"g");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(a,"a");
{
		HX_STACK_LINE(355)
		int t1;		HX_STACK_VAR(t1,"t1");
		int t2;		HX_STACK_VAR(t2,"t2");
		int t3;		HX_STACK_VAR(t3,"t3");
		int t4;		HX_STACK_VAR(t4,"t4");
		HX_STACK_LINE(357)
		t1 = (  (((((int(r) & int((int)1))) == (int)1))) ? int((int)1) : int((int)0) );
		HX_STACK_LINE(358)
		t2 = (  (((((int(r) & int((int)2))) == (int)2))) ? int((int)1) : int((int)0) );
		HX_STACK_LINE(359)
		t3 = (  (((((int(r) & int((int)4))) == (int)4))) ? int((int)1) : int((int)0) );
		HX_STACK_LINE(360)
		t4 = (  (((((int(r) & int((int)8))) == (int)8))) ? int((int)1) : int((int)0) );
		HX_STACK_LINE(362)
		Float rf = (((t1 + t2) + t3) + t4);		HX_STACK_VAR(rf,"rf");
		HX_STACK_LINE(363)
		if (((rf > (int)0))){
			HX_STACK_LINE(363)
			rf = (Float((int)1) / Float(rf));
		}
		HX_STACK_LINE(365)
		t1 = (  (((((int(g) & int((int)1))) == (int)1))) ? int((int)1) : int((int)0) );
		HX_STACK_LINE(366)
		t2 = (  (((((int(g) & int((int)2))) == (int)2))) ? int((int)1) : int((int)0) );
		HX_STACK_LINE(367)
		t3 = (  (((((int(g) & int((int)4))) == (int)4))) ? int((int)1) : int((int)0) );
		HX_STACK_LINE(368)
		t4 = (  (((((int(g) & int((int)8))) == (int)8))) ? int((int)1) : int((int)0) );
		HX_STACK_LINE(370)
		Float gf = (((t1 + t2) + t3) + t4);		HX_STACK_VAR(gf,"gf");
		HX_STACK_LINE(371)
		if (((gf > (int)0))){
			HX_STACK_LINE(371)
			gf = (Float((int)1) / Float(gf));
		}
		HX_STACK_LINE(373)
		t1 = (  (((((int(b) & int((int)1))) == (int)1))) ? int((int)1) : int((int)0) );
		HX_STACK_LINE(374)
		t2 = (  (((((int(b) & int((int)2))) == (int)2))) ? int((int)1) : int((int)0) );
		HX_STACK_LINE(375)
		t3 = (  (((((int(b) & int((int)4))) == (int)4))) ? int((int)1) : int((int)0) );
		HX_STACK_LINE(376)
		t4 = (  (((((int(b) & int((int)8))) == (int)8))) ? int((int)1) : int((int)0) );
		HX_STACK_LINE(378)
		Float bf = (((t1 + t2) + t3) + t4);		HX_STACK_VAR(bf,"bf");
		HX_STACK_LINE(379)
		if (((bf > (int)0))){
			HX_STACK_LINE(379)
			bf = (Float((int)1) / Float(bf));
		}
		HX_STACK_LINE(381)
		t1 = (  (((((int(a) & int((int)1))) == (int)1))) ? int((int)1) : int((int)0) );
		HX_STACK_LINE(382)
		t2 = (  (((((int(a) & int((int)2))) == (int)2))) ? int((int)1) : int((int)0) );
		HX_STACK_LINE(383)
		t3 = (  (((((int(a) & int((int)4))) == (int)4))) ? int((int)1) : int((int)0) );
		HX_STACK_LINE(384)
		t4 = (  (((((int(a) & int((int)8))) == (int)8))) ? int((int)1) : int((int)0) );
		HX_STACK_LINE(386)
		Float af = (((t1 + t2) + t3) + t4);		HX_STACK_VAR(af,"af");
		HX_STACK_LINE(387)
		if (((af > (int)0))){
			HX_STACK_LINE(387)
			af = (Float((int)1) / Float(af));
		}
		HX_STACK_LINE(389)
		{
			HX_STACK_LINE(389)
			Float i11 = (  (((((int(r) & int((int)1))) == (int)1))) ? Float(rf) : Float((int)0) );		HX_STACK_VAR(i11,"i11");
			Float i12 = (  (((((int(r) & int((int)2))) == (int)2))) ? Float(rf) : Float((int)0) );		HX_STACK_VAR(i12,"i12");
			Float i13 = (  (((((int(r) & int((int)4))) == (int)4))) ? Float(rf) : Float((int)0) );		HX_STACK_VAR(i13,"i13");
			Float i14 = (  (((((int(r) & int((int)8))) == (int)8))) ? Float(rf) : Float((int)0) );		HX_STACK_VAR(i14,"i14");
			Float i21 = (  (((((int(g) & int((int)1))) == (int)1))) ? Float(gf) : Float((int)0) );		HX_STACK_VAR(i21,"i21");
			Float i22 = (  (((((int(g) & int((int)2))) == (int)2))) ? Float(gf) : Float((int)0) );		HX_STACK_VAR(i22,"i22");
			Float i23 = (  (((((int(g) & int((int)4))) == (int)4))) ? Float(gf) : Float((int)0) );		HX_STACK_VAR(i23,"i23");
			Float i24 = (  (((((int(g) & int((int)8))) == (int)8))) ? Float(gf) : Float((int)0) );		HX_STACK_VAR(i24,"i24");
			Float i31 = (  (((((int(b) & int((int)1))) == (int)1))) ? Float(bf) : Float((int)0) );		HX_STACK_VAR(i31,"i31");
			Float i32 = (  (((((int(b) & int((int)2))) == (int)2))) ? Float(bf) : Float((int)0) );		HX_STACK_VAR(i32,"i32");
			Float i33 = (  (((((int(b) & int((int)4))) == (int)4))) ? Float(bf) : Float((int)0) );		HX_STACK_VAR(i33,"i33");
			Float i34 = (  (((((int(b) & int((int)8))) == (int)8))) ? Float(bf) : Float((int)0) );		HX_STACK_VAR(i34,"i34");
			Float i41 = (  (((((int(a) & int((int)1))) == (int)1))) ? Float(af) : Float((int)0) );		HX_STACK_VAR(i41,"i41");
			Float i42 = (  (((((int(a) & int((int)2))) == (int)2))) ? Float(af) : Float((int)0) );		HX_STACK_VAR(i42,"i42");
			Float i43 = (  (((((int(a) & int((int)4))) == (int)4))) ? Float(af) : Float((int)0) );		HX_STACK_VAR(i43,"i43");
			Float i44 = (  (((((int(a) & int((int)8))) == (int)8))) ? Float(af) : Float((int)0) );		HX_STACK_VAR(i44,"i44");
			HX_STACK_LINE(389)
			Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
			HX_STACK_LINE(389)
			Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
			HX_STACK_LINE(389)
			Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
			HX_STACK_LINE(389)
			Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
			HX_STACK_LINE(389)
			this->m11 = ((((this->m11 * i11) + (this->m12 * i21)) + (this->m13 * i31)) + (this->m14 * i41));
			HX_STACK_LINE(389)
			this->m12 = ((((t11 * i12) + (this->m12 * i22)) + (this->m13 * i32)) + (this->m14 * i42));
			HX_STACK_LINE(389)
			this->m13 = ((((t11 * i13) + (t12 * i23)) + (this->m13 * i33)) + (this->m14 * i43));
			HX_STACK_LINE(389)
			this->m14 = ((((t11 * i14) + (t12 * i24)) + (t13 * i34)) + (this->m14 * i44));
			HX_STACK_LINE(389)
			this->m15 = ((((t11 * (int)0) + (t12 * (int)0)) + (t13 * (int)0)) + (t14 * (int)0));
			HX_STACK_LINE(389)
			Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
			HX_STACK_LINE(389)
			Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
			HX_STACK_LINE(389)
			Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
			HX_STACK_LINE(389)
			Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
			HX_STACK_LINE(389)
			this->m21 = ((((this->m21 * i11) + (this->m22 * i21)) + (this->m23 * i31)) + (this->m24 * i41));
			HX_STACK_LINE(389)
			this->m22 = ((((t21 * i12) + (this->m22 * i22)) + (this->m23 * i32)) + (this->m24 * i42));
			HX_STACK_LINE(389)
			this->m23 = ((((t21 * i13) + (t22 * i23)) + (this->m23 * i33)) + (this->m24 * i43));
			HX_STACK_LINE(389)
			this->m24 = ((((t21 * i14) + (t22 * i24)) + (t23 * i34)) + (this->m24 * i44));
			HX_STACK_LINE(389)
			this->m25 = ((((t21 * (int)0) + (t22 * (int)0)) + (t23 * (int)0)) + (t24 * (int)0));
			HX_STACK_LINE(389)
			Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
			HX_STACK_LINE(389)
			Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
			HX_STACK_LINE(389)
			Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
			HX_STACK_LINE(389)
			Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
			HX_STACK_LINE(389)
			this->m31 = ((((this->m31 * i11) + (this->m32 * i21)) + (this->m33 * i31)) + (this->m34 * i41));
			HX_STACK_LINE(389)
			this->m32 = ((((t31 * i12) + (this->m32 * i22)) + (this->m33 * i32)) + (this->m34 * i42));
			HX_STACK_LINE(389)
			this->m33 = ((((t31 * i13) + (t32 * i23)) + (this->m33 * i33)) + (this->m34 * i43));
			HX_STACK_LINE(389)
			this->m34 = ((((t31 * i14) + (t32 * i24)) + (t33 * i34)) + (this->m34 * i44));
			HX_STACK_LINE(389)
			this->m35 = ((((t31 * (int)0) + (t32 * (int)0)) + (t33 * (int)0)) + (t34 * (int)0));
			HX_STACK_LINE(389)
			Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
			HX_STACK_LINE(389)
			Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
			HX_STACK_LINE(389)
			Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
			HX_STACK_LINE(389)
			Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
			HX_STACK_LINE(389)
			this->m41 = ((((this->m41 * i11) + (this->m42 * i21)) + (this->m43 * i31)) + (this->m44 * i41));
			HX_STACK_LINE(389)
			this->m42 = ((((t41 * i12) + (this->m42 * i22)) + (this->m43 * i32)) + (this->m44 * i42));
			HX_STACK_LINE(389)
			this->m43 = ((((t41 * i13) + (t42 * i23)) + (this->m43 * i33)) + (this->m44 * i43));
			HX_STACK_LINE(389)
			this->m44 = ((((t41 * i14) + (t42 * i24)) + (t43 * i34)) + (this->m44 * i44));
			HX_STACK_LINE(389)
			this->m45 = ((((t41 * (int)0) + (t42 * (int)0)) + (t43 * (int)0)) + (t44 * (int)0));
		}
		HX_STACK_LINE(396)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(ColorMatrix_obj,setChannels,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::rotateHue( Float angle){
	HX_STACK_PUSH("ColorMatrix::rotateHue","com/stencyl/utils/ColorMatrix.hx",344);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(345)
	{
		HX_STACK_LINE(345)
		Float greenRotation = 39.182655;		HX_STACK_VAR(greenRotation,"greenRotation");
		HX_STACK_LINE(345)
		if ((!(this->hueInitialized))){
			HX_STACK_LINE(345)
			this->hueInitialized = true;
			HX_STACK_LINE(345)
			this->preHue = ::com::stencyl::utils::ColorMatrix_obj::__new();
			HX_STACK_LINE(345)
			this->preHue->rotateRed(45.0);
			HX_STACK_LINE(345)
			this->preHue->rotateGreen(-(greenRotation));
			HX_STACK_LINE(345)
			Array< Float > lum = Array_obj< Float >::__new();		HX_STACK_VAR(lum,"lum");
			HX_STACK_LINE(345)
			lum[(int)0] = ::com::stencyl::utils::ColorMatrix_obj::LUMA_R2;
			HX_STACK_LINE(345)
			lum[(int)1] = ::com::stencyl::utils::ColorMatrix_obj::LUMA_G2;
			HX_STACK_LINE(345)
			lum[(int)2] = ::com::stencyl::utils::ColorMatrix_obj::LUMA_B2;
			HX_STACK_LINE(345)
			lum[(int)3] = 1.0;
			HX_STACK_LINE(345)
			this->preHue->transformVector(lum);
			HX_STACK_LINE(345)
			Float red = (Float(lum->__get((int)0)) / Float(lum->__get((int)2)));		HX_STACK_VAR(red,"red");
			HX_STACK_LINE(345)
			Float green = (Float(lum->__get((int)1)) / Float(lum->__get((int)2)));		HX_STACK_VAR(green,"green");
			HX_STACK_LINE(345)
			this->preHue->shearBlue(red,green);
			HX_STACK_LINE(345)
			this->postHue = ::com::stencyl::utils::ColorMatrix_obj::__new();
			HX_STACK_LINE(345)
			this->postHue->shearBlue(-(red),-(green));
			HX_STACK_LINE(345)
			this->postHue->rotateGreen(greenRotation);
			HX_STACK_LINE(345)
			this->postHue->rotateRed(-45.0);
		}
	}
	HX_STACK_LINE(347)
	{
		HX_STACK_LINE(347)
		::com::stencyl::utils::ColorMatrix B = this->preHue;		HX_STACK_VAR(B,"B");
		HX_STACK_LINE(347)
		Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
		HX_STACK_LINE(347)
		Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
		HX_STACK_LINE(347)
		Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
		HX_STACK_LINE(347)
		Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
		HX_STACK_LINE(347)
		this->m11 = ((((this->m11 * B->m11) + (this->m12 * B->m21)) + (this->m13 * B->m31)) + (this->m14 * B->m41));
		HX_STACK_LINE(347)
		this->m12 = ((((t11 * B->m12) + (this->m12 * B->m22)) + (this->m13 * B->m32)) + (this->m14 * B->m42));
		HX_STACK_LINE(347)
		this->m13 = ((((t11 * B->m13) + (t12 * B->m23)) + (this->m13 * B->m33)) + (this->m14 * B->m43));
		HX_STACK_LINE(347)
		this->m14 = ((((t11 * B->m14) + (t12 * B->m24)) + (t13 * B->m34)) + (this->m14 * B->m44));
		HX_STACK_LINE(347)
		this->m15 = ((((t11 * B->m15) + (t12 * B->m25)) + (t13 * B->m35)) + (t14 * B->m45));
		HX_STACK_LINE(347)
		Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
		HX_STACK_LINE(347)
		Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
		HX_STACK_LINE(347)
		Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
		HX_STACK_LINE(347)
		Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
		HX_STACK_LINE(347)
		this->m21 = ((((this->m21 * B->m11) + (this->m22 * B->m21)) + (this->m23 * B->m31)) + (this->m24 * B->m41));
		HX_STACK_LINE(347)
		this->m22 = ((((t21 * B->m12) + (this->m22 * B->m22)) + (this->m23 * B->m32)) + (this->m24 * B->m42));
		HX_STACK_LINE(347)
		this->m23 = ((((t21 * B->m13) + (t22 * B->m23)) + (this->m23 * B->m33)) + (this->m24 * B->m43));
		HX_STACK_LINE(347)
		this->m24 = ((((t21 * B->m14) + (t22 * B->m24)) + (t23 * B->m34)) + (this->m24 * B->m44));
		HX_STACK_LINE(347)
		this->m25 = ((((t21 * B->m15) + (t22 * B->m25)) + (t23 * B->m35)) + (t24 * B->m45));
		HX_STACK_LINE(347)
		Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
		HX_STACK_LINE(347)
		Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
		HX_STACK_LINE(347)
		Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
		HX_STACK_LINE(347)
		Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
		HX_STACK_LINE(347)
		this->m31 = ((((this->m31 * B->m11) + (this->m32 * B->m21)) + (this->m33 * B->m31)) + (this->m34 * B->m41));
		HX_STACK_LINE(347)
		this->m32 = ((((t31 * B->m12) + (this->m32 * B->m22)) + (this->m33 * B->m32)) + (this->m34 * B->m42));
		HX_STACK_LINE(347)
		this->m33 = ((((t31 * B->m13) + (t32 * B->m23)) + (this->m33 * B->m33)) + (this->m34 * B->m43));
		HX_STACK_LINE(347)
		this->m34 = ((((t31 * B->m14) + (t32 * B->m24)) + (t33 * B->m34)) + (this->m34 * B->m44));
		HX_STACK_LINE(347)
		this->m35 = ((((t31 * B->m15) + (t32 * B->m25)) + (t33 * B->m35)) + (t34 * B->m45));
		HX_STACK_LINE(347)
		Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
		HX_STACK_LINE(347)
		Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
		HX_STACK_LINE(347)
		Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
		HX_STACK_LINE(347)
		Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
		HX_STACK_LINE(347)
		this->m41 = ((((this->m41 * B->m11) + (this->m42 * B->m21)) + (this->m43 * B->m31)) + (this->m44 * B->m41));
		HX_STACK_LINE(347)
		this->m42 = ((((t41 * B->m12) + (this->m42 * B->m22)) + (this->m43 * B->m32)) + (this->m44 * B->m42));
		HX_STACK_LINE(347)
		this->m43 = ((((t41 * B->m13) + (t42 * B->m23)) + (this->m43 * B->m33)) + (this->m44 * B->m43));
		HX_STACK_LINE(347)
		this->m44 = ((((t41 * B->m14) + (t42 * B->m24)) + (t43 * B->m34)) + (this->m44 * B->m44));
		HX_STACK_LINE(347)
		this->m45 = ((((t41 * B->m15) + (t42 * B->m25)) + (t43 * B->m35)) + (t44 * B->m45));
		HX_STACK_LINE(347)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(348)
	this->rotateBlue(angle);
	HX_STACK_LINE(349)
	{
		HX_STACK_LINE(349)
		::com::stencyl::utils::ColorMatrix B = this->postHue;		HX_STACK_VAR(B,"B");
		HX_STACK_LINE(349)
		Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
		HX_STACK_LINE(349)
		Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
		HX_STACK_LINE(349)
		Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
		HX_STACK_LINE(349)
		Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
		HX_STACK_LINE(349)
		this->m11 = ((((this->m11 * B->m11) + (this->m12 * B->m21)) + (this->m13 * B->m31)) + (this->m14 * B->m41));
		HX_STACK_LINE(349)
		this->m12 = ((((t11 * B->m12) + (this->m12 * B->m22)) + (this->m13 * B->m32)) + (this->m14 * B->m42));
		HX_STACK_LINE(349)
		this->m13 = ((((t11 * B->m13) + (t12 * B->m23)) + (this->m13 * B->m33)) + (this->m14 * B->m43));
		HX_STACK_LINE(349)
		this->m14 = ((((t11 * B->m14) + (t12 * B->m24)) + (t13 * B->m34)) + (this->m14 * B->m44));
		HX_STACK_LINE(349)
		this->m15 = ((((t11 * B->m15) + (t12 * B->m25)) + (t13 * B->m35)) + (t14 * B->m45));
		HX_STACK_LINE(349)
		Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
		HX_STACK_LINE(349)
		Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
		HX_STACK_LINE(349)
		Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
		HX_STACK_LINE(349)
		Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
		HX_STACK_LINE(349)
		this->m21 = ((((this->m21 * B->m11) + (this->m22 * B->m21)) + (this->m23 * B->m31)) + (this->m24 * B->m41));
		HX_STACK_LINE(349)
		this->m22 = ((((t21 * B->m12) + (this->m22 * B->m22)) + (this->m23 * B->m32)) + (this->m24 * B->m42));
		HX_STACK_LINE(349)
		this->m23 = ((((t21 * B->m13) + (t22 * B->m23)) + (this->m23 * B->m33)) + (this->m24 * B->m43));
		HX_STACK_LINE(349)
		this->m24 = ((((t21 * B->m14) + (t22 * B->m24)) + (t23 * B->m34)) + (this->m24 * B->m44));
		HX_STACK_LINE(349)
		this->m25 = ((((t21 * B->m15) + (t22 * B->m25)) + (t23 * B->m35)) + (t24 * B->m45));
		HX_STACK_LINE(349)
		Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
		HX_STACK_LINE(349)
		Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
		HX_STACK_LINE(349)
		Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
		HX_STACK_LINE(349)
		Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
		HX_STACK_LINE(349)
		this->m31 = ((((this->m31 * B->m11) + (this->m32 * B->m21)) + (this->m33 * B->m31)) + (this->m34 * B->m41));
		HX_STACK_LINE(349)
		this->m32 = ((((t31 * B->m12) + (this->m32 * B->m22)) + (this->m33 * B->m32)) + (this->m34 * B->m42));
		HX_STACK_LINE(349)
		this->m33 = ((((t31 * B->m13) + (t32 * B->m23)) + (this->m33 * B->m33)) + (this->m34 * B->m43));
		HX_STACK_LINE(349)
		this->m34 = ((((t31 * B->m14) + (t32 * B->m24)) + (t33 * B->m34)) + (this->m34 * B->m44));
		HX_STACK_LINE(349)
		this->m35 = ((((t31 * B->m15) + (t32 * B->m25)) + (t33 * B->m35)) + (t34 * B->m45));
		HX_STACK_LINE(349)
		Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
		HX_STACK_LINE(349)
		Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
		HX_STACK_LINE(349)
		Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
		HX_STACK_LINE(349)
		Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
		HX_STACK_LINE(349)
		this->m41 = ((((this->m41 * B->m11) + (this->m42 * B->m21)) + (this->m43 * B->m31)) + (this->m44 * B->m41));
		HX_STACK_LINE(349)
		this->m42 = ((((t41 * B->m12) + (this->m42 * B->m22)) + (this->m43 * B->m32)) + (this->m44 * B->m42));
		HX_STACK_LINE(349)
		this->m43 = ((((t41 * B->m13) + (t42 * B->m23)) + (this->m43 * B->m33)) + (this->m44 * B->m43));
		HX_STACK_LINE(349)
		this->m44 = ((((t41 * B->m14) + (t42 * B->m24)) + (t43 * B->m34)) + (this->m44 * B->m44));
		HX_STACK_LINE(349)
		this->m45 = ((((t41 * B->m15) + (t42 * B->m25)) + (t43 * B->m35)) + (t44 * B->m45));
		HX_STACK_LINE(349)
		hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(350)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_obj,rotateHue,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::colorize( int rgb,Dynamic __o_amount){
Dynamic amount = __o_amount.Default(1.);
	HX_STACK_PUSH("ColorMatrix::colorize","com/stencyl/utils/ColorMatrix.hx",326);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rgb,"rgb");
	HX_STACK_ARG(amount,"amount");
{
		HX_STACK_LINE(327)
		Float r = (((int(hx::UShr(rgb,(int)16)) & int((int)255))) * ((Float(1.0) / Float(255.0))));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(328)
		Float g = (((int(hx::UShr(rgb,(int)8)) & int((int)255))) * ((Float(1.0) / Float(255.0))));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(329)
		Float b = (((int(rgb) & int((int)255))) * ((Float(1.0) / Float(255.0))));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(331)
		Float inv_amount = ((int)1 - amount);		HX_STACK_VAR(inv_amount,"inv_amount");
		HX_STACK_LINE(333)
		{
			HX_STACK_LINE(333)
			Float i11 = (inv_amount + ((amount * r) * ::com::stencyl::utils::ColorMatrix_obj::LUMA_R));		HX_STACK_VAR(i11,"i11");
			Float i12 = ((amount * r) * ::com::stencyl::utils::ColorMatrix_obj::LUMA_G);		HX_STACK_VAR(i12,"i12");
			Float i13 = ((amount * r) * ::com::stencyl::utils::ColorMatrix_obj::LUMA_B);		HX_STACK_VAR(i13,"i13");
			Float i21 = ((amount * g) * ::com::stencyl::utils::ColorMatrix_obj::LUMA_R);		HX_STACK_VAR(i21,"i21");
			Float i22 = (inv_amount + ((amount * g) * ::com::stencyl::utils::ColorMatrix_obj::LUMA_G));		HX_STACK_VAR(i22,"i22");
			Float i23 = ((amount * g) * ::com::stencyl::utils::ColorMatrix_obj::LUMA_B);		HX_STACK_VAR(i23,"i23");
			Float i31 = ((amount * b) * ::com::stencyl::utils::ColorMatrix_obj::LUMA_R);		HX_STACK_VAR(i31,"i31");
			Float i32 = ((amount * b) * ::com::stencyl::utils::ColorMatrix_obj::LUMA_G);		HX_STACK_VAR(i32,"i32");
			Float i33 = (inv_amount + ((amount * b) * ::com::stencyl::utils::ColorMatrix_obj::LUMA_B));		HX_STACK_VAR(i33,"i33");
			HX_STACK_LINE(333)
			Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
			HX_STACK_LINE(333)
			Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
			HX_STACK_LINE(333)
			Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
			HX_STACK_LINE(333)
			Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
			HX_STACK_LINE(333)
			this->m11 = ((((this->m11 * i11) + (this->m12 * i21)) + (this->m13 * i31)) + (this->m14 * 0.0));
			HX_STACK_LINE(333)
			this->m12 = ((((t11 * i12) + (this->m12 * i22)) + (this->m13 * i32)) + (this->m14 * 0.0));
			HX_STACK_LINE(333)
			this->m13 = ((((t11 * i13) + (t12 * i23)) + (this->m13 * i33)) + (this->m14 * 0.0));
			HX_STACK_LINE(333)
			this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + this->m14);
			HX_STACK_LINE(333)
			this->m15 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (t14 * 0.0));
			HX_STACK_LINE(333)
			Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
			HX_STACK_LINE(333)
			Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
			HX_STACK_LINE(333)
			Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
			HX_STACK_LINE(333)
			Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
			HX_STACK_LINE(333)
			this->m21 = ((((this->m21 * i11) + (this->m22 * i21)) + (this->m23 * i31)) + (this->m24 * 0.0));
			HX_STACK_LINE(333)
			this->m22 = ((((t21 * i12) + (this->m22 * i22)) + (this->m23 * i32)) + (this->m24 * 0.0));
			HX_STACK_LINE(333)
			this->m23 = ((((t21 * i13) + (t22 * i23)) + (this->m23 * i33)) + (this->m24 * 0.0));
			HX_STACK_LINE(333)
			this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + this->m24);
			HX_STACK_LINE(333)
			this->m25 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (t24 * 0.0));
			HX_STACK_LINE(333)
			Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
			HX_STACK_LINE(333)
			Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
			HX_STACK_LINE(333)
			Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
			HX_STACK_LINE(333)
			Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
			HX_STACK_LINE(333)
			this->m31 = ((((this->m31 * i11) + (this->m32 * i21)) + (this->m33 * i31)) + (this->m34 * 0.0));
			HX_STACK_LINE(333)
			this->m32 = ((((t31 * i12) + (this->m32 * i22)) + (this->m33 * i32)) + (this->m34 * 0.0));
			HX_STACK_LINE(333)
			this->m33 = ((((t31 * i13) + (t32 * i23)) + (this->m33 * i33)) + (this->m34 * 0.0));
			HX_STACK_LINE(333)
			this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + this->m34);
			HX_STACK_LINE(333)
			this->m35 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (t34 * 0.0));
			HX_STACK_LINE(333)
			Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
			HX_STACK_LINE(333)
			Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
			HX_STACK_LINE(333)
			Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
			HX_STACK_LINE(333)
			Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
			HX_STACK_LINE(333)
			this->m41 = ((((this->m41 * i11) + (this->m42 * i21)) + (this->m43 * i31)) + (this->m44 * 0.0));
			HX_STACK_LINE(333)
			this->m42 = ((((t41 * i12) + (this->m42 * i22)) + (this->m43 * i32)) + (this->m44 * 0.0));
			HX_STACK_LINE(333)
			this->m43 = ((((t41 * i13) + (t42 * i23)) + (this->m43 * i33)) + (this->m44 * 0.0));
			HX_STACK_LINE(333)
			this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + this->m44);
			HX_STACK_LINE(333)
			this->m45 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (t44 * 0.0));
		}
		HX_STACK_LINE(340)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_obj,colorize,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::adjustAlphaContrast( Float amount){
	HX_STACK_PUSH("ColorMatrix::adjustAlphaContrast","com/stencyl/utils/ColorMatrix.hx",312);
	HX_STACK_THIS(this);
	HX_STACK_ARG(amount,"amount");
	HX_STACK_LINE(313)
	hx::AddEq(amount,1.0);
	HX_STACK_LINE(315)
	{
		HX_STACK_LINE(315)
		Float i45 = (128.0 * ((1.0 - amount)));		HX_STACK_VAR(i45,"i45");
		HX_STACK_LINE(315)
		Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
		HX_STACK_LINE(315)
		Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
		HX_STACK_LINE(315)
		Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
		HX_STACK_LINE(315)
		Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
		HX_STACK_LINE(315)
		this->m11 = (((this->m11 + (this->m12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * 0.0));
		HX_STACK_LINE(315)
		this->m12 = ((((t11 * 0.0) + this->m12) + (this->m13 * 0.0)) + (this->m14 * 0.0));
		HX_STACK_LINE(315)
		this->m13 = ((((t11 * 0.0) + (t12 * 0.0)) + this->m13) + (this->m14 * 0.0));
		HX_STACK_LINE(315)
		this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (this->m14 * amount));
		HX_STACK_LINE(315)
		this->m15 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (t14 * i45));
		HX_STACK_LINE(315)
		Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
		HX_STACK_LINE(315)
		Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
		HX_STACK_LINE(315)
		Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
		HX_STACK_LINE(315)
		Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
		HX_STACK_LINE(315)
		this->m21 = (((this->m21 + (this->m22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * 0.0));
		HX_STACK_LINE(315)
		this->m22 = ((((t21 * 0.0) + this->m22) + (this->m23 * 0.0)) + (this->m24 * 0.0));
		HX_STACK_LINE(315)
		this->m23 = ((((t21 * 0.0) + (t22 * 0.0)) + this->m23) + (this->m24 * 0.0));
		HX_STACK_LINE(315)
		this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (this->m24 * amount));
		HX_STACK_LINE(315)
		this->m25 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (t24 * i45));
		HX_STACK_LINE(315)
		Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
		HX_STACK_LINE(315)
		Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
		HX_STACK_LINE(315)
		Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
		HX_STACK_LINE(315)
		Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
		HX_STACK_LINE(315)
		this->m31 = (((this->m31 + (this->m32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * 0.0));
		HX_STACK_LINE(315)
		this->m32 = ((((t31 * 0.0) + this->m32) + (this->m33 * 0.0)) + (this->m34 * 0.0));
		HX_STACK_LINE(315)
		this->m33 = ((((t31 * 0.0) + (t32 * 0.0)) + this->m33) + (this->m34 * 0.0));
		HX_STACK_LINE(315)
		this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (this->m34 * amount));
		HX_STACK_LINE(315)
		this->m35 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (t34 * i45));
		HX_STACK_LINE(315)
		Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
		HX_STACK_LINE(315)
		Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
		HX_STACK_LINE(315)
		Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
		HX_STACK_LINE(315)
		Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
		HX_STACK_LINE(315)
		this->m41 = (((this->m41 + (this->m42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * 0.0));
		HX_STACK_LINE(315)
		this->m42 = ((((t41 * 0.0) + this->m42) + (this->m43 * 0.0)) + (this->m44 * 0.0));
		HX_STACK_LINE(315)
		this->m43 = ((((t41 * 0.0) + (t42 * 0.0)) + this->m43) + (this->m44 * 0.0));
		HX_STACK_LINE(315)
		this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (this->m44 * amount));
		HX_STACK_LINE(315)
		this->m45 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (t44 * i45));
	}
	HX_STACK_LINE(322)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_obj,adjustAlphaContrast,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::luminance2Alpha( ){
	HX_STACK_PUSH("ColorMatrix::luminance2Alpha","com/stencyl/utils/ColorMatrix.hx",300);
	HX_STACK_THIS(this);
	HX_STACK_LINE(301)
	{
		HX_STACK_LINE(301)
		Float i41 = ::com::stencyl::utils::ColorMatrix_obj::LUMA_R;		HX_STACK_VAR(i41,"i41");
		Float i42 = ::com::stencyl::utils::ColorMatrix_obj::LUMA_G;		HX_STACK_VAR(i42,"i42");
		Float i43 = ::com::stencyl::utils::ColorMatrix_obj::LUMA_B;		HX_STACK_VAR(i43,"i43");
		HX_STACK_LINE(301)
		Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
		HX_STACK_LINE(301)
		Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
		HX_STACK_LINE(301)
		Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
		HX_STACK_LINE(301)
		Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
		HX_STACK_LINE(301)
		this->m11 = ((((this->m11 * 0.0) + (this->m12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * i41));
		HX_STACK_LINE(301)
		this->m12 = ((((t11 * 0.0) + (this->m12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * i42));
		HX_STACK_LINE(301)
		this->m13 = ((((t11 * 0.0) + (t12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * i43));
		HX_STACK_LINE(301)
		this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (this->m14 * 0.0));
		HX_STACK_LINE(301)
		this->m15 = ((((t11 * 255.0) + (t12 * 255.0)) + (t13 * 255.0)) + (t14 * 0.0));
		HX_STACK_LINE(301)
		Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
		HX_STACK_LINE(301)
		Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
		HX_STACK_LINE(301)
		Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
		HX_STACK_LINE(301)
		Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
		HX_STACK_LINE(301)
		this->m21 = ((((this->m21 * 0.0) + (this->m22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * i41));
		HX_STACK_LINE(301)
		this->m22 = ((((t21 * 0.0) + (this->m22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * i42));
		HX_STACK_LINE(301)
		this->m23 = ((((t21 * 0.0) + (t22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * i43));
		HX_STACK_LINE(301)
		this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (this->m24 * 0.0));
		HX_STACK_LINE(301)
		this->m25 = ((((t21 * 255.0) + (t22 * 255.0)) + (t23 * 255.0)) + (t24 * 0.0));
		HX_STACK_LINE(301)
		Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
		HX_STACK_LINE(301)
		Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
		HX_STACK_LINE(301)
		Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
		HX_STACK_LINE(301)
		Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
		HX_STACK_LINE(301)
		this->m31 = ((((this->m31 * 0.0) + (this->m32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * i41));
		HX_STACK_LINE(301)
		this->m32 = ((((t31 * 0.0) + (this->m32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * i42));
		HX_STACK_LINE(301)
		this->m33 = ((((t31 * 0.0) + (t32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * i43));
		HX_STACK_LINE(301)
		this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (this->m34 * 0.0));
		HX_STACK_LINE(301)
		this->m35 = ((((t31 * 255.0) + (t32 * 255.0)) + (t33 * 255.0)) + (t34 * 0.0));
		HX_STACK_LINE(301)
		Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
		HX_STACK_LINE(301)
		Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
		HX_STACK_LINE(301)
		Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
		HX_STACK_LINE(301)
		Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
		HX_STACK_LINE(301)
		this->m41 = ((((this->m41 * 0.0) + (this->m42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * i41));
		HX_STACK_LINE(301)
		this->m42 = ((((t41 * 0.0) + (this->m42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * i42));
		HX_STACK_LINE(301)
		this->m43 = ((((t41 * 0.0) + (t42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * i43));
		HX_STACK_LINE(301)
		this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (this->m44 * 0.0));
		HX_STACK_LINE(301)
		this->m45 = ((((t41 * 255.0) + (t42 * 255.0)) + (t43 * 255.0)) + (t44 * 0.0));
	}
	HX_STACK_LINE(308)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ColorMatrix_obj,luminance2Alpha,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::adjustHue( Float angle){
	HX_STACK_PUSH("ColorMatrix::adjustHue","com/stencyl/utils/ColorMatrix.hx",284);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(285)
	hx::MultEq(angle,(Float(3.14159) / Float((int)180)));
	HX_STACK_LINE(286)
	Float c = ::Math_obj::cos(angle);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(287)
	Float s = ::Math_obj::sin(angle);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(289)
	{
		HX_STACK_LINE(289)
		Float i11 = ((::com::stencyl::utils::ColorMatrix_obj::LUMA_R + (c * ((1.0 - ::com::stencyl::utils::ColorMatrix_obj::LUMA_R)))) + (s * -(::com::stencyl::utils::ColorMatrix_obj::LUMA_R)));		HX_STACK_VAR(i11,"i11");
		Float i12 = ((::com::stencyl::utils::ColorMatrix_obj::LUMA_G + (c * -(::com::stencyl::utils::ColorMatrix_obj::LUMA_G))) + (s * -(::com::stencyl::utils::ColorMatrix_obj::LUMA_G)));		HX_STACK_VAR(i12,"i12");
		Float i13 = ((::com::stencyl::utils::ColorMatrix_obj::LUMA_B + (c * -(::com::stencyl::utils::ColorMatrix_obj::LUMA_B))) + (s * ((1.0 - ::com::stencyl::utils::ColorMatrix_obj::LUMA_B))));		HX_STACK_VAR(i13,"i13");
		Float i21 = ((::com::stencyl::utils::ColorMatrix_obj::LUMA_R + (c * -(::com::stencyl::utils::ColorMatrix_obj::LUMA_R))) + (s * 0.143));		HX_STACK_VAR(i21,"i21");
		Float i22 = ((::com::stencyl::utils::ColorMatrix_obj::LUMA_G + (c * (((int)1 - ::com::stencyl::utils::ColorMatrix_obj::LUMA_G)))) + (s * 0.14));		HX_STACK_VAR(i22,"i22");
		Float i23 = ((::com::stencyl::utils::ColorMatrix_obj::LUMA_B + (c * -(::com::stencyl::utils::ColorMatrix_obj::LUMA_B))) + (s * -0.283));		HX_STACK_VAR(i23,"i23");
		Float i31 = ((::com::stencyl::utils::ColorMatrix_obj::LUMA_R + (c * -(::com::stencyl::utils::ColorMatrix_obj::LUMA_R))) + (s * -(((1.0 - ::com::stencyl::utils::ColorMatrix_obj::LUMA_R)))));		HX_STACK_VAR(i31,"i31");
		Float i32 = ((::com::stencyl::utils::ColorMatrix_obj::LUMA_G + (c * -(::com::stencyl::utils::ColorMatrix_obj::LUMA_G))) + (s * ::com::stencyl::utils::ColorMatrix_obj::LUMA_G));		HX_STACK_VAR(i32,"i32");
		Float i33 = ((::com::stencyl::utils::ColorMatrix_obj::LUMA_B + (c * (((int)1 - ::com::stencyl::utils::ColorMatrix_obj::LUMA_B)))) + (s * ::com::stencyl::utils::ColorMatrix_obj::LUMA_B));		HX_STACK_VAR(i33,"i33");
		HX_STACK_LINE(289)
		Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
		HX_STACK_LINE(289)
		Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
		HX_STACK_LINE(289)
		Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
		HX_STACK_LINE(289)
		Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
		HX_STACK_LINE(289)
		this->m11 = ((((this->m11 * i11) + (this->m12 * i21)) + (this->m13 * i31)) + (this->m14 * 0.0));
		HX_STACK_LINE(289)
		this->m12 = ((((t11 * i12) + (this->m12 * i22)) + (this->m13 * i32)) + (this->m14 * 0.0));
		HX_STACK_LINE(289)
		this->m13 = ((((t11 * i13) + (t12 * i23)) + (this->m13 * i33)) + (this->m14 * 0.0));
		HX_STACK_LINE(289)
		this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + this->m14);
		HX_STACK_LINE(289)
		this->m15 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (t14 * 0.0));
		HX_STACK_LINE(289)
		Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
		HX_STACK_LINE(289)
		Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
		HX_STACK_LINE(289)
		Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
		HX_STACK_LINE(289)
		Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
		HX_STACK_LINE(289)
		this->m21 = ((((this->m21 * i11) + (this->m22 * i21)) + (this->m23 * i31)) + (this->m24 * 0.0));
		HX_STACK_LINE(289)
		this->m22 = ((((t21 * i12) + (this->m22 * i22)) + (this->m23 * i32)) + (this->m24 * 0.0));
		HX_STACK_LINE(289)
		this->m23 = ((((t21 * i13) + (t22 * i23)) + (this->m23 * i33)) + (this->m24 * 0.0));
		HX_STACK_LINE(289)
		this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + this->m24);
		HX_STACK_LINE(289)
		this->m25 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (t24 * 0.0));
		HX_STACK_LINE(289)
		Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
		HX_STACK_LINE(289)
		Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
		HX_STACK_LINE(289)
		Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
		HX_STACK_LINE(289)
		Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
		HX_STACK_LINE(289)
		this->m31 = ((((this->m31 * i11) + (this->m32 * i21)) + (this->m33 * i31)) + (this->m34 * 0.0));
		HX_STACK_LINE(289)
		this->m32 = ((((t31 * i12) + (this->m32 * i22)) + (this->m33 * i32)) + (this->m34 * 0.0));
		HX_STACK_LINE(289)
		this->m33 = ((((t31 * i13) + (t32 * i23)) + (this->m33 * i33)) + (this->m34 * 0.0));
		HX_STACK_LINE(289)
		this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + this->m34);
		HX_STACK_LINE(289)
		this->m35 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (t34 * 0.0));
		HX_STACK_LINE(289)
		Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
		HX_STACK_LINE(289)
		Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
		HX_STACK_LINE(289)
		Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
		HX_STACK_LINE(289)
		Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
		HX_STACK_LINE(289)
		this->m41 = ((((this->m41 * i11) + (this->m42 * i21)) + (this->m43 * i31)) + (this->m44 * 0.0));
		HX_STACK_LINE(289)
		this->m42 = ((((t41 * i12) + (this->m42 * i22)) + (this->m43 * i32)) + (this->m44 * 0.0));
		HX_STACK_LINE(289)
		this->m43 = ((((t41 * i13) + (t42 * i23)) + (this->m43 * i33)) + (this->m44 * 0.0));
		HX_STACK_LINE(289)
		this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + this->m44);
		HX_STACK_LINE(289)
		this->m45 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (t44 * 0.0));
	}
	HX_STACK_LINE(296)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_obj,adjustHue,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::adjustContrastRGB( Float r,Float g,Float b){
	HX_STACK_PUSH("ColorMatrix::adjustContrastRGB","com/stencyl/utils/ColorMatrix.hx",268);
	HX_STACK_THIS(this);
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(g,"g");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(269)
	hx::AddEq(r,1.0);
	HX_STACK_LINE(270)
	hx::AddEq(g,1.0);
	HX_STACK_LINE(271)
	hx::AddEq(b,1.0);
	HX_STACK_LINE(273)
	{
		HX_STACK_LINE(273)
		Float i15 = (128.0 * ((1.0 - r)));		HX_STACK_VAR(i15,"i15");
		Float i25 = (128.0 * ((1.0 - g)));		HX_STACK_VAR(i25,"i25");
		Float i35 = (128.0 * ((1.0 - b)));		HX_STACK_VAR(i35,"i35");
		HX_STACK_LINE(273)
		Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
		HX_STACK_LINE(273)
		Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
		HX_STACK_LINE(273)
		Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
		HX_STACK_LINE(273)
		Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
		HX_STACK_LINE(273)
		this->m11 = ((((this->m11 * r) + (this->m12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * 0.0));
		HX_STACK_LINE(273)
		this->m12 = ((((t11 * 0.0) + (this->m12 * g)) + (this->m13 * 0.0)) + (this->m14 * 0.0));
		HX_STACK_LINE(273)
		this->m13 = ((((t11 * 0.0) + (t12 * 0.0)) + (this->m13 * b)) + (this->m14 * 0.0));
		HX_STACK_LINE(273)
		this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + this->m14);
		HX_STACK_LINE(273)
		this->m15 = ((((t11 * i15) + (t12 * i25)) + (t13 * i35)) + (t14 * 0.0));
		HX_STACK_LINE(273)
		Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
		HX_STACK_LINE(273)
		Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
		HX_STACK_LINE(273)
		Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
		HX_STACK_LINE(273)
		Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
		HX_STACK_LINE(273)
		this->m21 = ((((this->m21 * r) + (this->m22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * 0.0));
		HX_STACK_LINE(273)
		this->m22 = ((((t21 * 0.0) + (this->m22 * g)) + (this->m23 * 0.0)) + (this->m24 * 0.0));
		HX_STACK_LINE(273)
		this->m23 = ((((t21 * 0.0) + (t22 * 0.0)) + (this->m23 * b)) + (this->m24 * 0.0));
		HX_STACK_LINE(273)
		this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + this->m24);
		HX_STACK_LINE(273)
		this->m25 = ((((t21 * i15) + (t22 * i25)) + (t23 * i35)) + (t24 * 0.0));
		HX_STACK_LINE(273)
		Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
		HX_STACK_LINE(273)
		Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
		HX_STACK_LINE(273)
		Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
		HX_STACK_LINE(273)
		Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
		HX_STACK_LINE(273)
		this->m31 = ((((this->m31 * r) + (this->m32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * 0.0));
		HX_STACK_LINE(273)
		this->m32 = ((((t31 * 0.0) + (this->m32 * g)) + (this->m33 * 0.0)) + (this->m34 * 0.0));
		HX_STACK_LINE(273)
		this->m33 = ((((t31 * 0.0) + (t32 * 0.0)) + (this->m33 * b)) + (this->m34 * 0.0));
		HX_STACK_LINE(273)
		this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + this->m34);
		HX_STACK_LINE(273)
		this->m35 = ((((t31 * i15) + (t32 * i25)) + (t33 * i35)) + (t34 * 0.0));
		HX_STACK_LINE(273)
		Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
		HX_STACK_LINE(273)
		Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
		HX_STACK_LINE(273)
		Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
		HX_STACK_LINE(273)
		Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
		HX_STACK_LINE(273)
		this->m41 = ((((this->m41 * r) + (this->m42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * 0.0));
		HX_STACK_LINE(273)
		this->m42 = ((((t41 * 0.0) + (this->m42 * g)) + (this->m43 * 0.0)) + (this->m44 * 0.0));
		HX_STACK_LINE(273)
		this->m43 = ((((t41 * 0.0) + (t42 * 0.0)) + (this->m43 * b)) + (this->m44 * 0.0));
		HX_STACK_LINE(273)
		this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + this->m44);
		HX_STACK_LINE(273)
		this->m45 = ((((t41 * i15) + (t42 * i25)) + (t43 * i35)) + (t44 * 0.0));
	}
	HX_STACK_LINE(280)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(ColorMatrix_obj,adjustContrastRGB,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::adjustContrast( Float x){
	HX_STACK_PUSH("ColorMatrix::adjustContrast","com/stencyl/utils/ColorMatrix.hx",262);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(263)
	this->adjustContrastRGB(x,x,x);
	HX_STACK_LINE(264)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_obj,adjustContrast,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::adjustBrightnessRGB( Float r,Float g,Float b){
	HX_STACK_PUSH("ColorMatrix::adjustBrightnessRGB","com/stencyl/utils/ColorMatrix.hx",250);
	HX_STACK_THIS(this);
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(g,"g");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(251)
	{
		HX_STACK_LINE(251)
		Float i15 = (r * (int)255);		HX_STACK_VAR(i15,"i15");
		Float i25 = (g * (int)255);		HX_STACK_VAR(i25,"i25");
		Float i35 = (b * (int)255);		HX_STACK_VAR(i35,"i35");
		HX_STACK_LINE(251)
		Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
		HX_STACK_LINE(251)
		Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
		HX_STACK_LINE(251)
		Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
		HX_STACK_LINE(251)
		Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
		HX_STACK_LINE(251)
		this->m11 = (((this->m11 + (this->m12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * 0.0));
		HX_STACK_LINE(251)
		this->m12 = ((((t11 * 0.0) + this->m12) + (this->m13 * 0.0)) + (this->m14 * 0.0));
		HX_STACK_LINE(251)
		this->m13 = ((((t11 * 0.0) + (t12 * 0.0)) + this->m13) + (this->m14 * 0.0));
		HX_STACK_LINE(251)
		this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + this->m14);
		HX_STACK_LINE(251)
		this->m15 = ((((t11 * i15) + (t12 * i25)) + (t13 * i35)) + (t14 * 0.0));
		HX_STACK_LINE(251)
		Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
		HX_STACK_LINE(251)
		Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
		HX_STACK_LINE(251)
		Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
		HX_STACK_LINE(251)
		Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
		HX_STACK_LINE(251)
		this->m21 = (((this->m21 + (this->m22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * 0.0));
		HX_STACK_LINE(251)
		this->m22 = ((((t21 * 0.0) + this->m22) + (this->m23 * 0.0)) + (this->m24 * 0.0));
		HX_STACK_LINE(251)
		this->m23 = ((((t21 * 0.0) + (t22 * 0.0)) + this->m23) + (this->m24 * 0.0));
		HX_STACK_LINE(251)
		this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + this->m24);
		HX_STACK_LINE(251)
		this->m25 = ((((t21 * i15) + (t22 * i25)) + (t23 * i35)) + (t24 * 0.0));
		HX_STACK_LINE(251)
		Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
		HX_STACK_LINE(251)
		Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
		HX_STACK_LINE(251)
		Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
		HX_STACK_LINE(251)
		Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
		HX_STACK_LINE(251)
		this->m31 = (((this->m31 + (this->m32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * 0.0));
		HX_STACK_LINE(251)
		this->m32 = ((((t31 * 0.0) + this->m32) + (this->m33 * 0.0)) + (this->m34 * 0.0));
		HX_STACK_LINE(251)
		this->m33 = ((((t31 * 0.0) + (t32 * 0.0)) + this->m33) + (this->m34 * 0.0));
		HX_STACK_LINE(251)
		this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + this->m34);
		HX_STACK_LINE(251)
		this->m35 = ((((t31 * i15) + (t32 * i25)) + (t33 * i35)) + (t34 * 0.0));
		HX_STACK_LINE(251)
		Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
		HX_STACK_LINE(251)
		Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
		HX_STACK_LINE(251)
		Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
		HX_STACK_LINE(251)
		Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
		HX_STACK_LINE(251)
		this->m41 = (((this->m41 + (this->m42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * 0.0));
		HX_STACK_LINE(251)
		this->m42 = ((((t41 * 0.0) + this->m42) + (this->m43 * 0.0)) + (this->m44 * 0.0));
		HX_STACK_LINE(251)
		this->m43 = ((((t41 * 0.0) + (t42 * 0.0)) + this->m43) + (this->m44 * 0.0));
		HX_STACK_LINE(251)
		this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + this->m44);
		HX_STACK_LINE(251)
		this->m45 = ((((t41 * i15) + (t42 * i25)) + (t43 * i35)) + (t44 * 0.0));
	}
	HX_STACK_LINE(258)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(ColorMatrix_obj,adjustBrightnessRGB,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::adjustBrightness( Float x){
	HX_STACK_PUSH("ColorMatrix::adjustBrightness","com/stencyl/utils/ColorMatrix.hx",244);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_LINE(245)
	this->adjustBrightnessRGB(x,x,x);
	HX_STACK_LINE(246)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_obj,adjustBrightness,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::adjustSaturation( Float s){
	HX_STACK_PUSH("ColorMatrix::adjustSaturation","com/stencyl/utils/ColorMatrix.hx",227);
	HX_STACK_THIS(this);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(228)
	Float sInv = (1.0 - s);		HX_STACK_VAR(sInv,"sInv");
	HX_STACK_LINE(229)
	Float irlum = (sInv * ::com::stencyl::utils::ColorMatrix_obj::LUMA_R);		HX_STACK_VAR(irlum,"irlum");
	HX_STACK_LINE(230)
	Float iglum = (sInv * ::com::stencyl::utils::ColorMatrix_obj::LUMA_G);		HX_STACK_VAR(iglum,"iglum");
	HX_STACK_LINE(231)
	Float iblum = (sInv * ::com::stencyl::utils::ColorMatrix_obj::LUMA_B);		HX_STACK_VAR(iblum,"iblum");
	HX_STACK_LINE(233)
	{
		HX_STACK_LINE(233)
		Float i11 = (irlum + s);		HX_STACK_VAR(i11,"i11");
		Float i22 = (iglum + s);		HX_STACK_VAR(i22,"i22");
		Float i33 = (iblum + s);		HX_STACK_VAR(i33,"i33");
		HX_STACK_LINE(233)
		Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
		HX_STACK_LINE(233)
		Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
		HX_STACK_LINE(233)
		Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
		HX_STACK_LINE(233)
		Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
		HX_STACK_LINE(233)
		this->m11 = ((((this->m11 * i11) + (this->m12 * irlum)) + (this->m13 * irlum)) + (this->m14 * 0.0));
		HX_STACK_LINE(233)
		this->m12 = ((((t11 * iglum) + (this->m12 * i22)) + (this->m13 * iglum)) + (this->m14 * 0.0));
		HX_STACK_LINE(233)
		this->m13 = ((((t11 * iblum) + (t12 * iblum)) + (this->m13 * i33)) + (this->m14 * 0.0));
		HX_STACK_LINE(233)
		this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + this->m14);
		HX_STACK_LINE(233)
		this->m15 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + (t14 * 0.0));
		HX_STACK_LINE(233)
		Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
		HX_STACK_LINE(233)
		Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
		HX_STACK_LINE(233)
		Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
		HX_STACK_LINE(233)
		Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
		HX_STACK_LINE(233)
		this->m21 = ((((this->m21 * i11) + (this->m22 * irlum)) + (this->m23 * irlum)) + (this->m24 * 0.0));
		HX_STACK_LINE(233)
		this->m22 = ((((t21 * iglum) + (this->m22 * i22)) + (this->m23 * iglum)) + (this->m24 * 0.0));
		HX_STACK_LINE(233)
		this->m23 = ((((t21 * iblum) + (t22 * iblum)) + (this->m23 * i33)) + (this->m24 * 0.0));
		HX_STACK_LINE(233)
		this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + this->m24);
		HX_STACK_LINE(233)
		this->m25 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + (t24 * 0.0));
		HX_STACK_LINE(233)
		Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
		HX_STACK_LINE(233)
		Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
		HX_STACK_LINE(233)
		Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
		HX_STACK_LINE(233)
		Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
		HX_STACK_LINE(233)
		this->m31 = ((((this->m31 * i11) + (this->m32 * irlum)) + (this->m33 * irlum)) + (this->m34 * 0.0));
		HX_STACK_LINE(233)
		this->m32 = ((((t31 * iglum) + (this->m32 * i22)) + (this->m33 * iglum)) + (this->m34 * 0.0));
		HX_STACK_LINE(233)
		this->m33 = ((((t31 * iblum) + (t32 * iblum)) + (this->m33 * i33)) + (this->m34 * 0.0));
		HX_STACK_LINE(233)
		this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + this->m34);
		HX_STACK_LINE(233)
		this->m35 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + (t34 * 0.0));
		HX_STACK_LINE(233)
		Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
		HX_STACK_LINE(233)
		Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
		HX_STACK_LINE(233)
		Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
		HX_STACK_LINE(233)
		Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
		HX_STACK_LINE(233)
		this->m41 = ((((this->m41 * i11) + (this->m42 * irlum)) + (this->m43 * irlum)) + (this->m44 * 0.0));
		HX_STACK_LINE(233)
		this->m42 = ((((t41 * iglum) + (this->m42 * i22)) + (this->m43 * iglum)) + (this->m44 * 0.0));
		HX_STACK_LINE(233)
		this->m43 = ((((t41 * iblum) + (t42 * iblum)) + (this->m43 * i33)) + (this->m44 * 0.0));
		HX_STACK_LINE(233)
		this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + this->m44);
		HX_STACK_LINE(233)
		this->m45 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + (t44 * 0.0));
	}
	HX_STACK_LINE(240)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_obj,adjustSaturation,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::invert( ){
	HX_STACK_PUSH("ColorMatrix::invert","com/stencyl/utils/ColorMatrix.hx",215);
	HX_STACK_THIS(this);
	HX_STACK_LINE(216)
	{
		HX_STACK_LINE(216)
		Float t11 = this->m11;		HX_STACK_VAR(t11,"t11");
		HX_STACK_LINE(216)
		Float t12 = this->m12;		HX_STACK_VAR(t12,"t12");
		HX_STACK_LINE(216)
		Float t13 = this->m13;		HX_STACK_VAR(t13,"t13");
		HX_STACK_LINE(216)
		Float t14 = this->m14;		HX_STACK_VAR(t14,"t14");
		HX_STACK_LINE(216)
		this->m11 = ((((this->m11 * -1.0) + (this->m12 * 0.0)) + (this->m13 * 0.0)) + (this->m14 * 0.0));
		HX_STACK_LINE(216)
		this->m12 = ((((t11 * 0.0) + (this->m12 * -1.0)) + (this->m13 * 0.0)) + (this->m14 * 0.0));
		HX_STACK_LINE(216)
		this->m13 = ((((t11 * 0.0) + (t12 * 0.0)) + (this->m13 * -1.0)) + (this->m14 * 0.0));
		HX_STACK_LINE(216)
		this->m14 = ((((t11 * 0.0) + (t12 * 0.0)) + (t13 * 0.0)) + this->m14);
		HX_STACK_LINE(216)
		this->m15 = ((((t11 * (int)255) + (t12 * (int)255)) + (t13 * (int)255)) + (t14 * 0.0));
		HX_STACK_LINE(216)
		Float t21 = this->m21;		HX_STACK_VAR(t21,"t21");
		HX_STACK_LINE(216)
		Float t22 = this->m22;		HX_STACK_VAR(t22,"t22");
		HX_STACK_LINE(216)
		Float t23 = this->m23;		HX_STACK_VAR(t23,"t23");
		HX_STACK_LINE(216)
		Float t24 = this->m24;		HX_STACK_VAR(t24,"t24");
		HX_STACK_LINE(216)
		this->m21 = ((((this->m21 * -1.0) + (this->m22 * 0.0)) + (this->m23 * 0.0)) + (this->m24 * 0.0));
		HX_STACK_LINE(216)
		this->m22 = ((((t21 * 0.0) + (this->m22 * -1.0)) + (this->m23 * 0.0)) + (this->m24 * 0.0));
		HX_STACK_LINE(216)
		this->m23 = ((((t21 * 0.0) + (t22 * 0.0)) + (this->m23 * -1.0)) + (this->m24 * 0.0));
		HX_STACK_LINE(216)
		this->m24 = ((((t21 * 0.0) + (t22 * 0.0)) + (t23 * 0.0)) + this->m24);
		HX_STACK_LINE(216)
		this->m25 = ((((t21 * (int)255) + (t22 * (int)255)) + (t23 * (int)255)) + (t24 * 0.0));
		HX_STACK_LINE(216)
		Float t31 = this->m31;		HX_STACK_VAR(t31,"t31");
		HX_STACK_LINE(216)
		Float t32 = this->m32;		HX_STACK_VAR(t32,"t32");
		HX_STACK_LINE(216)
		Float t33 = this->m33;		HX_STACK_VAR(t33,"t33");
		HX_STACK_LINE(216)
		Float t34 = this->m34;		HX_STACK_VAR(t34,"t34");
		HX_STACK_LINE(216)
		this->m31 = ((((this->m31 * -1.0) + (this->m32 * 0.0)) + (this->m33 * 0.0)) + (this->m34 * 0.0));
		HX_STACK_LINE(216)
		this->m32 = ((((t31 * 0.0) + (this->m32 * -1.0)) + (this->m33 * 0.0)) + (this->m34 * 0.0));
		HX_STACK_LINE(216)
		this->m33 = ((((t31 * 0.0) + (t32 * 0.0)) + (this->m33 * -1.0)) + (this->m34 * 0.0));
		HX_STACK_LINE(216)
		this->m34 = ((((t31 * 0.0) + (t32 * 0.0)) + (t33 * 0.0)) + this->m34);
		HX_STACK_LINE(216)
		this->m35 = ((((t31 * (int)255) + (t32 * (int)255)) + (t33 * (int)255)) + (t34 * 0.0));
		HX_STACK_LINE(216)
		Float t41 = this->m41;		HX_STACK_VAR(t41,"t41");
		HX_STACK_LINE(216)
		Float t42 = this->m42;		HX_STACK_VAR(t42,"t42");
		HX_STACK_LINE(216)
		Float t43 = this->m43;		HX_STACK_VAR(t43,"t43");
		HX_STACK_LINE(216)
		Float t44 = this->m44;		HX_STACK_VAR(t44,"t44");
		HX_STACK_LINE(216)
		this->m41 = ((((this->m41 * -1.0) + (this->m42 * 0.0)) + (this->m43 * 0.0)) + (this->m44 * 0.0));
		HX_STACK_LINE(216)
		this->m42 = ((((t41 * 0.0) + (this->m42 * -1.0)) + (this->m43 * 0.0)) + (this->m44 * 0.0));
		HX_STACK_LINE(216)
		this->m43 = ((((t41 * 0.0) + (t42 * 0.0)) + (this->m43 * -1.0)) + (this->m44 * 0.0));
		HX_STACK_LINE(216)
		this->m44 = ((((t41 * 0.0) + (t42 * 0.0)) + (t43 * 0.0)) + this->m44);
		HX_STACK_LINE(216)
		this->m45 = ((((t41 * (int)255) + (t42 * (int)255)) + (t43 * (int)255)) + (t44 * 0.0));
	}
	HX_STACK_LINE(223)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ColorMatrix_obj,invert,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::identity( ){
	HX_STACK_PUSH("ColorMatrix::identity","com/stencyl/utils/ColorMatrix.hx",203);
	HX_STACK_THIS(this);
	HX_STACK_LINE(204)
	{
		HX_STACK_LINE(204)
		this->m11 = 1.0;
		HX_STACK_LINE(204)
		this->m12 = 0.0;
		HX_STACK_LINE(204)
		this->m13 = 0.0;
		HX_STACK_LINE(204)
		this->m14 = 0.0;
		HX_STACK_LINE(204)
		this->m15 = 0.0;
		HX_STACK_LINE(204)
		this->m21 = 0.0;
		HX_STACK_LINE(204)
		this->m22 = 1.0;
		HX_STACK_LINE(204)
		this->m23 = 0.0;
		HX_STACK_LINE(204)
		this->m24 = 0.0;
		HX_STACK_LINE(204)
		this->m25 = 0.0;
		HX_STACK_LINE(204)
		this->m31 = 0.0;
		HX_STACK_LINE(204)
		this->m32 = 0.0;
		HX_STACK_LINE(204)
		this->m33 = 1.0;
		HX_STACK_LINE(204)
		this->m34 = 0.0;
		HX_STACK_LINE(204)
		this->m35 = 0.0;
		HX_STACK_LINE(204)
		this->m41 = 0.0;
		HX_STACK_LINE(204)
		this->m42 = 0.0;
		HX_STACK_LINE(204)
		this->m43 = 0.0;
		HX_STACK_LINE(204)
		this->m44 = 1.0;
		HX_STACK_LINE(204)
		this->m45 = 0.0;
	}
	HX_STACK_LINE(211)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ColorMatrix_obj,identity,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::mulMatrixMatrix( ::com::stencyl::utils::ColorMatrix A,::com::stencyl::utils::ColorMatrix B,::com::stencyl::utils::ColorMatrix C){
	HX_STACK_PUSH("ColorMatrix::mulMatrixMatrix","com/stencyl/utils/ColorMatrix.hx",88);
	HX_STACK_ARG(A,"A");
	HX_STACK_ARG(B,"B");
	HX_STACK_ARG(C,"C");
	HX_STACK_LINE(89)
	Float t11 = A->m11;		HX_STACK_VAR(t11,"t11");
	HX_STACK_LINE(90)
	Float t12 = A->m12;		HX_STACK_VAR(t12,"t12");
	HX_STACK_LINE(91)
	Float t13 = A->m13;		HX_STACK_VAR(t13,"t13");
	HX_STACK_LINE(92)
	Float t14 = A->m14;		HX_STACK_VAR(t14,"t14");
	HX_STACK_LINE(94)
	C->m11 = ((((A->m11 * B->m11) + (A->m12 * B->m21)) + (A->m13 * B->m31)) + (A->m14 * B->m41));
	HX_STACK_LINE(95)
	C->m12 = ((((t11 * B->m12) + (A->m12 * B->m22)) + (A->m13 * B->m32)) + (A->m14 * B->m42));
	HX_STACK_LINE(96)
	C->m13 = ((((t11 * B->m13) + (t12 * B->m23)) + (A->m13 * B->m33)) + (A->m14 * B->m43));
	HX_STACK_LINE(97)
	C->m14 = ((((t11 * B->m14) + (t12 * B->m24)) + (t13 * B->m34)) + (A->m14 * B->m44));
	HX_STACK_LINE(98)
	C->m15 = ((((t11 * B->m15) + (t12 * B->m25)) + (t13 * B->m35)) + (t14 * B->m45));
	HX_STACK_LINE(100)
	Float t21 = A->m21;		HX_STACK_VAR(t21,"t21");
	HX_STACK_LINE(101)
	Float t22 = A->m22;		HX_STACK_VAR(t22,"t22");
	HX_STACK_LINE(102)
	Float t23 = A->m23;		HX_STACK_VAR(t23,"t23");
	HX_STACK_LINE(103)
	Float t24 = A->m24;		HX_STACK_VAR(t24,"t24");
	HX_STACK_LINE(105)
	C->m21 = ((((A->m21 * B->m11) + (A->m22 * B->m21)) + (A->m23 * B->m31)) + (A->m24 * B->m41));
	HX_STACK_LINE(106)
	C->m22 = ((((t21 * B->m12) + (A->m22 * B->m22)) + (A->m23 * B->m32)) + (A->m24 * B->m42));
	HX_STACK_LINE(107)
	C->m23 = ((((t21 * B->m13) + (t22 * B->m23)) + (A->m23 * B->m33)) + (A->m24 * B->m43));
	HX_STACK_LINE(108)
	C->m24 = ((((t21 * B->m14) + (t22 * B->m24)) + (t23 * B->m34)) + (A->m24 * B->m44));
	HX_STACK_LINE(109)
	C->m25 = ((((t21 * B->m15) + (t22 * B->m25)) + (t23 * B->m35)) + (t24 * B->m45));
	HX_STACK_LINE(111)
	Float t31 = A->m31;		HX_STACK_VAR(t31,"t31");
	HX_STACK_LINE(112)
	Float t32 = A->m32;		HX_STACK_VAR(t32,"t32");
	HX_STACK_LINE(113)
	Float t33 = A->m33;		HX_STACK_VAR(t33,"t33");
	HX_STACK_LINE(114)
	Float t34 = A->m34;		HX_STACK_VAR(t34,"t34");
	HX_STACK_LINE(116)
	C->m31 = ((((A->m31 * B->m11) + (A->m32 * B->m21)) + (A->m33 * B->m31)) + (A->m34 * B->m41));
	HX_STACK_LINE(117)
	C->m32 = ((((t31 * B->m12) + (A->m32 * B->m22)) + (A->m33 * B->m32)) + (A->m34 * B->m42));
	HX_STACK_LINE(118)
	C->m33 = ((((t31 * B->m13) + (t32 * B->m23)) + (A->m33 * B->m33)) + (A->m34 * B->m43));
	HX_STACK_LINE(119)
	C->m34 = ((((t31 * B->m14) + (t32 * B->m24)) + (t33 * B->m34)) + (A->m34 * B->m44));
	HX_STACK_LINE(120)
	C->m35 = ((((t31 * B->m15) + (t32 * B->m25)) + (t33 * B->m35)) + (t34 * B->m45));
	HX_STACK_LINE(122)
	Float t41 = A->m41;		HX_STACK_VAR(t41,"t41");
	HX_STACK_LINE(123)
	Float t42 = A->m42;		HX_STACK_VAR(t42,"t42");
	HX_STACK_LINE(124)
	Float t43 = A->m43;		HX_STACK_VAR(t43,"t43");
	HX_STACK_LINE(125)
	Float t44 = A->m44;		HX_STACK_VAR(t44,"t44");
	HX_STACK_LINE(127)
	C->m41 = ((((A->m41 * B->m11) + (A->m42 * B->m21)) + (A->m43 * B->m31)) + (A->m44 * B->m41));
	HX_STACK_LINE(128)
	C->m42 = ((((t41 * B->m12) + (A->m42 * B->m22)) + (A->m43 * B->m32)) + (A->m44 * B->m42));
	HX_STACK_LINE(129)
	C->m43 = ((((t41 * B->m13) + (t42 * B->m23)) + (A->m43 * B->m33)) + (A->m44 * B->m43));
	HX_STACK_LINE(130)
	C->m44 = ((((t41 * B->m14) + (t42 * B->m24)) + (t43 * B->m34)) + (A->m44 * B->m44));
	HX_STACK_LINE(131)
	C->m45 = ((((t41 * B->m15) + (t42 * B->m25)) + (t43 * B->m35)) + (t44 * B->m45));
	HX_STACK_LINE(133)
	return C;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorMatrix_obj,mulMatrixMatrix,return )

::com::stencyl::utils::ColorMatrix ColorMatrix_obj::blendMatrixMatrix( ::com::stencyl::utils::ColorMatrix A,::com::stencyl::utils::ColorMatrix B,::com::stencyl::utils::ColorMatrix C,Float amount){
	HX_STACK_PUSH("ColorMatrix::blendMatrixMatrix","com/stencyl/utils/ColorMatrix.hx",137);
	HX_STACK_ARG(A,"A");
	HX_STACK_ARG(B,"B");
	HX_STACK_ARG(C,"C");
	HX_STACK_ARG(amount,"amount");
	HX_STACK_LINE(138)
	Float inv_amount = ((int)1 - amount);		HX_STACK_VAR(inv_amount,"inv_amount");
	HX_STACK_LINE(140)
	C->m11 = ((inv_amount * A->m11) + (amount * B->m11));
	HX_STACK_LINE(141)
	C->m12 = ((inv_amount * A->m12) + (amount * B->m12));
	HX_STACK_LINE(142)
	C->m13 = ((inv_amount * A->m13) + (amount * B->m13));
	HX_STACK_LINE(143)
	C->m14 = ((inv_amount * A->m14) + (amount * B->m14));
	HX_STACK_LINE(144)
	C->m15 = ((inv_amount * A->m15) + (amount * B->m15));
	HX_STACK_LINE(146)
	C->m21 = ((inv_amount * A->m21) + (amount * B->m21));
	HX_STACK_LINE(147)
	C->m22 = ((inv_amount * A->m22) + (amount * B->m22));
	HX_STACK_LINE(148)
	C->m23 = ((inv_amount * A->m23) + (amount * B->m23));
	HX_STACK_LINE(149)
	C->m24 = ((inv_amount * A->m24) + (amount * B->m24));
	HX_STACK_LINE(150)
	C->m25 = ((inv_amount * A->m25) + (amount * B->m25));
	HX_STACK_LINE(152)
	C->m31 = ((inv_amount * A->m31) + (amount * B->m31));
	HX_STACK_LINE(153)
	C->m32 = ((inv_amount * A->m32) + (amount * B->m32));
	HX_STACK_LINE(154)
	C->m33 = ((inv_amount * A->m33) + (amount * B->m33));
	HX_STACK_LINE(155)
	C->m34 = ((inv_amount * A->m34) + (amount * B->m34));
	HX_STACK_LINE(156)
	C->m35 = ((inv_amount * A->m35) + (amount * B->m35));
	HX_STACK_LINE(158)
	C->m41 = ((inv_amount * A->m41) + (amount * B->m41));
	HX_STACK_LINE(159)
	C->m42 = ((inv_amount * A->m42) + (amount * B->m42));
	HX_STACK_LINE(160)
	C->m43 = ((inv_amount * A->m43) + (amount * B->m43));
	HX_STACK_LINE(161)
	C->m44 = ((inv_amount * A->m44) + (amount * B->m44));
	HX_STACK_LINE(162)
	C->m45 = ((inv_amount * A->m45) + (amount * B->m45));
	HX_STACK_LINE(164)
	return C;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ColorMatrix_obj,blendMatrixMatrix,return )

Float ColorMatrix_obj::LUMA_R;

Float ColorMatrix_obj::LUMA_G;

Float ColorMatrix_obj::LUMA_B;

Float ColorMatrix_obj::LUMA_R2;

Float ColorMatrix_obj::LUMA_G2;

Float ColorMatrix_obj::LUMA_B2;

Float ColorMatrix_obj::INV3;


ColorMatrix_obj::ColorMatrix_obj()
{
}

void ColorMatrix_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorMatrix);
	HX_MARK_MEMBER_NAME(hueInitialized,"hueInitialized");
	HX_MARK_MEMBER_NAME(postHue,"postHue");
	HX_MARK_MEMBER_NAME(preHue,"preHue");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(m45,"m45");
	HX_MARK_MEMBER_NAME(m44,"m44");
	HX_MARK_MEMBER_NAME(m43,"m43");
	HX_MARK_MEMBER_NAME(m42,"m42");
	HX_MARK_MEMBER_NAME(m41,"m41");
	HX_MARK_MEMBER_NAME(m35,"m35");
	HX_MARK_MEMBER_NAME(m34,"m34");
	HX_MARK_MEMBER_NAME(m33,"m33");
	HX_MARK_MEMBER_NAME(m32,"m32");
	HX_MARK_MEMBER_NAME(m31,"m31");
	HX_MARK_MEMBER_NAME(m25,"m25");
	HX_MARK_MEMBER_NAME(m24,"m24");
	HX_MARK_MEMBER_NAME(m23,"m23");
	HX_MARK_MEMBER_NAME(m22,"m22");
	HX_MARK_MEMBER_NAME(m21,"m21");
	HX_MARK_MEMBER_NAME(m15,"m15");
	HX_MARK_MEMBER_NAME(m14,"m14");
	HX_MARK_MEMBER_NAME(m13,"m13");
	HX_MARK_MEMBER_NAME(m12,"m12");
	HX_MARK_MEMBER_NAME(m11,"m11");
	HX_MARK_END_CLASS();
}

void ColorMatrix_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hueInitialized,"hueInitialized");
	HX_VISIT_MEMBER_NAME(postHue,"postHue");
	HX_VISIT_MEMBER_NAME(preHue,"preHue");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(m45,"m45");
	HX_VISIT_MEMBER_NAME(m44,"m44");
	HX_VISIT_MEMBER_NAME(m43,"m43");
	HX_VISIT_MEMBER_NAME(m42,"m42");
	HX_VISIT_MEMBER_NAME(m41,"m41");
	HX_VISIT_MEMBER_NAME(m35,"m35");
	HX_VISIT_MEMBER_NAME(m34,"m34");
	HX_VISIT_MEMBER_NAME(m33,"m33");
	HX_VISIT_MEMBER_NAME(m32,"m32");
	HX_VISIT_MEMBER_NAME(m31,"m31");
	HX_VISIT_MEMBER_NAME(m25,"m25");
	HX_VISIT_MEMBER_NAME(m24,"m24");
	HX_VISIT_MEMBER_NAME(m23,"m23");
	HX_VISIT_MEMBER_NAME(m22,"m22");
	HX_VISIT_MEMBER_NAME(m21,"m21");
	HX_VISIT_MEMBER_NAME(m15,"m15");
	HX_VISIT_MEMBER_NAME(m14,"m14");
	HX_VISIT_MEMBER_NAME(m13,"m13");
	HX_VISIT_MEMBER_NAME(m12,"m12");
	HX_VISIT_MEMBER_NAME(m11,"m11");
}

Dynamic ColorMatrix_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mul") ) { return mul_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"m45") ) { return m45; }
		if (HX_FIELD_EQ(inName,"m44") ) { return m44; }
		if (HX_FIELD_EQ(inName,"m43") ) { return m43; }
		if (HX_FIELD_EQ(inName,"m42") ) { return m42; }
		if (HX_FIELD_EQ(inName,"m41") ) { return m41; }
		if (HX_FIELD_EQ(inName,"m35") ) { return m35; }
		if (HX_FIELD_EQ(inName,"m34") ) { return m34; }
		if (HX_FIELD_EQ(inName,"m33") ) { return m33; }
		if (HX_FIELD_EQ(inName,"m32") ) { return m32; }
		if (HX_FIELD_EQ(inName,"m31") ) { return m31; }
		if (HX_FIELD_EQ(inName,"m25") ) { return m25; }
		if (HX_FIELD_EQ(inName,"m24") ) { return m24; }
		if (HX_FIELD_EQ(inName,"m23") ) { return m23; }
		if (HX_FIELD_EQ(inName,"m22") ) { return m22; }
		if (HX_FIELD_EQ(inName,"m21") ) { return m21; }
		if (HX_FIELD_EQ(inName,"m15") ) { return m15; }
		if (HX_FIELD_EQ(inName,"m14") ) { return m14; }
		if (HX_FIELD_EQ(inName,"m13") ) { return m13; }
		if (HX_FIELD_EQ(inName,"m12") ) { return m12; }
		if (HX_FIELD_EQ(inName,"m11") ) { return m11; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"INV3") ) { return INV3; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"LUMA_R") ) { return LUMA_R; }
		if (HX_FIELD_EQ(inName,"LUMA_G") ) { return LUMA_G; }
		if (HX_FIELD_EQ(inName,"LUMA_B") ) { return LUMA_B; }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"preHue") ) { return preHue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"LUMA_R2") ) { return LUMA_R2; }
		if (HX_FIELD_EQ(inName,"LUMA_G2") ) { return LUMA_G2; }
		if (HX_FIELD_EQ(inName,"LUMA_B2") ) { return LUMA_B2; }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		if (HX_FIELD_EQ(inName,"initHue") ) { return initHue_dyn(); }
		if (HX_FIELD_EQ(inName,"average") ) { return average_dyn(); }
		if (HX_FIELD_EQ(inName,"postHue") ) { return postHue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shearRed") ) { return shearRed_dyn(); }
		if (HX_FIELD_EQ(inName,"setAlpha") ) { return setAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"colorize") ) { return colorize_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shearBlue") ) { return shearBlue_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateRed") ) { return rotateRed_dyn(); }
		if (HX_FIELD_EQ(inName,"rgb2Alpha") ) { return rgb2Alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateHue") ) { return rotateHue_dyn(); }
		if (HX_FIELD_EQ(inName,"adjustHue") ) { return adjustHue_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shearGreen") ) { return shearGreen_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateBlue") ) { return rotateBlue_dyn(); }
		if (HX_FIELD_EQ(inName,"desaturate") ) { return desaturate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"applyMatrix") ) { return applyMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateGreen") ) { return rotateGreen_dyn(); }
		if (HX_FIELD_EQ(inName,"invertAlpha") ) { return invertAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"setChannels") ) { return setChannels_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clearChannels") ) { return clearChannels_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"thresholdAlpha") ) { return thresholdAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"adjustContrast") ) { return adjustContrast_dyn(); }
		if (HX_FIELD_EQ(inName,"hueInitialized") ) { return hueInitialized; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mulMatrixMatrix") ) { return mulMatrixMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"transformVector") ) { return transformVector_dyn(); }
		if (HX_FIELD_EQ(inName,"luminance2Alpha") ) { return luminance2Alpha_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"averageRGB2Alpha") ) { return averageRGB2Alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"adjustBrightness") ) { return adjustBrightness_dyn(); }
		if (HX_FIELD_EQ(inName,"adjustSaturation") ) { return adjustSaturation_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"blendMatrixMatrix") ) { return blendMatrixMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"setMultiplicators") ) { return setMultiplicators_dyn(); }
		if (HX_FIELD_EQ(inName,"adjustContrastRGB") ) { return adjustContrastRGB_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"adjustAlphaContrast") ) { return adjustAlphaContrast_dyn(); }
		if (HX_FIELD_EQ(inName,"adjustBrightnessRGB") ) { return adjustBrightnessRGB_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applyColorDeficiency") ) { return applyColorDeficiency_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorMatrix_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"m45") ) { m45=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m44") ) { m44=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m43") ) { m43=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m42") ) { m42=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m41") ) { m41=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m35") ) { m35=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m34") ) { m34=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m33") ) { m33=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m32") ) { m32=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m31") ) { m31=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m25") ) { m25=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m24") ) { m24=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m23") ) { m23=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m22") ) { m22=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m21") ) { m21=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m15") ) { m15=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m14") ) { m14=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m13") ) { m13=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m12") ) { m12=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m11") ) { m11=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"INV3") ) { INV3=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"LUMA_R") ) { LUMA_R=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMA_G") ) { LUMA_G=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMA_B") ) { LUMA_B=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preHue") ) { preHue=inValue.Cast< ::com::stencyl::utils::ColorMatrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"LUMA_R2") ) { LUMA_R2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMA_G2") ) { LUMA_G2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMA_B2") ) { LUMA_B2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"postHue") ) { postHue=inValue.Cast< ::com::stencyl::utils::ColorMatrix >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hueInitialized") ) { hueInitialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorMatrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("hueInitialized"));
	outFields->push(HX_CSTRING("postHue"));
	outFields->push(HX_CSTRING("preHue"));
	outFields->push(HX_CSTRING("matrix"));
	outFields->push(HX_CSTRING("m45"));
	outFields->push(HX_CSTRING("m44"));
	outFields->push(HX_CSTRING("m43"));
	outFields->push(HX_CSTRING("m42"));
	outFields->push(HX_CSTRING("m41"));
	outFields->push(HX_CSTRING("m35"));
	outFields->push(HX_CSTRING("m34"));
	outFields->push(HX_CSTRING("m33"));
	outFields->push(HX_CSTRING("m32"));
	outFields->push(HX_CSTRING("m31"));
	outFields->push(HX_CSTRING("m25"));
	outFields->push(HX_CSTRING("m24"));
	outFields->push(HX_CSTRING("m23"));
	outFields->push(HX_CSTRING("m22"));
	outFields->push(HX_CSTRING("m21"));
	outFields->push(HX_CSTRING("m15"));
	outFields->push(HX_CSTRING("m14"));
	outFields->push(HX_CSTRING("m13"));
	outFields->push(HX_CSTRING("m12"));
	outFields->push(HX_CSTRING("m11"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("mulMatrixMatrix"),
	HX_CSTRING("blendMatrixMatrix"),
	HX_CSTRING("LUMA_R"),
	HX_CSTRING("LUMA_G"),
	HX_CSTRING("LUMA_B"),
	HX_CSTRING("LUMA_R2"),
	HX_CSTRING("LUMA_G2"),
	HX_CSTRING("LUMA_B2"),
	HX_CSTRING("INV3"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("mul"),
	HX_CSTRING("set"),
	HX_CSTRING("toArray"),
	HX_CSTRING("initHue"),
	HX_CSTRING("transformVector"),
	HX_CSTRING("applyMatrix"),
	HX_CSTRING("applyColorDeficiency"),
	HX_CSTRING("shearBlue"),
	HX_CSTRING("shearGreen"),
	HX_CSTRING("shearRed"),
	HX_CSTRING("rotateBlue"),
	HX_CSTRING("rotateGreen"),
	HX_CSTRING("rotateRed"),
	HX_CSTRING("setAlpha"),
	HX_CSTRING("rgb2Alpha"),
	HX_CSTRING("invertAlpha"),
	HX_CSTRING("averageRGB2Alpha"),
	HX_CSTRING("thresholdAlpha"),
	HX_CSTRING("clearChannels"),
	HX_CSTRING("setMultiplicators"),
	HX_CSTRING("desaturate"),
	HX_CSTRING("threshold"),
	HX_CSTRING("average"),
	HX_CSTRING("setChannels"),
	HX_CSTRING("rotateHue"),
	HX_CSTRING("colorize"),
	HX_CSTRING("adjustAlphaContrast"),
	HX_CSTRING("luminance2Alpha"),
	HX_CSTRING("adjustHue"),
	HX_CSTRING("adjustContrastRGB"),
	HX_CSTRING("adjustContrast"),
	HX_CSTRING("adjustBrightnessRGB"),
	HX_CSTRING("adjustBrightness"),
	HX_CSTRING("adjustSaturation"),
	HX_CSTRING("invert"),
	HX_CSTRING("identity"),
	HX_CSTRING("hueInitialized"),
	HX_CSTRING("postHue"),
	HX_CSTRING("preHue"),
	HX_CSTRING("matrix"),
	HX_CSTRING("m45"),
	HX_CSTRING("m44"),
	HX_CSTRING("m43"),
	HX_CSTRING("m42"),
	HX_CSTRING("m41"),
	HX_CSTRING("m35"),
	HX_CSTRING("m34"),
	HX_CSTRING("m33"),
	HX_CSTRING("m32"),
	HX_CSTRING("m31"),
	HX_CSTRING("m25"),
	HX_CSTRING("m24"),
	HX_CSTRING("m23"),
	HX_CSTRING("m22"),
	HX_CSTRING("m21"),
	HX_CSTRING("m15"),
	HX_CSTRING("m14"),
	HX_CSTRING("m13"),
	HX_CSTRING("m12"),
	HX_CSTRING("m11"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorMatrix_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ColorMatrix_obj::LUMA_R,"LUMA_R");
	HX_MARK_MEMBER_NAME(ColorMatrix_obj::LUMA_G,"LUMA_G");
	HX_MARK_MEMBER_NAME(ColorMatrix_obj::LUMA_B,"LUMA_B");
	HX_MARK_MEMBER_NAME(ColorMatrix_obj::LUMA_R2,"LUMA_R2");
	HX_MARK_MEMBER_NAME(ColorMatrix_obj::LUMA_G2,"LUMA_G2");
	HX_MARK_MEMBER_NAME(ColorMatrix_obj::LUMA_B2,"LUMA_B2");
	HX_MARK_MEMBER_NAME(ColorMatrix_obj::INV3,"INV3");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorMatrix_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColorMatrix_obj::LUMA_R,"LUMA_R");
	HX_VISIT_MEMBER_NAME(ColorMatrix_obj::LUMA_G,"LUMA_G");
	HX_VISIT_MEMBER_NAME(ColorMatrix_obj::LUMA_B,"LUMA_B");
	HX_VISIT_MEMBER_NAME(ColorMatrix_obj::LUMA_R2,"LUMA_R2");
	HX_VISIT_MEMBER_NAME(ColorMatrix_obj::LUMA_G2,"LUMA_G2");
	HX_VISIT_MEMBER_NAME(ColorMatrix_obj::LUMA_B2,"LUMA_B2");
	HX_VISIT_MEMBER_NAME(ColorMatrix_obj::INV3,"INV3");
};

Class ColorMatrix_obj::__mClass;

void ColorMatrix_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.utils.ColorMatrix"), hx::TCanCast< ColorMatrix_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ColorMatrix_obj::__boot()
{
	LUMA_R= 0.212671;
	LUMA_G= 0.71516;
	LUMA_B= 0.072169;
	LUMA_R2= 0.3086;
	LUMA_G2= 0.6094;
	LUMA_B2= 0.0820;
	INV3= (Float(1.0) / Float(3.0));
}

} // end namespace com
} // end namespace stencyl
} // end namespace utils
