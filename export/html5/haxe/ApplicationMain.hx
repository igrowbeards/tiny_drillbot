#if (nme && !flambe)


import Main;
import nme.display.Bitmap;
import nme.display.Loader;
import nme.events.Event;
import nme.media.Sound;
import nme.net.URLLoader;
import nme.net.URLRequest;
import nme.net.URLLoaderDataFormat;
import nme.Assets;
import nme.Lib;


class ApplicationMain {
	
	
	private static var completed:Int;
	private static var preloader:NMEPreloader;
	private static var total:Int;
	
	public static var loaders:Hash <Loader>;
	public static var urlLoaders:Hash <URLLoader>;
	
	
	public static function main () {
		
		completed = 0;
		loaders = new Hash <Loader> ();
		urlLoaders = new Hash <URLLoader> ();
		total = 0;
		
		
		
		
		preloader = new NMEPreloader ();
		
		Lib.current.addChild (preloader);
		preloader.onInit ();
		
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/backdrop.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/bullet.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/autotiles.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/autotiles_alt.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/base.png", loader);
		total ++;
		
		
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/button.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/button_a.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/button_b.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/button_c.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/button_down.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/button_left.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/button_right.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/button_up.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/button_x.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/button_y.png", loader);
		total ++;
		
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/cursor.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/default.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/fontData10pt.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/fontData11pt.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/handle.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/logo.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/logo_corners.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/logo_light.png", loader);
		total ++;
		
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/stick.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/vcr/flixel.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/vcr/open.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/vcr/pause.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/vcr/play.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/vcr/record_off.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/vcr/record_on.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/vcr/restart.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/vcr/step.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/vcr/stop.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/data/vis/bounds.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/driller.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/elevator.png", loader);
		total ++;
		
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/fuel.png", loader);
		total ++;
		
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/fuel_tiles.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/goomba.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/goomba_tiles.png", loader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader ();
		urlLoader.dataFormat = TEXT;
		urlLoaders.set ("assets/HaxeFlixel.svg", urlLoader);
		total ++;
		
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/lava.png", loader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader ();
		urlLoader.dataFormat = TEXT;
		urlLoaders.set ("assets/level1.dam", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader ();
		urlLoader.dataFormat = TEXT;
		urlLoaders.set ("assets/level1.dam.bak", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader ();
		urlLoader.dataFormat = TEXT;
		urlLoaders.set ("assets/level1.txt", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader ();
		urlLoader.dataFormat = TEXT;
		urlLoaders.set ("assets/level1_tileset.tmx", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader ();
		urlLoader.dataFormat = TEXT;
		urlLoaders.set ("assets/mapCSV_Group1_Map1.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader ();
		urlLoader.dataFormat = TEXT;
		urlLoaders.set ("assets/mapCSV_Group1_Map2.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader ();
		urlLoader.dataFormat = TEXT;
		urlLoaders.set ("assets/mapCSV_Group1_Map3.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader ();
		urlLoader.dataFormat = TEXT;
		urlLoaders.set ("assets/mapCSV_Group1_Map4.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader ();
		urlLoader.dataFormat = TEXT;
		urlLoaders.set ("assets/mapCSV_Group1_Map5.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader ();
		urlLoader.dataFormat = TEXT;
		urlLoaders.set ("assets/mapCSV_Group1_Map6.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader ();
		urlLoader.dataFormat = TEXT;
		urlLoaders.set ("assets/mapCSV_Level1_Map.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader ();
		urlLoader.dataFormat = TEXT;
		urlLoaders.set ("assets/mapCSV_Level1_Sky.csv", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader ();
		urlLoader.dataFormat = TEXT;
		urlLoaders.set ("assets/mapCSV_Level1_Stars.csv", urlLoader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/rock_tiles.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/spike.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/spikes.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/spring.png", loader);
		total ++;
		
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/spring_tile.png", loader);
		total ++;
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/springboard.png", loader);
		total ++;
		
		
		
		var loader:Loader = new Loader ();
		loaders.set ("assets/tiles.png", loader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set ("assets/tiles.png.bak", urlLoader);
		total ++;
		
		
		var urlLoader:URLLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set ("assets/work/tiles.psd", urlLoader);
		total ++;
		
		
		if (total == 0) {
			
			begin ();
			
		} else {
			
			for (path in loaders.keys ()) {
				
				var loader:Loader = loaders.get (path);
				loader.contentLoaderInfo.addEventListener ("complete", loader_onComplete);
				loader.load (new URLRequest (path));
				
			}
			
			for (path in urlLoaders.keys ()) {
				
				var urlLoader:URLLoader = urlLoaders.get (path);
				urlLoader.addEventListener ("complete", loader_onComplete);
				urlLoader.load (new URLRequest (path));
				
			}
			
		}
		
	}
	
	
	private static function begin ():Void {
		
		preloader.addEventListener (Event.COMPLETE, preloader_onComplete);
		preloader.onLoaded ();
		
	}
	

   public static function getAsset(inName:String):Dynamic {
	   
		
		if (inName=="assets/backdrop.png") {
			
			return Assets.getBitmapData ("assets/backdrop.png");
			
		}
		
		if (inName=="assets/bullet.png") {
			
			return Assets.getBitmapData ("assets/bullet.png");
			
		}
		
		if (inName=="assets/data/autotiles.png") {
			
			return Assets.getBitmapData ("assets/data/autotiles.png");
			
		}
		
		if (inName=="assets/data/autotiles_alt.png") {
			
			return Assets.getBitmapData ("assets/data/autotiles_alt.png");
			
		}
		
		if (inName=="assets/data/base.png") {
			
			return Assets.getBitmapData ("assets/data/base.png");
			
		}
		
		if (inName=="assets/data/beep.mp3") {
			
			return Assets.getSound ("assets/data/beep.mp3");
			
		}
		
		if (inName=="assets/data/beep.wav") {
			
			return Assets.getSound ("assets/data/beep.wav");
			
		}
		
		if (inName=="assets/data/button.png") {
			
			return Assets.getBitmapData ("assets/data/button.png");
			
		}
		
		if (inName=="assets/data/button_a.png") {
			
			return Assets.getBitmapData ("assets/data/button_a.png");
			
		}
		
		if (inName=="assets/data/button_b.png") {
			
			return Assets.getBitmapData ("assets/data/button_b.png");
			
		}
		
		if (inName=="assets/data/button_c.png") {
			
			return Assets.getBitmapData ("assets/data/button_c.png");
			
		}
		
		if (inName=="assets/data/button_down.png") {
			
			return Assets.getBitmapData ("assets/data/button_down.png");
			
		}
		
		if (inName=="assets/data/button_left.png") {
			
			return Assets.getBitmapData ("assets/data/button_left.png");
			
		}
		
		if (inName=="assets/data/button_right.png") {
			
			return Assets.getBitmapData ("assets/data/button_right.png");
			
		}
		
		if (inName=="assets/data/button_up.png") {
			
			return Assets.getBitmapData ("assets/data/button_up.png");
			
		}
		
		if (inName=="assets/data/button_x.png") {
			
			return Assets.getBitmapData ("assets/data/button_x.png");
			
		}
		
		if (inName=="assets/data/button_y.png") {
			
			return Assets.getBitmapData ("assets/data/button_y.png");
			
		}
		
		if (inName=="assets/data/courier.ttf") {
			
			return Assets.getFont ("assets/data/courier.ttf");
			
		}
		
		if (inName=="assets/data/cursor.png") {
			
			return Assets.getBitmapData ("assets/data/cursor.png");
			
		}
		
		if (inName=="assets/data/default.png") {
			
			return Assets.getBitmapData ("assets/data/default.png");
			
		}
		
		if (inName=="assets/data/fontData10pt.png") {
			
			return Assets.getBitmapData ("assets/data/fontData10pt.png");
			
		}
		
		if (inName=="assets/data/fontData11pt.png") {
			
			return Assets.getBitmapData ("assets/data/fontData11pt.png");
			
		}
		
		if (inName=="assets/data/handle.png") {
			
			return Assets.getBitmapData ("assets/data/handle.png");
			
		}
		
		if (inName=="assets/data/logo.png") {
			
			return Assets.getBitmapData ("assets/data/logo.png");
			
		}
		
		if (inName=="assets/data/logo_corners.png") {
			
			return Assets.getBitmapData ("assets/data/logo_corners.png");
			
		}
		
		if (inName=="assets/data/logo_light.png") {
			
			return Assets.getBitmapData ("assets/data/logo_light.png");
			
		}
		
		if (inName=="assets/data/nokiafc22.ttf") {
			
			return Assets.getFont ("assets/data/nokiafc22.ttf");
			
		}
		
		if (inName=="assets/data/stick.png") {
			
			return Assets.getBitmapData ("assets/data/stick.png");
			
		}
		
		if (inName=="assets/data/vcr/flixel.png") {
			
			return Assets.getBitmapData ("assets/data/vcr/flixel.png");
			
		}
		
		if (inName=="assets/data/vcr/open.png") {
			
			return Assets.getBitmapData ("assets/data/vcr/open.png");
			
		}
		
		if (inName=="assets/data/vcr/pause.png") {
			
			return Assets.getBitmapData ("assets/data/vcr/pause.png");
			
		}
		
		if (inName=="assets/data/vcr/play.png") {
			
			return Assets.getBitmapData ("assets/data/vcr/play.png");
			
		}
		
		if (inName=="assets/data/vcr/record_off.png") {
			
			return Assets.getBitmapData ("assets/data/vcr/record_off.png");
			
		}
		
		if (inName=="assets/data/vcr/record_on.png") {
			
			return Assets.getBitmapData ("assets/data/vcr/record_on.png");
			
		}
		
		if (inName=="assets/data/vcr/restart.png") {
			
			return Assets.getBitmapData ("assets/data/vcr/restart.png");
			
		}
		
		if (inName=="assets/data/vcr/step.png") {
			
			return Assets.getBitmapData ("assets/data/vcr/step.png");
			
		}
		
		if (inName=="assets/data/vcr/stop.png") {
			
			return Assets.getBitmapData ("assets/data/vcr/stop.png");
			
		}
		
		if (inName=="assets/data/vis/bounds.png") {
			
			return Assets.getBitmapData ("assets/data/vis/bounds.png");
			
		}
		
		if (inName=="assets/driller.png") {
			
			return Assets.getBitmapData ("assets/driller.png");
			
		}
		
		if (inName=="assets/elevator.png") {
			
			return Assets.getBitmapData ("assets/elevator.png");
			
		}
		
		if (inName=="assets/exit_appear.wav") {
			
			return Assets.getSound ("assets/exit_appear.wav");
			
		}
		
		if (inName=="assets/fuel.png") {
			
			return Assets.getBitmapData ("assets/fuel.png");
			
		}
		
		if (inName=="assets/fuel_pickup.wav") {
			
			return Assets.getSound ("assets/fuel_pickup.wav");
			
		}
		
		if (inName=="assets/fuel_tiles.png") {
			
			return Assets.getBitmapData ("assets/fuel_tiles.png");
			
		}
		
		if (inName=="assets/goomba.png") {
			
			return Assets.getBitmapData ("assets/goomba.png");
			
		}
		
		if (inName=="assets/goomba_tiles.png") {
			
			return Assets.getBitmapData ("assets/goomba_tiles.png");
			
		}
		
		if (inName=="assets/HaxeFlixel.svg") {
			
			return Assets.getText ("assets/HaxeFlixel.svg");
			
		}
		
		if (inName=="assets/hurt.wav") {
			
			return Assets.getSound ("assets/hurt.wav");
			
		}
		
		if (inName=="assets/lava.png") {
			
			return Assets.getBitmapData ("assets/lava.png");
			
		}
		
		if (inName=="assets/level1.dam") {
			
			return Assets.getText ("assets/level1.dam");
			
		}
		
		if (inName=="assets/level1.dam.bak") {
			
			return Assets.getText ("assets/level1.dam.bak");
			
		}
		
		if (inName=="assets/level1.txt") {
			
			return Assets.getText ("assets/level1.txt");
			
		}
		
		if (inName=="assets/level1_tileset.tmx") {
			
			return Assets.getText ("assets/level1_tileset.tmx");
			
		}
		
		if (inName=="assets/mapCSV_Group1_Map1.csv") {
			
			return Assets.getText ("assets/mapCSV_Group1_Map1.csv");
			
		}
		
		if (inName=="assets/mapCSV_Group1_Map2.csv") {
			
			return Assets.getText ("assets/mapCSV_Group1_Map2.csv");
			
		}
		
		if (inName=="assets/mapCSV_Group1_Map3.csv") {
			
			return Assets.getText ("assets/mapCSV_Group1_Map3.csv");
			
		}
		
		if (inName=="assets/mapCSV_Group1_Map4.csv") {
			
			return Assets.getText ("assets/mapCSV_Group1_Map4.csv");
			
		}
		
		if (inName=="assets/mapCSV_Group1_Map5.csv") {
			
			return Assets.getText ("assets/mapCSV_Group1_Map5.csv");
			
		}
		
		if (inName=="assets/mapCSV_Group1_Map6.csv") {
			
			return Assets.getText ("assets/mapCSV_Group1_Map6.csv");
			
		}
		
		if (inName=="assets/mapCSV_Level1_Map.csv") {
			
			return Assets.getText ("assets/mapCSV_Level1_Map.csv");
			
		}
		
		if (inName=="assets/mapCSV_Level1_Sky.csv") {
			
			return Assets.getText ("assets/mapCSV_Level1_Sky.csv");
			
		}
		
		if (inName=="assets/mapCSV_Level1_Stars.csv") {
			
			return Assets.getText ("assets/mapCSV_Level1_Stars.csv");
			
		}
		
		if (inName=="assets/rock_tiles.png") {
			
			return Assets.getBitmapData ("assets/rock_tiles.png");
			
		}
		
		if (inName=="assets/spike.png") {
			
			return Assets.getBitmapData ("assets/spike.png");
			
		}
		
		if (inName=="assets/spikes.png") {
			
			return Assets.getBitmapData ("assets/spikes.png");
			
		}
		
		if (inName=="assets/spring.png") {
			
			return Assets.getBitmapData ("assets/spring.png");
			
		}
		
		if (inName=="assets/spring.wav") {
			
			return Assets.getSound ("assets/spring.wav");
			
		}
		
		if (inName=="assets/spring_tile.png") {
			
			return Assets.getBitmapData ("assets/spring_tile.png");
			
		}
		
		if (inName=="assets/springboard.png") {
			
			return Assets.getBitmapData ("assets/springboard.png");
			
		}
		
		if (inName=="assets/stomp.wav") {
			
			return Assets.getSound ("assets/stomp.wav");
			
		}
		
		if (inName=="assets/tiles.png") {
			
			return Assets.getBitmapData ("assets/tiles.png");
			
		}
		
		if (inName=="assets/tiles.png.bak") {
			
			return Assets.getBytes ("assets/tiles.png.bak");
			
		}
		
		if (inName=="assets/work/tiles.psd") {
			
			return Assets.getBytes ("assets/work/tiles.psd");
			
		}
		
		return null;
		
   }
   
   
   
   
   // Event Handlers
   
   
   
   
	private static function loader_onComplete (event:Event):Void {
		
		completed ++;
		
		preloader.onUpdate (completed, total);
		
		if (completed == total) {
			
			begin ();
			
		}
	   
	}
	
	
	private static function preloader_onComplete (event:Event):Void {
		
		preloader.removeEventListener (Event.COMPLETE, preloader_onComplete);
		
		Lib.current.removeChild(preloader);
		preloader = null;
		
		if (Reflect.field(Main, "main") == null)
		{
			var mainDisplayObj = new Main();
			if (Std.is(mainDisplayObj, browser.display.DisplayObject))
				nme.Lib.current.addChild(cast mainDisplayObj);
		}
		else
		{
			Reflect.callMethod (Main, Reflect.field (Main, "main"), []);
		}
		
	}
   
   
}



	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	
		class NME_assets_data_courier_ttf extends nme.text.Font { }
	

	

	

	

	

	

	

	

	

	
		class NME_assets_data_nokiafc22_ttf extends nme.text.Font { }
	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	

	



#else


import Main;


class ApplicationMain {
	
	
	public static function main () {
		
		if (Reflect.field(Main, "main") == null) {
			
			Type.createInstance (Main, []);
			
		} else {
			
			Reflect.callMethod (Main, Reflect.field (Main, "main"), []);
			
		}
		
	}
	
	
}


#end