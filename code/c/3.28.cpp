typedef struct LinkQueue
{
	ElemType data;
	LinkQueue* next;
}lq;
//lq* rear;
//int size;
Status InitQueue(lq& head)
{
	lq* head = (lq*)malloc(sizeof(lq));
	head->next = head;
	//rear = NULL;
	//size = 0;
	return OK;
}
Status link(lq& tail,ElemType e)
{
	lq* q = (lq*)malloc(sizeof(lq));
	if(!q)
	{
		return ERROR;
	}
	q->data = e;
	q->next = tail->next;
	tail->next=q;
	tail = tail->next;
	return OK;
}
ElemType dispatch(lq& tail,ElemType& t)
{
	if(tail->next == tail)
	{
		return ERROR;
	}
//	if(size == 1)
//	{
//		ElemType t;
//		t = rear->data;
//		free(rear);
//		size--;
//		return t;	
//	}
	lq* q;
	q = tail->next->next;
	tail->next->next = q->next;
	t = q->data;
	free(q);
	return OK;
}
