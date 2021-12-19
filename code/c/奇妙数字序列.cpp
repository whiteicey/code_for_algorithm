#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t,a[10000];
	cin>>t;
	while(t--)
	{
		int temp,cnt=0,mmax=0;
		cin>>temp;
		int a1=1,a2=1,a3=1,a4=1;
		for(a4=1;a4<=temp;a4++)
		{
			for(a3=1;a3<=a4;a3++)
			{
				for(a2=1;a2<=a3;a2++)
				{
					for(a1=1;a1<=a2;a1++)
					{
						if((a1+a2)%3==0&&(a3+a4)%5==0&&(a1+a2+a3+a4)%8==0)
						{
							cnt++;
							mmax=max(mmax,a1+a2+a3+a4);
						}
					}
				}
			}
		}
		if(cnt==0)
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<cnt<<" "<<mmax<<endl;
		}
	}
	return 0;
}
