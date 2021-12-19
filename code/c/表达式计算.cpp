#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>


#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100
typedef struct          //定义顺序栈 
{
	char *base;
	char *top;
	int stacksize;
}SqStack;
/*********栈函数********/ 
int InitStack(SqStack &S)//初始化 
{
	S.base=(char*)malloc(sizeof(char)*MAXSIZE);
	if(!S.base) exit(OVERFLOW);
	S.top=S.base;
	S.stacksize=MAXSIZE;
	return OK;
}
int Push(SqStack &S,char e)//入栈 
{
	if(S.top-S.base==S.stacksize) return ERROR;//栈满 
	*S.top=e;  //元素e压入栈顶，栈顶指针加1; 
	S.top++;
	return OK;
 } 
int Pop(SqStack &S,char &e)//出栈 
{
	if(S.top==S.base)  return ERROR;   //栈空 
	--S.top;//栈顶指针减一，将栈顶元素赋给e;
	e=*S.top; 
	return OK;
}
char GetTop(SqStack S)//取栈顶元素 
{
	if(S.top!=S.base)//栈非空 
	return *(S.top-1);//返回栈顶元素的值，栈顶指针不变 
}
int In(char e)//判断读入字符是否为运算符 
{
	if(e=='+'||e=='-'||e=='*'||e=='/'||e=='('||e==')'||e=='=')
	    return 1;//是 
	else 
	    return 0; //不是 
}
char Compare(char a,char b)//比较运算符的优先级 
{
	char f;
	if(a=='+'||a=='-')
	{
		if(b=='+'||b=='-'||b==')'||b=='=')
		    f='>';
		else if(b=='*'||b=='/'||b=='(')
		    f='<';
	}
	else if(a=='*'||a=='/')
	{
		if(b=='+'||b=='-'||b=='*'||b=='/'||b==')'||b=='=')
		   f='>';
		else if(b=='(')
		   f='<';
	}
	else if(a=='(')
	{
		if(b=='+'||b=='-'||b=='*'||b=='/'||b=='(')
		   f='<';
		else if(b==')')
		   f='=';
	}
	else if(a==')')
	{
		if(b=='+'||b=='-'||b=='*'||b=='/'||b==')'||b=='=')
		   f='>';
	}
	else if(a=='=')
	{
		if(b=='+'||b=='-'||b=='*'||b=='/'||b=='(')
		   f='<';
		else if(b=='=')
		   f='=';
	}
	return f;
}
char Eva(char a,char theta,char b)//运算 
{
	char c;
	a=a-'0';
	b=b-'0';
	if(theta=='+')
	  c=a+b+'0';
	else if(theta=='-')
	  c=a-b+'0';
	else if(theta=='*')
	  c=a*b+'0';
	else if(theta=='/')
	  c=a/b+'0';	  
	return c; 
}
int Exp()
{
	SqStack OPND,OPTR;
	char ch,a,b,theta,x;
	InitStack(OPND);//操作数栈和运算结果 
	InitStack(OPTR);//运算符栈 
	Push(OPTR,'=');
	ch=getchar();
	while(ch!='='||GetTop(OPTR)!='=')
	{
		if(!In(ch))       //如果为数字 
		{
			Push(OPND,ch);
			ch=getchar();
		}
		else             //如果不是数字 
		{
			switch(Compare(GetTop(OPTR),ch))
			{
				case '<':                    //读入字符优先级高 
					Push(OPTR,ch);
				    ch=getchar();
					break;
				case '>':                    //读入字符优先级低 
					Pop(OPTR,theta);
					Pop(OPND,b);
					Pop(OPND,a);
					Push(OPND,Eva(a,theta,b));
					break;
				case '=':                    //优先级相同 
					Pop(OPTR,x);
				    ch=getchar();
					break;
			}
		} 
	}
	return GetTop(OPND)-'0';
}
int main()
{
	printf("%d",Exp());
	return 0;

}
