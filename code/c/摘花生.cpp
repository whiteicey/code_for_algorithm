#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,k;
	int W;
	int a[53][53];
	scanf("%d",&W);
	while(W>0)
	{
		scanf("%d%d%d",&n,&m,&k);
		int i,j;
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
				scanf("%d",&a[i][j]);
		int totaltime=0;
		int totalnut=0;
		int curi=0,curj;
		while(totaltime<k)
		{
			int maxi,maxj;
			int max=0;
			for(i=1;i<=n;i++)
				for(j=1;j<=m;j++)
					if(max<a[i][j])
					{
						max=a[i][j];
						maxi=i;
						maxj=j;
					}//求剩下的最大Nuts
			if(max==0) 
				break;
			if(curi==0)
				curj=maxj;//从路边开始
			if((totaltime+maxi+1+abs(maxi-curi)+abs(maxj-curj))<=k)
			{ 
				totaltime+=1+abs(maxi-curi)+abs(maxj-curj);
				curi=maxi;
				curj=maxj;
				totalnut+=a[maxi][maxj];
				a[maxi][maxj]=0;
			}
			else 
				break;
		}
		printf("%d\n",totalnut);
		W--;
	}
	return 0;
}
