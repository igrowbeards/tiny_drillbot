package;

import org.flixel.FlxSprite;

class Spring extends FlxSprite
{
	public function new(X:Int, Y:Int)
	{
		super(X * 8, Y * 8);
		solid = true;
		immovable = true;

		makeGraphic(8,8,0xff00ff00);
	}
}