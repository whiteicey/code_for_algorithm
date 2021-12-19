#include <stdio.h>
#include <string.h>
int main()
{
	char a[100]={'\0'};
	char temp[100]={'\0'};
	gets(a);
	int len,len1;
	len=strlen(a);
	len1=len;
	int index=0,head,tail,flag;
	int i,j,k;
	while(1)
	{
		if(len1%2==0)
		{
			len1--;
			continue;
		}
		else
		{
			j=0;
			while(j+len1<=len)
			{
				index=0;
				for(k=j;k<j+len1;k++)
				{
					temp[index]=a[k];
					index++;
				}
				for(head=0,tail=len1-1;head<(len1/2),tail>(len1/2);head++,tail--)
				{
					if(temp[head]==temp[tail])
					{
						flag=1;
					}
					else
					{
						flag=0;
						break;
					}
				}
				if(flag==1)
				{
					printf("%s",temp);
					break;
				}
				for(i=0;i<len1;i++)
				{
					temp[i]='\0';
				}
				j++;
			}
			if(flag==1)
			{
				break;
			}
			len1--;
		}
	}
	return 0;
}
