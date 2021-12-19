#include <iostream>
using namespace std;
struct node
{
	int left=-1;
	int right=-1;
};
bool vis[29],isnotroot[29];
char s[5];
node tree[29];
void build(int p,int l,int r)
{
	vis[p]=true;
	if(l>=0)
	{
		tree[p].left=l;
		vis[l]=true;
		isnotroot[l]=true;
	}
	if(r>=0)
	{
		tree[p].right=r;
		vis[r]=true;
		isnotroot[r]=true;
	}
}
void pre(int r)
{
	if(r<0)
	{
		return ;
	}
	cout<<char(r+'a');
	pre(tree[r].left);
	pre(tree[r].right);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		build(s[0]-'a',s[1]-'a',s[2]-'a');
	}
	for(int i=0;i<26;i++)
	{
		if(vis[i]&&!isnotroot[i])
		{
			pre(i);
			break;
		}
	}
	cout<<endl;
	return 0;
}
