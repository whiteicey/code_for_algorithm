#include <iostream>
using namespace std;
int main()
{
	int m,n,na=0,nb=0;
	cin>>m>>n;
	int ax[10000],bx[10000],ay[10000],by[10000];
	for(int i = 0; i < m ; i++)
	{
		int x,y;
		char p;
		cin>>x>>y>>p;
		if(p == 'A')
		{
			ax[na] = x;
			ay[na] = y;
			na++; 
		}
		else
		{
			bx[nb] = x;
			by[nb] = y;
			nb++;
		}
	}
	bool flag1 = true;
	bool flag2 = true;
	while(n--)
	{
		int a1,a2,a3,t;
		cin>>a1>>a2>>a3;
		//float t1 = -(a2/a3), t2 = -(a1/a3);
//		float ay = t1 * ax[0] + t2;
//		float by = t1 * bx[0] + t2;
		for(int i = 1; i < na ; i++)
		{
			if((a1 + a2 * ax[i] + a3 * ay[i] > 0 && a1 + a2 * ax[i-1] + a3 * ay[i-1] > 0 ) || (a1 + a2 * ax[i] + a3 * ay[i] < 0 && a1 + a2 * ax[i-1] + a3 * ay[i-1] < 0))
			{
				flag1 = true ;
			}
			else
			{
				flag1 = false ;
				break;
			}
		}
		if(flag1 == false)
		{
			cout<<"No\n";
			continue;
		}
		if(a1 + a2 * ax[0] + a3 * ay[0] > 0)
		{
			t = 1;
		}
		else
		{
			t = 0;
		}
		for(int i = 1; i < nb ; i++)
		{
			if((a1 + a2 * bx[i] + a3 * by[i] > 0 && a1 + a2 * bx[i-1] + a3 * by[i-1] > 0 && t == 0) || (a1 + a2 * bx[i] + a3 * by[i] < 0 && a1 + a2 * bx[i-1] + a3 * by[i-1] < 0 && t == 1))
			{
				flag2 = true ;
			}
			else
			{
				flag2 = false ;
				break;
			}
		}
		if(flag1&&flag2)
		{
			cout<<"Yes\n";
		}
		else
		{
			cout<<"No\n";
		}
	}
	return 0;
}
/*9 3
1 1 A
1 0 A
1 -1 A
2 2 B
2 3 B
0 1 A
3 1 B
1 3 B
2 0 A
0 2 -3
-3 0 2
-3 1 1*/
