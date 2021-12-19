#define MOD 1000000007
#include <stdio.h>
int main()
{
    int k, l, i, j, x;
    long long dp[500][105]={0}, sum = 0;

    scanf("%d%d", &k, &l);

    for (i = 0; i < k; i++)
	{ // 1 位数时都为 1
        dp[1][i] = 1;
	}
    for (i = 2; i <= l; i++)
	{                    // 位数
        for (j = 0; j < k; j++)
		{                 // 进制
            for (x = 0; x < k; x++)
			{             // 从 0 到 k 枚举可构成 k 好数的数
                if (x != j - 1 && x != j + 1) 
				{   //左右两数均为不相邻的数
                    dp[i][j] += dp[i - 1][x]; 
					// 个数即为上一行（位数 - 1）中 x 进制下可构成 k 好数的数的个数
                    dp[i][j] %= MOD; 
					// 求模防止溢出
                }
            }
        }
	}
    for (i = 1; i < k; i++) 
	{ // 最后求出 l 位个数的总和
        sum += dp[l][i];
        sum %= MOD;
    }

    printf("%lld", sum);
    return 0;
}
