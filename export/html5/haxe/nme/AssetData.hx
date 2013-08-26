package nme;


import openfl.Assets;


class AssetData {

	
	public static var className = new Map <String, Dynamic> ();
	public static var library = new Map <String, LibraryType> ();
	public static var path = new Map <String, String> ();
	public static var type = new Map <String, AssetType> ();
	
	private static var initialized:Bool = false;
	
	
	public static function initialize ():Void {
		
		if (!initialized) {
			
			path.set ("Beep", "assets/data/beep.mp3");
			type.set ("Beep", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/data/autotiles.png", "assets/data/autotiles.png");
			type.set ("assets/data/autotiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/autotiles_alt.png", "assets/data/autotiles_alt.png");
			type.set ("assets/data/autotiles_alt.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/base.png", "assets/data/base.png");
			type.set ("assets/data/base.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/beep.mp3", "assets/data/beep.mp3");
			type.set ("assets/data/beep.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/data/beep.wav", "assets/data/beep.wav");
			type.set ("assets/data/beep.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/data/button.png", "assets/data/button.png");
			type.set ("assets/data/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/button_a.png", "assets/data/button_a.png");
			type.set ("assets/data/button_a.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/button_b.png", "assets/data/button_b.png");
			type.set ("assets/data/button_b.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/button_c.png", "assets/data/button_c.png");
			type.set ("assets/data/button_c.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/button_down.png", "assets/data/button_down.png");
			type.set ("assets/data/button_down.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/button_left.png", "assets/data/button_left.png");
			type.set ("assets/data/button_left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/button_right.png", "assets/data/button_right.png");
			type.set ("assets/data/button_right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/button_up.png", "assets/data/button_up.png");
			type.set ("assets/data/button_up.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/button_x.png", "assets/data/button_x.png");
			type.set ("assets/data/button_x.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/button_y.png", "assets/data/button_y.png");
			type.set ("assets/data/button_y.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/courier.ttf", nme.NME_assets_data_courier_ttf);
			type.set ("assets/data/courier.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/data/cursor.png", "assets/data/cursor.png");
			type.set ("assets/data/cursor.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/default.png", "assets/data/default.png");
			type.set ("assets/data/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/fontData10pt.png", "assets/data/fontData10pt.png");
			type.set ("assets/data/fontData10pt.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/fontData11pt.png", "assets/data/fontData11pt.png");
			type.set ("assets/data/fontData11pt.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/handle.png", "assets/data/handle.png");
			type.set ("assets/data/handle.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/logo.png", "assets/data/logo.png");
			type.set ("assets/data/logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/logo_corners.png", "assets/data/logo_corners.png");
			type.set ("assets/data/logo_corners.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/logo_light.png", "assets/data/logo_light.png");
			type.set ("assets/data/logo_light.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/nokiafc22.ttf", nme.NME_assets_data_nokiafc22_ttf);
			type.set ("assets/data/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/data/stick.png", "assets/data/stick.png");
			type.set ("assets/data/stick.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/vcr/flixel.png", "assets/data/vcr/flixel.png");
			type.set ("assets/data/vcr/flixel.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/vcr/open.png", "assets/data/vcr/open.png");
			type.set ("assets/data/vcr/open.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/vcr/pause.png", "assets/data/vcr/pause.png");
			type.set ("assets/data/vcr/pause.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/vcr/play.png", "assets/data/vcr/play.png");
			type.set ("assets/data/vcr/play.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/vcr/record_off.png", "assets/data/vcr/record_off.png");
			type.set ("assets/data/vcr/record_off.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/vcr/record_on.png", "assets/data/vcr/record_on.png");
			type.set ("assets/data/vcr/record_on.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/vcr/restart.png", "assets/data/vcr/restart.png");
			type.set ("assets/data/vcr/restart.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/vcr/step.png", "assets/data/vcr/step.png");
			type.set ("assets/data/vcr/step.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/vcr/stop.png", "assets/data/vcr/stop.png");
			type.set ("assets/data/vcr/stop.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/vis/bounds.png", "assets/data/vis/bounds.png");
			type.set ("assets/data/vis/bounds.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/gfx/bg_tile.png", "assets/gfx/bg_tile.png");
			type.set ("assets/gfx/bg_tile.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/gfx/coin.png", "assets/gfx/coin.png");
			type.set ("assets/gfx/coin.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/gfx/coin_tiles.png", "assets/gfx/coin_tiles.png");
			type.set ("assets/gfx/coin_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/gfx/horizkiller.png", "assets/gfx/horizkiller.png");
			type.set ("assets/gfx/horizkiller.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/gfx/horizontalkiller.png", "assets/gfx/horizontalkiller.png");
			type.set ("assets/gfx/horizontalkiller.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/gfx/mapeditor_entities.png", "assets/gfx/mapeditor_entities.png");
			type.set ("assets/gfx/mapeditor_entities.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/gfx/outDoor.png", "assets/gfx/outDoor.png");
			type.set ("assets/gfx/outDoor.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/gfx/platformer_player.png", "assets/gfx/platformer_player.png");
			type.set ("assets/gfx/platformer_player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/gfx/player.png", "assets/gfx/player.png");
			type.set ("assets/gfx/player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/gfx/spikes.png", "assets/gfx/spikes.png");
			type.set ("assets/gfx/spikes.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/gfx/sponnerkiller.png", "assets/gfx/sponnerkiller.png");
			type.set ("assets/gfx/sponnerkiller.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/gfx/template_tiles.png", "assets/gfx/template_tiles.png");
			type.set ("assets/gfx/template_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/gfx/time++.png", "assets/gfx/time++.png");
			type.set ("assets/gfx/time++.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/gfx/vertkiller.png", "assets/gfx/vertkiller.png");
			type.set ("assets/gfx/vertkiller.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_1_baddies.csv", "assets/maps/template/mapCSV_map_1_baddies.csv");
			type.set ("assets/maps/template/mapCSV_map_1_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_1_bg.csv", "assets/maps/template/mapCSV_map_1_bg.csv");
			type.set ("assets/maps/template/mapCSV_map_1_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_1_entities.csv", "assets/maps/template/mapCSV_map_1_entities.csv");
			type.set ("assets/maps/template/mapCSV_map_1_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_1_tiles.csv", "assets/maps/template/mapCSV_map_1_tiles.csv");
			type.set ("assets/maps/template/mapCSV_map_1_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_2_baddies.csv", "assets/maps/template/mapCSV_map_2_baddies.csv");
			type.set ("assets/maps/template/mapCSV_map_2_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_2_bg.csv", "assets/maps/template/mapCSV_map_2_bg.csv");
			type.set ("assets/maps/template/mapCSV_map_2_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_2_entities.csv", "assets/maps/template/mapCSV_map_2_entities.csv");
			type.set ("assets/maps/template/mapCSV_map_2_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_2_tiles.csv", "assets/maps/template/mapCSV_map_2_tiles.csv");
			type.set ("assets/maps/template/mapCSV_map_2_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_3_baddies.csv", "assets/maps/template/mapCSV_map_3_baddies.csv");
			type.set ("assets/maps/template/mapCSV_map_3_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_3_bg.csv", "assets/maps/template/mapCSV_map_3_bg.csv");
			type.set ("assets/maps/template/mapCSV_map_3_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_3_entities.csv", "assets/maps/template/mapCSV_map_3_entities.csv");
			type.set ("assets/maps/template/mapCSV_map_3_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_3_tiles.csv", "assets/maps/template/mapCSV_map_3_tiles.csv");
			type.set ("assets/maps/template/mapCSV_map_3_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_4_baddies.csv", "assets/maps/template/mapCSV_map_4_baddies.csv");
			type.set ("assets/maps/template/mapCSV_map_4_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_4_bg.csv", "assets/maps/template/mapCSV_map_4_bg.csv");
			type.set ("assets/maps/template/mapCSV_map_4_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_4_entities.csv", "assets/maps/template/mapCSV_map_4_entities.csv");
			type.set ("assets/maps/template/mapCSV_map_4_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_4_tiles.csv", "assets/maps/template/mapCSV_map_4_tiles.csv");
			type.set ("assets/maps/template/mapCSV_map_4_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_5_baddies.csv", "assets/maps/template/mapCSV_map_5_baddies.csv");
			type.set ("assets/maps/template/mapCSV_map_5_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_5_bg.csv", "assets/maps/template/mapCSV_map_5_bg.csv");
			type.set ("assets/maps/template/mapCSV_map_5_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_5_entities.csv", "assets/maps/template/mapCSV_map_5_entities.csv");
			type.set ("assets/maps/template/mapCSV_map_5_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_5_tiles.csv", "assets/maps/template/mapCSV_map_5_tiles.csv");
			type.set ("assets/maps/template/mapCSV_map_5_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_6_baddies.csv", "assets/maps/template/mapCSV_map_6_baddies.csv");
			type.set ("assets/maps/template/mapCSV_map_6_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_6_bg.csv", "assets/maps/template/mapCSV_map_6_bg.csv");
			type.set ("assets/maps/template/mapCSV_map_6_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_6_entities.csv", "assets/maps/template/mapCSV_map_6_entities.csv");
			type.set ("assets/maps/template/mapCSV_map_6_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_6_tiles.csv", "assets/maps/template/mapCSV_map_6_tiles.csv");
			type.set ("assets/maps/template/mapCSV_map_6_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_7_baddies.csv", "assets/maps/template/mapCSV_map_7_baddies.csv");
			type.set ("assets/maps/template/mapCSV_map_7_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_7_bg.csv", "assets/maps/template/mapCSV_map_7_bg.csv");
			type.set ("assets/maps/template/mapCSV_map_7_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_7_entities.csv", "assets/maps/template/mapCSV_map_7_entities.csv");
			type.set ("assets/maps/template/mapCSV_map_7_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_7_tiles.csv", "assets/maps/template/mapCSV_map_7_tiles.csv");
			type.set ("assets/maps/template/mapCSV_map_7_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_8_baddies.csv", "assets/maps/template/mapCSV_map_8_baddies.csv");
			type.set ("assets/maps/template/mapCSV_map_8_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_8_bg.csv", "assets/maps/template/mapCSV_map_8_bg.csv");
			type.set ("assets/maps/template/mapCSV_map_8_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_8_entities.csv", "assets/maps/template/mapCSV_map_8_entities.csv");
			type.set ("assets/maps/template/mapCSV_map_8_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_8_tiles.csv", "assets/maps/template/mapCSV_map_8_tiles.csv");
			type.set ("assets/maps/template/mapCSV_map_8_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_9_baddies.csv", "assets/maps/template/mapCSV_map_9_baddies.csv");
			type.set ("assets/maps/template/mapCSV_map_9_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_9_bg.csv", "assets/maps/template/mapCSV_map_9_bg.csv");
			type.set ("assets/maps/template/mapCSV_map_9_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_9_entities.csv", "assets/maps/template/mapCSV_map_9_entities.csv");
			type.set ("assets/maps/template/mapCSV_map_9_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_map_9_tiles.csv", "assets/maps/template/mapCSV_map_9_tiles.csv");
			type.set ("assets/maps/template/mapCSV_map_9_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_template_map_baddies.csv", "assets/maps/template/mapCSV_template_map_baddies.csv");
			type.set ("assets/maps/template/mapCSV_template_map_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_template_map_bg.csv", "assets/maps/template/mapCSV_template_map_bg.csv");
			type.set ("assets/maps/template/mapCSV_template_map_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_template_map_entities.csv", "assets/maps/template/mapCSV_template_map_entities.csv");
			type.set ("assets/maps/template/mapCSV_template_map_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/mapCSV_template_map_tiles.csv", "assets/maps/template/mapCSV_template_map_tiles.csv");
			type.set ("assets/maps/template/mapCSV_template_map_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_1.dam", "assets/maps/template/map_1.dam");
			type.set ("assets/maps/template/map_1.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_1.dam.bak", "assets/maps/template/map_1.dam.bak");
			type.set ("assets/maps/template/map_1.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_2.dam", "assets/maps/template/map_2.dam");
			type.set ("assets/maps/template/map_2.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_2.dam.bak", "assets/maps/template/map_2.dam.bak");
			type.set ("assets/maps/template/map_2.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_3.dam", "assets/maps/template/map_3.dam");
			type.set ("assets/maps/template/map_3.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_3.dam.bak", "assets/maps/template/map_3.dam.bak");
			type.set ("assets/maps/template/map_3.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_4.dam", "assets/maps/template/map_4.dam");
			type.set ("assets/maps/template/map_4.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_4.dam.bak", "assets/maps/template/map_4.dam.bak");
			type.set ("assets/maps/template/map_4.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_5.dam", "assets/maps/template/map_5.dam");
			type.set ("assets/maps/template/map_5.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_5.dam.bak", "assets/maps/template/map_5.dam.bak");
			type.set ("assets/maps/template/map_5.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_6.dam", "assets/maps/template/map_6.dam");
			type.set ("assets/maps/template/map_6.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_6.dam.bak", "assets/maps/template/map_6.dam.bak");
			type.set ("assets/maps/template/map_6.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_7.dam", "assets/maps/template/map_7.dam");
			type.set ("assets/maps/template/map_7.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_7.dam.bak", "assets/maps/template/map_7.dam.bak");
			type.set ("assets/maps/template/map_7.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_8.dam", "assets/maps/template/map_8.dam");
			type.set ("assets/maps/template/map_8.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_8.dam.bak", "assets/maps/template/map_8.dam.bak");
			type.set ("assets/maps/template/map_8.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_9.dam", "assets/maps/template/map_9.dam");
			type.set ("assets/maps/template/map_9.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/map_9.dam.bak", "assets/maps/template/map_9.dam.bak");
			type.set ("assets/maps/template/map_9.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/template_map.dam", "assets/maps/template/template_map.dam");
			type.set ("assets/maps/template/template_map.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/template/template_map.dam.bak", "assets/maps/template/template_map.dam.bak");
			type.set ("assets/maps/template/template_map.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			
			
			initialized = true;
			
		}
		
	}
	
	
}


















class NME_assets_data_courier_ttf extends flash.text.Font { }








class NME_assets_data_nokiafc22_ttf extends flash.text.Font { }





















































































