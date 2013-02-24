package;

import org.flixel.FlxG;
import org.flixel.FlxSprite;

class Crate extends FlxSprite {


	public function new(X:Int, Y:Int)
	{
		super(X * 8, Y * 8);
		//loadGraphic("assets/fuel.png",true,false,8,8);
		//addAnimation("default",[0,1],15);
		//play("default");
		makeGraphic(7,7,0xff00ff00);
		solid = true;
		acceleration.y = 400;
		drag.x = 200;

	}

	override public function update():Void
	{
		super.update();
		acceleration.y = 400;
	}

}
