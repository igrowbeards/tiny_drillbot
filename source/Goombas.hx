package;

import org.flixel.FlxGroup;

class Goombas extends FlxGroup {

	public function new()
	{
		super();
	}

	public function addGoomba(x:Int, y:Int):Void
	{
		var tempGoomba:Goomba = new Goomba(x, y);
		add(tempGoomba);
	}

	override public function update():Void
	{
		super.update();
	}

}