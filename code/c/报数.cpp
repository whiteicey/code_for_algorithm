#include <iostream>
using namespace std;
int a[5];
bool seven(int num)
{
	while(num != 0)
	{
		if(num % 10 == 7)
		{
			return true;
		}
		num /= 10;
	}
	return false;
}
int main()
{
	int n;
	cin>>n;
	int num=1;
	while(n--)
	{
		if(num % 7 == 0)
		{
			n++;
			a[num%4]++;
		}
		else if(seven(num))
		{
			n++;
			a[num%4]++;
		}
		num++;
	}
	for(int i = 1; i <= 3;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<a[0]<<endl;
	return 0;
}
