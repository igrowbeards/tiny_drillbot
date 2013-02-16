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
	public var player:Player;
	public var exit:FlxSprite;

	override public function create():Void
	{

		FlxG.mouse.show();

		FlxG.bgColor = 0xffcccccc;

		level = new FlxTilemap();
		level.loadMap(Assets.getText("assets/mapCSV_Group1_Map1.csv"),"assets/tiles.png");

		// Create Player
		player = new Player();

		// Create the Exit
		exit = new FlxSprite(FlxG.width - 30,FlxG.height - 23);
		exit.makeGraphic(15,15,0xff666666);

		parseSpikes();

		add(level);
		add(spikes);
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
		FlxG.overlap(player,exit,changeLevel);

		if (player.y > FlxG.height)
		{
			FlxG.resetState();
			FlxControl.clear();
		}

	}

	public function changeLevel(Player:FlxObject,Exit:FlxObject):Void
	{
		FlxG.resetState();
		FlxControl.clear();
	}

	public function hitSpikes(Player:FlxObject,spikesFlxTilemap):Void
	{
		FlxG.resetState();
		FlxControl.clear();
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

}