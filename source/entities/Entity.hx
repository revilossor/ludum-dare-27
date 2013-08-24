package entities;
import org.flixel.FlxSprite;

/**
 * ...
 * @author Oliver Ross
 * 
 * has sine scale to show is a baddie, sprite col informs of effect
 * 
 */
class Entity extends FlxSprite
{
	
	public var type:String;

	public function new(xp, yp) 
	{
		super(xp, yp);
		immovable = true;
	}
	
}