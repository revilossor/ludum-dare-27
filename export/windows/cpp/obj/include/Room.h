#ifndef INCLUDED_Room
#define INCLUDED_Room

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxGroup.h>
HX_DECLARE_CLASS0(Room)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxTilemap)
HX_DECLARE_CLASS2(org,flixel,FlxTypedGroup)


class HXCPP_CLASS_ATTRIBUTES  Room_obj : public ::org::flixel::FlxGroup_obj{
	public:
		typedef ::org::flixel::FlxGroup_obj super;
		typedef Room_obj OBJ_;
		Room_obj();
		Void __construct(hx::Null< int >  __o_i);

	public:
		static hx::ObjectPtr< Room_obj > __new(hx::Null< int >  __o_i);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Room_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Room"); }

		virtual Float get_height( );
		Dynamic get_height_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		virtual ::org::flixel::FlxTilemap get__tiles( );
		Dynamic get__tiles_dyn();

		virtual Void update( );

		virtual Void destroy( );

		virtual Void addItems( );
		Dynamic addItems_dyn();

		Float height;
		Float width;
		int index;
		::org::flixel::FlxTilemap _tiles;
};


#endif /* INCLUDED_Room */ 
