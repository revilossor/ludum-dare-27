package ;
import entities.Coin;
import flash.geom.Point;
import openfl.Assets;
import org.flixel.addons.FlxTilemapExt;
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
	private var allCoins(get, null):FlxGroup;
	
	private var index:UInt;
	
	private var width(get, null):Float;
	private var height(get, null):Float;
	
	public function new(i:UInt = 0):Void
	{
		super();
		index = i;
		_tiles = new FlxTilemap();
		_tiles.loadMap(Assets.getText(Reg.levels[index]), Resourses.template_tiles, 32, 32);
		addItems();
		width = _tiles.width;
		height = _tiles.height;
		Util.log(this, "width is " + width + ", heigrht is " + height); 
	}
	
	private function addItems():Void
	{
		Util.log(this, "adding tiles");
		add(_tiles);
		addEntities();
	}
	private function addEntities():Void
	{
		allCoins = new FlxGroup();
		var entitiesCsv:String = Assets.getText(Reg.entities[index]);
		var entityData = entitiesCsv.split(",");	
		var xIndex:UInt = 0;
		var yIndex:UInt = 0;
		for (n in 0...entityData.length) {
			if (xIndex == 0 && n > _tiles.widthInTiles) { yIndex++; }	
			xIndex = n % _tiles.widthInTiles;
			var thisDrawPoint:Point = new Point(xIndex * 32, yIndex * 32);
			if (entityData[n] == "1") {	// add coin
				allCoins.add(new Coin(thisDrawPoint.x+8, thisDrawPoint.y+8));
			}
		}
		add(allCoins);
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
//	public function set_allCoins(n:FlxGroup):Void
//	{
//		allCoins = n;
//	}
	public function get_width():Float
	{
		return width;
	}
	public function get_height():Float
	{
		return height;
	}
	
}