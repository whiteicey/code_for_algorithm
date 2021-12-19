#include<iostream>
using namespace std;

typedef struct person{
	int code; //这个人的手中的上限值 
	int num; //这个人的编号 
	person* next;
}person;

void input(int &m, int &n, person* head)
{
	cin>>m>>n;	//先输入m和n 
	int i = n;
	
	person* fp = head;
	person* p;
	while(i--)	 
	{
		p = new person; //创建列表 
		cin>>p->code;	//输入对应的上限值 
		p->num = n - i; //输入对应的编号 
		fp->next = p;	//将指针指向的位置修改 
		fp = p;
	}
	
	p->next = head->next; //将最后一个人的next指向第一个人 
}




void launch(int m, int n, person* head)
{
	int i = 1, count = n;
	person* p = head->next;  //p指向当前节点的下一个节点 
	person* fp = head;
	while(count)
	{
		
		if(i == m) //判断这个人是否报到m的时候 
		{
			i = 1;
			m = p->code;	//更新m 
			
			cout<<p->num<<' '; //输出对应的序号 
			fp->next = p->next; //删除节点 
			p = p->next;  
			count--; //将还存在的人数减一 
			continue;
		}
		i++; //报数加一 
		fp = fp->next; //更新指针 
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
