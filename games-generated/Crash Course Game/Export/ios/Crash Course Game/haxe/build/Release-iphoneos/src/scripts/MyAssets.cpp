#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_stencyl_AssetLoader
#include <com/stencyl/AssetLoader.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif
namespace scripts{

Void MyAssets_obj::__construct()
{
HX_STACK_PUSH("MyAssets::new","scripts/MyAssets.hx",44);
{
}
;
	return null();
}

MyAssets_obj::~MyAssets_obj() { }

Dynamic MyAssets_obj::__CreateEmpty() { return  new MyAssets_obj; }
hx::ObjectPtr< MyAssets_obj > MyAssets_obj::__new()
{  hx::ObjectPtr< MyAssets_obj > result = new MyAssets_obj();
	result->__construct();
	return result;}

Dynamic MyAssets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MyAssets_obj > result = new MyAssets_obj();
	result->__construct();
	return result;}

hx::Object *MyAssets_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::stencyl::AssetLoader_obj)) return operator ::com::stencyl::AssetLoader_obj *();
	return super::__ToInterface(inType);
}

Void MyAssets_obj::loadScenes( ::haxe::ds::IntMap scenesXML){
{
		HX_STACK_PUSH("MyAssets::loadScenes","scripts/MyAssets.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_ARG(scenesXML,"scenesXML");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MyAssets_obj,loadScenes,(void))

Void MyAssets_obj::loadResources( ::haxe::ds::StringMap resourceMap){
{
		HX_STACK_PUSH("MyAssets::loadResources","scripts/MyAssets.hx",48);
		HX_STACK_THIS(this);
		HX_STACK_ARG(resourceMap,"resourceMap");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MyAssets_obj,loadResources,(void))

bool MyAssets_obj::landscape;

bool MyAssets_obj::autorotate;

bool MyAssets_obj::stretchToFit;

bool MyAssets_obj::scaleToFit1;

bool MyAssets_obj::scaleToFit2;

int MyAssets_obj::stageWidth;

int MyAssets_obj::stageHeight;

int MyAssets_obj::initSceneID;

int MyAssets_obj::physicsMode;

Float MyAssets_obj::gameScale;

::String MyAssets_obj::gameImageBase;

bool MyAssets_obj::antialias;

bool MyAssets_obj::adPositionBottom;

::String MyAssets_obj::whirlID;

::String MyAssets_obj::mochiID;

::String MyAssets_obj::cpmstarID;

::String MyAssets_obj::newgroundsID;

::String MyAssets_obj::newgroundsKey;

bool MyAssets_obj::releaseMode;

bool MyAssets_obj::showConsole;

bool MyAssets_obj::debugDraw;

bool MyAssets_obj::always1x;

Float MyAssets_obj::maxScale;

bool MyAssets_obj::disableBackButton;

::String MyAssets_obj::androidPublicKey;


MyAssets_obj::MyAssets_obj()
{
}

void MyAssets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MyAssets);
	HX_MARK_END_CLASS();
}

void MyAssets_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic MyAssets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"whirlID") ) { return whirlID; }
		if (HX_FIELD_EQ(inName,"mochiID") ) { return mochiID; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"always1x") ) { return always1x; }
		if (HX_FIELD_EQ(inName,"maxScale") ) { return maxScale; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"landscape") ) { return landscape; }
		if (HX_FIELD_EQ(inName,"gameScale") ) { return gameScale; }
		if (HX_FIELD_EQ(inName,"antialias") ) { return antialias; }
		if (HX_FIELD_EQ(inName,"cpmstarID") ) { return cpmstarID; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autorotate") ) { return autorotate; }
		if (HX_FIELD_EQ(inName,"stageWidth") ) { return stageWidth; }
		if (HX_FIELD_EQ(inName,"loadScenes") ) { return loadScenes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scaleToFit1") ) { return scaleToFit1; }
		if (HX_FIELD_EQ(inName,"scaleToFit2") ) { return scaleToFit2; }
		if (HX_FIELD_EQ(inName,"stageHeight") ) { return stageHeight; }
		if (HX_FIELD_EQ(inName,"initSceneID") ) { return initSceneID; }
		if (HX_FIELD_EQ(inName,"physicsMode") ) { return physicsMode; }
		if (HX_FIELD_EQ(inName,"releaseMode") ) { return releaseMode; }
		if (HX_FIELD_EQ(inName,"showConsole") ) { return showConsole; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stretchToFit") ) { return stretchToFit; }
		if (HX_FIELD_EQ(inName,"newgroundsID") ) { return newgroundsID; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gameImageBase") ) { return gameImageBase; }
		if (HX_FIELD_EQ(inName,"newgroundsKey") ) { return newgroundsKey; }
		if (HX_FIELD_EQ(inName,"loadResources") ) { return loadResources_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"adPositionBottom") ) { return adPositionBottom; }
		if (HX_FIELD_EQ(inName,"androidPublicKey") ) { return androidPublicKey; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"disableBackButton") ) { return disableBackButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MyAssets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"whirlID") ) { whirlID=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mochiID") ) { mochiID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"always1x") ) { always1x=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScale") ) { maxScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"landscape") ) { landscape=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameScale") ) { gameScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialias") ) { antialias=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cpmstarID") ) { cpmstarID=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { debugDraw=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autorotate") ) { autorotate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageWidth") ) { stageWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scaleToFit1") ) { scaleToFit1=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleToFit2") ) { scaleToFit2=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageHeight") ) { stageHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initSceneID") ) { initSceneID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"physicsMode") ) { physicsMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"releaseMode") ) { releaseMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"showConsole") ) { showConsole=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stretchToFit") ) { stretchToFit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newgroundsID") ) { newgroundsID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gameImageBase") ) { gameImageBase=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newgroundsKey") ) { newgroundsKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"adPositionBottom") ) { adPositionBottom=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"androidPublicKey") ) { androidPublicKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"disableBackButton") ) { disableBackButton=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MyAssets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("landscape"),
	HX_CSTRING("autorotate"),
	HX_CSTRING("stretchToFit"),
	HX_CSTRING("scaleToFit1"),
	HX_CSTRING("scaleToFit2"),
	HX_CSTRING("stageWidth"),
	HX_CSTRING("stageHeight"),
	HX_CSTRING("initSceneID"),
	HX_CSTRING("physicsMode"),
	HX_CSTRING("gameScale"),
	HX_CSTRING("gameImageBase"),
	HX_CSTRING("antialias"),
	HX_CSTRING("adPositionBottom"),
	HX_CSTRING("whirlID"),
	HX_CSTRING("mochiID"),
	HX_CSTRING("cpmstarID"),
	HX_CSTRING("newgroundsID"),
	HX_CSTRING("newgroundsKey"),
	HX_CSTRING("releaseMode"),
	HX_CSTRING("showConsole"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("always1x"),
	HX_CSTRING("maxScale"),
	HX_CSTRING("disableBackButton"),
	HX_CSTRING("androidPublicKey"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("loadScenes"),
	HX_CSTRING("loadResources"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MyAssets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MyAssets_obj::landscape,"landscape");
	HX_MARK_MEMBER_NAME(MyAssets_obj::autorotate,"autorotate");
	HX_MARK_MEMBER_NAME(MyAssets_obj::stretchToFit,"stretchToFit");
	HX_MARK_MEMBER_NAME(MyAssets_obj::scaleToFit1,"scaleToFit1");
	HX_MARK_MEMBER_NAME(MyAssets_obj::scaleToFit2,"scaleToFit2");
	HX_MARK_MEMBER_NAME(MyAssets_obj::stageWidth,"stageWidth");
	HX_MARK_MEMBER_NAME(MyAssets_obj::stageHeight,"stageHeight");
	HX_MARK_MEMBER_NAME(MyAssets_obj::initSceneID,"initSceneID");
	HX_MARK_MEMBER_NAME(MyAssets_obj::physicsMode,"physicsMode");
	HX_MARK_MEMBER_NAME(MyAssets_obj::gameScale,"gameScale");
	HX_MARK_MEMBER_NAME(MyAssets_obj::gameImageBase,"gameImageBase");
	HX_MARK_MEMBER_NAME(MyAssets_obj::antialias,"antialias");
	HX_MARK_MEMBER_NAME(MyAssets_obj::adPositionBottom,"adPositionBottom");
	HX_MARK_MEMBER_NAME(MyAssets_obj::whirlID,"whirlID");
	HX_MARK_MEMBER_NAME(MyAssets_obj::mochiID,"mochiID");
	HX_MARK_MEMBER_NAME(MyAssets_obj::cpmstarID,"cpmstarID");
	HX_MARK_MEMBER_NAME(MyAssets_obj::newgroundsID,"newgroundsID");
	HX_MARK_MEMBER_NAME(MyAssets_obj::newgroundsKey,"newgroundsKey");
	HX_MARK_MEMBER_NAME(MyAssets_obj::releaseMode,"releaseMode");
	HX_MARK_MEMBER_NAME(MyAssets_obj::showConsole,"showConsole");
	HX_MARK_MEMBER_NAME(MyAssets_obj::debugDraw,"debugDraw");
	HX_MARK_MEMBER_NAME(MyAssets_obj::always1x,"always1x");
	HX_MARK_MEMBER_NAME(MyAssets_obj::maxScale,"maxScale");
	HX_MARK_MEMBER_NAME(MyAssets_obj::disableBackButton,"disableBackButton");
	HX_MARK_MEMBER_NAME(MyAssets_obj::androidPublicKey,"androidPublicKey");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MyAssets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::landscape,"landscape");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::autorotate,"autorotate");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::stretchToFit,"stretchToFit");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::scaleToFit1,"scaleToFit1");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::scaleToFit2,"scaleToFit2");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::stageWidth,"stageWidth");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::stageHeight,"stageHeight");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::initSceneID,"initSceneID");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::physicsMode,"physicsMode");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::gameScale,"gameScale");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::gameImageBase,"gameImageBase");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::antialias,"antialias");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::adPositionBottom,"adPositionBottom");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::whirlID,"whirlID");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::mochiID,"mochiID");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::cpmstarID,"cpmstarID");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::newgroundsID,"newgroundsID");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::newgroundsKey,"newgroundsKey");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::releaseMode,"releaseMode");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::showConsole,"showConsole");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::debugDraw,"debugDraw");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::always1x,"always1x");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::maxScale,"maxScale");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::disableBackButton,"disableBackButton");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::androidPublicKey,"androidPublicKey");
};

Class MyAssets_obj::__mClass;

void MyAssets_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.MyAssets"), hx::TCanCast< MyAssets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MyAssets_obj::__boot()
{
	landscape= true;
	autorotate= true;
	stretchToFit= false;
	scaleToFit1= false;
	scaleToFit2= false;
	stageWidth= (int)320;
	stageHeight= (int)480;
	initSceneID= (int)0;
	physicsMode= (int)0;
	gameScale= (int)2;
	gameImageBase= HX_CSTRING("2x");
	antialias= true;
	adPositionBottom= true;
	whirlID= HX_CSTRING("");
	mochiID= HX_CSTRING("");
	cpmstarID= HX_CSTRING("");
	newgroundsID= HX_CSTRING("");
	newgroundsKey= HX_CSTRING("");
	releaseMode= false;
	showConsole= true;
	debugDraw= true;
	always1x= false;
	maxScale= (int)1;
	disableBackButton= false;
	androidPublicKey= HX_CSTRING("");
}

} // end namespace scripts
