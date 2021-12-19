#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int e[1010][1010],dis[1010],bk[1010];
int main()
{
	int i,j,minn,t1,t2,t3,n,u,v,t;
	int inf=0x3f3f3f3f;
	while(cin>>t>>n){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				e[i][j]=inf;
			}
			e[i][i]=0;
		}
		for(int i=0;i<t;i++){
			int t1,t2,t3;
			cin>>t1>>t2>>t3;
			e[t1][t2]=min(e[t1][t2],t3);
			e[t2][t1]=min(e[t2][t1],t3);
		}
		for(int i=1;i<=n;i++){
			dis[i]=e[1][i];
		}
		memset(bk,0,sizeof(bk));
		bk[1]=1;
		for(int i=1;i<=n-1;i++){
			int minn=0x3f3f3f3f;
			for(int j=1;j<=n;j++){
				if(bk[j]!=1&&dis[j]<minn){
					minn=dis[j];
					u=j;
				}
			}
			bk[u]=1;
			for(v=1;v<=n;v++){
				if(e[u][v]<inf&&dis[v]>dis[u]+e[u][v]){
					dis[v]=dis[u]+e[u][v];
				}
			}
		}
		cout<<dis[n]<<endl;
	}
	return 0;
}
