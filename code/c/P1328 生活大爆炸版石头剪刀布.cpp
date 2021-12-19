#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,na,nb,x,y,xa[201],xb[201],i,j,a,ans,bns;
    cin>>n>>na>>nb;
    for(i=1;i<=na;i++)
    {
        cin>>x;
        xa[i]=x;
    }
    for(j=1;j<=nb;j++)
    {
        cin>>y;
        xb[j]=y;
    }
    ans=0;
    bns=0;
    i=0;
    j=0;
    for(a=1;a<=n;a++)
    {
        i++;
        j++;
        if(i>na)i=1;
        if(j>nb)j=1;
        if(xa[i]==0&&xb[j]==1)bns++;
        if(xa[i]==0&&xb[j]==2)ans++;
        if(xa[i]==0&&xb[j]==3)ans++;
        if(xa[i]==0&&xb[j]==4)bns++;
        if(xa[i]==1&&xb[j]==0)ans++;
        if(xa[i]==1&&xb[j]==2)bns++;
        if(xa[i]==1&&xb[j]==3)ans++;
        if(xa[i]==1&&xb[j]==4)bns++;
        if(xa[i]==2&&xb[j]==0)bns++;
        if(xa[i]==2&&xb[j]==1)ans++;
        if(xa[i]==2&&xb[j]==3)bns++;
        if(xa[i]==2&&xb[j]==4)ans++;
        if(xa[i]==3&&xb[j]==0)bns++;
        if(xa[i]==3&&xb[j]==1)bns++;
        if(xa[i]==3&&xb[j]==2)ans++;
        if(xa[i]==3&&xb[j]==4)ans++;
        if(xa[i]==4&&xb[j]==0)ans++;
        if(xa[i]==4&&xb[j]==1)ans++;
        if(xa[i]==4&&xb[j]==2)bns++;
        if(xa[i]==4&&xb[j]==3)bns++;
    }
    cout<<ans<<" "<<bns;
    return 0;
}
