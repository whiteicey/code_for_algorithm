#include <iostream>
#include <cstdio>
using namespace std;
int const N=2e5+5;
int c[N];            //存储这n堆糖
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		scanf("%d",&c[i]);
		n--;
		int a=0,b=0,u=0,cnt=0;     //a存Alice吃的糖数，b存储Bob吃的糖数
		//u存储上一次某人吃的糖数，cnt表示轮数。
		for(int i=0;i<=n;)
		{
			cnt++;
			int sum=c[i++];     //sum表示这次某人吃的糖数
			while(sum<=u&&i<=n) sum+=c[i++];    //算出吃几堆才能大于上次的
			a+=sum;
			u=sum;
			if(i>n) break;       //判断糖是否全被a吃完了，是则停止
			cnt++;
			sum=c[n--];          //因为是从右往左枚举，所以可以通过n--来操作
			while(sum<=u&&i<=n) sum+=c[n--];
			b+=sum;
			u=sum;
		}
		printf("%d %d %d\n",cnt,a,b);    //最后输出即可
	}
    return 0;
}
