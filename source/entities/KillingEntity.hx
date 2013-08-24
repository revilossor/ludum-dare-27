package entities;
import org.flixel.FlxSprite;

/**
 * ...
 * @author Oliver Ross
 */
class KillingEntity extends Entity
{
	public function new(xp, yp) 
	{
		super(xp, yp);
		makeGraphic(32, 32, 0xffff00ff);
		type = "KillingEntity";
	}
	
}