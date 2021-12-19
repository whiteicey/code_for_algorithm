#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;
const int maxsize = 10010;
bool flag = 0;

typedef struct Stack
{
    int* base;
    int* top;
    int stacksize;
}Stack;

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
	if(s.top == s.base) 
		return 0;
	int e = *(s.top-1);
	return e;
}

int s_size(Stack s)
{
	int ans = 0;
	while(!sempty(s))
	{
		spop(s);
		ans++;
	}
	return ans;
}

char ch;//一个字符一个字符的读取 
int main()
{
	Stack s;
	Stack e;
	sinit(s);
	sinit(e);
	string ss = "";
	char y[500];
	y[')'] = '(';
	y['}'] = '{';
	FILE *fi = fopen("example.c", "r");
	int r = 1;
	while(true)
	{
		ch = fgetc(fi);
		if(ch == EOF)
		{
			break;
		} 
		if(ch == '\n')
		{
			r++;
		}
		else if(ch == '\'')
		{
			while(true)
			{
				ch = fgetc(fi);
				if(ch == '\\')
				{
					ch = fgetc(fi);
				}
				else if(ch == '\'')
				{
					break;
				}
			}
		}
		else if(ch == '"')
		{
			while(true)
			{
				ch = fgetc(fi);
				if(ch == '\\')
				{
					ch = fgetc(fi);
				}
				else if(ch == '"')
				{
					break;
				}
			}
		}
		else if(ch == '/')
		{
			ch = fgetc(fi);
			if(ch == '/')
			{ // 单行注释 
				while(fgetc(fi) != '\n');
				r++;
			}
			else if(ch == '*')
			{ // 多行注释 
			    int yourflag = 1;
			    ch = fgetc(fi);
				while(yourflag)
				{
					while(ch != '*')
					{
						ch = fgetc(fi);
						if(ch == '\n')
						{
							r++;
						}
					}
					ch = fgetc(fi);
					if(ch == '\n')
					{
						r++;
					}
					if(ch == '/')
					{
						yourflag = 0;
					}
				}
			}
		}
		else if(ch == '('||ch == '{')
		{
			spush(s,ch);
			ss += ch;
			spush(e,r);//存行号 
		}
		else if(ch == ')'||ch == '}')
		{
			ss += ch;
			if(!sempty(e)) 
				spop(e);
			spush(e,r);
			if(sempty(e))
			{	
				printf("without maching '%c' at line %d\n",ch,r);
				flag = 1;            
			}
			else 
			{
				int x = ch;
				if(!sempty(s) &&s_top(s) == y[x])
				{
					spop(s);
	                spop(e);
				}
				else 
				{
					printf("without maching '%c' at line %d\n",ch,r);
					flag = 1;
				}
			}
		}
		else 
		{
			continue;
		}
	}
	if(s_size(s) == 1) 
	{
		printf("without maching '%c' at line %d\n",s_top(s) , s_top(e));
		flag = 1;
	}
	if(!flag)
	{
		cout << ss << endl;
	}
	fclose(fi);
	return 0;
} 

