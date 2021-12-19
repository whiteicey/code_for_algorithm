#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int bmap[10][10],lmap[10][10];
		int i,j;
		int b,l;
		cin>>b;
		for(i=1;i<=b;i++)
		{
			for(j=1;j<=b;j++)
			{
				cin>>bmap[i][j];
			}
		}
		cin>>l;
		for(i=1;i<=l;i++)
		{
			for(j=1;j<=l;j++)
			{
				cin>>lmap[i][j];
			}
		}
		int flag=1,x,y;
		for(i=1;i<=b;i++)
		{
			for(j=1;j<=b;j++)
			{
				if(bmap[i][j]==lmap[1][1]&&b-j+1>=l&&b-i+1>=l)
				{
					for(int tempx=i,tempxx=1;tempx<=i+l-1,tempxx<=l;tempx++,tempxx++)
					{
						for(int tempy=j,tempyy=1;tempy<=j+l-1,tempyy<=l;tempy++,tempyy++)
						{
							if(bmap[tempx][tempy]==lmap[tempxx][tempyy])
							{
								flag=0;
							}
							else
							{
								flag=1;
								break;
							}
						}
						if(flag==1)
						{
							break;
						}
					}
					if(flag==1)
					{
						continue;
					}
					else
					{
						x=i;
						y=j;
						break;
					}
				}
			}
			if(flag==0)
			{
				break;
			}
		}
		if(flag==0)
		{
			cout<<x<<" "<<y<<"\n";
		}
		else
		{
			cout<<-1<<"\n";
		}
	}
	return 0;
}
