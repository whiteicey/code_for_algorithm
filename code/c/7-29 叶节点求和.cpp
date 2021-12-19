#include <cstdio>
#include <string>
using namespace std;
int suml=0;
struct tree
{
	int value;
	struct tree* left;
	struct tree* right;
	tree()
	{
		left=NULL;
		right=NULL;
	}
};
void insert(struct tree* root,int r,int d,int e)
{
	if(r==root->value)
	{
		if(d==0)
		{
			root->left=new struct tree;
			(root->left)->value=e;
			return ;
		}
		else
		{
			root->right=new struct tree;
			(root->right)->value=e;
			return ;
		}
	}
	else
	{
		if(root->left!=NULL)
		{
			insert(root->left,r,d,e);
		}
		else if(root->right!=NULL)
		{
			insert(root->right,r,d,e);
		}
	}
}
void sum (struct tree* root)
{
	if(root->left==NULL&&root->right==NULL)
	{
		suml+=root->value;
	}
	else
	{
		if(root->left!=NULL)
		{
			sum(root->left);
		}
		if(root->right!=NULL)
		{
			sum(root->right);
		}
	}
	return ;
}
int main()
{
	int n,start,i;
	scanf("%d",&n);
	struct tree* root;
	root=new struct tree;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			scanf("%d",&start);
			root->value=start;
		}
		else
		{
			int r,d,e;
			scanf("%d%d%d",&r,&d,&e);
			insert(root,r,d,e);
		}
	}
	sum(root);
	printf("%d",suml);
	return 0; 	
}
