#include <iostream>
#include <algorithm>
using namespace std;
int a[35],b[35],n,k;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int i,ans=0;
        for(i=1;i<=n;i++) scanf("%d",&a[i]);
        for(i=1;i<=n;i++) scanf("%d",&b[i]);
        sort(a+1,a+n+1);
        sort(b+1,b+n+1);
        for(i=1;i<=k;i++)
        {
            if(a[i]>b[n-i+1]) break;
            else swap(a[i],b[n-i+1]);
        }
        for(i=1;i<=n;i++)ans+=a[i];
        cout<<ans<<endl;
    }
    return 0;
}
