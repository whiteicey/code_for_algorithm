#include <iostream>
#include <cstdlib>
using namespace std;
#define MAXSIZE 100
#define Status int
#define ERROR -1
#define OK 1
#define ElemType int
typedef struct Queue
{
	ElemType* base;
	int rear;
	int length;
}Q;
Status InitQueue(Q& q)
{
	q.base = (ElemType*)malloc(MAXSIZE*sizeof(ElemType));
	if(q.base == NULL)
	{
		return ERROR;
	}
	else
	{
		q.rear = 0;
		q.length = 0; 
		return OK;
	}
} 
Status push(Q& q,ElemType e)
{
	//if((q.rear+1)%MAXSIZE == (q.rear+MAXSIZE-q.length)%MAXSIZE)
	if(q.length == MAXSIZE) 
	{
		return ERROR; 
	}
	q.base[q.rear] = e;
	q.rear = (q.rear+1)%MAXSIZE;
	q.length++;
	return OK;
}
Status pop(Q& q,ElemType& t)
{
	if(q.length == 0)
	{
		return ERROR;
	}
	t = q.base[(q.rear+MAXSIZE-q.length)%MAXSIZE];
	q.length--;
	return OK;
}
int main()
{
	Q head;
	InitQueue(head);
	push(head,3);
	ElemType t;
	pop(head,t);
	cout<<t;
}
