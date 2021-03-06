package states;
import entities.Entity;
import entities.TimePlusPlus;
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
	
	private var timeplusses:FlxGroup;
	
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
		
		timeplusses = new FlxGroup();
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
		add(timeplusses);
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
		timeDisplay.text = "time remaining : " + (Math.ceil(timeRemaining/30));
		keyHandling();
		if (timeRemaining <= 0) {
			FlxG.switchState(new GameOverState());
		}
	}
	private function keyHandling():Void
	{
		if (FlxG.keys.justReleased("Q")) {
			Reg.roomIndex++;
			if (Reg.roomIndex == Reg.levels.length) {
				Util.log(this, "WIN!");
				FlxG.switchState(new WinState());
			}else{
				FlxG.switchState(new PlatformerState(Reg.roomIndex));
			}
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
		var baddies:FlxGroup = _room.get_allBaddies();
		FlxG.collide(_player, baddies, playerHitBaddie);
		FlxG.collide(baddies, roomTiles, baddieHitWall);
		FlxG.collide(baddies, baddies, baddieHitWall);
	}
	private function playerOverDoor(pl:FlxBasic, door:FlxSprite):Void
	{
		if (FlxG.keys.justPressed("DOWN")) {
			door.allowCollisions = FlxObject.NONE;
			Util.log(this, "player over door");
			Reg.roomIndex++;
			trace("roomIndex " + Reg.roomIndex);
			trace("levels length " + Reg.levels.length);
			if (Reg.roomIndex == Reg.levels.length) {
				Util.log(this, "WIN!");
				FlxG.switchState(new WinState());
			}else{
				FlxG.switchState(new PlatformerState(Reg.roomIndex));
			}
		}
	}
	private function playerOverCoin(pl:FlxBasic, co:FlxSprite):Void
	{
		co.exists = false;
		timeRemaining += 30;
		timeplusses.add(new TimePlusPlus(co.x - 15, co.y - 16));
	}
	private function playerHitBaddie(pl:FlxBasic, bd:Entity):Void
	{
		if (bd.type == "spike") {
			if (_player.y < (bd.y - 29)) {
				FlxG.switchState(new GameOverState("You Were Spiked By A Spike!"));
			}
		}else{
			FlxG.switchState(new GameOverState("You Died!"));
		}
	}
	private function baddieHitWall(bd:Entity, w:FlxBasic):Void
	{
		switch(bd.type) {
			case "StunningEntity":	 
				//Util.log(this, "flipper hit wall");
				var s:StunningEntity = cast(bd);
				if (s.isGoingUp) {
					s.isGoingUp = false;
					s.velocity = s.addEq(s.velocity,s.upVect);
				}else {
					s.isGoingUp = true;
					s.velocity = s.addEq(s.velocity,s.downVect);
				}
		}
	}
}