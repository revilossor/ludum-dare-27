#ifndef INCLUDED_entities_KillingEntity
#define INCLUDED_entities_KillingEntity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <entities/Entity.h>
HX_DECLARE_CLASS1(entities,Entity)
HX_DECLARE_CLASS1(entities,KillingEntity)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  KillingEntity_obj : public ::entities::Entity_obj{
	public:
		typedef ::entities::Entity_obj super;
		typedef KillingEntity_obj OBJ_;
		KillingEntity_obj();
		Void __construct(Float xp,Float yp);

	public:
		static hx::ObjectPtr< KillingEntity_obj > __new(Float xp,Float yp);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~KillingEntity_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("KillingEntity"); }

		virtual Void update( );

};

} // end namespace entities

#endif /* INCLUDED_entities_KillingEntity */ 
