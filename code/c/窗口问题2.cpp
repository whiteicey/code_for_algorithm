#include<iostream>
#include<cstdio>
using namespace std;

typedef struct LR{
	int id; //��������� 
	int point[4]; //�������������� 
	struct LR *next;
}LR, *LinkList; 

void input(int& N,int& M,LR *f)
{
	
	int i; 
	LR *p;	//����һ���� 
	p->id = 1;	//�����Ӧ����Ϣ 
	cin>>N>>M;  
	cin>>p->point[0]>>p->point[1]>>p->point[2]>>p->point[3];
 
	p->next =NULL;
	LR *np;
	
	for(i = 2; i <= N;i++)
	{
		np = p;	 
		p = new LR; //����һ���������Ӧ����Ϣ 
		p->next = np;	
		f->next = p;	//�������ŵ���ǰ�� 
		p->id = i;
		cin>>p->point[0]>>p->point[1]>>p->point[2]>>p->point[3];
	}
}

void update(LR *np, LR *p, LR *f)
{
	np->next = p->next; //�������ŵ���ǰ�� 
	p->next = f->next;
	f->next = p;
}

void click(LR *f)
{
	int x,y,j = 0;
	cin>>x>>y;	//��������λ�� 
	
	LR *p = f ->next;
	LR *np = f;
	while(p) //�����������Ȼ���ж��Ƿ��ڿ��� 
	{
		if(x >= p->point[0] && y >= p->point[1] && x <= p->point[2] && y <= p->point[3]) 
		{
			j = 1; //�����ж��Ƿ�㵽�˿򣬲�����ѭ�� 
			break;
		}
		np = np->next;
		p = p->next;
	}
	
	if(j)
	{
		cout<<p->id<<endl; //��� 
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
