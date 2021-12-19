#include<stdio.h>
#include<string.h>
int main()
{
    int a[2000],i;
    int n=0,num=0;
    char s[1000];
    gets(s);
    //puts(s);
    for(i=0;i<strlen(s);i++)
    {
    	int tmp;
    	if(s[i]==' ')
    	{
    		a[n]=num;
    		n++;
    		num=0;
		}
		else if(s[i]>='0'&&s[i]<='9')
		{
			num*=10;
			tmp=s[i]-'0';
			num+=tmp;
		}
	}
	a[n]=num;
	int target;
	scanf("%d",&target);
	//printf("%d",target);
	int left,right;
    left=0;right=n;i=0;
	int flag=0;
	while(left<=right)
	{
		int mid=(left+right)>>1;
		if(a[mid]<target)
		{
			left=mid+1;
		}
		else if(a[mid]>target)
		{
			right=mid-1;
		}
		else
		{
			flag=1;
			while(a[mid]==a[mid-1])
			{
				mid--;
			}
			printf("%d",mid-1);
			break;
		}
	}
	if(!flag)
	{
		printf("-1");
	}
    return 0;
}
