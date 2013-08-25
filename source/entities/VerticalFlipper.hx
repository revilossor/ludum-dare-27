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
		upVect = new FlxPoint(0, 100);
		downVect = new FlxPoint(0, -100);
		velocity = addEq(velocity, upVect);
		loadGraphic(Resourses.vflip, true, false, 32, 32);
		addAnimation("spin", [0, 1], 32);
		play("spin");
	}

	
}