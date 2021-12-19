#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	char a[2010]={'\0'};
	while(~scanf("%s",a))
	{
		int len1,len2,len3,j=0,index=0,k=0,len;
		char cpy[2010];
		strcpy(cpy,a);
		len=strlen(cpy);
		cpy[len]='@';
		char b[2000]={'\0'},c[2000]={'\0'};
		char m;
		int i=0;
		m=getchar();
		while((m=getchar())!=' ')
		{
			b[i]=m;
			i++;
		}
		i=0;
		while((m=getchar())!='\n')
		{
			c[i]=m;
			i++;
		}
		
		
		char* spilt=strtok(cpy,b);
		cout<<'[';
		while(spilt)
		{
			printf("\"");
			for(i=0;i<strlen(spilt);i++)
			{
				printf("%c",spilt[i]);
			}
			printf("\"");
			//printf("\"%s\"",spilt);
			spilt=strtok(NULL,b);
			if(spilt!=NULL)
			{
				printf(", \"\", ");
			}
		}
		cout<<']'<<endl;
		
		
		i=0;
		char d[2000]={'\0'};
		char e[2010]={'\0'};
		len1=strlen(a);
		len2=strlen(b);
		len3=strlen(c);
		while(i<len1)
		{
			for(j=i;j<(len2+i);j++)
			{
				d[k]=a[j];
				k++;
			}
			if(strcmp(d,b)==0)
			{
				strcat(e,c);
				i=i+len2;
				k=0;
				index+=len3;
			}
			else
			{
				e[index]=d[0];
				i++;
				k=0;
				index++;
			}
		}
		strcpy(a,e);
		cout<<a<<endl;
	}
	
}
