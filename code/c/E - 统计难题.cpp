#include <iostream>
#include <cstdio>
#include <cmath>
#include <map>
#include <algorithm>
#include <set>
#include <vector>
#include <stack>
#include <string>
#include <cstring>
using namespace std;
map<string,int>mp;
int main()
{
	char a[100];
	string b;
	while(gets(a))
	{
		
		if(a[0]=='\0') break;
		for(int i=strlen(a);i>=0;i--)
		{
			a[i]='\0';
			mp[a]++;
		}
	}
	while(cin>>b)
	{
		cout<<mp[b]<<endl;
	}
	return 0;
}
