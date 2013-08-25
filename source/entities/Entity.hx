package entities;
import org.flixel.FlxSprite;
import org.flixel.util.FlxPoint;

/**
 * ...
 * @author Oliver Ross
 * 
 * has sine scale to show is a baddie, sprite col informs of effect
 * 
 */
class Entity extends FlxSprite
{
	
	public var type:String;
	public var speed:Float;
	
	public function new(xp, yp) 
	{
		super(xp, yp);
	//	immovable = true;
		set_forceComplexRender(true);
	}
	
	//steering
	public function seek(e:FlxPoint, t:FlxPoint):FlxPoint{
		return getUnitBetween(e, t);
	}
	public function flee(e:FlxPoint, t:FlxPoint):FlxPoint{
		return getUnitBetween(t, e);
	}
	public function seekAtSpeed(e:FlxPoint, t:FlxPoint, s:Float):FlxPoint{
		return magnify(getUnitBetween(e, t), s);
	}
	public function fleeAtSpeed(e:FlxPoint, t:FlxPoint, s:Float):FlxPoint{
		return magnify(getUnitBetween(t, e), s);
	}
	// vector stuff
	public function addEq(a:FlxPoint, b:FlxPoint):FlxPoint{
		return new FlxPoint(a.x + b.x, a.y + b.y);
	}
	public function subEq(a:FlxPoint, b:FlxPoint):FlxPoint{
		return new FlxPoint(a.x - b.x, a.y - b.y);
	}
	public function divEq(a:FlxPoint, b:FlxPoint):FlxPoint{
		return new FlxPoint(a.x / b.x, a.y / b.y);
	}
	public function mulEq(a:FlxPoint, b:FlxPoint):FlxPoint{
		return new FlxPoint(a.x * b.x, a.y * b.y);
	}
	public function getUnitBetween(a:FlxPoint, b:FlxPoint):FlxPoint{
		return getUnit(getBetween(a, b));
	}
	public function getBetween(a:FlxPoint, b:FlxPoint):FlxPoint{
		return new FlxPoint(b.x - a.x, b.y - a.y);
	}
	public function getDistanceBetween(a:FlxPoint, b:FlxPoint):Float{
		return getMagnitude(getBetween(a, b)); 
	}
	public function getMagnitude(v:FlxPoint):Float{
		return Math.sqrt(Math.pow(v.x, 2) + Math.pow(v.y, 2));
	}
	public function getMagnitudeSq(v:FlxPoint):Float{
		return Math.pow(v.x, 2) + Math.pow(v.y, 2);
	}
	public function getUnit(v:FlxPoint):FlxPoint{
		var mag:Float = getMagnitude(v);
		return new FlxPoint(v.x / mag, v.y / mag);
	}
	public function magnify(v:FlxPoint, m:Float):FlxPoint{
		try{
			return new FlxPoint(v.x * m, v.y * m);
		}catch (e:String) {
			return new FlxPoint();
		}
	}
	
	
	
}