package;

import org.flixel.FlxSprite;
import org.flixel.FlxPoint;
import org.flixel.FlxObject;

class Elevator extends FlxSprite
{

	public var moveX:Bool = false;
	public var moveY:Bool = false;
	private var startPoint:FlxPoint;
	private var endPoint:FlxPoint;

	public function new(X:Int, Y:Int, Width:Int, Height:Int, Speed:Int = 10):Void
	{
		super(X * 8, Y * 8);
		loadGraphic("assets/elevator.png");

		startPoint = new FlxPoint(X * 8, Y * 8);
		endPoint = new FlxPoint((X + Width) * 8, ((Y + Height) * 8) - Y * 8);

		if (Width > 0)
		{
			moveX = true;
			velocity.x = Speed;
		}

		if (Height > 0)
		{
			moveY = true;
			velocity.y = Speed;
		}

		immovable = true;
		moves = true;
		allowCollisions = FlxObject.UP;
	}

	override public function update():Void
	{
		if (moveX)
		{
			if (x > endPoint.x)
			{
				x = endPoint.x;
				velocity.x = -velocity.x;
			}
			else if (x < startPoint.x)
			{
				x = startPoint.x;
				velocity.x = -velocity.x;
			}
		}

		if (moveY)
		{
			if (y > endPoint.y)
			{
				y = endPoint.y;
				velocity.y = -velocity.y;
			}
			else if (y < startPoint.y)
			{
				y = startPoint.y;
				velocity.y = -velocity.y;
			}
		}
	}


}