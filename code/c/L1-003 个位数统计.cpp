#include <iostream>
#include <string>
#include <map>
using namespace std;
map<char,int> m;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		m[s[i]]++;
	}
	for(map<char,int>::iterator it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<":"<<it->second<<endl;
	}
	return 0;
}
