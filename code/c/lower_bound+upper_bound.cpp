#include <iostream>
#include <algorithm> 
using namespace std;
int main()
{
	int a[3]={2,1,3};
	sort(a,a+3);
	cout<<*lower_bound(a,a+3,2)<<endl;
	cout<<*upper_bound(a,a+3,2)<<endl;
}
