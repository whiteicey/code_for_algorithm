#include <iostream>
using namespace std;
string in,af;
void f(string in,string af)
{
	if(in.size()>0)
	{
		char c=af[af.size()-1];
		cout<<c;
		int root=in.find(c);
		f(in.substr(0,root),af.substr(0,root));
		f(in.substr(root+1),af.substr(root,af.size()-root-1));
	}
}
int main()
{
	cin>>in;
	cin>>af;
	f(in,af);
	return 0;
 } 
