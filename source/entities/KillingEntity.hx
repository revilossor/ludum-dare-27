package entities;
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
		makeGraphic(32, 32, 0xffff00ff);
		type = "KillingEntity";
		speed = 150;
		acceleration = new FlxPoint(0, 500);
	}
	override public function update():Void
	{
		super.update();
		var myMidpoint:FlxPoint = getMidpoint();
		var distToPlayer:Float = getDistanceBetween(myMidpoint, Reg.playerPosition);
		if (distToPlayer < 400) {
			var seekVect:FlxPoint = seekAtSpeed(myMidpoint, Reg.playerPosition, speed);
			velocity.x = seekVect.x;
		}else {
			velocity.x *= 0.9;
		}
	}
	
}