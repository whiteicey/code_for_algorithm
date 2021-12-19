#include <iostream>
#include <cstdio>
#include <cmath>
#include <map>
#include <algorithm>
#include <set>
#include <vector>
#include <stack>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    long long b,n,t,flag;
    cin>>t;
    while(t--)
    {
    	cin>>n>>b;
        for(int i=0;i<9973;i++)
        {
        	if((((b%9973)*i)%9973-n)%9973==0)
            {
           		flag=i;
              	break;
            }
		}	
        cout<<flag<<endl;    
    }
    return 0;
}
