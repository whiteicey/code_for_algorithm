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
    int t,n,m;
    cin>>t;
    while(t--)
	{
        cin>>n>>m;
        int f;
        f=n%(m+1);
        if(f!=0) 
			cout<<"first"<<endl;
        else 
			cout<<"second"<<endl;
    }
    return 0;
}
