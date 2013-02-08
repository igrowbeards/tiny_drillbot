package;

import org.flixel.FlxParticle;
import addons.FlxEmitterExt;
import org.flixel.FlxEmitter;
import org.flixel.FlxTimer;

class Sparks extends FlxEmitter
{
	var particles:Int = 100;

	public function new():Void
	{

		super();

		x = 100;
		y = 100;

		var i = 0;

		while( i < particles)
		{
			var particle:FlxParticle = new FlxParticle();
			particle.makeGraphic(1, 1, 0xff00ff00);
			particle.exists = false;
			this.add(particle);
			particle.elasticity = 0.5;
			i++;
		}

	}
}