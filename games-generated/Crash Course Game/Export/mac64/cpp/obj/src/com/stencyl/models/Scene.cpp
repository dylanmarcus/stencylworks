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
HX_STACK_PUSH("Scene::new","com/stencyl/models/Scene.hx",74);
{
	HX_STACK_LINE(75)
	this->ID = ID;
	HX_STACK_LINE(76)
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
	HX_STACK_PUSH("Scene::getID","com/stencyl/models/Scene.hx",999);
	HX_STACK_THIS(this);
	HX_STACK_LINE(999)
	return this->ID;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getID,return )

::com::stencyl::models::scene::ActorInstance Scene_obj::readActorInstance( ::haxe::xml::Fast xml){
	HX_STACK_PUSH("Scene::readActorInstance","com/stencyl/models/Scene.hx",928);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xml,"xml");
	HX_STACK_LINE(929)
	int elementID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("aid")));		HX_STACK_VAR(elementID,"elementID");
	HX_STACK_LINE(930)
	int x = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("x")));		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(931)
	int y = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("y")));		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(933)
	Float scaleX = (int)1;		HX_STACK_VAR(scaleX,"scaleX");
	HX_STACK_LINE(934)
	Float scaleY = (int)1;		HX_STACK_VAR(scaleY,"scaleY");
	HX_STACK_LINE(936)
	try{
		HX_STACK_LINE(938)
		scaleX = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("sx")));
		HX_STACK_LINE(939)
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
	HX_STACK_LINE(946)
	int layerID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("z")));		HX_STACK_VAR(layerID,"layerID");
	HX_STACK_LINE(947)
	int angle = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("a")));		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(948)
	int groupID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("group")));		HX_STACK_VAR(groupID,"groupID");
	HX_STACK_LINE(949)
	int actorID = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(actorID,"actorID");
	HX_STACK_LINE(950)
	bool isCustomized = ::com::stencyl::utils::Utils_obj::toBoolean(xml->att->resolve(HX_CSTRING("c")));		HX_STACK_VAR(isCustomized,"isCustomized");
	HX_STACK_LINE(952)
	::haxe::ds::StringMap behaviors = null();		HX_STACK_VAR(behaviors,"behaviors");
	HX_STACK_LINE(954)
	if ((isCustomized)){
		HX_STACK_LINE(955)
		behaviors = ::com::stencyl::io::ActorTypeReader_obj::readBehaviors(xml->node->resolve(HX_CSTRING("snippets")));
	}
	HX_STACK_LINE(959)
	if (((bool((scaleX == (int)0)) || bool((scaleY == (int)0))))){
		HX_STACK_LINE(961)
		scaleX = (int)1;
		HX_STACK_LINE(962)
		scaleY = (int)1;
	}
	HX_STACK_LINE(965)
	if ((!(isCustomized))){
		HX_STACK_LINE(966)
		behaviors = null();
	}
	HX_STACK_LINE(970)
	if (((::com::stencyl::Data_obj::get()->resources->get(actorID) == null()))){
		HX_STACK_LINE(971)
		return null();
	}
	HX_STACK_LINE(975)
	::com::stencyl::models::scene::ActorInstance ai = ::com::stencyl::models::scene::ActorInstance_obj::__new(elementID,x,y,scaleX,scaleY,layerID,angle,groupID,actorID,behaviors,isCustomized);		HX_STACK_VAR(ai,"ai");
	HX_STACK_LINE(990)
	if (((ai->actorType != null()))){
		HX_STACK_LINE(991)
		ai->groupID = ai->actorType->groupID;
	}
	HX_STACK_LINE(995)
	return ai;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readActorInstance,return )

::haxe::ds::IntMap Scene_obj::readActors( Dynamic list){
	HX_STACK_PUSH("Scene::readActors","com/stencyl/models/Scene.hx",911);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(912)
	::haxe::ds::IntMap map = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(914)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(916)
			::com::stencyl::models::scene::ActorInstance ai = this->readActorInstance(e);		HX_STACK_VAR(ai,"ai");
			HX_STACK_LINE(918)
			if (((ai != null()))){
				HX_STACK_LINE(919)
				map->set(::Std_obj::parseInt(e->att->resolve(HX_CSTRING("aid"))),ai);
			}
		}
;
	}
	HX_STACK_LINE(924)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readActors,return )

Array< ::Dynamic > Scene_obj::readWireframes( Dynamic list){
	HX_STACK_PUSH("Scene::readWireframes","com/stencyl/models/Scene.hx",846);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(847)
	Array< ::Dynamic > map = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(849)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(851)
			Float x = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("x")));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(852)
			Float y = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("y")));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(854)
			::String shapeType = HX_CSTRING("wireframe");		HX_STACK_VAR(shapeType,"shapeType");
			HX_STACK_LINE(855)
			Array< ::String > shapeParams = e->att->resolve(HX_CSTRING("pts")).split(HX_CSTRING(","));		HX_STACK_VAR(shapeParams,"shapeParams");
			HX_STACK_LINE(858)
			if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			}
			else{
				HX_STACK_LINE(890)
				::haxe::ds::IntMap shapeData = ::com::stencyl::io::SpriteReader_obj::createShape(shapeType,shapeParams,x,y,null(),null());		HX_STACK_VAR(shapeData,"shapeData");
				HX_STACK_LINE(892)
				map->push(::com::stencyl::models::scene::Wireframe_obj::__new(::com::stencyl::Engine_obj::toPhysicalUnits(x),::com::stencyl::Engine_obj::toPhysicalUnits(y),shapeData->get((int)1),shapeData->get((int)2),shapeData->get((int)0),null()));
			}
		}
;
	}
	HX_STACK_LINE(907)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readWireframes,return )

Array< int > Scene_obj::readBackgrounds( Dynamic list){
	HX_STACK_PUSH("Scene::readBackgrounds","com/stencyl/models/Scene.hx",832);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(833)
	Array< int > map = Array_obj< int >::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(835)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		map->push(::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id"))));
	}
	HX_STACK_LINE(840)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readBackgrounds,return )

::com::stencyl::models::scene::TileLayer Scene_obj::readRawLayer( ::flash::utils::ByteArray bytes,int length){
	HX_STACK_PUSH("Scene::readRawLayer","com/stencyl/models/Scene.hx",725);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bytes,"bytes");
	HX_STACK_ARG(length,"length");
	HX_STACK_LINE(726)
	int width = ::Std_obj::_int(::Math_obj::floor((Float(this->sceneWidth) / Float(this->tileWidth))));		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(727)
	int height = ::Std_obj::_int(::Math_obj::floor((Float(this->sceneHeight) / Float(this->tileHeight))));		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(729)
	int layerID = bytes->readInt();		HX_STACK_VAR(layerID,"layerID");
	HX_STACK_LINE(730)
	hx::SubEq(length,(int)4);
	HX_STACK_LINE(732)
	int zOrder = bytes->readInt();		HX_STACK_VAR(zOrder,"zOrder");
	HX_STACK_LINE(733)
	hx::SubEq(length,(int)4);
	HX_STACK_LINE(735)
	::com::stencyl::models::scene::TileLayer layer = ::com::stencyl::models::scene::TileLayer_obj::__new(layerID,zOrder,hx::ObjectPtr<OBJ_>(this),width,height);		HX_STACK_VAR(layer,"layer");
	HX_STACK_LINE(737)
	int row = (int)0;		HX_STACK_VAR(row,"row");
	HX_STACK_LINE(738)
	int col = (int)0;		HX_STACK_VAR(col,"col");
	HX_STACK_LINE(740)
	int RLETILE_BYTE_COUNT = (int)8;		HX_STACK_VAR(RLETILE_BYTE_COUNT,"RLETILE_BYTE_COUNT");
	HX_STACK_LINE(741)
	int numChunks = ::Std_obj::_int((Float(length) / Float(RLETILE_BYTE_COUNT)));		HX_STACK_VAR(numChunks,"numChunks");
	HX_STACK_LINE(744)
	::com::stencyl::models::collision::Grid grid = ::com::stencyl::models::collision::Grid_obj::__new(this->sceneWidth,this->sceneHeight,this->tileWidth,this->tileHeight,null(),null());		HX_STACK_VAR(grid,"grid");
	HX_STACK_LINE(745)
	layer->grid = grid;
	HX_STACK_LINE(753)
	{
		HX_STACK_LINE(753)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(753)
		while(((_g < numChunks))){
			HX_STACK_LINE(753)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(756)
			bytes->readShort();
			HX_STACK_LINE(758)
			int tilesetID = bytes->readShort();		HX_STACK_VAR(tilesetID,"tilesetID");
			HX_STACK_LINE(759)
			int tileID = bytes->readShort();		HX_STACK_VAR(tileID,"tileID");
			HX_STACK_LINE(760)
			int runLength = bytes->readShort();		HX_STACK_VAR(runLength,"runLength");
			HX_STACK_LINE(762)
			::com::stencyl::models::scene::Tileset tset = null();		HX_STACK_VAR(tset,"tset");
			HX_STACK_LINE(764)
			if (((tilesetID != (int)-1))){
				HX_STACK_LINE(766)
				::com::stencyl::models::Resource temp = ::com::stencyl::Data_obj::get()->resources->get(tilesetID);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(768)
				if (((temp != null()))){
					HX_STACK_LINE(769)
					tset = hx::TCast< com::stencyl::models::scene::Tileset >::cast(::com::stencyl::Data_obj::get()->resources->get(tilesetID));
				}
			}
			HX_STACK_LINE(774)
			{
				HX_STACK_LINE(774)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(774)
				while(((_g1 < runLength))){
					HX_STACK_LINE(774)
					int runIndex = (_g1)++;		HX_STACK_VAR(runIndex,"runIndex");
					HX_STACK_LINE(776)
					if (((bool((bool((tset == null())) || bool((tileID < (int)0)))) || bool((tset == null()))))){
						HX_STACK_LINE(777)
						layer->setTileAt(row,col,null());
					}
					else{
						HX_STACK_LINE(783)
						::com::stencyl::models::scene::Tile tile = tset->tiles->__get(tileID).StaticCast< ::com::stencyl::models::scene::Tile >();		HX_STACK_VAR(tile,"tile");
						HX_STACK_LINE(785)
						if (((tile == null()))){
							HX_STACK_LINE(786)
							layer->setTileAt(row,col,null());
						}
						else{
							HX_STACK_LINE(792)
							layer->setTileAt(row,col,tile);
							HX_STACK_LINE(794)
							if (((tile->collisionID > (int)0))){
								HX_STACK_LINE(795)
								grid->setTile(col,row,true);
							}
							HX_STACK_LINE(799)
							if (((tile->pixels != null()))){
								HX_STACK_LINE(801)
								bool inList = false;		HX_STACK_VAR(inList,"inList");
								HX_STACK_LINE(803)
								{
									HX_STACK_LINE(803)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									Array< ::Dynamic > _g3 = this->animatedTiles;		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(803)
									while(((_g2 < _g3->length))){
										HX_STACK_LINE(803)
										::com::stencyl::models::scene::Tile checkTile = _g3->__get(_g2).StaticCast< ::com::stencyl::models::scene::Tile >();		HX_STACK_VAR(checkTile,"checkTile");
										HX_STACK_LINE(803)
										++(_g2);
										HX_STACK_LINE(805)
										if ((inList = (checkTile == tile))){
											HX_STACK_LINE(806)
											break;
										}
									}
								}
								HX_STACK_LINE(809)
								if ((!(inList))){
									HX_STACK_LINE(810)
									this->animatedTiles->push(tile);
								}
							}
						}
					}
					HX_STACK_LINE(817)
					(col)++;
					HX_STACK_LINE(819)
					if (((col >= width))){
						HX_STACK_LINE(821)
						col = (int)0;
						HX_STACK_LINE(822)
						(row)++;
					}
				}
			}
		}
	}
	HX_STACK_LINE(827)
	return layer;
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,readRawLayer,return )

::haxe::ds::IntMap Scene_obj::readRawLayers( ::flash::utils::ByteArray bytes,int numLayers){
	HX_STACK_PUSH("Scene::readRawLayers","com/stencyl/models/Scene.hx",703);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bytes,"bytes");
	HX_STACK_ARG(numLayers,"numLayers");
	HX_STACK_LINE(704)
	::haxe::ds::IntMap map = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(705)
	Array< int > layerHeaders = Array_obj< int >::__new();		HX_STACK_VAR(layerHeaders,"layerHeaders");
	HX_STACK_LINE(707)
	if (((bytes != null()))){
		HX_STACK_LINE(709)
		{
			HX_STACK_LINE(709)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(709)
			while(((_g < numLayers))){
				HX_STACK_LINE(709)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(711)
				layerHeaders[i] = bytes->readInt();
			}
		}
		HX_STACK_LINE(714)
		{
			HX_STACK_LINE(714)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(714)
			while(((_g < numLayers))){
				HX_STACK_LINE(714)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(716)
				::com::stencyl::models::scene::TileLayer newLayer = this->readRawLayer(bytes,layerHeaders->__get(i));		HX_STACK_VAR(newLayer,"newLayer");
				HX_STACK_LINE(717)
				map->set(newLayer->layerID,newLayer);
			}
		}
	}
	HX_STACK_LINE(721)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,readRawLayers,return )

::haxe::ds::IntMap Scene_obj::readLayers( Dynamic list,::haxe::ds::IntMap rawLayers){
	HX_STACK_PUSH("Scene::readLayers","com/stencyl/models/Scene.hx",562);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_ARG(rawLayers,"rawLayers");
	HX_STACK_LINE(563)
	::haxe::ds::IntMap map = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(565)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(567)
			Dynamic eid = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(eid,"eid");
			HX_STACK_LINE(569)
			map->set(eid,rawLayers->get(eid));
			HX_STACK_LINE(571)
			::com::stencyl::models::scene::TileLayer layer = map->get(eid);		HX_STACK_VAR(layer,"layer");
			HX_STACK_LINE(573)
			if (((layer != null()))){
				HX_STACK_LINE(575)
				layer->set_name(e->att->resolve(HX_CSTRING("name")));
				HX_STACK_LINE(576)
				layer->zOrder = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("order")));
			}
			else{
				HX_STACK_LINE(581)
				::com::stencyl::models::scene::TileLayer dummy = ::com::stencyl::models::scene::TileLayer_obj::__new(eid,::Std_obj::parseInt(e->att->resolve(HX_CSTRING("order"))),hx::ObjectPtr<OBJ_>(this),::Std_obj::_int(::Math_obj::floor((Float(this->sceneWidth) / Float(this->tileWidth)))),::Std_obj::_int(::Math_obj::floor((Float(this->sceneHeight) / Float(this->tileHeight)))));		HX_STACK_VAR(dummy,"dummy");
				HX_STACK_LINE(582)
				map->set(eid,dummy);
			}
		}
;
	}
	HX_STACK_LINE(586)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,readLayers,return )

::box2D::dynamics::joints::B2JointDef Scene_obj::readJoint( ::haxe::xml::Fast e){
	HX_STACK_PUSH("Scene::readJoint","com/stencyl/models/Scene.hx",481);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(482)
	::String type = e->get_name();		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(483)
	Dynamic elementID = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(elementID,"elementID");
	HX_STACK_LINE(485)
	Dynamic a1 = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("a1")));		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(486)
	Dynamic a2 = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("a2")));		HX_STACK_VAR(a2,"a2");
	HX_STACK_LINE(487)
	bool collide = ::com::stencyl::utils::Utils_obj::toBoolean(e->att->resolve(HX_CSTRING("collide")));		HX_STACK_VAR(collide,"collide");
	HX_STACK_LINE(489)
	if (((type == HX_CSTRING("STICK_JOINT")))){
		HX_STACK_LINE(491)
		::box2D::dynamics::joints::B2DistanceJointDef j = ::box2D::dynamics::joints::B2DistanceJointDef_obj::__new();		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(493)
		j->ID = elementID;
		HX_STACK_LINE(494)
		j->actor1 = a1;
		HX_STACK_LINE(495)
		j->actor2 = a2;
		HX_STACK_LINE(496)
		j->localAnchorA = null();
		HX_STACK_LINE(497)
		j->localAnchorB = null();
		HX_STACK_LINE(498)
		j->collideConnected = collide;
		HX_STACK_LINE(502)
		j->dampingRatio = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("damping")));
		HX_STACK_LINE(503)
		j->frequencyHz = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("freq")));
		HX_STACK_LINE(505)
		return j;
	}
	else{
		HX_STACK_LINE(508)
		if (((type == HX_CSTRING("HINGE_JOINT")))){
			HX_STACK_LINE(510)
			::box2D::dynamics::joints::B2RevoluteJointDef j2 = ::box2D::dynamics::joints::B2RevoluteJointDef_obj::__new();		HX_STACK_VAR(j2,"j2");
			HX_STACK_LINE(512)
			j2->ID = elementID;
			HX_STACK_LINE(513)
			j2->actor1 = a1;
			HX_STACK_LINE(514)
			j2->actor2 = a2;
			HX_STACK_LINE(515)
			j2->localAnchorA = null();
			HX_STACK_LINE(516)
			j2->localAnchorB = null();
			HX_STACK_LINE(517)
			j2->collideConnected = collide;
			HX_STACK_LINE(521)
			j2->enableLimit = ::com::stencyl::utils::Utils_obj::toBoolean(e->att->resolve(HX_CSTRING("limit")));
			HX_STACK_LINE(522)
			j2->enableMotor = ::com::stencyl::utils::Utils_obj::toBoolean(e->att->resolve(HX_CSTRING("motor")));
			HX_STACK_LINE(523)
			j2->lowerAngle = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("lower")));
			HX_STACK_LINE(524)
			j2->upperAngle = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("upper")));
			HX_STACK_LINE(525)
			j2->maxMotorTorque = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("torque")));
			HX_STACK_LINE(526)
			j2->motorSpeed = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("speed")));
			HX_STACK_LINE(528)
			return j2;
		}
		else{
			HX_STACK_LINE(531)
			if (((type == HX_CSTRING("SLIDING_JOINT")))){
				HX_STACK_LINE(533)
				::box2D::dynamics::joints::B2LineJointDef j3 = ::box2D::dynamics::joints::B2LineJointDef_obj::__new();		HX_STACK_VAR(j3,"j3");
				HX_STACK_LINE(535)
				j3->ID = elementID;
				HX_STACK_LINE(536)
				j3->actor1 = a1;
				HX_STACK_LINE(537)
				j3->actor2 = a2;
				HX_STACK_LINE(538)
				j3->localAnchorA = null();
				HX_STACK_LINE(539)
				j3->localAnchorB = null();
				HX_STACK_LINE(540)
				j3->collideConnected = collide;
				HX_STACK_LINE(544)
				j3->enableLimit = ::com::stencyl::utils::Utils_obj::toBoolean(e->att->resolve(HX_CSTRING("limit")));
				HX_STACK_LINE(545)
				j3->enableMotor = ::com::stencyl::utils::Utils_obj::toBoolean(e->att->resolve(HX_CSTRING("motor")));
				HX_STACK_LINE(546)
				j3->lowerTranslation = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("lower")));
				HX_STACK_LINE(547)
				j3->upperTranslation = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("upper")));
				HX_STACK_LINE(548)
				j3->maxMotorForce = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("force")));
				HX_STACK_LINE(549)
				j3->motorSpeed = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("speed")));
				HX_STACK_LINE(550)
				j3->localAxisA->x = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("x")));
				HX_STACK_LINE(551)
				j3->localAxisA->y = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("y")));
				HX_STACK_LINE(553)
				return j3;
			}
		}
	}
	HX_STACK_LINE(556)
	::haxe::Log_obj::trace((HX_CSTRING("Error: unsuppported joint type: ") + type),hx::SourceInfo(HX_CSTRING("Scene.hx"),556,HX_CSTRING("com.stencyl.models.Scene"),HX_CSTRING("readJoint")));
	HX_STACK_LINE(558)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readJoint,return )

::haxe::ds::IntMap Scene_obj::readJoints( Dynamic list){
	HX_STACK_PUSH("Scene::readJoints","com/stencyl/models/Scene.hx",468);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(469)
	::haxe::ds::IntMap map = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(471)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(473)
			::box2D::dynamics::joints::B2JointDef j = this->readJoint(e);		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(474)
			map->set(j->ID,j);
		}
;
	}
	HX_STACK_LINE(477)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readJoints,return )

::com::stencyl::models::scene::TerrainDef Scene_obj::readTerrainRegion( ::haxe::xml::Fast e){
	HX_STACK_PUSH("Scene::readTerrainRegion","com/stencyl/models/Scene.hx",394);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(395)
	::String type = e->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(396)
	Dynamic elementID = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(elementID,"elementID");
	HX_STACK_LINE(397)
	::String name = e->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(398)
	Dynamic group = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("group")));		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(399)
	::com::stencyl::models::scene::TerrainDef terrainRegion;		HX_STACK_VAR(terrainRegion,"terrainRegion");
	HX_STACK_LINE(401)
	Float x = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("x"))));		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(402)
	Float y = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("y"))));		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(403)
	int r = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("r")));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(404)
	int g = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("g")));		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(405)
	int b = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("b")));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(406)
	int fillColor = (int((int((int(r) << int((int)16))) | int((int(g) << int((int)8))))) | int(b));		HX_STACK_VAR(fillColor,"fillColor");
	HX_STACK_LINE(408)
	::box2D::collision::shapes::B2Shape shape = null();		HX_STACK_VAR(shape,"shape");
	HX_STACK_LINE(409)
	Array< ::Dynamic > ps = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(ps,"ps");
	HX_STACK_LINE(410)
	this->shapeList = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(411)
	Array< ::String > decompParams;		HX_STACK_VAR(decompParams,"decompParams");
	HX_STACK_LINE(413)
	if (((type == HX_CSTRING("box")))){
		HX_STACK_LINE(415)
		Float w = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("w"))));		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(416)
		Float h = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("h"))));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(417)
		::box2D::collision::shapes::B2PolygonShape box = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(box,"box");
		HX_STACK_LINE(418)
		box->setAsBox((Float(w) / Float((int)2)),(Float(h) / Float((int)2)));
		HX_STACK_LINE(419)
		shape = box;
		HX_STACK_LINE(420)
		this->shapeList[(int)0] = shape;
		HX_STACK_LINE(421)
		terrainRegion = ::com::stencyl::models::scene::TerrainDef_obj::__new(this->shapeList,elementID,name,x,y,group,fillColor);
	}
	else{
		HX_STACK_LINE(424)
		if (((type == HX_CSTRING("poly")))){
			HX_STACK_LINE(426)
			Float w = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("w")));		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(427)
			Float h = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("h")));		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(429)
			::String shapeType = HX_CSTRING("polyregion");		HX_STACK_VAR(shapeType,"shapeType");
			HX_STACK_LINE(430)
			Array< ::String > shapeParams = e->att->resolve(HX_CSTRING("pts")).split(HX_CSTRING(","));		HX_STACK_VAR(shapeParams,"shapeParams");
			HX_STACK_LINE(433)
			this->currX = x;
			HX_STACK_LINE(434)
			this->currY = y;
			HX_STACK_LINE(435)
			this->currW = w;
			HX_STACK_LINE(436)
			this->currH = h;
			HX_STACK_LINE(438)
			Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
			HX_STACK_LINE(439)
			Float numVertices = ::Std_obj::parseFloat(shapeParams->__get((int)0));		HX_STACK_VAR(numVertices,"numVertices");
			HX_STACK_LINE(440)
			int vIndex = (int)0;		HX_STACK_VAR(vIndex,"vIndex");
			HX_STACK_LINE(441)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(443)
			while(((vIndex < numVertices))){
				HX_STACK_LINE(445)
				points->push(::flash::geom::Point_obj::__new(::Std_obj::parseFloat(shapeParams->__get((i + (int)1))),::Std_obj::parseFloat(shapeParams->__get((i + (int)2)))));
				HX_STACK_LINE(446)
				(vIndex)++;
				HX_STACK_LINE(447)
				hx::AddEq(i,(int)2);
			}
			HX_STACK_LINE(450)
			::com::stencyl::utils::PolyDecompBayazit decomp = ::com::stencyl::utils::PolyDecompBayazit_obj::__new(points);		HX_STACK_VAR(decomp,"decomp");
			HX_STACK_LINE(451)
			decomp->decompose(this->addPolygonTerrain_dyn());
			HX_STACK_LINE(452)
			terrainRegion = ::com::stencyl::models::scene::TerrainDef_obj::__new(this->shapeList,elementID,name,x,y,group,fillColor);
		}
		else{
			HX_STACK_LINE(457)
			Float radius = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("rad"))));		HX_STACK_VAR(radius,"radius");
			HX_STACK_LINE(458)
			shape = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());
			HX_STACK_LINE(459)
			shape->m_radius = radius;
			HX_STACK_LINE(460)
			this->shapeList[(int)0] = shape;
			HX_STACK_LINE(461)
			terrainRegion = ::com::stencyl::models::scene::TerrainDef_obj::__new(this->shapeList,elementID,name,x,y,group,fillColor);
		}
	}
	HX_STACK_LINE(464)
	return terrainRegion;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readTerrainRegion,return )

::haxe::ds::IntMap Scene_obj::readTerrainRegions( Dynamic list){
	HX_STACK_PUSH("Scene::readTerrainRegions","com/stencyl/models/Scene.hx",381);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(382)
	::haxe::ds::IntMap map = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(384)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(386)
			::com::stencyl::models::scene::TerrainDef r = this->readTerrainRegion(e);		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(387)
			map->set(r->ID,r);
		}
;
	}
	HX_STACK_LINE(390)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readTerrainRegions,return )

Void Scene_obj::addPolygonTerrain( ::com::stencyl::utils::PolyDecompBayazit p){
{
		HX_STACK_PUSH("Scene::addPolygonTerrain","com/stencyl/models/Scene.hx",347);
		HX_STACK_THIS(this);
		HX_STACK_ARG(p,"p");
		HX_STACK_LINE(350)
		Float loX = 1.7976931348623158e+308;		HX_STACK_VAR(loX,"loX");
		HX_STACK_LINE(351)
		Float loY = 1.7976931348623158e+308;		HX_STACK_VAR(loY,"loY");
		HX_STACK_LINE(352)
		Float hiX = (int)0;		HX_STACK_VAR(hiX,"hiX");
		HX_STACK_LINE(353)
		Float hiY = (int)0;		HX_STACK_VAR(hiY,"hiY");
		HX_STACK_LINE(355)
		Array< ::String > decompParams = Array_obj< ::String >::__new();		HX_STACK_VAR(decompParams,"decompParams");
		HX_STACK_LINE(356)
		decompParams[(int)0] = (HX_CSTRING("") + p->points->length);
		HX_STACK_LINE(358)
		{
			HX_STACK_LINE(358)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = p->points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(358)
			while(((_g1 < _g))){
				HX_STACK_LINE(358)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(360)
				loX = ::Math_obj::min(loX,p->points->__get(j).StaticCast< ::flash::geom::Point >()->x);
				HX_STACK_LINE(361)
				loY = ::Math_obj::min(loY,p->points->__get(j).StaticCast< ::flash::geom::Point >()->y);
				HX_STACK_LINE(362)
				hiX = ::Math_obj::min(hiX,p->points->__get(j).StaticCast< ::flash::geom::Point >()->x);
				HX_STACK_LINE(363)
				hiY = ::Math_obj::min(hiY,p->points->__get(j).StaticCast< ::flash::geom::Point >()->y);
				HX_STACK_LINE(364)
				decompParams->push((HX_CSTRING("") + p->points->__get(j).StaticCast< ::flash::geom::Point >()->x));
				HX_STACK_LINE(365)
				decompParams->push((HX_CSTRING("") + p->points->__get(j).StaticCast< ::flash::geom::Point >()->y));
			}
		}
		HX_STACK_LINE(368)
		Float localWidth;		HX_STACK_VAR(localWidth,"localWidth");
		HX_STACK_LINE(369)
		Float localHeight;		HX_STACK_VAR(localHeight,"localHeight");
		HX_STACK_LINE(371)
		localWidth = (hiX - loX);
		HX_STACK_LINE(372)
		localHeight = (hiY - loY);
		HX_STACK_LINE(373)
		loX = ::com::stencyl::Engine_obj::toPhysicalUnits(loX);
		HX_STACK_LINE(374)
		loY = ::com::stencyl::Engine_obj::toPhysicalUnits(loY);
		HX_STACK_LINE(376)
		::box2D::collision::shapes::B2PolygonShape polyShape = hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(::com::stencyl::io::SpriteReader_obj::createShape(HX_CSTRING("polyregion"),decompParams,this->currX,this->currY,this->currW,this->currH));		HX_STACK_VAR(polyShape,"polyShape");
		HX_STACK_LINE(377)
		this->shapeList->push(polyShape);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addPolygonTerrain,(void))

Void Scene_obj::addPolygonRegion( ::com::stencyl::utils::PolyDecompBayazit p){
{
		HX_STACK_PUSH("Scene::addPolygonRegion","com/stencyl/models/Scene.hx",313);
		HX_STACK_THIS(this);
		HX_STACK_ARG(p,"p");
		HX_STACK_LINE(316)
		Float loX = 1.7976931348623158e+308;		HX_STACK_VAR(loX,"loX");
		HX_STACK_LINE(317)
		Float loY = 1.7976931348623158e+308;		HX_STACK_VAR(loY,"loY");
		HX_STACK_LINE(318)
		Float hiX = (int)0;		HX_STACK_VAR(hiX,"hiX");
		HX_STACK_LINE(319)
		Float hiY = (int)0;		HX_STACK_VAR(hiY,"hiY");
		HX_STACK_LINE(321)
		Array< ::String > decompParams = Array_obj< ::String >::__new();		HX_STACK_VAR(decompParams,"decompParams");
		HX_STACK_LINE(322)
		decompParams[(int)0] = (HX_CSTRING("") + p->points->length);
		HX_STACK_LINE(324)
		{
			HX_STACK_LINE(324)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = p->points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(324)
			while(((_g1 < _g))){
				HX_STACK_LINE(324)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(326)
				loX = ::Math_obj::min(loX,p->points->__get(j).StaticCast< ::flash::geom::Point >()->x);
				HX_STACK_LINE(327)
				loY = ::Math_obj::min(loY,p->points->__get(j).StaticCast< ::flash::geom::Point >()->y);
				HX_STACK_LINE(328)
				hiX = ::Math_obj::min(hiX,p->points->__get(j).StaticCast< ::flash::geom::Point >()->x);
				HX_STACK_LINE(329)
				hiY = ::Math_obj::min(hiY,p->points->__get(j).StaticCast< ::flash::geom::Point >()->y);
				HX_STACK_LINE(330)
				decompParams->push((HX_CSTRING("") + p->points->__get(j).StaticCast< ::flash::geom::Point >()->x));
				HX_STACK_LINE(331)
				decompParams->push((HX_CSTRING("") + p->points->__get(j).StaticCast< ::flash::geom::Point >()->y));
			}
		}
		HX_STACK_LINE(334)
		Float localWidth;		HX_STACK_VAR(localWidth,"localWidth");
		HX_STACK_LINE(335)
		Float localHeight;		HX_STACK_VAR(localHeight,"localHeight");
		HX_STACK_LINE(337)
		localWidth = (hiX - loX);
		HX_STACK_LINE(338)
		localHeight = (hiY - loY);
		HX_STACK_LINE(339)
		loX = ::com::stencyl::Engine_obj::toPhysicalUnits(loX);
		HX_STACK_LINE(340)
		loY = ::com::stencyl::Engine_obj::toPhysicalUnits(loY);
		HX_STACK_LINE(342)
		::box2D::collision::shapes::B2PolygonShape polyShape = hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(::com::stencyl::io::SpriteReader_obj::createShape(HX_CSTRING("polyregion"),decompParams,this->currX,this->currY,this->currW,this->currH));		HX_STACK_VAR(polyShape,"polyShape");
		HX_STACK_LINE(343)
		this->shapeList->push(polyShape);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addPolygonRegion,(void))

::com::stencyl::models::scene::RegionDef Scene_obj::readRegion( ::haxe::xml::Fast e){
	HX_STACK_PUSH("Scene::readRegion","com/stencyl/models/Scene.hx",185);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_LINE(186)
	::String type = e->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(187)
	Dynamic elementID = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id")));		HX_STACK_VAR(elementID,"elementID");
	HX_STACK_LINE(188)
	::String name = e->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(189)
	::com::stencyl::models::scene::RegionDef region;		HX_STACK_VAR(region,"region");
	HX_STACK_LINE(191)
	Float x = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("x"))));		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(192)
	Float y = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("y"))));		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(194)
	::box2D::collision::shapes::B2Shape shape = null();		HX_STACK_VAR(shape,"shape");
	HX_STACK_LINE(195)
	Array< ::Dynamic > ps = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(ps,"ps");
	HX_STACK_LINE(196)
	this->shapeList = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(197)
	Array< ::String > decompParams;		HX_STACK_VAR(decompParams,"decompParams");
	HX_STACK_LINE(199)
	if (((type == HX_CSTRING("box")))){
		HX_STACK_LINE(201)
		Float w = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("w"))));		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(202)
		Float h = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("h"))));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(204)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(206)
			w = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("w")));
			HX_STACK_LINE(207)
			h = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("h")));
			HX_STACK_LINE(209)
			region = ::com::stencyl::models::scene::RegionDef_obj::__new(this->shapeList,elementID,name,x,y,(int)0,::flash::geom::Rectangle_obj::__new((int)0,(int)0,w,h));
		}
		else{
			HX_STACK_LINE(214)
			::box2D::collision::shapes::B2PolygonShape box = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(box,"box");
			HX_STACK_LINE(215)
			box->setAsBox((Float(w) / Float((int)2)),(Float(h) / Float((int)2)));
			HX_STACK_LINE(216)
			shape = box;
			HX_STACK_LINE(217)
			this->shapeList[(int)0] = shape;
			HX_STACK_LINE(218)
			region = ::com::stencyl::models::scene::RegionDef_obj::__new(this->shapeList,elementID,name,x,y,null(),null());
		}
	}
	else{
		HX_STACK_LINE(222)
		if (((type == HX_CSTRING("poly")))){
			HX_STACK_LINE(224)
			Float w = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("w")));		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(225)
			Float h = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("h")));		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(226)
			::String pts = null();		HX_STACK_VAR(pts,"pts");
			HX_STACK_LINE(228)
			if ((e->has->resolve(HX_CSTRING("pts")))){
				HX_STACK_LINE(229)
				pts = e->att->resolve(HX_CSTRING("pts"));
			}
			HX_STACK_LINE(233)
			::String shapeType = HX_CSTRING("polyregion");		HX_STACK_VAR(shapeType,"shapeType");
			HX_STACK_LINE(236)
			if (((bool((pts == null())) || bool(::com::stencyl::Engine_obj::NO_PHYSICS)))){
				HX_STACK_LINE(238)
				if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
					HX_STACK_LINE(240)
					w = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("w")));
					HX_STACK_LINE(241)
					h = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("h")));
					HX_STACK_LINE(243)
					region = ::com::stencyl::models::scene::RegionDef_obj::__new(this->shapeList,elementID,name,x,y,(int)0,::flash::geom::Rectangle_obj::__new((int)0,(int)0,w,h));
				}
				else{
					HX_STACK_LINE(248)
					::box2D::collision::shapes::B2PolygonShape box = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(box,"box");
					HX_STACK_LINE(249)
					box->setAsBox((Float(w) / Float((int)2)),(Float(h) / Float((int)2)));
					HX_STACK_LINE(250)
					shape = box;
					HX_STACK_LINE(251)
					this->shapeList[(int)0] = shape;
					HX_STACK_LINE(252)
					region = ::com::stencyl::models::scene::RegionDef_obj::__new(this->shapeList,elementID,name,x,y,null(),null());
				}
				HX_STACK_LINE(255)
				return region;
			}
			HX_STACK_LINE(259)
			this->currX = x;
			HX_STACK_LINE(260)
			this->currY = y;
			HX_STACK_LINE(261)
			this->currW = w;
			HX_STACK_LINE(262)
			this->currH = h;
			HX_STACK_LINE(264)
			Array< ::String > shapeParams = pts.split(HX_CSTRING(","));		HX_STACK_VAR(shapeParams,"shapeParams");
			HX_STACK_LINE(266)
			Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
			HX_STACK_LINE(267)
			Float numVertices = ::Std_obj::parseFloat(shapeParams->__get((int)0));		HX_STACK_VAR(numVertices,"numVertices");
			HX_STACK_LINE(268)
			int vIndex = (int)0;		HX_STACK_VAR(vIndex,"vIndex");
			HX_STACK_LINE(269)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(271)
			while(((vIndex < numVertices))){
				HX_STACK_LINE(273)
				points->push(::flash::geom::Point_obj::__new(::Std_obj::parseFloat(shapeParams->__get((i + (int)1))),::Std_obj::parseFloat(shapeParams->__get((i + (int)2)))));
				HX_STACK_LINE(274)
				(vIndex)++;
				HX_STACK_LINE(275)
				hx::AddEq(i,(int)2);
			}
			HX_STACK_LINE(278)
			::com::stencyl::utils::PolyDecompBayazit decomp = ::com::stencyl::utils::PolyDecompBayazit_obj::__new(points);		HX_STACK_VAR(decomp,"decomp");
			HX_STACK_LINE(279)
			decomp->decompose(this->addPolygonRegion_dyn());
			HX_STACK_LINE(280)
			region = ::com::stencyl::models::scene::RegionDef_obj::__new(this->shapeList,elementID,name,x,y,null(),null());
		}
		else{
			HX_STACK_LINE(285)
			Float radius = ::com::stencyl::Engine_obj::toPhysicalUnits(::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("rad"))));		HX_STACK_VAR(radius,"radius");
			HX_STACK_LINE(287)
			if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
				HX_STACK_LINE(289)
				radius = ::Std_obj::parseFloat(e->att->resolve(HX_CSTRING("rad")));
				HX_STACK_LINE(291)
				region = ::com::stencyl::models::scene::RegionDef_obj::__new(this->shapeList,elementID,name,x,y,(int)0,::flash::geom::Rectangle_obj::__new((int)0,(int)0,(radius * (int)2),(radius * (int)2)));
			}
			else{
				HX_STACK_LINE(296)
				shape = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());
				HX_STACK_LINE(297)
				shape->m_radius = radius;
				HX_STACK_LINE(298)
				this->shapeList[(int)0] = shape;
				HX_STACK_LINE(299)
				region = ::com::stencyl::models::scene::RegionDef_obj::__new(this->shapeList,elementID,name,x,y,null(),null());
			}
		}
	}
	HX_STACK_LINE(303)
	return region;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readRegion,return )

::haxe::ds::IntMap Scene_obj::readRegions( Dynamic list){
	HX_STACK_PUSH("Scene::readRegions","com/stencyl/models/Scene.hx",172);
	HX_STACK_THIS(this);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(173)
	::haxe::ds::IntMap map = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(175)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list);  __it->hasNext(); ){
		::haxe::xml::Fast e = __it->next();
		{
			HX_STACK_LINE(177)
			::com::stencyl::models::scene::RegionDef r = this->readRegion(e);		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(178)
			map->set(r->ID,r);
		}
;
	}
	HX_STACK_LINE(181)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,readRegions,return )

Void Scene_obj::unload( ){
{
		HX_STACK_PUSH("Scene::unload","com/stencyl/models/Scene.hx",152);
		HX_STACK_THIS(this);
		HX_STACK_LINE(153)
		this->colorBackground = null();
		HX_STACK_LINE(155)
		this->bgs = null();
		HX_STACK_LINE(156)
		this->fgs = null();
		HX_STACK_LINE(158)
		this->terrain = null();
		HX_STACK_LINE(159)
		this->actors = null();
		HX_STACK_LINE(160)
		this->behaviorValues = null();
		HX_STACK_LINE(163)
		this->wireframes = null();
		HX_STACK_LINE(164)
		this->joints = null();
		HX_STACK_LINE(165)
		this->regions = null();
		HX_STACK_LINE(166)
		this->terrainRegions = null();
		HX_STACK_LINE(168)
		this->animatedTiles = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,unload,(void))

Void Scene_obj::load( ){
{
		HX_STACK_PUSH("Scene::load","com/stencyl/models/Scene.hx",80);
		HX_STACK_THIS(this);
		HX_STACK_LINE(81)
		::haxe::xml::Fast xml = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(::openfl::Assets_obj::getText(((HX_CSTRING("assets/data/scene-") + this->ID) + HX_CSTRING(".xml"))))->firstElement());		HX_STACK_VAR(xml,"xml");
		HX_STACK_LINE(83)
		int numLayers = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("depth")));		HX_STACK_VAR(numLayers,"numLayers");
		HX_STACK_LINE(85)
		this->sceneWidth = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("width")));
		HX_STACK_LINE(86)
		this->sceneHeight = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("height")));
		HX_STACK_LINE(88)
		this->tileWidth = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("tilew")));
		HX_STACK_LINE(89)
		this->tileHeight = ::Std_obj::parseInt(xml->att->resolve(HX_CSTRING("tileh")));
		HX_STACK_LINE(91)
		this->gravityX = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("gravx")));
		HX_STACK_LINE(92)
		this->gravityY = ::Std_obj::parseFloat(xml->att->resolve(HX_CSTRING("gravy")));
		HX_STACK_LINE(94)
		this->animatedTiles = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(96)
		this->bgs = this->readBackgrounds(xml->node->resolve(HX_CSTRING("backgrounds"))->get_elements());
		HX_STACK_LINE(97)
		this->fgs = this->readBackgrounds(xml->node->resolve(HX_CSTRING("foregrounds"))->get_elements());
		HX_STACK_LINE(99)
		this->colorBackground = ::com::stencyl::models::background::ColorBackground_obj::__new((int)-1);
		HX_STACK_LINE(101)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(xml->get_elements());  __it->hasNext(); ){
			::haxe::xml::Fast e = __it->next();
			if (((bool((e->get_name() == HX_CSTRING("color-bg"))) || bool((e->get_name() == HX_CSTRING("grad-bg")))))){
				HX_STACK_LINE(105)
				this->colorBackground = hx::TCast< com::stencyl::models::Background >::cast(::com::stencyl::io::BackgroundReader_obj::__new()->read((int)0,(int)0,e->get_name(),HX_CSTRING(""),e));
				HX_STACK_LINE(106)
				break;
			}
;
		}
		HX_STACK_LINE(110)
		this->actors = this->readActors(xml->node->resolve(HX_CSTRING("actors"))->get_elements());
		HX_STACK_LINE(111)
		this->behaviorValues = ::com::stencyl::io::ActorTypeReader_obj::readBehaviors(xml->node->resolve(HX_CSTRING("snippets")));
		HX_STACK_LINE(113)
		::String eventSnippetID = HX_CSTRING("");		HX_STACK_VAR(eventSnippetID,"eventSnippetID");
		HX_STACK_LINE(115)
		try{
			HX_STACK_LINE(116)
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
		HX_STACK_LINE(124)
		if (((eventSnippetID != HX_CSTRING("")))){
			HX_STACK_LINE(126)
			this->eventID = ::Std_obj::parseInt(eventSnippetID);
			HX_STACK_LINE(128)
			if (((this->eventID > (int)-1))){
				HX_STACK_LINE(129)
				this->behaviorValues->set(eventSnippetID,::com::stencyl::behavior::BehaviorInstance_obj::__new(this->eventID,::haxe::ds::StringMap_obj::__new()));
			}
		}
		HX_STACK_LINE(134)
		this->joints = this->readJoints(xml->node->resolve(HX_CSTRING("joints"))->get_elements());
		HX_STACK_LINE(135)
		this->regions = this->readRegions(xml->node->resolve(HX_CSTRING("regions"))->get_elements());
		HX_STACK_LINE(136)
		this->terrainRegions = this->readTerrainRegions(xml->node->resolve(HX_CSTRING("terrainRegions"))->get_elements());
		HX_STACK_LINE(138)
		this->wireframes = this->readWireframes(xml->node->resolve(HX_CSTRING("terrain"))->get_elements());
		HX_STACK_LINE(145)
		::haxe::ds::IntMap rawLayers = this->readRawLayers(::openfl::Assets_obj::getBytes(((HX_CSTRING("assets/data/scene-") + this->ID) + HX_CSTRING(".scn"))),numLayers);		HX_STACK_VAR(rawLayers,"rawLayers");
		HX_STACK_LINE(148)
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
		if (HX_FIELD_EQ(inName,"terrain") ) { terrain=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
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
