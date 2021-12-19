#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
struct guanzhu
{
    string id;
    int num;
}id[100000];
bool cmp(guanzhu a,guanzhu b)
{
    return a.id<b.id;
}
int main()
{
    int n,m;
    cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        mp[s]=1;
    }
    cin>>m;
    int sum=0;
    for(int i=0;i<m;i++)
    {
        cin>>id[i].id>>id[i].num;
        sum+=id[i].num;
    }
    double av=(double)sum/m;
    sort(id,id+m,cmp);
    int flag=0;
    for(int i=0;i<m;i++)
    {
        if(id[i].num>av&&!mp[id[i].id])
        {
            cout<<id[i].id<<endl;
            flag=1;
        }
    }
    if(!flag)
    {
        cout<<"Bing Mei You"<<endl;
    }
    return 0;
}
