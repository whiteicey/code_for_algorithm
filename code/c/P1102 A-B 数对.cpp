//#include <iostream>
//#include <cstdio>
//#include <set>
//#include <cstring>
//using namespace std;
//inline int read()
//{
//    int s = 0, w = 1; char ch = getchar();
//    while(ch < '0' || ch > '9'){ if(ch == '-') w = -1; ch = getchar();}
//    while(ch >= '0' && ch <= '9') s = s * 10 + ch - '0', ch = getchar();
//    return s * w;
//} // 这是能判负数的C++快读模板
//int main()
//{
//	int m,c;
//	m=read();
//	c=read();
//	multiset<int>a;
//	int i,temp;
//	for(i=0;i<m;i++)
//	{
//		temp=read();
//		a.insert(temp);
//	}
//	int sum=0;
//	for(multiset<int>::iterator it=a.begin();it!=a.end();it++)
//	{
//		if(a.find(*it+c)!=a.end())
//		{
//			sum+=a.count(*it+c);
//		}
//	}
//	printf("%d",sum);
//	return 0;
//}
//会超时，但是思路可解，超时不在输入输出上，无所谓
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 10;
int n , c;
int a[N];
int main () 
{
    cin >> n >> c;
    for(int i = 1 ; i <= n ; i ++) cin >> a[i];
    sort(a + 1 , a + 1 + n);
    int l = 1, r1 = 1 , r2 = 1;
    ll ans = 0;
    for(l = 1 ; l <= n ; l ++) 
	{
        while(r1 <= n && a[r1] - a[l] <= c) 
			r1 ++;
        while(r2 <= n && a[r2] - a[l] < c ) 
			r2 ++;
        if(a[r2] - a[l] == c && a[r1 - 1] - a[l] == c && r1 - 1 >= 1)   
            ans += r1 - r2;
    }
    cout << ans;
    return 0;
} 
