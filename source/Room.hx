package ;
import entities.BouncingEntity;
import entities.Coin;
import entities.HorizontalFlipper;
import entities.KillingEntity;
import entities.Spikes;
import entities.VerticalFlipper;
import flash.geom.Point;
import openfl.Assets;
import org.flixel.addons.FlxTilemapExt;
import org.flixel.FlxG;
import org.flixel.FlxGroup;
import org.flixel.FlxSprite;
import org.flixel.FlxTilemap;
import org.flixel.util.FlxPoint;

/**
 * ...
 * @author Oliver Ross
 */
class Room extends FlxGroup
{
	private var _tiles(get, null):FlxTilemap;
	private var _bg:FlxTilemap;
	private var allCoins(get, null):FlxGroup;
	private var allBaddies(get, null):FlxGroup;
	
	private var index:UInt;
	
	private var width(get, null):Float;
	private var height(get, null):Float;
	
	public function new(i:UInt = 0):Void
	{
		super();
		index = i;
		_tiles = new FlxTilemap();
		_tiles.loadMap(Assets.getText(Reg.levels[index]), Resourses.template_tiles, 32, 32);
		_bg = new FlxTilemap();
		_bg.loadMap(Assets.getText(Reg.bgs[index]), Resourses.bg_tiles, 32, 32);
		
		addItems();
		width = _tiles.width;
		height = _tiles.height;
		Util.log(this, "width is " + width + ", heigrht is " + height); 
	}
	
	private function addItems():Void
	{
		Util.log(this, "adding tiles");
		add(_bg);
		add(_tiles);
		addCoins();
		addBaddies();
	}
	private function addCoins():Void
	{
		allCoins = new FlxGroup();
		var entitiesCsv:String = Assets.getText(Reg.entities[index]);
		var r:EReg = ~/([0-9][\r\n\t])/g;
		var withCommas:String = r.replace(entitiesCsv, "$1,");
		var entityData = withCommas.split(",");
	//	trace(entityData);
		var xIndex:UInt = 0;
		var yIndex:UInt = 0;
		for (n in 0...entityData.length) {
			if (xIndex+1 == cast(_tiles.widthInTiles)) { yIndex++; }	
			xIndex = n % _tiles.widthInTiles;
	//		trace("x : " + xIndex + " y : " + yIndex);
			var thisDrawPoint:Point = new Point(xIndex * 32, yIndex * 32);
			if (entityData[n] == "1") {	// add coin
				allCoins.add(new Coin(thisDrawPoint.x+8, thisDrawPoint.y+8));
			}
		}
		add(allCoins);
	}
	private function addBaddies():Void
	{
		allBaddies = new FlxGroup();
		var entitiesCsv:String = Assets.getText(Reg.baddies[index]);
		var r:EReg = ~/([0-9][\r\n\t])/g;
		var withCommas:String = r.replace(entitiesCsv, "$1,");
		
		var entityData = withCommas.split(",");	
		var xIndex:UInt = 0;
		var yIndex:UInt = 0;
		for (n in 0...entityData.length) {
			if (xIndex == cast(_tiles.widthInTiles-1)){ yIndex++; }	
			xIndex = n % _tiles.widthInTiles;
			var thisDrawPoint:Point = new Point(xIndex * 32, yIndex * 32);
			if (entityData[n] == "1") {	// add killer
				allBaddies.add(new KillingEntity(thisDrawPoint.x, thisDrawPoint.y));
			}else if (entityData[n] == "2") {	// add bouncer
				allBaddies.add(new BouncingEntity(thisDrawPoint.x, thisDrawPoint.y));
			}else if (entityData[n] == "3") {	// add hmover
				allBaddies.add(new HorizontalFlipper(thisDrawPoint.x, thisDrawPoint.y));
			}else if (entityData[n] == "4") {	// add vmover
				allBaddies.add(new VerticalFlipper(thisDrawPoint.x, thisDrawPoint.y));
			}else if (entityData[n] == "5") {	// add spikes
				allBaddies.add(new Spikes(thisDrawPoint.x, thisDrawPoint.y + 20));
			}
		}
		add(allBaddies);
	}
	override public function destroy():Void
	{
		super.destroy();
	}
	override public function update():Void
	{
		super.update();
	}
	
	// getters / setters
	public function get__tiles():FlxTilemap
	{
		return _tiles;
	}
	public function get_allCoins():FlxGroup
	{
		return allCoins;
	}
	public function get_allBaddies():FlxGroup
	{
		return allBaddies;
	}
	public function get_width():Float
	{
		return width;
	}
	public function get_height():Float
	{
		return height;
	}
	
}