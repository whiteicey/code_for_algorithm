#include <stdio.h>
#include <string.h> 
int main()
{
	char a[20],b[200],c[20];
    int num,tol,i=0,j,k=0;
    gets(b);
    gets(a);
    num=strlen(a);
    tol=strlen(b);
    while(i<tol)
	{
        for(j=i;j<(num+i);j++)
		{
            c[k]=b[j];
            k++;
        }
        c[k]='\0';
        if(!strcmp(a,c))
		{
            i=i+num;
            k=0;
        }
		else
		{
            printf("%s",c);
            k=0;
            i++;
        }
    }
    return 0;
}

