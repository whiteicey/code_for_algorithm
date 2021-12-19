#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
int g,p,l,t;
int main()
{
    string s;
   	cin>>s;
   	double m;
    g=count(s.begin(),s.end(),'2');
    int len=s.length();
    if(s[0]=='-')
    {
    	len--;
	} 
    m=(double)(g)/len*100.0;
    if(s[0]=='-')
    {
        m*=1.5;
        if((s[len]-'0')%2==0) 
        {
        	m*=2;  
		}                        
    }
    else
    {
        if((s[len-1]-'0')%2==0)
        {
        	m*=2;
		}        
    }
    printf("%.2lf%%\n",m);
    return 0;
} 
