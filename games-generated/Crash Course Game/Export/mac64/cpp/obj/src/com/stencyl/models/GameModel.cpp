#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2PolygonShape
#include <box2D/collision/shapes/B2PolygonShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_com_stencyl_Data
#include <com/stencyl/Data.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_io_AbstractReader
#include <com/stencyl/io/AbstractReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_SpriteReader
#include <com/stencyl/io/SpriteReader.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Atlas
#include <com/stencyl/models/Atlas.h>
#endif
#ifndef INCLUDED_com_stencyl_models_CollisionGroupDef
#include <com/stencyl/models/CollisionGroupDef.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GroupDef
#include <com/stencyl/models/GroupDef.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Scene
#include <com/stencyl/models/Scene.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace stencyl{
namespace models{

Void GameModel_obj::__construct(::haxe::xml::Fast xml)
{
HX_STACK_PUSH("GameModel::new","com/stencyl/models/GameModel.hx",53);
{
	HX_STACK_LINE(54)
	this->width = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("width")));
	HX_STACK_LINE(55)
	this->height = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("height")));
	HX_STACK_LINE(56)
	this->actualWidth = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("awidth")));
	HX_STACK_LINE(57)
	this->actualHeight = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("aheight")));
	HX_STACK_LINE(58)
	this->scale = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("scale")));
	HX_STACK_LINE(59)
	this->defaultSceneID = (int)0;
	HX_STACK_LINE(61)
	try{
		HX_STACK_LINE(62)
		this->defaultSceneID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("defaultSceneID")));
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::String >() ){
			HX_STACK_BEGIN_CATCH
			::String e = __e;{
			}
		}
		else throw(__e);
	}
	HX_STACK_LINE(72)
	this->shapes = this->readShapes(xml->node->resolve(HX_CSTRING("collisions"))->get_elements());
	HX_STACK_LINE(73)
	this->atlases = this->readAtlases(xml->node->resolve(HX_CSTRING("atlases"))->get_elements());
	HX_STACK_LINE(75)
	this->groups = this->readGroups(xml->node->resolve(HX_CSTRING("groups"))->get_elements());
	HX_STACK_LINE(76)
	this->groups->push(::com::stencyl::models::GroupDef_obj::__new(::com::stencyl::models::GameModel_obj::REGION_ID,HX_CSTRING("Regions")));
	HX_STACK_LINE(77)
	this->groups->push(::com::stencyl::models::GroupDef_obj::__new(::com::stencyl::models::GameModel_obj::PLAYER_ID,HX_CSTRING("Players")));
	HX_STACK_LINE(78)
	this->groups->push(::com::stencyl::models::GroupDef_obj::__new(::com::stencyl::models::GameModel_obj::TERRAIN_ID,HX_CSTRING("Terrain")));
	HX_STACK_LINE(79)
	this->groups->push(::com::stencyl::models::GroupDef_obj::__new(::com::stencyl::models::GameModel_obj::DOODAD_ID,HX_CSTRING("Doodads")));
	HX_STACK_LINE(80)
	this->groups->push(::com::stencyl::models::GroupDef_obj::__new(::com::stencyl::models::GameModel_obj::ACTOR_ID,HX_CSTRING("Actors")));
	HX_STACK_LINE(84)
	this->groupsCollidesWith = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(86)
	this->collisionGroups = this->readCollisionGroups(xml->node->resolve(HX_CSTRING("cgroups"))->get_elements());
	HX_STACK_LINE(87)
	this->collisionGroups->push(::com::stencyl::models::CollisionGroupDef_obj::__new(::com::stencyl::models::GameModel_obj::PLAYER_ID,::com::stencyl::models::GameModel_obj::TERRAIN_ID));
	HX_STACK_LINE(88)
	this->collisionGroups->push(::com::stencyl::models::CollisionGroupDef_obj::__new(::com::stencyl::models::GameModel_obj::ACTOR_ID,::com::stencyl::models::GameModel_obj::TERRAIN_ID));
	HX_STACK_LINE(90)
	::com::stencyl::models::GameModel_obj::collisionMap = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(92)
	int groupCount = (int)0;		HX_STACK_VAR(groupCount,"groupCount");
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->groups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(94)
		while(((_g < _g1->length))){
			HX_STACK_LINE(94)
			::com::stencyl::models::GroupDef g = _g1->__get(_g).StaticCast< ::com::stencyl::models::GroupDef >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(94)
			++(_g);
			HX_STACK_LINE(96)
			groupCount = ::Std_obj::_int(::Math_obj::max(::Std_obj::_int(g->ID),groupCount));
		}
	}
	HX_STACK_LINE(99)
	(groupCount)++;
	HX_STACK_LINE(101)
	{
		HX_STACK_LINE(101)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(101)
		while(((_g < groupCount))){
			HX_STACK_LINE(101)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(103)
			::com::stencyl::models::GameModel_obj::collisionMap->push(Array_obj< bool >::__new());
			HX_STACK_LINE(105)
			{
				HX_STACK_LINE(105)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(105)
				while(((_g1 < groupCount))){
					HX_STACK_LINE(105)
					int j = (_g1)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(107)
					::com::stencyl::models::GameModel_obj::collisionMap->__get(i).StaticCast< Array< bool > >()->push(false);
				}
			}
		}
	}
	HX_STACK_LINE(111)
	if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
		HX_STACK_LINE(113)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->groups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(113)
		while(((_g < _g1->length))){
			HX_STACK_LINE(113)
			::com::stencyl::models::GroupDef g = _g1->__get(_g).StaticCast< ::com::stencyl::models::GroupDef >();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(113)
			++(_g);
			HX_STACK_LINE(115)
			this->collisionGroups->push(::com::stencyl::models::CollisionGroupDef_obj::__new(g->ID,::com::stencyl::models::GameModel_obj::REGION_ID));
		}
	}
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(119)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->collisionGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(119)
		while(((_g < _g1->length))){
			HX_STACK_LINE(119)
			::com::stencyl::models::CollisionGroupDef cg = _g1->__get(_g).StaticCast< ::com::stencyl::models::CollisionGroupDef >();		HX_STACK_VAR(cg,"cg");
			HX_STACK_LINE(119)
			++(_g);
			HX_STACK_LINE(121)
			int g1 = cg->group1;		HX_STACK_VAR(g1,"g1");
			HX_STACK_LINE(122)
			int g2 = cg->group2;		HX_STACK_VAR(g2,"g2");
			HX_STACK_LINE(124)
			if ((!(this->groupsCollidesWith->exists(g1)))){
				HX_STACK_LINE(125)
				this->groupsCollidesWith->set(g1,Array_obj< int >::__new());
			}
			HX_STACK_LINE(129)
			if ((!(this->groupsCollidesWith->exists(g2)))){
				HX_STACK_LINE(130)
				this->groupsCollidesWith->set(g2,Array_obj< int >::__new());
			}
			HX_STACK_LINE(134)
			if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
				HX_STACK_LINE(136)
				::com::stencyl::models::GameModel_obj::collisionMap->__get(g1).StaticCast< Array< bool > >()[g2] = true;
				HX_STACK_LINE(137)
				::com::stencyl::models::GameModel_obj::collisionMap->__get(g2).StaticCast< Array< bool > >()[g1] = true;
			}
			HX_STACK_LINE(140)
			this->groupsCollidesWith->get(g1)->__Field(HX_CSTRING("push"),true)(g2);
			HX_STACK_LINE(141)
			this->groupsCollidesWith->get(g2)->__Field(HX_CSTRING("push"),true)(g1);
		}
	}
	HX_STACK_LINE(149)
	this->gameAttributes = ::com::stencyl::models::GameModel_obj::readGameAttributes(xml->node->resolve(HX_CSTRING("attributes"))->get_elements());
	HX_STACK_LINE(151)
	::com::stencyl::Data_obj::get()->gameXML = null();
}
;
	return null();
}

GameModel_obj::~GameModel_obj() { }

Dynamic GameModel_obj::__CreateEmpty() { return  new GameModel_obj; }
hx::ObjectPtr< GameModel_obj > GameModel_obj::__new(::haxe::xml::Fast xml)
{  hx::ObjectPtr< GameModel_obj > result = new GameModel_obj();
	result->__construct(xml);
	return result;}

Dynamic GameModel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameModel_obj > result = new GameModel_obj();
	result->__construct(inArgs[0]);
	return result;}

Array< ::Dynamic > GameModel_obj::readCollisionGroups( Dynamic list){
	HX_STACK_PUSH("GameModel::readCollisionGroups","com/stencyl/models/GameModel.hx",240);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(241)
	Array< ::Dynamic > map = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(243)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		map->push(::com::stencyl::models::CollisionGroupDef_obj::__new(::Std_obj::parseInt(e->att->resolve(HX_CSTRING("g1"))),::Std_obj::parseInt(e->att->resolve(HX_CSTRING("g2")))));
	}
	HX_STACK_LINE(248)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(GameModel_obj,readCollisionGroups,return )

Array< ::Dynamic > GameModel_obj::readGroups( Dynamic list){
	HX_STACK_PUSH("GameModel::readGroups","com/stencyl/models/GameModel.hx",228);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(229)
	Array< ::Dynamic > map = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(231)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		map->push(::com::stencyl::models::GroupDef_obj::__new(::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id"))),e->att->resolve(HX_CSTRING("name"))));
	}
	HX_STACK_LINE(236)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(GameModel_obj,readGroups,return )

::haxe::ds::IntMap GameModel_obj::readAtlases( Dynamic list){
	HX_STACK_PUSH("GameModel::readAtlases","com/stencyl/models/GameModel.hx",205);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(206)
	::haxe::ds::IntMap map = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(208)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(210)
			Dynamic ID = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(ID,"ID");
			HX_STACK_LINE(211)
			::String name = e->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(212)
			Array< ::String > mems = e->att->resolve(HX_CSTRING("members")).split(HX_CSTRING(","));		HX_STACK_VAR(mems,"mems");
			HX_STACK_LINE(213)
			bool active = (e->att->resolve(HX_CSTRING("start")) == HX_CSTRING("true"));		HX_STACK_VAR(active,"active");
			HX_STACK_LINE(214)
			Array< int > members = Array_obj< int >::__new();		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(216)
			{
				HX_STACK_LINE(216)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(216)
				while(((_g < mems->length))){
					HX_STACK_LINE(216)
					::String n = mems->__get(_g);		HX_STACK_VAR(n,"n");
					HX_STACK_LINE(216)
					++(_g);
					HX_STACK_LINE(218)
					members->push(::Std_obj::parseInt(n));
				}
			}
			HX_STACK_LINE(221)
			map->set(ID,::com::stencyl::models::Atlas_obj::__new(ID,name,members,active));
		}
;
	}
	HX_STACK_LINE(224)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(GameModel_obj,readAtlases,return )

::haxe::ds::IntMap GameModel_obj::readShapes( Dynamic list){
	HX_STACK_PUSH("GameModel::readShapes","com/stencyl/models/GameModel.hx",177);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(178)
	::haxe::ds::IntMap map = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(180)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(182)
			::String s = e->att->resolve(HX_CSTRING("pts"));		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(183)
			Array< ::String > pts = s.split(HX_CSTRING("#"));		HX_STACK_VAR(pts,"pts");
			HX_STACK_LINE(184)
			Array< ::Dynamic > vertices = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(vertices,"vertices");
			HX_STACK_LINE(186)
			{
				HX_STACK_LINE(186)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(186)
				while(((_g < pts->length))){
					HX_STACK_LINE(186)
					::String pt = pts->__get(_g);		HX_STACK_VAR(pt,"pt");
					HX_STACK_LINE(186)
					++(_g);
					HX_STACK_LINE(188)
					Array< ::String > ptArray = pt.split(HX_CSTRING(","));		HX_STACK_VAR(ptArray,"ptArray");
					HX_STACK_LINE(189)
					Float px = ::Std_obj::parseFloat(ptArray->__get((int)0));		HX_STACK_VAR(px,"px");
					HX_STACK_LINE(190)
					Float py = ::Std_obj::parseFloat(ptArray->__get((int)1));		HX_STACK_VAR(py,"py");
					HX_STACK_LINE(191)
					vertices->push(::box2D::common::math::B2Vec2_obj::__new((px * 3.1),(py * 3.1)));
				}
			}
			HX_STACK_LINE(194)
			::com::stencyl::io::SpriteReader_obj::EnsureCorrectVertexDirection(vertices);
			HX_STACK_LINE(196)
			::box2D::collision::shapes::B2PolygonShape p = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(197)
			p->setAsArray(vertices,vertices->length);
			HX_STACK_LINE(198)
			map->set(::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id"))),p);
		}
;
	}
	HX_STACK_LINE(201)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(GameModel_obj,readShapes,return )

::haxe::ds::IntMap GameModel_obj::readScenes( ::haxe::xml::Fast list){
	HX_STACK_PUSH("GameModel::readScenes","com/stencyl/models/GameModel.hx",160);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(161)
	::haxe::ds::IntMap map = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(163)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list->get_elements());  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(165)
			Dynamic sceneID = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(sceneID,"sceneID");
			HX_STACK_LINE(167)
			map->set(::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id"))),::com::stencyl::models::Scene_obj::__new(sceneID,e->att->resolve(HX_CSTRING("name"))));
		}
;
	}
	HX_STACK_LINE(170)
	::com::stencyl::Data_obj::get()->scenesXML = null();
	HX_STACK_LINE(171)
	::com::stencyl::Data_obj::get()->sceneListXML = null();
	HX_STACK_LINE(173)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(GameModel_obj,readScenes,return )

Void GameModel_obj::loadScenes( ){
{
		HX_STACK_PUSH("GameModel::loadScenes","com/stencyl/models/GameModel.hx",155);
		HX_STACK_THIS(this);
		HX_STACK_LINE(155)
		this->scenes = this->readScenes(::com::stencyl::Data_obj::get()->sceneListXML);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameModel_obj,loadScenes,(void))

::com::stencyl::models::GameModel GameModel_obj::instance;

Array< ::Dynamic > GameModel_obj::collisionMap;

int GameModel_obj::INHERIT_ID;

int GameModel_obj::REGION_ID;

int GameModel_obj::PLAYER_ID;

int GameModel_obj::TERRAIN_ID;

int GameModel_obj::DOODAD_ID;

int GameModel_obj::ACTOR_ID;

::com::stencyl::models::GameModel GameModel_obj::get( ){
	HX_STACK_PUSH("GameModel::get","com/stencyl/models/GameModel.hx",43);
	HX_STACK_LINE(44)
	if (((::com::stencyl::models::GameModel_obj::instance == null()))){
		HX_STACK_LINE(45)
		::com::stencyl::models::GameModel_obj::instance = ::com::stencyl::models::GameModel_obj::__new(::com::stencyl::Data_obj::get()->gameXML);
	}
	HX_STACK_LINE(49)
	return ::com::stencyl::models::GameModel_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GameModel_obj,get,return )

::haxe::ds::StringMap GameModel_obj::readGameAttributes( Dynamic list){
	HX_STACK_PUSH("GameModel::readGameAttributes","com/stencyl/models/GameModel.hx",252);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(253)
	::haxe::ds::StringMap map = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(255)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(257)
			::String type = e->get_name();		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(259)
			if (((type == HX_CSTRING("number")))){
				HX_STACK_LINE(261)
				Float num = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("value")));		HX_STACK_VAR(num,"num");
				HX_STACK_LINE(262)
				map->set(e->att->resolve(HX_CSTRING("name")),num);
			}
			else{
				HX_STACK_LINE(265)
				if (((type == HX_CSTRING("text")))){
					HX_STACK_LINE(267)
					::String str = e->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(str,"str");
					HX_STACK_LINE(268)
					map->set(e->att->resolve(HX_CSTRING("name")),str);
				}
				else{
					HX_STACK_LINE(271)
					if (((type == HX_CSTRING("bool")))){
						HX_STACK_LINE(273)
						bool _bool = ::com::stencyl::utils::Utils_obj::toBoolean(e->att->resolve(HX_CSTRING("value")));		HX_STACK_VAR(_bool,"bool");
						HX_STACK_LINE(274)
						map->set(e->att->resolve(HX_CSTRING("name")),_bool);
					}
					else{
						HX_STACK_LINE(277)
						if (((type == HX_CSTRING("list")))){
							HX_STACK_LINE(279)
							Dynamic value = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(281)
							for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(e->get_elements());  __it->hasNext(); ){
								::haxe::xml::Fast item = __it->next();
								{
									HX_STACK_LINE(283)
									int order = ::Std_obj::parseInt(item->att->resolve(HX_CSTRING("order")));		HX_STACK_VAR(order,"order");
									HX_STACK_LINE(284)
									hx::IndexRef((value).mPtr,order) = item->att->resolve(HX_CSTRING("value"));
								}
;
							}
							HX_STACK_LINE(287)
							map->set(e->att->resolve(HX_CSTRING("name")),value);
						}
					}
				}
			}
		}
;
	}
	HX_STACK_LINE(291)
	return map;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameModel_obj,readGameAttributes,return )


GameModel_obj::GameModel_obj()
{
}

void GameModel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameModel);
	HX_MARK_MEMBER_NAME(scenes,"scenes");
	HX_MARK_MEMBER_NAME(atlases,"atlases");
	HX_MARK_MEMBER_NAME(shapes,"shapes");
	HX_MARK_MEMBER_NAME(gameAttributes,"gameAttributes");
	HX_MARK_MEMBER_NAME(collisionGroups,"collisionGroups");
	HX_MARK_MEMBER_NAME(groupsCollidesWith,"groupsCollidesWith");
	HX_MARK_MEMBER_NAME(groups,"groups");
	HX_MARK_MEMBER_NAME(defaultSceneID,"defaultSceneID");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(actualHeight,"actualHeight");
	HX_MARK_MEMBER_NAME(actualWidth,"actualWidth");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void GameModel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scenes,"scenes");
	HX_VISIT_MEMBER_NAME(atlases,"atlases");
	HX_VISIT_MEMBER_NAME(shapes,"shapes");
	HX_VISIT_MEMBER_NAME(gameAttributes,"gameAttributes");
	HX_VISIT_MEMBER_NAME(collisionGroups,"collisionGroups");
	HX_VISIT_MEMBER_NAME(groupsCollidesWith,"groupsCollidesWith");
	HX_VISIT_MEMBER_NAME(groups,"groups");
	HX_VISIT_MEMBER_NAME(defaultSceneID,"defaultSceneID");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(actualHeight,"actualHeight");
	HX_VISIT_MEMBER_NAME(actualWidth,"actualWidth");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
}

Dynamic GameModel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scenes") ) { return scenes; }
		if (HX_FIELD_EQ(inName,"shapes") ) { return shapes; }
		if (HX_FIELD_EQ(inName,"groups") ) { return groups; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"atlases") ) { return atlases; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		if (HX_FIELD_EQ(inName,"ACTOR_ID") ) { return ACTOR_ID; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"REGION_ID") ) { return REGION_ID; }
		if (HX_FIELD_EQ(inName,"PLAYER_ID") ) { return PLAYER_ID; }
		if (HX_FIELD_EQ(inName,"DOODAD_ID") ) { return DOODAD_ID; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"INHERIT_ID") ) { return INHERIT_ID; }
		if (HX_FIELD_EQ(inName,"TERRAIN_ID") ) { return TERRAIN_ID; }
		if (HX_FIELD_EQ(inName,"readGroups") ) { return readGroups_dyn(); }
		if (HX_FIELD_EQ(inName,"readShapes") ) { return readShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"readScenes") ) { return readScenes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadScenes") ) { return loadScenes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readAtlases") ) { return readAtlases_dyn(); }
		if (HX_FIELD_EQ(inName,"actualWidth") ) { return actualWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"collisionMap") ) { return collisionMap; }
		if (HX_FIELD_EQ(inName,"actualHeight") ) { return actualHeight; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gameAttributes") ) { return gameAttributes; }
		if (HX_FIELD_EQ(inName,"defaultSceneID") ) { return defaultSceneID; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collisionGroups") ) { return collisionGroups; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"readGameAttributes") ) { return readGameAttributes_dyn(); }
		if (HX_FIELD_EQ(inName,"groupsCollidesWith") ) { return groupsCollidesWith; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"readCollisionGroups") ) { return readCollisionGroups_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameModel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scenes") ) { scenes=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"groups") ) { groups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"atlases") ) { atlases=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::com::stencyl::models::GameModel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTOR_ID") ) { ACTOR_ID=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"REGION_ID") ) { REGION_ID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PLAYER_ID") ) { PLAYER_ID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DOODAD_ID") ) { DOODAD_ID=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"INHERIT_ID") ) { INHERIT_ID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TERRAIN_ID") ) { TERRAIN_ID=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"actualWidth") ) { actualWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"collisionMap") ) { collisionMap=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actualHeight") ) { actualHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gameAttributes") ) { gameAttributes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultSceneID") ) { defaultSceneID=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collisionGroups") ) { collisionGroups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"groupsCollidesWith") ) { groupsCollidesWith=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameModel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scenes"));
	outFields->push(HX_CSTRING("atlases"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("gameAttributes"));
	outFields->push(HX_CSTRING("collisionGroups"));
	outFields->push(HX_CSTRING("groupsCollidesWith"));
	outFields->push(HX_CSTRING("groups"));
	outFields->push(HX_CSTRING("defaultSceneID"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("actualHeight"));
	outFields->push(HX_CSTRING("actualWidth"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("instance"),
	HX_CSTRING("collisionMap"),
	HX_CSTRING("INHERIT_ID"),
	HX_CSTRING("REGION_ID"),
	HX_CSTRING("PLAYER_ID"),
	HX_CSTRING("TERRAIN_ID"),
	HX_CSTRING("DOODAD_ID"),
	HX_CSTRING("ACTOR_ID"),
	HX_CSTRING("get"),
	HX_CSTRING("readGameAttributes"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("readCollisionGroups"),
	HX_CSTRING("readGroups"),
	HX_CSTRING("readAtlases"),
	HX_CSTRING("readShapes"),
	HX_CSTRING("readScenes"),
	HX_CSTRING("loadScenes"),
	HX_CSTRING("scenes"),
	HX_CSTRING("atlases"),
	HX_CSTRING("shapes"),
	HX_CSTRING("gameAttributes"),
	HX_CSTRING("collisionGroups"),
	HX_CSTRING("groupsCollidesWith"),
	HX_CSTRING("groups"),
	HX_CSTRING("defaultSceneID"),
	HX_CSTRING("scale"),
	HX_CSTRING("actualHeight"),
	HX_CSTRING("actualWidth"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameModel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameModel_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(GameModel_obj::collisionMap,"collisionMap");
	HX_MARK_MEMBER_NAME(GameModel_obj::INHERIT_ID,"INHERIT_ID");
	HX_MARK_MEMBER_NAME(GameModel_obj::REGION_ID,"REGION_ID");
	HX_MARK_MEMBER_NAME(GameModel_obj::PLAYER_ID,"PLAYER_ID");
	HX_MARK_MEMBER_NAME(GameModel_obj::TERRAIN_ID,"TERRAIN_ID");
	HX_MARK_MEMBER_NAME(GameModel_obj::DOODAD_ID,"DOODAD_ID");
	HX_MARK_MEMBER_NAME(GameModel_obj::ACTOR_ID,"ACTOR_ID");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameModel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameModel_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(GameModel_obj::collisionMap,"collisionMap");
	HX_VISIT_MEMBER_NAME(GameModel_obj::INHERIT_ID,"INHERIT_ID");
	HX_VISIT_MEMBER_NAME(GameModel_obj::REGION_ID,"REGION_ID");
	HX_VISIT_MEMBER_NAME(GameModel_obj::PLAYER_ID,"PLAYER_ID");
	HX_VISIT_MEMBER_NAME(GameModel_obj::TERRAIN_ID,"TERRAIN_ID");
	HX_VISIT_MEMBER_NAME(GameModel_obj::DOODAD_ID,"DOODAD_ID");
	HX_VISIT_MEMBER_NAME(GameModel_obj::ACTOR_ID,"ACTOR_ID");
};

Class GameModel_obj::__mClass;

void GameModel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.GameModel"), hx::TCanCast< GameModel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GameModel_obj::__boot()
{
	INHERIT_ID= (int)-1000;
	REGION_ID= (int)-2;
	PLAYER_ID= (int)0;
	TERRAIN_ID= (int)1;
	DOODAD_ID= (int)2;
	ACTOR_ID= (int)3;
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
