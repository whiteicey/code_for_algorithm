#include <stdio.h>
#include <stdlib.h>
int n=0;
struct train
{
	int num;
	struct train* next;
};
struct train* creat()
{
	struct train* head,* p,* q;
	p=(struct train*)malloc(sizeof(struct train));
	head=p;
	q=p;
	head->next=NULL;
	scanf("%d",&p->num);
	while(p->num!=0)
	{
		n++;
		if(n==1)
		{
			head=p;
			q=p;
			q->next=NULL;
		}
		else
		{
			q->next=p;
			q=p;
			p=p->next;
			q->next=NULL;
		}
		p=(struct train*)malloc(sizeof(struct train));
		scanf("%d",&p->num);
	}
	return head;
}
void print(struct train* head)
{
	int i=0;
	struct train* head1;
	head1=head;
	for(i=0;i<n;i++)
	{
		printf("%d ",head1->num);
		head1=head1->next;
	}
	printf("\n");
}
struct train* change(struct train* head)
{
	struct train* p1,* q1,* lhead,* p2;
	p1=head;
	p1=p1->next;
	q1=head;
	p2=head;
	int i=0;
	while(p1!=NULL)
	{
		if(i==0)
		{
			p2=q1;
			p2->next=NULL;
			q1=p1;
			p1=p1->next;
			q1->next=p2;
			if(p1==NULL)
			{
				lhead=q1;
				break;
			}
		}
		else
		{
			p2=q1;
			q1=p1;
			p1=p1->next;
			q1->next=p2;
			if(p1==NULL)
			{
				lhead=q1;
				break;
			}
		}
		i++;
	}
	return lhead;
}
int main()
{
	struct train* head;
	head=creat();
	print(head);
	printf("%d\n",n);
	head=change(head);
	print(head);
	return 0;
}
