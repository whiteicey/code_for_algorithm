#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
	//int a[100000];
	int n;
	double num,sum=0,temp;
	scanf("%d%lf",&n,&num);
	int i;
	for(i=n;i>=0;i--)
	{
		scanf("%lf",&temp);
		sum+=temp*pow(num,i);
	}
	printf("%.3lf",sum);
	return 0;
}
