#ifndef INCLUDED_Util
#define INCLUDED_Util

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Util)


class HXCPP_CLASS_ATTRIBUTES  Util_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Util_obj OBJ_;
		Util_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Util_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Util_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Util"); }

		static Void log( Dynamic from,::String message);
		static Dynamic log_dyn();

};


#endif /* INCLUDED_Util */ 
