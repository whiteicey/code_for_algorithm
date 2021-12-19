#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int n,sum=0,t=0;
	for(int i = 1; ; i++)
	{
		cin>>n;
		if(n == 0)
		{
			break;
		}
		else if(n == 1)
		{
			t = 1;
			sum += t;
		}
		else if(n == 2)
		{
			if(t == 1)
			{
				t = 2;
				sum += t;
			}
			else
			{
				t += 2;
				sum += t;
			}
		}
		
	}
    //printf("%d",sum);
	cout<<sum<<endl;
	system("pause");
	return 0;
} 
