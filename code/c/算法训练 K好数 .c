#define MOD 1000000007
#include <stdio.h>
int main()
{
    int k, l, i, j, x;
    long long dp[500][105]={0}, sum = 0;

    scanf("%d%d", &k, &l);

    for (i = 0; i < k; i++)
	{ // 1 λ��ʱ��Ϊ 1
        dp[1][i] = 1;
	}
    for (i = 2; i <= l; i++)
	{                    // λ��
        for (j = 0; j < k; j++)
		{                 // ����
            for (x = 0; x < k; x++)
			{             // �� 0 �� k ö�ٿɹ��� k ��������
                if (x != j - 1 && x != j + 1) 
				{   //����������Ϊ�����ڵ���
                    dp[i][j] += dp[i - 1][x]; 
					// ������Ϊ��һ�У�λ�� - 1���� x �����¿ɹ��� k ���������ĸ���
                    dp[i][j] %= MOD; 
					// ��ģ��ֹ���
                }
            }
        }
	}
    for (i = 1; i < k; i++) 
	{ // ������ l λ�������ܺ�
        sum += dp[l][i];
        sum %= MOD;
    }

    printf("%lld", sum);
    return 0;
}
