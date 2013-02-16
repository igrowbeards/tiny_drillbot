package;

import org.flixel.FlxSprite;

class Fuel extends FlxSprite
{
	public function new(X:Int, Y:Int)
	{
		super(X * 8, Y * 8, "assets/fuel.png");
		solid = true;
	}
}

