package;

import org.flixel.FlxSprite;

class Spike extends FlxSprite
{
	public function new(X:Int, Y:Int)
	{
		super(X * 8, Y * 8);
		loadGraphic("assets/lava.png",true,false,8,8);
		addAnimation("default",[0,1,2,2,2,3,4,5,5,5,5],5,true);
		solid = true;
		immovable = true;
		play("default");
	}
}

