package;

import nme.Assets;
import nme.geom.Rectangle;
import nme.net.SharedObject;
import org.flixel.FlxButton;
import org.flixel.FlxG;
import org.flixel.FlxPath;
import org.flixel.FlxSave;
import org.flixel.FlxSprite;
import org.flixel.FlxState;
import org.flixel.FlxText;
import org.flixel.FlxU;
import org.flixel.FlxTilemap;
import org.flixel.FlxObject;
import org.flixel.plugin.photonstorm.FlxControl;
import org.flixel.plugin.photonstorm.FlxControlHandler;

class PlayState extends FlxState
{

	public var level:FlxTilemap;
	public var player:FlxSprite;
	public var exit:FlxSprite;

	override public function create():Void
	{
		#if !neko
		FlxG.bgColor = 0xffaaaaaa;
		#else
		FlxG.camera.bgColor = {rgb: 0x131c1b, a: 0xff};
		#end

		level = new FlxTilemap();
		level.loadMap(Assets.getText("assets/level1.txt"),"assets/tiles.png");
		add(level);

		exit = new FlxSprite(35*8+1,25*8);
		exit.makeGraphic(14,16,0xff3f3f3f);
		//exit.exists = false;
		add(exit);

		// Create Player
		player = new FlxSprite();
		player.x = (FlxG.width / 2) - 4;
		player.makeGraphic(8,10,0xffaa1111);
		/*player.y = 20;
		player.maxVelocity.x = 80;
		player.maxVelocity.y = 200;
		player.acceleration.y = 200;
		player.drag.x = player.maxVelocity.x*4;*/
		add(player);

		if (FlxG.getPlugin(FlxControl) == null) {
			FlxG.addPlugin(new FlxControl());
		}

		// The player sprite will accelerate and decelerate smoothly
		FlxControl.create(player, FlxControlHandler.MOVEMENT_ACCELERATES, FlxControlHandler.STOPPING_DECELERATES);
		// Enable cursor keys, but only the left and right ones
		FlxControl.player1.setCursorControl(false, false, true, true);
		// Gravity will pull the player down
		FlxControl.player1.setGravity(0, 400);
		// All speeds are in pixels per second, the follow lets the player run left/right
		FlxControl.player1.setMovementSpeed(400, 0, 100, 200, 400, 0);

	}

	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{

		/* player.acceleration.x = 0;
		if(FlxG.keys.LEFT)
		{
			player.acceleration.x = -player.maxVelocity.x * 4;
		}

		if(FlxG.keys.RIGHT)
		{
			player.acceleration.x = player.maxVelocity.x * 4;
		}

		if(FlxG.keys.justPressed("UP") && player.isTouching(FlxObject.FLOOR))
		{
			player.velocity.y = -player.maxVelocity.y / 2;
		} */

		super.update();

		FlxG.collide(level,player);
		FlxG.overlap(player,exit,changeLevel);

		if (player.y > FlxG.height)
		{
			FlxG.resetState();
		}

	}

	public function changeLevel(Player:FlxObject,Exit:FlxObject):Void
	{
		FlxG.resetState();
	}

}