

#include<iostream>


namespace SelfTree {
	using namespace std;

	//template <class T>//��ģ�� 
		struct BinaryTreeNode {
			char  element;//��������������� 
			BinaryTreeNode* leftChild;
			BinaryTreeNode* rightChild;
			//BinaryTreeNode<T>* leftChild;
			//BinaryTreeNode<T>* rightChild;

		};

		class BinaryTree {
		    public:
			   BinaryTree() { root = NULL; } //�ȴ���һ�ſ���
			   void CreatTree(istream & in, BinaryTreeNode * & m);
			   BinaryTreeNode* & get_address()  { return root; }
			   void preTraverse(BinaryTreeNode * & m);   //ǰ���������������ӡ
			   void midTraverse(BinaryTreeNode * & m);   //�����������������ӡ
			   void postTraverse(BinaryTreeNode * & m);   //�����������������ӡ

		    private:
				BinaryTreeNode * root; //������root��ʵ������ʱ��Ϊ���ӽڵ��ṩ���й�ϵ
		};










    /*
	template <class T>//��ģ��
	class BinaryTree {
		public:
			BinaryTree(root = NULL);//���캯��
			~BinaryTree() { DeleteBinaryTree(root); }; //��������

			bool isEmpty() const;//�ж��������Ƿ�Ϊ����
			
			BinaryTreeNode<T>* Root() { return root; };//���ض����������
			
			BinaryTreeNode<T>* Parent(BinaryTreeNode<T>* current);//����current���ĸ����
			
			BinaryTreeNode<T>* LeftSibling(BinaryTreeNode<T>* current);//����current�������ֵ�
			
			BinaryTreeNode<T>* RightSibling(BinaryTreeNode<T>* current);//����current�������ֵ�

			//��elem��Ϊ����㣬leftTree��Ϊ����������, rightTree��Ϊ����������������һ���µĶ�����
			void CreateTree(const BinaryTreeNode<T>& elem,BinaryTree<T>& leftTree, BinaryTree<T>& rightTree);
            void DeleteBinaryTree(BinaryTreeNode<T>* root);	//ɾ����������������



	    private:
			BinaryTreeNode<T>*  root;//�����������ָ��
			BinaryTreeNode<T>*  GetParent(BinaryTreeNode<T>* root, BinaryTreeNode<T>* current);//�Ӷ�������root��㿪ʼ������current���ĸ����


	};
	*/
}