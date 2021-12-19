#include<iostream>
using namespace std;
int main()
{
    int n,k;
    int a[10000];
    cin>>n>>k;
    int num=0,s=n;
    for(int i=0;i<=k;i++)
    {
         cin>>a[i];
    }
    for(int i=0;i<=k;i++)
    {
        if(a[i]>n)
         {
             cout<<"No Solution!";
             return 0;
         }
         if(s-a[i]>=0)
         {
             s-=a[i];
         }
         else
         {
             num++;
             s=n-a[i];
         }
    }
    cout<<num;
    return 0;
}

