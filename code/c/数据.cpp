#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	for (int i=0;i<=9;i++)
	{
		for (int j=0;j<=5;j++)
		{
			int t1 = rand()%250+1;
			for (int m=0;m<t1;m++)
			{
				int n = rand()%10;
				while(m==0&&n==0)
				{
					n=rand()%10;
				}
				cout<<n;
			}
			cout<<'\n';
		}
		cout<<'\n';
	}
}
