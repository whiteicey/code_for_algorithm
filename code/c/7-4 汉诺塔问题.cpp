#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
char a[1000],b[1000],c[1000];
int hannuota(int n,char a[],char b[],char c[])
{
    if(n==1)
    {
        //ֻ��һ�����ӵ������ֱ�ӽ���һ�����ϵ������ƶ�����������
        printf("%s->%s\n",a,c);
    }
    else{
        //1.�Ƚ���һ������n-1������ȫ��ͨ�����������ƶ����ڶ�������
        hannuota(n-1,a, c, b);
        //2.�ٽ�ʣ�µ�һ�������ƶ�������������
        printf("%s->%s\n",a,c);
        //3.��󽫵ڶ������ϵ�����ͨ����һ�����ƶ�������������
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
