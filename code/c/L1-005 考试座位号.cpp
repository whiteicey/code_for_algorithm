#include <iostream>
using namespace std;
struct student
{
	string num;
	int pos;
}stu[1000000];
int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	while(n--)	
	{
		string s;
		int a,b;
		cin>>s>>a>>b;
		stu[a].num=s;
		stu[a].pos=b;
	}
	int m;
	cin>>m;
	while(m--)
	{
		int a;
		cin>>a;
		cout<<stu[a].num<<' '<<stu[a].pos<<'\n';
	} 
	return 0;
} 
