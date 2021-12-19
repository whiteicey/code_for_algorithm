#include <stdio.h> 
#include <stdlib.h>
struct form
{
	int num;
	struct form* next;
	struct form* previous;
};



void print(int index,struct form* end)
{
	int i;
	struct form* p1;
	p1=end;
	for(i=1;i<=index;i++)
	{
		if(i!=index)
		{
			p1=p1->previous; 
		}
		else
		{
			printf("%d",p1->num);
			return;
		}
	}
}



int main()
{
	int n,m,index=0;
	scanf("%d",&n);
	struct form* end,* head,* p,* q;
	head=(struct form* )malloc(sizeof(struct form));
	p=head;
	q=p;
	p->previous=NULL;
	while(1)
	{
		scanf("%d",&m);
		if(m==-1)
		{
			if(index>=n)
			{
				print(n,end);
			}
			else
			{
				printf("NULL");
			}
			return 0;
		}
		else
		{
			p->num=m;
			q->next=q;
			p->next=NULL;
			p->previous=q;
			q=p;
			end=q;
			p=(struct form* )malloc(sizeof(struct form));	
			index++;
		}
	}
}
