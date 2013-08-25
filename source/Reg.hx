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
												Resourses.map_2_tiles,
												Resourses.map_3_tiles,
												Resourses.map_4_tiles,
												Resourses.map_5_tiles,
												Resourses.map_6_tiles,
												Resourses.map_7_tiles,
												Resourses.map_8_tiles,
												Resourses.map_9_tiles	];
	static public var bgs:Array<Dynamic> = [	Resourses.template_map_bg,
												Resourses.map_1_bg, 
												Resourses.map_2_bg,
												Resourses.map_3_bg,		
												Resourses.map_4_bg,		
												Resourses.map_5_bg,		
												Resourses.map_6_bg,		
												Resourses.map_7_bg,		
												Resourses.map_8_bg,		
												Resourses.map_9_bg		];
	static public var entities:Array<Dynamic> = [	Resourses.template_entities,
													Resourses.map_1_entities,
													Resourses.map_2_coins,
													Resourses.map_3_coins,
													Resourses.map_4_coins,
													Resourses.map_5_coins,
													Resourses.map_6_coins,
													Resourses.map_7_coins,
													Resourses.map_8_coins,
													Resourses.map_9_coins	];
	static public var baddies:Array<Dynamic> = [	Resourses.template_baddies,
													Resourses.map_1_baddies,
													Resourses.map_2_baddies,
													Resourses.map_3_baddies,
													Resourses.map_4_baddies,
													Resourses.map_5_baddies,
													Resourses.map_6_baddies,
													Resourses.map_7_baddies,
													Resourses.map_8_baddies,
													Resourses.map_9_baddies		];
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
	
	static public var startPositions:Array<Point> = [	new Point(32, 160),		
														new Point(64, 96), 
														new Point(64, 128),
														new Point(64, 128),
														new Point(64, 192),
														new Point(128, 256),
														new Point(34, 128),
														new Point(36, 256),
														new Point(64, 192),
														new Point(97,160)	];
	
	static public var doorPositions:Array<Point> = [	new Point(256, 160),
														new Point(3072, 96),
														new Point(64, 224),
														new Point(128, 1216),
														new Point(896, 192),
														new Point(896, 416),
														new Point(544, 512),
														new Point(1505, 129),
														new Point(576, 896),
														new Point(864,898)		];
	static public var roomIndex:Int = 0;
	static public var playerPosition:FlxPoint = new FlxPoint();
}