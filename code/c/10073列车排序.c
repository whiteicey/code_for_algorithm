#include <stdio.h>
#include <stdlib.h>
#define len sizeof(struct line) 
struct line
{
	int num;
	struct line* next;
};
struct line* creat()
{
	struct line* p,* q,*head;
	int n=0;
	p=(struct line*)malloc(len);
	scanf("%d",&p->num);
	while(p->num!=0)
	{
		n++;
		if(n==1)
		{
			q=p;
			head=q;
			q->next=NULL;
		}
		else
		{
			q->next=p;
			q=p;
			q->next=NULL;
		}
		p=(struct line*)malloc(len);
		scanf("%d",&p->num);
	}
	return head;
}
int print(struct line* head1)
{
	struct line* p;
	p=head1;
	int n=0;
	while(p!=NULL)
	{
		printf("%d ",p->num);
		p=p->next; 
		n++;
	}
	return n;
}
struct line* change(struct line* head1)
{
	struct line* p1,* q1,* head2,*q2;
	p1=head1;
	int n=0;
	while(p1!=NULL)
	{
		n++;
		if(n==1)
		{
			q1=p1;
			q2=p1;
			p1=p1->next;
			q1->next=NULL;	
		}
		else
		{
			q1=p1;
			p1=p1->next;
			q1->next=q2;
			head2=q1;
			q2=q1;
		}
	}
	return head2;
}
int main()
{
	struct line* head1,* head2;
	int n;
	head1=creat();
	n=print(head1);
	printf("\n");
	printf("%d\n",n);
	if(n==1)
	{
		printf("1");
	}
	else
	{
		head2=change(head1); 
		print(head2);
	}
	
	return 0;
}
