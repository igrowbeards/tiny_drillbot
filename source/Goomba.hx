package;

import org.flixel.FlxG;
import org.flixel.FlxSprite;
import org.flixel.FlxObject;
import org.flixel.FlxPoint;

class Goomba extends FlxSprite
{
	private var start:FlxPoint;
	private var speed:Int = 20;

	public function new(x:Float, y:Float):Void
	{
		super(x * 8, (y * 8) + 4);
		loadGraphic("assets/goomba.png",true,true,5,5,true);
		addAnimation("walk", [0,1,1,2], 12, true);
		facing = FlxObject.RIGHT;
		acceleration.y = 50;
		velocity.x = 30;
		acceleration.y = 400;
		play("walk");
	}

	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		super.update();
		acceleration.y = 400;


		if (justTouched(FlxObject.LEFT))
		{
			facing = FlxObject.RIGHT;
			velocity.x = speed;
		}
		else if (justTouched(FlxObject.RIGHT))
		{
			facing = FlxObject.LEFT;
			velocity.x = -speed;
		}
		else if (facing == FlxObject.RIGHT && !justTouched(FlxObject.RIGHT))
		{
			if(overlapsAt(x + 8, y + 1, Registry.level) || overlapsAt(x + 8, y + 1, Registry.springs))
			{
				// do nothing
			}
			else if (touching == FlxObject.FLOOR) {
				velocity.x = -speed;
				facing = FlxObject.LEFT;
			}
		}
		else if (facing == FlxObject.LEFT && !justTouched(FlxObject.LEFT)) {
			if(overlapsAt(x - 8, y + 1, Registry.level) || overlapsAt(x-8,y + 1, Registry.springs))
			{
				// do nothing
			}
			else if (touching == FlxObject.FLOOR) {
				velocity.x = speed;
				facing = FlxObject.RIGHT;
			}

		}
		else if (facing == FlxObject.LEFT){
			velocity.x = speed;
		}
		else {
			velocity.x = -speed;
		}

	}
}