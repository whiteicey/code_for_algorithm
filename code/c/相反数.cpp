#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[10000],cnt=0;
		while(1)
		{
			int temp;
			cin>>temp;
			if(temp==0)
			{
				break;
			}
			a[cnt]=temp;
			cnt++;
		}
		sort(a,a+cnt);
		int num=0;
		for(int i=0;i<cnt;i++)
		{
			if(find(a,a+cnt,a[i]*(-1))!=a+cnt)
			{
				num++;
			}
		}
		cout<<num/2<<endl;
	}
	return 0;
} 
