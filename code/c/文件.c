#include <stdio.h>
void write_line(FILE *w,char stack[], int sp)
{
	while(sp>0)
	{
 	 	char c=stack[--sp];
 	 	if(c>=0)//ASCII字符
  		{
   			fprintf(w,"%c",c);
  		}
  		else//双字节字符的两个字节不能颠倒
  		{
   			fprintf(w,"%c%c",stack[--sp],c);
  		}
 	}
}
int main()
{
	FILE *r=fopen("text1.dat","r");//输入文件
 	FILE *w=fopen("text2.dat","w");//输出文件
 	int eof;//用于指示是否已经到达文件末尾
 	char c;//读入的字符
 	char stack[20000];//堆栈,用于存放一行中的字符,一行最大允许20000个字节
 	int sp=0;//堆栈栈顶指针
 	for(eof=fscanf(r,"%c",&c);eof!=EOF && eof>0; eof=fscanf(r,"%c",&c))
 	{
  		if(c!='\n' && c!='\r')//将非换行符压入堆栈
  		{
   			stack[sp++]=c;
  		}
  		else//以逆序输出当前行的字符
  		{
   			write_line(w,stack,sp);
   			sp=0;//将堆栈清空
   			fprintf(w,"%c",c);//输出换行符
  		}
 	}
	 //以逆序输出最后一行的字符
	write_line(w,stack,sp);
 	//关闭打开的文件
 	fclose(w);
 	fclose(r);
 	return 0;
}



