#include <stdio.h>
void hanoi(int n,char one,char two,char three);
void move(char x,char y,int n);
int main()
{
	int m;
	//printf("the steps to move hanoi :\n");
	 char a[2],b[2],c[2];
	 scanf("%d%s%s%s",&m,a,b,c);
	 //printf("%c %c %c\n", a[0],b[0],c[0]);
	hanoi(m,a[0],b[0],c[0]);
	return 0;
}
void hanoi(int n,char one,char two,char three)
{
	if(n==1)
	{
		move(one,three,n);
	}
	else
	{
		hanoi(n-1,one,three,two);
		move(one,three,n);
		hanoi(n-1,two,one,three);
	}
}
void move(char x,char y,int n)
{
	printf("%d:%c->%c\n",n,x,y);
}

