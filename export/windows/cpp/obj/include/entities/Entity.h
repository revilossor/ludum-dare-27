#ifndef INCLUDED_entities_Entity
#define INCLUDED_entities_Entity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxSprite.h>
HX_DECLARE_CLASS1(entities,Entity)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Entity_obj : public ::org::flixel::FlxSprite_obj{
	public:
		typedef ::org::flixel::FlxSprite_obj super;
		typedef Entity_obj OBJ_;
		Entity_obj();
		Void __construct(Float xp,Float yp);

	public:
		static hx::ObjectPtr< Entity_obj > __new(Float xp,Float yp);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Entity_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Entity"); }

		virtual ::org::flixel::util::FlxPoint magnify( ::org::flixel::util::FlxPoint v,Float m);
		Dynamic magnify_dyn();

		virtual ::org::flixel::util::FlxPoint getUnit( ::org::flixel::util::FlxPoint v);
		Dynamic getUnit_dyn();

		virtual Float getMagnitudeSq( ::org::flixel::util::FlxPoint v);
		Dynamic getMagnitudeSq_dyn();

		virtual Float getMagnitude( ::org::flixel::util::FlxPoint v);
		Dynamic getMagnitude_dyn();

		virtual Float getDistanceBetween( ::org::flixel::util::FlxPoint a,::org::flixel::util::FlxPoint b);
		Dynamic getDistanceBetween_dyn();

		virtual ::org::flixel::util::FlxPoint getBetween( ::org::flixel::util::FlxPoint a,::org::flixel::util::FlxPoint b);
		Dynamic getBetween_dyn();

		virtual ::org::flixel::util::FlxPoint getUnitBetween( ::org::flixel::util::FlxPoint a,::org::flixel::util::FlxPoint b);
		Dynamic getUnitBetween_dyn();

		virtual ::org::flixel::util::FlxPoint mulEq( ::org::flixel::util::FlxPoint a,::org::flixel::util::FlxPoint b);
		Dynamic mulEq_dyn();

		virtual ::org::flixel::util::FlxPoint divEq( ::org::flixel::util::FlxPoint a,::org::flixel::util::FlxPoint b);
		Dynamic divEq_dyn();

		virtual ::org::flixel::util::FlxPoint subEq( ::org::flixel::util::FlxPoint a,::org::flixel::util::FlxPoint b);
		Dynamic subEq_dyn();

		virtual ::org::flixel::util::FlxPoint addEq( ::org::flixel::util::FlxPoint a,::org::flixel::util::FlxPoint b);
		Dynamic addEq_dyn();

		virtual ::org::flixel::util::FlxPoint fleeAtSpeed( ::org::flixel::util::FlxPoint e,::org::flixel::util::FlxPoint t,Float s);
		Dynamic fleeAtSpeed_dyn();

		virtual ::org::flixel::util::FlxPoint seekAtSpeed( ::org::flixel::util::FlxPoint e,::org::flixel::util::FlxPoint t,Float s);
		Dynamic seekAtSpeed_dyn();

		virtual ::org::flixel::util::FlxPoint flee( ::org::flixel::util::FlxPoint e,::org::flixel::util::FlxPoint t);
		Dynamic flee_dyn();

		virtual ::org::flixel::util::FlxPoint seek( ::org::flixel::util::FlxPoint e,::org::flixel::util::FlxPoint t);
		Dynamic seek_dyn();

		Float speed;
		::String type;
};

} // end namespace entities

#endif /* INCLUDED_entities_Entity */ 
