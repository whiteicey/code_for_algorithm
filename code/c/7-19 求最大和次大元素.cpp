#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	while(1)
	{
		int n,i;
		int max1,max2,index1=1,index2=1;
		int a[1000]={0},b[1000]={0};
		cin>>n;
		if(n!=0)
		{
			for(i=1;i<=n;i++)
			{
				cin>>a[i];
				b[i]=a[i];
			}
			sort(b+1,b+n+1);
			for(i=n;i>=1;i--)
			{
				if(b[i]<b[n])
				{
					max2=b[i];
					break;
				}
			}
			max1=a[1];
			for(i=1;i<=n;i++)
			{
				if(a[i]>max1)
				{
					max1=a[i];
					index1=i;
				}
				if(max2==a[i])
				{
					index2=i;
				}
			}
			cout<<index1<<' '<<index2<<endl;
		}
		else
		{
			return 0;
		}
	}
}
