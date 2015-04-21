package scripts;

import haxe.xml.Fast;
import openfl.Assets;
import com.stencyl.AssetLoader;
import com.stencyl.Input;
import com.stencyl.Key;
import com.stencyl.Engine;

class MyAssets implements AssetLoader
{
	//Game
	public static var landscape:Bool = true;
	public static var autorotate:Bool = false;
	public static var stretchToFit:Bool = false;
	public static var scaleToFit1:Bool = false;
	public static var scaleToFit2:Bool = false;
	public static var scaleToFit3:Bool = false;
	public static var stageWidth:Int = 640;
	public static var stageHeight:Int = 384;
	public static var initSceneID:Int = 0;
	public static var physicsMode:Int = 0;
	public static var gameScale:Float = 1.0;
	public static var gameImageBase:String = "1x";
	public static var antialias:Bool = false;
	public static var pixelsnap:Bool = false;
	public static var startInFullScreen = false;
	public static var scaleMode:Int = 0;

	//APIs
	public static var adPositionBottom:Bool = true;
	public static var whirlID:String = "";
	public static var mochiID:String = "";
	public static var cpmstarID:String = "";
	public static var newgroundsID:String = "";
	public static var newgroundsKey:String = "";
	
	//Other
	public static var releaseMode:Bool = false;
	public static var showConsole:Bool = false;
	public static var debugDraw:Bool = false;
	public static var always1x:Bool = false;
	public static var maxScale:Float = 4.0;
	public static var disableBackButton:Bool = false;
	
	//Keys
	public static var androidPublicKey:String = "";

	public function new()
	{
		Input.enable();
		Input.define("up", [nme.ui.Keyboard.UP]);
		Input.define("down", [nme.ui.Keyboard.DOWN]);
		Input.define("left", [nme.ui.Keyboard.LEFT]);
		Input.define("right", [nme.ui.Keyboard.RIGHT]);
		Input.define("Jump", [nme.ui.Keyboard.SPACE]);
		Input.define("enter", [nme.ui.Keyboard.ENTER]);
		
	}
	
	public function loadResources(resourceMap:Map<String,Dynamic>):Void
	{
		var i = 0;
		var increment = 50.0 / Math.max(1, 7);
		
		resourceMap.set("1-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-0.png", false));
		resourceMap.set("1-1.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-1.png", false));
		resourceMap.set("1-4.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-4.png", false));
		resourceMap.set("1-6.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-6.png", false));
		resourceMap.set("1-8.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-8.png", false));
		resourceMap.set("1-10.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-10.png", false));
		com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i)); i++;
		resourceMap.set("3-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-3-0.png", false));
		resourceMap.set("3-1.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-3-1.png", false));
		resourceMap.set("3-2.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-3-2.png", false));
		resourceMap.set("3-3.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-3-3.png", false));
		com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i)); i++;
		resourceMap.set("4.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/tileset-4.png", false));
		com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i)); i++;
	}
	
	public function loadScenes(scenesXML:Map<Int,String>):Void
	{
		var i = 0;
		var increment = 10.0 / Math.max(1, 1);
		
		scenesXML.set(0, "Scene 1");
		com.stencyl.Data.instance.updatePreloader(90 + Std.int(increment * i)); i++;
	}
}