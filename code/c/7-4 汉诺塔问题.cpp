#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
char a[1000],b[1000],c[1000];
int hannuota(int n,char a[],char b[],char c[])
{
    if(n==1)
    {
        //只有一个盘子的情况下直接将第一个塔上的盘子移动到第三个塔
        printf("%s->%s\n",a,c);
    }
    else{
        //1.先将第一个塔的n-1个盘子全部通过第三个塔移动到第二个塔上
        hannuota(n-1,a, c, b);
        //2.再将剩下的一个盘子移动到第三个塔上
        printf("%s->%s\n",a,c);
        //3.最后将第二个塔上的盘子通过第一个塔移动到第三个塔上
        hannuota(n-1, b, a, c);
    }
    return 1;
}
int main()
{
	int num;
	char m,n,s;	
	scanf("%d",&num);
	m=getchar();
	gets(a);
	gets(b);
	gets(c);
	hannuota(num,a,b,c);
	return 0;
 } 
