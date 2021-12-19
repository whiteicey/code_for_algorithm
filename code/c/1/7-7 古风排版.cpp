#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
using namespace std;
char map[1005][1005];
int main()
{
	int n,m;
	string s;
//	char s[1005];
	cin>>n;
	getchar(); 
	getline(cin,s);
  	//gets(s);
  	int len=s.length();
  	m=len/n;
  	if(len%n!=0) 
	{
	 	m++; 	
	}
  	for(int i=len;i<n*m;i++)
  	{
  		s[i]+=' ';
  	}
  	int i=0;
  	for(int k=m-1;k>=0;k--)
  	{
    	for(int j=0;j<n;j++)
		{
        	map[j][k]=s[i++];
    	}
  	}
  	for(int j=0;j<n;j++)
  	{ 
    	for(int k=0;k<m;k++)
    	{
    		cout<<map[j][k];
		}	
    	cout<<endl;
  	}
  	return 0;
}
