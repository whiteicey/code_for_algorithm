#include <iostream>
using namespace std;
int num[2001]={6,2,5,5,4,5,6,3,7,6};
int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=10;i<=2001;i++)
	{
		int k=i;
		while(k>=1)
		{
			num[i]+=num[k%10];
			k/=10;
		}
	}
	for(int i=0;i<=1000;i++)
	{
		for(int j=0;j<=1000;j++)
		{
			if(num[i]+num[j]+num[i+j]+4==n)
			{
				cout<<i<<' '<<j<<' '<<i+j<<endl;
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
 } 
