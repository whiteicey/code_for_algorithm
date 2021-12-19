#include <stdio.h>
void write_line(FILE *w,char stack[], int sp)
{
	while(sp>0)
	{
 	 	char c=stack[--sp];
 	 	if(c>=0)//ASCII�ַ�
  		{
   			fprintf(w,"%c",c);
  		}
  		else//˫�ֽ��ַ��������ֽڲ��ܵߵ�
  		{
   			fprintf(w,"%c%c",stack[--sp],c);
  		}
 	}
}
int main()
{
	FILE *r=fopen("text1.dat","r");//�����ļ�
 	FILE *w=fopen("text2.dat","w");//����ļ�
 	int eof;//����ָʾ�Ƿ��Ѿ������ļ�ĩβ
 	char c;//������ַ�
 	char stack[20000];//��ջ,���ڴ��һ���е��ַ�,һ���������20000���ֽ�
 	int sp=0;//��ջջ��ָ��
 	for(eof=fscanf(r,"%c",&c);eof!=EOF && eof>0; eof=fscanf(r,"%c",&c))
 	{
  		if(c!='\n' && c!='\r')//���ǻ��з�ѹ���ջ
  		{
   			stack[sp++]=c;
  		}
  		else//�����������ǰ�е��ַ�
  		{
   			write_line(w,stack,sp);
   			sp=0;//����ջ���
   			fprintf(w,"%c",c);//������з�
  		}
 	}
	 //������������һ�е��ַ�
	write_line(w,stack,sp);
 	//�رմ򿪵��ļ�
 	fclose(w);
 	fclose(r);
 	return 0;
}



