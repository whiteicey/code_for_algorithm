#include <stdio.h>
int main()
{
	char a[10][100]={'\0'};
	int i=0,j=0,index,len1,len2;
	while(1)
	{
		j=0;
		while(1)
		{
			if(i==0)//��¼��ı����ڵ�һ�飬����Ҫ������������ 
			{
				scanf("%c",&a[i][j]);
				if(a[i][j]==','||a[i][j]==';')
				{
					a[i][j]='\0';
					break;
				}
				if(a[i][j]=='\n')
				{
					break;
				}
				if(a[i][0]==' ')
				{
					scanf("%c",&a[i][j]);
					j++;//����������������пո������ڿո������˲�����a��0����0����ֵ��ֵΪ�������ĵ�һ���ַ� 
				}
				if(j!=0&&a[i][j]!=' ')
				{
					j++;//��j����0ʱ�������ַ���¼��j++�� 
				}
			}
			else
			{
				scanf("%c",&a[i][j]);
				if(a[i][j]==','||a[i][j]==';')
				{
					a[i][j]='\0';
					break;
				}
				if(a[i][j]=='\n')
				{
					break;
				}
				if(a[i][j]!=' ')
				{
					j++;
				}
			}
				
		}
		if(a[i][j]=='\n')
		{
			a[i][j]=='\0';
			break;
		}
		i++;
	}//¼����� 
	
	
	index=i;
	int temp=0,k;
	char b[100]={'\0'};
	gets(b);//¼��������� 
	
	 
	len1=strlen(b);
	char c[21]={'\0'};
	for(i=0;i<index;i++)
	{
		j=0;
		len2=strlen(a[i]);
		while(j<len1)
		{
			for(k=j;k<len2+j;k++)
			{
				c[temp]=b[k];
				temp++;
			}
			c[temp]='\0';//���������������ƶ���c�� 
			
			if(strcmp(c,a[i])==0)//�Ƚ�c��ÿ�������Ƿ�һ�� 
			{//��һ�� 
				if(k-len2!=0)
				{
					if(((b[k]=='=')||(b[k]=='+')||(b[k]=='-')||(b[k]=='*')||(b[k]=='/')||(b[k]=='%')||(b[k]==';'))&&((b[k-len2-1]=='=')||(b[k-len2-1]=='+')||(b[k-len2-1]=='-')||(b[k-len2-1]=='*')||(b[k-len2-1]=='/')||(b[k-len2-1]=='%')||(b[k-len2-1]==';')))
					{
						printf("%s ",a[i]);
						for(temp=0;temp<len2;temp++)
						{
							c[temp]='\0';
						}
						temp=0;
						break;
					}
				}//���������벻λ��ͷ��ʱ����Ҫ����������ǰ���ֵ�����ж� 
				
				else
				{
					if(((b[k]=='=')||(b[k]=='+')||(b[k]=='-')||(b[k]==';')||(b[k]=='*')||(b[k]=='/')||(b[k]=='%')||(b[k]==';')))
					printf("%s ",a[i]);
					for(temp=0;temp<len2;temp++)
					{
						c[temp]='\0';
					}
					temp=0;
					break;//����������λ��ͷ��ʱ��ֻ��Ҫ�жϺ�벿�� 
				}
			}
			
			
			else
			{
				j++;
				for(temp=0;temp<len2;temp++)
				{
					c[temp]='\0';
				}
				temp=0;//����һ��ʱ����¼��λ������ƶ�һ������cȫ������ 
			}
		}
	}
	return 0;
} 
