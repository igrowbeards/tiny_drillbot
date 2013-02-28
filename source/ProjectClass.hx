package;

import nme.Lib;
import org.flixel.FlxGame;

class ProjectClass extends FlxGame
{
	public function new()
	{
		super(160,240,MenuState,2,30,30);
		forceDebugger = true;
	}
}