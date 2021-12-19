#include <stdio.h>
#include <stdlib.h>
struct list* head1,* head2;
struct list
{
	int num;
	struct list* next;
	struct list* after;
}; 
struct list* creat()
{
	int n=0;
	struct list* p,* q;
	p=(struct list*)malloc(sizeof(struct list));
	q=p;
	scanf("%d",&p->num);
	while(p->num!=0)
	{
		n++;
		if(n==1)
		{
			head1=p;
			head2=p;
			q=p;
			p->after=NULL;
			q->next=NULL;
		}
		else
		{
			q->next=p;
			p->after=q;
			p->next=NULL;
			head2=p;
			q=p;
		}
		p=(struct list*)malloc(sizeof(struct list));
		scanf("%d",&p->num);
	}
//	return head1,head2;
}
void printn(struct list* head)
{
	struct list* p;
	p=head;
	while(p!=NULL)
	{
		printf("%d ",p->num);
		p=p->next;
	}
}
void printa(struct list* head)
{
	struct list* p;
	p=head;
	while(p!=NULL)
	{
		printf("%d ",p->num);
		p=p->after;
	}
}
int main()
{
	creat();
	printn(head1);
	printf("\n");
	printa(head2);
	return 0;
} 
