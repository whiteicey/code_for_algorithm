#include <stdio.h>
struct point
{
	int x;
	int y;
}p;
struct point* get(struct point* p);
void out(struct point p);
void print(const struct point* p);
int main()
{
	//sttuct date* p=&myday;
	//p->month;
	get(&p);
	out(p);
	//out(*get(&p));
	//print(get(&p));
}
struct point* get(struct point* p)
{
	scanf("%d",&p->x);
	scanf("%d",&p->y);
	printf("%d %d\n",p->x,p->y);
	return p;
}
void out(struct point p)
{
	printf("%d %d\n",p.x,p.y);
}
void print(const struct point* p)
{
	printf("%d %d",p->x,p->y);
}
