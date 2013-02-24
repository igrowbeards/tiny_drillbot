package nme.installer;


import format.display.MovieClip;
import haxe.Unserializer;
import nme.display.Bitmap;
import nme.display.BitmapData;
import nme.media.Sound;
import nme.net.URLRequest;
import nme.text.Font;
import nme.utils.ByteArray;
import ApplicationMain;

#if swfdev
import format.swf.lite.SWFLite;
#end

#if xfl
import format.XFL;
#end


/**
 * ...
 * @author Joshua Granick
 */

class Assets {
	
	
	public static var cachedBitmapData:Hash<BitmapData> = new Hash<BitmapData>();
	#if swfdev private static var cachedSWFLibraries:Hash <SWFLite> = new Hash <SWFLite> (); #end
	#if xfl private static var cachedXFLLibraries:Hash <XFL> = new Hash <XFL> (); #end
	
	private static var initialized:Bool = false;
	private static var libraryTypes:Hash <String> = new Hash <String> ();
	private static var resourceClasses:Hash <Dynamic> = new Hash <Dynamic> ();
	private static var resourceNames:Hash <String> = new Hash <String> ();
	private static var resourceTypes:Hash <String> = new Hash <String> ();
	
	
	private static function initialize ():Void {
		
		if (!initialized) {
			
			
			
			resourceNames.set ("assets/backdrop.png", "assets/backdrop.png");
			resourceTypes.set ("assets/backdrop.png", "image");
			
			
			resourceNames.set ("assets/bullet.png", "assets/bullet.png");
			resourceTypes.set ("assets/bullet.png", "image");
			
			
			resourceNames.set ("assets/data/autotiles.png", "assets/data/autotiles.png");
			resourceTypes.set ("assets/data/autotiles.png", "image");
			
			
			resourceNames.set ("assets/data/autotiles_alt.png", "assets/data/autotiles_alt.png");
			resourceTypes.set ("assets/data/autotiles_alt.png", "image");
			
			
			resourceNames.set ("assets/data/base.png", "assets/data/base.png");
			resourceTypes.set ("assets/data/base.png", "image");
			
			
			resourceNames.set ("assets/data/beep.mp3", "assets/data/beep.mp3");
			resourceTypes.set ("assets/data/beep.mp3", "music");
			
			
			resourceNames.set ("assets/data/beep.wav", "assets/data/beep.wav");
			resourceTypes.set ("assets/data/beep.wav", "sound");
			
			
			resourceNames.set ("assets/data/button.png", "assets/data/button.png");
			resourceTypes.set ("assets/data/button.png", "image");
			
			
			resourceNames.set ("assets/data/button_a.png", "assets/data/button_a.png");
			resourceTypes.set ("assets/data/button_a.png", "image");
			
			
			resourceNames.set ("assets/data/button_b.png", "assets/data/button_b.png");
			resourceTypes.set ("assets/data/button_b.png", "image");
			
			
			resourceNames.set ("assets/data/button_c.png", "assets/data/button_c.png");
			resourceTypes.set ("assets/data/button_c.png", "image");
			
			
			resourceNames.set ("assets/data/button_down.png", "assets/data/button_down.png");
			resourceTypes.set ("assets/data/button_down.png", "image");
			
			
			resourceNames.set ("assets/data/button_left.png", "assets/data/button_left.png");
			resourceTypes.set ("assets/data/button_left.png", "image");
			
			
			resourceNames.set ("assets/data/button_right.png", "assets/data/button_right.png");
			resourceTypes.set ("assets/data/button_right.png", "image");
			
			
			resourceNames.set ("assets/data/button_up.png", "assets/data/button_up.png");
			resourceTypes.set ("assets/data/button_up.png", "image");
			
			
			resourceNames.set ("assets/data/button_x.png", "assets/data/button_x.png");
			resourceTypes.set ("assets/data/button_x.png", "image");
			
			
			resourceNames.set ("assets/data/button_y.png", "assets/data/button_y.png");
			resourceTypes.set ("assets/data/button_y.png", "image");
			
			resourceClasses.set ("assets/data/courier.ttf", NME_assets_data_courier_ttf);
			resourceNames.set ("assets/data/courier.ttf", "assets/data/courier.ttf");
			resourceTypes.set ("assets/data/courier.ttf", "font");
			
			
			resourceNames.set ("assets/data/cursor.png", "assets/data/cursor.png");
			resourceTypes.set ("assets/data/cursor.png", "image");
			
			
			resourceNames.set ("assets/data/default.png", "assets/data/default.png");
			resourceTypes.set ("assets/data/default.png", "image");
			
			
			resourceNames.set ("assets/data/fontData10pt.png", "assets/data/fontData10pt.png");
			resourceTypes.set ("assets/data/fontData10pt.png", "image");
			
			
			resourceNames.set ("assets/data/fontData11pt.png", "assets/data/fontData11pt.png");
			resourceTypes.set ("assets/data/fontData11pt.png", "image");
			
			
			resourceNames.set ("assets/data/handle.png", "assets/data/handle.png");
			resourceTypes.set ("assets/data/handle.png", "image");
			
			
			resourceNames.set ("assets/data/logo.png", "assets/data/logo.png");
			resourceTypes.set ("assets/data/logo.png", "image");
			
			
			resourceNames.set ("assets/data/logo_corners.png", "assets/data/logo_corners.png");
			resourceTypes.set ("assets/data/logo_corners.png", "image");
			
			
			resourceNames.set ("assets/data/logo_light.png", "assets/data/logo_light.png");
			resourceTypes.set ("assets/data/logo_light.png", "image");
			
			resourceClasses.set ("assets/data/nokiafc22.ttf", NME_assets_data_nokiafc22_ttf);
			resourceNames.set ("assets/data/nokiafc22.ttf", "assets/data/nokiafc22.ttf");
			resourceTypes.set ("assets/data/nokiafc22.ttf", "font");
			
			
			resourceNames.set ("assets/data/stick.png", "assets/data/stick.png");
			resourceTypes.set ("assets/data/stick.png", "image");
			
			
			resourceNames.set ("assets/data/vcr/flixel.png", "assets/data/vcr/flixel.png");
			resourceTypes.set ("assets/data/vcr/flixel.png", "image");
			
			
			resourceNames.set ("assets/data/vcr/open.png", "assets/data/vcr/open.png");
			resourceTypes.set ("assets/data/vcr/open.png", "image");
			
			
			resourceNames.set ("assets/data/vcr/pause.png", "assets/data/vcr/pause.png");
			resourceTypes.set ("assets/data/vcr/pause.png", "image");
			
			
			resourceNames.set ("assets/data/vcr/play.png", "assets/data/vcr/play.png");
			resourceTypes.set ("assets/data/vcr/play.png", "image");
			
			
			resourceNames.set ("assets/data/vcr/record_off.png", "assets/data/vcr/record_off.png");
			resourceTypes.set ("assets/data/vcr/record_off.png", "image");
			
			
			resourceNames.set ("assets/data/vcr/record_on.png", "assets/data/vcr/record_on.png");
			resourceTypes.set ("assets/data/vcr/record_on.png", "image");
			
			
			resourceNames.set ("assets/data/vcr/restart.png", "assets/data/vcr/restart.png");
			resourceTypes.set ("assets/data/vcr/restart.png", "image");
			
			
			resourceNames.set ("assets/data/vcr/step.png", "assets/data/vcr/step.png");
			resourceTypes.set ("assets/data/vcr/step.png", "image");
			
			
			resourceNames.set ("assets/data/vcr/stop.png", "assets/data/vcr/stop.png");
			resourceTypes.set ("assets/data/vcr/stop.png", "image");
			
			
			resourceNames.set ("assets/data/vis/bounds.png", "assets/data/vis/bounds.png");
			resourceTypes.set ("assets/data/vis/bounds.png", "image");
			
			
			resourceNames.set ("assets/driller.png", "assets/driller.png");
			resourceTypes.set ("assets/driller.png", "image");
			
			
			resourceNames.set ("assets/elevator.png", "assets/elevator.png");
			resourceTypes.set ("assets/elevator.png", "image");
			
			
			resourceNames.set ("assets/exit_appear.wav", "assets/exit_appear.wav");
			resourceTypes.set ("assets/exit_appear.wav", "sound");
			
			
			resourceNames.set ("assets/fuel.png", "assets/fuel.png");
			resourceTypes.set ("assets/fuel.png", "image");
			
			
			resourceNames.set ("assets/fuel_pickup.wav", "assets/fuel_pickup.wav");
			resourceTypes.set ("assets/fuel_pickup.wav", "sound");
			
			
			resourceNames.set ("assets/fuel_tiles.png", "assets/fuel_tiles.png");
			resourceTypes.set ("assets/fuel_tiles.png", "image");
			
			
			resourceNames.set ("assets/goomba.png", "assets/goomba.png");
			resourceTypes.set ("assets/goomba.png", "image");
			
			
			resourceNames.set ("assets/goomba_tiles.png", "assets/goomba_tiles.png");
			resourceTypes.set ("assets/goomba_tiles.png", "image");
			
			
			resourceNames.set ("assets/HaxeFlixel.svg", "assets/HaxeFlixel.svg");
			resourceTypes.set ("assets/HaxeFlixel.svg", "text");
			
			
			resourceNames.set ("assets/hurt.wav", "assets/hurt.wav");
			resourceTypes.set ("assets/hurt.wav", "sound");
			
			
			resourceNames.set ("assets/lava.png", "assets/lava.png");
			resourceTypes.set ("assets/lava.png", "image");
			
			
			resourceNames.set ("assets/level1.dam", "assets/level1.dam");
			resourceTypes.set ("assets/level1.dam", "text");
			
			
			resourceNames.set ("assets/level1.dam.bak", "assets/level1.dam.bak");
			resourceTypes.set ("assets/level1.dam.bak", "text");
			
			
			resourceNames.set ("assets/level1.txt", "assets/level1.txt");
			resourceTypes.set ("assets/level1.txt", "text");
			
			
			resourceNames.set ("assets/level1_tileset.tmx", "assets/level1_tileset.tmx");
			resourceTypes.set ("assets/level1_tileset.tmx", "text");
			
			
			resourceNames.set ("assets/mapCSV_Group1_Map1.csv", "assets/mapCSV_Group1_Map1.csv");
			resourceTypes.set ("assets/mapCSV_Group1_Map1.csv", "text");
			
			
			resourceNames.set ("assets/mapCSV_Group1_Map2.csv", "assets/mapCSV_Group1_Map2.csv");
			resourceTypes.set ("assets/mapCSV_Group1_Map2.csv", "text");
			
			
			resourceNames.set ("assets/mapCSV_Group1_Map3.csv", "assets/mapCSV_Group1_Map3.csv");
			resourceTypes.set ("assets/mapCSV_Group1_Map3.csv", "text");
			
			
			resourceNames.set ("assets/mapCSV_Group1_Map4.csv", "assets/mapCSV_Group1_Map4.csv");
			resourceTypes.set ("assets/mapCSV_Group1_Map4.csv", "text");
			
			
			resourceNames.set ("assets/mapCSV_Group1_Map5.csv", "assets/mapCSV_Group1_Map5.csv");
			resourceTypes.set ("assets/mapCSV_Group1_Map5.csv", "text");
			
			
			resourceNames.set ("assets/mapCSV_Group1_Map6.csv", "assets/mapCSV_Group1_Map6.csv");
			resourceTypes.set ("assets/mapCSV_Group1_Map6.csv", "text");
			
			
			resourceNames.set ("assets/mapCSV_Level1_Map.csv", "assets/mapCSV_Level1_Map.csv");
			resourceTypes.set ("assets/mapCSV_Level1_Map.csv", "text");
			
			
			resourceNames.set ("assets/mapCSV_Level1_Sky.csv", "assets/mapCSV_Level1_Sky.csv");
			resourceTypes.set ("assets/mapCSV_Level1_Sky.csv", "text");
			
			
			resourceNames.set ("assets/mapCSV_Level1_Stars.csv", "assets/mapCSV_Level1_Stars.csv");
			resourceTypes.set ("assets/mapCSV_Level1_Stars.csv", "text");
			
			
			resourceNames.set ("assets/rock_tiles.png", "assets/rock_tiles.png");
			resourceTypes.set ("assets/rock_tiles.png", "image");
			
			
			resourceNames.set ("assets/spike.png", "assets/spike.png");
			resourceTypes.set ("assets/spike.png", "image");
			
			
			resourceNames.set ("assets/spikes.png", "assets/spikes.png");
			resourceTypes.set ("assets/spikes.png", "image");
			
			
			resourceNames.set ("assets/spring.png", "assets/spring.png");
			resourceTypes.set ("assets/spring.png", "image");
			
			
			resourceNames.set ("assets/spring.wav", "assets/spring.wav");
			resourceTypes.set ("assets/spring.wav", "sound");
			
			
			resourceNames.set ("assets/spring_tile.png", "assets/spring_tile.png");
			resourceTypes.set ("assets/spring_tile.png", "image");
			
			
			resourceNames.set ("assets/springboard.png", "assets/springboard.png");
			resourceTypes.set ("assets/springboard.png", "image");
			
			
			resourceNames.set ("assets/stomp.wav", "assets/stomp.wav");
			resourceTypes.set ("assets/stomp.wav", "sound");
			
			
			resourceNames.set ("assets/tiles.png", "assets/tiles.png");
			resourceTypes.set ("assets/tiles.png", "image");
			
			
			resourceNames.set ("assets/tiles.png.bak", "assets/tiles.png.bak");
			resourceTypes.set ("assets/tiles.png.bak", "binary");
			
			
			resourceNames.set ("assets/work/tiles.psd", "assets/work/tiles.psd");
			resourceTypes.set ("assets/work/tiles.psd", "binary");
			
			
			initialized = true;
			
		}
		
	}
	
	
	public static function getBitmapData (id:String, useCache:Bool = true):BitmapData {
		
		initialize ();
		
		if (resourceNames.exists(id) && resourceTypes.exists (id) && resourceTypes.get (id).toLowerCase () == "image") {
			
			if (useCache && cachedBitmapData.exists (id)) {
				
				return cachedBitmapData.get (id);
				
			} else {
				
				// Should be bitmapData.clone (), but stopped working in recent Jeash builds
				// Without clone, BitmapData is already cached, so ignoring the hash table for now
				
				var data = cast (ApplicationMain.loaders.get (resourceNames.get(id)).contentLoaderInfo.content, Bitmap).bitmapData;
				
				if (useCache) {
					
					cachedBitmapData.set (id, data);
					
				}
				
				return data;
				
			}
			
		}  else if (id.indexOf (":") > -1) {
			
			var libraryName = id.substr (0, id.indexOf (":"));
			var symbolName = id.substr (id.indexOf (":") + 1);
			
			if (libraryTypes.exists (libraryName)) {
				
				#if swfdev
				
				if (libraryTypes.get (libraryName) == "swf") {
					
					if (!cachedSWFLibraries.exists (libraryName)) {
						
						var unserializer = new Unserializer (getText ("libraries/" + libraryName + ".dat"));
						unserializer.setResolver (cast { resolveEnum: resolveEnum, resolveClass: resolveClass });
						cachedSWFLibraries.set (libraryName, unserializer.unserialize());
						
					}
					
					return cachedSWFLibraries.get (libraryName).getBitmapData (symbolName);
					
				}
				
				#end
				
				#if xfl
				
				if (libraryTypes.get (libraryName) == "xfl") {
					
					if (!cachedXFLLibraries.exists (libraryName)) {
						
						cachedXFLLibraries.set (libraryName, Unserializer.run (getText ("libraries/" + libraryName + "/" + libraryName + ".dat")));
						
					}
					
					return cachedXFLLibraries.get (libraryName).getBitmapData (symbolName);
					
				}
				
				#end
				
			} else {
				
				trace ("[nme.Assets] There is no asset library named \"" + libraryName + "\"");
				
			}
			
		} else {
			
			trace ("[nme.Assets] There is no BitmapData asset with an ID of \"" + id + "\"");
			
		}
		
		return null;
		
	}
	
	
	public static function getBytes (id:String):ByteArray {
		
		initialize ();
		
		if (resourceNames.exists (id)) {
			
			return cast ApplicationMain.urlLoaders.get (getResourceName(id)).data;
			
		}
		
		trace ("[nme.Assets] There is no String or ByteArray asset with an ID of \"" + id + "\"");
		
		return null;
		
	}
	
	
	public static function getFont (id:String):Font {
		
		initialize ();
		
		if (resourceNames.exists(id) && resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id).toLowerCase () == "font") {
				
				return cast (Type.createInstance (resourceClasses.get (id), []), Font);
				
			}
			
		}
		
		trace ("[nme.Assets] There is no Font asset with an ID of \"" + id + "\"");
		
		return null;
		
	}
	
	
	public static function getMovieClip (id:String):MovieClip {
		
		initialize ();
		
		var libraryName = id.substr (0, id.indexOf (":"));
		var symbolName = id.substr (id.indexOf (":") + 1);
		
		if (libraryTypes.exists (libraryName)) {
			
			#if swfdev
			
			if (libraryTypes.get (libraryName) == "swf") {
				
				if (!cachedSWFLibraries.exists (libraryName)) {
					
					var unserializer = new Unserializer (getText ("libraries/" + libraryName + ".dat"));
					unserializer.setResolver (cast { resolveEnum: resolveEnum, resolveClass: resolveClass });
					cachedSWFLibraries.set (libraryName, unserializer.unserialize());
					
				}
				
				return cachedSWFLibraries.get (libraryName).createMovieClip (symbolName);
				
			}
			
			#end
			
			#if xfl
			
			if (libraryTypes.get (libraryName) == "xfl") {
				
				if (!cachedXFLLibraries.exists (libraryName)) {
					
					cachedXFLLibraries.set (libraryName, Unserializer.run (getText ("libraries/" + libraryName + "/" + libraryName + ".dat")));
					
				}
				
				return cachedXFLLibraries.get (libraryName).createMovieClip (symbolName);
				
			}
			
			#end
			
		} else {
			
			trace ("[nme.Assets] There is no asset library named \"" + libraryName + "\"");
			
		}
		
		return null;
		
	}
	
	
	public static function getResourceName (id:String):String {
		
		initialize ();
		
		return resourceNames.get (id);
		
	}
	
	
	public static function getSound (id:String):Sound {
		
		initialize ();
		
		if (resourceNames.exists(id) && resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id).toLowerCase () == "sound") {
				
				return new Sound (new URLRequest (resourceNames.get(id)));
				
			} else if (resourceTypes.get (id).toLowerCase () == "music") {
				
				return new Sound (new URLRequest (resourceNames.get(id)));
				
			}
			
		}
		
		trace ("[nme.Assets] There is no Sound asset with an ID of \"" + id + "\"");
		
		return null;
		
	}
	
	
	public static function getText (id:String):String {
		
		initialize ();
		
		if (resourceNames.exists(id) && resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id).toLowerCase () == "text") {
				
				return ApplicationMain.urlLoaders.get (resourceNames.get(id)).data;
				
			}
			
		}
		
		var bytes = getBytes (id);
		return null;
		
	}
	
	
	//public static function loadBitmapData(id:String, handler:BitmapData -> Void, useCache:Bool = true):BitmapData
	//{
		//return null;
	//}
	//
	//
	//public static function loadBytes(id:String, handler:ByteArray -> Void):ByteArray
	//{	
		//return null;
	//}
	//
	//
	//public static function loadText(id:String, handler:String -> Void):String
	//{
		//return null;
	//}
	
	
	private static function resolveClass (name:String):Class <Dynamic> {
		
		name = StringTools.replace (name, "native.", "browser.");
		return Type.resolveClass (name);
		
	}
	
	
	private static function resolveEnum (name:String):Enum <Dynamic> {
		
		name = StringTools.replace (name, "native.", "browser.");
		return Type.resolveEnum (name);
		
	}
	
	
}