#include <stdio.h>
#include <stdlib.h>
#define len sizeof(struct student)
struct student
{
	int id;
	int score;
	struct student* next;
};
struct student* creat()
{
	struct student* p1,*p2,* head;
	p1=(struct student*)malloc(len);
	p2=p1;
	int n=0;
	scanf("%d%d",&p1->id,&p1->score);
	if((p1->id==-1&&p1->score==-1))
	{
		head=NULL;
	}
	while((p1->id!=-1)&&(p1->score!=-1))
	{
		n++;
		if(n==1)
		{
			head=p1;
			p2=p1;
			p2->next=NULL;
		}
		else
		{
			p2->next=p1;
			p2=p1;
			p2->next=NULL;
		}
		p1=(struct student*)malloc(len);
		scanf("%d%d",&p1->id,&p1->score);
	}
	return head;
}
void print(struct student* head)
{
	while(head!=NULL)
	{
		printf("%d %d",head->id,head->score);
		head=head->next;
	}
}
struct student* del(struct student* head1,struct student* head2)
{
	struct student* p,* q,* head,* r,* s;
	p=head1;
	head=(struct student*)malloc(len);
	head->next=NULL;
	r=head;
	while(p!=NULL)
	{
		q=head2;
		while((q!=NULL)&&(p->id!=q->id))
		{
			q=q->next;
		}
		if(q==NULL)
		{
			r->next=p;
			r=r->next;
			p=r->next;
			r->next=NULL;
		}
		else
		{
			r->next=p->next;
			free(p);
			p=p->next;
			r->next=NULL;
		}
	}
	s=head;
	head=head->next;
	free(s);
	return head;
}
int main()
{
	struct student* head1,* head2;
	head1=creat();
	head2=creat();
	print(del(head1,head2));
	return 0;
}
