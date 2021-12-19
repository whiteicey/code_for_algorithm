#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
struct cha
{
    int cnt,num;
}cha[1001];
bool cmp(struct cha a,struct cha b) 
{
    if(a.cnt!=b.cnt)
    {
    	return a.cnt>b.cnt;
	}
    else 
	{
		return a.num>b.num;
	}
}
int main()
{
    int n,k,a;
    cin>>n;
    while(n--)
    {
        cin>>k;
        while(k--)
        {
            cin>>a;
            cha[a].cnt++;
            cha[a].num=a;
        }
    }
    sort(cha+1,cha+1001,cmp);
    cout<<cha[1].num<<" "<<cha[1].cnt;
	return 0;
}
