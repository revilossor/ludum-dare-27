#ifndef INCLUDED_entities_Spikes
#define INCLUDED_entities_Spikes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxSprite.h>
HX_DECLARE_CLASS1(entities,Spikes)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Spikes_obj : public ::org::flixel::FlxSprite_obj{
	public:
		typedef ::org::flixel::FlxSprite_obj super;
		typedef Spikes_obj OBJ_;
		Spikes_obj();
		Void __construct(Float xp,Float yp);

	public:
		static hx::ObjectPtr< Spikes_obj > __new(Float xp,Float yp);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Spikes_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Spikes"); }

		::String type;
};

} // end namespace entities

#endif /* INCLUDED_entities_Spikes */ 
