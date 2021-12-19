#include <stdio.h>
struct point
{
	int x;
	int y;
}p;
struct point get(void);
void out(struct point);
int main()
{
	p=get();
	out(p);
	return 0;
}
struct point get(void)
{
	scanf("%d %d",&p.x,&p.y);
	printf("%d %d\n",p.x,p.y);
	return p;
}
void out(struct point p)
{
	printf("%d %d",p.x,p.y);
}
