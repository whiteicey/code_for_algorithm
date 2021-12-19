#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i,j,num_e=0,num_i=0,num_n=0,num_t=0;
	string a;
	cin>>a;
	for(i=0;i<a.length();i++)
	{
		if(a[i]=='n')
		{
			num_n++;
		}
		if(a[i]=='i')
		{
			num_i++;
		}
		if(a[i]=='e')
		{
			num_e++;
		}
		if(a[i]=='t')
		{
			num_t++;
		}
	}
	num_e=num_e/3;
	num_n=(num_n-1)/2;
	int minn=min(min(num_e,num_i),min(num_n,num_t));
	cout<<minn<<endl;
	return 0;
}
