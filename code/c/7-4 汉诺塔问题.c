#include <stdio.h>
void hlt(int n,char a,char b,char c)
{
    if(n==1)
    {
        printf("%c->%c\n",a,c);
        return;
    }
    else
    {
        hlt(n-1,a,c,b);//那么需要把n上的n-1块从a上搬运到中间b上，
        printf("%c->%c\n",a,c);//然后把第n块从a搬运到c上，
        hlt(n-1,b,a,c);//最后把b上的n-1块再搬运到c上即可。
        return ;
    }
 
}
int main()
{
	int num;
	char a,b,c,m,n,s;
	scanf("%d%c%c%c%c%c%c",&num,&m,&a,&n,&b,&s,&c);
	hlt(num,a,b,c);
	return 0;
 } 
