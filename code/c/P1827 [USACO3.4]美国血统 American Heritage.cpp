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
		{//�ҽڵ�
        	dfs(l1,i-1,l3+1,l3+i-l1);//�ݹ�������
        	dfs(i+1,l2,l3+i-l1+1,l4);//�ݹ�������
        	cout<<a[i];//����ýڵ�
    	}
}
int main()
{
    cin>>a>>b;
    int l=a.size();
    dfs(0,l-1,0,l-1);//ȫ������
    return 0;
}
