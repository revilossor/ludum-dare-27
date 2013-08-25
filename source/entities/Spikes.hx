package entities;
import org.flixel.FlxSprite;

/**
 * ...
 * @author Oliver Ross
 */
class Spikes extends FlxSprite
{
	
	public var type:String;
	
	public function new(xp, yp) 
	{
		super(xp, yp);
		loadGraphic(Resourses.spikes, false, false, 32, 12);
		immovable = true;
		type = "spike";
	}
	
}