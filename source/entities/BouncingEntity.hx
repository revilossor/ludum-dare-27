package entities;
import org.flixel.util.FlxPoint;

/**
 * ...
 * @author Oliver Ross
 */
class BouncingEntity extends Entity
{

	public function new(xp, yp) 
	{
		super(xp, yp);
		loadGraphic(Resourses.spinnerseeker, true, false, 32, 32);
		addAnimation("spin", [0, 1], 32);
		play("spin");
		type = "BouncingEntity";
		speed = 125;
	}
	override public function update():Void
	{
		super.update();
		var myMidpoint:FlxPoint = getMidpoint();
		var distToPlayer:Float = getDistanceBetween(myMidpoint, Reg.playerPosition);
		if (distToPlayer < 400) {
			var seekVect:FlxPoint = seekAtSpeed(myMidpoint, Reg.playerPosition, speed);
			velocity.x = seekVect.x;
			velocity.y = seekVect.y;
			angle++;
		}else {
			velocity.x *= 0.9;
			velocity.y *= 0.9;
		}
	}
	
}