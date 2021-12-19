#include <stdio.h>
#include <stdlib.h>
struct monkey
{
	int num;
	struct monkey* next;
};
struct monkey* creat(int n)
{
	int i=1;
	struct monkey* head,* p1,* p2;
	head=(struct monkey*)malloc(sizeof(struct monkey));
	p1=head;
	p1->next=NULL;
	p2=p1;
	for(i=1;i<=n;i++)
	{
		if(i!=n)
		{
			p1->num=i;
			p1=(struct monkey*)malloc(sizeof(struct monkey));
			p2->next=p1;
			p2=p1;
		}
		else
		{
			p1->num=i;
			p1->next=head;
		}
	}
	return head;
}
void king (struct monkey* head,int num,int number)
{
	int count=1;
	int index=number;
	struct monkey* p1,* p2;
	p1=head;
	while(p1->next!=NULL)
	{
		if(count==num+1)
		{
			count=1;
		}
		if(count != num)
		{
			p2=p1;
			p1=p1->next;
		}
		else if( count == num)
		{
			p2->next=p1->next;
			free(p1);
			p1=p2->next;
			number--;
		}
		if(number==1)
		{
			p1->next=NULL;
		}
		count++;
	}
	printf("%d\n",p1->num);
}
int main()
{
	int n,i;
	struct monkey* head;
	scanf("%d",&n);
	int a[10][2]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i][0],&a[i][1]);
	}
	for(i=0;i<n;i++)
	{
		head=creat(a[i][0]);
		king(head,a[i][1],a[i][0]);
	}
	return 0;
}
