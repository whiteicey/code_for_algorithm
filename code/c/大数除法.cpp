#include <iostream>
#include <cstdio>
#include <cstring>
#define MAX 100000000000000 
char a[MAX],b[MAX];
int a1[MAX],b1[MAX];
int temp[MAX];
int res[MAX];
char space[MAX];
using namespace std;
int max(int maxlen,int* a1,int* b1)
{
	int i;
	for(i=maxlen;i>=0;i--)
	{
		if(a1[i]>b1[i])
		{
			return 1;
		}
		else if(a1[i]<b1[i])
		{
			return -1;
		}
	}
	return 0;
}
void sub(int maxlen,int* a1,int* b1)
{
	int start=0;
	int i;
	for(i=0;i<maxlen;i++)
	{
		a1[i]=a1[i]-b1[i];
		if(a1[i]<0)
		{
			a1[i]=a1[i]+10;
			a1[i+1]--;
		}
	}
}
void shift(int maxlen,int* b1,int* temp,int n)
{
	int i;
	memcpy(temp,b1,maxlen*sizeof(int));
	if(n<=0)
	{
		return ;
	}
	for(i=maxlen-1;i>=0;i--)
	{
		if(i-n>=0)
		{
			temp[i]=b1[i-n];
		}
		else
		{
			temp[i]=0;
		}
	}
}
int main()
{
	int n;
	int i,j;
	int len1,len2,high,shiftlen;
	cin>>n;
	getchar();
	while(n>0)
	{
		gets(a);
		gets(b);
		memset(a1,0,sizeof(a1));
		memset(b1,0,sizeof(b1));
		len1=strlen(a);
		len2=strlen(b);
		if(len2==1&&b[0]=='1')
		{
			cout<<a<<endl;
			if(n>1)
			{
				gets(space);
				n--;
				continue;
			}
			else
			{
				return 0;
			}
		}
		for(j=0,i=len1-1;i>=0;i--)
		{
			a1[j++]=a[i]-'0';
		}
		for(j=0,i=len2-1;i>=0;i--)
		{
			b1[j++]=b[i]-'0';
		}
		high=0;
		memset(res,0,sizeof(int));
		shiftlen=len1-len2;
		if(shiftlen<0)
		{
			cout<<0<<endl;
		}
		else
		{
			while(max(len1,a1,b1)>=0)
			{
				shift(len1,b1,temp,shiftlen);
				while(max(len1,a1,temp)>=0)
				{
					sub(len1,a1,temp);
					res[shiftlen]++;
				}
				if(high==0&&res[shiftlen])
				{
					high=shiftlen;
				}
				shiftlen-=1;
			}
			for(i=high;i>=0;i--)
			{
				cout<<res[i];
			}
			cout<<endl;
		}
		if(n>1)
		{
			gets(space);
		}
		n--;
	}
	return 0;
} 

