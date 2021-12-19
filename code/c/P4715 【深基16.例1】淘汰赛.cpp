#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
struct team
{
	int abli;
	int num;
}a[1000];
bool cmp(team a,team b)
{
	return a.abli<b.abli;
}
int main()
{
	int n,j=1,i;
	cin>>n;
	for(i=1;i<=pow(2,n);i++)
	{
		cin>>a[i].abli;
		a[i].num=i;
	}
	sort(a+1,a+i/2+1,cmp);
	sort(a+i/2+1,a+i+1,cmp);
	printf("%d",a[i/2].abli<a[i].abli?a[i/2].num:a[i].num);
	return 0;
}
