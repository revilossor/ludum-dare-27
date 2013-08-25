package entities;
import org.flixel.util.FlxPoint;

/**
 * ...
 * @author Oliver Ross
 */
class HorizontalFlipper extends StunningEntity
{

	public function new(xp, yp) 
	{
		super(xp, yp);
		upVect = new FlxPoint(200, 0);
		downVect = new FlxPoint( -200, 0);
		velocity = addEq(velocity,upVect);
	}
	
	
}