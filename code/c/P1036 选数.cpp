#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
int a[22], n, k, s;
bool is(int x)      //判断素数
{
    if (x == 0 || x == 1) return false;
    if (x == 2) return true;
    for( int i = 2; i * i <= x ; i++)
        if (x % i == 0)
        return false;
    return true;
}
void fun(int i, int x, int st)    //深搜，参数分别为：选到第几个数，目前加和，还要加几个数
{
    if (st == 0)               //k个数选完
    {
        if ( is(x) ) s ++;
        return;
    }
    if (n - i < st) return;            //剪枝，剩下的数已经不够选到k个
    fun(i + 1, x + a[i], st - 1);   //选此数递归
    fun(i + 1, x, st);         //不选此数递归
}
int main()
{
    int i,j;
    while(~scanf("%d %d", &n, &k))
    {
        s = 0;
        for( i = 0; i < n; i++)
            scanf("%d", &a[i]);
        fun(0,0,k);
        printf("%d\n", s);
    }
    return 0;
}
