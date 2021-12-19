#include <iostream>
#include <string>
using namespace std;
long long a[100]={0,1,2};
int main()
{
	int n,i;
	cin>>n;
	for(i=3;i<100;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<n;i++)
	{
		int num;
		cin>>num;
		cout<<a[num]<<endl;
	}
	return 0;
 } 

