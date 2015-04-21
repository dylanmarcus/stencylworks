#include <hxcpp.h>

#include <scripts/MyScripts.h>
#include <scripts/MyAssets.h>
#include <openfl/utils/WeakRef.h>
#include <openfl/utils/SystemPath.h>
#include <openfl/ui/Accelerometer.h>
#include <openfl/events/SystemEvent.h>
#include <openfl/events/JoystickEvent.h>
#include <openfl/display/Tilesheet.h>
#include <openfl/display/ManagedStage.h>
#include <openfl/AssetType.h>
#include <openfl/AssetData.h>
#include <openfl/Assets.h>
#include <openfl/AssetCache.h>
#include <motion/easing/SineEaseOut.h>
#include <motion/easing/SineEaseInOut.h>
#include <motion/easing/SineEaseIn.h>
#include <motion/easing/Sine.h>
#include <motion/easing/QuintEaseOut.h>
#include <motion/easing/QuintEaseInOut.h>
#include <motion/easing/QuintEaseIn.h>
#include <motion/easing/Quint.h>
#include <motion/easing/QuartEaseOut.h>
#include <motion/easing/QuartEaseInOut.h>
#include <motion/easing/QuartEaseIn.h>
#include <motion/easing/Quart.h>
#include <motion/easing/QuadEaseOut.h>
#include <motion/easing/QuadEaseInOut.h>
#include <motion/easing/QuadEaseIn.h>
#include <motion/easing/Quad.h>
#include <motion/easing/LinearEaseNone.h>
#include <motion/easing/Linear.h>
#include <motion/easing/ExpoEaseInOut.h>
#include <motion/easing/ExpoEaseIn.h>
#include <motion/easing/ElasticEaseOut.h>
#include <motion/easing/ElasticEaseInOut.h>
#include <motion/easing/ElasticEaseIn.h>
#include <motion/easing/Elastic.h>
#include <motion/easing/CubicEaseOut.h>
#include <motion/easing/CubicEaseInOut.h>
#include <motion/easing/CubicEaseIn.h>
#include <motion/easing/Cubic.h>
#include <motion/easing/BackEaseOut.h>
#include <motion/easing/BackEaseInOut.h>
#include <motion/easing/BackEaseIn.h>
#include <motion/easing/Back.h>
#include <motion/actuators/TransformActuator.h>
#include <motion/actuators/PropertyPathDetails.h>
#include <motion/actuators/PropertyDetails.h>
#include <motion/actuators/MotionPathActuator.h>
#include <motion/actuators/MethodActuator.h>
#include <motion/actuators/FilterActuator.h>
#include <motion/LinearPath.h>
#include <motion/BezierPath.h>
#include <motion/ComponentPath.h>
#include <motion/IComponentPath.h>
#include <motion/MotionPath.h>
#include <motion/_Actuate/TweenTimer.h>
#include <motion/_Actuate/TransformOptions.h>
#include <motion/_Actuate/EffectsOptions.h>
#include <motion/Actuate.h>
#include <motion/easing/ExpoEaseOut.h>
#include <motion/easing/IEasing.h>
#include <motion/easing/Expo.h>
#include <motion/actuators/SimpleActuator.h>
#include <motion/actuators/GenericActuator.h>
#include <motion/actuators/IGenericActuator.h>
#include <haxe/xml/Fast.h>
#include <haxe/xml/_Fast/NodeListAccess.h>
#include <haxe/xml/_Fast/HasNodeAccess.h>
#include <haxe/xml/_Fast/HasAttribAccess.h>
#include <haxe/xml/_Fast/AttribAccess.h>
#include <haxe/xml/_Fast/NodeAccess.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Serializer.h>
#include <haxe/Resource.h>
#include <haxe/Log.h>
#include <haxe/Int64.h>
#include <flash/utils/Endian.h>
#include <flash/utils/CompressionAlgorithm.h>
#include <flash/utils/ByteArray.h>
#include <flash/utils/IDataInput.h>
#include <openfl/utils/IMemoryRange.h>
#include <flash/utils/IDataOutput.h>
#include <flash/ui/MultitouchInputMode.h>
#include <flash/ui/Multitouch.h>
#include <flash/ui/Mouse.h>
#include <flash/ui/Keyboard.h>
#include <flash/text/TextLineMetrics.h>
#include <flash/text/TextFormat.h>
#include <flash/text/TextFieldType.h>
#include <flash/text/TextFieldAutoSize.h>
#include <flash/text/TextField.h>
#include <flash/text/GridFitType.h>
#include <flash/text/FontType.h>
#include <flash/text/FontStyle.h>
#include <flash/text/Font.h>
#include <flash/text/AntiAliasType.h>
#include <flash/system/System.h>
#include <flash/system/SecurityDomain.h>
#include <flash/system/LoaderContext.h>
#include <flash/system/ApplicationDomain.h>
#include <flash/sensors/Accelerometer.h>
#include <flash/net/URLVariables.h>
#include <flash/net/URLRequestMethod.h>
#include <flash/net/URLRequestHeader.h>
#include <flash/net/URLRequest.h>
#include <flash/net/URLLoaderDataFormat.h>
#include <flash/net/SharedObjectFlushStatus.h>
#include <flash/net/SharedObject.h>
#include <flash/media/SoundLoaderContext.h>
#include <flash/media/SoundChannel.h>
#include <flash/media/Sound.h>
#include <flash/media/ID3Info.h>
#include <flash/geom/Vector3D.h>
#include <flash/geom/Transform.h>
#include <flash/geom/ColorTransform.h>
#include <flash/filters/BitmapFilter.h>
#include <flash/filesystem/File.h>
#include <flash/events/UncaughtErrorEvents.h>
#include <flash/events/UncaughtErrorEvent.h>
#include <flash/events/SampleDataEvent.h>
#include <flash/events/ProgressEvent.h>
#include <flash/events/KeyboardEvent.h>
#include <flash/events/IOErrorEvent.h>
#include <flash/events/HTTPStatusEvent.h>
#include <flash/events/FocusEvent.h>
#include <flash/events/EventPhase.h>
#include <flash/events/Listener.h>
#include <flash/events/ErrorEvent.h>
#include <flash/events/TextEvent.h>
#include <flash/events/AccelerometerEvent.h>
#include <flash/errors/RangeError.h>
#include <flash/errors/EOFError.h>
#include <flash/errors/ArgumentError.h>
#include <flash/errors/Error.h>
#include <flash/display/TriangleCulling.h>
#include <flash/display/StageScaleMode.h>
#include <flash/display/StageQuality.h>
#include <flash/display/StageDisplayState.h>
#include <flash/display/StageAlign.h>
#include <flash/display/TouchInfo.h>
#include <flash/display/Stage.h>
#include <flash/display/SpreadMethod.h>
#include <flash/display/Shape.h>
#include <flash/display/PixelSnapping.h>
#include <flash/display/MovieClip.h>
#include <flash/display/LoaderInfo.h>
#include <flash/net/URLLoader.h>
#include <flash/display/Loader.h>
#include <flash/display/LineScaleMode.h>
#include <flash/display/JointStyle.h>
#include <flash/display/InterpolationMethod.h>
#include <flash/display/IGraphicsData.h>
#include <flash/display/GraphicsPathWinding.h>
#include <flash/display/Graphics.h>
#include <flash/display/GradientType.h>
#include <flash/display/CapsStyle.h>
#include <flash/display/BlendMode.h>
#include <flash/display/BitmapDataChannel.h>
#include <flash/display/OptimizedPerlin.h>
#include <flash/display/BitmapData.h>
#include <flash/_Vector/Vector_Impl_.h>
#include <flash/Memory.h>
#include <de/polygonal/ds/error/Assert.h>
#include <de/polygonal/ds/ListSet.h>
#include <de/polygonal/ds/IntIntHashTableKeyIterator.h>
#include <de/polygonal/ds/IntIntHashTableValIterator.h>
#include <de/polygonal/ds/IntIntHashTable.h>
#include <de/polygonal/ds/IntHashTableIterator.h>
#include <de/polygonal/ds/IntHashTable.h>
#include <de/polygonal/ds/IntHashSetIterator.h>
#include <de/polygonal/ds/IntHashSet.h>
#include <de/polygonal/ds/Set.h>
#include <de/polygonal/ds/HashTableValIterator.h>
#include <de/polygonal/ds/HashTableKeyIterator.h>
#include <de/polygonal/ds/HashTable.h>
#include <de/polygonal/ds/Map.h>
#include <de/polygonal/ds/HashKey.h>
#include <de/polygonal/ds/DAIterator.h>
#include <de/polygonal/ds/Itr.h>
#include <de/polygonal/ds/DA.h>
#include <de/polygonal/ds/Comparable.h>
#include <de/polygonal/ds/Collection.h>
#include <de/polygonal/ds/Hashable.h>
#include <de/polygonal/ds/Cloneable.h>
#include <de/polygonal/ds/ArrayUtil.h>
#include <de/polygonal/_Printf/FloatType.h>
#include <de/polygonal/_Printf/IntegerType.h>
#include <de/polygonal/_Printf/FormatDataType.h>
#include <de/polygonal/_Printf/FormatToken.h>
#include <de/polygonal/_Printf/FormatFlags.h>
#include <de/polygonal/Printf.h>
#include <cpp/zip/Uncompress.h>
#include <cpp/zip/Flush.h>
#include <cpp/zip/Compress.h>
#include <cpp/vm/Gc.h>
#include <com/stencyl/utils/Utils.h>
#include <flash/geom/Rectangle.h>
#include <flash/geom/Matrix.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <flash/media/SoundTransform.h>
#include <com/stencyl/utils/RGB.h>
#include <com/stencyl/utils/PolyDecompBayazit.h>
#include <com/stencyl/utils/Mathematics.h>
#include <com/stencyl/utils/ColorMatrix.h>
#include <com/stencyl/utils/ColorDeficiencyTypes.h>
#include <com/stencyl/utils/ARGB.h>
#include <com/stencyl/models/scene/layers/BackgroundLayer.h>
#include <com/stencyl/models/scene/Wireframe.h>
#include <com/stencyl/models/scene/Tileset.h>
#include <com/stencyl/models/scene/TileLayer.h>
#include <com/stencyl/models/scene/Tile.h>
#include <com/stencyl/models/scene/TerrainDef.h>
#include <com/stencyl/models/scene/ScrollingBitmap.h>
#include <com/stencyl/models/scene/RegionDef.h>
#include <com/stencyl/models/scene/Layer.h>
#include <com/stencyl/models/scene/layers/RegularLayer.h>
#include <com/stencyl/models/scene/DeferredActor.h>
#include <com/stencyl/models/scene/ActorInstance.h>
#include <com/stencyl/models/collision/Pixelmask.h>
#include <com/stencyl/models/collision/Masklist.h>
#include <com/stencyl/models/collision/Grid.h>
#include <com/stencyl/models/collision/Hitbox.h>
#include <com/stencyl/models/collision/Mask.h>
#include <com/stencyl/models/collision/CollisionInfo.h>
#include <com/stencyl/models/background/ScrollingBackground.h>
#include <com/stencyl/models/background/ImageBackground.h>
#include <com/stencyl/models/background/GradientBackground.h>
#include <com/stencyl/models/background/ColorBackground.h>
#include <com/stencyl/models/actor/Sprite.h>
#include <com/stencyl/models/actor/Group.h>
#include <com/stencyl/models/actor/CollisionPoint.h>
#include <com/stencyl/models/actor/Collision.h>
#include <com/stencyl/models/actor/Animation.h>
#include <com/stencyl/models/actor/AngleHolder.h>
#include <com/stencyl/models/actor/ActorType.h>
#include <com/stencyl/models/Terrain.h>
#include <com/stencyl/models/SoundChannel.h>
#include <com/stencyl/models/Sound.h>
#include <com/stencyl/models/Scene.h>
#include <com/stencyl/models/Region.h>
#include <com/stencyl/models/GroupDef.h>
#include <com/stencyl/models/GameModel.h>
#include <com/stencyl/models/Font.h>
#include <com/stencyl/models/Resource.h>
#include <com/stencyl/models/CollisionGroupDef.h>
#include <com/stencyl/models/Background.h>
#include <com/stencyl/models/Atlas.h>
#include <com/stencyl/models/Actor.h>
#include <com/stencyl/io/TilesetReader.h>
#include <com/stencyl/io/SpriteReader.h>
#include <com/stencyl/io/SoundReader.h>
#include <com/stencyl/io/FontReader.h>
#include <com/stencyl/io/BehaviorReader.h>
#include <com/stencyl/io/BackgroundReader.h>
#include <com/stencyl/io/ActorTypeReader.h>
#include <com/stencyl/io/AbstractReader.h>
#include <com/stencyl/graphics/transitions/SlideTransition.h>
#include <com/stencyl/graphics/transitions/RectangleTransition.h>
#include <com/stencyl/graphics/transitions/PixelizeTransition.h>
#include <com/stencyl/graphics/transitions/FadeOutTransition.h>
#include <com/stencyl/graphics/transitions/FadeInTransition.h>
#include <com/stencyl/graphics/transitions/CrossfadeTransition.h>
#include <com/stencyl/graphics/transitions/CircleTransition.h>
#include <com/stencyl/graphics/transitions/BubblesTransition.h>
#include <com/stencyl/graphics/transitions/BlindsTransition.h>
#include <com/stencyl/graphics/transitions/Transition.h>
#include <com/stencyl/graphics/fonts/TextAlign.h>
#include <com/stencyl/graphics/fonts/Label.h>
#include <com/stencyl/graphics/fonts/FontSymbol.h>
#include <com/stencyl/graphics/fonts/DefaultFontGenerator.h>
#include <com/stencyl/graphics/fonts/BitmapFont.h>
#include <flash/geom/Point.h>
#include <com/stencyl/graphics/SheetAnimation.h>
#include <com/stencyl/graphics/G.h>
#include <com/stencyl/graphics/BitmapFont.h>
#include <com/stencyl/graphics/BitmapAnimation.h>
#include <flash/display/Bitmap.h>
#include <com/stencyl/graphics/AbstractAnimation.h>
#include <com/stencyl/event/StencylEvent.h>
#include <com/stencyl/event/NativeListener.h>
#include <com/stencyl/behavior/TimedTask.h>
#include <com/stencyl/behavior/SceneScript.h>
#include <com/stencyl/behavior/BehaviorManager.h>
#include <com/stencyl/behavior/BehaviorInstance.h>
#include <com/stencyl/behavior/Behavior.h>
#include <com/stencyl/behavior/Attribute.h>
#include <com/stencyl/behavior/ActorScript.h>
#include <com/stencyl/behavior/Script.h>
#include <com/stencyl/Key.h>
#include <com/stencyl/Input.h>
#include <com/stencyl/Engine.h>
#include <com/stencyl/event/EventMaster.h>
#include <com/stencyl/Data.h>
#include <com/stencyl/AssetLoader.h>
#include <com/nmefermmmtools/debug/Colors.h>
#include <com/nmefermmmtools/debug/Stats.h>
#include <box2D/dynamics/joints/B2WeldJointDef.h>
#include <box2D/dynamics/joints/B2WeldJoint.h>
#include <box2D/dynamics/joints/B2RevoluteJointDef.h>
#include <box2D/dynamics/joints/B2RevoluteJoint.h>
#include <box2D/dynamics/joints/B2PulleyJointDef.h>
#include <box2D/dynamics/joints/B2PulleyJoint.h>
#include <box2D/dynamics/joints/B2PrismaticJointDef.h>
#include <box2D/dynamics/joints/B2PrismaticJoint.h>
#include <box2D/dynamics/joints/B2MouseJointDef.h>
#include <box2D/dynamics/joints/B2MouseJoint.h>
#include <box2D/dynamics/joints/B2LineJointDef.h>
#include <box2D/dynamics/joints/B2LineJoint.h>
#include <box2D/dynamics/joints/B2JointEdge.h>
#include <box2D/dynamics/joints/B2Jacobian.h>
#include <box2D/dynamics/joints/B2GearJointDef.h>
#include <box2D/dynamics/joints/B2GearJoint.h>
#include <box2D/dynamics/joints/B2FrictionJointDef.h>
#include <box2D/dynamics/joints/B2FrictionJoint.h>
#include <box2D/dynamics/joints/B2DistanceJointDef.h>
#include <box2D/dynamics/joints/B2JointDef.h>
#include <box2D/dynamics/joints/B2DistanceJoint.h>
#include <box2D/dynamics/joints/B2Joint.h>
#include <box2D/dynamics/controllers/B2ControllerEdge.h>
#include <box2D/dynamics/controllers/B2Controller.h>
#include <box2D/dynamics/contacts/B2PolygonContact.h>
#include <box2D/dynamics/contacts/Type.h>
#include <box2D/dynamics/contacts/B2PolyAndEdgeContact.h>
#include <box2D/dynamics/contacts/ReferenceFace.h>
#include <box2D/dynamics/contacts/TempPolygon.h>
#include <box2D/dynamics/contacts/EPAxis.h>
#include <box2D/dynamics/contacts/ClipVertex.h>
#include <box2D/dynamics/contacts/B2PolyAndCircleContact.h>
#include <box2D/dynamics/contacts/B2EdgeAndCircleContact.h>
#include <box2D/dynamics/contacts/B2ContactSolver.h>
#include <box2D/dynamics/contacts/B2PositionSolverManifold.h>
#include <box2D/dynamics/contacts/B2ContactRegister.h>
#include <box2D/dynamics/contacts/B2ContactFactory.h>
#include <box2D/dynamics/contacts/B2ContactEdge.h>
#include <box2D/dynamics/contacts/B2ContactConstraintPoint.h>
#include <box2D/dynamics/contacts/B2ContactConstraint.h>
#include <box2D/dynamics/contacts/B2CircleContact.h>
#include <box2D/dynamics/contacts/B2Contact.h>
#include <box2D/dynamics/B2World.h>
#include <box2D/dynamics/B2TimeStep.h>
#include <box2D/dynamics/B2Island.h>
#include <box2D/dynamics/B2FixtureDef.h>
#include <box2D/dynamics/B2Fixture.h>
#include <box2D/dynamics/B2FilterData.h>
#include <box2D/dynamics/B2DestructionListener.h>
#include <box2D/dynamics/B2DebugDraw.h>
#include <box2D/dynamics/B2ContactManager.h>
#include <box2D/dynamics/B2ContactListener.h>
#include <box2D/dynamics/B2ContactImpulse.h>
#include <box2D/dynamics/B2ContactFilter.h>
#include <box2D/dynamics/B2BodyDef.h>
#include <box2D/dynamics/B2Body.h>
#include <box2D/common/math/B2Vec3.h>
#include <box2D/common/math/B2Sweep.h>
#include <box2D/common/math/B2Math.h>
#include <box2D/common/math/B2Mat33.h>
#include <box2D/common/B2Settings.h>
#include <box2D/common/B2Color.h>
#include <box2D/collision/shapes/B2PolygonShape.h>
#include <box2D/collision/shapes/B2MassData.h>
#include <box2D/collision/shapes/B2EdgeShape.h>
#include <box2D/collision/shapes/B2CircleShape.h>
#include <box2D/collision/shapes/B2Shape.h>
#include <box2D/collision/B2WorldManifold.h>
#include <box2D/collision/B2TimeOfImpact.h>
#include <box2D/common/math/B2Mat22.h>
#include <box2D/common/math/B2Transform.h>
#include <box2D/collision/B2TOIInput.h>
#include <box2D/collision/B2SimplexCache.h>
#include <box2D/collision/B2SeparationFunction.h>
#include <box2D/collision/B2RayCastOutput.h>
#include <box2D/collision/B2RayCastInput.h>
#include <box2D/collision/B2OBB.h>
#include <box2D/collision/B2ManifoldPoint.h>
#include <box2D/collision/B2Manifold.h>
#include <box2D/collision/B2DynamicTreePair.h>
#include <box2D/collision/B2DynamicTreeNode.h>
#include <box2D/collision/B2DynamicTreeBroadPhase.h>
#include <box2D/collision/IBroadPhase.h>
#include <box2D/collision/B2DynamicTree.h>
#include <box2D/collision/B2DistanceProxy.h>
#include <box2D/collision/B2DistanceOutput.h>
#include <box2D/collision/B2DistanceInput.h>
#include <box2D/collision/B2Distance.h>
#include <box2D/collision/B2SimplexVertex.h>
#include <box2D/collision/B2Simplex.h>
#include <box2D/collision/B2ContactPoint.h>
#include <box2D/collision/B2Collision.h>
#include <box2D/collision/Features.h>
#include <box2D/collision/B2ContactID.h>
#include <box2D/collision/ClipVertex.h>
#include <box2D/common/math/B2Vec2.h>
#include <box2D/collision/B2AABB.h>
#include <Xml.h>
#include <XmlType.h>
#include <Type.h>
#include <ValueType.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <RoxGestureEvent.h>
#include <_RoxGestureAgent/TouchPoint.h>
#include <RoxGestureAgent.h>
#include <flash/events/TouchEvent.h>
#include <flash/events/MouseEvent.h>
#include <flash/events/Event.h>
#include <Reflect.h>
#include <Purchases.h>
#include <Native.h>
#include <IMap.h>
#include <List.h>
#include <Lambda.h>
#include <JoystickController.h>
#include <Joystick.h>
#include <GameCenter.h>
#include <DefaultAssetLibrary.h>
#include <openfl/AssetLibrary.h>
#include <Date.h>
#include <DocumentClass.h>
#include <Main.h>
#include <flash/display/Sprite.h>
#include <flash/display/DisplayObjectContainer.h>
#include <flash/display/InteractiveObject.h>
#include <flash/display/DisplayObject.h>
#include <flash/display/IBitmapDrawable.h>
#include <flash/events/EventDispatcher.h>
#include <flash/events/IEventDispatcher.h>
#include <ApplicationMain.h>
#include <Ads.h>
#include <flash/Lib.h>
#include <Std.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <nme/Loader.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::scripts::MyScripts_obj::__register();
::scripts::MyAssets_obj::__register();
::openfl::utils::WeakRef_obj::__register();
::openfl::utils::SystemPath_obj::__register();
::openfl::ui::Accelerometer_obj::__register();
::openfl::events::SystemEvent_obj::__register();
::openfl::events::JoystickEvent_obj::__register();
::openfl::display::Tilesheet_obj::__register();
::openfl::display::ManagedStage_obj::__register();
::openfl::AssetType_obj::__register();
::openfl::AssetData_obj::__register();
::openfl::Assets_obj::__register();
::openfl::AssetCache_obj::__register();
::motion::easing::SineEaseOut_obj::__register();
::motion::easing::SineEaseInOut_obj::__register();
::motion::easing::SineEaseIn_obj::__register();
::motion::easing::Sine_obj::__register();
::motion::easing::QuintEaseOut_obj::__register();
::motion::easing::QuintEaseInOut_obj::__register();
::motion::easing::QuintEaseIn_obj::__register();
::motion::easing::Quint_obj::__register();
::motion::easing::QuartEaseOut_obj::__register();
::motion::easing::QuartEaseInOut_obj::__register();
::motion::easing::QuartEaseIn_obj::__register();
::motion::easing::Quart_obj::__register();
::motion::easing::QuadEaseOut_obj::__register();
::motion::easing::QuadEaseInOut_obj::__register();
::motion::easing::QuadEaseIn_obj::__register();
::motion::easing::Quad_obj::__register();
::motion::easing::LinearEaseNone_obj::__register();
::motion::easing::Linear_obj::__register();
::motion::easing::ExpoEaseInOut_obj::__register();
::motion::easing::ExpoEaseIn_obj::__register();
::motion::easing::ElasticEaseOut_obj::__register();
::motion::easing::ElasticEaseInOut_obj::__register();
::motion::easing::ElasticEaseIn_obj::__register();
::motion::easing::Elastic_obj::__register();
::motion::easing::CubicEaseOut_obj::__register();
::motion::easing::CubicEaseInOut_obj::__register();
::motion::easing::CubicEaseIn_obj::__register();
::motion::easing::Cubic_obj::__register();
::motion::easing::BackEaseOut_obj::__register();
::motion::easing::BackEaseInOut_obj::__register();
::motion::easing::BackEaseIn_obj::__register();
::motion::easing::Back_obj::__register();
::motion::actuators::TransformActuator_obj::__register();
::motion::actuators::PropertyPathDetails_obj::__register();
::motion::actuators::PropertyDetails_obj::__register();
::motion::actuators::MotionPathActuator_obj::__register();
::motion::actuators::MethodActuator_obj::__register();
::motion::actuators::FilterActuator_obj::__register();
::motion::LinearPath_obj::__register();
::motion::BezierPath_obj::__register();
::motion::ComponentPath_obj::__register();
::motion::IComponentPath_obj::__register();
::motion::MotionPath_obj::__register();
::motion::_Actuate::TweenTimer_obj::__register();
::motion::_Actuate::TransformOptions_obj::__register();
::motion::_Actuate::EffectsOptions_obj::__register();
::motion::Actuate_obj::__register();
::motion::easing::ExpoEaseOut_obj::__register();
::motion::easing::IEasing_obj::__register();
::motion::easing::Expo_obj::__register();
::motion::actuators::SimpleActuator_obj::__register();
::motion::actuators::GenericActuator_obj::__register();
::motion::actuators::IGenericActuator_obj::__register();
::haxe::xml::Fast_obj::__register();
::haxe::xml::_Fast::NodeListAccess_obj::__register();
::haxe::xml::_Fast::HasNodeAccess_obj::__register();
::haxe::xml::_Fast::HasAttribAccess_obj::__register();
::haxe::xml::_Fast::AttribAccess_obj::__register();
::haxe::xml::_Fast::NodeAccess_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Serializer_obj::__register();
::haxe::Resource_obj::__register();
::haxe::Log_obj::__register();
::haxe::Int64_obj::__register();
::flash::utils::Endian_obj::__register();
::flash::utils::CompressionAlgorithm_obj::__register();
::flash::utils::ByteArray_obj::__register();
::flash::utils::IDataInput_obj::__register();
::openfl::utils::IMemoryRange_obj::__register();
::flash::utils::IDataOutput_obj::__register();
::flash::ui::MultitouchInputMode_obj::__register();
::flash::ui::Multitouch_obj::__register();
::flash::ui::Mouse_obj::__register();
::flash::ui::Keyboard_obj::__register();
::flash::text::TextLineMetrics_obj::__register();
::flash::text::TextFormat_obj::__register();
::flash::text::TextFieldType_obj::__register();
::flash::text::TextFieldAutoSize_obj::__register();
::flash::text::TextField_obj::__register();
::flash::text::GridFitType_obj::__register();
::flash::text::FontType_obj::__register();
::flash::text::FontStyle_obj::__register();
::flash::text::Font_obj::__register();
::flash::text::AntiAliasType_obj::__register();
::flash::system::System_obj::__register();
::flash::system::SecurityDomain_obj::__register();
::flash::system::LoaderContext_obj::__register();
::flash::system::ApplicationDomain_obj::__register();
::flash::sensors::Accelerometer_obj::__register();
::flash::net::URLVariables_obj::__register();
::flash::net::URLRequestMethod_obj::__register();
::flash::net::URLRequestHeader_obj::__register();
::flash::net::URLRequest_obj::__register();
::flash::net::URLLoaderDataFormat_obj::__register();
::flash::net::SharedObjectFlushStatus_obj::__register();
::flash::net::SharedObject_obj::__register();
::flash::media::SoundLoaderContext_obj::__register();
::flash::media::SoundChannel_obj::__register();
::flash::media::Sound_obj::__register();
::flash::media::ID3Info_obj::__register();
::flash::geom::Vector3D_obj::__register();
::flash::geom::Transform_obj::__register();
::flash::geom::ColorTransform_obj::__register();
::flash::filters::BitmapFilter_obj::__register();
::flash::filesystem::File_obj::__register();
::flash::events::UncaughtErrorEvents_obj::__register();
::flash::events::UncaughtErrorEvent_obj::__register();
::flash::events::SampleDataEvent_obj::__register();
::flash::events::ProgressEvent_obj::__register();
::flash::events::KeyboardEvent_obj::__register();
::flash::events::IOErrorEvent_obj::__register();
::flash::events::HTTPStatusEvent_obj::__register();
::flash::events::FocusEvent_obj::__register();
::flash::events::EventPhase_obj::__register();
::flash::events::Listener_obj::__register();
::flash::events::ErrorEvent_obj::__register();
::flash::events::TextEvent_obj::__register();
::flash::events::AccelerometerEvent_obj::__register();
::flash::errors::RangeError_obj::__register();
::flash::errors::EOFError_obj::__register();
::flash::errors::ArgumentError_obj::__register();
::flash::errors::Error_obj::__register();
::flash::display::TriangleCulling_obj::__register();
::flash::display::StageScaleMode_obj::__register();
::flash::display::StageQuality_obj::__register();
::flash::display::StageDisplayState_obj::__register();
::flash::display::StageAlign_obj::__register();
::flash::display::TouchInfo_obj::__register();
::flash::display::Stage_obj::__register();
::flash::display::SpreadMethod_obj::__register();
::flash::display::Shape_obj::__register();
::flash::display::PixelSnapping_obj::__register();
::flash::display::MovieClip_obj::__register();
::flash::display::LoaderInfo_obj::__register();
::flash::net::URLLoader_obj::__register();
::flash::display::Loader_obj::__register();
::flash::display::LineScaleMode_obj::__register();
::flash::display::JointStyle_obj::__register();
::flash::display::InterpolationMethod_obj::__register();
::flash::display::IGraphicsData_obj::__register();
::flash::display::GraphicsPathWinding_obj::__register();
::flash::display::Graphics_obj::__register();
::flash::display::GradientType_obj::__register();
::flash::display::CapsStyle_obj::__register();
::flash::display::BlendMode_obj::__register();
::flash::display::BitmapDataChannel_obj::__register();
::flash::display::OptimizedPerlin_obj::__register();
::flash::display::BitmapData_obj::__register();
::flash::_Vector::Vector_Impl__obj::__register();
::flash::Memory_obj::__register();
::de::polygonal::ds::error::Assert_obj::__register();
::de::polygonal::ds::ListSet_obj::__register();
::de::polygonal::ds::IntIntHashTableKeyIterator_obj::__register();
::de::polygonal::ds::IntIntHashTableValIterator_obj::__register();
::de::polygonal::ds::IntIntHashTable_obj::__register();
::de::polygonal::ds::IntHashTableIterator_obj::__register();
::de::polygonal::ds::IntHashTable_obj::__register();
::de::polygonal::ds::IntHashSetIterator_obj::__register();
::de::polygonal::ds::IntHashSet_obj::__register();
::de::polygonal::ds::Set_obj::__register();
::de::polygonal::ds::HashTableValIterator_obj::__register();
::de::polygonal::ds::HashTableKeyIterator_obj::__register();
::de::polygonal::ds::HashTable_obj::__register();
::de::polygonal::ds::Map_obj::__register();
::de::polygonal::ds::HashKey_obj::__register();
::de::polygonal::ds::DAIterator_obj::__register();
::de::polygonal::ds::Itr_obj::__register();
::de::polygonal::ds::DA_obj::__register();
::de::polygonal::ds::Comparable_obj::__register();
::de::polygonal::ds::Collection_obj::__register();
::de::polygonal::ds::Hashable_obj::__register();
::de::polygonal::ds::Cloneable_obj::__register();
::de::polygonal::ds::ArrayUtil_obj::__register();
::de::polygonal::_Printf::FloatType_obj::__register();
::de::polygonal::_Printf::IntegerType_obj::__register();
::de::polygonal::_Printf::FormatDataType_obj::__register();
::de::polygonal::_Printf::FormatToken_obj::__register();
::de::polygonal::_Printf::FormatFlags_obj::__register();
::de::polygonal::Printf_obj::__register();
::cpp::zip::Uncompress_obj::__register();
::cpp::zip::Flush_obj::__register();
::cpp::zip::Compress_obj::__register();
::cpp::vm::Gc_obj::__register();
::com::stencyl::utils::Utils_obj::__register();
::flash::geom::Rectangle_obj::__register();
::flash::geom::Matrix_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::flash::media::SoundTransform_obj::__register();
::com::stencyl::utils::RGB_obj::__register();
::com::stencyl::utils::PolyDecompBayazit_obj::__register();
::com::stencyl::utils::Mathematics_obj::__register();
::com::stencyl::utils::ColorMatrix_obj::__register();
::com::stencyl::utils::ColorDeficiencyTypes_obj::__register();
::com::stencyl::utils::ARGB_obj::__register();
::com::stencyl::models::scene::layers::BackgroundLayer_obj::__register();
::com::stencyl::models::scene::Wireframe_obj::__register();
::com::stencyl::models::scene::Tileset_obj::__register();
::com::stencyl::models::scene::TileLayer_obj::__register();
::com::stencyl::models::scene::Tile_obj::__register();
::com::stencyl::models::scene::TerrainDef_obj::__register();
::com::stencyl::models::scene::ScrollingBitmap_obj::__register();
::com::stencyl::models::scene::RegionDef_obj::__register();
::com::stencyl::models::scene::Layer_obj::__register();
::com::stencyl::models::scene::layers::RegularLayer_obj::__register();
::com::stencyl::models::scene::DeferredActor_obj::__register();
::com::stencyl::models::scene::ActorInstance_obj::__register();
::com::stencyl::models::collision::Pixelmask_obj::__register();
::com::stencyl::models::collision::Masklist_obj::__register();
::com::stencyl::models::collision::Grid_obj::__register();
::com::stencyl::models::collision::Hitbox_obj::__register();
::com::stencyl::models::collision::Mask_obj::__register();
::com::stencyl::models::collision::CollisionInfo_obj::__register();
::com::stencyl::models::background::ScrollingBackground_obj::__register();
::com::stencyl::models::background::ImageBackground_obj::__register();
::com::stencyl::models::background::GradientBackground_obj::__register();
::com::stencyl::models::background::ColorBackground_obj::__register();
::com::stencyl::models::actor::Sprite_obj::__register();
::com::stencyl::models::actor::Group_obj::__register();
::com::stencyl::models::actor::CollisionPoint_obj::__register();
::com::stencyl::models::actor::Collision_obj::__register();
::com::stencyl::models::actor::Animation_obj::__register();
::com::stencyl::models::actor::AngleHolder_obj::__register();
::com::stencyl::models::actor::ActorType_obj::__register();
::com::stencyl::models::Terrain_obj::__register();
::com::stencyl::models::SoundChannel_obj::__register();
::com::stencyl::models::Sound_obj::__register();
::com::stencyl::models::Scene_obj::__register();
::com::stencyl::models::Region_obj::__register();
::com::stencyl::models::GroupDef_obj::__register();
::com::stencyl::models::GameModel_obj::__register();
::com::stencyl::models::Font_obj::__register();
::com::stencyl::models::Resource_obj::__register();
::com::stencyl::models::CollisionGroupDef_obj::__register();
::com::stencyl::models::Background_obj::__register();
::com::stencyl::models::Atlas_obj::__register();
::com::stencyl::models::Actor_obj::__register();
::com::stencyl::io::TilesetReader_obj::__register();
::com::stencyl::io::SpriteReader_obj::__register();
::com::stencyl::io::SoundReader_obj::__register();
::com::stencyl::io::FontReader_obj::__register();
::com::stencyl::io::BehaviorReader_obj::__register();
::com::stencyl::io::BackgroundReader_obj::__register();
::com::stencyl::io::ActorTypeReader_obj::__register();
::com::stencyl::io::AbstractReader_obj::__register();
::com::stencyl::graphics::transitions::SlideTransition_obj::__register();
::com::stencyl::graphics::transitions::RectangleTransition_obj::__register();
::com::stencyl::graphics::transitions::PixelizeTransition_obj::__register();
::com::stencyl::graphics::transitions::FadeOutTransition_obj::__register();
::com::stencyl::graphics::transitions::FadeInTransition_obj::__register();
::com::stencyl::graphics::transitions::CrossfadeTransition_obj::__register();
::com::stencyl::graphics::transitions::CircleTransition_obj::__register();
::com::stencyl::graphics::transitions::BubblesTransition_obj::__register();
::com::stencyl::graphics::transitions::BlindsTransition_obj::__register();
::com::stencyl::graphics::transitions::Transition_obj::__register();
::com::stencyl::graphics::fonts::TextAlign_obj::__register();
::com::stencyl::graphics::fonts::Label_obj::__register();
::com::stencyl::graphics::fonts::FontSymbol_obj::__register();
::com::stencyl::graphics::fonts::DefaultFontGenerator_obj::__register();
::com::stencyl::graphics::fonts::BitmapFont_obj::__register();
::flash::geom::Point_obj::__register();
::com::stencyl::graphics::SheetAnimation_obj::__register();
::com::stencyl::graphics::G_obj::__register();
::com::stencyl::graphics::BitmapFont_obj::__register();
::com::stencyl::graphics::BitmapAnimation_obj::__register();
::flash::display::Bitmap_obj::__register();
::com::stencyl::graphics::AbstractAnimation_obj::__register();
::com::stencyl::event::StencylEvent_obj::__register();
::com::stencyl::event::NativeListener_obj::__register();
::com::stencyl::behavior::TimedTask_obj::__register();
::com::stencyl::behavior::SceneScript_obj::__register();
::com::stencyl::behavior::BehaviorManager_obj::__register();
::com::stencyl::behavior::BehaviorInstance_obj::__register();
::com::stencyl::behavior::Behavior_obj::__register();
::com::stencyl::behavior::Attribute_obj::__register();
::com::stencyl::behavior::ActorScript_obj::__register();
::com::stencyl::behavior::Script_obj::__register();
::com::stencyl::Key_obj::__register();
::com::stencyl::Input_obj::__register();
::com::stencyl::Engine_obj::__register();
::com::stencyl::event::EventMaster_obj::__register();
::com::stencyl::Data_obj::__register();
::com::stencyl::AssetLoader_obj::__register();
::com::nmefermmmtools::debug::Colors_obj::__register();
::com::nmefermmmtools::debug::Stats_obj::__register();
::box2D::dynamics::joints::B2WeldJointDef_obj::__register();
::box2D::dynamics::joints::B2WeldJoint_obj::__register();
::box2D::dynamics::joints::B2RevoluteJointDef_obj::__register();
::box2D::dynamics::joints::B2RevoluteJoint_obj::__register();
::box2D::dynamics::joints::B2PulleyJointDef_obj::__register();
::box2D::dynamics::joints::B2PulleyJoint_obj::__register();
::box2D::dynamics::joints::B2PrismaticJointDef_obj::__register();
::box2D::dynamics::joints::B2PrismaticJoint_obj::__register();
::box2D::dynamics::joints::B2MouseJointDef_obj::__register();
::box2D::dynamics::joints::B2MouseJoint_obj::__register();
::box2D::dynamics::joints::B2LineJointDef_obj::__register();
::box2D::dynamics::joints::B2LineJoint_obj::__register();
::box2D::dynamics::joints::B2JointEdge_obj::__register();
::box2D::dynamics::joints::B2Jacobian_obj::__register();
::box2D::dynamics::joints::B2GearJointDef_obj::__register();
::box2D::dynamics::joints::B2GearJoint_obj::__register();
::box2D::dynamics::joints::B2FrictionJointDef_obj::__register();
::box2D::dynamics::joints::B2FrictionJoint_obj::__register();
::box2D::dynamics::joints::B2DistanceJointDef_obj::__register();
::box2D::dynamics::joints::B2JointDef_obj::__register();
::box2D::dynamics::joints::B2DistanceJoint_obj::__register();
::box2D::dynamics::joints::B2Joint_obj::__register();
::box2D::dynamics::controllers::B2ControllerEdge_obj::__register();
::box2D::dynamics::controllers::B2Controller_obj::__register();
::box2D::dynamics::contacts::B2PolygonContact_obj::__register();
::box2D::dynamics::contacts::Type_obj::__register();
::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::__register();
::box2D::dynamics::contacts::ReferenceFace_obj::__register();
::box2D::dynamics::contacts::TempPolygon_obj::__register();
::box2D::dynamics::contacts::EPAxis_obj::__register();
::box2D::dynamics::contacts::ClipVertex_obj::__register();
::box2D::dynamics::contacts::B2PolyAndCircleContact_obj::__register();
::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::__register();
::box2D::dynamics::contacts::B2ContactSolver_obj::__register();
::box2D::dynamics::contacts::B2PositionSolverManifold_obj::__register();
::box2D::dynamics::contacts::B2ContactRegister_obj::__register();
::box2D::dynamics::contacts::B2ContactFactory_obj::__register();
::box2D::dynamics::contacts::B2ContactEdge_obj::__register();
::box2D::dynamics::contacts::B2ContactConstraintPoint_obj::__register();
::box2D::dynamics::contacts::B2ContactConstraint_obj::__register();
::box2D::dynamics::contacts::B2CircleContact_obj::__register();
::box2D::dynamics::contacts::B2Contact_obj::__register();
::box2D::dynamics::B2World_obj::__register();
::box2D::dynamics::B2TimeStep_obj::__register();
::box2D::dynamics::B2Island_obj::__register();
::box2D::dynamics::B2FixtureDef_obj::__register();
::box2D::dynamics::B2Fixture_obj::__register();
::box2D::dynamics::B2FilterData_obj::__register();
::box2D::dynamics::B2DestructionListener_obj::__register();
::box2D::dynamics::B2DebugDraw_obj::__register();
::box2D::dynamics::B2ContactManager_obj::__register();
::box2D::dynamics::B2ContactListener_obj::__register();
::box2D::dynamics::B2ContactImpulse_obj::__register();
::box2D::dynamics::B2ContactFilter_obj::__register();
::box2D::dynamics::B2BodyDef_obj::__register();
::box2D::dynamics::B2Body_obj::__register();
::box2D::common::math::B2Vec3_obj::__register();
::box2D::common::math::B2Sweep_obj::__register();
::box2D::common::math::B2Math_obj::__register();
::box2D::common::math::B2Mat33_obj::__register();
::box2D::common::B2Settings_obj::__register();
::box2D::common::B2Color_obj::__register();
::box2D::collision::shapes::B2PolygonShape_obj::__register();
::box2D::collision::shapes::B2MassData_obj::__register();
::box2D::collision::shapes::B2EdgeShape_obj::__register();
::box2D::collision::shapes::B2CircleShape_obj::__register();
::box2D::collision::shapes::B2Shape_obj::__register();
::box2D::collision::B2WorldManifold_obj::__register();
::box2D::collision::B2TimeOfImpact_obj::__register();
::box2D::common::math::B2Mat22_obj::__register();
::box2D::common::math::B2Transform_obj::__register();
::box2D::collision::B2TOIInput_obj::__register();
::box2D::collision::B2SimplexCache_obj::__register();
::box2D::collision::B2SeparationFunction_obj::__register();
::box2D::collision::B2RayCastOutput_obj::__register();
::box2D::collision::B2RayCastInput_obj::__register();
::box2D::collision::B2OBB_obj::__register();
::box2D::collision::B2ManifoldPoint_obj::__register();
::box2D::collision::B2Manifold_obj::__register();
::box2D::collision::B2DynamicTreePair_obj::__register();
::box2D::collision::B2DynamicTreeNode_obj::__register();
::box2D::collision::B2DynamicTreeBroadPhase_obj::__register();
::box2D::collision::IBroadPhase_obj::__register();
::box2D::collision::B2DynamicTree_obj::__register();
::box2D::collision::B2DistanceProxy_obj::__register();
::box2D::collision::B2DistanceOutput_obj::__register();
::box2D::collision::B2DistanceInput_obj::__register();
::box2D::collision::B2Distance_obj::__register();
::box2D::collision::B2SimplexVertex_obj::__register();
::box2D::collision::B2Simplex_obj::__register();
::box2D::collision::B2ContactPoint_obj::__register();
::box2D::collision::B2Collision_obj::__register();
::box2D::collision::Features_obj::__register();
::box2D::collision::B2ContactID_obj::__register();
::box2D::collision::ClipVertex_obj::__register();
::box2D::common::math::B2Vec2_obj::__register();
::box2D::collision::B2AABB_obj::__register();
::Xml_obj::__register();
::XmlType_obj::__register();
::Type_obj::__register();
::ValueType_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::RoxGestureEvent_obj::__register();
::_RoxGestureAgent::TouchPoint_obj::__register();
::RoxGestureAgent_obj::__register();
::flash::events::TouchEvent_obj::__register();
::flash::events::MouseEvent_obj::__register();
::flash::events::Event_obj::__register();
::Reflect_obj::__register();
::Purchases_obj::__register();
::Native_obj::__register();
::IMap_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::JoystickController_obj::__register();
::Joystick_obj::__register();
::GameCenter_obj::__register();
::DefaultAssetLibrary_obj::__register();
::openfl::AssetLibrary_obj::__register();
::Date_obj::__register();
::DocumentClass_obj::__register();
::Main_obj::__register();
::flash::display::Sprite_obj::__register();
::flash::display::DisplayObjectContainer_obj::__register();
::flash::display::InteractiveObject_obj::__register();
::flash::display::DisplayObject_obj::__register();
::flash::display::IBitmapDrawable_obj::__register();
::flash::events::EventDispatcher_obj::__register();
::flash::events::IEventDispatcher_obj::__register();
::ApplicationMain_obj::__register();
::Ads_obj::__register();
::flash::Lib_obj::__register();
::Std_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::nme::Loader_obj::__register();
::Xml_obj::__init__();
::flash::ui::Multitouch_obj::__init__();
::flash::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::Xml_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::vm::Gc_obj::__boot();
::cpp::zip::Compress_obj::__boot();
::cpp::zip::Flush_obj::__boot();
::cpp::zip::Uncompress_obj::__boot();
::haxe::Log_obj::__boot();
::nme::Loader_obj::__boot();
::Sys_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::Std_obj::__boot();
::flash::Lib_obj::__boot();
::Ads_obj::__boot();
::ApplicationMain_obj::__boot();
::flash::events::IEventDispatcher_obj::__boot();
::flash::events::EventDispatcher_obj::__boot();
::flash::display::IBitmapDrawable_obj::__boot();
::flash::display::DisplayObject_obj::__boot();
::flash::display::InteractiveObject_obj::__boot();
::flash::display::DisplayObjectContainer_obj::__boot();
::flash::display::Sprite_obj::__boot();
::Main_obj::__boot();
::DocumentClass_obj::__boot();
::Date_obj::__boot();
::openfl::AssetLibrary_obj::__boot();
::DefaultAssetLibrary_obj::__boot();
::GameCenter_obj::__boot();
::Joystick_obj::__boot();
::JoystickController_obj::__boot();
::Lambda_obj::__boot();
::List_obj::__boot();
::IMap_obj::__boot();
::Native_obj::__boot();
::Purchases_obj::__boot();
::Reflect_obj::__boot();
::flash::events::Event_obj::__boot();
::flash::events::MouseEvent_obj::__boot();
::flash::events::TouchEvent_obj::__boot();
::RoxGestureAgent_obj::__boot();
::_RoxGestureAgent::TouchPoint_obj::__boot();
::RoxGestureEvent_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::ValueType_obj::__boot();
::Type_obj::__boot();
::XmlType_obj::__boot();
::box2D::collision::B2AABB_obj::__boot();
::box2D::common::math::B2Vec2_obj::__boot();
::box2D::collision::ClipVertex_obj::__boot();
::box2D::collision::B2ContactID_obj::__boot();
::box2D::collision::Features_obj::__boot();
::box2D::collision::B2Collision_obj::__boot();
::box2D::collision::B2ContactPoint_obj::__boot();
::box2D::collision::B2Simplex_obj::__boot();
::box2D::collision::B2SimplexVertex_obj::__boot();
::box2D::collision::B2Distance_obj::__boot();
::box2D::collision::B2DistanceInput_obj::__boot();
::box2D::collision::B2DistanceOutput_obj::__boot();
::box2D::collision::B2DistanceProxy_obj::__boot();
::box2D::collision::B2DynamicTree_obj::__boot();
::box2D::collision::IBroadPhase_obj::__boot();
::box2D::collision::B2DynamicTreeBroadPhase_obj::__boot();
::box2D::collision::B2DynamicTreeNode_obj::__boot();
::box2D::collision::B2DynamicTreePair_obj::__boot();
::box2D::collision::B2Manifold_obj::__boot();
::box2D::collision::B2ManifoldPoint_obj::__boot();
::box2D::collision::B2OBB_obj::__boot();
::box2D::collision::B2RayCastInput_obj::__boot();
::box2D::collision::B2RayCastOutput_obj::__boot();
::box2D::collision::B2SeparationFunction_obj::__boot();
::box2D::collision::B2SimplexCache_obj::__boot();
::box2D::collision::B2TOIInput_obj::__boot();
::box2D::common::math::B2Transform_obj::__boot();
::box2D::common::math::B2Mat22_obj::__boot();
::box2D::collision::B2TimeOfImpact_obj::__boot();
::box2D::collision::B2WorldManifold_obj::__boot();
::box2D::collision::shapes::B2Shape_obj::__boot();
::box2D::collision::shapes::B2CircleShape_obj::__boot();
::box2D::collision::shapes::B2EdgeShape_obj::__boot();
::box2D::collision::shapes::B2MassData_obj::__boot();
::box2D::collision::shapes::B2PolygonShape_obj::__boot();
::box2D::common::B2Color_obj::__boot();
::box2D::common::B2Settings_obj::__boot();
::box2D::common::math::B2Mat33_obj::__boot();
::box2D::common::math::B2Math_obj::__boot();
::box2D::common::math::B2Sweep_obj::__boot();
::box2D::common::math::B2Vec3_obj::__boot();
::box2D::dynamics::B2Body_obj::__boot();
::box2D::dynamics::B2BodyDef_obj::__boot();
::box2D::dynamics::B2ContactFilter_obj::__boot();
::box2D::dynamics::B2ContactImpulse_obj::__boot();
::box2D::dynamics::B2ContactListener_obj::__boot();
::box2D::dynamics::B2ContactManager_obj::__boot();
::box2D::dynamics::B2DebugDraw_obj::__boot();
::box2D::dynamics::B2DestructionListener_obj::__boot();
::box2D::dynamics::B2FilterData_obj::__boot();
::box2D::dynamics::B2Fixture_obj::__boot();
::box2D::dynamics::B2FixtureDef_obj::__boot();
::box2D::dynamics::B2Island_obj::__boot();
::box2D::dynamics::B2TimeStep_obj::__boot();
::box2D::dynamics::B2World_obj::__boot();
::box2D::dynamics::contacts::B2Contact_obj::__boot();
::box2D::dynamics::contacts::B2CircleContact_obj::__boot();
::box2D::dynamics::contacts::B2ContactConstraint_obj::__boot();
::box2D::dynamics::contacts::B2ContactConstraintPoint_obj::__boot();
::box2D::dynamics::contacts::B2ContactEdge_obj::__boot();
::box2D::dynamics::contacts::B2ContactFactory_obj::__boot();
::box2D::dynamics::contacts::B2ContactRegister_obj::__boot();
::box2D::dynamics::contacts::B2PositionSolverManifold_obj::__boot();
::box2D::dynamics::contacts::B2ContactSolver_obj::__boot();
::box2D::dynamics::contacts::B2EdgeAndCircleContact_obj::__boot();
::box2D::dynamics::contacts::B2PolyAndCircleContact_obj::__boot();
::box2D::dynamics::contacts::ClipVertex_obj::__boot();
::box2D::dynamics::contacts::EPAxis_obj::__boot();
::box2D::dynamics::contacts::TempPolygon_obj::__boot();
::box2D::dynamics::contacts::ReferenceFace_obj::__boot();
::box2D::dynamics::contacts::B2PolyAndEdgeContact_obj::__boot();
::box2D::dynamics::contacts::Type_obj::__boot();
::box2D::dynamics::contacts::B2PolygonContact_obj::__boot();
::box2D::dynamics::controllers::B2Controller_obj::__boot();
::box2D::dynamics::controllers::B2ControllerEdge_obj::__boot();
::box2D::dynamics::joints::B2Joint_obj::__boot();
::box2D::dynamics::joints::B2DistanceJoint_obj::__boot();
::box2D::dynamics::joints::B2JointDef_obj::__boot();
::box2D::dynamics::joints::B2DistanceJointDef_obj::__boot();
::box2D::dynamics::joints::B2FrictionJoint_obj::__boot();
::box2D::dynamics::joints::B2FrictionJointDef_obj::__boot();
::box2D::dynamics::joints::B2GearJoint_obj::__boot();
::box2D::dynamics::joints::B2GearJointDef_obj::__boot();
::box2D::dynamics::joints::B2Jacobian_obj::__boot();
::box2D::dynamics::joints::B2JointEdge_obj::__boot();
::box2D::dynamics::joints::B2LineJoint_obj::__boot();
::box2D::dynamics::joints::B2LineJointDef_obj::__boot();
::box2D::dynamics::joints::B2MouseJoint_obj::__boot();
::box2D::dynamics::joints::B2MouseJointDef_obj::__boot();
::box2D::dynamics::joints::B2PrismaticJoint_obj::__boot();
::box2D::dynamics::joints::B2PrismaticJointDef_obj::__boot();
::box2D::dynamics::joints::B2PulleyJoint_obj::__boot();
::box2D::dynamics::joints::B2PulleyJointDef_obj::__boot();
::box2D::dynamics::joints::B2RevoluteJoint_obj::__boot();
::box2D::dynamics::joints::B2RevoluteJointDef_obj::__boot();
::box2D::dynamics::joints::B2WeldJoint_obj::__boot();
::box2D::dynamics::joints::B2WeldJointDef_obj::__boot();
::com::nmefermmmtools::debug::Stats_obj::__boot();
::com::nmefermmmtools::debug::Colors_obj::__boot();
::com::stencyl::AssetLoader_obj::__boot();
::com::stencyl::Data_obj::__boot();
::com::stencyl::event::EventMaster_obj::__boot();
::com::stencyl::Engine_obj::__boot();
::com::stencyl::Input_obj::__boot();
::com::stencyl::Key_obj::__boot();
::com::stencyl::behavior::Script_obj::__boot();
::com::stencyl::behavior::ActorScript_obj::__boot();
::com::stencyl::behavior::Attribute_obj::__boot();
::com::stencyl::behavior::Behavior_obj::__boot();
::com::stencyl::behavior::BehaviorInstance_obj::__boot();
::com::stencyl::behavior::BehaviorManager_obj::__boot();
::com::stencyl::behavior::SceneScript_obj::__boot();
::com::stencyl::behavior::TimedTask_obj::__boot();
::com::stencyl::event::NativeListener_obj::__boot();
::com::stencyl::event::StencylEvent_obj::__boot();
::com::stencyl::graphics::AbstractAnimation_obj::__boot();
::flash::display::Bitmap_obj::__boot();
::com::stencyl::graphics::BitmapAnimation_obj::__boot();
::com::stencyl::graphics::BitmapFont_obj::__boot();
::com::stencyl::graphics::G_obj::__boot();
::com::stencyl::graphics::SheetAnimation_obj::__boot();
::flash::geom::Point_obj::__boot();
::com::stencyl::graphics::fonts::BitmapFont_obj::__boot();
::com::stencyl::graphics::fonts::DefaultFontGenerator_obj::__boot();
::com::stencyl::graphics::fonts::FontSymbol_obj::__boot();
::com::stencyl::graphics::fonts::Label_obj::__boot();
::com::stencyl::graphics::fonts::TextAlign_obj::__boot();
::com::stencyl::graphics::transitions::Transition_obj::__boot();
::com::stencyl::graphics::transitions::BlindsTransition_obj::__boot();
::com::stencyl::graphics::transitions::BubblesTransition_obj::__boot();
::com::stencyl::graphics::transitions::CircleTransition_obj::__boot();
::com::stencyl::graphics::transitions::CrossfadeTransition_obj::__boot();
::com::stencyl::graphics::transitions::FadeInTransition_obj::__boot();
::com::stencyl::graphics::transitions::FadeOutTransition_obj::__boot();
::com::stencyl::graphics::transitions::PixelizeTransition_obj::__boot();
::com::stencyl::graphics::transitions::RectangleTransition_obj::__boot();
::com::stencyl::graphics::transitions::SlideTransition_obj::__boot();
::com::stencyl::io::AbstractReader_obj::__boot();
::com::stencyl::io::ActorTypeReader_obj::__boot();
::com::stencyl::io::BackgroundReader_obj::__boot();
::com::stencyl::io::BehaviorReader_obj::__boot();
::com::stencyl::io::FontReader_obj::__boot();
::com::stencyl::io::SoundReader_obj::__boot();
::com::stencyl::io::SpriteReader_obj::__boot();
::com::stencyl::io::TilesetReader_obj::__boot();
::com::stencyl::models::Actor_obj::__boot();
::com::stencyl::models::Atlas_obj::__boot();
::com::stencyl::models::Background_obj::__boot();
::com::stencyl::models::CollisionGroupDef_obj::__boot();
::com::stencyl::models::Resource_obj::__boot();
::com::stencyl::models::Font_obj::__boot();
::com::stencyl::models::GameModel_obj::__boot();
::com::stencyl::models::GroupDef_obj::__boot();
::com::stencyl::models::Region_obj::__boot();
::com::stencyl::models::Scene_obj::__boot();
::com::stencyl::models::Sound_obj::__boot();
::com::stencyl::models::SoundChannel_obj::__boot();
::com::stencyl::models::Terrain_obj::__boot();
::com::stencyl::models::actor::ActorType_obj::__boot();
::com::stencyl::models::actor::AngleHolder_obj::__boot();
::com::stencyl::models::actor::Animation_obj::__boot();
::com::stencyl::models::actor::Collision_obj::__boot();
::com::stencyl::models::actor::CollisionPoint_obj::__boot();
::com::stencyl::models::actor::Group_obj::__boot();
::com::stencyl::models::actor::Sprite_obj::__boot();
::com::stencyl::models::background::ColorBackground_obj::__boot();
::com::stencyl::models::background::GradientBackground_obj::__boot();
::com::stencyl::models::background::ImageBackground_obj::__boot();
::com::stencyl::models::background::ScrollingBackground_obj::__boot();
::com::stencyl::models::collision::CollisionInfo_obj::__boot();
::com::stencyl::models::collision::Mask_obj::__boot();
::com::stencyl::models::collision::Hitbox_obj::__boot();
::com::stencyl::models::collision::Grid_obj::__boot();
::com::stencyl::models::collision::Masklist_obj::__boot();
::com::stencyl::models::collision::Pixelmask_obj::__boot();
::com::stencyl::models::scene::ActorInstance_obj::__boot();
::com::stencyl::models::scene::DeferredActor_obj::__boot();
::com::stencyl::models::scene::layers::RegularLayer_obj::__boot();
::com::stencyl::models::scene::Layer_obj::__boot();
::com::stencyl::models::scene::RegionDef_obj::__boot();
::com::stencyl::models::scene::ScrollingBitmap_obj::__boot();
::com::stencyl::models::scene::TerrainDef_obj::__boot();
::com::stencyl::models::scene::Tile_obj::__boot();
::com::stencyl::models::scene::TileLayer_obj::__boot();
::com::stencyl::models::scene::Tileset_obj::__boot();
::com::stencyl::models::scene::Wireframe_obj::__boot();
::com::stencyl::models::scene::layers::BackgroundLayer_obj::__boot();
::com::stencyl::utils::ARGB_obj::__boot();
::com::stencyl::utils::ColorDeficiencyTypes_obj::__boot();
::com::stencyl::utils::ColorMatrix_obj::__boot();
::com::stencyl::utils::Mathematics_obj::__boot();
::com::stencyl::utils::PolyDecompBayazit_obj::__boot();
::com::stencyl::utils::RGB_obj::__boot();
::flash::media::SoundTransform_obj::__boot();
::flash::geom::Matrix_obj::__boot();
::flash::geom::Rectangle_obj::__boot();
::com::stencyl::utils::Utils_obj::__boot();
::de::polygonal::Printf_obj::__boot();
::de::polygonal::_Printf::FormatFlags_obj::__boot();
::de::polygonal::_Printf::FormatToken_obj::__boot();
::de::polygonal::_Printf::FormatDataType_obj::__boot();
::de::polygonal::_Printf::IntegerType_obj::__boot();
::de::polygonal::_Printf::FloatType_obj::__boot();
::de::polygonal::ds::ArrayUtil_obj::__boot();
::de::polygonal::ds::Cloneable_obj::__boot();
::de::polygonal::ds::Hashable_obj::__boot();
::de::polygonal::ds::Collection_obj::__boot();
::de::polygonal::ds::Comparable_obj::__boot();
::de::polygonal::ds::DA_obj::__boot();
::de::polygonal::ds::Itr_obj::__boot();
::de::polygonal::ds::DAIterator_obj::__boot();
::de::polygonal::ds::HashKey_obj::__boot();
::de::polygonal::ds::Map_obj::__boot();
::de::polygonal::ds::HashTable_obj::__boot();
::de::polygonal::ds::HashTableKeyIterator_obj::__boot();
::de::polygonal::ds::HashTableValIterator_obj::__boot();
::de::polygonal::ds::Set_obj::__boot();
::de::polygonal::ds::IntHashSet_obj::__boot();
::de::polygonal::ds::IntHashSetIterator_obj::__boot();
::de::polygonal::ds::IntHashTable_obj::__boot();
::de::polygonal::ds::IntHashTableIterator_obj::__boot();
::de::polygonal::ds::IntIntHashTable_obj::__boot();
::de::polygonal::ds::IntIntHashTableValIterator_obj::__boot();
::de::polygonal::ds::IntIntHashTableKeyIterator_obj::__boot();
::de::polygonal::ds::ListSet_obj::__boot();
::de::polygonal::ds::error::Assert_obj::__boot();
::flash::Memory_obj::__boot();
::flash::_Vector::Vector_Impl__obj::__boot();
::flash::display::BitmapData_obj::__boot();
::flash::display::OptimizedPerlin_obj::__boot();
::flash::display::BitmapDataChannel_obj::__boot();
::flash::display::BlendMode_obj::__boot();
::flash::display::CapsStyle_obj::__boot();
::flash::display::GradientType_obj::__boot();
::flash::display::Graphics_obj::__boot();
::flash::display::GraphicsPathWinding_obj::__boot();
::flash::display::IGraphicsData_obj::__boot();
::flash::display::InterpolationMethod_obj::__boot();
::flash::display::JointStyle_obj::__boot();
::flash::display::LineScaleMode_obj::__boot();
::flash::display::Loader_obj::__boot();
::flash::net::URLLoader_obj::__boot();
::flash::display::LoaderInfo_obj::__boot();
::flash::display::MovieClip_obj::__boot();
::flash::display::PixelSnapping_obj::__boot();
::flash::display::Shape_obj::__boot();
::flash::display::SpreadMethod_obj::__boot();
::flash::display::Stage_obj::__boot();
::flash::display::TouchInfo_obj::__boot();
::flash::display::StageAlign_obj::__boot();
::flash::display::StageDisplayState_obj::__boot();
::flash::display::StageQuality_obj::__boot();
::flash::display::StageScaleMode_obj::__boot();
::flash::display::TriangleCulling_obj::__boot();
::flash::errors::Error_obj::__boot();
::flash::errors::ArgumentError_obj::__boot();
::flash::errors::EOFError_obj::__boot();
::flash::errors::RangeError_obj::__boot();
::flash::events::AccelerometerEvent_obj::__boot();
::flash::events::TextEvent_obj::__boot();
::flash::events::ErrorEvent_obj::__boot();
::flash::events::Listener_obj::__boot();
::flash::events::EventPhase_obj::__boot();
::flash::events::FocusEvent_obj::__boot();
::flash::events::HTTPStatusEvent_obj::__boot();
::flash::events::IOErrorEvent_obj::__boot();
::flash::events::KeyboardEvent_obj::__boot();
::flash::events::ProgressEvent_obj::__boot();
::flash::events::SampleDataEvent_obj::__boot();
::flash::events::UncaughtErrorEvent_obj::__boot();
::flash::events::UncaughtErrorEvents_obj::__boot();
::flash::filesystem::File_obj::__boot();
::flash::filters::BitmapFilter_obj::__boot();
::flash::geom::ColorTransform_obj::__boot();
::flash::geom::Transform_obj::__boot();
::flash::geom::Vector3D_obj::__boot();
::flash::media::ID3Info_obj::__boot();
::flash::media::Sound_obj::__boot();
::flash::media::SoundChannel_obj::__boot();
::flash::media::SoundLoaderContext_obj::__boot();
::flash::net::SharedObject_obj::__boot();
::flash::net::SharedObjectFlushStatus_obj::__boot();
::flash::net::URLLoaderDataFormat_obj::__boot();
::flash::net::URLRequest_obj::__boot();
::flash::net::URLRequestHeader_obj::__boot();
::flash::net::URLRequestMethod_obj::__boot();
::flash::net::URLVariables_obj::__boot();
::flash::sensors::Accelerometer_obj::__boot();
::flash::system::ApplicationDomain_obj::__boot();
::flash::system::LoaderContext_obj::__boot();
::flash::system::SecurityDomain_obj::__boot();
::flash::system::System_obj::__boot();
::flash::text::AntiAliasType_obj::__boot();
::flash::text::Font_obj::__boot();
::flash::text::FontStyle_obj::__boot();
::flash::text::FontType_obj::__boot();
::flash::text::GridFitType_obj::__boot();
::flash::text::TextField_obj::__boot();
::flash::text::TextFieldAutoSize_obj::__boot();
::flash::text::TextFieldType_obj::__boot();
::flash::text::TextFormat_obj::__boot();
::flash::text::TextLineMetrics_obj::__boot();
::flash::ui::Keyboard_obj::__boot();
::flash::ui::Mouse_obj::__boot();
::flash::ui::Multitouch_obj::__boot();
::flash::ui::MultitouchInputMode_obj::__boot();
::flash::utils::IDataOutput_obj::__boot();
::openfl::utils::IMemoryRange_obj::__boot();
::flash::utils::IDataInput_obj::__boot();
::flash::utils::ByteArray_obj::__boot();
::flash::utils::CompressionAlgorithm_obj::__boot();
::flash::utils::Endian_obj::__boot();
::haxe::Int64_obj::__boot();
::haxe::Resource_obj::__boot();
::haxe::Serializer_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::xml::_Fast::NodeAccess_obj::__boot();
::haxe::xml::_Fast::AttribAccess_obj::__boot();
::haxe::xml::_Fast::HasAttribAccess_obj::__boot();
::haxe::xml::_Fast::HasNodeAccess_obj::__boot();
::haxe::xml::_Fast::NodeListAccess_obj::__boot();
::haxe::xml::Fast_obj::__boot();
::motion::actuators::IGenericActuator_obj::__boot();
::motion::actuators::GenericActuator_obj::__boot();
::motion::actuators::SimpleActuator_obj::__boot();
::motion::easing::Expo_obj::__boot();
::motion::easing::IEasing_obj::__boot();
::motion::easing::ExpoEaseOut_obj::__boot();
::motion::Actuate_obj::__boot();
::motion::_Actuate::EffectsOptions_obj::__boot();
::motion::_Actuate::TransformOptions_obj::__boot();
::motion::_Actuate::TweenTimer_obj::__boot();
::motion::MotionPath_obj::__boot();
::motion::IComponentPath_obj::__boot();
::motion::ComponentPath_obj::__boot();
::motion::BezierPath_obj::__boot();
::motion::LinearPath_obj::__boot();
::motion::actuators::FilterActuator_obj::__boot();
::motion::actuators::MethodActuator_obj::__boot();
::motion::actuators::MotionPathActuator_obj::__boot();
::motion::actuators::PropertyDetails_obj::__boot();
::motion::actuators::PropertyPathDetails_obj::__boot();
::motion::actuators::TransformActuator_obj::__boot();
::motion::easing::Back_obj::__boot();
::motion::easing::BackEaseIn_obj::__boot();
::motion::easing::BackEaseInOut_obj::__boot();
::motion::easing::BackEaseOut_obj::__boot();
::motion::easing::Cubic_obj::__boot();
::motion::easing::CubicEaseIn_obj::__boot();
::motion::easing::CubicEaseInOut_obj::__boot();
::motion::easing::CubicEaseOut_obj::__boot();
::motion::easing::Elastic_obj::__boot();
::motion::easing::ElasticEaseIn_obj::__boot();
::motion::easing::ElasticEaseInOut_obj::__boot();
::motion::easing::ElasticEaseOut_obj::__boot();
::motion::easing::ExpoEaseIn_obj::__boot();
::motion::easing::ExpoEaseInOut_obj::__boot();
::motion::easing::Linear_obj::__boot();
::motion::easing::LinearEaseNone_obj::__boot();
::motion::easing::Quad_obj::__boot();
::motion::easing::QuadEaseIn_obj::__boot();
::motion::easing::QuadEaseInOut_obj::__boot();
::motion::easing::QuadEaseOut_obj::__boot();
::motion::easing::Quart_obj::__boot();
::motion::easing::QuartEaseIn_obj::__boot();
::motion::easing::QuartEaseInOut_obj::__boot();
::motion::easing::QuartEaseOut_obj::__boot();
::motion::easing::Quint_obj::__boot();
::motion::easing::QuintEaseIn_obj::__boot();
::motion::easing::QuintEaseInOut_obj::__boot();
::motion::easing::QuintEaseOut_obj::__boot();
::motion::easing::Sine_obj::__boot();
::motion::easing::SineEaseIn_obj::__boot();
::motion::easing::SineEaseInOut_obj::__boot();
::motion::easing::SineEaseOut_obj::__boot();
::openfl::AssetCache_obj::__boot();
::openfl::Assets_obj::__boot();
::openfl::AssetData_obj::__boot();
::openfl::AssetType_obj::__boot();
::openfl::display::ManagedStage_obj::__boot();
::openfl::display::Tilesheet_obj::__boot();
::openfl::events::JoystickEvent_obj::__boot();
::openfl::events::SystemEvent_obj::__boot();
::openfl::ui::Accelerometer_obj::__boot();
::openfl::utils::SystemPath_obj::__boot();
::openfl::utils::WeakRef_obj::__boot();
::scripts::MyAssets_obj::__boot();
::scripts::MyScripts_obj::__boot();
}

