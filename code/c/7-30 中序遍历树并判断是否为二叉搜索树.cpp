#include <cstdio>
using namespace std;
int all[210];
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
			return;
		}
		else
		{
			root->right=new struct tree;
			(root->right)->value=e;
			return;
		}
	}
	else
	{
		if(root->left!=NULL)
		{
			insert(root->left,r,d,e);
		}
		if(root->right!=NULL)
		{
			insert(root->right,r,d,e);
		}
	}
}
int mid(struct tree* root,int i)
{
	if(root!=NULL)
	{
		i=mid(root->left,i);
		printf("%d\n",root->value);
		all[i]=root->value;
		i++;
		i=mid(root->right,i);
	}
	else
	{
		return i;
	}
	return i;
}
int main()
{
	int n,start,i;
	struct tree* root;
	scanf("%d",&n);
	if(n==0)
	{
		printf("Yes");
		return 0;
	}
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
			int r,e,d;
			scanf("%d%d%d",&r,&d,&e);
			insert(root,r,d,e);
		}
	}
	i=0;
	n=mid(root,i);
	if(n==0)
	{
		printf("Yes");
		return 0;
	}
	else
	{
		for(i=0;i<n-1;i++)
		{
			if(all[i]>=all[i+1])
			{
				printf("No");
				return 0;
			}
		}
		printf("Yes");
		return 0;
	}
	
}
