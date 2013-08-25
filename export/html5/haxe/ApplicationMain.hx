#if !macro
#if (openfl_html5 && !flambe)

import Main;
import haxe.Resource;
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
import flash.net.URLLoaderDataFormat;
//import flash.Assets;
import flash.Lib;

class ApplicationMain {

	private static var completed:Int;
	private static var preloader:NMEPreloader;
	private static var total:Int;

	public static var loaders:Map <String, Loader>;
	public static var urlLoaders:Map <String, URLLoader>;

	public static function main() {
		completed = 0;
		loaders = new Map <String, Loader>();
		urlLoaders = new Map <String, URLLoader>();
		total = 0;
		
		//flash.Lib.setPackage("Zaphod", "LD27", "com.example.myapp", "0.0.1");
		flash.Lib.current.loaderInfo = flash.display.LoaderInfo.create (null);
		
		try {
			
			if (Reflect.hasField (js.Browser.window, "winParameters")) {
				
				Reflect.setField (flash.Lib.current.loaderInfo, "parameters", Reflect.field (js.Browser.window, "winParameters")());
				
			}
			
			flash.Lib.current.stage.loaderInfo = flash.Lib.current.loaderInfo;
			
		} catch (e:Dynamic) {}

		

		
		preloader = new NMEPreloader();
		
		Lib.current.addChild(preloader);
		preloader.onInit();

		
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/autotiles.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/autotiles_alt.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/base.png", loader);
		total ++;
		
		
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/button.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/button_a.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/button_b.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/button_c.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/button_down.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/button_left.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/button_right.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/button_up.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/button_x.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/button_y.png", loader);
		total ++;
		
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/cursor.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/default.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/fontData10pt.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/fontData11pt.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/handle.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/logo.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/logo_corners.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/logo_light.png", loader);
		total ++;
		
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/stick.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/vcr/flixel.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/vcr/open.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/vcr/pause.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/vcr/play.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/vcr/record_off.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/vcr/record_on.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/vcr/restart.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/vcr/step.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/vcr/stop.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/data/vis/bounds.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/gfx/coin.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/gfx/coin_tiles.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/gfx/mapeditor_entities.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/gfx/outDoor.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/gfx/platformer_player.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader();
		loaders.set("assets/gfx/template_tiles.png", loader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/maps/template/mapCSV_map_1_baddies.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/maps/template/mapCSV_map_1_entities.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/maps/template/mapCSV_map_1_tiles.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/maps/template/mapCSV_map_2_baddies.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/maps/template/mapCSV_map_2_entities.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/maps/template/mapCSV_map_2_tiles.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/maps/template/mapCSV_template_map_baddies.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/maps/template/mapCSV_template_map_entities.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/maps/template/mapCSV_template_map_tiles.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/maps/template/map_1.dam", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/maps/template/map_1.dam.bak", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/maps/template/map_2.dam", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/maps/template/map_2.dam.bak", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/maps/template/template_map.dam", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/maps/template/template_map.dam.bak", urlLoader);
		total ++;
		
		
		var resourcePrefix = "NME_:bitmap_";
		for (resourceName in Resource.listNames()) {
			if (StringTools.startsWith (resourceName, resourcePrefix)) {
				var type = Type.resolveClass(StringTools.replace (resourceName.substring(resourcePrefix.length), "_", "."));
				if (type != null) {
					total++;
					var instance = Type.createInstance (type, [ 0, 0, true, 0x00FFFFFF, bitmapClass_onComplete ]);
				}
			}
		}
		
		if (total == 0) {
			begin();
		} else {
			for (path in loaders.keys()) {
				var loader:Loader = loaders.get(path);
				loader.contentLoaderInfo.addEventListener("complete",
          loader_onComplete);
				loader.load (new URLRequest (path));
			}

			for (path in urlLoaders.keys()) {
				var urlLoader:URLLoader = urlLoaders.get(path);
				urlLoader.addEventListener("complete", loader_onComplete);
				urlLoader.load(new URLRequest (path));
			}
		}
	}

	private static function begin():Void {
		preloader.addEventListener(Event.COMPLETE, preloader_onComplete);
		preloader.onLoaded ();
	}
	
	private static function bitmapClass_onComplete(instance:BitmapData):Void {
		completed++;
		var classType = Type.getClass (instance);
		Reflect.setField (classType, "preload", instance);
		if (completed == total) {
			begin ();
		}
	}

	private static function loader_onComplete(event:Event):Void {
		completed ++;
		preloader.onUpdate (completed, total);
		if (completed == total) {
			begin ();
		}
	}

	private static function preloader_onComplete(event:Event):Void {
		preloader.removeEventListener(Event.COMPLETE, preloader_onComplete);
		Lib.current.removeChild(preloader);
		preloader = null;
		if (Reflect.field(Main, "main") == null)
		{
			var mainDisplayObj = Type.createInstance(DocumentClass, []);
			if (Std.is(mainDisplayObj, flash.display.DisplayObject))
				flash.Lib.current.addChild(cast mainDisplayObj);
		}
		else
		{
			Reflect.callMethod(Main, Reflect.field (Main, "main"), []);
		}
	}
}

@:build(DocumentClass.build())
class DocumentClass extends Main {}

#else

import Main;

class ApplicationMain {

	public static function main() {
		if (Reflect.field(Main, "main") == null) {
			Type.createInstance(Main, []);
		} else {
			Reflect.callMethod(Main, Reflect.field(Main, "main"), []);
		}
	}
}

#end
#else

import haxe.macro.Context;
import haxe.macro.Expr;

class DocumentClass {
	
	macro public static function build ():Array<Field> {
		var classType = Context.getLocalClass().get();
		var searchTypes = classType;
		while (searchTypes.superClass != null) {
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				var fields = Context.getBuildFields();
				var method = macro {
					return flash.Lib.current.stage;
				}
				fields.push ({ name: "get_stage", access: [ APrivate, AOverride ], kind: FFun({ args: [], expr: method, params: [], ret: macro :flash.display.Stage }), pos: Context.currentPos() });
				return fields;
			}
			searchTypes = searchTypes.superClass.t.get();
		}
		return null;
	}
	
}
#end