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
struct time
{
    int b,e;
}a[105];
bool cmp(time x,time y)
{
    return x.e<y.e;
}
int main()
{
    int n;
    int sum;
    while(~scanf("%d",&n))
    {
    	if(n==0) break;
        sum=1;
        int temp;
        for(int i=0;i<n;i++)
        {
        	cin>>a[i].b>>a[i].e;
        }
        sort(a,a+n,cmp);
        temp=a[0].e;
        for(int i=1;i<n;i++)
        {
            if(a[i].e>temp&&a[i].b>=temp)
            {
                sum++;
                temp=a[i].e;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
