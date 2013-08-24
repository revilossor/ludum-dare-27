package entities;
import org.flixel.FlxSprite;

/**
 * ...
 * @author Oliver Ross
 */
class Coin extends FlxSprite
{

	public function new(xp, yp) 
	{
		super(xp, yp);
		loadGraphic(Resourses.coin, false, false, 16, 16);
	}
	override public function update():Void
	{
		super.update();
	}
	
}