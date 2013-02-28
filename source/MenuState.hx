package;

import nme.Assets;
import nme.geom.Rectangle;
import nme.net.SharedObject;
import org.flixel.FlxButton;
import org.flixel.FlxG;
import org.flixel.FlxPoint;
import org.flixel.FlxPath;
import org.flixel.FlxSave;
import org.flixel.FlxSprite;
import org.flixel.FlxState;
import org.flixel.FlxText;
import org.flixel.FlxU;
import addons.FlxBackdrop;
import org.flixel.plugin.photonstorm.FlxDisplay;
import org.flixel.plugin.photonstorm.FlxColor;

class MenuState extends FlxState
{

    public var title:FlxText;
    public var instructions:FlxText;
    public var playerGraphic:FlxSprite;

    override public function create():Void
    {
        #if !neko
        FlxG.bgColor = 0xff131c1b;
        #else
        FlxG.bgColor = {rgb: 0x131c1b, a: 0xff};
        #end
        FlxG.mouse.show();
        add(new FlxBackdrop("assets/backdrop.png", 0.8, 0.6, true, true));

        playerGraphic = new FlxSprite(0,75);
        playerGraphic.loadGraphic("assets/driller.png",true,true,8,8,true);
        playerGraphic.addAnimation("default",[0],false);
        playerGraphic.play("default");
        playerGraphic.scale.x = 6;
        playerGraphic.scale.y = 6;
        FlxDisplay.screenCenter(playerGraphic,true,false);
        add(playerGraphic);

        //create a button with the label Start and set an on click function
        var startButton = new FlxButton(0, 210, "Start", onStartClick);
        //add the button to the state draw list
        add(startButton);
        //center align the button on the stage
        FlxDisplay.screenCenter(startButton,true,false);

        title = new FlxText(10,0,FlxG.width - 22,"TINY DRILLBOT");
        title.setFormat(null, 20, 0xffffff, "center");
        add(title);

        instructions = new FlxText(10,110,FlxG.width - 20,"Made for February One Game a Month Entry.\n\nUse left and right arrows to Move (there is no jump).\nCollect all the glowing blue fuel and make it back to the exit before time runs out.");
        instructions.setFormat(null, 8, 0xffffff, "left");
        add(instructions);
    }

    //The on click handler for the start button
    private function onStartClick( ):Void
    {
        //Tell Flixel to change the active game state to the actual game
        FlxG.switchState(new Level2());
    }

    override public function destroy():Void
    {
        super.destroy();
    }

    override public function update():Void
    {
        var color = FlxColor.getRandomColor(100,255,255);
        title.setColor(color);
        super.update();
    }
}