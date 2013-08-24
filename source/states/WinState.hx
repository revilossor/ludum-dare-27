package states;
import org.flixel.FlxG;
import org.flixel.FlxState;
import org.flixel.FlxText;

/**
 * ...
 * @author Oliver Ross
 */
class WinState extends FlxState
{
	private var winText:FlxText;
	

	override public function create():Void
	{
		super.create();
		winText = new FlxText(0, 200, 800, "you win! \n press space to start again!");
		winText.setFormat(null, 36, 0xffffff00, "center");
		add(winText);
	}
	override public function destroy():Void
	{
		super.destroy();
	}
	override public function update():Void
	{
		super.update();
		keyHandling();
	}
	private function keyHandling():Void
	{
		if (FlxG.keys.justReleased("SPACE")) {
			FlxG.switchState(new MenuState());
		}
	}
	
}