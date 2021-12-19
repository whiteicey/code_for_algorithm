#include <iostream>
#include <algorithm>
using namespace std;
void change(int* a)
{
	int i;
	sort(a,a+3);
	for(i=0;i<3;i++)
	{
		cout<<a[i]<<' ';
	}
}
int main()
{
	int a[10];
	int i;
	for(i=0;i<3;i++)
	{
		cin>>a[i];
	}
	change(a);
	return 0;
} 
