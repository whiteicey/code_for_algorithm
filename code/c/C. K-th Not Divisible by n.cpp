#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,step=0,i;
		cin>>m>>n;
		cout<<n+(n-1)/(m-1)<<endl;
	}
	return 0;
} 
