#include <stdio.h>
int main()
{
	int m,i,sum=1,ans=1;
	scanf("%d",&m);
	for(i=2; i<=m; i++)
    {
        sum*=i;
        while(sum%10==0)
        {
            sum/=10;
        }
        sum%=10000;
        ans=sum%10;
    }
	printf("%d",ans);
	return 0;
}
