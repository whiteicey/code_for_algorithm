#include <iostream>
#include <map>
using namespace std;
map<string,int>m;
int main()
{
	string s;
	while(cin>>s)
	{
		if(s[0]>'A'&&s[0]<='Z')
		{
			s[0]=s[0]-'A'+'a';
		}
		m[s]++;
	}
	for(map<string,int>::iterator it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<' '<<it->second<<'\n';
	}
	return 0;
}
