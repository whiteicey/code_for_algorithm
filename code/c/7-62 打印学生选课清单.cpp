#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
map<string,vector<int>> mp;
int main()
{
	int n,k,c,num;
	char name[8];
	scanf("%d%d",&n,&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d%d",&c,&num);
		while(num--)
		{
			scanf("%s",name);
			mp[name].push_back(c);
		}
	}
	while(n--)
	{
		scanf("%s",name);
		int len=mp[name].size();
		printf("%s %d",name,len);
		sort(mp[name].begin(),mp[name].end());
		for(int i=0;i<len;i++)
		{
			printf(" %d",mp[name][i]);
		}
		printf("\n");
	}
	return 0;
}
