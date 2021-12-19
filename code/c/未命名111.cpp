#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<vector>
#include<stack>
#define fastest std::ios::sync_with_stdio(false);  std::cin.tie(0)
#define FIN freopen("input.txt","r",stdin)
#define FON freopen("output.txt","w+",stdout)
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define scd(a)  scanf(" %lld",&a)
#define scdd(a,b)	scanf(" %lld %lld",&a,&b)
#define scddd(a,b,c)	scanf(" %lld %lld %lld",&a,&b,&c)
#define scf(a)  scanf(" %lf",&a)
#define scff(a,b)	scanf(" %lf %lf",&a,&b)
#define scfff(a,b,c)	scanf(" %lf %lf %lf",&a,&b,&c)
#define pstr(a) printf("a")
#define ptab(a)	printf("%lld ",a)
#define pdn(a)	printf("%lld\n",a)
#define pddn(a,b)	printf("%lld %lld\n",a,b)
#define pdddn(a,b,c)	printf("%lld %lld %lld\n",a,b,c)
#define int long long
#define ull unsigned long long
#define sd signed
#define str string
#define cls(a,b) memset(a,b,sizeof(a))
#define clsfr(i,a,b,c,d) for(long long i=a;i<b;i++){ c[i]=d;}
#define clsfre(i,a,b,c,d) for(long long i=a;i<=b;i++){ c[i]=d};
#define inf 0x3f3f3f3f
#define Inf 0x3f3f3f3f3f3f3f3f
#define strfr(i,a,b) for(long long i=a;b[i]!='\0';i++)
#define	fr(i,a,b) for(long long i=a;i<b;i++)
#define	fre(i,a,b) for(long long i=a;i<=b;i++)
#define	refr(i,a,b) for(long long i=a;i>b;i--)
#define	refre(i,a,b) for(long long i=a;i>=b;i--)
#define ls (k<<1)
#define rs (k<<1|1)
#define eps (1e-10)
#define mod (1e9+7)
#define ei (2.71828182)
#define pi (atan(1)*4)
#define lcm(a,b) (a*b/gcd(a,b))
using namespace std;
int t,n;
int a[110];
int cnt;
int book[110];
sd main() {
	while(~scd(t)) {
		while(t--) {
			scd(n);
			fre(i,1,n) {
				scd(a[i]);
			}
			int nx=2*n;
			int ans=0;
			fre(k,1,nx) {
				cnt=0;
				cls(book,0);
				fre(i,1,n) {
					if(book[i]==0) {
						fre(j,i+1,n) {
							if(book[j]==0&&a[i]+a[j]==k) {//cout<<i<<"IIIIIJJJJ"<<j<<endl;
								book[i]=1;
								book[j]=1;
								cnt++;
								break;
							}
						}
					}
				}
//				cout<<cnt<<"!!!"<<k<<endl;
				ans=MAX(ans,cnt);
			}
			pdn(ans);
		}
	}
	return 0;
}

