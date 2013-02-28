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
import addons.FlxBackdrop;
import org.flixel.plugin.photonstorm.FlxControl;
import org.flixel.plugin.photonstorm.FlxControlHandler;

class Level2 extends FlxState
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
	public var elevators:FlxGroup;
	public var springs:FlxGroup;
	public var startX:Int;
	public var startY:Int;
	public var endStartX:Int;
	public var endStartY:Int;

	override public function create():Void
	{
		FlxG.bgColor = 0xff000012;


		add(new FlxBackdrop("assets/backdrop.png", 0.8, 0.6, true, true));

		level = new FlxTilemap();
		level.loadMap(Assets.getText("assets/mapCSV_level2_map.csv"),"assets/rock_tiles.png",8,8,0,0,1,8);
		Registry.level = level;
		Registry.player = player;

		// Create Player
		startX = 3;
		startY = 1;

		endStartX = 15 * 8;
		endStartY = 10 * 8;

		player = new Player(startX,startY);

		goombas = new Goombas();


		elevators = new FlxGroup();
		springs = new FlxGroup();
		Registry.springs = springs;

		var ele1:Elevator = new Elevator(3,9,0,20,60);
		elevators.add(ele1);


		// Create the Exit
		exit = new FlxSprite(3 * 8, 2 * 8 -5);
		exit.loadGraphic("assets/exit.png");
		exit.exists = false;

		parseSpikes();
		parseFuel();
		parseEnemies();
		parseSprings();

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
		add(elevators);
		add(springs);

	}

	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		super.update();

		FlxG.collide(player,level);
		FlxG.collide(player,elevators);
		FlxG.collide(goombas,level);
		FlxG.collide(goombas,spikes);
		FlxG.collide(goombas,springs,enemyHitSpring);
		FlxG.overlap(player,spikes,hitSpikes);
		FlxG.overlap(player,fuelGroup,hitFuel);
		FlxG.overlap(player,exit,fadeOutLevel);
		FlxG.collide(player,goombas,hitEnemy);
		FlxG.collide(player,springs,hitSpring);
		FlxG.collide(goombas,goombas,goombasCollide);

		if (player.y > level.height)
		{
			player.reset((FlxG.width / 2) - 4, 12);
		}

		if (totalFuel == 0) {
			exit.exists = true;
		}

	}

	public function exit_appear():Void
	{
	}

	public function goombasCollide(g1:FlxObject,g2:FlxObject):Void
	{
		FlxG.log("hit");
	}

	public function fadeOutLevel(playerRef:FlxObject,exitRef:FlxObject):Void
	{
		FlxG.fade(0xff000000,1,changeLevel);
	}

	public function changeLevel():Void
	{
		FlxG.resetState();
		FlxControl.clear();
		FlxG.score = 0;
	}

	public function hitSpikes(playerRef:FlxObject,spikes:FlxObject):Void
	{
		FlxG.play("hurt");
		if (totalFuel == 0)
		{
			playerRef.reset(endStartX,endStartY);
		}
		else
		{
			playerRef.reset(startX * 8, startY * 8);
		}
	}

	public function hitSpring(firstRef:FlxObject,SpringRef:FlxObject):Void
	{
		var s:Spring = cast(SpringRef,Spring);
		if (firstRef.isTouching(FlxObject.DOWN)) {
			firstRef.velocity.y = -175;
			firstRef.acceleration.y = -175;
			s.play("boing");
			FlxG.play("spring_boing");
		}
	}


	public function enemyHitSpring(enemyRef:FlxObject,springRef:FlxObject):Void
	{
		var s:Spring = cast(springRef,Spring);
		enemyRef.velocity.y = -175;
		enemyRef.acceleration.y = -175;
		s.play("boing");
		FlxG.play("spring_boing");
	}

	public function hitFuel(Player:FlxObject,fuel:FlxObject):Void
	{
		fuel.kill();
		totalFuel --;
		FlxG.score ++;
		fuelCollected.text = FlxG.score + "/" + maxFuel;
		FlxG.play("fuel_pickup");
	}

	public function hitEnemy(PlayerRef:FlxObject,EnemyRef:FlxObject):Void
	{
		if(PlayerRef.justTouched(FlxObject.DOWN))
		{
			FlxG.play("stomp");
			EnemyRef.kill();
			PlayerRef.velocity.y = -50;
			PlayerRef.acceleration.y = -50;
		}
		else
		{
			FlxG.play("hurt");
			if (totalFuel == 0)
			{
				PlayerRef.reset(endStartX,endStartY);
			}
			else
			{
				PlayerRef.reset(startX * 8, startY * 8);
			}
		}
	}


	private function parseSpikes():Void
	{
		var spikeMap:FlxTilemap = new FlxTilemap();

		spikeMap.loadMap(Assets.getText("assets/mapCSV_level2_lava.csv"), "assets/spikes.png", 16, 16);

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

		fuelMap.loadMap(Assets.getText("assets/mapCSV_level2_fuel.csv"), "assets/fuel.png", 16, 16);

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

		enemyMap.loadMap(Assets.getText("assets/mapCSV_level2_enemies.csv"), "assets/fuel.png", 16, 16);

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

	private function parseSprings():Void
	{
		var springMap:FlxTilemap = new FlxTilemap();

		springMap.loadMap(Assets.getText("assets/mapCSV_level2_Map2.csv"), "assets/fuel.png", 16, 16);

		for (ty in 0...springMap.heightInTiles)
		{
			for (tx in 0...springMap.widthInTiles)
			{
				if (springMap.getTile(tx,ty) == 1)
				{
					springs.add(new Spring(tx,ty));
				}
			}
		}
	}

}