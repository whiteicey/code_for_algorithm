#include <iostream>
using namespace std;
int main()
{
	int m,n;
	const int* p=&n;
	//*p=5;
	n=4;
	cout<<*p;
}
