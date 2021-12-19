#include <iostream>
using namespace std;
int n,sum=0;
int a[15];
int map[3][15];
void dfs(int num)
{
	if(num>n)
	{
		if(sum<=2)
		{
			for(int i=1;i<=n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<"\n";
		} 
		sum++;
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		if(!map[0][i]&&!map[1][num+i]&&!map[2][num-i+n])
		{
			a[num]=i;
			map[0][i]=1;
			map[1][num+i]=1;
			map[2][num-i+n]=1;
			dfs(num+1);
			a[num]=0;
			map[0][i]=0;
			map[1][num+i]=0;
			map[2][num-i+n]=0;
		}
	}
}
int main()
{
	cin>>n;
	dfs(1);
	cout<<sum;
	return 0;
}
