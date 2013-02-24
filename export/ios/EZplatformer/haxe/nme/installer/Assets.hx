package nme.installer;


import format.display.MovieClip;
import haxe.Unserializer;
import nme.display.BitmapData;
import nme.media.Sound;
import nme.net.URLRequest;
import nme.text.Font;
import nme.utils.ByteArray;

#if swf
import format.SWF;
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
	#if swf private static var cachedSWFLibraries:Hash <SWF> = new Hash <SWF> (); #end
	#if xfl private static var cachedXFLLibraries:Hash <XFL> = new Hash <XFL> (); #end
	
	private static var initialized:Bool = false;
	private static var libraryTypes:Hash <String> = new Hash <String> ();
	private static var resourceNames:Hash <String> = new Hash <String> ();
	private static var resourceTypes:Hash <String> = new Hash <String> ();
	
	
	private static function initialize ():Void {
		
		if (!initialized) {
			
			resourceNames.set ("assets/backdrop.png", "assets_backdrop_png");
			resourceTypes.set ("assets/backdrop.png", "image");
			resourceNames.set ("assets/bullet.png", "assets_bullet_png");
			resourceTypes.set ("assets/bullet.png", "image");
			resourceNames.set ("assets/data/autotiles.png", "assets_data_autotiles_png");
			resourceTypes.set ("assets/data/autotiles.png", "image");
			resourceNames.set ("assets/data/autotiles_alt.png", "assets_data_autotiles_alt_png");
			resourceTypes.set ("assets/data/autotiles_alt.png", "image");
			resourceNames.set ("assets/data/base.png", "assets_data_base_png");
			resourceTypes.set ("assets/data/base.png", "image");
			resourceNames.set ("assets/data/beep.mp3", "assets_data_beep_mp3");
			resourceTypes.set ("assets/data/beep.mp3", "music");
			resourceNames.set ("assets/data/beep.wav", "assets_data_beep_wav");
			resourceTypes.set ("assets/data/beep.wav", "sound");
			resourceNames.set ("assets/data/button.png", "assets_data_button_png");
			resourceTypes.set ("assets/data/button.png", "image");
			resourceNames.set ("assets/data/button_a.png", "assets_data_button_a_png");
			resourceTypes.set ("assets/data/button_a.png", "image");
			resourceNames.set ("assets/data/button_b.png", "assets_data_button_b_png");
			resourceTypes.set ("assets/data/button_b.png", "image");
			resourceNames.set ("assets/data/button_c.png", "assets_data_button_c_png");
			resourceTypes.set ("assets/data/button_c.png", "image");
			resourceNames.set ("assets/data/button_down.png", "assets_data_button_down_png");
			resourceTypes.set ("assets/data/button_down.png", "image");
			resourceNames.set ("assets/data/button_left.png", "assets_data_button_left_png");
			resourceTypes.set ("assets/data/button_left.png", "image");
			resourceNames.set ("assets/data/button_right.png", "assets_data_button_right_png");
			resourceTypes.set ("assets/data/button_right.png", "image");
			resourceNames.set ("assets/data/button_up.png", "assets_data_button_up_png");
			resourceTypes.set ("assets/data/button_up.png", "image");
			resourceNames.set ("assets/data/button_x.png", "assets_data_button_x_png");
			resourceTypes.set ("assets/data/button_x.png", "image");
			resourceNames.set ("assets/data/button_y.png", "assets_data_button_y_png");
			resourceTypes.set ("assets/data/button_y.png", "image");
			resourceNames.set ("assets/data/courier.ttf", "assets_data_courier_ttf");
			resourceTypes.set ("assets/data/courier.ttf", "font");
			resourceNames.set ("assets/data/cursor.png", "assets_data_cursor_png");
			resourceTypes.set ("assets/data/cursor.png", "image");
			resourceNames.set ("assets/data/default.png", "assets_data_default_png");
			resourceTypes.set ("assets/data/default.png", "image");
			resourceNames.set ("assets/data/fontData10pt.png", "assets_data_fontdata10pt_png");
			resourceTypes.set ("assets/data/fontData10pt.png", "image");
			resourceNames.set ("assets/data/fontData11pt.png", "assets_data_fontdata11pt_png");
			resourceTypes.set ("assets/data/fontData11pt.png", "image");
			resourceNames.set ("assets/data/handle.png", "assets_data_handle_png");
			resourceTypes.set ("assets/data/handle.png", "image");
			resourceNames.set ("assets/data/logo.png", "assets_data_logo_png");
			resourceTypes.set ("assets/data/logo.png", "image");
			resourceNames.set ("assets/data/logo_corners.png", "assets_data_logo_corners_png");
			resourceTypes.set ("assets/data/logo_corners.png", "image");
			resourceNames.set ("assets/data/logo_light.png", "assets_data_logo_light_png");
			resourceTypes.set ("assets/data/logo_light.png", "image");
			resourceNames.set ("assets/data/nokiafc22.ttf", "assets_data_nokiafc22_ttf");
			resourceTypes.set ("assets/data/nokiafc22.ttf", "font");
			resourceNames.set ("assets/data/stick.png", "assets_data_stick_png");
			resourceTypes.set ("assets/data/stick.png", "image");
			resourceNames.set ("assets/data/vcr/flixel.png", "assets_data_vcr_flixel_png");
			resourceTypes.set ("assets/data/vcr/flixel.png", "image");
			resourceNames.set ("assets/data/vcr/open.png", "assets_data_vcr_open_png");
			resourceTypes.set ("assets/data/vcr/open.png", "image");
			resourceNames.set ("assets/data/vcr/pause.png", "assets_data_vcr_pause_png");
			resourceTypes.set ("assets/data/vcr/pause.png", "image");
			resourceNames.set ("assets/data/vcr/play.png", "assets_data_vcr_play_png");
			resourceTypes.set ("assets/data/vcr/play.png", "image");
			resourceNames.set ("assets/data/vcr/record_off.png", "assets_data_vcr_record_off_png");
			resourceTypes.set ("assets/data/vcr/record_off.png", "image");
			resourceNames.set ("assets/data/vcr/record_on.png", "assets_data_vcr_record_on_png");
			resourceTypes.set ("assets/data/vcr/record_on.png", "image");
			resourceNames.set ("assets/data/vcr/restart.png", "assets_data_vcr_restart_png");
			resourceTypes.set ("assets/data/vcr/restart.png", "image");
			resourceNames.set ("assets/data/vcr/step.png", "assets_data_vcr_step_png");
			resourceTypes.set ("assets/data/vcr/step.png", "image");
			resourceNames.set ("assets/data/vcr/stop.png", "assets_data_vcr_stop_png");
			resourceTypes.set ("assets/data/vcr/stop.png", "image");
			resourceNames.set ("assets/data/vis/bounds.png", "assets_data_vis_bounds_png");
			resourceTypes.set ("assets/data/vis/bounds.png", "image");
			resourceNames.set ("assets/driller.png", "assets_driller_png");
			resourceTypes.set ("assets/driller.png", "image");
			resourceNames.set ("assets/elevator.png", "assets_elevator_png");
			resourceTypes.set ("assets/elevator.png", "image");
			resourceNames.set ("assets/exit_appear.wav", "assets_exit_appear_wav");
			resourceTypes.set ("assets/exit_appear.wav", "sound");
			resourceNames.set ("assets/fuel.png", "assets_fuel_png");
			resourceTypes.set ("assets/fuel.png", "image");
			resourceNames.set ("assets/fuel_pickup.wav", "assets_fuel_pickup_wav");
			resourceTypes.set ("assets/fuel_pickup.wav", "sound");
			resourceNames.set ("assets/fuel_tiles.png", "assets_fuel_tiles_png");
			resourceTypes.set ("assets/fuel_tiles.png", "image");
			resourceNames.set ("assets/goomba.png", "assets_goomba_png");
			resourceTypes.set ("assets/goomba.png", "image");
			resourceNames.set ("assets/goomba_tiles.png", "assets_goomba_tiles_png");
			resourceTypes.set ("assets/goomba_tiles.png", "image");
			resourceNames.set ("assets/HaxeFlixel.svg", "assets_haxeflixel_svg");
			resourceTypes.set ("assets/HaxeFlixel.svg", "text");
			resourceNames.set ("assets/hurt.wav", "assets_hurt_wav");
			resourceTypes.set ("assets/hurt.wav", "sound");
			resourceNames.set ("assets/lava.png", "assets_lava_png");
			resourceTypes.set ("assets/lava.png", "image");
			resourceNames.set ("assets/level1.dam", "assets_level1_dam");
			resourceTypes.set ("assets/level1.dam", "text");
			resourceNames.set ("assets/level1.dam.bak", "assets_level1_dam_bak");
			resourceTypes.set ("assets/level1.dam.bak", "text");
			resourceNames.set ("assets/level1.txt", "assets_level1_txt");
			resourceTypes.set ("assets/level1.txt", "text");
			resourceNames.set ("assets/level1_tileset.tmx", "assets_level1_tileset_tmx");
			resourceTypes.set ("assets/level1_tileset.tmx", "text");
			resourceNames.set ("assets/mapCSV_Group1_Map1.csv", "assets_mapcsv_group1_map1_csv");
			resourceTypes.set ("assets/mapCSV_Group1_Map1.csv", "text");
			resourceNames.set ("assets/mapCSV_Group1_Map2.csv", "assets_mapcsv_group1_map2_csv");
			resourceTypes.set ("assets/mapCSV_Group1_Map2.csv", "text");
			resourceNames.set ("assets/mapCSV_Group1_Map3.csv", "assets_mapcsv_group1_map3_csv");
			resourceTypes.set ("assets/mapCSV_Group1_Map3.csv", "text");
			resourceNames.set ("assets/mapCSV_Group1_Map4.csv", "assets_mapcsv_group1_map4_csv");
			resourceTypes.set ("assets/mapCSV_Group1_Map4.csv", "text");
			resourceNames.set ("assets/mapCSV_Group1_Map5.csv", "assets_mapcsv_group1_map5_csv");
			resourceTypes.set ("assets/mapCSV_Group1_Map5.csv", "text");
			resourceNames.set ("assets/mapCSV_Group1_Map6.csv", "assets_mapcsv_group1_map6_csv");
			resourceTypes.set ("assets/mapCSV_Group1_Map6.csv", "text");
			resourceNames.set ("assets/mapCSV_Level1_Map.csv", "assets_mapcsv_level1_map_csv");
			resourceTypes.set ("assets/mapCSV_Level1_Map.csv", "text");
			resourceNames.set ("assets/mapCSV_Level1_Sky.csv", "assets_mapcsv_level1_sky_csv");
			resourceTypes.set ("assets/mapCSV_Level1_Sky.csv", "text");
			resourceNames.set ("assets/mapCSV_Level1_Stars.csv", "assets_mapcsv_level1_stars_csv");
			resourceTypes.set ("assets/mapCSV_Level1_Stars.csv", "text");
			resourceNames.set ("assets/rock_tiles.png", "assets_rock_tiles_png");
			resourceTypes.set ("assets/rock_tiles.png", "image");
			resourceNames.set ("assets/spike.png", "assets_spike_png");
			resourceTypes.set ("assets/spike.png", "image");
			resourceNames.set ("assets/spikes.png", "assets_spikes_png");
			resourceTypes.set ("assets/spikes.png", "image");
			resourceNames.set ("assets/spring.png", "assets_spring_png");
			resourceTypes.set ("assets/spring.png", "image");
			resourceNames.set ("assets/spring.wav", "assets_spring_wav");
			resourceTypes.set ("assets/spring.wav", "sound");
			resourceNames.set ("assets/spring_tile.png", "assets_spring_tile_png");
			resourceTypes.set ("assets/spring_tile.png", "image");
			resourceNames.set ("assets/springboard.png", "assets_springboard_png");
			resourceTypes.set ("assets/springboard.png", "image");
			resourceNames.set ("assets/stomp.wav", "assets_stomp_wav");
			resourceTypes.set ("assets/stomp.wav", "sound");
			resourceNames.set ("assets/tiles.png", "assets_tiles_png");
			resourceTypes.set ("assets/tiles.png", "image");
			resourceNames.set ("assets/tiles.png.bak", "assets_tiles_png_bak");
			resourceTypes.set ("assets/tiles.png.bak", "binary");
			resourceNames.set ("assets/work/tiles.psd", "assets_work_tiles_psd");
			resourceTypes.set ("assets/work/tiles.psd", "binary");
			
			
			initialized = true;
			
		}
		
	}
	
	
	public static function getBitmapData (id:String, useCache:Bool = true):BitmapData {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id).toLowerCase () == "image") {
			
			if (useCache && cachedBitmapData.exists (id)) {
				
				return cachedBitmapData.get (id);
				
			} else {
				
				var data = BitmapData.load (resourceNames.get (id));
				
				if (useCache) {
					
					cachedBitmapData.set (id, data);
					
				}
				
				return data;
				
			}
			
		}  else if (id.indexOf (":") > -1) {
			
			var libraryName = id.substr (0, id.indexOf (":"));
			var symbolName = id.substr (id.indexOf (":") + 1);
			
			if (libraryTypes.exists (libraryName)) {
				
				#if swf
				
				if (libraryTypes.get (libraryName) == "swf") {
					
					if (!cachedSWFLibraries.exists (libraryName)) {
						
						cachedSWFLibraries.set (libraryName, new SWF (getBytes ("libraries/" + libraryName + ".swf")));
						
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
			
			return ByteArray.readFile (resourceNames.get (id));
			
		} else {
			
			trace ("[nme.Assets] There is no String or ByteArray asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getFont (id:String):Font {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id).toLowerCase () == "font") {
			
			return new Font (resourceNames.get (id));
			
		} else {
			
			trace ("[nme.Assets] There is no Font asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getMovieClip (id:String):MovieClip {
		
		initialize ();
		
		var libraryName = id.substr (0, id.indexOf (":"));
		var symbolName = id.substr (id.indexOf (":") + 1);
		
		if (libraryTypes.exists (libraryName)) {
			
			#if swf
			
			if (libraryTypes.get (libraryName) == "swf") {
				
				if (!cachedSWFLibraries.exists (libraryName)) {
					
					cachedSWFLibraries.set (libraryName, new SWF (getBytes ("libraries/" + libraryName + ".swf")));
					
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
		
		if (resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id).toLowerCase () == "sound") {
				
				return new Sound (new URLRequest (resourceNames.get (id)), null, false);
				
			} else if (resourceTypes.get (id).toLowerCase () == "music") {
				
				return new Sound (new URLRequest (resourceNames.get (id)), null, true);
				
			}
			
		}
		
		trace ("[nme.Assets] There is no Sound asset with an ID of \"" + id + "\"");
		
		return null;
		
	}
	
	
	public static function getText (id:String):String {
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
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
	
	
}
