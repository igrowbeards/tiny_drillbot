package;

import org.flixel.FlxSprite;

class Spike extends FlxSprite
{
	public function new(X:Int, Y:Int)
	{
		super(X * 8, Y * 8, "assets/spike.png");
		solid = true;
		immovable = true;
	}
}

