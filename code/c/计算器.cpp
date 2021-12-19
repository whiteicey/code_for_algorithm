#include <iostream>
using namespace std;
int main()
{
	double a=15000;
	for(int i=1;i<=(11);i++)
	{
		double b=a/1000; 
		a+=b;
		cout<<a<<"\n";
	}
	return 0;
} 
