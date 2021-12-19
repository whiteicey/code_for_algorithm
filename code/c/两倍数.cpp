#include <iostream>
#include <set>
using namespace std;
int main()
{
	set<int>c;
	c.clear();
	int temp;
	while(1)
	{
		int num=0;
		while(1)
		{
			cin>>temp;
			if(temp==-1)
			{
				return 0;
			}
			else if(temp==0)
			{
				break;
			}
			else
			{
				c.insert(temp);
			}		
		}
		for(set<int>::iterator p=c.begin();p!=c.end();p++)
		{
			//cout<<* p<<" ";
			if(c.find(2*(*p))!=c.end())
			{
				num++;
			}
		}
		cout<<num<<endl;
		c.clear();
	}
	
}
