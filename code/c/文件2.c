#include <stdio.h>
void write(FILE* p2,char stack[],int sp)
{
	char c;
	while(sp>0)
	{
		c=stack[--sp];
		if(c>=0)
		{
			fprintf(p2,"%c",c);
		}
		else
		{
			fprintf(p2,"%c%c",stack[--sp],c);
		}
	}
}
int main()
{
	char stack[999];
	int sp=0;
	FILE* p1=("text.dat","w");
	FILE* p2=("text.dat","w");
	int eof;
	char c;
	for(eof==fscanf(p1,"%c",c);eof!=EOF&&eof!=0;eof==fscanf(p1,"%c",c))
	{
		if(c!='\n'&&c!='\r')
		{
			stack[sp]=c;
			sp++;
		}
		else
		{
			write(p2,stack,sp);
			sp=0;
			fprintf(p2,"%c",c);
		}
	}
	write(p2,stack,sp);
	fclose(p1);
	fclose(p2);
	return 0;
}
