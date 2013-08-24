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
		static ::String map_1;
		static ::String template_entities;
		static ::String template_room;
		static ::String template_doors;
		static ::String player_sprite;
		static ::String door;
};


#endif /* INCLUDED_Resourses */ 
