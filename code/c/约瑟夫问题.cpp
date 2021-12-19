#include<iostream>
using namespace std;

typedef struct person{
	int code; //����˵����е�����ֵ 
	int num; //����˵ı�� 
	person* next;
}person;

void input(int &m, int &n, person* head)
{
	cin>>m>>n;	//������m��n 
	int i = n;
	
	person* fp = head;
	person* p;
	while(i--)	 
	{
		p = new person; //�����б� 
		cin>>p->code;	//�����Ӧ������ֵ 
		p->num = n - i; //�����Ӧ�ı�� 
		fp->next = p;	//��ָ��ָ���λ���޸� 
		fp = p;
	}
	
	p->next = head->next; //�����һ���˵�nextָ���һ���� 
}




void launch(int m, int n, person* head)
{
	int i = 1, count = n;
	person* p = head->next;  //pָ��ǰ�ڵ����һ���ڵ� 
	person* fp = head;
	while(count)
	{
		
		if(i == m) //�ж�������Ƿ񱨵�m��ʱ�� 
		{
			i = 1;
			m = p->code;	//����m 
			
			cout<<p->num<<' '; //�����Ӧ����� 
			fp->next = p->next; //ɾ���ڵ� 
			p = p->next;  
			count--; //�������ڵ�������һ 
			continue;
		}
		i++; //������һ 
		fp = fp->next; //����ָ�� 
		p = p->next; 
	}
}


int main()
{
	int m,n;
	person* head = new person;
	input(m,n,head);
	launch(m,n,head);
} 
