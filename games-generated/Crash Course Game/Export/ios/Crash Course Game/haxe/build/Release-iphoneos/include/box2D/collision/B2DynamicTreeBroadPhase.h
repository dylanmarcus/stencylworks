#ifndef INCLUDED_box2D_collision_B2DynamicTreeBroadPhase
#define INCLUDED_box2D_collision_B2DynamicTreeBroadPhase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <box2D/collision/IBroadPhase.h>
HX_DECLARE_CLASS2(box2D,collision,B2AABB)
HX_DECLARE_CLASS2(box2D,collision,B2DynamicTree)
HX_DECLARE_CLASS2(box2D,collision,B2DynamicTreeBroadPhase)
HX_DECLARE_CLASS2(box2D,collision,B2DynamicTreeNode)
HX_DECLARE_CLASS2(box2D,collision,B2DynamicTreePair)
HX_DECLARE_CLASS2(box2D,collision,B2RayCastInput)
HX_DECLARE_CLASS2(box2D,collision,IBroadPhase)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
namespace box2D{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES  B2DynamicTreeBroadPhase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef B2DynamicTreeBroadPhase_obj OBJ_;
		B2DynamicTreeBroadPhase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< B2DynamicTreeBroadPhase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~B2DynamicTreeBroadPhase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::box2D::collision::IBroadPhase_obj *()
			{ return new ::box2D::collision::IBroadPhase_delegate_< B2DynamicTreeBroadPhase_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("B2DynamicTreeBroadPhase"); }

		int m_pairCount;
		Array< ::Dynamic > m_pairBuffer;
		Array< ::Dynamic > m_moveBuffer;
		int m_proxyCount;
		::box2D::collision::B2DynamicTree m_tree;
		virtual int comparePairs( ::box2D::collision::B2DynamicTreePair pair1,::box2D::collision::B2DynamicTreePair pair2);
		Dynamic comparePairs_dyn();

		virtual Void unBufferMove( ::box2D::collision::B2DynamicTreeNode proxy);
		Dynamic unBufferMove_dyn();

		virtual Void bufferMove( ::box2D::collision::B2DynamicTreeNode proxy);
		Dynamic bufferMove_dyn();

		virtual Void rebalance( int iterations);
		Dynamic rebalance_dyn();

		virtual Void validate( );
		Dynamic validate_dyn();

		virtual Void rayCast( Dynamic callbackMethod,::box2D::collision::B2RayCastInput input);
		Dynamic rayCast_dyn();

		virtual Void query( Dynamic callbackMethod,::box2D::collision::B2AABB aabb);
		Dynamic query_dyn();

		virtual Void updatePairs( Dynamic callbackMethod);
		Dynamic updatePairs_dyn();

		virtual int getProxyCount( );
		Dynamic getProxyCount_dyn();

		virtual ::box2D::collision::B2AABB getFatAABB( Dynamic proxy);
		Dynamic getFatAABB_dyn();

		virtual Dynamic getUserData( Dynamic proxy);
		Dynamic getUserData_dyn();

		virtual bool testOverlap( Dynamic proxyA,Dynamic proxyB);
		Dynamic testOverlap_dyn();

		virtual Void moveProxy( Dynamic proxy,::box2D::collision::B2AABB aabb,::box2D::common::math::B2Vec2 displacement);
		Dynamic moveProxy_dyn();

		virtual Void destroyProxy( Dynamic proxy);
		Dynamic destroyProxy_dyn();

		virtual Dynamic createProxy( ::box2D::collision::B2AABB aabb,Dynamic userData);
		Dynamic createProxy_dyn();

};

} // end namespace box2D
} // end namespace collision

#endif /* INCLUDED_box2D_collision_B2DynamicTreeBroadPhase */ 
