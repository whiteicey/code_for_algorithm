#include<stdio.h>
#include<string.h>
int main()
{
	int a[1000],b[1000],c[1000],i,j,k1,k2,n,m,count,flag,flag1,k;
	char  st1[1000],st2[1000];
	scanf("%d",&n);
	while(n--)
	{
	    scanf("%s%s",st1,st2);
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		k1=strlen(st1);
		k=k1;
		k2=strlen(st2);
		if(k1<k2) 
		{
			printf("0\n");
			continue;
		}
		for(i=0;i<=k1-1;i++)
			a[i]=st1[k1-i-1]-'0';
		m=k1-k2;
		for(i=0;i<=k2-1;i++)
			b[i+m]=st2[k2-i-1]-'0';
		count=0;
		while(count<=m)
		{
			flag=1;
			if(k1<k2+m-count) 
				flag=0;
			if(k1==k2+m-count) 
			{
				flag1=0;
				for(j=k1-1;j>=0&&flag1==0;j--)
				{
					if(a[j]>b[j+count]) 
						flag1=1;
					else
						if(a[j]<b[j+count])
							flag=0;
				}
			}
			if(flag==1)
			{
				for(i=0;i<=k1-1;i++)
				{
					a[i]=a[i]-b[i+count];
					if(a[i]<0)
					{
						a[i+1]--;
						a[i]+=10;
					}
				}
				while(a[k1-1]==0&&k1>=1) 
					k1--;
			}
			if(flag==1) 
				c[m-count]++;
			if(flag==0) 
				count++;
		}
        i=k;
		while(c[i]==0&&i>0)
		{
			i--;
		}
		for(k=i;k>=0;k--)
			printf("%d",c[k]);
		printf("\n");
	}
	return 0;
}
