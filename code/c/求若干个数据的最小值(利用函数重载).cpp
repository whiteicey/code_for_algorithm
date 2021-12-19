#include <iostream>
#include <cstdio> 
#include <string>
using namespace std;
void min(double a,double b)
{
	printf("%.2lf ",a<b?a:b);
}
void min(string a,string b,string c)
{
	string d;
	d=min(a,b)<c?min(a,b):c;
	cout<<d<<' ';
}
void min(int* a)
{
	int i,temp=a[0];
	for(i=1;i<10;i++)
	{
		temp=min(temp,a[i]);
	}
	cout<<temp<<' ';
}
int main()
{
	double a,b;
	string str1,str2,str3;
	int d[10];
	cin>>a>>b;
	cin>>str1>>str2>>str3;
	int i;
	for(i=0;i<10;i++)
	{
		cin>>d[i];
	}
	min(a,b);
	min(str1,str2,str3);
	min(d);
	return 0;
}
