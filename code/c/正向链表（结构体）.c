#include <stdio.h>
struct student
{
	int x;
	struct student * next;
};
int main()
{
	int n,i;
	scanf("%d",&n);
	struct student p[n],* head,* a;
	head=&p[0];
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i].x);
		if(i<n-1)
		{
			p[i].next=&p[i+1];
		}
		else if(i==n-1)
		{
			p[i].next=NULL;
		}
	}
	a=head;
	for(i=0;i<n;i++)
	{
		printf("%d ",a->x);
		a=a->next;
	}
	return 0;
}
