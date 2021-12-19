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
	head=&a[0];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i].num);
		if(i==n-1)
		{
			a[i].next=NULL;
		}
		else
		{
			a[i].next=&a[i+1];
		}
	}
	if(n!=1)
	{
		index=n-2;
		p=a[index].next;
		for(i=n-1;i>=0;i--)
		{
			printf("%d ",p->num);
			index=index-1;
			if(index==-1)
			{
				p=head;
				//printf("%d",a[0].num);
				//break;
			}
			else
			{
				p=a[index].next;
			}
		}
	}
	else
	{
		printf("%d",a[0].num);
	}
	
	return 0;
}
