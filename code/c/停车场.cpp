#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
const int maxn = 100010;
const int maxsize = 100010;
struct car
{
	int tl;
	int tr;
	int flag;
}r[maxn]; 

typedef struct Stack
{
    int* base;
    int* top;
    int stacksize;
}Stack;

typedef struct Queue
{
	int* base;
	int front;
	int rear;
}Queue;


void sinit(Stack &s)
{
	s.base = (int*)malloc(maxsize*sizeof(int));
	if(!s.base)
	{
		return;
	}
	s.top = s.base;
	s.stacksize = maxsize;
}

void spush(Stack &s,int e)
{
	if(s.top-s.base>s.stacksize)
	{
		s.base = (int*)realloc(s.base, (s.stacksize + maxsize) * sizeof(int));
	    if (!s.base)
		{
	    	return;
		}
		s.top = s.base + s.stacksize;
		s.stacksize += maxsize;
	}
	*s.top = e;
	s.top++;
}

void spop(Stack &s)
{
	if(s.top == s.base) 
	{
		return;
	}
	s.top--;
}

bool sempty(Stack s)
{
	return s.top == s.base;
}

int s_top(Stack s)
{
	if(s.top == s.base) return 0;
	int e = *(s.top-1);
	return e;
}

void qinit(Queue &q)
{
	q.base = (int*)malloc(maxsize*sizeof(int));
	if(!q.front){
		return;
	}
	q.front = q.rear = 0;
}

void qpush(Queue &q, int e)
{
	if((q.rear+1)%maxsize == q.front)
	{
		return;
	}
	q.base[q.rear] = e;
	q.rear = (q.rear+1)%maxsize;
}

void qpop(Queue &q)
{
	if(q.front == q.rear)
	{
		return;
	}
	q.front = (q.front+1)%maxsize;
}

bool qempty(Queue q)
{
	return q.front == q.rear;
}

int q_front(Queue q)
{
	if(q.front == q.rear) return 0;
	int e = q.base[q.front%maxsize];
	return e;
}

void solve()
{
	Stack a;
	Stack b;
	Queue q;
	Queue e;
	sinit(a);
	sinit(b);
	qinit(q);
	qinit(e); 
	int ans = 0;
	int n;
	float f;
	cin >> n >> f;
	int u,c,t;
	cin >> u >> c >> t;
	while(true)
	{
		if(!u)
		{
			r[c].tl = t;
			if(ans<n)
			{
			    spush(a,c);
				r[c].flag = 1;
				ans++;
			}
			else 
			{
			    qpush(q,c);
				r[c].flag = 0;	
			}
		}
		else 
		{
			if(ans)
			{
				if(r[c].flag)
				{
					while(s_top(a) != c&&!sempty(a))
					{  //移位开车 
					    spush(b,s_top(a)) ;
					    spop(a) ;
				    }
				    qpush(e,s_top(a)); // 存出栈顺序 
				    spop(a) ;
				    ans--; 
				    while(!sempty(b))
					{   // 放回去 
					    spush(a,s_top(b)) ;
					    spop(b) ;
			        }
			        if(!qempty(q))
					{
			    	    spush(a,q_front(q));
			    	    r[q_front(q)].flag = 1;
			    	    r[q_front(q)].tl = t;
			    	    qpop(q) ;
			    	    ans++;
				    }
				}
				else 
				{
					while(q_front(q) != c)
					{  //移位开车 
					    qpush(q,q_front(q)) ;
					    qpop(q) ;
				    } 
				    qpop(q) ;
				}
			}
			r[c].tr = t;
		}
		cin >> u >> c >> t;
		if(u == 0&&c == 0&&t == 0){
			break;
		}
	}
	
	while(!qempty(e))
	{
		cout << q_front(e);
		printf(" %.2f\n",(r[q_front(e) ].tr -r[q_front(e) ].tl)*f);
		qpop(e) ;
		ans++;
	}
    while(!sempty(a))
	{
    	spush(b,s_top(a));
    	spop(a) ;
	}
	ans = 0;
	while(!sempty(b))
	{
		if(ans) cout << " ";
		cout << s_top(b);
		spop(b);
		ans++;
	}
	cout << endl;
	ans = 0;
	while(!qempty(q))
	{
		if(ans) 
			cout << " ";
		cout << q_front(q) ;
		qpop(q) ;
		ans++;
	}
	cout << endl;
}

int main()
{
	solve();
	return 0;
} 

