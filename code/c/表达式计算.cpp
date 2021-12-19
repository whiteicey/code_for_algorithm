#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>


#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100
typedef struct          //����˳��ջ 
{
	char *base;
	char *top;
	int stacksize;
}SqStack;
/*********ջ����********/ 
int InitStack(SqStack &S)//��ʼ�� 
{
	S.base=(char*)malloc(sizeof(char)*MAXSIZE);
	if(!S.base) exit(OVERFLOW);
	S.top=S.base;
	S.stacksize=MAXSIZE;
	return OK;
}
int Push(SqStack &S,char e)//��ջ 
{
	if(S.top-S.base==S.stacksize) return ERROR;//ջ�� 
	*S.top=e;  //Ԫ��eѹ��ջ����ջ��ָ���1; 
	S.top++;
	return OK;
 } 
int Pop(SqStack &S,char &e)//��ջ 
{
	if(S.top==S.base)  return ERROR;   //ջ�� 
	--S.top;//ջ��ָ���һ����ջ��Ԫ�ظ���e;
	e=*S.top; 
	return OK;
}
char GetTop(SqStack S)//ȡջ��Ԫ�� 
{
	if(S.top!=S.base)//ջ�ǿ� 
	return *(S.top-1);//����ջ��Ԫ�ص�ֵ��ջ��ָ�벻�� 
}
int In(char e)//�ж϶����ַ��Ƿ�Ϊ����� 
{
	if(e=='+'||e=='-'||e=='*'||e=='/'||e=='('||e==')'||e=='=')
	    return 1;//�� 
	else 
	    return 0; //���� 
}
char Compare(char a,char b)//�Ƚ�����������ȼ� 
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
char Eva(char a,char theta,char b)//���� 
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
	InitStack(OPND);//������ջ�������� 
	InitStack(OPTR);//�����ջ 
	Push(OPTR,'=');
	ch=getchar();
	while(ch!='='||GetTop(OPTR)!='=')
	{
		if(!In(ch))       //���Ϊ���� 
		{
			Push(OPND,ch);
			ch=getchar();
		}
		else             //����������� 
		{
			switch(Compare(GetTop(OPTR),ch))
			{
				case '<':                    //�����ַ����ȼ��� 
					Push(OPTR,ch);
				    ch=getchar();
					break;
				case '>':                    //�����ַ����ȼ��� 
					Pop(OPTR,theta);
					Pop(OPND,b);
					Pop(OPND,a);
					Push(OPND,Eva(a,theta,b));
					break;
				case '=':                    //���ȼ���ͬ 
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
