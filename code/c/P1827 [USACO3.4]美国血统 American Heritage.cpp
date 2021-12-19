#include<iostream>
#include<cmath>
#include<string>
#include<cstdio>
using namespace std;
string a,b;
void dfs(int l1,int l2,int l3,int l4)
{
    if(l1>l2||l3>l4)
		return;
    for(int i=l1;i<=l2;i++)
		if(a[i]==b[l3])
		{//找节点
        	dfs(l1,i-1,l3+1,l3+i-l1);//递归左子树
        	dfs(i+1,l2,l3+i-l1+1,l4);//递归右子树
        	cout<<a[i];//输出该节点
    	}
}
int main()
{
    cin>>a>>b;
    int l=a.size();
    dfs(0,l-1,0,l-1);//全树区间
    return 0;
}
