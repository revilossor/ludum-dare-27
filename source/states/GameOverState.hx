package states;

import org.flixel.FlxG;
import org.flixel.FlxState;
import org.flixel.FlxText;
import states.PlatformerState;

/**
 * ...
 * @author Oliver Ross
 */
class GameOverState extends FlxState
{
	private var goverText:FlxText;
	private var spaceText:FlxText;
	private var message:String;
	
	public function new(msg:String = "You Ran Out Of Time!") 
	{
		super();
		message = msg;
	}
	override public function create():Void 
	{
		super.create();
		goverText = new FlxText(0, 100, 800, message);
		goverText.setFormat(null, 36, 0xffffff00, "center");
		spaceText = new FlxText(0, 450, 800, "press space to retry!");
		spaceText.setFormat(null, 24, 0xffffff00, "center");
		add(goverText);
		add(spaceText);
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
		if (FlxG.keys.justPressed("SPACE")) {
			Util.log(this, "retry");
			FlxG.switchState(new PlatformerState(Reg.roomIndex));
		}
	}
}