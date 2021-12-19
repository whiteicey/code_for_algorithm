#include <iostream>
#include <map>
using namespace std;
string a[100001];
map<string,int> m;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		for(int j=0;j<a[i].length();j++)
		{
			m[a[i].substr(j)]++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<m[a[i]]<<endl;
	}
	return 0;
}
