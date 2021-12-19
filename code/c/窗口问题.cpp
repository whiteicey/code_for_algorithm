#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct window
{
	int x1,x2,y1,y2,num;
	struct window* next;
	struct window* prior;
};
struct window* now;
int find(int x,int y)
{
	struct window* p;
	p=now;
	while(p!=NULL)
	{
		if(p->x1<=x&&p->x2>=x&&p->y1<=y&&p->y2>=y)
		{
			if(p->prior==NULL)
			{
				p->next->prior=p->prior;
				p->prior=now;
				p->next=now->next;
				now->next=p;
				now=p;
				return p->num;
			}
			if(p->next==NULL)
			{
				return p->num;
			}
			p->prior->next=p->next;
			p->next->prior=p->prior;
			p->next=now->next;
			p->prior=now;
			now->next=p;
			now=p;
			return p->num;
		}
		p=p->prior;
	}
	if(p==NULL)
	{
		return 0;
	}
}
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		struct window* body = (struct window*)malloc(sizeof(struct window));
		if(i==1)
		{
			now=body;
			body->prior=NULL;
			body->num=i;
			body->next=NULL;
			body->x1=x1;
			body->x2=x2;
			body->y1=y1;
			body->y2=y2;	
			continue;	
		}
		body->prior=now;
		now->next=body;
		body->num=i;
		body->next=NULL;
		body->x1=x1;
		body->x2=x2;
		body->y1=y1;
		body->y2=y2;	
		now=body;
	}
	for(int i=1;i<=n;i++)
	{
		int x,y,flag;
		cin>>x>>y;
		flag=find(x,y);
		if(!flag)
		{
			cout<<"IGNORED"<<'\n';
		}
		else
		{
			cout<<flag<<'\n';
		}
	}
	return 0;
} 
