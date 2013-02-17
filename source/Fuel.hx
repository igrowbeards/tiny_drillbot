package;

import org.flixel.FlxSprite;

class Fuel extends FlxSprite
{
	public function new(X:Int, Y:Int)
	{
		super(X * 8, Y * 8);
		loadGraphic("assets/fuel.png",true,false,8,8);
		addAnimation("default",[0,1],15);
		play("default");
		solid = true;

	}
}

