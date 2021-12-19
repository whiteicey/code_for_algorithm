#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,m,ans,sum=9999;
	char c[100][100]={'\0'};
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) 
        {
        	cin>>c[i][j];
		}
	}
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            ans=0;
            for(int k=0;k<=i;k++)
            {
            	for(int g=0;g<m;g++) 
            	{
            		if(c[k][g]!='W') 
					{
						ans++;
					}
				}                   
			}//°×É« 
            for(int k=i+1;k<=j;k++)
            {
            	for(int g=0;g<m;g++)
				{
					if(c[k][g]!='B') 
					{
						ans++;
					}
				} 
                    
			}//À¶É« 
            for(int k=j+1;k<n;k++)
            {
            	for(int g=0;g<m;g++)
				{
					if(c[k][g]!='R')
					{
						ans++;
					}
				}                      
			}//ºìÉ« 
            sum=min(sum,ans);
        }
    }
    cout<<sum;
    return 0;
}
