#include <cstdio>
#include <algorithm>
using namespace std;
int a[105];
int main()
{
	int t,i,n;
	scanf("%d",&t);
	while(t--)
	{	
		scanf("%d",&n);
		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);
		sort(a+1,a+1+n);//自小到大排序
		for(i=2;i<=n;i++)
			if((a[i]-a[i-1])%2)
			{
			//相邻元素差值
				break;
			}
		if(i==n+1)
			printf("YES\n");//所有元素都满足条件
		else 
			printf("NO\n");
	}
	return 0;
}
