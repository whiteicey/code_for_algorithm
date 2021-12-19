#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int size=1e6;
int line[size+10],row[size+10];
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=k;i++) scanf("%d%d",&line[i],&row[i]);
	sort(line+1,line+k+1);                        
	sort(row+1,row+k+1);                          
	ll sum=0;
	ll cnt=0;
	for(int i=1;i<=k;i++) if(line[i]!=line[i-1]) cnt++; 
	sum+=cnt*n;
	ll count=0;
	for(int i=1;i<=k;i++) if(row[i]!=row[i-1]) count++; 
	sum+=count*(n-cnt);
	printf("%lld\n",sum);                       
	return 0;
}
