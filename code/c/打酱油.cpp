#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int f,t,l;
	f = n / 50;
	t = (n - (f * 50)) / 30;
	l = (n - (f * 50) - (t * 30)) / 10;
	cout << f * 7 + t * 4 + l ;
	return 0;
}
