package states;
import flash.geom.Point;
import flash.utils.Timer;
import openfl.Assets;
import org.flixel.addons.FlxTilemapExt;
import org.flixel.FlxBasic;
import org.flixel.FlxCamera;
import org.flixel.FlxG;
import org.flixel.FlxGroup;
import org.flixel.FlxObject;
import org.flixel.FlxSprite;
import org.flixel.FlxState;
import entities.PlatformerPlayer;
import org.flixel.FlxText;
import org.flixel.FlxTilemap;
import org.flixel.util.FlxPoint;
import org.flixel.util.FlxRect;

/**
 * ...
 * @author Oliver Ross
 */
class PlatformerState extends FlxState
{
	private var index:UInt;
	private var _room:Room;
	private var  door:FlxSprite;
	private var _player:PlatformerPlayer;
	
	private var timeRemaining:Int;
	private var timeDisplay:FlxText;
	
	public function new(i:UInt = 0)
	{
		super();
		index = i;
	}
	
	override public function create():Void
	{
		super.create();
		FlxG.bgColor = 0xff000000;
		
		_room = new Room(index);
		
		var playerStart:Point = Reg.startPositions[index];
		Util.log(this, "player start at " + playerStart);
		
		_player = new PlatformerPlayer(cast(playerStart.x), cast(playerStart.y));
		
		addItems();
		
		timeRemaining = 300;
		
		FlxG.worldBounds = new FlxRect(0, 0, _room.get_width(), _room.get_height());
		FlxG.camera.setBounds(0, 0, _room.get_width(), _room.get_height());
		FlxG.camera.style = FlxCamera.STYLE_PLATFORMER;
		FlxG.camera.follow(_player);
	}
	private function addItems():Void
	{
		add(_room);		
		var thisDoorPosition:Point = Reg.doorPositions[index];
		door = new FlxSprite(thisDoorPosition.x, thisDoorPosition.y, Resourses.door);
		door.scrollFactor = new FlxPoint(1,1);
		add(door);
		add(_player);
		timeDisplay = new FlxText(0, 0, 800, "init", 36);
		timeDisplay.setFormat(null, 36, 0xffffff00, "left");
		timeDisplay.scrollFactor = new FlxPoint(0,0);
		add(timeDisplay);
	}
	override public function destroy():Void
	{
		super.destroy();
	}
	override public function update():Void
	{
		super.update();
		doCollision();
		timeRemaining--;
		timeDisplay.text = "time remaining : " + timeRemaining;
		keyHandling();
		if (timeRemaining <= 0) {
			FlxG.switchState(new GameOverState());
		}
	}
	private function keyHandling():Void
	{
		if (FlxG.keys.justReleased("Q")) {
			Reg.roomIndex = index;
			FlxG.switchState(new WinState());
		}
	}
	private function doCollision():Void
	{
		var roomTiles:FlxTilemap = _room.get__tiles();
		FlxG.collide(_player, roomTiles);
		if (_player.isTouching(FlxObject.FLOOR)) { _player.onFloor = true; } else { _player.onFloor = false; }
		FlxG.overlap(_player, door, playerOverDoor);
		var coins:FlxGroup = _room.get_allCoins();
		FlxG.overlap(_player, coins, playerOverCoin);
	}
	private function playerOverDoor(pl:FlxBasic, door:FlxBasic):Void
	{
		if (FlxG.keys.justPressed("DOWN")) {
			Util.log(this, "player over door");
			Reg.roomIndex++;
			if (Reg.roomIndex > Reg.levels.length) {
				Util.log(this, "WIN!");
				FlxG.switchState(new WinState());
			}else{
				FlxG.switchState(new PlatformerState(Reg.roomIndex));
			}
		}
	}
	private function playerOverCoin(pl:FlxBasic, co:FlxBasic):Void
	{
		co.exists = false;
		timeRemaining += 30;
	}
}