#include <iostream>
using namespace std;
int leaf=0;
struct tree
{
	char al;
	struct tree* left;
	struct tree* right;
	tree()
	{
		left=NULL;
		right=NULL;
	}
};
struct tree* creat()
{
	struct tree* root=new struct tree;
	char v;
	cin>>v;
	if(v!='#')
	{
		root->al=v;
		root->left=creat();
		root->right=creat();
		if(root->left==NULL&&root->right==NULL)
		{
			leaf++;
		}
	}
	else
	{
		root=NULL;
	}
	return root;
}
void mid(struct tree* root)
{
	if(root==NULL)
	{
		return;
	}
	mid(root->left);
	cout<<root->al;
	mid(root->right);
}
int main()
{
	struct tree* root;
	root=creat();
	mid(root);
	cout<<endl;
	cout<<leaf;
	return 0; 
}
