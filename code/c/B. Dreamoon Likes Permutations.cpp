#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <cstring>
using namespace std;
const int N=2e5+10;
int a[N];
int mxl[N];
int mxr[N];
void solve()
{
    memset(mxl,0,sizeof(mxl));
    memset(mxr,0,sizeof(mxr));
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
	{
        cin>>a[i];
    }
    set<int>s;
    int l=0,r=0;
    for(int i=1;i<=n;i++)
	{
        if(s.find(a[i])==s.end())
            s.insert(a[i]);
        else 
		{
            l=i-1;
            break;
        }
    }
    s.clear();
    for(int i=n;i>=1;i--)
	{
        if(s.find(a[i])==s.end())
        {
        	s.insert(a[i]);
		}
        else 
		{
            r=i+1;
            break;
        }
    }
    vector<int>ans;
    for(int i=1;i<=n;i++) 
	{
		mxl[i]=max(mxl[i-1],a[i]);
	}
    for(int i=n;i>=1;i--) 
	{
		mxr[i]=max(mxr[i+1],a[i]);
	}
    for(int i=1;i<n;i++)
	{
        if(i<=l && i+1>=r && mxl[i]==i && mxr[i+1] == n-i) // 要判断当前有没有重复的值  
		{
			ans.push_back(i);
		}
    }
    if(ans.size())
	{
        cout<<ans.size()<<"\n";
        for(auto i:ans)
        {
        	cout<<i<<' '<<n-i<<"\n";
		}            
    }
    else 
	{
		puts("0");
	}
}
int main()
{
    int t;
    cin>>t;
    while(t--)
	{
        solve();
    }
    return 0;
}
