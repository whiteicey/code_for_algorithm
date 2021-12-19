#include <iostream>
using namespace std;
int a[1000];
int main()
{
	int n,s=-1;
	cin>>n;
	for(int i = 0 ; i < n ; i++)
	{
		cin>>a[i];
	}
	for(int i = 0;i < n ;i++)
	{
		int low = a[i];
		for(int j = i ; j < n ; j++)
		{
			if(low > a[j])
			{
				low = a[j];
			}
			int t;
			t = low * (j - i + 1);
			if(t > s)
			{
				s = t;
			}
		}
	}
	cout<<s;
	return 0;
}
