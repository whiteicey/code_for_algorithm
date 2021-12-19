#include <bits/stdc++.h>
using namespace std;
int cnt[202020];
int main() 
{
	int T; 
	scanf("%d", &T);
	while(T--) 
	{
		int N; scanf("%d", &N);
        for(int i = 1; i <= N; i++) 
			cnt[i] = 0;
		for(int i = 1; i <= N; i++) 
		{
			int a; 
			scanf("%d", &a);
			cnt[a]++;//记录每个数字出现的次数
		}
		int x = 0;//数字的种类个数
		for(int i = 1; i <= N; i++) 
			if(cnt[i]) 
				x++;
		int ans = 0;
		for(int i = 1; i <= N; i++) 
		{
			ans = max(ans, min(cnt[i], x - 1));
			ans = max(ans, min(cnt[i] - 1, x));
		}
		printf("%d\n", ans);
	}
	return 0;
}
