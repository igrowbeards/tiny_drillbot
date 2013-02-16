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

	override public function create():Void
	{

		FlxG.mouse.show();

		FlxG.bgColor = 0xff888888;

		level = new FlxTilemap();
		level.loadMap(Assets.getText("assets/mapCSV_Group1_Map1.csv"),"assets/tiles.png");

		// Create Player
		player = new Player();

		// Create the Exit
		exit = new FlxSprite(FlxG.width - 30,FlxG.height - 23);
		exit.makeGraphic(15,15,0xff666666);
		exit.exists = false;

		parseSpikes();
		parseFuel();

		add(level);
		add(spikes);
		add(fuelGroup);
		add(exit);
		add(player);

	}

	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		super.update();

		FlxG.collide(player,level);
		FlxG.overlap(player,spikes,hitSpikes);
		FlxG.overlap(player,fuelGroup,hitFuel);
		FlxG.overlap(player,exit,changeLevel);

		if (player.y > FlxG.height)
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
	}

	public function hitSpikes(Player:FlxObject,spikes:FlxObject):Void
	{
		Player.reset((FlxG.width / 2) - 4, 12);
	}

	public function hitFuel(Player:FlxObject,fuel:FlxObject):Void
	{
		fuel.kill();
		totalFuel --;
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

}