package entities;
import org.flixel.FlxObject;
import org.flixel.FlxSprite;
import org.flixel.util.FlxPoint;

/**
 * ...
 * @author Oliver Ross
 * 
 * seeks otizontall if in range
 */
class KillingEntity extends Entity
{
	public function new(xp, yp) 
	{
		super(xp, yp);
		loadGraphic(Resourses.horizontalkiller, true, true, 32, 32);
		addAnimation("hunt", [0, 1], 8);
		addAnimation("idle", [0]);
		play("idle");
		type = "KillingEntity";
		speed = 150;
		acceleration = new FlxPoint(0, 500);
		//set_facing(FlxObject.RIGHT);
	}
	override public function update():Void
	{
		super.update();
		var myMidpoint:FlxPoint = getMidpoint();
		var distToPlayer:Float = getDistanceBetween(myMidpoint, Reg.playerPosition);
		if (distToPlayer < 200) {
			var seekVect:FlxPoint = seekAtSpeed(myMidpoint, Reg.playerPosition, speed);
			velocity.x = seekVect.x;
			if (seekVect.x < 0) {
				trace("left");
				facing = FlxObject.RIGHT;
			}else if (seekVect.x > 0) {
				trace("right");
				facing = FlxObject.LEFT;
			}
			play("hunt");
		}else {
			play("idle");
			velocity.x *= 0.9;
		}
	}
	
}