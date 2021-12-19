#include <iostream>
#include <cstdio> 
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[8000],ma[8000]={0};
		for(int i=1;i<=n;i++)    //输入+装桶+前缀和
		{
			scanf("%d",&a[i]); 
			ma[a[i]]++;
			a[i]+=a[i-1];
		}
		int cnt=0;          //特殊数的个数
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{   //枚举每一段区间
				int sum=a[j]-a[i-1];     //sum表示区间的和
				if(sum<=n&&ma[sum]) 
				{
					cnt+=ma[sum];
					ma[sum]=0;   //防止越界与加重
				}
			}
		}
		printf("%d\n",cnt);     //输出答案即可
	}
    return 0;
}
