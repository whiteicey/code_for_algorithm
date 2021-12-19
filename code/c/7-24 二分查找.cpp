#include <iostream>
using namespace std;
int a[1000],step=0,find1;
int search (int low, int high)
{
	int mid;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(a[mid]==find1)
		{
			return mid;
		}
		else if(a[mid]>find1)
		{
			high--;
			step++;
		}
		else if(a[mid]<find1)
		{
			low++;
			step++;
		}
	}
	if(low==high)
	{
		return -1;
	}
}
int main()
{
	int n;
	int i;
	int index;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>find1;
	index=search(0,n-1);
	cout<<index<<endl<<step;
	return 0;
}
