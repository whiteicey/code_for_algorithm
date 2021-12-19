#include <iostream>
#include <cstdio>
#include <set>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	double a1,b1,a2,b2,a3,b3;
	cin>>a1>>b1>>a2>>b2>>a3>>b3;
	double k1,k2;
	if(a2-a1==0)
	{
		k1=9223372036854775807;
	} 
	else
	{
		k1=((b2-b1)/(a2-a1));
	}
	if(a3-a1==0)
	{
		k2=9223372036854775807;
	} 
	else
	{
		k2=((b3-b1)/(a3-a1));
	}
	if(k2==k1)
	{
		cout<<"linear";
	}
	else if(k2<k1)
	{
		cout<<"clockwise";
	}
	else if(k2>k1)
	{
		cout<<"counter-clockwise";
	}
	return 0;
}
