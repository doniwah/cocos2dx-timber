/** @class  GameMainScene
  * @brief  ���ڵ�
  * @author sevens
  * @date   2016/10/01
  * @blog   http://www.developer1024.com/
  */

#ifndef __TREE_MODEL_H__
#define __TREE_MODEL_H__

#include "cocos2d.h"
#include "TreeNode.h"


class TreeModel : public cocos2d::Layer
{
public:
	static TreeModel* getInstance();

	/**
	* ��ȡ���ڵ����ͷ�ڵ�
	* @return TreeNode	�ڵ����
	*/
	TreeNode* getTreeHeadNode();

	/**
	* ɾ�����ڵ����ͷ�ڵ�
	* @return TreeNode	�ڵ����
	*/
	TreeNode* deleteTreeHeadNode();

	/**
	* ��ȡͷ�ڵ���֦����
	* @return TreeBranchDirection	�ڵ���֦����
	*/
	TreeBranchDirection getFirstTreeBranchDirection();

	/**
	* ����Tree
	* @return void	�޷���ֵ
	*/
	void Reset();

protected:
	/**
	* ��ʼ��Tree
	* @return void	�޷���ֵ
	*/
	void initTree();

	/**
	* ����Tree
	* @return void	�޷���ֵ
	*/
	void createTreeModel();

private:
	TreeBranchDirection getTreeBranchDirection();
	TreeBranchDirection getTreeBranchDirectionAgain();

	void update(float time);

private:
	cocos2d::Node*				 _treeTrunk;

	cocos2d::Vector<TreeNode*>	_vecTreeQueue;	//���ڵ��б�	
	cocos2d::Vector<TreeNode*>	_vecTreeCache;	//���ڵ㻺���б�
};

#endif // __TREE_MODEL_H__