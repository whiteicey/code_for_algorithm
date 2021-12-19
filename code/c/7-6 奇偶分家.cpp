#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
int main()
{
    int n,a=0,b=0,p;
    cin>>n;
    while(n--)
    {
    	cin>>p;
    	if(p%2==0)
    		b++;
    	else
    		a++;
	}
	cout<<a<<" "<<b;
    return 0;
} 
