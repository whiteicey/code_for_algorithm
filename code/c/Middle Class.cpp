//Dlove's template
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>

#define R register
#define ll long long
#define ull unsigned long long
#define db double
#define ld long double
#define Ls root << 1
#define Rs Ls | 1
#define sqr(_x) ((_x) * (_x))
#define Cmax(_a, _b) ((_a) < (_b) ? (_a) = (_b), 1 : 0)
#define Cmin(_a, _b) ((_a) > (_b) ? (_a) = (_b), 1 : 0)
#define Max(_a, _b) ((_a) > (_b) ? (_a) : (_b))
#define Min(_a, _b) ((_a) < (_b) ? (_a) : (_b))
#define Abs(_x) (_x < 0 ? (-(_x)) : (_x))

using namespace std;

//#define getchar() (_S == _T && (_T = (_S =_B) + fread(_B, 1, 1 << 15, stdin), _S == _T) ? 0 : *_S++)
//char _B[1 << 15], *_S = _B, *_T = _B;

inline int read()
{
 R int a = 0, b = 1; R char c = getchar();
 for(; c < '0' || c > '9'; c = getchar()) (c == '-') ? b = -1 : 0;
 for(; c >= '0' && c <= '9'; c = getchar()) a = (a << 1) + (a << 3) + c - '0';
 return a * b;
}
inline ll lread()
{
 R ll a = 0, b = 1; R char c = getchar();
 for(; c < '0' || c > '9'; c = getchar()) (c == '-') ? b = -1 : 0;
 for(; c >= '0' && c <= '9'; c = getchar()) a = (a << 1) + (a << 3) + c - '0';
 return a * b;
}
int a[100000];
int main()
{
 //printf("%d\n", read() + read());
 	int t;
 	t = read();
 	while(t--)
 	{
 		memset(a,0,sizeof(a));
 		int m,n,res=0;
		long long ans=0;
 		m = read();
 		n = read();
 		for(int i=0;i<m;i++)
 		{
 			a[i] = read();
		}
		sort(a,a+m);
		for(int i=m-1;i>=0;i--)
		{
			if(ans+a[i]-n>=0)
			{
				ans+=a[i]-n;
				res++;
			} 
			else
			{
				break;
			}
		}
		printf("%d\n",res);
	} 
 	return 0;
}


