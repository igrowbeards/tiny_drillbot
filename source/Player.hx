package;

import org.flixel.FlxSprite;
import org.flixel.FlxG;
import org.flixel.FlxObject;
import org.flixel.FlxRect;
import org.flixel.plugin.photonstorm.FlxControl;
import org.flixel.plugin.photonstorm.FlxControlHandler;

class Player extends FlxSprite
{

	public function new():Void
	{
		super();
		x = (FlxG.width / 2) - 4;
		makeGraphic(5,7,0xff990000);

		if (FlxG.getPlugin(FlxControl) == null) {
			FlxG.addPlugin(new FlxControl());
		}


		// The player sprite will accelerate and decelerate smoothly
		FlxControl.create(this, FlxControlHandler.MOVEMENT_ACCELERATES, FlxControlHandler.STOPPING_DECELERATES, 1, true, false);
		// Enable cursor keys, but only the left and right ones
		//FlxControl.player1.setCursorControl(false, false, true, true);
		FlxControl.player1.setCursorControl(false,false,true,true);
		// Gravity will pull the player down
		FlxControl.player1.setGravity(0, 400);
		// All speeds are in pixels per second, the follow lets the player run left/right
		FlxControl.player1.setMovementSpeed(400, 0, 50, 200, 400, 0);
		//	And SPACE BAR will make them jump up to a maximum of 200 pixels (per second), only when touching the FLOOR
		FlxControl.player1.setJumpButton("UP", FlxControlHandler.KEYMODE_JUST_DOWN, 120, FlxObject.FLOOR, 250, 200);

	}

	override public function update():Void
	{
		super.update();
	}

}
