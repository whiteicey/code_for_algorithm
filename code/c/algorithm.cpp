#include <iostream>
#include <algorithm> 
using namespace std;
int main()
{
	cout<<max(1,2)<<endl;
	cout<<min(1,2)<<endl;
	int a[3]={2,1,3};
	sort(a,a+3);
	for(int i=0;i<3;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	reverse(a,a+3);
	for(int i=0;i<3;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	int b=1,c=2;
	swap(c,b);
	cout<<"b="<<b<<endl<<"c="<<c<<endl;
	cout<<find(a,a+3,2)-a<<endl;
	cout<<count(a,a+3,2)<<endl;
}
