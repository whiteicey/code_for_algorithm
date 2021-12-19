#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int m;
		int flag=0;
		int a,b,tempa=0,tempb=0;
		cin>>m;
		while(m--)
		{		
			cin>>a>>b;
			if(a-tempa>=b-tempb&&a>=tempa&&b>=tempb)
			{
				tempa=a;
				tempb=b;
			}
			else
			{
				flag=1;
			}
		}
		if(flag==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}	
	}
	return 0;
}
