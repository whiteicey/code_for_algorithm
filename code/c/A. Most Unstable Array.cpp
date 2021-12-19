#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		if(m==1)
		{
			cout<<0<<endl;
		}
		else if(m==2)
		{
			cout<<n<<endl;
		}
		else
		{
			cout<<2*n<<endl;
		}
	}
	return 0;
}
