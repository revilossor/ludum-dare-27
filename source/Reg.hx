package;

import flash.geom.Point;
import org.flixel.FlxSave;
import org.flixel.util.FlxPoint;

/**
* Handy, pre-built Registry class that can be used to store 
* references to objects and other things for quick-access. Feel
* free to simply ignore it or change it in any way you like.
*/
class Reg
{
	/**
	 * Generic levels Array that can be used for cross-state stuff.
	 * Example usage: Storing the levels of a platformer.
	 */
	static public var levels:Array<Dynamic> = [	Resourses.template_room, 
												Resourses.map_1,
												Resourses.map_2_tiles	];
	static public var entities:Array<Dynamic> = [	Resourses.template_entities,
													Resourses.map_1_entities,
													Resourses.map_2_coins	];
	static public var baddies:Array<Dynamic> = [	Resourses.template_baddies,
													Resourses.map_1_baddies,
													Resourses.map_2_baddies	];
	/**
	 * Generic level variable that can be used for cross-state stuff.
	 * Example usage: Storing the current level number.
	 */
	static public var level:Int = 0;
	/**
	 * Generic scores Array that can be used for cross-state stuff.
	 * Example usage: Storing the scores for level.
	 */
	static public var scores:Array<Dynamic> = [];
	/**
	 * Generic score variable that can be used for cross-state stuff.
	 * Example usage: Storing the current score.
	 */
	static public var score:Int = 0;
	/**
	 * Generic bucket for storing different <code>FlxSaves</code>.
	 * Especially useful for setting up multiple save slots.
	 */
	static public var saves:Array<FlxSave> = [];
	/**
	 * Generic container for a <code>FlxSave</code>. You might want to 
	 * consider assigning <code>FlxG._game._prefsSave</code> to this in
	 * your state if you want to use the same save flixel uses internally
	 */
	static public var save:FlxSave;
	
	static public var startPositions:Array<Point> = [	new Point(193, 609),		
														new Point(99, 257), 
														new Point(97,224)	];
	
	static public var doorPositions:Array<Point> = [	new Point(1280, 672),
														new Point(801, 257),
														new Point(544,544)	];
	static public var roomIndex:Int = 0;
	static public var playerPosition:FlxPoint = new FlxPoint();
}