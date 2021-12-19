#include <stdio.h>
struct mode
{
	int num;
	struct mode* next;
};
int main()
{
	int n,i,index;
	scanf("%d",&n);
	struct mode a[n],* head,* p;
	head=&a[n-1];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i].num);
		if(i==0)
		{
			a[i].next=NULL;
		}
		else
		{
			a[i].next=&a[i-1];
		}
	}
	p=head;
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",p->num);
		p=p->next;
		
	}
	return 0;
}
