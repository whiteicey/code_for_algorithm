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
		for(int i=1;i<=n;i++)    //����+װͰ+ǰ׺��
		{
			scanf("%d",&a[i]); 
			ma[a[i]]++;
			a[i]+=a[i-1];
		}
		int cnt=0;          //�������ĸ���
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{   //ö��ÿһ������
				int sum=a[j]-a[i-1];     //sum��ʾ����ĺ�
				if(sum<=n&&ma[sum]) 
				{
					cnt+=ma[sum];
					ma[sum]=0;   //��ֹԽ�������
				}
			}
		}
		printf("%d\n",cnt);     //����𰸼���
	}
    return 0;
}
