#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Purchases
#include <Purchases.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_event_EventMaster
#include <com/stencyl/event/EventMaster.h>
#endif
#ifndef INCLUDED_com_stencyl_event_StencylEvent
#include <com/stencyl/event/StencylEvent.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_net_SharedObject
#include <flash/net/SharedObject.h>
#endif
#ifndef INCLUDED_flash_net_SharedObjectFlushStatus
#include <flash/net/SharedObjectFlushStatus.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

Void Purchases_obj::__construct()
{
HX_STACK_PUSH("Purchases::new","Purchases.hx",27);
{
}
;
	return null();
}

Purchases_obj::~Purchases_obj() { }

Dynamic Purchases_obj::__CreateEmpty() { return  new Purchases_obj; }
hx::ObjectPtr< Purchases_obj > Purchases_obj::__new()
{  hx::ObjectPtr< Purchases_obj > result = new Purchases_obj();
	result->__construct();
	return result;}

Dynamic Purchases_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Purchases_obj > result = new Purchases_obj();
	result->__construct();
	return result;}

Void Purchases_obj::onProductsVerified( ){
{
		HX_STACK_PUSH("Purchases::onProductsVerified","Purchases.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_LINE(74)
		::haxe::Log_obj::trace(HX_CSTRING("Purchases: Products Verified"),hx::SourceInfo(HX_CSTRING("Purchases.hx"),74,HX_CSTRING("Purchases"),HX_CSTRING("onProductsVerified")));
		HX_STACK_LINE(75)
		::com::stencyl::Engine_obj::events->addPurchaseEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::PURCHASE_PRODUCTS_VERIFIED,HX_CSTRING("")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Purchases_obj,onProductsVerified,(void))

Void Purchases_obj::onRestorePurchases( ){
{
		HX_STACK_PUSH("Purchases::onRestorePurchases","Purchases.hx",67);
		HX_STACK_THIS(this);
		HX_STACK_LINE(68)
		::haxe::Log_obj::trace(HX_CSTRING("Purchases: Restored Purchase"),hx::SourceInfo(HX_CSTRING("Purchases.hx"),68,HX_CSTRING("Purchases"),HX_CSTRING("onRestorePurchases")));
		HX_STACK_LINE(69)
		::com::stencyl::Engine_obj::events->addPurchaseEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::PURCHASE_RESTORE,HX_CSTRING("")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Purchases_obj,onRestorePurchases,(void))

Void Purchases_obj::onCanceledPurchase( ::String productID){
{
		HX_STACK_PUSH("Purchases::onCanceledPurchase","Purchases.hx",61);
		HX_STACK_THIS(this);
		HX_STACK_ARG(productID,"productID");
		HX_STACK_LINE(62)
		::haxe::Log_obj::trace(HX_CSTRING("Purchases: Canceled Purchase"),hx::SourceInfo(HX_CSTRING("Purchases.hx"),62,HX_CSTRING("Purchases"),HX_CSTRING("onCanceledPurchase")));
		HX_STACK_LINE(63)
		::com::stencyl::Engine_obj::events->addPurchaseEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::PURCHASE_CANCEL,productID));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Purchases_obj,onCanceledPurchase,(void))

Void Purchases_obj::onFailedPurchase( ::String productID){
{
		HX_STACK_PUSH("Purchases::onFailedPurchase","Purchases.hx",55);
		HX_STACK_THIS(this);
		HX_STACK_ARG(productID,"productID");
		HX_STACK_LINE(56)
		::haxe::Log_obj::trace(HX_CSTRING("Purchases: Failed Purchase"),hx::SourceInfo(HX_CSTRING("Purchases.hx"),56,HX_CSTRING("Purchases"),HX_CSTRING("onFailedPurchase")));
		HX_STACK_LINE(57)
		::com::stencyl::Engine_obj::events->addPurchaseEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::PURCHASE_FAIL,productID));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Purchases_obj,onFailedPurchase,(void))

Void Purchases_obj::onPurchase( ::String productID){
{
		HX_STACK_PUSH("Purchases::onPurchase","Purchases.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_ARG(productID,"productID");
		HX_STACK_LINE(38)
		::haxe::Log_obj::trace(HX_CSTRING("Purchases: Successful Purchase"),hx::SourceInfo(HX_CSTRING("Purchases.hx"),38,HX_CSTRING("Purchases"),HX_CSTRING("onPurchase")));
		HX_STACK_LINE(39)
		::com::stencyl::Engine_obj::events->addPurchaseEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::PURCHASE_SUCCESS,productID));
		HX_STACK_LINE(41)
		if ((::Purchases_obj::hasBought(productID))){
			HX_STACK_LINE(42)
			::Purchases_obj::items->set(productID,(::Purchases_obj::items->get(productID) + (int)1));
		}
		else{
			HX_STACK_LINE(47)
			::Purchases_obj::items->set(productID,(int)1);
		}
		HX_STACK_LINE(51)
		::Purchases_obj::save();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Purchases_obj,onPurchase,(void))

Void Purchases_obj::onStarted( ){
{
		HX_STACK_PUSH("Purchases::onStarted","Purchases.hx",31);
		HX_STACK_THIS(this);
		HX_STACK_LINE(32)
		::haxe::Log_obj::trace(HX_CSTRING("Purchases: Started"),hx::SourceInfo(HX_CSTRING("Purchases.hx"),32,HX_CSTRING("Purchases"),HX_CSTRING("onStarted")));
		HX_STACK_LINE(33)
		::com::stencyl::Engine_obj::events->addPurchaseEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::PURCHASE_READY,HX_CSTRING("")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Purchases_obj,onStarted,(void))

bool Purchases_obj::initialized;

::haxe::ds::StringMap Purchases_obj::items;

Void Purchases_obj::registerHandle( ){
{
		HX_STACK_PUSH("Purchases::registerHandle","Purchases.hx",84);
		HX_STACK_LINE(84)
		::Purchases_obj::set_event_handle(::Purchases_obj::notifyListeners_dyn());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Purchases_obj,registerHandle,(void))

Void Purchases_obj::notifyListeners( Dynamic inEvent){
{
		HX_STACK_PUSH("Purchases::notifyListeners","Purchases.hx",91);
		HX_STACK_ARG(inEvent,"inEvent");
		HX_STACK_LINE(93)
		::String type = ::Std_obj::string(::Reflect_obj::field(inEvent,HX_CSTRING("type")));		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(94)
		::String data = ::Std_obj::string(::Reflect_obj::field(inEvent,HX_CSTRING("data")));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(96)
		if (((type == HX_CSTRING("started")))){
			HX_STACK_LINE(98)
			::haxe::Log_obj::trace(HX_CSTRING("Purchases: Started"),hx::SourceInfo(HX_CSTRING("Purchases.hx"),98,HX_CSTRING("Purchases"),HX_CSTRING("notifyListeners")));
			HX_STACK_LINE(99)
			::com::stencyl::Engine_obj::events->addPurchaseEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::PURCHASE_READY,data));
		}
		else{
			HX_STACK_LINE(102)
			if (((type == HX_CSTRING("success")))){
				HX_STACK_LINE(104)
				::haxe::Log_obj::trace(HX_CSTRING("Purchases: Successful Purchase"),hx::SourceInfo(HX_CSTRING("Purchases.hx"),104,HX_CSTRING("Purchases"),HX_CSTRING("notifyListeners")));
				HX_STACK_LINE(105)
				::com::stencyl::Engine_obj::events->addPurchaseEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::PURCHASE_SUCCESS,data));
			}
			else{
				HX_STACK_LINE(108)
				if (((type == HX_CSTRING("failed")))){
					HX_STACK_LINE(110)
					::haxe::Log_obj::trace(HX_CSTRING("Purchases: Failed Purchase"),hx::SourceInfo(HX_CSTRING("Purchases.hx"),110,HX_CSTRING("Purchases"),HX_CSTRING("notifyListeners")));
					HX_STACK_LINE(111)
					::com::stencyl::Engine_obj::events->addPurchaseEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::PURCHASE_FAIL,data));
				}
				else{
					HX_STACK_LINE(114)
					if (((type == HX_CSTRING("cancel")))){
						HX_STACK_LINE(116)
						::haxe::Log_obj::trace(HX_CSTRING("Purchases: Canceled Purchase"),hx::SourceInfo(HX_CSTRING("Purchases.hx"),116,HX_CSTRING("Purchases"),HX_CSTRING("notifyListeners")));
						HX_STACK_LINE(117)
						::com::stencyl::Engine_obj::events->addPurchaseEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::PURCHASE_CANCEL,data));
					}
					else{
						HX_STACK_LINE(120)
						if (((type == HX_CSTRING("restore")))){
							HX_STACK_LINE(122)
							::haxe::Log_obj::trace(HX_CSTRING("Purchases: Restored Purchase"),hx::SourceInfo(HX_CSTRING("Purchases.hx"),122,HX_CSTRING("Purchases"),HX_CSTRING("notifyListeners")));
							HX_STACK_LINE(123)
							::com::stencyl::Engine_obj::events->addPurchaseEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::PURCHASE_RESTORE,data));
						}
						else{
							HX_STACK_LINE(126)
							if (((type == HX_CSTRING("productsVerified")))){
								HX_STACK_LINE(128)
								::haxe::Log_obj::trace(HX_CSTRING("Purchases: Products Verified"),hx::SourceInfo(HX_CSTRING("Purchases.hx"),128,HX_CSTRING("Purchases"),HX_CSTRING("notifyListeners")));
								HX_STACK_LINE(129)
								::com::stencyl::Engine_obj::events->addPurchaseEvent(::com::stencyl::event::StencylEvent_obj::__new(::com::stencyl::event::StencylEvent_obj::PURCHASE_PRODUCTS_VERIFIED,data));
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(133)
		if (((type == HX_CSTRING("success")))){
			HX_STACK_LINE(135)
			::String productID = data;		HX_STACK_VAR(productID,"productID");
			HX_STACK_LINE(137)
			if ((::Purchases_obj::hasBought(productID))){
				HX_STACK_LINE(138)
				::Purchases_obj::items->set(productID,(::Purchases_obj::items->get(productID) + (int)1));
			}
			else{
				HX_STACK_LINE(143)
				::Purchases_obj::items->set(productID,(int)1);
			}
			HX_STACK_LINE(147)
			::Purchases_obj::save();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Purchases_obj,notifyListeners,(void))

Void Purchases_obj::initialize( ::String __o_publicKey){
::String publicKey = __o_publicKey.Default(HX_CSTRING(""));
	HX_STACK_PUSH("Purchases::initialize","Purchases.hx",153);
	HX_STACK_ARG(publicKey,"publicKey");
{
		HX_STACK_LINE(155)
		if ((!(::Purchases_obj::initialized))){
			HX_STACK_LINE(157)
			::Purchases_obj::set_event_handle(::Purchases_obj::notifyListeners_dyn());
			HX_STACK_LINE(158)
			::Purchases_obj::load();
			HX_STACK_LINE(160)
			::Purchases_obj::initialized = true;
		}
		HX_STACK_LINE(163)
		::Purchases_obj::purchases_initialize();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Purchases_obj,initialize,(void))

Void Purchases_obj::restorePurchases( ){
{
		HX_STACK_PUSH("Purchases::restorePurchases","Purchases.hx",181);
		HX_STACK_LINE(181)
		::Purchases_obj::purchases_restore();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Purchases_obj,restorePurchases,(void))

Void Purchases_obj::load( ){
{
		HX_STACK_PUSH("Purchases::load","Purchases.hx",197);
		HX_STACK_LINE(197)
		try{
			HX_STACK_LINE(201)
			::flash::net::SharedObject data = ::flash::net::SharedObject_obj::getLocal(HX_CSTRING("in-app-purchases"),null(),null());		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(202)
			::haxe::ds::StringMap saveData = ::Reflect_obj::field(data->data,HX_CSTRING("data"));		HX_STACK_VAR(saveData,"saveData");
			HX_STACK_LINE(204)
			if (((saveData != null()))){
				HX_STACK_LINE(206)
				::Purchases_obj::items = saveData;
				HX_STACK_LINE(207)
				::haxe::Log_obj::trace(::Purchases_obj::items->toString(),hx::SourceInfo(HX_CSTRING("Purchases.hx"),207,HX_CSTRING("Purchases"),HX_CSTRING("load")));
			}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(212)
					::haxe::Log_obj::trace((HX_CSTRING("Error! Failed to load purchases: ") + ::Std_obj::string(e)),hx::SourceInfo(HX_CSTRING("Purchases.hx"),213,HX_CSTRING("Purchases"),HX_CSTRING("load")));
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Purchases_obj,load,(void))

Void Purchases_obj::save( ){
{
		HX_STACK_PUSH("Purchases::save","Purchases.hx",219);
		HX_STACK_LINE(221)
		::flash::net::SharedObject so = ::flash::net::SharedObject_obj::getLocal(HX_CSTRING("in-app-purchases"),null(),null());		HX_STACK_VAR(so,"so");
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			Dynamic o = so->data;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(222)
			if (((o != null()))){
				HX_STACK_LINE(222)
				o->__SetField(HX_CSTRING("data"),::Purchases_obj::items,false);
			}
		}
		HX_STACK_LINE(226)
		::flash::net::SharedObjectFlushStatus flushStatus = null();		HX_STACK_VAR(flushStatus,"flushStatus");
		HX_STACK_LINE(232)
		try{
			HX_STACK_LINE(233)
			flushStatus = so->flush(null());
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(238)
					::haxe::Log_obj::trace((HX_CSTRING("Error! Failed to save purchases: ") + ::Std_obj::string(e)),hx::SourceInfo(HX_CSTRING("Purchases.hx"),239,HX_CSTRING("Purchases"),HX_CSTRING("save")));
				}
			}
		}
		HX_STACK_LINE(242)
		if (((flushStatus != null()))){
			HX_STACK_LINE(243)
			::flash::net::SharedObjectFlushStatus _switch_1 = (flushStatus);
			if (  ( _switch_1==::flash::net::SharedObjectFlushStatus_obj::PENDING)){
				HX_STACK_LINE(246)
				::haxe::Log_obj::trace(HX_CSTRING("Requesting Permission to Save Purchases"),hx::SourceInfo(HX_CSTRING("Purchases.hx"),247,HX_CSTRING("Purchases"),HX_CSTRING("save")));
			}
			else if (  ( _switch_1==::flash::net::SharedObjectFlushStatus_obj::FLUSHED)){
				HX_STACK_LINE(249)
				::haxe::Log_obj::trace(HX_CSTRING("Saved Purchases"),hx::SourceInfo(HX_CSTRING("Purchases.hx"),250,HX_CSTRING("Purchases"),HX_CSTRING("save")));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Purchases_obj,save,(void))

bool Purchases_obj::hasBought( ::String productID){
	HX_STACK_PUSH("Purchases::hasBought","Purchases.hx",258);
	HX_STACK_ARG(productID,"productID");
	HX_STACK_LINE(260)
	if (((::Purchases_obj::items == null()))){
		HX_STACK_LINE(261)
		return false;
	}
	HX_STACK_LINE(265)
	return (bool(::Purchases_obj::items->exists(productID)) && bool((::Purchases_obj::items->get(productID) > (int)0)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Purchases_obj,hasBought,return )

Void Purchases_obj::use( ::String productID){
{
		HX_STACK_PUSH("Purchases::use","Purchases.hx",273);
		HX_STACK_ARG(productID,"productID");
		HX_STACK_LINE(273)
		if ((::Purchases_obj::hasBought(productID))){
			HX_STACK_LINE(277)
			::Purchases_obj::items->set(productID,(::Purchases_obj::items->get(productID) - (int)1));
			HX_STACK_LINE(278)
			::Purchases_obj::save();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Purchases_obj,use,(void))

int Purchases_obj::getQuantity( ::String productID){
	HX_STACK_PUSH("Purchases::getQuantity","Purchases.hx",284);
	HX_STACK_ARG(productID,"productID");
	HX_STACK_LINE(286)
	if ((::Purchases_obj::hasBought(productID))){
		HX_STACK_LINE(287)
		return ::Purchases_obj::items->get(productID);
	}
	HX_STACK_LINE(292)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Purchases_obj,getQuantity,return )

Void Purchases_obj::buy( ::String productID){
{
		HX_STACK_PUSH("Purchases::buy","Purchases.hx",296);
		HX_STACK_ARG(productID,"productID");
		HX_STACK_LINE(296)
		::Purchases_obj::purchases_buy(productID);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Purchases_obj,buy,(void))

Void Purchases_obj::requestProductInfo( Dynamic productIDlist){
{
		HX_STACK_PUSH("Purchases::requestProductInfo","Purchases.hx",312);
		HX_STACK_ARG(productIDlist,"productIDlist");
		HX_STACK_LINE(314)
		::String productIDcommalist = productIDlist->__Field(HX_CSTRING("join"),true)(HX_CSTRING(","));		HX_STACK_VAR(productIDcommalist,"productIDcommalist");
		HX_STACK_LINE(315)
		::Purchases_obj::purchases_requestProductInfo(productIDcommalist);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Purchases_obj,requestProductInfo,(void))

::String Purchases_obj::getTitle( ::String productID){
	HX_STACK_PUSH("Purchases::getTitle","Purchases.hx",322);
	HX_STACK_ARG(productID,"productID");
	HX_STACK_LINE(322)
	return ::Purchases_obj::purchases_title(productID);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Purchases_obj,getTitle,return )

::String Purchases_obj::getDescription( ::String productID){
	HX_STACK_PUSH("Purchases::getDescription","Purchases.hx",331);
	HX_STACK_ARG(productID,"productID");
	HX_STACK_LINE(331)
	return ::Purchases_obj::purchases_desc(productID);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Purchases_obj,getDescription,return )

::String Purchases_obj::getPrice( ::String productID){
	HX_STACK_PUSH("Purchases::getPrice","Purchases.hx",340);
	HX_STACK_ARG(productID,"productID");
	HX_STACK_LINE(340)
	return ::Purchases_obj::purchases_price(productID);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Purchases_obj,getPrice,return )

bool Purchases_obj::canBuy( ){
	HX_STACK_PUSH("Purchases::canBuy","Purchases.hx",349);
	HX_STACK_LINE(349)
	return ::Purchases_obj::purchases_canbuy();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Purchases_obj,canBuy,return )

Void Purchases_obj::release( ){
{
		HX_STACK_PUSH("Purchases::release","Purchases.hx",358);
		HX_STACK_LINE(358)
		::Purchases_obj::purchases_release();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Purchases_obj,release,(void))

Dynamic Purchases_obj::purchases_initialize;

Dynamic Purchases_obj::purchases_restore;

Dynamic Purchases_obj::purchases_buy;

Dynamic Purchases_obj::purchases_canbuy;

Dynamic Purchases_obj::purchases_release;

Dynamic Purchases_obj::purchases_requestProductInfo;

Dynamic Purchases_obj::purchases_title;

Dynamic Purchases_obj::purchases_desc;

Dynamic Purchases_obj::purchases_price;

Dynamic Purchases_obj::set_event_handle;


Purchases_obj::Purchases_obj()
{
}

void Purchases_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Purchases);
	HX_MARK_END_CLASS();
}

void Purchases_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Purchases_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"use") ) { return use_dyn(); }
		if (HX_FIELD_EQ(inName,"buy") ) { return buy_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"save") ) { return save_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { return items; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canBuy") ) { return canBuy_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"release") ) { return release_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTitle") ) { return getTitle_dyn(); }
		if (HX_FIELD_EQ(inName,"getPrice") ) { return getPrice_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasBought") ) { return hasBought_dyn(); }
		if (HX_FIELD_EQ(inName,"onStarted") ) { return onStarted_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"onPurchase") ) { return onPurchase_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"getQuantity") ) { return getQuantity_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"purchases_buy") ) { return purchases_buy; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerHandle") ) { return registerHandle_dyn(); }
		if (HX_FIELD_EQ(inName,"getDescription") ) { return getDescription_dyn(); }
		if (HX_FIELD_EQ(inName,"purchases_desc") ) { return purchases_desc; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"notifyListeners") ) { return notifyListeners_dyn(); }
		if (HX_FIELD_EQ(inName,"purchases_title") ) { return purchases_title; }
		if (HX_FIELD_EQ(inName,"purchases_price") ) { return purchases_price; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"restorePurchases") ) { return restorePurchases_dyn(); }
		if (HX_FIELD_EQ(inName,"purchases_canbuy") ) { return purchases_canbuy; }
		if (HX_FIELD_EQ(inName,"set_event_handle") ) { return set_event_handle; }
		if (HX_FIELD_EQ(inName,"onFailedPurchase") ) { return onFailedPurchase_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"purchases_restore") ) { return purchases_restore; }
		if (HX_FIELD_EQ(inName,"purchases_release") ) { return purchases_release; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"requestProductInfo") ) { return requestProductInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"onProductsVerified") ) { return onProductsVerified_dyn(); }
		if (HX_FIELD_EQ(inName,"onRestorePurchases") ) { return onRestorePurchases_dyn(); }
		if (HX_FIELD_EQ(inName,"onCanceledPurchase") ) { return onCanceledPurchase_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"purchases_initialize") ) { return purchases_initialize; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"purchases_requestProductInfo") ) { return purchases_requestProductInfo; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Purchases_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { items=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"purchases_buy") ) { purchases_buy=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"purchases_desc") ) { purchases_desc=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"purchases_title") ) { purchases_title=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"purchases_price") ) { purchases_price=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"purchases_canbuy") ) { purchases_canbuy=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"set_event_handle") ) { set_event_handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"purchases_restore") ) { purchases_restore=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"purchases_release") ) { purchases_release=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"purchases_initialize") ) { purchases_initialize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"purchases_requestProductInfo") ) { purchases_requestProductInfo=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Purchases_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("initialized"),
	HX_CSTRING("items"),
	HX_CSTRING("registerHandle"),
	HX_CSTRING("notifyListeners"),
	HX_CSTRING("initialize"),
	HX_CSTRING("restorePurchases"),
	HX_CSTRING("load"),
	HX_CSTRING("save"),
	HX_CSTRING("hasBought"),
	HX_CSTRING("use"),
	HX_CSTRING("getQuantity"),
	HX_CSTRING("buy"),
	HX_CSTRING("requestProductInfo"),
	HX_CSTRING("getTitle"),
	HX_CSTRING("getDescription"),
	HX_CSTRING("getPrice"),
	HX_CSTRING("canBuy"),
	HX_CSTRING("release"),
	HX_CSTRING("purchases_initialize"),
	HX_CSTRING("purchases_restore"),
	HX_CSTRING("purchases_buy"),
	HX_CSTRING("purchases_canbuy"),
	HX_CSTRING("purchases_release"),
	HX_CSTRING("purchases_requestProductInfo"),
	HX_CSTRING("purchases_title"),
	HX_CSTRING("purchases_desc"),
	HX_CSTRING("purchases_price"),
	HX_CSTRING("set_event_handle"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onProductsVerified"),
	HX_CSTRING("onRestorePurchases"),
	HX_CSTRING("onCanceledPurchase"),
	HX_CSTRING("onFailedPurchase"),
	HX_CSTRING("onPurchase"),
	HX_CSTRING("onStarted"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Purchases_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Purchases_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(Purchases_obj::items,"items");
	HX_MARK_MEMBER_NAME(Purchases_obj::purchases_initialize,"purchases_initialize");
	HX_MARK_MEMBER_NAME(Purchases_obj::purchases_restore,"purchases_restore");
	HX_MARK_MEMBER_NAME(Purchases_obj::purchases_buy,"purchases_buy");
	HX_MARK_MEMBER_NAME(Purchases_obj::purchases_canbuy,"purchases_canbuy");
	HX_MARK_MEMBER_NAME(Purchases_obj::purchases_release,"purchases_release");
	HX_MARK_MEMBER_NAME(Purchases_obj::purchases_requestProductInfo,"purchases_requestProductInfo");
	HX_MARK_MEMBER_NAME(Purchases_obj::purchases_title,"purchases_title");
	HX_MARK_MEMBER_NAME(Purchases_obj::purchases_desc,"purchases_desc");
	HX_MARK_MEMBER_NAME(Purchases_obj::purchases_price,"purchases_price");
	HX_MARK_MEMBER_NAME(Purchases_obj::set_event_handle,"set_event_handle");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Purchases_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Purchases_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(Purchases_obj::items,"items");
	HX_VISIT_MEMBER_NAME(Purchases_obj::purchases_initialize,"purchases_initialize");
	HX_VISIT_MEMBER_NAME(Purchases_obj::purchases_restore,"purchases_restore");
	HX_VISIT_MEMBER_NAME(Purchases_obj::purchases_buy,"purchases_buy");
	HX_VISIT_MEMBER_NAME(Purchases_obj::purchases_canbuy,"purchases_canbuy");
	HX_VISIT_MEMBER_NAME(Purchases_obj::purchases_release,"purchases_release");
	HX_VISIT_MEMBER_NAME(Purchases_obj::purchases_requestProductInfo,"purchases_requestProductInfo");
	HX_VISIT_MEMBER_NAME(Purchases_obj::purchases_title,"purchases_title");
	HX_VISIT_MEMBER_NAME(Purchases_obj::purchases_desc,"purchases_desc");
	HX_VISIT_MEMBER_NAME(Purchases_obj::purchases_price,"purchases_price");
	HX_VISIT_MEMBER_NAME(Purchases_obj::set_event_handle,"set_event_handle");
};

Class Purchases_obj::__mClass;

void Purchases_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Purchases"), hx::TCanCast< Purchases_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Purchases_obj::__boot()
{
	initialized= false;
	items= ::haxe::ds::StringMap_obj::__new();
	purchases_initialize= ::cpp::Lib_obj::load(HX_CSTRING("purchases"),HX_CSTRING("purchases_initialize"),(int)0);
	purchases_restore= ::cpp::Lib_obj::load(HX_CSTRING("purchases"),HX_CSTRING("purchases_restore"),(int)0);
	purchases_buy= ::cpp::Lib_obj::load(HX_CSTRING("purchases"),HX_CSTRING("purchases_buy"),(int)1);
	purchases_canbuy= ::cpp::Lib_obj::load(HX_CSTRING("purchases"),HX_CSTRING("purchases_canbuy"),(int)0);
	purchases_release= ::cpp::Lib_obj::load(HX_CSTRING("purchases"),HX_CSTRING("purchases_release"),(int)0);
	purchases_requestProductInfo= ::cpp::Lib_obj::load(HX_CSTRING("purchases"),HX_CSTRING("purchases_requestProductInfo"),(int)1);
	purchases_title= ::cpp::Lib_obj::load(HX_CSTRING("purchases"),HX_CSTRING("purchases_title"),(int)1);
	purchases_desc= ::cpp::Lib_obj::load(HX_CSTRING("purchases"),HX_CSTRING("purchases_desc"),(int)1);
	purchases_price= ::cpp::Lib_obj::load(HX_CSTRING("purchases"),HX_CSTRING("purchases_price"),(int)1);
	set_event_handle= ::cpp::Lib_obj::load(HX_CSTRING("purchases"),HX_CSTRING("purchases_set_event_handle"),(int)1);
}

