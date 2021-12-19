#include <iostream>
using namespace std;
int main()
{
	int m,n,k;
	cin>>m>>n>>k;
	char a[105][105]={'\0'};
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int count=0,temp,tempx,tempy,flag=0;
	if(k==1)//只有一个人的时候单独处理
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]=='.')
                    count++;
            }
        }
        cout<<count;
        return 0;
    }
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='.')
			{
//				flag=0;
//				temp=k-1;
//				tempx=i;
//				tempy=j;
//				while(temp--)
//				{
//					tempx--;
//					if(tempx<0)
//					{
//						break;
//					}
//					if(a[tempx][tempy]=='.')
//					{
//						flag=1;
//					}
//					else
//					{
//						flag=0;
//						break;
//					}
//				}
//				if(temp==-1&&flag==1)
//				{
//					count++;
//				}//up
				flag=0;
				temp=k-1;
				tempx=i;
				tempy=j;
				while(temp--)
				{
					tempx++;
					if(tempx>=m)
					{
						break;
					}
					if(a[tempx][tempy]=='.')
					{
						flag=1;
					}
					else
					{
						flag=0;
						break;
					}
				}
				if(temp==-1&&flag==1)
				{
					count++;
				}//down
				flag=0;
				temp=k-1;
				tempx=i;
				tempy=j;
				while(temp--)
				{
					tempy--;
					if(tempy<0)
					{
						break;
					}
					if(a[tempx][tempy]=='.')
					{
						flag=1;
					}
					else
					{
						flag=0;
						break;
					}
				}
				if(temp==-1&&flag==1)
				{
					count++;
				}//left
//				flag=0;
//				temp=k-1;
//				tempx=i;
//				tempy=j;
//				while(temp--)
//				{
//					tempy++;
//					if(tempy>=n)
//					{
//						break;
//					}
//					if(a[tempx][tempy]=='.')
//					{
//						flag=1;
//					}
//					else
//					{
//						flag=0;
//						break;
//					}
//				}
//				if(temp==-1&&flag==1)
//				{
//					count++;
//				}//right
			}
			//a[i][j]='#';
		}
	}
	cout<<count;
	return 0;
}
