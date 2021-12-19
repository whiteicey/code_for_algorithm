#include <stdio.h>
int main()
{
	int k,l;
	scanf("%d%d",&k,&l);
	long long a[500][500]={0};
	int i,j,x;
	long long sum=0;
	for(i=0;i<k;i++)
	{
		a[1][i]=1;
	}
	for(i=2;i<=l;i++)//位数 
	{
		for(j=0;j<k;j++)//上一位数
		{
			for(x=0;x<k;x++)//当前位置的数 
			{
				if(x!=j-1&&x!=j+1)//判断当前位置的数与上一位置的数是否相邻 
				{
					a[i][j]+=a[i-1][x];
					a[i][j]%=1000000007;
				}	
			}
		} 
	}
	for(i=1;i<k;i++)
	{
		sum=sum+a[l][i];
		sum%=1000000007;
	}
	printf("%lld",sum);
	return 0;
}
