#include<iostream> 
using namespace std;
int FU(int n,int m)
{
	if(n % m == 0)
	{
		return m;
	}
	else
		return FU(m , n % m);
}
int main()
{
	int s,n,m;
	while(1)
	{
		cin>>s>>n>>m;
		if(s == 0 && n == 0 && m == 0)
		{
			return 0;
		}
		if(s % 2 == 1)
		{
			cout<<"NO"<<endl;
			continue;
		}
		s = s/FU(s,FU(n,m));
		if(s % 2 == 1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<s - 1<<endl;
		}
	}
	return 0;
}
