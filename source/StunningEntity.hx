package ;
import entities.Entity;
import org.flixel.util.FlxPoint;

/**
 * ...
 * @author Oliver Ross
 * 
 * stun is a bad idea - this just moves horizontally/verticlly and flips on hit wall
 * 
 */
class StunningEntity extends Entity
{
	public var upVect:FlxPoint;
	public var downVect:FlxPoint;
	public var isGoingUp:Bool;
	
	public function new(xp, yp) 
	{
		super(xp, yp);
		makeGraphic(32, 32, 0xffffff00);
		type = "StunningEntity";
		upVect = new FlxPoint();
		downVect = new FlxPoint();
		isGoingUp = true;
	}
	
}