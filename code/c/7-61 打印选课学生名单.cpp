#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
vector<string> a[40001];
int main()
{
	//ios::sync_with_stdio(false);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		string s;
		int c;
		cin>>s;
		scanf("%d",&c);
		for(int j=0;j<c;j++)
		{
			int temp;
			scanf("%d",&temp);
			a[temp].push_back(s);
		}
	}
	for(int i=1;i<=m;i++)
	{
		sort(a[i].begin(),a[i].end());
		printf("%d %d\n",i,a[i].size());
		//cout<<i<<" "<<a[i].size()<<endl;
		for(int j=0;j<a[i].size();j++)
		{
			printf("%s\n",a[i][j].c_str());
		}
	} 
	return 0;
}
