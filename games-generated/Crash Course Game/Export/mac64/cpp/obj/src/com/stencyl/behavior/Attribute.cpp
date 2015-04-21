#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Data
#include <com/stencyl/Data.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Attribute
#include <com/stencyl/behavior/Attribute.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Font
#include <com/stencyl/models/Font.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Scene
#include <com/stencyl/models/Scene.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Sound
#include <com/stencyl/models/Sound.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
namespace com{
namespace stencyl{
namespace behavior{

Void Attribute_obj::__construct(int ID,::String fieldName,::String fullName,Dynamic value,::String type,Dynamic parent,bool hidden)
{
HX_STACK_PUSH("Attribute::new","com/stencyl/behavior/Attribute.hx",21);
{
	HX_STACK_LINE(22)
	this->ID = ID;
	HX_STACK_LINE(23)
	this->fieldName = fieldName;
	HX_STACK_LINE(24)
	this->fullName = fullName;
	HX_STACK_LINE(25)
	this->type = type;
	HX_STACK_LINE(27)
	this->value = value;
	HX_STACK_LINE(28)
	this->realValue = null();
	HX_STACK_LINE(30)
	this->hidden = hidden;
}
;
	return null();
}

Attribute_obj::~Attribute_obj() { }

Dynamic Attribute_obj::__CreateEmpty() { return  new Attribute_obj; }
hx::ObjectPtr< Attribute_obj > Attribute_obj::__new(int ID,::String fieldName,::String fullName,Dynamic value,::String type,Dynamic parent,bool hidden)
{  hx::ObjectPtr< Attribute_obj > result = new Attribute_obj();
	result->__construct(ID,fieldName,fullName,value,type,parent,hidden);
	return result;}

Dynamic Attribute_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Attribute_obj > result = new Attribute_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Dynamic Attribute_obj::getRealValue( ){
	HX_STACK_PUSH("Attribute::getRealValue","com/stencyl/behavior/Attribute.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_LINE(35)
	if (((this->realValue == null()))){
		HX_STACK_LINE(36)
		if (((this->type == HX_CSTRING("int")))){
			HX_STACK_LINE(38)
			this->realValue = ::Std_obj::parseInt(this->value);
		}
		else{
			HX_STACK_LINE(42)
			if (((bool((this->type == HX_CSTRING("float"))) || bool((this->type == HX_CSTRING("number")))))){
				HX_STACK_LINE(43)
				this->realValue = ::Std_obj::parseFloat(this->value);
			}
			else{
				HX_STACK_LINE(47)
				if (((this->type == HX_CSTRING("boolean")))){
					HX_STACK_LINE(48)
					this->realValue = (  (((this->value == HX_CSTRING("true")))) ? Dynamic(true) : Dynamic(false) );
				}
				else{
					HX_STACK_LINE(52)
					if (((this->type == HX_CSTRING("color")))){
						HX_STACK_LINE(53)
						if (((bool((this->value == null())) || bool((this->value == HX_CSTRING("")))))){
							HX_STACK_LINE(55)
							this->realValue = (int)-16777216;
						}
						else{
							HX_STACK_LINE(61)
							Array< ::String > s = this->value->__Field(HX_CSTRING("split"),true)(HX_CSTRING(","));		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(63)
							int r = ::Std_obj::parseInt(s->__get((int)0));		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(64)
							int g = ::Std_obj::parseInt(s->__get((int)1));		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(65)
							int b = ::Std_obj::parseInt(s->__get((int)2));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(66)
							int a = ::Std_obj::parseInt(s->__get((int)3));		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(68)
							this->realValue = (int((int((int((int(a) << int((int)24))) | int((int(r) << int((int)16))))) | int((int(g) << int((int)8))))) | int(b));
						}
					}
					else{
						HX_STACK_LINE(72)
						if (((bool((bool((this->type == HX_CSTRING("sound"))) || bool((this->type == HX_CSTRING("actortype"))))) || bool((this->type == HX_CSTRING("font")))))){
							HX_STACK_LINE(73)
							if (((this->value != null()))){
								HX_STACK_LINE(76)
								if (((bool((this->value == HX_CSTRING("null"))) || bool((this->value == HX_CSTRING("")))))){
									HX_STACK_LINE(77)
									this->realValue = null();
								}
								else{
									struct _Function_9_1{
										inline static ::com::stencyl::models::Resource Block( ::com::stencyl::behavior::Attribute_obj *__this){
											HX_STACK_PUSH("*::closure","com/stencyl/behavior/Attribute.hx",83);
											{
												HX_STACK_LINE(83)
												int key = __this->value;		HX_STACK_VAR(key,"key");
												HX_STACK_LINE(83)
												return ::com::stencyl::Data_obj::get()->resources->get(key);
											}
											return null();
										}
									};
									HX_STACK_LINE(82)
									this->realValue = _Function_9_1::Block(this);
								}
								HX_STACK_LINE(86)
								if (((bool((this->type == HX_CSTRING("font"))) && bool(!(::Std_obj::is(this->realValue,hx::ClassOf< ::com::stencyl::models::Font >())))))){
									HX_STACK_LINE(87)
									this->realValue = null();
								}
								HX_STACK_LINE(91)
								if (((bool((this->type == HX_CSTRING("sound"))) && bool(!(::Std_obj::is(this->realValue,hx::ClassOf< ::com::stencyl::models::Sound >())))))){
									HX_STACK_LINE(92)
									this->realValue = null();
								}
								HX_STACK_LINE(96)
								if (((bool((this->type == HX_CSTRING("actortype"))) && bool(!(::Std_obj::is(this->realValue,hx::ClassOf< ::com::stencyl::models::actor::ActorType >())))))){
									HX_STACK_LINE(97)
									this->realValue = null();
								}
							}
						}
						else{
							HX_STACK_LINE(103)
							if (((this->type == HX_CSTRING("actorgroup")))){
								HX_STACK_LINE(104)
								this->realValue = ::Std_obj::parseInt(this->value);
							}
							else{
								HX_STACK_LINE(109)
								if (((this->type == HX_CSTRING("control")))){
									HX_STACK_LINE(110)
									this->realValue = this->value;
								}
								else{
									HX_STACK_LINE(114)
									if (((this->type == HX_CSTRING("effect")))){
										HX_STACK_LINE(115)
										this->realValue = this->value;
									}
									else{
										HX_STACK_LINE(119)
										if (((this->type == HX_CSTRING("animation")))){
											HX_STACK_LINE(120)
											this->realValue = this->value;
										}
										else{
											HX_STACK_LINE(124)
											if (((this->type == HX_CSTRING("game-attribute")))){
												HX_STACK_LINE(125)
												this->realValue = this->value;
											}
											else{
												HX_STACK_LINE(129)
												if (((this->type == HX_CSTRING("scene")))){
													struct _Function_13_1{
														inline static ::com::stencyl::models::Scene Block( ::com::stencyl::behavior::Attribute_obj *__this){
															HX_STACK_PUSH("*::closure","com/stencyl/behavior/Attribute.hx",131);
															{
																HX_STACK_LINE(131)
																int key = __this->value;		HX_STACK_VAR(key,"key");
																HX_STACK_LINE(131)
																return ::com::stencyl::models::GameModel_obj::get()->scenes->get(key);
															}
															return null();
														}
													};
													HX_STACK_LINE(130)
													this->realValue = _Function_13_1::Block(this);
												}
												else{
													HX_STACK_LINE(134)
													if (((this->type == HX_CSTRING("text")))){
														HX_STACK_LINE(135)
														this->realValue = this->value;
													}
													else{
														HX_STACK_LINE(139)
														if (((this->type == HX_CSTRING("list")))){
															HX_STACK_LINE(141)
															this->realValue = this->value;
															HX_STACK_LINE(143)
															if (((bool((this->value == null())) || bool((this->value == HX_CSTRING("")))))){
																HX_STACK_LINE(144)
																this->realValue = Dynamic( Array_obj<Dynamic>::__new() );
															}
														}
														else{
															HX_STACK_LINE(149)
															if (((bool((this->value != null())) && bool((this->type == HX_CSTRING("actor")))))){
																HX_STACK_LINE(150)
																if (((this->value == HX_CSTRING("thisactor")))){
																	HX_STACK_LINE(152)
																	this->realValue = this->parent;
																}
																else{
																	HX_STACK_LINE(157)
																	this->realValue = ::Std_obj::parseInt(this->value);
																}
															}
															else{
																HX_STACK_LINE(162)
																if (((bool((this->value != null())) && bool((this->type == HX_CSTRING("joint")))))){
																	HX_STACK_LINE(163)
																	this->realValue = ::Std_obj::parseInt(this->value);
																}
																else{
																	HX_STACK_LINE(167)
																	if (((bool((this->value != null())) && bool((this->type == HX_CSTRING("region")))))){
																		HX_STACK_LINE(168)
																		this->realValue = ::Std_obj::parseInt(this->value);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(173)
	return this->realValue;
}


HX_DEFINE_DYNAMIC_FUNC0(Attribute_obj,getRealValue,return )


Attribute_obj::Attribute_obj()
{
}

void Attribute_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Attribute);
	HX_MARK_MEMBER_NAME(hidden,"hidden");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(realValue,"realValue");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(defaultValue,"defaultValue");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(fullName,"fullName");
	HX_MARK_MEMBER_NAME(fieldName,"fieldName");
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_END_CLASS();
}

void Attribute_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hidden,"hidden");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(realValue,"realValue");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(defaultValue,"defaultValue");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(fullName,"fullName");
	HX_VISIT_MEMBER_NAME(fieldName,"fieldName");
	HX_VISIT_MEMBER_NAME(ID,"ID");
}

Dynamic Attribute_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hidden") ) { return hidden; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fullName") ) { return fullName; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"realValue") ) { return realValue; }
		if (HX_FIELD_EQ(inName,"fieldName") ) { return fieldName; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getRealValue") ) { return getRealValue_dyn(); }
		if (HX_FIELD_EQ(inName,"defaultValue") ) { return defaultValue; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Attribute_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hidden") ) { hidden=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fullName") ) { fullName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"realValue") ) { realValue=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fieldName") ) { fieldName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultValue") ) { defaultValue=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Attribute_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("hidden"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("realValue"));
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("defaultValue"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("fullName"));
	outFields->push(HX_CSTRING("fieldName"));
	outFields->push(HX_CSTRING("ID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getRealValue"),
	HX_CSTRING("hidden"),
	HX_CSTRING("parent"),
	HX_CSTRING("realValue"),
	HX_CSTRING("value"),
	HX_CSTRING("defaultValue"),
	HX_CSTRING("type"),
	HX_CSTRING("fullName"),
	HX_CSTRING("fieldName"),
	HX_CSTRING("ID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Attribute_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Attribute_obj::__mClass,"__mClass");
};

Class Attribute_obj::__mClass;

void Attribute_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.behavior.Attribute"), hx::TCanCast< Attribute_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Attribute_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace behavior
