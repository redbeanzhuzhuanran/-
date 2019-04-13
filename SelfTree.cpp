#include <iostream>
#include "SelfTree.h"

namespace SelfTree {
	using namespace std;

	void BinaryTree::CreatTree(istream & in, BinaryTreeNode * & m) {
		char a;
		in >> a;
		if (a == '#') {
			m = NULL;
		}
		else {
           m = new BinaryTreeNode;
		   m->element = a;
		   CreatTree(in, m->leftChild);
		   CreatTree(in, m->rightChild);
		}
		
	}

	void BinaryTree::preTraverse(BinaryTreeNode * & m){
		if (m == NULL) {

		}
		else {
            cout << m->element << '\n';
			preTraverse(m->leftChild);
			preTraverse(m->rightChild);
		}
	}

	void BinaryTree::midTraverse(BinaryTreeNode * & m) {
		if (m == NULL) {

		}
		else {
			midTraverse(m->leftChild);
			cout << m->element << '\n';
			midTraverse(m->rightChild);
		}
	}

	void BinaryTree::postTraverse(BinaryTreeNode * & m) {
		if (m == NULL) {

		}
		else {
			postTraverse(m->leftChild);
		    postTraverse(m->rightChild);
			cout << m->element << '\n';
		}
	}
























	/*
	template<class T>bool BinaryTree<T>::isEmpty() const
	{
		return ((root) ? false : true);//�ж��������Ƿ�Ϊ����
	}

	template<class T> BinaryTreeNode<T>* BinaryTree<T>::GetParent(BinaryTreeNode<T>* root, BinaryTreeNode<T>* current)
	{
		BinaryTreeNode<T>* temp;
		if (root == NULL)
			return NULL;
		if ((root->leftchild() == current)||(root->rightchild() == current))
			return root;   //�ҵ������

		if ((temp = GetParent(root->leftchild(), current))!= NULL) return temp;
		else return GetParent(root->rightchild(),current);
	}


	template<class T> BinaryTreeNode<T>* BinaryTree<T>::Parent(BinaryTreeNode<T>* current)
	{
		if ((current == NULL) || (current == root))
			return NULL;  //�ս�����currentΪ�����

		return GetParent(root, current);//���õݹ麯��Ѱ�Ҹ����
	}

	template<class T> BinaryTreeNode<T>* BinaryTree<T>::LeftSibling(BinaryTreeNode<T>* current)
	{
		if (current) { // current��Ϊ��
			BinaryTreeNode<T>* temp = Parent(current);
			if ((temp == NULL) || current == temp->leftchild())
				return  NULL;
			else return temp->leftchild();
		}
		return NULL;
	}

	template<class T> BinaryTreeNode<T>* BinaryTree<T>::RightSibling(BinaryTreeNode<T>* current)
	{
		if (current) {
			BinaryTreeNode<T>* temp = Parent(current);
			if ((temp == NULL) || current == temp->rightchild())
				return  NULL;
			else return temp->rightchild();
		}
		return NULL;
	}

	template<class T> void BinaryTree<T>::CreateTree(const T& elem,BinaryTree<T>& leftTree, BinaryTree<T>& rightTree)
	{ 
	   //��leftTree, rightTree��elem����һ���������������
	   //elem����������leftTree����������rightTree������this��
	   //leftTree��rightTree�����ǲ�ͬ��������
		root = new BinaryTreeNode<T>(elem, leftTree.root,
			rightTree.root);
		//ԭ�����������ĸ�����ÿգ��������
		leftTree.root = rightTree.root = NULL;
	}

	*/



}





























