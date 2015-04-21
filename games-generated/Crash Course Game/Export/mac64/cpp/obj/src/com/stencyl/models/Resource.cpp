#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Atlas
#include <com/stencyl/models/Atlas.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
namespace com{
namespace stencyl{
namespace models{

Void Resource_obj::__construct(int ID,::String name,int atlasID)
{
HX_STACK_PUSH("Resource::new","com/stencyl/models/Resource.hx",13);
{
	HX_STACK_LINE(14)
	this->ID = ID;
	HX_STACK_LINE(15)
	this->atlasID = atlasID;
	HX_STACK_LINE(16)
	this->name = name;
	HX_STACK_LINE(18)
	this->sID = ((ID + HX_CSTRING(",")) + name);
}
;
	return null();
}

Resource_obj::~Resource_obj() { }

Dynamic Resource_obj::__CreateEmpty() { return  new Resource_obj; }
hx::ObjectPtr< Resource_obj > Resource_obj::__new(int ID,::String name,int atlasID)
{  hx::ObjectPtr< Resource_obj > result = new Resource_obj();
	result->__construct(ID,name,atlasID);
	return result;}

Dynamic Resource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Resource_obj > result = new Resource_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Resource_obj::unloadGraphics( ){
{
		HX_STACK_PUSH("Resource::unloadGraphics","com/stencyl/models/Resource.hx",45);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,unloadGraphics,(void))

Void Resource_obj::loadGraphics( ){
{
		HX_STACK_PUSH("Resource::loadGraphics","com/stencyl/models/Resource.hx",41);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,loadGraphics,(void))

bool Resource_obj::isAtlasActive( ){
	HX_STACK_PUSH("Resource::isAtlasActive","com/stencyl/models/Resource.hx",29);
	HX_STACK_THIS(this);
	HX_STACK_LINE(30)
	::com::stencyl::models::Atlas atlas = ::com::stencyl::models::GameModel_obj::get()->atlases->get(this->atlasID);		HX_STACK_VAR(atlas,"atlas");
	HX_STACK_LINE(32)
	if (((atlas == null()))){
		HX_STACK_LINE(33)
		return false;
	}
	HX_STACK_LINE(37)
	return atlas->active;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,isAtlasActive,return )

::String Resource_obj::toString( ){
	HX_STACK_PUSH("Resource::toString","com/stencyl/models/Resource.hx",22);
	HX_STACK_THIS(this);
	HX_STACK_LINE(22)
	return this->sID;
}


HX_DEFINE_DYNAMIC_FUNC0(Resource_obj,toString,return )


Resource_obj::Resource_obj()
{
}

void Resource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Resource);
	HX_MARK_MEMBER_NAME(sID,"sID");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(atlasID,"atlasID");
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_END_CLASS();
}

void Resource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sID,"sID");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(atlasID,"atlasID");
	HX_VISIT_MEMBER_NAME(ID,"ID");
}

Dynamic Resource_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sID") ) { return sID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"atlasID") ) { return atlasID; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return loadGraphics_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isAtlasActive") ) { return isAtlasActive_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unloadGraphics") ) { return unloadGraphics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Resource_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"sID") ) { sID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"atlasID") ) { atlasID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Resource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sID"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("atlasID"));
	outFields->push(HX_CSTRING("ID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("unloadGraphics"),
	HX_CSTRING("loadGraphics"),
	HX_CSTRING("isAtlasActive"),
	HX_CSTRING("toString"),
	HX_CSTRING("sID"),
	HX_CSTRING("name"),
	HX_CSTRING("atlasID"),
	HX_CSTRING("ID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Resource_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Resource_obj::__mClass,"__mClass");
};

Class Resource_obj::__mClass;

void Resource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.Resource"), hx::TCanCast< Resource_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Resource_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
