package;

import nme.Assets;
import nme.geom.Rectangle;
import nme.net.SharedObject;
import org.flixel.FlxButton;
import org.flixel.FlxG;
import org.flixel.FlxPath;
import org.flixel.FlxSave;
import org.flixel.FlxSprite;
import org.flixel.FlxRect;
import org.flixel.FlxState;
import org.flixel.FlxText;
import org.flixel.FlxU;
import org.flixel.FlxTilemap;
import org.flixel.FlxObject;
import org.flixel.FlxParticle;
import addons.FlxEmitterExt;
import org.flixel.FlxEmitter;
import org.flixel.FlxTimer;
import org.flixel.plugin.photonstorm.FlxControl;
import org.flixel.plugin.photonstorm.FlxControlHandler;
import org.flixel.plugin.photonstorm.FlxWeapon;

class PlayState extends FlxState
{

	public var level:FlxTilemap;
	public var player:Player;
	public var exit:FlxSprite;
	public var lazer:FlxWeapon;
	//public var emitter:Sparks;

	override public function create():Void
	{

		FlxG.mouse.show();

		#if !neko
		FlxG.bgColor = 0xffaaaaaa;
		#else
		FlxG.camera.bgColor = {rgb: 0x131c1b, a: 0xff};
		#end


		level = new FlxTilemap();
		level.loadMap(Assets.getText("assets/mapCSV_Group1_Map1.csv"),"assets/tiles.png");
		add(level);

		exit = new FlxSprite(35*8+1,25*8);
		exit.makeGraphic(14,16,0xff3f3f3f);
		//exit.exists = false;
		add(exit);

		// Create Player
		player = new Player();
		add(player);

		lazer = new FlxWeapon("lazer",player, "x", "y");
		lazer.makeImageBullet(15, "assets/bullet.png");
		lazer.setFireRate(100);
		lazer.setBulletSpeed(100);
		lazer.setBulletElasticity(0);
		lazer.setBulletLifeSpan(1000);
		add(lazer.group);

	}

	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		super.update();

		FlxG.collide(player,level);
		FlxG.collide(lazer.group,level,bulletHitLevel);
		FlxG.overlap(player,exit,changeLevel);

		if (player.y > FlxG.height)
		{
			FlxG.resetState();
			FlxControl.clear();
		}

		if(FlxG.mouse.justPressed())
		{
			lazer.fireAtMouse();
		}
	}

	public function changeLevel(Player:FlxObject,Exit:FlxObject):Void
	{
		FlxG.resetState();
		FlxControl.clear();
	}

	public function bulletHitLevel(bulletRef:FlxObject,levelRef:FlxObject):Void {
		bulletRef.exists = false;
		var emitter:FlxEmitter = new Sparks(bulletRef.x,bulletRef.y);
		add(emitter);
		emitter.start(true,.5,0,0);
		emitter.bounce = 1;
	}

}