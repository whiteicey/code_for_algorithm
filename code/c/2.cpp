#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
//#include <queue>
using namespace std;
const int maxn = 110;
typedef struct
{
	int x;
	int parent;
	int lchild;
	int rchild;
	int flag;
}HTnode;
typedef struct
{
	char cd[maxn];
	int begin;
}Hcode;
void creatHT(HTnode ht[],int n)
{
	int i,k,lnode,rnode,m,flag1=-1,flag2=-1;
	m=2*n-1;
	for(i=0;i<m;i++)
	{
		ht[i].parent=-1;
		ht[i].lchild=-1;
		ht[i].rchild=-1;
		ht[i].flag=-1;
	}
	int min1,min2;

	for(i=n;i<m;i++)
	{
			min1=min2=1e5;
			lnode=rnode=-1;
		for(k=0;k<=i-1;k++)
		{
			if(ht[k].parent==-1&&ht[k].flag==-1)
			{
				if(ht[k].x<min1)
				{
					min1=ht[k].x;
					flag1=k;
				}
			}
		}
		ht[flag1].flag=0;
		for(k=0;k<=i-1;k++)
		{
			if(ht[k].parent==-1&&ht[k].flag==-1)
			{
				if(ht[k].x<min2)
				{
					min2=ht[k].x;
					flag2=k;
				}
			}
		}
		ht[flag2].flag=0;
		if(flag2<flag1)
		{
			lnode=flag2;
			rnode=flag1;
		}
		else
		{
			lnode=flag1;
			rnode=flag2;
		}
		
		ht[lnode].parent=i;
		ht[rnode].parent=i;
		ht[i].x=ht[lnode].x+ht[rnode].x;
		ht[i].lchild=lnode;
		ht[i].rchild=rnode;
		  
	}	
}

void creatHcode(HTnode ht[],Hcode hcd[],int n)
  {
	int i,f,c;
	Hcode hc;
	for(i=0;i<n;i++)
	{
		hc.begin=n;
		c=i;
		f=ht[i].parent;
		while(f!=-1)
		{
			if(ht[f].lchild==c)
			{
				hc.cd[hc.begin--]='0';
				
			}
			else
				hc.cd[hc.begin--]='1';
				c=f;
				f=ht[f].parent;
		}
		hc.begin++;
		hcd[i]=hc;
	}
	
}

int main()
{
	int n;
	cin >> n;
	int i,j;
	HTnode ht[200];
	Hcode hcd[100];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ht[i].x);
	}
	creatHT(ht,n);
	creatHcode(ht,hcd,n);
	for(i=0;i<n;i++)
	{
		for(j=hcd[i].begin;j<=n;j++)
			printf("%c",hcd[i].cd[j]);
		cout << endl;
	} 
	return 0;
} 



