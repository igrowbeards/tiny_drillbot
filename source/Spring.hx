package;

import org.flixel.FlxSprite;

class Spring extends FlxSprite
{
	public function new(X:Int, Y:Int)
	{
		super(X * 8, Y * 8);
		solid = true;
		immovable = true;
		loadGraphic("assets/spring.png",true,false,8,8);
		addAnimation("default", [0], 0, false);
		addAnimation("boing", [1,2,1,0], 20, false);
		height = 9;

		play("default");

	}
}