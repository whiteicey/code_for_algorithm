#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
int a[22], n, k, s;
bool is(int x)      //�ж�����
{
    if (x == 0 || x == 1) return false;
    if (x == 2) return true;
    for( int i = 2; i * i <= x ; i++)
        if (x % i == 0)
        return false;
    return true;
}
void fun(int i, int x, int st)    //���ѣ������ֱ�Ϊ��ѡ���ڼ�������Ŀǰ�Ӻͣ���Ҫ�Ӽ�����
{
    if (st == 0)               //k����ѡ��
    {
        if ( is(x) ) s ++;
        return;
    }
    if (n - i < st) return;            //��֦��ʣ�µ����Ѿ�����ѡ��k��
    fun(i + 1, x + a[i], st - 1);   //ѡ�����ݹ�
    fun(i + 1, x, st);         //��ѡ�����ݹ�
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
