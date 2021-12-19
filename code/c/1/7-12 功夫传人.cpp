#include<iostream>
#include<vector>
using namespace std;
vector<int> a[100010];
int ab[100010];
double sum,r,n,z;
void dfs(double z,double r,int i)
{
	if(ab[i]!=0)
	{
		sum+=z*ab[i];
		return;
	}else
	{
		for(int j=0;j<a[i].size();j++)
		{
			dfs(z*(100-r)/100,r,a[i][j]);
		}
	}
}
int main()
{
    cin>>n>>z>>r;
    int mul;
    for(int i=0;i<n;i++)
	{
		int index;
    	cin>>index;
    	if(index==0)
		{
    		cin>>mul;
    		ab[i]=mul;
		}
		else
		{
			for(int j=0;j<index;j++)
			{
				cin>>mul;
				a[i].push_back(mul);
			}
		}
    	
	}
	dfs(z,r,0);
	cout<<(int)sum<<endl;
	return 0;
} 
