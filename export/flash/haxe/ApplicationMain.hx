#if nme

import Main;
import nme.Assets;
import nme.events.Event;


class ApplicationMain {
	
	static var mPreloader:NMEPreloader;

	public static function main () {
		
		var call_real = true;
		
		
		var loaded:Int = nme.Lib.current.loaderInfo.bytesLoaded;
		var total:Int = nme.Lib.current.loaderInfo.bytesTotal;
		
		nme.Lib.current.stage.align = nme.display.StageAlign.TOP_LEFT;
		nme.Lib.current.stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
		
		if (loaded < total || true) /* Always wait for event */ {
			
			call_real = false;
			mPreloader = new org.flixel.system.FlxPreloader();
			nme.Lib.current.addChild(mPreloader);
			mPreloader.onInit();
			mPreloader.onUpdate(loaded,total);
			nme.Lib.current.addEventListener (nme.events.Event.ENTER_FRAME, onEnter);
			
		}
		
		
		#if !fdb
		haxe.Log.trace = flashTrace;
		#end
		
		if (call_real)
			begin ();
	}

	#if !fdb
	private static function flashTrace( v : Dynamic, ?pos : haxe.PosInfos ) {
		var className = pos.className.substr(pos.className.lastIndexOf('.') + 1);
		var message = className+"::"+pos.methodName+":"+pos.lineNumber+": " + v;
		
        if (flash.external.ExternalInterface.available)
			flash.external.ExternalInterface.call("console.log", message);
		else untyped flash.Boot.__trace(v, pos);
    }
	#end
	
	private static function begin () {
		
		var hasMain = false;
		
		for (methodName in Type.getClassFields(Main))
		{
			if (methodName == "main")
			{
				hasMain = true;
				break;
			}
		}
		
		if (hasMain)
		{
			Reflect.callMethod (Main, Reflect.field (Main, "main"), []);
		}
		else
		{
			var instance = Type.createInstance(Main, []);
			if (Std.is (instance, nme.display.DisplayObject)) {
				nme.Lib.current.addChild(cast instance);
			}	
		}
		
	}

	static function onEnter (_) {
		
		var loaded = nme.Lib.current.loaderInfo.bytesLoaded;
		var total = nme.Lib.current.loaderInfo.bytesTotal;
		mPreloader.onUpdate(loaded,total);
		
		if (loaded >= total) {
			
			nme.Lib.current.removeEventListener(nme.events.Event.ENTER_FRAME, onEnter);
			mPreloader.addEventListener (Event.COMPLETE, preloader_onComplete);
			mPreloader.onLoaded();
			
		}
		
	}

	public static function getAsset (inName:String):Dynamic {
		
		
		if (inName=="Beep")
			 
            return Assets.getSound ("Beep");
         
		
		if (inName=="spring_boing")
			 
            return Assets.getSound ("spring_boing");
         
		
		if (inName=="fuel_pickup")
			 
            return Assets.getSound ("fuel_pickup");
         
		
		if (inName=="hurt")
			 
            return Assets.getSound ("hurt");
         
		
		if (inName=="stomp")
			 
            return Assets.getSound ("stomp");
         
		
		if (inName=="exit_appear")
			 
            return Assets.getSound ("exit_appear");
         
		
		if (inName=="assets/backdrop.png")
			 
            return Assets.getBitmapData ("assets/backdrop.png");
         
		
		if (inName=="assets/bullet.png")
			 
            return Assets.getBitmapData ("assets/bullet.png");
         
		
		if (inName=="assets/data/autotiles.png")
			 
            return Assets.getBitmapData ("assets/data/autotiles.png");
         
		
		if (inName=="assets/data/autotiles_alt.png")
			 
            return Assets.getBitmapData ("assets/data/autotiles_alt.png");
         
		
		if (inName=="assets/data/base.png")
			 
            return Assets.getBitmapData ("assets/data/base.png");
         
		
		if (inName=="assets/data/beep.mp3")
			 
            return Assets.getSound ("assets/data/beep.mp3");
		 
		
		if (inName=="assets/data/button.png")
			 
            return Assets.getBitmapData ("assets/data/button.png");
         
		
		if (inName=="assets/data/button_a.png")
			 
            return Assets.getBitmapData ("assets/data/button_a.png");
         
		
		if (inName=="assets/data/button_b.png")
			 
            return Assets.getBitmapData ("assets/data/button_b.png");
         
		
		if (inName=="assets/data/button_c.png")
			 
            return Assets.getBitmapData ("assets/data/button_c.png");
         
		
		if (inName=="assets/data/button_down.png")
			 
            return Assets.getBitmapData ("assets/data/button_down.png");
         
		
		if (inName=="assets/data/button_left.png")
			 
            return Assets.getBitmapData ("assets/data/button_left.png");
         
		
		if (inName=="assets/data/button_right.png")
			 
            return Assets.getBitmapData ("assets/data/button_right.png");
         
		
		if (inName=="assets/data/button_up.png")
			 
            return Assets.getBitmapData ("assets/data/button_up.png");
         
		
		if (inName=="assets/data/button_x.png")
			 
            return Assets.getBitmapData ("assets/data/button_x.png");
         
		
		if (inName=="assets/data/button_y.png")
			 
            return Assets.getBitmapData ("assets/data/button_y.png");
         
		
		if (inName=="assets/data/courier.ttf")
			 
			 return Assets.getFont ("assets/data/courier.ttf");
		 
		
		if (inName=="assets/data/cursor.png")
			 
            return Assets.getBitmapData ("assets/data/cursor.png");
         
		
		if (inName=="assets/data/default.png")
			 
            return Assets.getBitmapData ("assets/data/default.png");
         
		
		if (inName=="assets/data/fontData10pt.png")
			 
            return Assets.getBitmapData ("assets/data/fontData10pt.png");
         
		
		if (inName=="assets/data/fontData11pt.png")
			 
            return Assets.getBitmapData ("assets/data/fontData11pt.png");
         
		
		if (inName=="assets/data/handle.png")
			 
            return Assets.getBitmapData ("assets/data/handle.png");
         
		
		if (inName=="assets/data/logo.png")
			 
            return Assets.getBitmapData ("assets/data/logo.png");
         
		
		if (inName=="assets/data/logo_corners.png")
			 
            return Assets.getBitmapData ("assets/data/logo_corners.png");
         
		
		if (inName=="assets/data/logo_light.png")
			 
            return Assets.getBitmapData ("assets/data/logo_light.png");
         
		
		if (inName=="assets/data/nokiafc22.ttf")
			 
			 return Assets.getFont ("assets/data/nokiafc22.ttf");
		 
		
		if (inName=="assets/data/stick.png")
			 
            return Assets.getBitmapData ("assets/data/stick.png");
         
		
		if (inName=="assets/data/vcr/flixel.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/flixel.png");
         
		
		if (inName=="assets/data/vcr/open.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/open.png");
         
		
		if (inName=="assets/data/vcr/pause.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/pause.png");
         
		
		if (inName=="assets/data/vcr/play.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/play.png");
         
		
		if (inName=="assets/data/vcr/record_off.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/record_off.png");
         
		
		if (inName=="assets/data/vcr/record_on.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/record_on.png");
         
		
		if (inName=="assets/data/vcr/restart.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/restart.png");
         
		
		if (inName=="assets/data/vcr/step.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/step.png");
         
		
		if (inName=="assets/data/vcr/stop.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/stop.png");
         
		
		if (inName=="assets/data/vis/bounds.png")
			 
            return Assets.getBitmapData ("assets/data/vis/bounds.png");
         
		
		if (inName=="assets/driller.png")
			 
            return Assets.getBitmapData ("assets/driller.png");
         
		
		if (inName=="assets/elevator.png")
			 
            return Assets.getBitmapData ("assets/elevator.png");
         
		
		if (inName=="assets/fuel.png")
			 
            return Assets.getBitmapData ("assets/fuel.png");
         
		
		if (inName=="assets/fuel_tiles.png")
			 
            return Assets.getBitmapData ("assets/fuel_tiles.png");
         
		
		if (inName=="assets/goomba.png")
			 
            return Assets.getBitmapData ("assets/goomba.png");
         
		
		if (inName=="assets/goomba_tiles.png")
			 
            return Assets.getBitmapData ("assets/goomba_tiles.png");
         
		
		if (inName=="assets/HaxeFlixel.svg")
			 
			 return Assets.getText ("assets/HaxeFlixel.svg");
         
		
		if (inName=="assets/lava.png")
			 
            return Assets.getBitmapData ("assets/lava.png");
         
		
		if (inName=="assets/level1.dam")
			 
			 return Assets.getText ("assets/level1.dam");
         
		
		if (inName=="assets/level1.dam.bak")
			 
			 return Assets.getText ("assets/level1.dam.bak");
         
		
		if (inName=="assets/level1.txt")
			 
			 return Assets.getText ("assets/level1.txt");
         
		
		if (inName=="assets/level1_tileset.tmx")
			 
			 return Assets.getText ("assets/level1_tileset.tmx");
         
		
		if (inName=="assets/mapCSV_Group1_Map1.csv")
			 
			 return Assets.getText ("assets/mapCSV_Group1_Map1.csv");
         
		
		if (inName=="assets/mapCSV_Group1_Map2.csv")
			 
			 return Assets.getText ("assets/mapCSV_Group1_Map2.csv");
         
		
		if (inName=="assets/mapCSV_Group1_Map3.csv")
			 
			 return Assets.getText ("assets/mapCSV_Group1_Map3.csv");
         
		
		if (inName=="assets/mapCSV_Group1_Map4.csv")
			 
			 return Assets.getText ("assets/mapCSV_Group1_Map4.csv");
         
		
		if (inName=="assets/mapCSV_Group1_Map5.csv")
			 
			 return Assets.getText ("assets/mapCSV_Group1_Map5.csv");
         
		
		if (inName=="assets/mapCSV_Group1_Map6.csv")
			 
			 return Assets.getText ("assets/mapCSV_Group1_Map6.csv");
         
		
		if (inName=="assets/mapCSV_Level1_Map.csv")
			 
			 return Assets.getText ("assets/mapCSV_Level1_Map.csv");
         
		
		if (inName=="assets/mapCSV_Level1_Sky.csv")
			 
			 return Assets.getText ("assets/mapCSV_Level1_Sky.csv");
         
		
		if (inName=="assets/mapCSV_Level1_Stars.csv")
			 
			 return Assets.getText ("assets/mapCSV_Level1_Stars.csv");
         
		
		if (inName=="assets/rock_tiles.png")
			 
            return Assets.getBitmapData ("assets/rock_tiles.png");
         
		
		if (inName=="assets/spike.png")
			 
            return Assets.getBitmapData ("assets/spike.png");
         
		
		if (inName=="assets/spikes.png")
			 
            return Assets.getBitmapData ("assets/spikes.png");
         
		
		if (inName=="assets/spring.png")
			 
            return Assets.getBitmapData ("assets/spring.png");
         
		
		if (inName=="assets/spring_tile.png")
			 
            return Assets.getBitmapData ("assets/spring_tile.png");
         
		
		if (inName=="assets/springboard.png")
			 
            return Assets.getBitmapData ("assets/springboard.png");
         
		
		if (inName=="assets/tiles.png")
			 
            return Assets.getBitmapData ("assets/tiles.png");
         
		
		if (inName=="assets/tiles.png.bak")
			 
            return Assets.getBytes ("assets/tiles.png.bak");
         
		
		if (inName=="assets/work/tiles.psd")
			 
            return Assets.getBytes ("assets/work/tiles.psd");
         
		
		
		return null;
		
	}
	
	
	private static function preloader_onComplete (event:Event):Void {
		
		mPreloader.removeEventListener (Event.COMPLETE, preloader_onComplete);
		
		nme.Lib.current.removeChild(mPreloader);
		mPreloader = null;
		
		begin ();
		
	}
	
}

class NME_assets_data_beep_mp3 extends nme.media.Sound { }
class NME_assets_spring_wav extends nme.media.Sound { }
class NME_assets_fuel_pickup_wav extends nme.media.Sound { }
class NME_assets_hurt_wav extends nme.media.Sound { }
class NME_assets_stomp_wav extends nme.media.Sound { }
class NME_assets_exit_appear_wav extends nme.media.Sound { }
class NME_assets_backdrop_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_bullet_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_autotiles_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_autotiles_alt_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_base_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_beep_mp4 extends nme.media.Sound { }
class NME_assets_data_button_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_a_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_b_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_c_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_down_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_left_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_right_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_up_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_x_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_y_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_courier_ttf extends nme.text.Font { }
class NME_assets_data_cursor_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_default_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_fontdata10pt_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_fontdata11pt_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_handle_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_corners_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_light_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_nokiafc22_ttf extends nme.text.Font { }
class NME_assets_data_stick_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_flixel_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_open_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_pause_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_play_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_record_off_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_record_on_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_restart_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_step_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_stop_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vis_bounds_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_driller_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_elevator_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_fuel_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_fuel_tiles_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_goomba_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_goomba_tiles_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_haxeflixel_svg extends nme.utils.ByteArray { }
class NME_assets_lava_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_level1_dam extends nme.utils.ByteArray { }
class NME_assets_level1_dam_bak extends nme.utils.ByteArray { }
class NME_assets_level1_txt extends nme.utils.ByteArray { }
class NME_assets_level1_tileset_tmx extends nme.utils.ByteArray { }
class NME_assets_mapcsv_group1_map1_csv extends nme.utils.ByteArray { }
class NME_assets_mapcsv_group1_map2_csv extends nme.utils.ByteArray { }
class NME_assets_mapcsv_group1_map3_csv extends nme.utils.ByteArray { }
class NME_assets_mapcsv_group1_map4_csv extends nme.utils.ByteArray { }
class NME_assets_mapcsv_group1_map5_csv extends nme.utils.ByteArray { }
class NME_assets_mapcsv_group1_map6_csv extends nme.utils.ByteArray { }
class NME_assets_mapcsv_level1_map_csv extends nme.utils.ByteArray { }
class NME_assets_mapcsv_level1_sky_csv extends nme.utils.ByteArray { }
class NME_assets_mapcsv_level1_stars_csv extends nme.utils.ByteArray { }
class NME_assets_rock_tiles_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_spike_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_spikes_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_spring_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_spring_tile_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_springboard_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_tiles_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_tiles_png_bak extends nme.utils.ByteArray { }
class NME_assets_work_tiles_psd extends nme.utils.ByteArray { }


#else

import Main;

class ApplicationMain {
	
	public static function main () {
		
		var hasMain = false;
		
		for (methodName in Type.getClassFields(Main))
		{
			if (methodName == "main")
			{
				hasMain = true;
				break;
			}
		}
		
		if (hasMain)
		{
			Reflect.callMethod (Main, Reflect.field (Main, "main"), []);
		}
		else
		{
			var instance = Type.createInstance(Main, []);
			if (Std.is (instance, flash.display.DisplayObject)) {
				flash.Lib.current.addChild(cast instance);
			}
		}
		
	}

}

#end
