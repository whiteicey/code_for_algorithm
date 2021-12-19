#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		int num,count=0,index;
		cin>>num;
		int j;
		while(num>0)
		{
			count+=num/5;
			num/=5;
		}
		cout<<count<<endl;
	}
	return 0;
}
