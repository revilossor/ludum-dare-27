package states;

import openfl.Assets;
import flash.geom.Rectangle;
import flash.net.SharedObject;
import org.flixel.FlxButton;
import org.flixel.FlxG;
import org.flixel.FlxGroup;
import org.flixel.FlxPath;
import org.flixel.FlxSave;
import org.flixel.FlxSprite;
import org.flixel.FlxState;
import org.flixel.FlxText;
import org.flixel.util.FlxMath;

class MenuState extends FlxState
{
	private var _pressSpaceText:FlxText;
	
	override public function create():Void
	{
		FlxG.bgColor = 0xff00000;
		Util.log(this, "init");
		FlxG.mouse.useSystemCursor = true;
		Reg.roomIndex = 0;
		_pressSpaceText = new FlxText(0, 400, 800, "Press Space To Play", 36);
		_pressSpaceText.setFormat(null, 36, 0xffff00ff, "center");
		addItems();
		super.create();
	}
	private function addItems():Void
	{
		add(_pressSpaceText);
	}
	override public function destroy():Void
	{
		_pressSpaceText = null;
		super.destroy();
	}
	override public function update():Void
	{
		keyHandling();
		super.update();
	}
	private function keyHandling():Void
	{
		if (FlxG.keys.justReleased("SPACE")) {
			FlxG.switchState(new PlatformerState());
		}
	}
}