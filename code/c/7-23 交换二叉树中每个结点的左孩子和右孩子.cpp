#include <iostream>
using namespace std;
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
	}
	else
	{
		root=NULL;
	}
	return root;
}
void change(struct tree* T)
{
    struct tree* temp;
    if(T==NULL)
	{
        return;
    }
    temp=T->left;
    T->left=T->right;
    T->right=temp;
    change(T->left);
    change(T->right);
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
	change(root);
	mid(root);
	return 0; 
}
