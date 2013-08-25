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
		upVect = new FlxPoint(100, 0);
		downVect = new FlxPoint(-100, 0);
		velocity = addEq(velocity, upVect);
		loadGraphic(Resourses.hflip, true, false, 32, 32);
		addAnimation("spin", [0, 1], 32);
		play("spin");
	}
	
}