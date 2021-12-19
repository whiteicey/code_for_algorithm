#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	memcpy(a, a + 3, 2*sizeof(int));
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
}
