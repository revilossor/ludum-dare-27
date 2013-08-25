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
		loadGraphic(Resourses.player_sprite, false, false, 16, 30);
		maxVelocity = new FlxPoint(500, 800);
		acceleration = new FlxPoint(0, 500);
		drag = new FlxPoint(50, 50);
		onFloor = false;
	//	scale.x = scale.y = 1.2;
		set_forceComplexRender(true);
		jumpTimer = 10;
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
			velocity.x -= 10;
		}
		if (FlxG.keys.pressed("RIGHT")) {
			velocity.x += 10;
		}
		if (onFloor) {
			jumpTimer = 10;
			if (FlxG.keys.justPressed("UP")) {
				Util.log(this, "start jump");
				y -= 3;
				jumpTimer--;
				velocity.y = -maxVelocity.y/10;
			}
		}
		if (FlxG.keys.pressed("UP") && jumpTimer > 0) {
			velocity.y -= maxVelocity.y / 20;
			jumpTimer--;
		}
		if (FlxG.keys.justReleased("UP") || jumpTimer <= 0) {
			Util.log(this, "end jump");
			isJumping = false;
			
		}
		if (FlxG.keys.pressed("DOWN")) {
			// ???
		}
		
		
		
	}
}