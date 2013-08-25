package entities;
import org.flixel.FlxSprite;

/**
 * ...
 * @author Oliver Ross
 */
class TimePlusPlus extends FlxSprite
{

	public function new(xp, yp) 
	{
		super(xp, yp);
		loadGraphic(Resourses.tpp, false, false, 36, 7);
	}
	override public function update():Void
	{
		scale.x = scale.y *= 1.1;
		alpha *= 0.9;
		if (alpha < 0.3) {
			exists = false;
		}
	}
	
}