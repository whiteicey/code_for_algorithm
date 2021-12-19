#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	vector<int>obj;
	for(int i=0;i<=n;i++)
	{
		obj.push_back(i);
		sum+=obj[i];
	}
	cout<<sum;
	return 0;
}
