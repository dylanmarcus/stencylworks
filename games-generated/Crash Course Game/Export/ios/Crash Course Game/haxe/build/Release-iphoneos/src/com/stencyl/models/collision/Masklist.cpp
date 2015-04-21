#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Hitbox
#include <com/stencyl/models/collision/Hitbox.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Mask
#include <com/stencyl/models/collision/Mask.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Masklist
#include <com/stencyl/models/collision/Masklist.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace collision{

Void Masklist_obj::__construct(Dynamic masks)
{
HX_STACK_PUSH("Masklist::new","com/stencyl/models/collision/Masklist.hx",16);
{
	HX_STACK_LINE(17)
	super::__construct(null(),null(),null(),null(),null());
	HX_STACK_LINE(18)
	this->_masks = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(19)
	this->_temp = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(21)
	::com::stencyl::models::collision::Mask m;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(22)
	{
		HX_STACK_LINE(22)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		while(((_g < masks->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(22)
			Dynamic m1 = masks->__GetItem(_g);		HX_STACK_VAR(m1,"m1");
			HX_STACK_LINE(22)
			++(_g);
			HX_STACK_LINE(22)
			this->add(m1);
		}
	}
}
;
	return null();
}

Masklist_obj::~Masklist_obj() { }

Dynamic Masklist_obj::__CreateEmpty() { return  new Masklist_obj; }
hx::ObjectPtr< Masklist_obj > Masklist_obj::__new(Dynamic masks)
{  hx::ObjectPtr< Masklist_obj > result = new Masklist_obj();
	result->__construct(masks);
	return result;}

Dynamic Masklist_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Masklist_obj > result = new Masklist_obj();
	result->__construct(inArgs[0]);
	return result;}

int Masklist_obj::get_count( ){
	HX_STACK_PUSH("Masklist::get_count","com/stencyl/models/collision/Masklist.hx",174);
	HX_STACK_THIS(this);
	HX_STACK_LINE(174)
	return this->_count;
}


HX_DEFINE_DYNAMIC_FUNC0(Masklist_obj,get_count,return )

Void Masklist_obj::update( ){
{
		HX_STACK_PUSH("Masklist::update","com/stencyl/models/collision/Masklist.hx",147);
		HX_STACK_THIS(this);
		HX_STACK_LINE(149)
		int t = (int)100000;		HX_STACK_VAR(t,"t");
		int l = (int)100000;		HX_STACK_VAR(l,"l");
		int r = (int)0;		HX_STACK_VAR(r,"r");
		int b = (int)0;		HX_STACK_VAR(b,"b");
		::com::stencyl::models::collision::Hitbox h;		HX_STACK_VAR(h,"h");
		int i = this->_count;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(150)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(151)
			if ((((h = hx::TCast< com::stencyl::models::collision::Hitbox >::cast(this->_masks->__get(i).StaticCast< ::com::stencyl::models::collision::Mask >())) != null()))){
				HX_STACK_LINE(154)
				if (((h->_x < l))){
					HX_STACK_LINE(154)
					l = h->_x;
				}
				HX_STACK_LINE(155)
				if (((h->_y < t))){
					HX_STACK_LINE(155)
					t = h->_y;
				}
				HX_STACK_LINE(156)
				if ((((h->_x + h->_width) > r))){
					HX_STACK_LINE(156)
					r = (h->_x + h->_width);
				}
				HX_STACK_LINE(157)
				if ((((h->_y + h->_height) > b))){
					HX_STACK_LINE(157)
					b = (h->_y + h->_height);
				}
			}
		}
		HX_STACK_LINE(162)
		this->_x = l;
		HX_STACK_LINE(163)
		this->_y = t;
		HX_STACK_LINE(164)
		this->_width = (r - l);
		HX_STACK_LINE(165)
		this->_height = (b - t);
		HX_STACK_LINE(167)
		this->super::update();
	}
return null();
}


Void Masklist_obj::assignTo( ::com::stencyl::models::Actor parent){
{
		HX_STACK_PUSH("Masklist::assignTo","com/stencyl/models/collision/Masklist.hx",140);
		HX_STACK_THIS(this);
		HX_STACK_ARG(parent,"parent");
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(141)
			while(((_g < _g1->length))){
				HX_STACK_LINE(141)
				::com::stencyl::models::collision::Mask m = _g1->__get(_g).StaticCast< ::com::stencyl::models::collision::Mask >();		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(141)
				++(_g);
				HX_STACK_LINE(141)
				m->parent = parent;
			}
		}
		HX_STACK_LINE(142)
		this->super::assignTo(parent);
	}
return null();
}


::com::stencyl::models::collision::Mask Masklist_obj::getMask( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_PUSH("Masklist::getMask","com/stencyl/models/collision/Masklist.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
{
		HX_STACK_LINE(135)
		return this->_masks->__get(hx::Mod(index,this->_masks->length)).StaticCast< ::com::stencyl::models::collision::Mask >();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Masklist_obj,getMask,return )

Void Masklist_obj::removeAll( ){
{
		HX_STACK_PUSH("Masklist::removeAll","com/stencyl/models/collision/Masklist.hx",120);
		HX_STACK_THIS(this);
		HX_STACK_LINE(121)
		::com::stencyl::models::collision::Mask m;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(122)
			while(((_g < _g1->length))){
				HX_STACK_LINE(122)
				::com::stencyl::models::collision::Mask m1 = _g1->__get(_g).StaticCast< ::com::stencyl::models::collision::Mask >();		HX_STACK_VAR(m1,"m1");
				HX_STACK_LINE(122)
				++(_g);
				HX_STACK_LINE(122)
				m1->list = null();
			}
		}
		HX_STACK_LINE(123)
		this->_count = (int)0;
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			Dynamic arr = this->_masks;		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(124)
			arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			Dynamic arr = this->_temp;		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(125)
			arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(126)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Masklist_obj,removeAll,(void))

Void Masklist_obj::removeAt( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_PUSH("Masklist::removeAt","com/stencyl/models/collision/Masklist.hx",97);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
{
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			Dynamic arr = this->_temp;		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(98)
			arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(99)
		int i = this->_masks->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(100)
		hx::ModEq(index,i);
		HX_STACK_LINE(101)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(102)
			if (((i == index))){
				HX_STACK_LINE(105)
				this->_masks->__get(index).StaticCast< ::com::stencyl::models::collision::Mask >()->list = null();
				HX_STACK_LINE(106)
				(this->_count)--;
				HX_STACK_LINE(107)
				this->update();
			}
			else{
				HX_STACK_LINE(109)
				this->_temp[this->_temp->length] = this->_masks->__get(index).StaticCast< ::com::stencyl::models::collision::Mask >();
			}
		}
		HX_STACK_LINE(111)
		Array< ::Dynamic > temp = this->_masks;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(112)
		this->_masks = this->_temp;
		HX_STACK_LINE(113)
		this->_temp = temp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Masklist_obj,removeAt,(void))

::com::stencyl::models::collision::Mask Masklist_obj::remove( ::com::stencyl::models::collision::Mask mask){
	HX_STACK_PUSH("Masklist::remove","com/stencyl/models/collision/Masklist.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_ARG(mask,"mask");
	HX_STACK_LINE(72)
	if (((::Lambda_obj::indexOf(this->_masks,mask) < (int)0))){
		HX_STACK_LINE(72)
		return mask;
	}
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		Dynamic arr = this->_temp;		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(73)
		arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
	}
	HX_STACK_LINE(74)
	::com::stencyl::models::collision::Mask m;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(75)
		while(((_g < _g1->length))){
			HX_STACK_LINE(75)
			::com::stencyl::models::collision::Mask m1 = _g1->__get(_g).StaticCast< ::com::stencyl::models::collision::Mask >();		HX_STACK_VAR(m1,"m1");
			HX_STACK_LINE(75)
			++(_g);
			HX_STACK_LINE(77)
			if (((m1 == mask))){
				HX_STACK_LINE(79)
				mask->list = null();
				HX_STACK_LINE(80)
				mask->parent = null();
				HX_STACK_LINE(81)
				(this->_count)--;
				HX_STACK_LINE(82)
				this->update();
			}
			else{
				HX_STACK_LINE(84)
				this->_temp[this->_temp->length] = m1;
			}
		}
	}
	HX_STACK_LINE(86)
	Array< ::Dynamic > temp = this->_masks;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(87)
	this->_masks = this->_temp;
	HX_STACK_LINE(88)
	this->_temp = temp;
	HX_STACK_LINE(89)
	return mask;
}


HX_DEFINE_DYNAMIC_FUNC1(Masklist_obj,remove,return )

::com::stencyl::models::collision::Mask Masklist_obj::add( ::com::stencyl::models::collision::Mask mask){
	HX_STACK_PUSH("Masklist::add","com/stencyl/models/collision/Masklist.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_ARG(mask,"mask");
	HX_STACK_LINE(58)
	this->_masks[(this->_count)++] = mask;
	HX_STACK_LINE(59)
	mask->list = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(60)
	mask->parent = this->parent;
	HX_STACK_LINE(61)
	this->update();
	HX_STACK_LINE(62)
	return mask;
}


HX_DEFINE_DYNAMIC_FUNC1(Masklist_obj,add,return )

bool Masklist_obj::collideMasklist( ::com::stencyl::models::collision::Masklist other){
	HX_STACK_PUSH("Masklist::collideMasklist","com/stencyl/models/collision/Masklist.hx",38);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(39)
	::com::stencyl::models::collision::Mask a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(40)
	::com::stencyl::models::collision::Mask b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(41)
		while(((_g < _g1->length))){
			HX_STACK_LINE(41)
			::com::stencyl::models::collision::Mask a1 = _g1->__get(_g).StaticCast< ::com::stencyl::models::collision::Mask >();		HX_STACK_VAR(a1,"a1");
			HX_STACK_LINE(41)
			++(_g);
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				Array< ::Dynamic > _g3 = other->_masks;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(43)
				while(((_g2 < _g3->length))){
					HX_STACK_LINE(43)
					::com::stencyl::models::collision::Mask b1 = _g3->__get(_g2).StaticCast< ::com::stencyl::models::collision::Mask >();		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(43)
					++(_g2);
					HX_STACK_LINE(45)
					if ((a1->collide(b1))){
						HX_STACK_LINE(45)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(48)
	return true;
}


bool Masklist_obj::collide( ::com::stencyl::models::collision::Mask mask){
	HX_STACK_PUSH("Masklist::collide","com/stencyl/models/collision/Masklist.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_ARG(mask,"mask");
	HX_STACK_LINE(28)
	::com::stencyl::models::collision::Mask m;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		while(((_g < _g1->length))){
			HX_STACK_LINE(29)
			::com::stencyl::models::collision::Mask m1 = _g1->__get(_g).StaticCast< ::com::stencyl::models::collision::Mask >();		HX_STACK_VAR(m1,"m1");
			HX_STACK_LINE(29)
			++(_g);
			HX_STACK_LINE(31)
			if ((m1->collide(mask))){
				HX_STACK_LINE(31)
				return true;
			}
		}
	}
	HX_STACK_LINE(33)
	return false;
}



Masklist_obj::Masklist_obj()
{
}

void Masklist_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Masklist);
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_MEMBER_NAME(_temp,"_temp");
	HX_MARK_MEMBER_NAME(_masks,"_masks");
	HX_MARK_MEMBER_NAME(count,"count");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Masklist_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_count,"_count");
	HX_VISIT_MEMBER_NAME(_temp,"_temp");
	HX_VISIT_MEMBER_NAME(_masks,"_masks");
	HX_VISIT_MEMBER_NAME(count,"count");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Masklist_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_temp") ) { return _temp; }
		if (HX_FIELD_EQ(inName,"count") ) { return inCallProp ? get_count() : count; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		if (HX_FIELD_EQ(inName,"_masks") ) { return _masks; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getMask") ) { return getMask_dyn(); }
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"assignTo") ) { return assignTo_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_count") ) { return get_count_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collideMasklist") ) { return collideMasklist_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Masklist_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_temp") ) { _temp=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_masks") ) { _masks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Masklist_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_count"));
	outFields->push(HX_CSTRING("_temp"));
	outFields->push(HX_CSTRING("_masks"));
	outFields->push(HX_CSTRING("count"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_count"),
	HX_CSTRING("_temp"),
	HX_CSTRING("_masks"),
	HX_CSTRING("get_count"),
	HX_CSTRING("count"),
	HX_CSTRING("update"),
	HX_CSTRING("assignTo"),
	HX_CSTRING("getMask"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("removeAt"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("collideMasklist"),
	HX_CSTRING("collide"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Masklist_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Masklist_obj::__mClass,"__mClass");
};

Class Masklist_obj::__mClass;

void Masklist_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.collision.Masklist"), hx::TCanCast< Masklist_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Masklist_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace collision
