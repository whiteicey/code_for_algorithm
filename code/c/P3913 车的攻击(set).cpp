#include<cstdio>
#include<algorithm>
#include<set>
using namespace std;
typedef long long ll;
set<int>a,b;
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=k;i++)
	{ 
		int line,row;
		scanf("%d%d",&line,&row);
		a.insert(line);
		b.insert(row);
	}                         
	ll sum=0;
	ll cnt=0;
	sum+=a.size()*n;
	ll count=0;
	sum+=b.size()*(n-a.size());
	printf("%lld\n",sum);                       
	return 0;
}
