package;

import nme.Assets;
import nme.geom.Rectangle;
import nme.net.SharedObject;
import org.flixel.FlxButton;
import org.flixel.FlxG;
import org.flixel.FlxSprite;
import org.flixel.FlxRect;
import org.flixel.FlxState;
import org.flixel.FlxText;
import org.flixel.FlxU;
import org.flixel.FlxTilemap;
import org.flixel.FlxObject;
import org.flixel.FlxGroup;
import org.flixel.FlxParticle;
import org.flixel.FlxTimer;
import org.flixel.FlxCamera;
import org.flixel.plugin.photonstorm.FlxControl;
import org.flixel.plugin.photonstorm.FlxControlHandler;

class PlayState extends FlxState
{

	public var level:FlxTilemap;
	public var spikes:FlxGroup;
	public var fuelGroup:FlxGroup;
	public var player:Player;
	public var exit:FlxSprite;
	public var totalFuel:Int;
	public var goombas:Goombas;
	public var fuelCollected:FlxText;
	public var maxFuel:Int;

	override public function create():Void
	{

		FlxG.bgColor = 0xff888888;


		level = new FlxTilemap();
		level.loadMap(Assets.getText("assets/mapCSV_Group1_Map1.csv"),FlxTilemap.imgAuto, 0, 0, FlxTilemap.AUTO);
		Registry.level = level;
		Registry.player = player;

		// Create Player
		player = new Player();

		goombas = new Goombas();



		// Create the Exit
		exit = new FlxSprite(level.width - 30,level.height - 23);
		exit.makeGraphic(15,15,0xff666666);
		exit.exists = false;

		parseSpikes();
		parseFuel();
		parseEnemies();

		FlxG.worldBounds = new FlxRect(0,0,Std.int(level.width),Std.int(level.height));
		FlxG.camera.setBounds(0,0,Std.int(level.width),Std.int(level.height));
		FlxG.camera.follow(player, FlxCamera.STYLE_PLATFORMER);

		maxFuel = totalFuel;

		fuelCollected = new FlxText(0,0,100);
		fuelCollected.text = "0 /" + maxFuel;
		fuelCollected.scrollFactor.x = 0;
		fuelCollected.scrollFactor.y = 0;

		add(level);
		add(spikes);
		add(fuelGroup);
		add(exit);
		add(player);
		add(goombas);
		add(fuelCollected);

	}

	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		super.update();

		FlxG.collide(player,level);
		FlxG.collide(goombas,level);
		FlxG.collide(goombas,spikes);
		FlxG.overlap(player,spikes,hitSpikes);
		FlxG.overlap(player,fuelGroup,hitFuel);
		FlxG.overlap(player,exit,changeLevel);
		FlxG.collide(player,goombas,hitEnemy);

		if (player.y > level.height)
		{
			player.reset((FlxG.width / 2) - 4, 12);
		}

		if (totalFuel == 0) {
			exit.exists = true;
		}

	}

	public function changeLevel(Player:FlxObject,Exit:FlxObject):Void
	{
		FlxG.resetState();
		FlxControl.clear();
		FlxG.score = 0;
	}

	public function hitSpikes(Player:FlxObject,spikes:FlxObject):Void
	{
		player.reset((FlxG.width / 2) - 4, 12);
	}

	public function hitFuel(Player:FlxObject,fuel:FlxObject):Void
	{
		fuel.kill();
		totalFuel --;
		FlxG.score ++;
		fuelCollected.text = FlxG.score + "/" + maxFuel;
	}

	public function hitEnemy(playerRef:FlxObject,enemyRef:FlxObject):Void
	{
		if(playerRef.justTouched(FlxObject.DOWN))
		{
			enemyRef.kill();
			player.velocity.y = -50;
			player.acceleration.y = -50;
		}
		else
		{
			player.reset((FlxG.width / 2) - 4, 12);
		}
	}


	private function parseSpikes():Void
	{
		var spikeMap:FlxTilemap = new FlxTilemap();

		spikeMap.loadMap(Assets.getText("assets/mapCSV_Group1_Map2.csv"), "assets/spikes.png", 16, 16);

		spikes = new FlxGroup();

		for (ty in 0...spikeMap.heightInTiles)
		{
			for (tx in 0...spikeMap.widthInTiles)
			{
				if (spikeMap.getTile(tx,ty) == 1)
				{
					spikes.add(new Spike(tx,ty));
				}
			}
		}
	}

	private function parseFuel():Void
	{
		var fuelMap:FlxTilemap = new FlxTilemap();

		fuelMap.loadMap(Assets.getText("assets/mapCSV_Group1_Map3.csv"), "assets/fuel.png", 16, 16);

		fuelGroup = new FlxGroup();

		for (ty in 0...fuelMap.heightInTiles)
		{
			for (tx in 0...fuelMap.widthInTiles)
			{
				if (fuelMap.getTile(tx,ty) == 1)
				{
					fuelGroup.add(new Fuel(tx,ty));
					totalFuel ++;
				}
			}
		}
	}

	private function parseEnemies():Void
	{
		var enemyMap:FlxTilemap = new FlxTilemap();

		enemyMap.loadMap(Assets.getText("assets/mapCSV_Group1_Map4.csv"), "assets/fuel.png", 16, 16);

		for (ty in 0...enemyMap.heightInTiles)
		{
			for (tx in 0...enemyMap.widthInTiles)
			{
				if (enemyMap.getTile(tx,ty) == 1)
				{
					goombas.addGoomba(tx,ty);
				}
			}
		}
	}

}