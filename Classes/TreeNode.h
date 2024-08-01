/** @class  TreeNode
  * @brief  ���ڵ�
  * @author sevens
  * @date   2016/10/01
  * @blog   http://www.developer1024.com/
  */

#ifndef __TREE_NODE_H__
#define __TREE_NODE_H__

#include "cocos2d.h"


// �ڵ���֦����ö��
enum TreeBranchDirection
{
	MIDDLE = 0,
	LEFT,
	RIGHT,
};

class TreeNode : public cocos2d::Node
{
public:
	static TreeNode* createTreeNode();

	/**
	* ���ýڵ���֦����
	* @param[in] direction �ڵ���֦����
	* @return void	�޷���ֵ
	*/
	void setTreeBranchDirection(TreeBranchDirection direction);
	
	/**
	* ��ȡ�ڵ���֦����
	* @return TreeBranchDirection	�ڵ���֦����
	*/
	TreeBranchDirection getTreeBranchDirection();

protected:
	/**
	* ��ʼ�����ڵ�
	* @return void	�޷���ֵ
	*/
	void initTreeNode();


private:
	TreeBranchDirection _TreeBranchDirection;
};

#endif // __TREE_NODE_H__