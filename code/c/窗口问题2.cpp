#include<iostream>
#include<cstdio>
using namespace std;

typedef struct LR{
	int id; //这个框的序号 
	int point[4]; //这个框的两个顶点 
	struct LR *next;
}LR, *LinkList; 

void input(int& N,int& M,LR *f)
{
	
	int i; 
	LR *p;	//创建一个框 
	p->id = 1;	//输入对应的信息 
	cin>>N>>M;  
	cin>>p->point[0]>>p->point[1]>>p->point[2]>>p->point[3];
 
	p->next =NULL;
	LR *np;
	
	for(i = 2; i <= N;i++)
	{
		np = p;	 
		p = new LR; //创建一个框并输入对应的信息 
		p->next = np;	
		f->next = p;	//将这个框放到最前面 
		p->id = i;
		cin>>p->point[0]>>p->point[1]>>p->point[2]>>p->point[3];
	}
}

void update(LR *np, LR *p, LR *f)
{
	np->next = p->next; //将这个框放到最前面 
	p->next = f->next;
	f->next = p;
}

void click(LR *f)
{
	int x,y,j = 0;
	cin>>x>>y;	//输入点击的位置 
	
	LR *p = f ->next;
	LR *np = f;
	while(p) //遍历这个链表，然后判断是否在框内 
	{
		if(x >= p->point[0] && y >= p->point[1] && x <= p->point[2] && y <= p->point[3]) 
		{
			j = 1; //用于判断是否点到了框，并结束循环 
			break;
		}
		np = np->next;
		p = p->next;
	}
	
	if(j)
	{
		cout<<p->id<<endl; //输出 
		update(np,p,f);
	}
	else
	{
		cout<<"IGNORED"<<endl;
	}
}

int main()
{
	LR *f = new LR;
	int N,M;
	input(N,M,f);
	while(M--)
	{
		LR *p = f->next;
		
		click(f);
	}
	return 0;
} 
