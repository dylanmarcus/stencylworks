#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2CircleShape
#include <box2D/collision/shapes/B2CircleShape.h>
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
#ifndef INCLUDED_box2D_dynamics_joints_B2DistanceJointDef
#include <box2D/dynamics/joints/B2DistanceJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2JointDef
#include <box2D/dynamics/joints/B2JointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2LineJointDef
#include <box2D/dynamics/joints/B2LineJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2RevoluteJointDef
#include <box2D/dynamics/joints/B2RevoluteJointDef.h>
#endif
#ifndef INCLUDED_com_stencyl_Data
#include <com/stencyl/Data.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_BehaviorInstance
#include <com/stencyl/behavior/BehaviorInstance.h>
#endif
#ifndef INCLUDED_com_stencyl_io_AbstractReader
#include <com/stencyl/io/AbstractReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_ActorTypeReader
#include <com/stencyl/io/ActorTypeReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_BackgroundReader
#include <com/stencyl/io/BackgroundReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_SpriteReader
#include <com/stencyl/io/SpriteReader.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Background
#include <com/stencyl/models/Background.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Scene
#include <com/stencyl/models/Scene.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_com_stencyl_models_background_ColorBackground
#include <com/stencyl/models/background/ColorBackground.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Grid
#include <com/stencyl/models/collision/Grid.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Hitbox
#include <com/stencyl/models/collision/Hitbox.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Mask
#include <com/stencyl/models/collision/Mask.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_ActorInstance
#include <com/stencyl/models/scene/ActorInstance.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_RegionDef
#include <com/stencyl/models/scene/RegionDef.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_TerrainDef
#include <com/stencyl/models/scene/TerrainDef.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Tile
#include <com/stencyl/models/scene/Tile.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_TileLayer
#include <com/stencyl/models/scene/TileLayer.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Tileset
#include <com/stencyl/models/scene/Tileset.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Wireframe
#include <com/stencyl/models/scene/Wireframe.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_PolyDecompBayazit
#include <com/stencyl/utils/PolyDecompBayazit.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Collection
#include <de/polygonal/ds/Collection.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Hashable
#include <de/polygonal/ds/Hashable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntHashTable
#include <de/polygonal/ds/IntHashTable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntIntHashTable
#include <de/polygonal/ds/IntIntHashTable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Map
#include <de/polygonal/ds/Map.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
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
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace com{
namespace stencyl{
namespace models{

Void Scene_obj::__construct(int ID,::String name)
{
HX_STACK_PUSH("Scene::new","com/stencyl/models/Scene.hx",77);
{
	HX_STACK_LINE(78)
	this->ID = ID;
	HX_STACK_LINE(79)
	this->name = name;
}
;
	return null();
}

Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new(int ID,::String name)
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct(ID,name);
	return result;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int Scene_obj::getID( ){
	HX_STACK_PUSH("Scene::getID","com/stencyl/models/Scene.hx",1006);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1006)
	return this->ID;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getID,return )

::com::stencyl::models::scene::ActorInstance Scene_obj::readActorInstance( ::haxe::xml::Fast xml){
	HX_STACK_PUSH("Scene::readActorInstance","com/stencyl/models/Scene.hx",935);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xml,"xml");
	HX_STACK_LINE(936)
	int elementID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("aid")));		HX_STACK_VAR(elementID,"elementID");
	HX_STACK_LINE(937)
	int x = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("x")));		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(938)
	int y = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("y")));		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(940)
	Float scaleX = (int)1;		HX_STACK_VAR(scaleX,"scaleX");
	HX_STACK_LINE(941)
	Float scaleY = (int)1;		HX_STACK_VAR(scaleY,"scaleY");
	HX_STACK_LINE(943)
	try{
		HX_STACK_LINE(945)
		scaleX = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("sx")));
		HX_STACK_LINE(946)
		scaleY = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("sy")));
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::String >() ){
			HX_STACK_BEGIN_CATCH
			::String e = __e;{
			}
		}
		else throw(__e);
	}
	HX_STACK_LINE(953)
	int layerID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("z")));		HX_STACK_VAR(layerID,"layerID");
	HX_STACK_LINE(954)
	int angle = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("a")));		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(955)
	int groupID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("group")));		HX_STACK_VAR(groupID,"groupID");
	HX_STACK_LINE(956)
	int actorID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(actorID,"actorID");
	HX_STACK_LINE(957)
	bool isCustomized = ::com::stencyl::utils::Utils_obj::toBoolean(xml->att->resolve(HX_CSTRING("c")));		HX_STACK_VAR(isCustomized,"isCustomized");
	HX_STACK_LINE(959)
	::haxe::ds::StringMap behaviors = null();		HX_STACK_VAR(behaviors,"behaviors");
	HX_STACK_LINE(961)
	if ((isCustomized)){
		HX_STACK_LINE(962)
		behaviors = ::com::stencyl::io::ActorTypeReader_obj::readBehaviors(xml->node->resolve(HX_CSTRING("snippets")));
	}
	HX_STACK_LINE(966)
	if (((bool((scaleX == (int)0)) || bool((scaleY == (int)0))))){
		HX_STACK_LINE(968)
		scaleX = (int)1;
		HX_STACK_LINE(969)
		scaleY = (int)1;
	}
	HX_STACK_LINE(972)
	if ((!(isCustomized))){
		HX_STACK_LINE(973)
		behaviors = null();
	}
	HX_STACK_LINE(977)
	if (((::com::stencyl::Data_obj::get()->resources->get(actorID) == null()))){
		HX_STACK_LINE(978)
		return null();
	}
	HX_STACK_LINE(982)
	::com::stencyl::models::scene::ActorInstance ai = ::com::stencyl::models::scene::ActorInstance_obj::__new(elementID,x,y,scaleX,scaleY,layerID,angle,groupID,actorID,behaviors,isCustomized);		HX_STACK_VAR(ai,"ai");
	HX_STACK_LINE(997)
	if (((ai->actorType != null()))){
		HX_STACK_LINE(998)
		ai->groupID = ai->actorType->groupID;
	}
	HX_STACK_LINE(1002)
	return ai;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readActorInstance,return )

::haxe::ds::IntMap Scene_obj::readActors( Dynamic list){
	HX_STACK_PUSH("Scene::readActors","com/stencyl/models/Scene.hx",918);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(919)
	::haxe::ds::IntMap map = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(921)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(923)
			::com::stencyl::models::scene::ActorInstance ai = this->readActorInstance(e);		HX_STACK_VAR(ai,"ai");
			HX_STACK_LINE(925)
			if (((ai != null()))){
				HX_STACK_LINE(926)
				map->set(::Std_obj::parseInt(e->att->resolve(HX_CSTRING("aid"))),ai);
			}
		}
;
	}
	HX_STACK_LINE(931)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readActors,return )

Array< ::Dynamic > Scene_obj::readWireframes( Dynamic list){
	HX_STACK_PUSH("Scene::readWireframes","com/stencyl/models/Scene.hx",853);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(854)
	Array< ::Dynamic > map = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(856)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(858)
			Float x = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("x")));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(859)
			Float y = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("y")));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(861)
			::String shapeType = HX_CSTRING("wireframe");		HX_STACK_VAR(shapeType,"shapeType");
			HX_STACK_LINE(862)
			Array< ::String > shapeParams = e->att->resolve(HX_CSTRING("pts")).split(HX_CSTRING(","));		HX_STACK_VAR(shapeParams,"shapeParams");
			HX_STACK_LINE(865)
			if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			}
			else{
				HX_STACK_LINE(897)
				::haxe::ds::IntMap shapeData = ::com::stencyl::io::SpriteReader_obj::createShape(shapeType,shapeParams,x,y,null(),null());		HX_STACK_VAR(shapeData,"shapeData");
				HX_STACK_LINE(899)
				map->push(::com::stencyl::models::scene::Wireframe_obj::__new(::com::stencyl::Engine_obj::toPhysicalUnits(x),::com::stencyl::Engine_obj::toPhysicalUnits(y),shapeData->get((int)1),shapeData->get((int)2),shapeData->get((int)0),null()));
			}
		}
;
	}
	HX_STACK_LINE(914)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readWireframes,return )

Array< int > Scene_obj::readBackgrounds( Dynamic list){
	HX_STACK_PUSH("Scene::readBackgrounds","com/stencyl/models/Scene.hx",839);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(840)
	Array< int > map = Array_obj< int >::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(842)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		map->push(::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id"))));
	}
	HX_STACK_LINE(847)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readBackgrounds,return )

::com::stencyl::models::scene::TileLayer Scene_obj::readRawLayer( ::flash::utils::ByteArray bytes,int length){
	HX_STACK_PUSH("Scene::readRawLayer","com/stencyl/models/Scene.hx",732);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bytes,"bytes");
	HX_STACK_ARG(length,"length");
	HX_STACK_LINE(733)
	int width = ::Std_obj::_int(::Math_obj::floor((Float(this->sceneWidth) / Float(this->tileWidth))));		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(734)
	int height = ::Std_obj::_int(::Math_obj::floor((Float(this->sceneHeight) / Float(this->tileHeight))));		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(736)
	int layerID = bytes->readInt();		HX_STACK_VAR(layerID,"layerID");
	HX_STACK_LINE(737)
	hx::SubEq(length,(int)4);
	HX_STACK_LINE(739)
	int zOrder = bytes->readInt();		HX_STACK_VAR(zOrder,"zOrder");
	HX_STACK_LINE(740)
	hx::SubEq(length,(int)4);
	HX_STACK_LINE(742)
	::com::stencyl::models::scene::TileLayer layer = ::com::stencyl::models::scene::TileLayer_obj::__new(layerID,zOrder,hx::ObjectPtr<OBJ_>(this),width,height);		HX_STACK_VAR(layer,"layer");
	HX_STACK_LINE(744)
	int row = (int)0;		HX_STACK_VAR(row,"row");
	HX_STACK_LINE(745)
	int col = (int)0;		HX_STACK_VAR(col,"col");
	HX_STACK_LINE(747)
	int RLETILE_BYTE_COUNT = (int)8;		HX_STACK_VAR(RLETILE_BYTE_COUNT,"RLETILE_BYTE_COUNT");
	HX_STACK_LINE(748)
	int numChunks = ::Std_obj::_int((Float(length) / Float(RLETILE_BYTE_COUNT)));		HX_STACK_VAR(numChunks,"numChunks");
	HX_STACK_LINE(751)
	::com::stencyl::models::collision::Grid grid = ::com::stencyl::models::collision::Grid_obj::__new(this->sceneWidth,this->sceneHeight,this->tileWidth,this->tileHeight,null(),null());		HX_STACK_VAR(grid,"grid");
	HX_STACK_LINE(752)
	layer->grid = grid;
	HX_STACK_LINE(760)
	{
		HX_STACK_LINE(760)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(760)
		while(((_g < numChunks))){
			HX_STACK_LINE(760)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(763)
			bytes->readShort();
			HX_STACK_LINE(765)
			int tilesetID = bytes->readShort();		HX_STACK_VAR(tilesetID,"tilesetID");
			HX_STACK_LINE(766)
			int tileID = bytes->readShort();		HX_STACK_VAR(tileID,"tileID");
			HX_STACK_LINE(767)
			int runLength = bytes->readShort();		HX_STACK_VAR(runLength,"runLength");
			HX_STACK_LINE(769)
			::com::stencyl::models::scene::Tileset tset = null();		HX_STACK_VAR(tset,"tset");
			HX_STACK_LINE(771)
			if (((tilesetID != (int)-1))){
				HX_STACK_LINE(773)
				::com::stencyl::models::Resource temp = ::com::stencyl::Data_obj::get()->resources->get(tilesetID);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(775)
				if (((temp != null()))){
					HX_STACK_LINE(776)
					tset = hx::TCast< com::stencyl::models::scene::Tileset >::cast(::com::stencyl::Data_obj::get()->resources->get(tilesetID));
				}
			}
			HX_STACK_LINE(781)
			{
				HX_STACK_LINE(781)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(781)
				while(((_g1 < runLength))){
					HX_STACK_LINE(781)
					int runIndex = (_g1)++;		HX_STACK_VAR(runIndex,"runIndex");
					HX_STACK_LINE(783)
					if (((bool((bool((tset == null())) || bool((tileID < (int)0)))) || bool((tset == null()))))){
						HX_STACK_LINE(784)
						layer->setTileAt(row,col,null());
					}
					else{
						HX_STACK_LINE(790)
						::com::stencyl::models::scene::Tile tile = tset->tiles->__get(tileID).StaticCast< ::com::stencyl::models::scene::Tile >();		HX_STACK_VAR(tile,"tile");
						HX_STACK_LINE(792)
						if (((tile == null()))){
							HX_STACK_LINE(793)
							layer->setTileAt(row,col,null());
						}
						else{
							HX_STACK_LINE(799)
							layer->setTileAt(row,col,tile);
							HX_STACK_LINE(801)
							if (((tile->collisionID > (int)0))){
								HX_STACK_LINE(802)
								grid->setTile(col,row,true);
							}
							HX_STACK_LINE(806)
							if (((tile->pixels != null()))){
								HX_STACK_LINE(808)
								bool inList = false;		HX_STACK_VAR(inList,"inList");
								HX_STACK_LINE(810)
								{
									HX_STACK_LINE(810)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									Array< ::Dynamic > _g3 = this->animatedTiles;		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(810)
									while(((_g2 < _g3->length))){
										HX_STACK_LINE(810)
										::com::stencyl::models::scene::Tile checkTile = _g3->__get(_g2).StaticCast< ::com::stencyl::models::scene::Tile >();		HX_STACK_VAR(checkTile,"checkTile");
										HX_STACK_LINE(810)
										++(_g2);
										HX_STACK_LINE(812)
										if ((inList = (checkTile == tile))){
											HX_STACK_LINE(813)
											break;
										}
									}
								}
								HX_STACK_LINE(816)
								if ((!(inList))){
									HX_STACK_LINE(817)
									this->animatedTiles->push(tile);
								}
							}
						}
					}
					HX_STACK_LINE(824)
					(col)++;
					HX_STACK_LINE(826)
					if (((col >= width))){
						HX_STACK_LINE(828)
						col = (int)0;
						HX_STACK_LINE(829)
						(row)++;
					}
				}
			}
		}
	}
	HX_STACK_LINE(834)
	return layer;
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,readRawLayer,return )

::de::polygonal::ds::IntHashTable Scene_obj::readRawLayers( ::flash::utils::ByteArray bytes,int numLayers){
	HX_STACK_PUSH("Scene::readRawLayers","com/stencyl/models/Scene.hx",708);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bytes,"bytes");
	HX_STACK_ARG(numLayers,"numLayers");
	HX_STACK_LINE(709)
	::de::polygonal::ds::IntHashTable map = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(710)
	map->reuseIterator = true;
	HX_STACK_LINE(712)
	Array< int > layerHeaders = Array_obj< int >::__new();		HX_STACK_VAR(layerHeaders,"layerHeaders");
	HX_STACK_LINE(714)
	if (((bytes != null()))){
		HX_STACK_LINE(716)
		{
			HX_STACK_LINE(716)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(716)
			while(((_g < numLayers))){
				HX_STACK_LINE(716)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(718)
				layerHeaders[i] = bytes->readInt();
			}
		}
		HX_STACK_LINE(721)
		{
			HX_STACK_LINE(721)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(721)
			while(((_g < numLayers))){
				HX_STACK_LINE(721)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(723)
				::com::stencyl::models::scene::TileLayer newLayer = this->readRawLayer(bytes,layerHeaders->__get(i));		HX_STACK_VAR(newLayer,"newLayer");
				HX_STACK_LINE(724)
				{
					HX_STACK_LINE(724)
					int key = newLayer->layerID;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(724)
					map->_key0 = (int)-2147483647;
					HX_STACK_LINE(724)
					if (((map->_h->_size == map->_h->_capacity))){
						HX_STACK_LINE(724)
						int oldSize = map->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
						HX_STACK_LINE(724)
						int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
						struct _Function_6_1{
							inline static Array< int > Block( int &newSize){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Scene.hx",724);
								{
									HX_STACK_LINE(724)
									Array< int > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(724)
									a = Array_obj< int >::__new();
									HX_STACK_LINE(724)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(724)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(724)
						Array< int > tmp = _Function_6_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(724)
						{
							HX_STACK_LINE(724)
							Array< int > src = map->_next;		HX_STACK_VAR(src,"src");
							int max = oldSize;		HX_STACK_VAR(max,"max");
							HX_STACK_LINE(724)
							if (((max == (int)-1))){
								HX_STACK_LINE(724)
								max = src->length;
							}
							HX_STACK_LINE(724)
							int j = (int)0;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(724)
							{
								HX_STACK_LINE(724)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(724)
								while(((_g1 < max))){
									HX_STACK_LINE(724)
									int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(724)
									tmp[(j)++] = src->__get(i1);
								}
							}
							HX_STACK_LINE(724)
							tmp;
						}
						HX_STACK_LINE(724)
						map->_next = tmp;
						struct _Function_6_2{
							inline static Array< int > Block( int &newSize){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Scene.hx",724);
								{
									HX_STACK_LINE(724)
									Array< int > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(724)
									a = Array_obj< int >::__new();
									HX_STACK_LINE(724)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(724)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(724)
						Array< int > tmp1 = _Function_6_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(724)
						{
							HX_STACK_LINE(724)
							Array< int > src = map->_keys;		HX_STACK_VAR(src,"src");
							int max = oldSize;		HX_STACK_VAR(max,"max");
							HX_STACK_LINE(724)
							if (((max == (int)-1))){
								HX_STACK_LINE(724)
								max = src->length;
							}
							HX_STACK_LINE(724)
							int j = (int)0;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(724)
							{
								HX_STACK_LINE(724)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(724)
								while(((_g1 < max))){
									HX_STACK_LINE(724)
									int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(724)
									tmp1[(j)++] = src->__get(i1);
								}
							}
							HX_STACK_LINE(724)
							tmp1;
						}
						HX_STACK_LINE(724)
						map->_keys = tmp1;
						HX_STACK_LINE(724)
						{
							HX_STACK_LINE(724)
							int _g1 = oldSize;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(724)
							while(((_g1 < newSize))){
								HX_STACK_LINE(724)
								int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(724)
								map->_keys[i1] = (int)-2147483647;
							}
						}
						HX_STACK_LINE(724)
						{
							HX_STACK_LINE(724)
							int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
							int _g2 = (newSize - (int)1);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(724)
							while(((_g1 < _g2))){
								HX_STACK_LINE(724)
								int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(724)
								map->_next[i1] = (i1 + (int)1);
							}
						}
						HX_STACK_LINE(724)
						map->_next[(newSize - (int)1)] = (int)-1;
						HX_STACK_LINE(724)
						map->_free = oldSize;
						struct _Function_6_3{
							inline static Array< ::Dynamic > Block( int &newSize){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Scene.hx",724);
								{
									HX_STACK_LINE(724)
									Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(724)
									a = Array_obj< ::Dynamic >::__new();
									HX_STACK_LINE(724)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(724)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(724)
						Array< ::Dynamic > tmp2 = _Function_6_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(724)
						{
							HX_STACK_LINE(724)
							Array< ::Dynamic > src = map->_vals;		HX_STACK_VAR(src,"src");
							int max = oldSize;		HX_STACK_VAR(max,"max");
							HX_STACK_LINE(724)
							if (((max == (int)-1))){
								HX_STACK_LINE(724)
								max = src->length;
							}
							HX_STACK_LINE(724)
							int j = (int)0;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(724)
							{
								HX_STACK_LINE(724)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(724)
								while(((_g1 < max))){
									HX_STACK_LINE(724)
									int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(724)
									tmp2[(j)++] = src->__get(i1).StaticCast< ::com::stencyl::models::scene::TileLayer >();
								}
							}
							HX_STACK_LINE(724)
							tmp2;
						}
						HX_STACK_LINE(724)
						map->_vals = tmp2;
						HX_STACK_LINE(724)
						(map->_sizeLevel)++;
					}
					HX_STACK_LINE(724)
					{
						HX_STACK_LINE(724)
						::de::polygonal::ds::IntIntHashTable _this = map->_h;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(724)
						if (((_this->_size == _this->_capacity))){
							HX_STACK_LINE(724)
							if ((_this->_isResizable)){
								HX_STACK_LINE(724)
								_this->_expand();
							}
						}
						HX_STACK_LINE(724)
						int i1 = (_this->_free * (int)3);		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(724)
						_this->_free = _this->_next->__get(_this->_free);
						HX_STACK_LINE(724)
						_this->_data[i1] = key;
						HX_STACK_LINE(724)
						_this->_data[(i1 + (int)1)] = map->_free;
						HX_STACK_LINE(724)
						int b = (int((key * (int)73856093)) & int(_this->_mask));		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(724)
						int j = _this->_hash->__get(b);		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(724)
						if (((j == (int)-1))){
							HX_STACK_LINE(724)
							_this->_hash[b] = i1;
							HX_STACK_LINE(724)
							(_this->_size)++;
							HX_STACK_LINE(724)
							true;
						}
						else{
							HX_STACK_LINE(724)
							bool first = (_this->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
							HX_STACK_LINE(724)
							int t = _this->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(724)
							while(((t != (int)-1))){
								HX_STACK_LINE(724)
								if (((_this->_data->__get(t) == key))){
									HX_STACK_LINE(724)
									first = false;
								}
								HX_STACK_LINE(724)
								j = t;
								HX_STACK_LINE(724)
								t = _this->_data->__get((t + (int)2));
							}
							HX_STACK_LINE(724)
							_this->_data[(j + (int)2)] = i1;
							HX_STACK_LINE(724)
							(_this->_size)++;
							HX_STACK_LINE(724)
							first;
						}
					}
					HX_STACK_LINE(724)
					hx::IndexRef((map->_vals).mPtr,map->_free) = newLayer;
					HX_STACK_LINE(724)
					map->_keys[map->_free] = key;
					HX_STACK_LINE(724)
					map->_free = map->_next->__get(map->_free);
					HX_STACK_LINE(724)
					true;
				}
			}
		}
	}
	HX_STACK_LINE(728)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,readRawLayers,return )

::de::polygonal::ds::IntHashTable Scene_obj::readLayers( Dynamic list,::de::polygonal::ds::IntHashTable rawLayers){
	HX_STACK_PUSH("Scene::readLayers","com/stencyl/models/Scene.hx",565);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_ARG(rawLayers,"rawLayers");
	HX_STACK_LINE(566)
	::de::polygonal::ds::IntHashTable map = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(567)
	map->reuseIterator = true;
	HX_STACK_LINE(569)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(571)
			Dynamic eid = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(eid,"eid");
			HX_STACK_LINE(573)
			{
				HX_STACK_LINE(573)
				int key = eid;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(573)
				map->_key0 = (int)-2147483647;
				HX_STACK_LINE(573)
				if (((map->_h->_size == map->_h->_capacity))){
					HX_STACK_LINE(573)
					int oldSize = map->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(573)
					int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Scene.hx",573);
							{
								HX_STACK_LINE(573)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(573)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(573)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(573)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(573)
					Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(573)
					{
						HX_STACK_LINE(573)
						Array< int > src = map->_next;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(573)
						if (((max == (int)-1))){
							HX_STACK_LINE(573)
							max = src->length;
						}
						HX_STACK_LINE(573)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(573)
						{
							HX_STACK_LINE(573)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(573)
							while(((_g < max))){
								HX_STACK_LINE(573)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(573)
								tmp[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(573)
						tmp;
					}
					HX_STACK_LINE(573)
					map->_next = tmp;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Scene.hx",573);
							{
								HX_STACK_LINE(573)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(573)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(573)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(573)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(573)
					Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(573)
					{
						HX_STACK_LINE(573)
						Array< int > src = map->_keys;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(573)
						if (((max == (int)-1))){
							HX_STACK_LINE(573)
							max = src->length;
						}
						HX_STACK_LINE(573)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(573)
						{
							HX_STACK_LINE(573)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(573)
							while(((_g < max))){
								HX_STACK_LINE(573)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(573)
								tmp1[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(573)
						tmp1;
					}
					HX_STACK_LINE(573)
					map->_keys = tmp1;
					HX_STACK_LINE(573)
					{
						HX_STACK_LINE(573)
						int _g = oldSize;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(573)
						while(((_g < newSize))){
							HX_STACK_LINE(573)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(573)
							map->_keys[i] = (int)-2147483647;
						}
					}
					HX_STACK_LINE(573)
					{
						HX_STACK_LINE(573)
						int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(573)
						while(((_g1 < _g))){
							HX_STACK_LINE(573)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(573)
							map->_next[i] = (i + (int)1);
						}
					}
					HX_STACK_LINE(573)
					map->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(573)
					map->_free = oldSize;
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Scene.hx",573);
							{
								HX_STACK_LINE(573)
								Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(573)
								a = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(573)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(573)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(573)
					Array< ::Dynamic > tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(573)
					{
						HX_STACK_LINE(573)
						Array< ::Dynamic > src = map->_vals;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(573)
						if (((max == (int)-1))){
							HX_STACK_LINE(573)
							max = src->length;
						}
						HX_STACK_LINE(573)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(573)
						{
							HX_STACK_LINE(573)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(573)
							while(((_g < max))){
								HX_STACK_LINE(573)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(573)
								tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::scene::TileLayer >();
							}
						}
						HX_STACK_LINE(573)
						tmp2;
					}
					HX_STACK_LINE(573)
					map->_vals = tmp2;
					HX_STACK_LINE(573)
					(map->_sizeLevel)++;
				}
				HX_STACK_LINE(573)
				{
					HX_STACK_LINE(573)
					::de::polygonal::ds::IntIntHashTable _this = map->_h;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(573)
					if (((_this->_size == _this->_capacity))){
						HX_STACK_LINE(573)
						if ((_this->_isResizable)){
							HX_STACK_LINE(573)
							_this->_expand();
						}
					}
					HX_STACK_LINE(573)
					int i = (_this->_free * (int)3);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(573)
					_this->_free = _this->_next->__get(_this->_free);
					HX_STACK_LINE(573)
					_this->_data[i] = key;
					HX_STACK_LINE(573)
					_this->_data[(i + (int)1)] = map->_free;
					HX_STACK_LINE(573)
					int b = (int((key * (int)73856093)) & int(_this->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(573)
					int j = _this->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(573)
					if (((j == (int)-1))){
						HX_STACK_LINE(573)
						_this->_hash[b] = i;
						HX_STACK_LINE(573)
						(_this->_size)++;
						HX_STACK_LINE(573)
						true;
					}
					else{
						HX_STACK_LINE(573)
						bool first = (_this->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
						HX_STACK_LINE(573)
						int t = _this->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(573)
						while(((t != (int)-1))){
							HX_STACK_LINE(573)
							if (((_this->_data->__get(t) == key))){
								HX_STACK_LINE(573)
								first = false;
							}
							HX_STACK_LINE(573)
							j = t;
							HX_STACK_LINE(573)
							t = _this->_data->__get((t + (int)2));
						}
						HX_STACK_LINE(573)
						_this->_data[(j + (int)2)] = i;
						HX_STACK_LINE(573)
						(_this->_size)++;
						HX_STACK_LINE(573)
						first;
					}
				}
				struct _Function_3_1{
					inline static ::com::stencyl::models::scene::TileLayer Block( Dynamic &eid,::de::polygonal::ds::IntHashTable &rawLayers){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Scene.hx",573);
						{
							HX_STACK_LINE(573)
							int key1 = eid;		HX_STACK_VAR(key1,"key1");
							struct _Function_4_1{
								inline static int Block( int &key1,::de::polygonal::ds::IntHashTable &rawLayers){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Scene.hx",573);
									{
										HX_STACK_LINE(573)
										::de::polygonal::ds::IntIntHashTable _this = rawLayers->_h;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(573)
										int i = _this->_hash->__get((int((key1 * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
										struct _Function_5_1{
											inline static int Block( int &i,int &key1,::de::polygonal::ds::IntIntHashTable _this){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Scene.hx",573);
												{
													HX_STACK_LINE(573)
													int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(573)
													i = _this->_data->__get((i + (int)2));
													HX_STACK_LINE(573)
													while(((i != (int)-1))){
														HX_STACK_LINE(573)
														if (((_this->_data->__get(i) == key1))){
															HX_STACK_LINE(573)
															v = _this->_data->__get((i + (int)1));
															HX_STACK_LINE(573)
															break;
														}
														HX_STACK_LINE(573)
														i = _this->_data->__get((i + (int)2));
													}
													HX_STACK_LINE(573)
													return v;
												}
												return null();
											}
										};
										HX_STACK_LINE(573)
										return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this->_data->__get(i) == key1))) ? int(_this->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,key1,_this)) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(573)
							int i = _Function_4_1::Block(key1,rawLayers);		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(573)
							return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::TileLayer(null()) : ::com::stencyl::models::scene::TileLayer(rawLayers->_vals->__GetItem(i)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(573)
				hx::IndexRef((map->_vals).mPtr,map->_free) = _Function_3_1::Block(eid,rawLayers);
				HX_STACK_LINE(573)
				map->_keys[map->_free] = key;
				HX_STACK_LINE(573)
				map->_free = map->_next->__get(map->_free);
				HX_STACK_LINE(573)
				true;
			}
			struct _Function_2_1{
				inline static ::com::stencyl::models::scene::TileLayer Block( ::de::polygonal::ds::IntHashTable &map,Dynamic &eid){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Scene.hx",575);
					{
						HX_STACK_LINE(575)
						int key = eid;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable &map,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Scene.hx",575);
								{
									HX_STACK_LINE(575)
									::de::polygonal::ds::IntIntHashTable _this = map->_h;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(575)
									int i = _this->_hash->__get((int((key * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable _this,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/models/Scene.hx",575);
											{
												HX_STACK_LINE(575)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(575)
												i = _this->_data->__get((i + (int)2));
												HX_STACK_LINE(575)
												while(((i != (int)-1))){
													HX_STACK_LINE(575)
													if (((_this->_data->__get(i) == key))){
														HX_STACK_LINE(575)
														v = _this->_data->__get((i + (int)1));
														HX_STACK_LINE(575)
														break;
													}
													HX_STACK_LINE(575)
													i = _this->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(575)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(575)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this->_data->__get(i) == key))) ? int(_this->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(575)
						int i = _Function_3_1::Block(map,key);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(575)
						return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::TileLayer(null()) : ::com::stencyl::models::scene::TileLayer(map->_vals->__GetItem(i)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(575)
			::com::stencyl::models::scene::TileLayer layer = _Function_2_1::Block(map,eid);		HX_STACK_VAR(layer,"layer");
			HX_STACK_LINE(577)
			if (((layer != null()))){
				HX_STACK_LINE(579)
				layer->set_name(e->att->resolve(HX_CSTRING("name")));
				HX_STACK_LINE(580)
				layer->zOrder = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("order")));
			}
			else{
				HX_STACK_LINE(585)
				::com::stencyl::models::scene::TileLayer dummy = ::com::stencyl::models::scene::TileLayer_obj::__new(eid,::Std_obj::parseInt(e->att->resolve(HX_CSTRING("order"))),hx::ObjectPtr<OBJ_>(this),::Std_obj::_int(::Math_obj::floor((Float(this->sceneWidth) / Float(this->tileWidth)))),::Std_obj::_int(::Math_obj::floor((Float(this->sceneHeight) / Float(this->tileHeight)))));		HX_STACK_VAR(dummy,"dummy");
				HX_STACK_LINE(586)
				{
					HX_STACK_LINE(586)
					int key = eid;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(586)
					map->_key0 = (int)-2147483647;
					HX_STACK_LINE(586)
					if (((map->_h->_size == map->_h->_capacity))){
						HX_STACK_LINE(586)
						int oldSize = map->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
						HX_STACK_LINE(586)
						int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
						struct _Function_5_1{
							inline static Array< int > Block( int &newSize){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Scene.hx",586);
								{
									HX_STACK_LINE(586)
									Array< int > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(586)
									a = Array_obj< int >::__new();
									HX_STACK_LINE(586)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(586)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(586)
						Array< int > tmp = _Function_5_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(586)
						{
							HX_STACK_LINE(586)
							Array< int > src = map->_next;		HX_STACK_VAR(src,"src");
							int max = oldSize;		HX_STACK_VAR(max,"max");
							HX_STACK_LINE(586)
							if (((max == (int)-1))){
								HX_STACK_LINE(586)
								max = src->length;
							}
							HX_STACK_LINE(586)
							int j = (int)0;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(586)
							{
								HX_STACK_LINE(586)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(586)
								while(((_g < max))){
									HX_STACK_LINE(586)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(586)
									tmp[(j)++] = src->__get(i);
								}
							}
							HX_STACK_LINE(586)
							tmp;
						}
						HX_STACK_LINE(586)
						map->_next = tmp;
						struct _Function_5_2{
							inline static Array< int > Block( int &newSize){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Scene.hx",586);
								{
									HX_STACK_LINE(586)
									Array< int > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(586)
									a = Array_obj< int >::__new();
									HX_STACK_LINE(586)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(586)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(586)
						Array< int > tmp1 = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(586)
						{
							HX_STACK_LINE(586)
							Array< int > src = map->_keys;		HX_STACK_VAR(src,"src");
							int max = oldSize;		HX_STACK_VAR(max,"max");
							HX_STACK_LINE(586)
							if (((max == (int)-1))){
								HX_STACK_LINE(586)
								max = src->length;
							}
							HX_STACK_LINE(586)
							int j = (int)0;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(586)
							{
								HX_STACK_LINE(586)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(586)
								while(((_g < max))){
									HX_STACK_LINE(586)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(586)
									tmp1[(j)++] = src->__get(i);
								}
							}
							HX_STACK_LINE(586)
							tmp1;
						}
						HX_STACK_LINE(586)
						map->_keys = tmp1;
						HX_STACK_LINE(586)
						{
							HX_STACK_LINE(586)
							int _g = oldSize;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(586)
							while(((_g < newSize))){
								HX_STACK_LINE(586)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(586)
								map->_keys[i] = (int)-2147483647;
							}
						}
						HX_STACK_LINE(586)
						{
							HX_STACK_LINE(586)
							int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
							int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(586)
							while(((_g1 < _g))){
								HX_STACK_LINE(586)
								int i = (_g1)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(586)
								map->_next[i] = (i + (int)1);
							}
						}
						HX_STACK_LINE(586)
						map->_next[(newSize - (int)1)] = (int)-1;
						HX_STACK_LINE(586)
						map->_free = oldSize;
						struct _Function_5_3{
							inline static Array< ::Dynamic > Block( int &newSize){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Scene.hx",586);
								{
									HX_STACK_LINE(586)
									Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(586)
									a = Array_obj< ::Dynamic >::__new();
									HX_STACK_LINE(586)
									a[(newSize - (int)1)] = null();
									HX_STACK_LINE(586)
									return a;
								}
								return null();
							}
						};
						HX_STACK_LINE(586)
						Array< ::Dynamic > tmp2 = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(586)
						{
							HX_STACK_LINE(586)
							Array< ::Dynamic > src = map->_vals;		HX_STACK_VAR(src,"src");
							int max = oldSize;		HX_STACK_VAR(max,"max");
							HX_STACK_LINE(586)
							if (((max == (int)-1))){
								HX_STACK_LINE(586)
								max = src->length;
							}
							HX_STACK_LINE(586)
							int j = (int)0;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(586)
							{
								HX_STACK_LINE(586)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(586)
								while(((_g < max))){
									HX_STACK_LINE(586)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(586)
									tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::scene::TileLayer >();
								}
							}
							HX_STACK_LINE(586)
							tmp2;
						}
						HX_STACK_LINE(586)
						map->_vals = tmp2;
						HX_STACK_LINE(586)
						(map->_sizeLevel)++;
					}
					HX_STACK_LINE(586)
					{
						HX_STACK_LINE(586)
						::de::polygonal::ds::IntIntHashTable _this = map->_h;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(586)
						if (((_this->_size == _this->_capacity))){
							HX_STACK_LINE(586)
							if ((_this->_isResizable)){
								HX_STACK_LINE(586)
								_this->_expand();
							}
						}
						HX_STACK_LINE(586)
						int i = (_this->_free * (int)3);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(586)
						_this->_free = _this->_next->__get(_this->_free);
						HX_STACK_LINE(586)
						_this->_data[i] = key;
						HX_STACK_LINE(586)
						_this->_data[(i + (int)1)] = map->_free;
						HX_STACK_LINE(586)
						int b = (int((key * (int)73856093)) & int(_this->_mask));		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(586)
						int j = _this->_hash->__get(b);		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(586)
						if (((j == (int)-1))){
							HX_STACK_LINE(586)
							_this->_hash[b] = i;
							HX_STACK_LINE(586)
							(_this->_size)++;
							HX_STACK_LINE(586)
							true;
						}
						else{
							HX_STACK_LINE(586)
							bool first = (_this->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
							HX_STACK_LINE(586)
							int t = _this->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(586)
							while(((t != (int)-1))){
								HX_STACK_LINE(586)
								if (((_this->_data->__get(t) == key))){
									HX_STACK_LINE(586)
									first = false;
								}
								HX_STACK_LINE(586)
								j = t;
								HX_STACK_LINE(586)
								t = _this->_data->__get((t + (int)2));
							}
							HX_STACK_LINE(586)
							_this->_data[(j + (int)2)] = i;
							HX_STACK_LINE(586)
							(_this->_size)++;
							HX_STACK_LINE(586)
							first;
						}
					}
					HX_STACK_LINE(586)
					hx::IndexRef((map->_vals).mPtr,map->_free) = dummy;
					HX_STACK_LINE(586)
					map->_keys[map->_free] = key;
					HX_STACK_LINE(586)
					map->_free = map->_next->__get(map->_free);
					HX_STACK_LINE(586)
					true;
				}
			}
		}
;
	}
	HX_STACK_LINE(590)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,readLayers,return )

::box2D::dynamics::joints::B2JointDef Scene_obj::readJoint( ::haxe::xml::Fast e){
	HX_STACK_PUSH("Scene::readJoint","com/stencyl/models/Scene.hx",484);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(485)
	::String type = e->get_name();		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(486)
	Dynamic elementID = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(elementID,"elementID");
	HX_STACK_LINE(488)
	Dynamic a1 = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("a1")));		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(489)
	Dynamic a2 = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("a2")));		HX_STACK_VAR(a2,"a2");
	HX_STACK_LINE(490)
	bool collide = ::com::stencyl::utils::Utils_obj::toBoolean(e->att->resolve(HX_CSTRING("collide")));		HX_STACK_VAR(collide,"collide");
	HX_STACK_LINE(492)
	if (((type == HX_CSTRING("STICK_JOINT")))){
		HX_STACK_LINE(494)
		::box2D::dynamics::joints::B2DistanceJointDef j = ::box2D::dynamics::joints::B2DistanceJointDef_obj::__new();		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(496)
		j->ID = elementID;
		HX_STACK_LINE(497)
		j->actor1 = a1;
		HX_STACK_LINE(498)
		j->actor2 = a2;
		HX_STACK_LINE(499)
		j->localAnchorA = null();
		HX_STACK_LINE(500)
		j->localAnchorB = null();
		HX_STACK_LINE(501)
		j->collideConnected = collide;
		HX_STACK_LINE(505)
		j->dampingRatio = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("damping")));
		HX_STACK_LINE(506)
		j->frequencyHz = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("freq")));
		HX_STACK_LINE(508)
		return j;
	}
	else{
		HX_STACK_LINE(511)
		if (((type == HX_CSTRING("HINGE_JOINT")))){
			HX_STACK_LINE(513)
			::box2D::dynamics::joints::B2RevoluteJointDef j2 = ::box2D::dynamics::joints::B2RevoluteJointDef_obj::__new();		HX_STACK_VAR(j2,"j2");
			HX_STACK_LINE(515)
			j2->ID = elementID;
			HX_STACK_LINE(516)
			j2->actor1 = a1;
			HX_STACK_LINE(517)
			j2->actor2 = a2;
			HX_STACK_LINE(518)
			j2->localAnchorA = null();
			HX_STACK_LINE(519)
			j2->localAnchorB = null();
			HX_STACK_LINE(520)
			j2->collideConnected = collide;
			HX_STACK_LINE(524)
			j2->enableLimit = ::com::stencyl::utils::Utils_obj::toBoolean(e->att->resolve(HX_CSTRING("limit")));
			HX_STACK_LINE(525)
			j2->enableMotor = ::com::stencyl::utils::Utils_obj::toBoolean(e->att->resolve(HX_CSTRING("motor")));
			HX_STACK_LINE(526)
			j2->lowerAngle = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("lower")));
			HX_STACK_LINE(527)
			j2->upperAngle = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("upper")));
			HX_STACK_LINE(528)
			j2->maxMotorTorque = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("torque")));
			HX_STACK_LINE(529)
			j2->motorSpeed = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("speed")));
			HX_STACK_LINE(531)
			return j2;
		}
		else{
			HX_STACK_LINE(534)
			if (((type == HX_CSTRING("SLIDING_JOINT")))){
				HX_STACK_LINE(536)
				::box2D::dynamics::joints::B2LineJointDef j3 = ::box2D::dynamics::joints::B2LineJointDef_obj::__new();		HX_STACK_VAR(j3,"j3");
				HX_STACK_LINE(538)
				j3->ID = elementID;
				HX_STACK_LINE(539)
				j3->actor1 = a1;
				HX_STACK_LINE(540)
				j3->actor2 = a2;
				HX_STACK_LINE(541)
				j3->localAnchorA = null();
				HX_STACK_LINE(542)
				j3->localAnchorB = null();
				HX_STACK_LINE(543)
				j3->collideConnected = collide;
				HX_STACK_LINE(547)
				j3->enableLimit = ::com::stencyl::utils::Utils_obj::toBoolean(e->att->resolve(HX_CSTRING("limit")));
				HX_STACK_LINE(548)
				j3->enableMotor = ::com::stencyl::utils::Utils_obj::toBoolean(e->att->resolve(HX_CSTRING("motor")));
				HX_STACK_LINE(549)
				j3->lowerTranslation = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("lower")));
				HX_STACK_LINE(550)
				j3->upperTranslation = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("upper")));
				HX_STACK_LINE(551)
				j3->maxMotorForce = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("force")));
				HX_STACK_LINE(552)
				j3->motorSpeed = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("speed")));
				HX_STACK_LINE(553)
				j3->localAxisA->x = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("x")));
				HX_STACK_LINE(554)
				j3->localAxisA->y = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("y")));
				HX_STACK_LINE(556)
				return j3;
			}
		}
	}
	HX_STACK_LINE(559)
	::haxe::Log_obj::trace((HX_CSTRING("Error: unsuppported joint type: ") + type),hx::SourceInfo(HX_CSTRING("Scene.hx"),559,HX_CSTRING("com.stencyl.models.Scene"),HX_CSTRING("readJoint")));
	HX_STACK_LINE(561)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readJoint,return )

::haxe::ds::IntMap Scene_obj::readJoints( Dynamic list){
	HX_STACK_PUSH("Scene::readJoints","com/stencyl/models/Scene.hx",471);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(472)
	::haxe::ds::IntMap map = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(474)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(476)
			::box2D::dynamics::joints::B2JointDef j = this->readJoint(e);		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(477)
			map->set(j->ID,j);
		}
;
	}
	HX_STACK_LINE(480)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readJoints,return )

::com::stencyl::models::scene::TerrainDef Scene_obj::readTerrainRegion( ::haxe::xml::Fast e){
	HX_STACK_PUSH("Scene::readTerrainRegion","com/stencyl/models/Scene.hx",397);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(398)
	::String type = e->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(399)
	Dynamic elementID = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(elementID,"elementID");
	HX_STACK_LINE(400)
	::String name = e->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(401)
	Dynamic group = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("group")));		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(402)
	::com::stencyl::models::scene::TerrainDef terrainRegion;		HX_STACK_VAR(terrainRegion,"terrainRegion");
	HX_STACK_LINE(404)
	Float x = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("x"))));		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(405)
	Float y = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("y"))));		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(406)
	int r = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("r")));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(407)
	int g = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("g")));		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(408)
	int b = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("b")));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(409)
	int fillColor = (int((int((int(r) << int((int)16))) | int((int(g) << int((int)8))))) | int(b));		HX_STACK_VAR(fillColor,"fillColor");
	HX_STACK_LINE(411)
	::box2D::collision::shapes::B2Shape shape = null();		HX_STACK_VAR(shape,"shape");
	HX_STACK_LINE(412)
	Array< ::Dynamic > ps = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(ps,"ps");
	HX_STACK_LINE(413)
	this->shapeList = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(414)
	Array< ::String > decompParams;		HX_STACK_VAR(decompParams,"decompParams");
	HX_STACK_LINE(416)
	if (((type == HX_CSTRING("box")))){
		HX_STACK_LINE(418)
		Float w = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("w"))));		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(419)
		Float h = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("h"))));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(420)
		::box2D::collision::shapes::B2PolygonShape box = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(box,"box");
		HX_STACK_LINE(421)
		box->setAsBox((Float(w) / Float((int)2)),(Float(h) / Float((int)2)));
		HX_STACK_LINE(422)
		shape = box;
		HX_STACK_LINE(423)
		this->shapeList[(int)0] = shape;
		HX_STACK_LINE(424)
		terrainRegion = ::com::stencyl::models::scene::TerrainDef_obj::__new(this->shapeList,elementID,name,x,y,group,fillColor);
	}
	else{
		HX_STACK_LINE(427)
		if (((type == HX_CSTRING("poly")))){
			HX_STACK_LINE(429)
			Float w = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("w")));		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(430)
			Float h = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("h")));		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(432)
			::String shapeType = HX_CSTRING("polyregion");		HX_STACK_VAR(shapeType,"shapeType");
			HX_STACK_LINE(433)
			Array< ::String > shapeParams = e->att->resolve(HX_CSTRING("pts")).split(HX_CSTRING(","));		HX_STACK_VAR(shapeParams,"shapeParams");
			HX_STACK_LINE(436)
			this->currX = x;
			HX_STACK_LINE(437)
			this->currY = y;
			HX_STACK_LINE(438)
			this->currW = w;
			HX_STACK_LINE(439)
			this->currH = h;
			HX_STACK_LINE(441)
			Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
			HX_STACK_LINE(442)
			Float numVertices = ::Std_obj::parseFloat(shapeParams->__get((int)0));		HX_STACK_VAR(numVertices,"numVertices");
			HX_STACK_LINE(443)
			int vIndex = (int)0;		HX_STACK_VAR(vIndex,"vIndex");
			HX_STACK_LINE(444)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(446)
			while(((vIndex < numVertices))){
				HX_STACK_LINE(448)
				points->push(::flash::geom::Point_obj::__new(::Std_obj::parseFloat(shapeParams->__get((i + (int)1))),::Std_obj::parseFloat(shapeParams->__get((i + (int)2)))));
				HX_STACK_LINE(449)
				(vIndex)++;
				HX_STACK_LINE(450)
				hx::AddEq(i,(int)2);
			}
			HX_STACK_LINE(453)
			::com::stencyl::utils::PolyDecompBayazit decomp = ::com::stencyl::utils::PolyDecompBayazit_obj::__new(points);		HX_STACK_VAR(decomp,"decomp");
			HX_STACK_LINE(454)
			decomp->decompose(this->addPolygonTerrain_dyn());
			HX_STACK_LINE(455)
			terrainRegion = ::com::stencyl::models::scene::TerrainDef_obj::__new(this->shapeList,elementID,name,x,y,group,fillColor);
		}
		else{
			HX_STACK_LINE(460)
			Float radius = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("rad"))));		HX_STACK_VAR(radius,"radius");
			HX_STACK_LINE(461)
			shape = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());
			HX_STACK_LINE(462)
			shape->m_radius = radius;
			HX_STACK_LINE(463)
			this->shapeList[(int)0] = shape;
			HX_STACK_LINE(464)
			terrainRegion = ::com::stencyl::models::scene::TerrainDef_obj::__new(this->shapeList,elementID,name,x,y,group,fillColor);
		}
	}
	HX_STACK_LINE(467)
	return terrainRegion;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readTerrainRegion,return )

::haxe::ds::IntMap Scene_obj::readTerrainRegions( Dynamic list){
	HX_STACK_PUSH("Scene::readTerrainRegions","com/stencyl/models/Scene.hx",384);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(385)
	::haxe::ds::IntMap map = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(387)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(389)
			::com::stencyl::models::scene::TerrainDef r = this->readTerrainRegion(e);		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(390)
			map->set(r->ID,r);
		}
;
	}
	HX_STACK_LINE(393)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readTerrainRegions,return )

Void Scene_obj::addPolygonTerrain( ::com::stencyl::utils::PolyDecompBayazit p){
{
		HX_STACK_PUSH("Scene::addPolygonTerrain","com/stencyl/models/Scene.hx",350);
		HX_STACK_THIS(this);
		HX_STACK_ARG(p,"p");
		HX_STACK_LINE(353)
		Float loX = 1.7976931348623158e+308;		HX_STACK_VAR(loX,"loX");
		HX_STACK_LINE(354)
		Float loY = 1.7976931348623158e+308;		HX_STACK_VAR(loY,"loY");
		HX_STACK_LINE(355)
		Float hiX = (int)0;		HX_STACK_VAR(hiX,"hiX");
		HX_STACK_LINE(356)
		Float hiY = (int)0;		HX_STACK_VAR(hiY,"hiY");
		HX_STACK_LINE(358)
		Array< ::String > decompParams = Array_obj< ::String >::__new();		HX_STACK_VAR(decompParams,"decompParams");
		HX_STACK_LINE(359)
		decompParams[(int)0] = (HX_CSTRING("") + p->points->length);
		HX_STACK_LINE(361)
		{
			HX_STACK_LINE(361)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = p->points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(361)
			while(((_g1 < _g))){
				HX_STACK_LINE(361)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(363)
				loX = ::Math_obj::min(loX,p->points->__get(j).StaticCast< ::flash::geom::Point >()->x);
				HX_STACK_LINE(364)
				loY = ::Math_obj::min(loY,p->points->__get(j).StaticCast< ::flash::geom::Point >()->y);
				HX_STACK_LINE(365)
				hiX = ::Math_obj::min(hiX,p->points->__get(j).StaticCast< ::flash::geom::Point >()->x);
				HX_STACK_LINE(366)
				hiY = ::Math_obj::min(hiY,p->points->__get(j).StaticCast< ::flash::geom::Point >()->y);
				HX_STACK_LINE(367)
				decompParams->push((HX_CSTRING("") + p->points->__get(j).StaticCast< ::flash::geom::Point >()->x));
				HX_STACK_LINE(368)
				decompParams->push((HX_CSTRING("") + p->points->__get(j).StaticCast< ::flash::geom::Point >()->y));
			}
		}
		HX_STACK_LINE(371)
		Float localWidth;		HX_STACK_VAR(localWidth,"localWidth");
		HX_STACK_LINE(372)
		Float localHeight;		HX_STACK_VAR(localHeight,"localHeight");
		HX_STACK_LINE(374)
		localWidth = (hiX - loX);
		HX_STACK_LINE(375)
		localHeight = (hiY - loY);
		HX_STACK_LINE(376)
		loX = ::com::stencyl::Engine_obj::toPhysicalUnits(loX);
		HX_STACK_LINE(377)
		loY = ::com::stencyl::Engine_obj::toPhysicalUnits(loY);
		HX_STACK_LINE(379)
		::box2D::collision::shapes::B2PolygonShape polyShape = hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(::com::stencyl::io::SpriteReader_obj::createShape(HX_CSTRING("polyregion"),decompParams,this->currX,this->currY,this->currW,this->currH));		HX_STACK_VAR(polyShape,"polyShape");
		HX_STACK_LINE(380)
		this->shapeList->push(polyShape);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addPolygonTerrain,(void))

Void Scene_obj::addPolygonRegion( ::com::stencyl::utils::PolyDecompBayazit p){
{
		HX_STACK_PUSH("Scene::addPolygonRegion","com/stencyl/models/Scene.hx",316);
		HX_STACK_THIS(this);
		HX_STACK_ARG(p,"p");
		HX_STACK_LINE(319)
		Float loX = 1.7976931348623158e+308;		HX_STACK_VAR(loX,"loX");
		HX_STACK_LINE(320)
		Float loY = 1.7976931348623158e+308;		HX_STACK_VAR(loY,"loY");
		HX_STACK_LINE(321)
		Float hiX = (int)0;		HX_STACK_VAR(hiX,"hiX");
		HX_STACK_LINE(322)
		Float hiY = (int)0;		HX_STACK_VAR(hiY,"hiY");
		HX_STACK_LINE(324)
		Array< ::String > decompParams = Array_obj< ::String >::__new();		HX_STACK_VAR(decompParams,"decompParams");
		HX_STACK_LINE(325)
		decompParams[(int)0] = (HX_CSTRING("") + p->points->length);
		HX_STACK_LINE(327)
		{
			HX_STACK_LINE(327)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = p->points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(327)
			while(((_g1 < _g))){
				HX_STACK_LINE(327)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(329)
				loX = ::Math_obj::min(loX,p->points->__get(j).StaticCast< ::flash::geom::Point >()->x);
				HX_STACK_LINE(330)
				loY = ::Math_obj::min(loY,p->points->__get(j).StaticCast< ::flash::geom::Point >()->y);
				HX_STACK_LINE(331)
				hiX = ::Math_obj::min(hiX,p->points->__get(j).StaticCast< ::flash::geom::Point >()->x);
				HX_STACK_LINE(332)
				hiY = ::Math_obj::min(hiY,p->points->__get(j).StaticCast< ::flash::geom::Point >()->y);
				HX_STACK_LINE(333)
				decompParams->push((HX_CSTRING("") + p->points->__get(j).StaticCast< ::flash::geom::Point >()->x));
				HX_STACK_LINE(334)
				decompParams->push((HX_CSTRING("") + p->points->__get(j).StaticCast< ::flash::geom::Point >()->y));
			}
		}
		HX_STACK_LINE(337)
		Float localWidth;		HX_STACK_VAR(localWidth,"localWidth");
		HX_STACK_LINE(338)
		Float localHeight;		HX_STACK_VAR(localHeight,"localHeight");
		HX_STACK_LINE(340)
		localWidth = (hiX - loX);
		HX_STACK_LINE(341)
		localHeight = (hiY - loY);
		HX_STACK_LINE(342)
		loX = ::com::stencyl::Engine_obj::toPhysicalUnits(loX);
		HX_STACK_LINE(343)
		loY = ::com::stencyl::Engine_obj::toPhysicalUnits(loY);
		HX_STACK_LINE(345)
		::box2D::collision::shapes::B2PolygonShape polyShape = hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(::com::stencyl::io::SpriteReader_obj::createShape(HX_CSTRING("polyregion"),decompParams,this->currX,this->currY,this->currW,this->currH));		HX_STACK_VAR(polyShape,"polyShape");
		HX_STACK_LINE(346)
		this->shapeList->push(polyShape);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addPolygonRegion,(void))

::com::stencyl::models::scene::RegionDef Scene_obj::readRegion( ::haxe::xml::Fast e){
	HX_STACK_PUSH("Scene::readRegion","com/stencyl/models/Scene.hx",188);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(189)
	::String type = e->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(190)
	Dynamic elementID = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(elementID,"elementID");
	HX_STACK_LINE(191)
	::String name = e->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(192)
	::com::stencyl::models::scene::RegionDef region;		HX_STACK_VAR(region,"region");
	HX_STACK_LINE(194)
	Float x = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("x"))));		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(195)
	Float y = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("y"))));		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(197)
	::box2D::collision::shapes::B2Shape shape = null();		HX_STACK_VAR(shape,"shape");
	HX_STACK_LINE(198)
	Array< ::Dynamic > ps = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(ps,"ps");
	HX_STACK_LINE(199)
	this->shapeList = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(200)
	Array< ::String > decompParams;		HX_STACK_VAR(decompParams,"decompParams");
	HX_STACK_LINE(202)
	if (((type == HX_CSTRING("box")))){
		HX_STACK_LINE(204)
		Float w = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("w"))));		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(205)
		Float h = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("h"))));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(207)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(209)
			w = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("w")));
			HX_STACK_LINE(210)
			h = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("h")));
			HX_STACK_LINE(212)
			region = ::com::stencyl::models::scene::RegionDef_obj::__new(this->shapeList,elementID,name,x,y,(int)0,::flash::geom::Rectangle_obj::__new((int)0,(int)0,w,h));
		}
		else{
			HX_STACK_LINE(217)
			::box2D::collision::shapes::B2PolygonShape box = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(box,"box");
			HX_STACK_LINE(218)
			box->setAsBox((Float(w) / Float((int)2)),(Float(h) / Float((int)2)));
			HX_STACK_LINE(219)
			shape = box;
			HX_STACK_LINE(220)
			this->shapeList[(int)0] = shape;
			HX_STACK_LINE(221)
			region = ::com::stencyl::models::scene::RegionDef_obj::__new(this->shapeList,elementID,name,x,y,null(),null());
		}
	}
	else{
		HX_STACK_LINE(225)
		if (((type == HX_CSTRING("poly")))){
			HX_STACK_LINE(227)
			Float w = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("w")));		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(228)
			Float h = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("h")));		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(229)
			::String pts = null();		HX_STACK_VAR(pts,"pts");
			HX_STACK_LINE(231)
			if ((e->has->resolve(HX_CSTRING("pts")))){
				HX_STACK_LINE(232)
				pts = e->att->resolve(HX_CSTRING("pts"));
			}
			HX_STACK_LINE(236)
			::String shapeType = HX_CSTRING("polyregion");		HX_STACK_VAR(shapeType,"shapeType");
			HX_STACK_LINE(239)
			if (((bool((pts == null())) || bool(::com::stencyl::Engine_obj::NO_PHYSICS)))){
				HX_STACK_LINE(241)
				if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
					HX_STACK_LINE(243)
					w = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("w")));
					HX_STACK_LINE(244)
					h = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("h")));
					HX_STACK_LINE(246)
					region = ::com::stencyl::models::scene::RegionDef_obj::__new(this->shapeList,elementID,name,x,y,(int)0,::flash::geom::Rectangle_obj::__new((int)0,(int)0,w,h));
				}
				else{
					HX_STACK_LINE(251)
					::box2D::collision::shapes::B2PolygonShape box = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(box,"box");
					HX_STACK_LINE(252)
					box->setAsBox((Float(w) / Float((int)2)),(Float(h) / Float((int)2)));
					HX_STACK_LINE(253)
					shape = box;
					HX_STACK_LINE(254)
					this->shapeList[(int)0] = shape;
					HX_STACK_LINE(255)
					region = ::com::stencyl::models::scene::RegionDef_obj::__new(this->shapeList,elementID,name,x,y,null(),null());
				}
				HX_STACK_LINE(258)
				return region;
			}
			HX_STACK_LINE(262)
			this->currX = x;
			HX_STACK_LINE(263)
			this->currY = y;
			HX_STACK_LINE(264)
			this->currW = w;
			HX_STACK_LINE(265)
			this->currH = h;
			HX_STACK_LINE(267)
			Array< ::String > shapeParams = pts.split(HX_CSTRING(","));		HX_STACK_VAR(shapeParams,"shapeParams");
			HX_STACK_LINE(269)
			Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
			HX_STACK_LINE(270)
			Float numVertices = ::Std_obj::parseFloat(shapeParams->__get((int)0));		HX_STACK_VAR(numVertices,"numVertices");
			HX_STACK_LINE(271)
			int vIndex = (int)0;		HX_STACK_VAR(vIndex,"vIndex");
			HX_STACK_LINE(272)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(274)
			while(((vIndex < numVertices))){
				HX_STACK_LINE(276)
				points->push(::flash::geom::Point_obj::__new(::Std_obj::parseFloat(shapeParams->__get((i + (int)1))),::Std_obj::parseFloat(shapeParams->__get((i + (int)2)))));
				HX_STACK_LINE(277)
				(vIndex)++;
				HX_STACK_LINE(278)
				hx::AddEq(i,(int)2);
			}
			HX_STACK_LINE(281)
			::com::stencyl::utils::PolyDecompBayazit decomp = ::com::stencyl::utils::PolyDecompBayazit_obj::__new(points);		HX_STACK_VAR(decomp,"decomp");
			HX_STACK_LINE(282)
			decomp->decompose(this->addPolygonRegion_dyn());
			HX_STACK_LINE(283)
			region = ::com::stencyl::models::scene::RegionDef_obj::__new(this->shapeList,elementID,name,x,y,null(),null());
		}
		else{
			HX_STACK_LINE(288)
			Float radius = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("rad"))));		HX_STACK_VAR(radius,"radius");
			HX_STACK_LINE(290)
			if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
				HX_STACK_LINE(292)
				radius = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("rad")));
				HX_STACK_LINE(294)
				region = ::com::stencyl::models::scene::RegionDef_obj::__new(this->shapeList,elementID,name,x,y,(int)0,::flash::geom::Rectangle_obj::__new((int)0,(int)0,(radius * (int)2),(radius * (int)2)));
			}
			else{
				HX_STACK_LINE(299)
				shape = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());
				HX_STACK_LINE(300)
				shape->m_radius = radius;
				HX_STACK_LINE(301)
				this->shapeList[(int)0] = shape;
				HX_STACK_LINE(302)
				region = ::com::stencyl::models::scene::RegionDef_obj::__new(this->shapeList,elementID,name,x,y,null(),null());
			}
		}
	}
	HX_STACK_LINE(306)
	return region;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readRegion,return )

::haxe::ds::IntMap Scene_obj::readRegions( Dynamic list){
	HX_STACK_PUSH("Scene::readRegions","com/stencyl/models/Scene.hx",175);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(176)
	::haxe::ds::IntMap map = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(178)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(180)
			::com::stencyl::models::scene::RegionDef r = this->readRegion(e);		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(181)
			map->set(r->ID,r);
		}
;
	}
	HX_STACK_LINE(184)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readRegions,return )

Void Scene_obj::unload( ){
{
		HX_STACK_PUSH("Scene::unload","com/stencyl/models/Scene.hx",155);
		HX_STACK_THIS(this);
		HX_STACK_LINE(156)
		this->colorBackground = null();
		HX_STACK_LINE(158)
		this->bgs = null();
		HX_STACK_LINE(159)
		this->fgs = null();
		HX_STACK_LINE(161)
		this->terrain = null();
		HX_STACK_LINE(162)
		this->actors = null();
		HX_STACK_LINE(163)
		this->behaviorValues = null();
		HX_STACK_LINE(166)
		this->wireframes = null();
		HX_STACK_LINE(167)
		this->joints = null();
		HX_STACK_LINE(168)
		this->regions = null();
		HX_STACK_LINE(169)
		this->terrainRegions = null();
		HX_STACK_LINE(171)
		this->animatedTiles = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,unload,(void))

Void Scene_obj::load( ){
{
		HX_STACK_PUSH("Scene::load","com/stencyl/models/Scene.hx",83);
		HX_STACK_THIS(this);
		HX_STACK_LINE(84)
		::haxe::xml::Fast xml = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(::openfl::Assets_obj::getText(((HX_CSTRING("assets/data/scene-") + this->ID) + HX_CSTRING(".xml"))))->firstElement());		HX_STACK_VAR(xml,"xml");
		HX_STACK_LINE(86)
		int numLayers = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("depth")));		HX_STACK_VAR(numLayers,"numLayers");
		HX_STACK_LINE(88)
		this->sceneWidth = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("width")));
		HX_STACK_LINE(89)
		this->sceneHeight = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("height")));
		HX_STACK_LINE(91)
		this->tileWidth = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("tilew")));
		HX_STACK_LINE(92)
		this->tileHeight = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("tileh")));
		HX_STACK_LINE(94)
		this->gravityX = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("gravx")));
		HX_STACK_LINE(95)
		this->gravityY = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("gravy")));
		HX_STACK_LINE(97)
		this->animatedTiles = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(99)
		this->bgs = this->readBackgrounds(xml->node->resolve(HX_CSTRING("backgrounds"))->get_elements());
		HX_STACK_LINE(100)
		this->fgs = this->readBackgrounds(xml->node->resolve(HX_CSTRING("foregrounds"))->get_elements());
		HX_STACK_LINE(102)
		this->colorBackground = ::com::stencyl::models::background::ColorBackground_obj::__new((int)-1);
		HX_STACK_LINE(104)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(xml->get_elements());  __it->hasNext(); ){
			::haxe::xml::Fast e = __it->next();
			if (((bool((e->get_name() == HX_CSTRING("color-bg"))) || bool((e->get_name() == HX_CSTRING("grad-bg")))))){
				HX_STACK_LINE(108)
				this->colorBackground = hx::TCast< com::stencyl::models::Background >::cast(::com::stencyl::io::BackgroundReader_obj::__new()->read((int)0,(int)0,e->get_name(),HX_CSTRING(""),e));
				HX_STACK_LINE(109)
				break;
			}
;
		}
		HX_STACK_LINE(113)
		this->actors = this->readActors(xml->node->resolve(HX_CSTRING("actors"))->get_elements());
		HX_STACK_LINE(114)
		this->behaviorValues = ::com::stencyl::io::ActorTypeReader_obj::readBehaviors(xml->node->resolve(HX_CSTRING("snippets")));
		HX_STACK_LINE(116)
		::String eventSnippetID = HX_CSTRING("");		HX_STACK_VAR(eventSnippetID,"eventSnippetID");
		HX_STACK_LINE(118)
		try{
			HX_STACK_LINE(119)
			eventSnippetID = xml->att->resolve(HX_CSTRING("eventsnippetid"));
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::String >() ){
				HX_STACK_BEGIN_CATCH
				::String e = __e;{
				}
			}
			else throw(__e);
		}
		HX_STACK_LINE(127)
		if (((eventSnippetID != HX_CSTRING("")))){
			HX_STACK_LINE(129)
			this->eventID = ::Std_obj::parseInt(eventSnippetID);
			HX_STACK_LINE(131)
			if (((this->eventID > (int)-1))){
				HX_STACK_LINE(132)
				this->behaviorValues->set(eventSnippetID,::com::stencyl::behavior::BehaviorInstance_obj::__new(this->eventID,::haxe::ds::StringMap_obj::__new()));
			}
		}
		HX_STACK_LINE(137)
		this->joints = this->readJoints(xml->node->resolve(HX_CSTRING("joints"))->get_elements());
		HX_STACK_LINE(138)
		this->regions = this->readRegions(xml->node->resolve(HX_CSTRING("regions"))->get_elements());
		HX_STACK_LINE(139)
		this->terrainRegions = this->readTerrainRegions(xml->node->resolve(HX_CSTRING("terrainRegions"))->get_elements());
		HX_STACK_LINE(141)
		this->wireframes = this->readWireframes(xml->node->resolve(HX_CSTRING("terrain"))->get_elements());
		HX_STACK_LINE(148)
		::de::polygonal::ds::IntHashTable rawLayers = this->readRawLayers(::openfl::Assets_obj::getBytes(((HX_CSTRING("assets/data/scene-") + this->ID) + HX_CSTRING(".scn"))),numLayers);		HX_STACK_VAR(rawLayers,"rawLayers");
		HX_STACK_LINE(151)
		this->terrain = this->readLayers(xml->node->resolve(HX_CSTRING("layers"))->get_elements(),rawLayers);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,load,(void))

int Scene_obj::MAX_VERTICES;


Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(currH,"currH");
	HX_MARK_MEMBER_NAME(currW,"currW");
	HX_MARK_MEMBER_NAME(currY,"currY");
	HX_MARK_MEMBER_NAME(currX,"currX");
	HX_MARK_MEMBER_NAME(shapeList,"shapeList");
	HX_MARK_MEMBER_NAME(animatedTiles,"animatedTiles");
	HX_MARK_MEMBER_NAME(terrainRegions,"terrainRegions");
	HX_MARK_MEMBER_NAME(regions,"regions");
	HX_MARK_MEMBER_NAME(joints,"joints");
	HX_MARK_MEMBER_NAME(wireframes,"wireframes");
	HX_MARK_MEMBER_NAME(behaviorValues,"behaviorValues");
	HX_MARK_MEMBER_NAME(actors,"actors");
	HX_MARK_MEMBER_NAME(terrain,"terrain");
	HX_MARK_MEMBER_NAME(fgs,"fgs");
	HX_MARK_MEMBER_NAME(bgs,"bgs");
	HX_MARK_MEMBER_NAME(colorBackground,"colorBackground");
	HX_MARK_MEMBER_NAME(eventID,"eventID");
	HX_MARK_MEMBER_NAME(gravityY,"gravityY");
	HX_MARK_MEMBER_NAME(gravityX,"gravityX");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(sceneHeight,"sceneHeight");
	HX_MARK_MEMBER_NAME(sceneWidth,"sceneWidth");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currH,"currH");
	HX_VISIT_MEMBER_NAME(currW,"currW");
	HX_VISIT_MEMBER_NAME(currY,"currY");
	HX_VISIT_MEMBER_NAME(currX,"currX");
	HX_VISIT_MEMBER_NAME(shapeList,"shapeList");
	HX_VISIT_MEMBER_NAME(animatedTiles,"animatedTiles");
	HX_VISIT_MEMBER_NAME(terrainRegions,"terrainRegions");
	HX_VISIT_MEMBER_NAME(regions,"regions");
	HX_VISIT_MEMBER_NAME(joints,"joints");
	HX_VISIT_MEMBER_NAME(wireframes,"wireframes");
	HX_VISIT_MEMBER_NAME(behaviorValues,"behaviorValues");
	HX_VISIT_MEMBER_NAME(actors,"actors");
	HX_VISIT_MEMBER_NAME(terrain,"terrain");
	HX_VISIT_MEMBER_NAME(fgs,"fgs");
	HX_VISIT_MEMBER_NAME(bgs,"bgs");
	HX_VISIT_MEMBER_NAME(colorBackground,"colorBackground");
	HX_VISIT_MEMBER_NAME(eventID,"eventID");
	HX_VISIT_MEMBER_NAME(gravityY,"gravityY");
	HX_VISIT_MEMBER_NAME(gravityX,"gravityX");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(sceneHeight,"sceneHeight");
	HX_VISIT_MEMBER_NAME(sceneWidth,"sceneWidth");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(ID,"ID");
}

Dynamic Scene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"fgs") ) { return fgs; }
		if (HX_FIELD_EQ(inName,"bgs") ) { return bgs; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return getID_dyn(); }
		if (HX_FIELD_EQ(inName,"currH") ) { return currH; }
		if (HX_FIELD_EQ(inName,"currW") ) { return currW; }
		if (HX_FIELD_EQ(inName,"currY") ) { return currY; }
		if (HX_FIELD_EQ(inName,"currX") ) { return currX; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"joints") ) { return joints; }
		if (HX_FIELD_EQ(inName,"actors") ) { return actors; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regions") ) { return regions; }
		if (HX_FIELD_EQ(inName,"terrain") ) { return terrain; }
		if (HX_FIELD_EQ(inName,"eventID") ) { return eventID; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gravityY") ) { return gravityY; }
		if (HX_FIELD_EQ(inName,"gravityX") ) { return gravityX; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readJoint") ) { return readJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"shapeList") ) { return shapeList; }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readActors") ) { return readActors_dyn(); }
		if (HX_FIELD_EQ(inName,"readLayers") ) { return readLayers_dyn(); }
		if (HX_FIELD_EQ(inName,"readJoints") ) { return readJoints_dyn(); }
		if (HX_FIELD_EQ(inName,"readRegion") ) { return readRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"wireframes") ) { return wireframes; }
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		if (HX_FIELD_EQ(inName,"sceneWidth") ) { return sceneWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readRegions") ) { return readRegions_dyn(); }
		if (HX_FIELD_EQ(inName,"sceneHeight") ) { return sceneHeight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MAX_VERTICES") ) { return MAX_VERTICES; }
		if (HX_FIELD_EQ(inName,"readRawLayer") ) { return readRawLayer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readRawLayers") ) { return readRawLayers_dyn(); }
		if (HX_FIELD_EQ(inName,"animatedTiles") ) { return animatedTiles; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readWireframes") ) { return readWireframes_dyn(); }
		if (HX_FIELD_EQ(inName,"terrainRegions") ) { return terrainRegions; }
		if (HX_FIELD_EQ(inName,"behaviorValues") ) { return behaviorValues; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readBackgrounds") ) { return readBackgrounds_dyn(); }
		if (HX_FIELD_EQ(inName,"colorBackground") ) { return colorBackground; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addPolygonRegion") ) { return addPolygonRegion_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readActorInstance") ) { return readActorInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"readTerrainRegion") ) { return readTerrainRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"addPolygonTerrain") ) { return addPolygonTerrain_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"readTerrainRegions") ) { return readTerrainRegions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"fgs") ) { fgs=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bgs") ) { bgs=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"currH") ) { currH=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currW") ) { currW=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currY") ) { currY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currX") ) { currX=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { joints=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actors") ) { actors=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regions") ) { regions=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"terrain") ) { terrain=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventID") ) { eventID=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gravityY") ) { gravityY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityX") ) { gravityX=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shapeList") ) { shapeList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wireframes") ) { wireframes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sceneWidth") ) { sceneWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sceneHeight") ) { sceneHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MAX_VERTICES") ) { MAX_VERTICES=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"animatedTiles") ) { animatedTiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"terrainRegions") ) { terrainRegions=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"behaviorValues") ) { behaviorValues=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"colorBackground") ) { colorBackground=inValue.Cast< ::com::stencyl::models::Background >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("currH"));
	outFields->push(HX_CSTRING("currW"));
	outFields->push(HX_CSTRING("currY"));
	outFields->push(HX_CSTRING("currX"));
	outFields->push(HX_CSTRING("shapeList"));
	outFields->push(HX_CSTRING("animatedTiles"));
	outFields->push(HX_CSTRING("terrainRegions"));
	outFields->push(HX_CSTRING("regions"));
	outFields->push(HX_CSTRING("joints"));
	outFields->push(HX_CSTRING("wireframes"));
	outFields->push(HX_CSTRING("behaviorValues"));
	outFields->push(HX_CSTRING("actors"));
	outFields->push(HX_CSTRING("terrain"));
	outFields->push(HX_CSTRING("fgs"));
	outFields->push(HX_CSTRING("bgs"));
	outFields->push(HX_CSTRING("colorBackground"));
	outFields->push(HX_CSTRING("eventID"));
	outFields->push(HX_CSTRING("gravityY"));
	outFields->push(HX_CSTRING("gravityX"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("sceneHeight"));
	outFields->push(HX_CSTRING("sceneWidth"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("ID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MAX_VERTICES"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getID"),
	HX_CSTRING("readActorInstance"),
	HX_CSTRING("readActors"),
	HX_CSTRING("readWireframes"),
	HX_CSTRING("readBackgrounds"),
	HX_CSTRING("readRawLayer"),
	HX_CSTRING("readRawLayers"),
	HX_CSTRING("readLayers"),
	HX_CSTRING("readJoint"),
	HX_CSTRING("readJoints"),
	HX_CSTRING("readTerrainRegion"),
	HX_CSTRING("readTerrainRegions"),
	HX_CSTRING("addPolygonTerrain"),
	HX_CSTRING("addPolygonRegion"),
	HX_CSTRING("currH"),
	HX_CSTRING("currW"),
	HX_CSTRING("currY"),
	HX_CSTRING("currX"),
	HX_CSTRING("shapeList"),
	HX_CSTRING("readRegion"),
	HX_CSTRING("readRegions"),
	HX_CSTRING("unload"),
	HX_CSTRING("load"),
	HX_CSTRING("animatedTiles"),
	HX_CSTRING("terrainRegions"),
	HX_CSTRING("regions"),
	HX_CSTRING("joints"),
	HX_CSTRING("wireframes"),
	HX_CSTRING("behaviorValues"),
	HX_CSTRING("actors"),
	HX_CSTRING("terrain"),
	HX_CSTRING("fgs"),
	HX_CSTRING("bgs"),
	HX_CSTRING("colorBackground"),
	HX_CSTRING("eventID"),
	HX_CSTRING("gravityY"),
	HX_CSTRING("gravityX"),
	HX_CSTRING("tileHeight"),
	HX_CSTRING("tileWidth"),
	HX_CSTRING("sceneHeight"),
	HX_CSTRING("sceneWidth"),
	HX_CSTRING("name"),
	HX_CSTRING("ID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Scene_obj::MAX_VERTICES,"MAX_VERTICES");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Scene_obj::MAX_VERTICES,"MAX_VERTICES");
};

Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.Scene"), hx::TCanCast< Scene_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Scene_obj::__boot()
{
	MAX_VERTICES= (int)200;
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
