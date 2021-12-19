#include <iostream>
#include <cstring>
#include <stdlib.h> 
#define ElemType char
using namespace std; 
struct stack
{
	ElemType base;
	struct stack *next;
};
struct head
{
	struct stack *tail;
	struct stack *initial;
};
bool initstack(struct head& h)
{
	h.initial=NULL;
	h.tail=NULL;
	//cout<<h.initial<<endl<<h.tail;
	return true;
}
bool push(struct head& h,char c)
{
	struct stack* s=(struct stack*)malloc(sizeof(struct stack));
	if(!s)
	{
		return false;
	}
	s->base=c;
	if(h.initial == NULL)
	//if(num==0)
	{
		//num++;
		h.initial=s;
		h.tail=s;
		h.tail->next=NULL;
		return true;
	}
	h.tail->next=s;
	h.tail=s;
	h.tail->next=NULL;
	return true;
}
bool pop(struct head& h,char& t)
{
	if(h.initial==NULL)
	{
		return false;
	}
	struct stack* m = h.tail;
	t = h.tail->base;
	struct stack* tmp = h.initial;
	if(tmp==h.tail)
	{
		h.initial=NULL;
		h.tail=NULL;
		free(tmp);
		return true;
	}
	while(tmp->next!=h.tail)
	{
		tmp=tmp->next;
	}
	tmp->next=NULL;
	h.tail=tmp;
	//h.tail=NULL;
	free(m);
	return true;
}
bool empty(struct head& h)
{
	if(h.initial==NULL)
	{
		return true;
	}
	return false;
}
bool compare(char a[])
{
	struct head h;
	initstack(h);
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] == '(' || a[i] == '[' || a[i] == '{')
		{
			if(!push(h,a[i]))
			{
				return false;
			} 
		}
		else if(a[i] == '}' || a[i] == ']' || a[i] == ')')
		{
			char t;
			if(!pop(h,t))
			{
				return false;
			}
			if(t == '[' && a[i] != ']')
			{
				return false;
			}
			else if(t == '(' && a[i] != ')')
			{
				return false;
			}
			else if(t == '{' && a[i] != '}')
			{
				return false;
			}
		}
	}
	if(empty(h))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	char a[]="2*(x+y)/(1-x)@";
	if(compare(a))
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
