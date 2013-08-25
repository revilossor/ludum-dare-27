#ifndef INCLUDED_Resourses
#define INCLUDED_Resourses

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Resourses)


class HXCPP_CLASS_ATTRIBUTES  Resourses_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Resourses_obj OBJ_;
		Resourses_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Resourses_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Resourses_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Resourses"); }

		static ::String template_tiles;
		static ::String bg_tiles;
		static ::String template_entities;
		static ::String template_baddies;
		static ::String map_1;
		static ::String map_1_entities;
		static ::String map_1_baddies;
		static ::String map_2_tiles;
		static ::String map_2_coins;
		static ::String map_2_baddies;
		static ::String map_3_tiles;
		static ::String map_3_coins;
		static ::String map_3_baddies;
		static ::String map_4_tiles;
		static ::String map_4_coins;
		static ::String map_4_baddies;
		static ::String map_5_tiles;
		static ::String map_5_coins;
		static ::String map_5_baddies;
		static ::String map_6_tiles;
		static ::String map_6_coins;
		static ::String map_6_baddies;
		static ::String map_7_tiles;
		static ::String map_7_coins;
		static ::String map_7_baddies;
		static ::String map_8_tiles;
		static ::String map_8_coins;
		static ::String map_8_baddies;
		static ::String map_9_tiles;
		static ::String map_9_coins;
		static ::String map_9_baddies;
		static ::String template_map_bg;
		static ::String map_1_bg;
		static ::String map_2_bg;
		static ::String map_3_bg;
		static ::String map_4_bg;
		static ::String map_5_bg;
		static ::String map_6_bg;
		static ::String map_7_bg;
		static ::String map_8_bg;
		static ::String map_9_bg;
		static ::String template_room;
		static ::String template_doors;
		static ::String door;
		static ::String coin;
		static ::String spikes;
		static ::String horizontalkiller;
		static ::String spinnerseeker;
		static ::String hflip;
		static ::String vflip;
		static ::String player_sprite;
		static ::String tpp;
};


#endif /* INCLUDED_Resourses */ 
