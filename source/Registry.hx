package;

import org.flixel.FlxG;
import org.flixel.FlxState;
import org.flixel.FlxCamera;
import org.flixel.FlxRect;
import org.flixel.FlxText;
import org.flixel.FlxObject;
import org.flixel.FlxSound;
import org.flixel.FlxGroup;
import org.flixel.FlxTilemap;

class Registry
{

        public static var level:FlxTilemap;
        public static var Goombas:Goombas;
        public static var player:Player;
        public static var springs:FlxGroup;

        public function Registry()
        {
        }

}