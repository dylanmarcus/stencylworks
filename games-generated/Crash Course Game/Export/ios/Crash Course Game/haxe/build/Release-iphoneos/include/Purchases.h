#ifndef INCLUDED_Purchases
#define INCLUDED_Purchases

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(Purchases)
HX_DECLARE_CLASS2(haxe,ds,StringMap)


class HXCPP_CLASS_ATTRIBUTES  Purchases_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Purchases_obj OBJ_;
		Purchases_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Purchases_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Purchases_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Purchases"); }

		virtual Void onProductsVerified( );
		Dynamic onProductsVerified_dyn();

		virtual Void onRestorePurchases( );
		Dynamic onRestorePurchases_dyn();

		virtual Void onCanceledPurchase( ::String productID);
		Dynamic onCanceledPurchase_dyn();

		virtual Void onFailedPurchase( ::String productID);
		Dynamic onFailedPurchase_dyn();

		virtual Void onPurchase( ::String productID);
		Dynamic onPurchase_dyn();

		virtual Void onStarted( );
		Dynamic onStarted_dyn();

		static bool initialized;
		static ::haxe::ds::StringMap items;
		static Void registerHandle( );
		static Dynamic registerHandle_dyn();

		static Void notifyListeners( Dynamic inEvent);
		static Dynamic notifyListeners_dyn();

		static Void initialize( ::String publicKey);
		static Dynamic initialize_dyn();

		static Void restorePurchases( );
		static Dynamic restorePurchases_dyn();

		static Void load( );
		static Dynamic load_dyn();

		static Void save( );
		static Dynamic save_dyn();

		static bool hasBought( ::String productID);
		static Dynamic hasBought_dyn();

		static Void use( ::String productID);
		static Dynamic use_dyn();

		static int getQuantity( ::String productID);
		static Dynamic getQuantity_dyn();

		static Void buy( ::String productID);
		static Dynamic buy_dyn();

		static Void requestProductInfo( Dynamic productIDlist);
		static Dynamic requestProductInfo_dyn();

		static ::String getTitle( ::String productID);
		static Dynamic getTitle_dyn();

		static ::String getDescription( ::String productID);
		static Dynamic getDescription_dyn();

		static ::String getPrice( ::String productID);
		static Dynamic getPrice_dyn();

		static bool canBuy( );
		static Dynamic canBuy_dyn();

		static Void release( );
		static Dynamic release_dyn();

		static Dynamic purchases_initialize;
		static Dynamic &purchases_initialize_dyn() { return purchases_initialize;}
		static Dynamic purchases_restore;
		static Dynamic &purchases_restore_dyn() { return purchases_restore;}
		static Dynamic purchases_buy;
		static Dynamic &purchases_buy_dyn() { return purchases_buy;}
		static Dynamic purchases_canbuy;
		static Dynamic &purchases_canbuy_dyn() { return purchases_canbuy;}
		static Dynamic purchases_release;
		static Dynamic &purchases_release_dyn() { return purchases_release;}
		static Dynamic purchases_requestProductInfo;
		static Dynamic &purchases_requestProductInfo_dyn() { return purchases_requestProductInfo;}
		static Dynamic purchases_title;
		static Dynamic &purchases_title_dyn() { return purchases_title;}
		static Dynamic purchases_desc;
		static Dynamic &purchases_desc_dyn() { return purchases_desc;}
		static Dynamic purchases_price;
		static Dynamic &purchases_price_dyn() { return purchases_price;}
		static Dynamic set_event_handle;
		static Dynamic &set_event_handle_dyn() { return set_event_handle;}
};


#endif /* INCLUDED_Purchases */ 
