#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	for(int i =0;i<=5;i++)
	{
		int t = rand()%10+1;
		cout<<t<<'\n';
		for(int j=0;j<t;j++)
		{
			cout<<rand()<<' '<<rand()<<'\n';
		}
		cout<<"\n\n";
	}
	return 0;
}
