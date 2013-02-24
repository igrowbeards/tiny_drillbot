class ApplicationMain
{
	
	public static function main()
	{
		nme.Lib.setPackage("Zaphod", "EZplatformer", "com.example.myapp", "0.0.1");
		
		
		nme.display.Stage.shouldRotateInterface = function(orientation:Int):Bool
		{
			
			if (orientation == nme.display.Stage.OrientationLandscapeLeft || orientation == nme.display.Stage.OrientationLandscapeRight)
			{
				return true;
			}
			return false;
			
		}
		
		nme.Lib.create(function()
			{
				if (640 == 0 && 480 == 0)
				{
					nme.Lib.current.stage.align = nme.display.StageAlign.TOP_LEFT;
					nme.Lib.current.stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
				}
				
				//nme.Lib.current.stage.addEventListener (nme.events.Event.RESIZE, initialize);
				initialize ();
			},
			640, 480,
			30,
			16777215,
			(true ? nme.Lib.HARDWARE : 0) |
			(false ? nme.Lib.ALLOW_SHADERS : 0) |
			(false ? nme.Lib.REQUIRE_SHADERS : 0) |
			(false ? nme.Lib.DEPTH_BUFFER : 0) |
			(false ? nme.Lib.STENCIL_BUFFER : 0) |
			(true ? nme.Lib.RESIZABLE : 0) |
			(0 == 4 ? nme.Lib.HW_AA_HIRES : 0) |
			(0 == 2 ? nme.Lib.HW_AA : 0),
			"EZplatformer"
		);
		
	}
	
	
	private static function initialize ():Void
	{
		//nme.Lib.current.stage.removeEventListener (nme.events.Event.RESIZE, initialize);
		
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
			nme.Lib.current.addChild(cast (Type.createInstance(Main, []), nme.display.DisplayObject));	
		}
	}
	
	
	public static function getAsset(inName:String):Dynamic
	{
		
		if (inName == "assets/backdrop.png")
		{
			
			return nme.Assets.getBitmapData ("assets/backdrop.png");
			
		}
		
		if (inName == "assets/bullet.png")
		{
			
			return nme.Assets.getBitmapData ("assets/bullet.png");
			
		}
		
		if (inName == "assets/data/autotiles.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/autotiles.png");
			
		}
		
		if (inName == "assets/data/autotiles_alt.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/autotiles_alt.png");
			
		}
		
		if (inName == "assets/data/base.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/base.png");
			
		}
		
		if (inName == "assets/data/beep.mp3")
		{
			
			return nme.Assets.getSound ("assets/data/beep.mp3");
			
		}
		
		if (inName == "assets/data/beep.wav")
		{
			
			return nme.Assets.getSound ("assets/data/beep.wav");
			
		}
		
		if (inName == "assets/data/button.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/button.png");
			
		}
		
		if (inName == "assets/data/button_a.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/button_a.png");
			
		}
		
		if (inName == "assets/data/button_b.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/button_b.png");
			
		}
		
		if (inName == "assets/data/button_c.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/button_c.png");
			
		}
		
		if (inName == "assets/data/button_down.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/button_down.png");
			
		}
		
		if (inName == "assets/data/button_left.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/button_left.png");
			
		}
		
		if (inName == "assets/data/button_right.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/button_right.png");
			
		}
		
		if (inName == "assets/data/button_up.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/button_up.png");
			
		}
		
		if (inName == "assets/data/button_x.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/button_x.png");
			
		}
		
		if (inName == "assets/data/button_y.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/button_y.png");
			
		}
		
		if (inName == "assets/data/courier.ttf")
		{
			
			return nme.Assets.getFont ("assets/data/courier.ttf");
			
		}
		
		if (inName == "assets/data/cursor.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/cursor.png");
			
		}
		
		if (inName == "assets/data/default.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/default.png");
			
		}
		
		if (inName == "assets/data/fontData10pt.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/fontData10pt.png");
			
		}
		
		if (inName == "assets/data/fontData11pt.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/fontData11pt.png");
			
		}
		
		if (inName == "assets/data/handle.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/handle.png");
			
		}
		
		if (inName == "assets/data/logo.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/logo.png");
			
		}
		
		if (inName == "assets/data/logo_corners.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/logo_corners.png");
			
		}
		
		if (inName == "assets/data/logo_light.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/logo_light.png");
			
		}
		
		if (inName == "assets/data/nokiafc22.ttf")
		{
			
			return nme.Assets.getFont ("assets/data/nokiafc22.ttf");
			
		}
		
		if (inName == "assets/data/stick.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/stick.png");
			
		}
		
		if (inName == "assets/data/vcr/flixel.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/vcr/flixel.png");
			
		}
		
		if (inName == "assets/data/vcr/open.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/vcr/open.png");
			
		}
		
		if (inName == "assets/data/vcr/pause.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/vcr/pause.png");
			
		}
		
		if (inName == "assets/data/vcr/play.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/vcr/play.png");
			
		}
		
		if (inName == "assets/data/vcr/record_off.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/vcr/record_off.png");
			
		}
		
		if (inName == "assets/data/vcr/record_on.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/vcr/record_on.png");
			
		}
		
		if (inName == "assets/data/vcr/restart.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/vcr/restart.png");
			
		}
		
		if (inName == "assets/data/vcr/step.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/vcr/step.png");
			
		}
		
		if (inName == "assets/data/vcr/stop.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/vcr/stop.png");
			
		}
		
		if (inName == "assets/data/vis/bounds.png")
		{
			
			return nme.Assets.getBitmapData ("assets/data/vis/bounds.png");
			
		}
		
		if (inName == "assets/driller.png")
		{
			
			return nme.Assets.getBitmapData ("assets/driller.png");
			
		}
		
		if (inName == "assets/elevator.png")
		{
			
			return nme.Assets.getBitmapData ("assets/elevator.png");
			
		}
		
		if (inName == "assets/exit_appear.wav")
		{
			
			return nme.Assets.getSound ("assets/exit_appear.wav");
			
		}
		
		if (inName == "assets/fuel.png")
		{
			
			return nme.Assets.getBitmapData ("assets/fuel.png");
			
		}
		
		if (inName == "assets/fuel_pickup.wav")
		{
			
			return nme.Assets.getSound ("assets/fuel_pickup.wav");
			
		}
		
		if (inName == "assets/fuel_tiles.png")
		{
			
			return nme.Assets.getBitmapData ("assets/fuel_tiles.png");
			
		}
		
		if (inName == "assets/goomba.png")
		{
			
			return nme.Assets.getBitmapData ("assets/goomba.png");
			
		}
		
		if (inName == "assets/goomba_tiles.png")
		{
			
			return nme.Assets.getBitmapData ("assets/goomba_tiles.png");
			
		}
		
		if (inName == "assets/HaxeFlixel.svg")
		{
			
			return nme.Assets.getText ("assets/HaxeFlixel.svg");
			
		}
		
		if (inName == "assets/hurt.wav")
		{
			
			return nme.Assets.getSound ("assets/hurt.wav");
			
		}
		
		if (inName == "assets/lava.png")
		{
			
			return nme.Assets.getBitmapData ("assets/lava.png");
			
		}
		
		if (inName == "assets/level1.dam")
		{
			
			return nme.Assets.getText ("assets/level1.dam");
			
		}
		
		if (inName == "assets/level1.dam.bak")
		{
			
			return nme.Assets.getText ("assets/level1.dam.bak");
			
		}
		
		if (inName == "assets/level1.txt")
		{
			
			return nme.Assets.getText ("assets/level1.txt");
			
		}
		
		if (inName == "assets/level1_tileset.tmx")
		{
			
			return nme.Assets.getText ("assets/level1_tileset.tmx");
			
		}
		
		if (inName == "assets/mapCSV_Group1_Map1.csv")
		{
			
			return nme.Assets.getText ("assets/mapCSV_Group1_Map1.csv");
			
		}
		
		if (inName == "assets/mapCSV_Group1_Map2.csv")
		{
			
			return nme.Assets.getText ("assets/mapCSV_Group1_Map2.csv");
			
		}
		
		if (inName == "assets/mapCSV_Group1_Map3.csv")
		{
			
			return nme.Assets.getText ("assets/mapCSV_Group1_Map3.csv");
			
		}
		
		if (inName == "assets/mapCSV_Group1_Map4.csv")
		{
			
			return nme.Assets.getText ("assets/mapCSV_Group1_Map4.csv");
			
		}
		
		if (inName == "assets/mapCSV_Group1_Map5.csv")
		{
			
			return nme.Assets.getText ("assets/mapCSV_Group1_Map5.csv");
			
		}
		
		if (inName == "assets/mapCSV_Group1_Map6.csv")
		{
			
			return nme.Assets.getText ("assets/mapCSV_Group1_Map6.csv");
			
		}
		
		if (inName == "assets/mapCSV_Level1_Map.csv")
		{
			
			return nme.Assets.getText ("assets/mapCSV_Level1_Map.csv");
			
		}
		
		if (inName == "assets/mapCSV_Level1_Sky.csv")
		{
			
			return nme.Assets.getText ("assets/mapCSV_Level1_Sky.csv");
			
		}
		
		if (inName == "assets/mapCSV_Level1_Stars.csv")
		{
			
			return nme.Assets.getText ("assets/mapCSV_Level1_Stars.csv");
			
		}
		
		if (inName == "assets/rock_tiles.png")
		{
			
			return nme.Assets.getBitmapData ("assets/rock_tiles.png");
			
		}
		
		if (inName == "assets/spike.png")
		{
			
			return nme.Assets.getBitmapData ("assets/spike.png");
			
		}
		
		if (inName == "assets/spikes.png")
		{
			
			return nme.Assets.getBitmapData ("assets/spikes.png");
			
		}
		
		if (inName == "assets/spring.png")
		{
			
			return nme.Assets.getBitmapData ("assets/spring.png");
			
		}
		
		if (inName == "assets/spring.wav")
		{
			
			return nme.Assets.getSound ("assets/spring.wav");
			
		}
		
		if (inName == "assets/spring_tile.png")
		{
			
			return nme.Assets.getBitmapData ("assets/spring_tile.png");
			
		}
		
		if (inName == "assets/springboard.png")
		{
			
			return nme.Assets.getBitmapData ("assets/springboard.png");
			
		}
		
		if (inName == "assets/stomp.wav")
		{
			
			return nme.Assets.getSound ("assets/stomp.wav");
			
		}
		
		if (inName == "assets/tiles.png")
		{
			
			return nme.Assets.getBitmapData ("assets/tiles.png");
			
		}
		
		if (inName == "assets/tiles.png.bak")
		{
			
			return nme.Assets.getBytes ("assets/tiles.png.bak");
			
		}
		
		if (inName == "assets/work/tiles.psd")
		{
			
			return nme.Assets.getBytes ("assets/work/tiles.psd");
			
		}
		
		return null;
	}
	
}
