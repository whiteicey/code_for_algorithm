#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
int a[1000][1000];
int n,m,k;
vector<string>s;
bool find(int x,int y)
{
  	for(int i=1;i<=n;i++) 
  	{
    	if(a[x][i]==1&&a[y][i]==1)
    	{
    		return 1;
		}	
  	}
  	return 0;
}
int main()
{ 
  	cin>>n>>m>>k;
  	for(int i=0;i<m;i++)
	{
		int x,y,z;
    	cin>>x>>y>>z;
    	a[x][y]=z;
    	a[y][x]=z;
    }	
  	for(int i=0;i<k;i++)
	{
		int x,y;
    	cin>>x>>y;
    	if(a[x][y]==1)
    	{
    		s.push_back("No problem");
		}	
    	else if(a[x][y]==0)
		{
			s.push_back("OK");
		} 	
    	else if(a[x][y]==-1&&find(x,y)==1) 
    	{
			s.push_back("OK but...");
		} 
    	else 
    	{
			s.push_back("No way");
		} 
 	}
  	for(int i=0;i<k;i++)
  	{
  		cout<<s.at(i)<<endl;
	}
  	return 0;
}
