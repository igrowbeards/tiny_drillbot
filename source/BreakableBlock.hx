package;

import org.flixel.FlxSprite;
import org.flixel.FlxG;
import org.flixel.FlxObject;

class BreakableBlock extends FlxSprite {

	public function new(X:Int,Y:Int):Void {
		super(X * 8,Y * 8);
		makeGraphic(8,8,0xffff0000);
	}
}
