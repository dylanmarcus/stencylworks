#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Animation
#include <com/stencyl/models/actor/Animation.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Sprite
#include <com/stencyl/models/actor/Sprite.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace actor{

Void Sprite_obj::__construct(int ID,int atlasID,::String name,int width,int height,int defaultAnimation)
{
HX_STACK_PUSH("Sprite::new","com/stencyl/models/actor/Sprite.hx",13);
{
	HX_STACK_LINE(14)
	super::__construct(ID,name,atlasID);
	HX_STACK_LINE(16)
	this->width = width;
	HX_STACK_LINE(17)
	this->height = height;
	HX_STACK_LINE(18)
	this->defaultAnimation = defaultAnimation;
	HX_STACK_LINE(20)
	this->animations = ::haxe::ds::IntMap_obj::__new();
}
;
	return null();
}

Sprite_obj::~Sprite_obj() { }

Dynamic Sprite_obj::__CreateEmpty() { return  new Sprite_obj; }
hx::ObjectPtr< Sprite_obj > Sprite_obj::__new(int ID,int atlasID,::String name,int width,int height,int defaultAnimation)
{  hx::ObjectPtr< Sprite_obj > result = new Sprite_obj();
	result->__construct(ID,atlasID,name,width,height,defaultAnimation);
	return result;}

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sprite_obj > result = new Sprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Sprite_obj::unloadGraphics( ){
{
		HX_STACK_PUSH("Sprite::unloadGraphics","com/stencyl/models/actor/Sprite.hx",34);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::models::actor::Sprite_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/actor/Sprite.hx",35);
				{
					HX_STACK_LINE(35)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animations);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/models/actor/Sprite.hx",35);
						{
							HX_STACK_LINE(35)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(35)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(34)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::actor::Animation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::actor::Animation >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::actor::Animation a = __it->next();
			a->unloadGraphics();
		}
	}
return null();
}


Void Sprite_obj::loadGraphics( ){
{
		HX_STACK_PUSH("Sprite::loadGraphics","com/stencyl/models/actor/Sprite.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_LINE(26)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::actor::Animation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::actor::Animation >(this->animations->iterator());  __it->hasNext(); ){
			::com::stencyl::models::actor::Animation a = __it->next();
			a->loadGraphics();
		}
	}
return null();
}



Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(defaultAnimation,"defaultAnimation");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(defaultAnimation,"defaultAnimation");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Sprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { return animations; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return loadGraphics_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unloadGraphics") ) { return unloadGraphics_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"defaultAnimation") ) { return defaultAnimation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"defaultAnimation") ) { defaultAnimation=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("animations"));
	outFields->push(HX_CSTRING("defaultAnimation"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("unloadGraphics"),
	HX_CSTRING("loadGraphics"),
	HX_CSTRING("animations"),
	HX_CSTRING("defaultAnimation"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.actor.Sprite"), hx::TCanCast< Sprite_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Sprite_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor
