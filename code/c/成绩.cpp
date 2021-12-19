#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<60)
	{
		cout<<"不及格"<<endl; 
	}
	else if(60<=n&&n<74)
	{
		cout<<"及格"<<endl;
	}
	else if(75<=n&&n<89)
	{
		cout<<"良好"<<endl;
	}
	else
	{
		cout<<"优秀"<<endl; 
	}
	return 0;
 } 
