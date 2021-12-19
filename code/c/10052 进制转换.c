#include <stdio.h>
int main()
{
	void xtod(int x,int y);
	int m,n;
	scanf("%x%x",&m,&n);
	xtod(m,n);
	return 0;
}
void xtod(int x,int y)
{
	printf("%d",x+y); 
}
