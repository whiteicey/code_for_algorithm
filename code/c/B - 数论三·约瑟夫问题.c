#include <stdio.h>
#include <stdlib.h>
struct monkey
{
	int num;
	struct monkey* next;
};
struct monkey* creat(int n)
{
	struct monkey* head1,* p,* q;
	p=(struct monkey*)malloc(sizeof(struct monkey));
	q=p;
	int i=0,index=1;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			p->num=index;
			head1=p;
			q->next=NULL;
			q=p;
		}
		else if(i!=0&&i!=n-1)
		{
			p->num=index;
			q->next=p;
			q=p;
			q->next=NULL;
		}
		else if(i==n-1)
		{
			p->num=index;
			q->next=p;
			q=p;
			q->next=head1;
		}
		p=(struct monkey*)malloc(sizeof(struct monkey));
		index++;
	}
	return head1;
}
void sort(struct monkey* head,int m,int n)
{
	int index=1;
	struct monkey* p1,* q1;
	p1=head;
	//p1=p1->next;
	q1=head;
	while(n!=1)
	{
		if(index==m+1)
		{
			index=1;
		}
		if(index!=m)
		{
			q1=p1;
			p1=p1->next;
		}
		else
		{
			if(n!=2)
			{
				q1->next=p1->next;
				free(p1);
				q1=q1->next;
				p1=q1;
				n--;
			}
			else
			{
				q1->next=NULL;
				free(p1);
				n--;
			}
		}
		index++;
	}
	printf("%d\n",q1->num-1);
	free(q1);
}
int main()
{
	struct monkey* head;
	int k;
	scanf("%d",&k);
	int i=0;
	int m,n;
	while(i<k)
	{
		scanf("%d%d",&m,&n);
		head=creat(m);
		sort(head,n,m);
		i++;
	}
	return 0;
}
