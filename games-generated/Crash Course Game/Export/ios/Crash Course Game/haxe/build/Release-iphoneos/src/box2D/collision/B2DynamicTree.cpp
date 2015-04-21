#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2AABB
#include <box2D/collision/B2AABB.h>
#endif
#ifndef INCLUDED_box2D_collision_B2DynamicTree
#include <box2D/collision/B2DynamicTree.h>
#endif
#ifndef INCLUDED_box2D_collision_B2DynamicTreeNode
#include <box2D/collision/B2DynamicTreeNode.h>
#endif
#ifndef INCLUDED_box2D_collision_B2RayCastInput
#include <box2D/collision/B2RayCastInput.h>
#endif
#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Math
#include <box2D/common/math/B2Math.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace box2D{
namespace collision{

Void B2DynamicTree_obj::__construct()
{
HX_STACK_PUSH("B2DynamicTree::new","box2D/collision/B2DynamicTree.hx",43);
{
	HX_STACK_LINE(44)
	this->m_root = null();
	HX_STACK_LINE(47)
	this->m_freeList = null();
	HX_STACK_LINE(48)
	this->m_path = (int)0;
	HX_STACK_LINE(50)
	this->m_insertionCount = (int)0;
}
;
	return null();
}

B2DynamicTree_obj::~B2DynamicTree_obj() { }

Dynamic B2DynamicTree_obj::__CreateEmpty() { return  new B2DynamicTree_obj; }
hx::ObjectPtr< B2DynamicTree_obj > B2DynamicTree_obj::__new()
{  hx::ObjectPtr< B2DynamicTree_obj > result = new B2DynamicTree_obj();
	result->__construct();
	return result;}

Dynamic B2DynamicTree_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2DynamicTree_obj > result = new B2DynamicTree_obj();
	result->__construct();
	return result;}

Void B2DynamicTree_obj::removeLeaf( ::box2D::collision::B2DynamicTreeNode leaf){
{
		HX_STACK_PUSH("B2DynamicTree::removeLeaf","box2D/collision/B2DynamicTree.hx",415);
		HX_STACK_THIS(this);
		HX_STACK_ARG(leaf,"leaf");
		HX_STACK_LINE(416)
		if (((leaf == this->m_root))){
			HX_STACK_LINE(418)
			this->m_root = null();
			HX_STACK_LINE(419)
			return null();
		}
		HX_STACK_LINE(422)
		::box2D::collision::B2DynamicTreeNode node2 = leaf->parent;		HX_STACK_VAR(node2,"node2");
		HX_STACK_LINE(423)
		::box2D::collision::B2DynamicTreeNode node1 = node2->parent;		HX_STACK_VAR(node1,"node1");
		HX_STACK_LINE(424)
		::box2D::collision::B2DynamicTreeNode sibling;		HX_STACK_VAR(sibling,"sibling");
		HX_STACK_LINE(425)
		if (((node2->child1 == leaf))){
			HX_STACK_LINE(426)
			sibling = node2->child2;
		}
		else{
			HX_STACK_LINE(430)
			sibling = node2->child1;
		}
		HX_STACK_LINE(434)
		if (((node1 != null()))){
			HX_STACK_LINE(437)
			if (((node1->child1 == node2))){
				HX_STACK_LINE(438)
				node1->child1 = sibling;
			}
			else{
				HX_STACK_LINE(442)
				node1->child2 = sibling;
			}
			HX_STACK_LINE(445)
			sibling->parent = node1;
			HX_STACK_LINE(446)
			this->freeNode(node2);
			HX_STACK_LINE(449)
			while(((node1 != null()))){
				HX_STACK_LINE(451)
				::box2D::collision::B2AABB oldAABB = node1->aabb;		HX_STACK_VAR(oldAABB,"oldAABB");
				HX_STACK_LINE(453)
				node1->aabb = ::box2D::collision::B2AABB_obj::__new();
				HX_STACK_LINE(454)
				node1->aabb->combine(node1->child1->aabb,node1->child2->aabb);
				HX_STACK_LINE(456)
				if ((oldAABB->contains(node1->aabb))){
					HX_STACK_LINE(457)
					break;
				}
				HX_STACK_LINE(459)
				node1 = node1->parent;
			}
		}
		else{
			HX_STACK_LINE(464)
			this->m_root = sibling;
			HX_STACK_LINE(465)
			sibling->parent = null();
			HX_STACK_LINE(466)
			this->freeNode(node2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2DynamicTree_obj,removeLeaf,(void))

Void B2DynamicTree_obj::insertLeaf( ::box2D::collision::B2DynamicTreeNode leaf){
{
		HX_STACK_PUSH("B2DynamicTree::insertLeaf","box2D/collision/B2DynamicTree.hx",332);
		HX_STACK_THIS(this);
		HX_STACK_ARG(leaf,"leaf");
		HX_STACK_LINE(333)
		++(this->m_insertionCount);
		HX_STACK_LINE(335)
		if (((this->m_root == null()))){
			HX_STACK_LINE(337)
			this->m_root = leaf;
			HX_STACK_LINE(338)
			this->m_root->parent = null();
			HX_STACK_LINE(339)
			return null();
		}
		HX_STACK_LINE(342)
		::box2D::common::math::B2Vec2 center = leaf->aabb->getCenter();		HX_STACK_VAR(center,"center");
		HX_STACK_LINE(343)
		::box2D::collision::B2DynamicTreeNode sibling = this->m_root;		HX_STACK_VAR(sibling,"sibling");
		HX_STACK_LINE(344)
		if (((sibling->isLeaf() == false))){
			HX_STACK_LINE(345)
			do{
				HX_STACK_LINE(348)
				::box2D::collision::B2DynamicTreeNode child1 = sibling->child1;		HX_STACK_VAR(child1,"child1");
				HX_STACK_LINE(349)
				::box2D::collision::B2DynamicTreeNode child2 = sibling->child2;		HX_STACK_VAR(child2,"child2");
				HX_STACK_LINE(356)
				Float norm1 = (::Math_obj::abs(((Float(((child1->aabb->lowerBound->x + child1->aabb->upperBound->x))) / Float((int)2)) - center->x)) + ::Math_obj::abs(((Float(((child1->aabb->lowerBound->y + child1->aabb->upperBound->y))) / Float((int)2)) - center->y)));		HX_STACK_VAR(norm1,"norm1");
				HX_STACK_LINE(358)
				Float norm2 = (::Math_obj::abs(((Float(((child2->aabb->lowerBound->x + child2->aabb->upperBound->x))) / Float((int)2)) - center->x)) + ::Math_obj::abs(((Float(((child2->aabb->lowerBound->y + child2->aabb->upperBound->y))) / Float((int)2)) - center->y)));		HX_STACK_VAR(norm2,"norm2");
				HX_STACK_LINE(361)
				if (((norm1 < norm2))){
					HX_STACK_LINE(362)
					sibling = child1;
				}
				else{
					HX_STACK_LINE(364)
					sibling = child2;
				}
			}
while(((sibling->isLeaf() == false)));
		}
		HX_STACK_LINE(372)
		::box2D::collision::B2DynamicTreeNode node1 = sibling->parent;		HX_STACK_VAR(node1,"node1");
		HX_STACK_LINE(373)
		::box2D::collision::B2DynamicTreeNode node2 = this->allocateNode();		HX_STACK_VAR(node2,"node2");
		HX_STACK_LINE(374)
		node2->parent = node1;
		HX_STACK_LINE(375)
		node2->userData = null();
		HX_STACK_LINE(376)
		node2->aabb->combine(leaf->aabb,sibling->aabb);
		HX_STACK_LINE(377)
		if (((node1 != null()))){
			HX_STACK_LINE(379)
			if (((sibling->parent->child1 == sibling))){
				HX_STACK_LINE(380)
				node1->child1 = node2;
			}
			else{
				HX_STACK_LINE(384)
				node1->child2 = node2;
			}
			HX_STACK_LINE(388)
			node2->child1 = sibling;
			HX_STACK_LINE(389)
			node2->child2 = leaf;
			HX_STACK_LINE(390)
			sibling->parent = node2;
			HX_STACK_LINE(391)
			leaf->parent = node2;
			HX_STACK_LINE(392)
			do{
				HX_STACK_LINE(394)
				if ((node1->aabb->contains(node2->aabb))){
					HX_STACK_LINE(395)
					break;
				}
				HX_STACK_LINE(397)
				node1->aabb->combine(node1->child1->aabb,node1->child2->aabb);
				HX_STACK_LINE(398)
				node2 = node1;
				HX_STACK_LINE(399)
				node1 = node1->parent;
			}
while(((node1 != null())));
		}
		else{
			HX_STACK_LINE(405)
			node2->child1 = sibling;
			HX_STACK_LINE(406)
			node2->child2 = leaf;
			HX_STACK_LINE(407)
			sibling->parent = node2;
			HX_STACK_LINE(408)
			leaf->parent = node2;
			HX_STACK_LINE(409)
			this->m_root = node2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2DynamicTree_obj,insertLeaf,(void))

Void B2DynamicTree_obj::freeNode( ::box2D::collision::B2DynamicTreeNode node){
{
		HX_STACK_PUSH("B2DynamicTree::freeNode","box2D/collision/B2DynamicTree.hx",326);
		HX_STACK_THIS(this);
		HX_STACK_ARG(node,"node");
		HX_STACK_LINE(327)
		node->parent = this->m_freeList;
		HX_STACK_LINE(328)
		this->m_freeList = node;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2DynamicTree_obj,freeNode,(void))

::box2D::collision::B2DynamicTreeNode B2DynamicTree_obj::allocateNode( ){
	HX_STACK_PUSH("B2DynamicTree::allocateNode","box2D/collision/B2DynamicTree.hx",308);
	HX_STACK_THIS(this);
	HX_STACK_LINE(310)
	if (((this->m_freeList != null()))){
		HX_STACK_LINE(312)
		::box2D::collision::B2DynamicTreeNode node = this->m_freeList;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(313)
		this->m_freeList = node->parent;
		HX_STACK_LINE(314)
		node->parent = null();
		HX_STACK_LINE(315)
		node->child1 = null();
		HX_STACK_LINE(316)
		node->child2 = null();
		HX_STACK_LINE(317)
		return node;
	}
	HX_STACK_LINE(322)
	return ::box2D::collision::B2DynamicTreeNode_obj::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(B2DynamicTree_obj,allocateNode,return )

Void B2DynamicTree_obj::rayCast( Dynamic callbackMethod,::box2D::collision::B2RayCastInput input){
{
		HX_STACK_PUSH("B2DynamicTree::rayCast","box2D/collision/B2DynamicTree.hx",222);
		HX_STACK_THIS(this);
		HX_STACK_ARG(callbackMethod,"callbackMethod");
		HX_STACK_ARG(input,"input");
		HX_STACK_LINE(223)
		if (((this->m_root == null()))){
			HX_STACK_LINE(224)
			return null();
		}
		HX_STACK_LINE(226)
		::box2D::common::math::B2Vec2 p1 = input->p1;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(227)
		::box2D::common::math::B2Vec2 p2 = input->p2;		HX_STACK_VAR(p2,"p2");
		HX_STACK_LINE(228)
		::box2D::common::math::B2Vec2 r = ::box2D::common::math::B2Math_obj::subtractVVPooled(p1,p2);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(230)
		r->normalize();
		HX_STACK_LINE(233)
		::box2D::common::math::B2Vec2 v = ::box2D::common::math::B2Math_obj::crossFV(1.0,r,null());		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(234)
		::box2D::common::math::B2Vec2 abs_v = ::box2D::common::math::B2Math_obj::absV(v);		HX_STACK_VAR(abs_v,"abs_v");
		HX_STACK_LINE(236)
		Float maxFraction = input->maxFraction;		HX_STACK_VAR(maxFraction,"maxFraction");
		HX_STACK_LINE(239)
		::box2D::collision::B2AABB segmentAABB = ::box2D::collision::B2AABB_obj::__new();		HX_STACK_VAR(segmentAABB,"segmentAABB");
		HX_STACK_LINE(240)
		Float tX;		HX_STACK_VAR(tX,"tX");
		HX_STACK_LINE(241)
		Float tY;		HX_STACK_VAR(tY,"tY");
		HX_STACK_LINE(242)
		{
			HX_STACK_LINE(243)
			tX = (p1->x + (maxFraction * ((p2->x - p1->x))));
			HX_STACK_LINE(244)
			tY = (p1->y + (maxFraction * ((p2->y - p1->y))));
			HX_STACK_LINE(245)
			segmentAABB->lowerBound->x = ::Math_obj::min(p1->x,tX);
			HX_STACK_LINE(246)
			segmentAABB->lowerBound->y = ::Math_obj::min(p1->y,tY);
			HX_STACK_LINE(247)
			segmentAABB->upperBound->x = ::Math_obj::max(p1->x,tX);
			HX_STACK_LINE(248)
			segmentAABB->upperBound->y = ::Math_obj::max(p1->y,tY);
		}
		HX_STACK_LINE(251)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(253)
		int count = (int)0;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(254)
		stack[(count)++] = this->m_root;
		HX_STACK_LINE(256)
		while(((count > (int)0))){
			HX_STACK_LINE(258)
			::box2D::collision::B2DynamicTreeNode node = stack->__get(--(count)).StaticCast< ::box2D::collision::B2DynamicTreeNode >();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(260)
			if (((node->aabb->testOverlap(segmentAABB) == false))){
				HX_STACK_LINE(261)
				continue;
			}
			HX_STACK_LINE(268)
			::box2D::common::math::B2Vec2 c = node->aabb->getCenter();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(269)
			::box2D::common::math::B2Vec2 h = node->aabb->getExtents();		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(270)
			Float separation = ((::Math_obj::abs(((v->x * ((p1->x - c->x))) + (v->y * ((p1->y - c->y))))) - (abs_v->x * h->x)) - (abs_v->y * h->y));		HX_STACK_VAR(separation,"separation");
			HX_STACK_LINE(272)
			if (((separation > 0.0))){
				HX_STACK_LINE(273)
				continue;
			}
			HX_STACK_LINE(275)
			if ((node->isLeaf())){
				HX_STACK_LINE(277)
				::box2D::collision::B2RayCastInput subInput = ::box2D::collision::B2RayCastInput_obj::__new(null(),null(),null());		HX_STACK_VAR(subInput,"subInput");
				HX_STACK_LINE(278)
				subInput->p1 = input->p1;
				HX_STACK_LINE(279)
				subInput->p2 = input->p2;
				HX_STACK_LINE(280)
				subInput->maxFraction = input->maxFraction;
				HX_STACK_LINE(282)
				maxFraction = callbackMethod(subInput,node);
				HX_STACK_LINE(284)
				if (((maxFraction == 0.0))){
					HX_STACK_LINE(285)
					return null();
				}
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(289)
					tX = (p1->x + (maxFraction * ((p2->x - p1->x))));
					HX_STACK_LINE(290)
					tY = (p1->y + (maxFraction * ((p2->y - p1->y))));
					HX_STACK_LINE(291)
					segmentAABB->lowerBound->x = ::Math_obj::min(p1->x,tX);
					HX_STACK_LINE(292)
					segmentAABB->lowerBound->y = ::Math_obj::min(p1->y,tY);
					HX_STACK_LINE(293)
					segmentAABB->upperBound->x = ::Math_obj::max(p1->x,tX);
					HX_STACK_LINE(294)
					segmentAABB->upperBound->y = ::Math_obj::max(p1->y,tY);
				}
			}
			else{
				HX_STACK_LINE(300)
				stack[(count)++] = node->child1;
				HX_STACK_LINE(301)
				stack[(count)++] = node->child2;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2DynamicTree_obj,rayCast,(void))

Void B2DynamicTree_obj::query( Dynamic callbackMethod,::box2D::collision::B2AABB aabb){
{
		HX_STACK_PUSH("B2DynamicTree::query","box2D/collision/B2DynamicTree.hx",179);
		HX_STACK_THIS(this);
		HX_STACK_ARG(callbackMethod,"callbackMethod");
		HX_STACK_ARG(aabb,"aabb");
		HX_STACK_LINE(180)
		if (((this->m_root == null()))){
			HX_STACK_LINE(181)
			return null();
		}
		HX_STACK_LINE(183)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(185)
		int count = (int)0;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(186)
		stack[(count)++] = this->m_root;
		HX_STACK_LINE(188)
		while(((count > (int)0))){
			HX_STACK_LINE(190)
			::box2D::collision::B2DynamicTreeNode node = stack->__get(--(count)).StaticCast< ::box2D::collision::B2DynamicTreeNode >();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(192)
			if ((node->aabb->testOverlap(aabb))){
				HX_STACK_LINE(193)
				if ((node->isLeaf())){
					HX_STACK_LINE(196)
					bool proceed = callbackMethod(node).Cast< bool >();		HX_STACK_VAR(proceed,"proceed");
					HX_STACK_LINE(197)
					if ((!(proceed))){
						HX_STACK_LINE(198)
						return null();
					}
				}
				else{
					HX_STACK_LINE(203)
					stack[(count)++] = node->child1;
					HX_STACK_LINE(204)
					stack[(count)++] = node->child2;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(B2DynamicTree_obj,query,(void))

Dynamic B2DynamicTree_obj::getUserData( ::box2D::collision::B2DynamicTreeNode proxy){
	HX_STACK_PUSH("B2DynamicTree::getUserData","box2D/collision/B2DynamicTree.hx",167);
	HX_STACK_THIS(this);
	HX_STACK_ARG(proxy,"proxy");
	HX_STACK_LINE(167)
	return proxy->userData;
}


HX_DEFINE_DYNAMIC_FUNC1(B2DynamicTree_obj,getUserData,return )

::box2D::collision::B2AABB B2DynamicTree_obj::getFatAABB( ::box2D::collision::B2DynamicTreeNode proxy){
	HX_STACK_PUSH("B2DynamicTree::getFatAABB","box2D/collision/B2DynamicTree.hx",159);
	HX_STACK_THIS(this);
	HX_STACK_ARG(proxy,"proxy");
	HX_STACK_LINE(159)
	return proxy->aabb;
}


HX_DEFINE_DYNAMIC_FUNC1(B2DynamicTree_obj,getFatAABB,return )

Void B2DynamicTree_obj::rebalance( int iterations){
{
		HX_STACK_PUSH("B2DynamicTree::rebalance","box2D/collision/B2DynamicTree.hx",138);
		HX_STACK_THIS(this);
		HX_STACK_ARG(iterations,"iterations");
		HX_STACK_LINE(139)
		if (((this->m_root == null()))){
			HX_STACK_LINE(140)
			return null();
		}
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(142)
			while(((_g < iterations))){
				HX_STACK_LINE(142)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(144)
				::box2D::collision::B2DynamicTreeNode node = this->m_root;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(145)
				int bit = (int)0;		HX_STACK_VAR(bit,"bit");
				HX_STACK_LINE(146)
				while(((node->isLeaf() == false))){
					HX_STACK_LINE(148)
					node = (  (((((int((int(this->m_path) >> int(bit))) & int((int)1))) != (int)0))) ? ::box2D::collision::B2DynamicTreeNode(node->child2) : ::box2D::collision::B2DynamicTreeNode(node->child1) );
					HX_STACK_LINE(149)
					bit = (int((bit + (int)1)) & int((int)31));
				}
				HX_STACK_LINE(151)
				++(this->m_path);
				HX_STACK_LINE(153)
				this->removeLeaf(node);
				HX_STACK_LINE(154)
				this->insertLeaf(node);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2DynamicTree_obj,rebalance,(void))

bool B2DynamicTree_obj::moveProxy( ::box2D::collision::B2DynamicTreeNode proxy,::box2D::collision::B2AABB aabb,::box2D::common::math::B2Vec2 displacement){
	HX_STACK_PUSH("B2DynamicTree::moveProxy","box2D/collision/B2DynamicTree.hx",112);
	HX_STACK_THIS(this);
	HX_STACK_ARG(proxy,"proxy");
	HX_STACK_ARG(aabb,"aabb");
	HX_STACK_ARG(displacement,"displacement");
	HX_STACK_LINE(113)
	::box2D::common::B2Settings_obj::b2Assert(proxy->isLeaf());
	HX_STACK_LINE(115)
	if ((proxy->aabb->contains(aabb))){
		HX_STACK_LINE(116)
		return false;
	}
	HX_STACK_LINE(120)
	this->removeLeaf(proxy);
	HX_STACK_LINE(123)
	Float extendX = (::box2D::common::B2Settings_obj::b2_aabbExtension + (::box2D::common::B2Settings_obj::b2_aabbMultiplier * ((  (((displacement->x > (int)0))) ? Float(displacement->x) : Float(-(displacement->x)) ))));		HX_STACK_VAR(extendX,"extendX");
	HX_STACK_LINE(124)
	Float extendY = (::box2D::common::B2Settings_obj::b2_aabbExtension + (::box2D::common::B2Settings_obj::b2_aabbMultiplier * ((  (((displacement->y > (int)0))) ? Float(displacement->y) : Float(-(displacement->y)) ))));		HX_STACK_VAR(extendY,"extendY");
	HX_STACK_LINE(125)
	proxy->aabb->lowerBound->x = (aabb->lowerBound->x - extendX);
	HX_STACK_LINE(126)
	proxy->aabb->lowerBound->y = (aabb->lowerBound->y - extendY);
	HX_STACK_LINE(127)
	proxy->aabb->upperBound->x = (aabb->upperBound->x + extendX);
	HX_STACK_LINE(128)
	proxy->aabb->upperBound->y = (aabb->upperBound->y + extendY);
	HX_STACK_LINE(130)
	this->insertLeaf(proxy);
	HX_STACK_LINE(131)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC3(B2DynamicTree_obj,moveProxy,return )

Void B2DynamicTree_obj::destroyProxy( ::box2D::collision::B2DynamicTreeNode proxy){
{
		HX_STACK_PUSH("B2DynamicTree::destroyProxy","box2D/collision/B2DynamicTree.hx",100);
		HX_STACK_THIS(this);
		HX_STACK_ARG(proxy,"proxy");
		HX_STACK_LINE(102)
		this->removeLeaf(proxy);
		HX_STACK_LINE(103)
		this->freeNode(proxy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(B2DynamicTree_obj,destroyProxy,(void))

::box2D::collision::B2DynamicTreeNode B2DynamicTree_obj::createProxy( ::box2D::collision::B2AABB aabb,Dynamic userData){
	HX_STACK_PUSH("B2DynamicTree::createProxy","box2D/collision/B2DynamicTree.hx",79);
	HX_STACK_THIS(this);
	HX_STACK_ARG(aabb,"aabb");
	HX_STACK_ARG(userData,"userData");
	HX_STACK_LINE(80)
	::box2D::collision::B2DynamicTreeNode node = this->allocateNode();		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(83)
	Float extendX = ::box2D::common::B2Settings_obj::b2_aabbExtension;		HX_STACK_VAR(extendX,"extendX");
	HX_STACK_LINE(84)
	Float extendY = ::box2D::common::B2Settings_obj::b2_aabbExtension;		HX_STACK_VAR(extendY,"extendY");
	HX_STACK_LINE(85)
	node->aabb->lowerBound->x = (aabb->lowerBound->x - extendX);
	HX_STACK_LINE(86)
	node->aabb->lowerBound->y = (aabb->lowerBound->y - extendY);
	HX_STACK_LINE(87)
	node->aabb->upperBound->x = (aabb->upperBound->x + extendX);
	HX_STACK_LINE(88)
	node->aabb->upperBound->y = (aabb->upperBound->y + extendY);
	HX_STACK_LINE(90)
	node->userData = userData;
	HX_STACK_LINE(92)
	this->insertLeaf(node);
	HX_STACK_LINE(93)
	return node;
}


HX_DEFINE_DYNAMIC_FUNC2(B2DynamicTree_obj,createProxy,return )


B2DynamicTree_obj::B2DynamicTree_obj()
{
}

void B2DynamicTree_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2DynamicTree);
	HX_MARK_MEMBER_NAME(m_insertionCount,"m_insertionCount");
	HX_MARK_MEMBER_NAME(m_path,"m_path");
	HX_MARK_MEMBER_NAME(m_freeList,"m_freeList");
	HX_MARK_MEMBER_NAME(m_root,"m_root");
	HX_MARK_END_CLASS();
}

void B2DynamicTree_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_insertionCount,"m_insertionCount");
	HX_VISIT_MEMBER_NAME(m_path,"m_path");
	HX_VISIT_MEMBER_NAME(m_freeList,"m_freeList");
	HX_VISIT_MEMBER_NAME(m_root,"m_root");
}

Dynamic B2DynamicTree_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"query") ) { return query_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_path") ) { return m_path; }
		if (HX_FIELD_EQ(inName,"m_root") ) { return m_root; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rayCast") ) { return rayCast_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"freeNode") ) { return freeNode_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rebalance") ) { return rebalance_dyn(); }
		if (HX_FIELD_EQ(inName,"moveProxy") ) { return moveProxy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_freeList") ) { return m_freeList; }
		if (HX_FIELD_EQ(inName,"removeLeaf") ) { return removeLeaf_dyn(); }
		if (HX_FIELD_EQ(inName,"insertLeaf") ) { return insertLeaf_dyn(); }
		if (HX_FIELD_EQ(inName,"getFatAABB") ) { return getFatAABB_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getUserData") ) { return getUserData_dyn(); }
		if (HX_FIELD_EQ(inName,"createProxy") ) { return createProxy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allocateNode") ) { return allocateNode_dyn(); }
		if (HX_FIELD_EQ(inName,"destroyProxy") ) { return destroyProxy_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"m_insertionCount") ) { return m_insertionCount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2DynamicTree_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_path") ) { m_path=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_root") ) { m_root=inValue.Cast< ::box2D::collision::B2DynamicTreeNode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_freeList") ) { m_freeList=inValue.Cast< ::box2D::collision::B2DynamicTreeNode >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"m_insertionCount") ) { m_insertionCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2DynamicTree_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_insertionCount"));
	outFields->push(HX_CSTRING("m_path"));
	outFields->push(HX_CSTRING("m_freeList"));
	outFields->push(HX_CSTRING("m_root"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("m_insertionCount"),
	HX_CSTRING("m_path"),
	HX_CSTRING("m_freeList"),
	HX_CSTRING("m_root"),
	HX_CSTRING("removeLeaf"),
	HX_CSTRING("insertLeaf"),
	HX_CSTRING("freeNode"),
	HX_CSTRING("allocateNode"),
	HX_CSTRING("rayCast"),
	HX_CSTRING("query"),
	HX_CSTRING("getUserData"),
	HX_CSTRING("getFatAABB"),
	HX_CSTRING("rebalance"),
	HX_CSTRING("moveProxy"),
	HX_CSTRING("destroyProxy"),
	HX_CSTRING("createProxy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2DynamicTree_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2DynamicTree_obj::__mClass,"__mClass");
};

Class B2DynamicTree_obj::__mClass;

void B2DynamicTree_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.B2DynamicTree"), hx::TCanCast< B2DynamicTree_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2DynamicTree_obj::__boot()
{
}

} // end namespace box2D
} // end namespace collision
