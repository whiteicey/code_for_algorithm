#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct student1)
struct student1
{
	int id;
	int score;
	struct student1* next;
};
//struct student2
//{
//	int id;
//	int score;
//	struct student2* next;
//};
void print(struct student1 *p);
struct student* creat();
struct student1* del_(struct student1* head1,struct student1* head2);
int main() 
{
	struct student1* head1;
	struct student1* head2;
	head1=creat();
	head2=creat();
	head1=del_(head1,head2);
	print(head1);
	return 0;
}

struct student* creat()//返回值为struct student的指针所以采用指针创建函数  
{
	struct student1 * head,* p1,* p2;
	int n=0;
	p1=(struct student1*)malloc(sizeof(struct student1));
	p2=p1; 
	p2->next=NULL;
	scanf("%d%d",&p1->id,&p1->score);
	if(p1->id==-1&&p1->score==-1)
	{
		head=NULL;
		return head;
	}
	while(p1->score!=-1&&p1->id!=-1)
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
		p2=p1;
		p1=(struct student1*)malloc(sizeof(struct student1));
		scanf("%d%d",&p1->id,&p1->score);
	}
	p2->next=NULL;
	
	return head;
}//建立链表 

void print(struct student1 *p)
{
	if(p!=NULL)
	{
		do
		{
			printf("%d %d\n",p->id,p->score);
			p=p->next;
		}while(p!=NULL);
	}
}//输出链表 

struct student1 *del_(struct student1* head1,struct student1* head2)
{
	struct student1* p,* q,* head,* r,* s;
	p=head1;
	head=(struct student1*)malloc(sizeof(struct student1));
	r=head;
	head->next=NULL; 
	while(p!=NULL)
	{
		q=head2;
		while((q!=NULL)&&(p->id!=q->id))
		{
			q=q->next;
		}
		if(q!=NULL)
		{
			r->next=p->next;
			free(p);
			p=r->next;
			r->next=NULL;
		}
		else
		{
			r->next=p;
			r=p;
			p=p->next;
			r->next=NULL;
		}
	}
	s=head;
	head=head->next;
	free(s);
	return head;
} //删除多余的链表 
