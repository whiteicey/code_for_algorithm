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
		sort(a+1,a+1+n);//��С��������
		for(i=2;i<=n;i++)
			if((a[i]-a[i-1])%2)
			{
			//����Ԫ�ز�ֵ
				break;
			}
		if(i==n+1)
			printf("YES\n");//����Ԫ�ض���������
		else 
			printf("NO\n");
	}
	return 0;
}
