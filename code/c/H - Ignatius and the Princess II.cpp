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
    int n,m,a[10010];
    while(cin>>n>>m)
    {
        for(int i=1;i<=n;i++)
        {
        	a[i]=i;
		}
        m--;
        while(m--)
        {
            next_permutation(a+1,a+n+1);
        }
        for(int i=1;i<=n;i++)
        {
            if(i==1)
            {
                cout<<a[i];
                continue;
            }
            cout<<' '<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
