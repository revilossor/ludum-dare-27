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
		loadGraphic(Resourses.coin, true, false, 16, 16);
		addAnimation("spin", [0, 1, 2, 3, 4, 3, 2, 1, 0], 8);
		play("spin");
	}
	override public function update():Void
	{
		super.update();
	}
	
}