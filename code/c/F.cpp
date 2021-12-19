#include<cstdio>
using namespace std;

long long int all_num = 0;

inline bool check(long long int x)
{
//	printf("a:%lld\t", x);
	long long int u[16] = {};
	int len = 0;
	while(x)
		u[len++] = x%10, x/=10;
	int mx = u[0], mn = u[0];
	for (int i=1; i<len; i++)
		mx = u[i]>mx?u[i]:mx, mn = u[i]<mn?u[i]:mn;
	long long int b = 0;
	for (int i=len-2; i>=0; i--)
		b = 10*b+u[i];
	if (len)
		b = 10*b+u[len-1];
//	printf("b:%lld\t", b);
	b = b+mn-mx;
//	printf("ans:%lld\t", b);
	int odd_num = 0, even_num = 0;
	while(b)
	{
		if (b&1)	odd_num++;
		else		even_num++;
		b/=10;
	}
//	printf("(%d,%d)\t", odd_num, even_num);
	bool temp =  ((even_num&1) || !(odd_num&1));
//	printf(temp?"Y\n":"N\n");
	if (temp)	all_num++;
	return temp;
}

int main()
{
	long long int t;
//	freopen("list.txt", "w", stdout);
//	while(scanf("%lld", &t)!=EOF)
	for (t=0; t<=100000000; t++)
//	{
		check(t);

	return 0;
}
