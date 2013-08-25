package entities;
import org.flixel.util.FlxPoint;

/**
 * ...
 * @author Oliver Ross
 */
class VerticalFlipper extends StunningEntity
{

	public function new(xp, yp) 
	{
		super(xp, yp);
		upVect = new FlxPoint(0, 200);
		downVect = new FlxPoint(0, -200);
		velocity = addEq(velocity,upVect);
	}
	
}