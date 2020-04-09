#include <iostream>
using namespace std;

template <class xxx>
class TreeNode
{
	private:
		xxx *value;
		TreeNode *left;
		TreeNode *right;
	public:
		
		TreeNode()
		{
			this->value = NULL;
			this->left = NULL;
			this->right = NULL;
		}
		
		TreeNode(xxx *value)
		{
			this->value = value;
			this->left = NULL;
			this->right = NULL;
		}
		
		xxx* getInfo()
		{
			return this->value;
		}
		
		void setInfo(xxx *value)
		{
			this->value = value;
		}
		
		TreeNode* getLeft()
		{
			return left;
		}
		
		TreeNode* getRight()
		{
			return right;
		}
		
		void setLeft(TreeNode *obj)
		{
			this->left = obj;
		}
		
		void setRight(TreeNode *obj)
		{
			this->right = obj;
		}
		
		int isLeaf()
		{
			if(this->left ==NULL && this->right==NULL)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};

void insert(TreeNode<int> * root,int * info);

void preOrder(TreeNode<int> *node);

void inOrder(TreeNode<int> *node);

void postOrder(TreeNode<int> *node);

main()
{
	int x[] = {14,15,4,9,7,18,3,5,16,4,20,17,9,14,5,-1};
	TreeNode<int> *root = new TreeNode<int>();
	root->setInfo(&x[0]);
	
	for(int i=1;x[i]>0;i++)
	{
		insert(root,&x[i]);
	}
	
	cout << "preOrder" << endl;
	preOrder(root);
	cout<<endl;
	
	cout << "inOrder" << endl;
	inOrder(root);
	cout << endl;
	
	cout << "postOrder" << endl;
	postOrder(root);
	
}

void insert(TreeNode<int> *root,int *info)
{
	TreeNode<int> *node = new TreeNode<int>(info);
	TreeNode<int> *p , *q;
	
	p = q = root;
	
	while(*info != *(p->getInfo()) && q!=NULL)
	{
		p = q;
		if(*info < *(p->getInfo()))
		{
			q = p->getLeft();
		}
		else
		{
			q = p->getRight();
		}
	 } 
	 
	 if (*info == *(p->getInfo()))
	 {
	 	cout << "attempt to insert duplicate: " << *info << endl;
	 	delete node;
	 }
	 else if(*info < *(p->getInfo()))
	 {
	 	p->setLeft(node);
	 }
	 else
	 {
	 	p->setRight(node);
	 }
}

void preOrder(TreeNode<int> *node)
{
	if(node!=NULL)
	{
		cout << *(node->getInfo()) <<" ";
		preOrder(node->getLeft());
		preOrder(node->getRight());
	}
}

void inOrder(TreeNode<int> *node)
{
	if(node!=NULL)
	{
		inOrder(node->getLeft());
		cout << *(node->getInfo()) <<" ";
		inOrder(node->getRight());
	}
}

void postOrder(TreeNode<int> *node)
{
	if(node!=NULL)
	{
		postOrder(node->getLeft());
		postOrder(node->getRight());
		cout << *(node->getInfo()) <<" ";
	}
}
