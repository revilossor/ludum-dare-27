package entities;
import org.flixel.FlxG;
import org.flixel.FlxObject;
import org.flixel.FlxSprite;
import org.flixel.util.FlxPoint;

/**
 * ...
 * @author Oliver Ross
 */
class PlatformerPlayer extends FlxSprite
{
	public var onFloor:Bool;
	
	private var jumpTimer:Int;
	private var isJumping:Bool;
	
	override public function new(xp:UInt, yp:UInt):Void
	{
		super(xp, yp);
		loadGraphic(Resourses.player_sprite, true, true, 16, 30);
		addAnimation("stand", [0]);
		addAnimation("run", [1, 2, 3, 2], 16);
		addAnimation("jump", [4]);
		maxVelocity = new FlxPoint(300, 900);
		acceleration = new FlxPoint(0, 700);
		drag = new FlxPoint(100, 50);
		onFloor = false;
		set_forceComplexRender(true);
		jumpTimer = 10;
		play("stand");
	}
	override public function destroy():Void
	{
		super.destroy();
	}
	override public function update():Void
	{
		super.update();
		keyHandling();
		Reg.playerPosition = getMidpoint();
	}
	private function keyHandling():Void
	{
		if (FlxG.keys.pressed("LEFT")) {
			velocity.x -= 20;
			facing = FlxObject.LEFT;
		}
		if (FlxG.keys.pressed("RIGHT")) {
			velocity.x += 20;
			facing = FlxObject.RIGHT;
		}
		if (onFloor) {
			jumpTimer = 10;
			if (FlxG.keys.justPressed("UP")||FlxG.keys.justPressed("SPACE")) {
				Util.log(this, "start jump");
				y -= 3;
				jumpTimer--;
				velocity.y = -Math.abs(velocity.y * 1.1);
			}
		}
		if ((FlxG.keys.pressed("UP")||FlxG.keys.pressed("SPACE")) && jumpTimer > 0) {
			velocity.y -= 50 ;
			jumpTimer--;
		}
		if ((FlxG.keys.justReleased("UP")||FlxG.keys.justReleased("SPACE")) || jumpTimer <= 0) {
			isJumping = false;
		}
		if (velocity.y < 0) {
			play("jump");
		}else if (Math.abs(velocity.x) < 20 ) {
			play("stand");
		}else {
			play("run");
		}
		
		
	}
}