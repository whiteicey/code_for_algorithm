#include <iostream>
#include <algorithm>
using namespace std;
int floornum[1010]={0},k;
int search(int l,int r,int j)
{
	while(l <= r)
	{
	   int m = (l+r)/2;
	   if(floornum[m] == j) 
	   {
	   		return 1;
	   }
	   else if(floornum[m]<j) 
	   {
	   		l=m+1;
	   }
	   else 
	   {
	   		r=m-1;
	   }
	}
	return 0;
}
int main()
{
	int num;
	cin>>num;
	int i;
	for(i=0;i<num;i++)
	{
		
		int n,s,fn,ans=0;
		cin>>n>>s>>k;
		int j,flag=0,index;
		for(j=0;j<k;j++)
		{
			cin>>floornum[j];
			if(floornum[j]==s)
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			cout<<0<<endl;
			continue;
		}
		sort(floornum,floornum+k);
		int l,r;
		l=r=s;
		while(1)
		{
			
			if(search(0,k-1,l)==0&&l>=1)
			{
				cout<<ans<<endl;
				break;
			}
			if(search(0,k-1,r)==0&&r<=n)
			{
				cout<<ans<<endl;
				break;
			}
			l--;
			r++;
			ans++;
		}
	}
	return 0;
}
