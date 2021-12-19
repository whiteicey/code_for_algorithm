#include<iostream>  
#include<algorithm>  
using namespace std;  
int main()
{  
	int n;
	cin>>n;  
	for(int i=1;i<=n;++i)
	{  
		long long a,b;
		cin>>a>>b;  
		int res1=a,res2=b,aa=0,bb=0;  
		while(res1)
		{  
			aa=aa*10+res1%10;  
			res1/=10;  
		}  
		while(res2)
		{  
			bb=bb*10+res2%10;  
			res2/=10;  
		}
		aa=aa+bb;  
		long long ans=0;  
		while(aa)
		{  
			ans=ans*10+aa%10;  
			aa/=10;  
		}
		cout<<ans<<endl;  
	}  
	return 0;  
}  
