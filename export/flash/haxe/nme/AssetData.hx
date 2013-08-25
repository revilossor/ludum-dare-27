package nme;


import openfl.Assets;


class AssetData {

	
	public static var className = new #if haxe3 Map <String, #else Hash <#end Dynamic> ();
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();
	
	private static var initialized:Bool = false;
	
	
	public static function initialize ():Void {
		
		if (!initialized) {
			
			className.set ("Beep", nme.NME_assets_data_beep_mp3);
			type.set ("Beep", Reflect.field (AssetType, "sound".toUpperCase ()));
			className.set ("assets/data/autotiles.png", nme.NME_assets_data_autotiles_png);
			type.set ("assets/data/autotiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/autotiles_alt.png", nme.NME_assets_data_autotiles_alt_png);
			type.set ("assets/data/autotiles_alt.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/base.png", nme.NME_assets_data_base_png);
			type.set ("assets/data/base.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/beep.mp3", nme.NME_assets_data_beep_mp4);
			type.set ("assets/data/beep.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			className.set ("assets/data/button.png", nme.NME_assets_data_button_png);
			type.set ("assets/data/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_a.png", nme.NME_assets_data_button_a_png);
			type.set ("assets/data/button_a.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_b.png", nme.NME_assets_data_button_b_png);
			type.set ("assets/data/button_b.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_c.png", nme.NME_assets_data_button_c_png);
			type.set ("assets/data/button_c.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_down.png", nme.NME_assets_data_button_down_png);
			type.set ("assets/data/button_down.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_left.png", nme.NME_assets_data_button_left_png);
			type.set ("assets/data/button_left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_right.png", nme.NME_assets_data_button_right_png);
			type.set ("assets/data/button_right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_up.png", nme.NME_assets_data_button_up_png);
			type.set ("assets/data/button_up.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_x.png", nme.NME_assets_data_button_x_png);
			type.set ("assets/data/button_x.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/button_y.png", nme.NME_assets_data_button_y_png);
			type.set ("assets/data/button_y.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/courier.ttf", nme.NME_assets_data_courier_ttf);
			type.set ("assets/data/courier.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			className.set ("assets/data/cursor.png", nme.NME_assets_data_cursor_png);
			type.set ("assets/data/cursor.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/default.png", nme.NME_assets_data_default_png);
			type.set ("assets/data/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/fontData10pt.png", nme.NME_assets_data_fontdata10pt_png);
			type.set ("assets/data/fontData10pt.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/fontData11pt.png", nme.NME_assets_data_fontdata11pt_png);
			type.set ("assets/data/fontData11pt.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/handle.png", nme.NME_assets_data_handle_png);
			type.set ("assets/data/handle.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/logo.png", nme.NME_assets_data_logo_png);
			type.set ("assets/data/logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/logo_corners.png", nme.NME_assets_data_logo_corners_png);
			type.set ("assets/data/logo_corners.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/logo_light.png", nme.NME_assets_data_logo_light_png);
			type.set ("assets/data/logo_light.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/nokiafc22.ttf", nme.NME_assets_data_nokiafc22_ttf);
			type.set ("assets/data/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			className.set ("assets/data/stick.png", nme.NME_assets_data_stick_png);
			type.set ("assets/data/stick.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/flixel.png", nme.NME_assets_data_vcr_flixel_png);
			type.set ("assets/data/vcr/flixel.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/open.png", nme.NME_assets_data_vcr_open_png);
			type.set ("assets/data/vcr/open.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/pause.png", nme.NME_assets_data_vcr_pause_png);
			type.set ("assets/data/vcr/pause.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/play.png", nme.NME_assets_data_vcr_play_png);
			type.set ("assets/data/vcr/play.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/record_off.png", nme.NME_assets_data_vcr_record_off_png);
			type.set ("assets/data/vcr/record_off.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/record_on.png", nme.NME_assets_data_vcr_record_on_png);
			type.set ("assets/data/vcr/record_on.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/restart.png", nme.NME_assets_data_vcr_restart_png);
			type.set ("assets/data/vcr/restart.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/step.png", nme.NME_assets_data_vcr_step_png);
			type.set ("assets/data/vcr/step.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vcr/stop.png", nme.NME_assets_data_vcr_stop_png);
			type.set ("assets/data/vcr/stop.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/data/vis/bounds.png", nme.NME_assets_data_vis_bounds_png);
			type.set ("assets/data/vis/bounds.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/gfx/bg_tile.png", nme.NME_assets_gfx_bg_tile_png);
			type.set ("assets/gfx/bg_tile.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/gfx/coin.png", nme.NME_assets_gfx_coin_png);
			type.set ("assets/gfx/coin.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/gfx/coin_tiles.png", nme.NME_assets_gfx_coin_tiles_png);
			type.set ("assets/gfx/coin_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/gfx/horizkiller.png", nme.NME_assets_gfx_horizkiller_png);
			type.set ("assets/gfx/horizkiller.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/gfx/horizontalkiller.png", nme.NME_assets_gfx_horizontalkiller_png);
			type.set ("assets/gfx/horizontalkiller.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/gfx/mapeditor_entities.png", nme.NME_assets_gfx_mapeditor_entities_png);
			type.set ("assets/gfx/mapeditor_entities.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/gfx/outDoor.png", nme.NME_assets_gfx_outdoor_png);
			type.set ("assets/gfx/outDoor.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/gfx/platformer_player.png", nme.NME_assets_gfx_platformer_player_png);
			type.set ("assets/gfx/platformer_player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/gfx/player.png", nme.NME_assets_gfx_player_png);
			type.set ("assets/gfx/player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/gfx/spikes.png", nme.NME_assets_gfx_spikes_png);
			type.set ("assets/gfx/spikes.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/gfx/sponnerkiller.png", nme.NME_assets_gfx_sponnerkiller_png);
			type.set ("assets/gfx/sponnerkiller.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/gfx/template_tiles.png", nme.NME_assets_gfx_template_tiles_png);
			type.set ("assets/gfx/template_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/gfx/time++.png", nme.NME_assets_gfx_time___png);
			type.set ("assets/gfx/time++.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/gfx/vertkiller.png", nme.NME_assets_gfx_vertkiller_png);
			type.set ("assets/gfx/vertkiller.png", Reflect.field (AssetType, "image".toUpperCase ()));
			className.set ("assets/HaxeFlixel.svg", nme.NME_assets_haxeflixel_svg);
			type.set ("assets/HaxeFlixel.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_1_baddies.csv", nme.NME_assets_maps_template_mapcsv_map_1_baddies_csv);
			type.set ("assets/maps/template/mapCSV_map_1_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_1_bg.csv", nme.NME_assets_maps_template_mapcsv_map_1_bg_csv);
			type.set ("assets/maps/template/mapCSV_map_1_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_1_entities.csv", nme.NME_assets_maps_template_mapcsv_map_1_entities_csv);
			type.set ("assets/maps/template/mapCSV_map_1_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_1_tiles.csv", nme.NME_assets_maps_template_mapcsv_map_1_tiles_csv);
			type.set ("assets/maps/template/mapCSV_map_1_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_2_baddies.csv", nme.NME_assets_maps_template_mapcsv_map_2_baddies_csv);
			type.set ("assets/maps/template/mapCSV_map_2_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_2_bg.csv", nme.NME_assets_maps_template_mapcsv_map_2_bg_csv);
			type.set ("assets/maps/template/mapCSV_map_2_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_2_entities.csv", nme.NME_assets_maps_template_mapcsv_map_2_entities_csv);
			type.set ("assets/maps/template/mapCSV_map_2_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_2_tiles.csv", nme.NME_assets_maps_template_mapcsv_map_2_tiles_csv);
			type.set ("assets/maps/template/mapCSV_map_2_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_3_baddies.csv", nme.NME_assets_maps_template_mapcsv_map_3_baddies_csv);
			type.set ("assets/maps/template/mapCSV_map_3_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_3_bg.csv", nme.NME_assets_maps_template_mapcsv_map_3_bg_csv);
			type.set ("assets/maps/template/mapCSV_map_3_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_3_entities.csv", nme.NME_assets_maps_template_mapcsv_map_3_entities_csv);
			type.set ("assets/maps/template/mapCSV_map_3_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_3_tiles.csv", nme.NME_assets_maps_template_mapcsv_map_3_tiles_csv);
			type.set ("assets/maps/template/mapCSV_map_3_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_4_baddies.csv", nme.NME_assets_maps_template_mapcsv_map_4_baddies_csv);
			type.set ("assets/maps/template/mapCSV_map_4_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_4_bg.csv", nme.NME_assets_maps_template_mapcsv_map_4_bg_csv);
			type.set ("assets/maps/template/mapCSV_map_4_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_4_entities.csv", nme.NME_assets_maps_template_mapcsv_map_4_entities_csv);
			type.set ("assets/maps/template/mapCSV_map_4_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_4_tiles.csv", nme.NME_assets_maps_template_mapcsv_map_4_tiles_csv);
			type.set ("assets/maps/template/mapCSV_map_4_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_5_baddies.csv", nme.NME_assets_maps_template_mapcsv_map_5_baddies_csv);
			type.set ("assets/maps/template/mapCSV_map_5_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_5_bg.csv", nme.NME_assets_maps_template_mapcsv_map_5_bg_csv);
			type.set ("assets/maps/template/mapCSV_map_5_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_5_entities.csv", nme.NME_assets_maps_template_mapcsv_map_5_entities_csv);
			type.set ("assets/maps/template/mapCSV_map_5_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_5_tiles.csv", nme.NME_assets_maps_template_mapcsv_map_5_tiles_csv);
			type.set ("assets/maps/template/mapCSV_map_5_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_6_baddies.csv", nme.NME_assets_maps_template_mapcsv_map_6_baddies_csv);
			type.set ("assets/maps/template/mapCSV_map_6_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_6_bg.csv", nme.NME_assets_maps_template_mapcsv_map_6_bg_csv);
			type.set ("assets/maps/template/mapCSV_map_6_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_6_entities.csv", nme.NME_assets_maps_template_mapcsv_map_6_entities_csv);
			type.set ("assets/maps/template/mapCSV_map_6_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_6_tiles.csv", nme.NME_assets_maps_template_mapcsv_map_6_tiles_csv);
			type.set ("assets/maps/template/mapCSV_map_6_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_7_baddies.csv", nme.NME_assets_maps_template_mapcsv_map_7_baddies_csv);
			type.set ("assets/maps/template/mapCSV_map_7_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_7_bg.csv", nme.NME_assets_maps_template_mapcsv_map_7_bg_csv);
			type.set ("assets/maps/template/mapCSV_map_7_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_7_entities.csv", nme.NME_assets_maps_template_mapcsv_map_7_entities_csv);
			type.set ("assets/maps/template/mapCSV_map_7_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_7_tiles.csv", nme.NME_assets_maps_template_mapcsv_map_7_tiles_csv);
			type.set ("assets/maps/template/mapCSV_map_7_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_8_baddies.csv", nme.NME_assets_maps_template_mapcsv_map_8_baddies_csv);
			type.set ("assets/maps/template/mapCSV_map_8_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_8_bg.csv", nme.NME_assets_maps_template_mapcsv_map_8_bg_csv);
			type.set ("assets/maps/template/mapCSV_map_8_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_8_entities.csv", nme.NME_assets_maps_template_mapcsv_map_8_entities_csv);
			type.set ("assets/maps/template/mapCSV_map_8_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_8_tiles.csv", nme.NME_assets_maps_template_mapcsv_map_8_tiles_csv);
			type.set ("assets/maps/template/mapCSV_map_8_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_9_baddies.csv", nme.NME_assets_maps_template_mapcsv_map_9_baddies_csv);
			type.set ("assets/maps/template/mapCSV_map_9_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_9_bg.csv", nme.NME_assets_maps_template_mapcsv_map_9_bg_csv);
			type.set ("assets/maps/template/mapCSV_map_9_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_9_entities.csv", nme.NME_assets_maps_template_mapcsv_map_9_entities_csv);
			type.set ("assets/maps/template/mapCSV_map_9_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_map_9_tiles.csv", nme.NME_assets_maps_template_mapcsv_map_9_tiles_csv);
			type.set ("assets/maps/template/mapCSV_map_9_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_template_map_baddies.csv", nme.NME_assets_maps_template_mapcsv_template_map_baddies_csv);
			type.set ("assets/maps/template/mapCSV_template_map_baddies.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_template_map_bg.csv", nme.NME_assets_maps_template_mapcsv_template_map_bg_csv);
			type.set ("assets/maps/template/mapCSV_template_map_bg.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_template_map_entities.csv", nme.NME_assets_maps_template_mapcsv_template_map_entities_csv);
			type.set ("assets/maps/template/mapCSV_template_map_entities.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/mapCSV_template_map_tiles.csv", nme.NME_assets_maps_template_mapcsv_template_map_tiles_csv);
			type.set ("assets/maps/template/mapCSV_template_map_tiles.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_1.dam", nme.NME_assets_maps_template_map_1_dam);
			type.set ("assets/maps/template/map_1.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_1.dam.bak", nme.NME_assets_maps_template_map_1_dam_bak);
			type.set ("assets/maps/template/map_1.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_2.dam", nme.NME_assets_maps_template_map_2_dam);
			type.set ("assets/maps/template/map_2.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_2.dam.bak", nme.NME_assets_maps_template_map_2_dam_bak);
			type.set ("assets/maps/template/map_2.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_3.dam", nme.NME_assets_maps_template_map_3_dam);
			type.set ("assets/maps/template/map_3.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_3.dam.bak", nme.NME_assets_maps_template_map_3_dam_bak);
			type.set ("assets/maps/template/map_3.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_4.dam", nme.NME_assets_maps_template_map_4_dam);
			type.set ("assets/maps/template/map_4.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_4.dam.bak", nme.NME_assets_maps_template_map_4_dam_bak);
			type.set ("assets/maps/template/map_4.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_5.dam", nme.NME_assets_maps_template_map_5_dam);
			type.set ("assets/maps/template/map_5.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_5.dam.bak", nme.NME_assets_maps_template_map_5_dam_bak);
			type.set ("assets/maps/template/map_5.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_6.dam", nme.NME_assets_maps_template_map_6_dam);
			type.set ("assets/maps/template/map_6.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_6.dam.bak", nme.NME_assets_maps_template_map_6_dam_bak);
			type.set ("assets/maps/template/map_6.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_7.dam", nme.NME_assets_maps_template_map_7_dam);
			type.set ("assets/maps/template/map_7.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_7.dam.bak", nme.NME_assets_maps_template_map_7_dam_bak);
			type.set ("assets/maps/template/map_7.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_8.dam", nme.NME_assets_maps_template_map_8_dam);
			type.set ("assets/maps/template/map_8.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_8.dam.bak", nme.NME_assets_maps_template_map_8_dam_bak);
			type.set ("assets/maps/template/map_8.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_9.dam", nme.NME_assets_maps_template_map_9_dam);
			type.set ("assets/maps/template/map_9.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/map_9.dam.bak", nme.NME_assets_maps_template_map_9_dam_bak);
			type.set ("assets/maps/template/map_9.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/template_map.dam", nme.NME_assets_maps_template_template_map_dam);
			type.set ("assets/maps/template/template_map.dam", Reflect.field (AssetType, "text".toUpperCase ()));
			className.set ("assets/maps/template/template_map.dam.bak", nme.NME_assets_maps_template_template_map_dam_bak);
			type.set ("assets/maps/template/template_map.dam.bak", Reflect.field (AssetType, "text".toUpperCase ()));
			
			
			initialized = true;
			
		}
		
	}
	
	
}


class NME_assets_data_beep_mp3 extends flash.media.Sound { }
class NME_assets_data_autotiles_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_autotiles_alt_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_base_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_beep_mp4 extends flash.media.Sound { }
class NME_assets_data_button_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_a_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_b_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_c_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_down_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_left_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_right_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_up_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_x_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_y_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_courier_ttf extends flash.text.Font { }
class NME_assets_data_cursor_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_default_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_fontdata10pt_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_fontdata11pt_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_handle_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_corners_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_light_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_nokiafc22_ttf extends flash.text.Font { }
class NME_assets_data_stick_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_flixel_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_open_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_pause_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_play_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_record_off_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_record_on_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_restart_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_step_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_stop_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vis_bounds_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_gfx_bg_tile_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_gfx_coin_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_gfx_coin_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_gfx_horizkiller_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_gfx_horizontalkiller_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_gfx_mapeditor_entities_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_gfx_outdoor_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_gfx_platformer_player_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_gfx_player_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_gfx_spikes_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_gfx_sponnerkiller_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_gfx_template_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_gfx_time___png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_gfx_vertkiller_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_haxeflixel_svg extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_1_baddies_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_1_bg_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_1_entities_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_1_tiles_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_2_baddies_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_2_bg_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_2_entities_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_2_tiles_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_3_baddies_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_3_bg_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_3_entities_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_3_tiles_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_4_baddies_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_4_bg_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_4_entities_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_4_tiles_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_5_baddies_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_5_bg_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_5_entities_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_5_tiles_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_6_baddies_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_6_bg_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_6_entities_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_6_tiles_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_7_baddies_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_7_bg_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_7_entities_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_7_tiles_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_8_baddies_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_8_bg_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_8_entities_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_8_tiles_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_9_baddies_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_9_bg_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_9_entities_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_map_9_tiles_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_template_map_baddies_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_template_map_bg_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_template_map_entities_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_mapcsv_template_map_tiles_csv extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_1_dam extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_1_dam_bak extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_2_dam extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_2_dam_bak extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_3_dam extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_3_dam_bak extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_4_dam extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_4_dam_bak extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_5_dam extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_5_dam_bak extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_6_dam extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_6_dam_bak extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_7_dam extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_7_dam_bak extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_8_dam extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_8_dam_bak extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_9_dam extends flash.utils.ByteArray { }
class NME_assets_maps_template_map_9_dam_bak extends flash.utils.ByteArray { }
class NME_assets_maps_template_template_map_dam extends flash.utils.ByteArray { }
class NME_assets_maps_template_template_map_dam_bak extends flash.utils.ByteArray { }
