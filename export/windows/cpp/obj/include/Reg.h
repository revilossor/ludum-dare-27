#ifndef INCLUDED_Reg
#define INCLUDED_Reg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Reg)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(org,flixel,FlxSave)


class HXCPP_CLASS_ATTRIBUTES  Reg_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Reg_obj OBJ_;
		Reg_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Reg_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Reg_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Reg"); }

		static Dynamic levels;
		static int level;
		static Dynamic scores;
		static int score;
		static Array< ::Dynamic > saves;
		static ::org::flixel::FlxSave save;
		static Array< ::Dynamic > startPositions;
		static Array< ::Dynamic > doorPositions;
		static int roomIndex;
};


#endif /* INCLUDED_Reg */ 
