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
			if(i==0)//若录入的变量在第一组，则需要放弃数据类型 
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
					j++;//数据类型与变量间有空格，若存在空格，则进入此步，将a【0】【0】的值赋值为变量名的第一个字符 
				}
				if(j!=0&&a[i][j]!=' ')
				{
					j++;//当j跳出0时，随着字符的录入j++； 
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
	}//录入变量 
	
	
	index=i;
	int temp=0,k;
	char b[100]={'\0'};
	gets(b);//录入操作代码 
	
	 
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
			c[temp]='\0';//将操作代码批量移动到c中 
			
			if(strcmp(c,a[i])==0)//比较c和每个变量是否一致 
			{//若一致 
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
				}//当操作代码不位于头部时，需要将操作代码前后的值进行判断 
				
				else
				{
					if(((b[k]=='=')||(b[k]=='+')||(b[k]=='-')||(b[k]==';')||(b[k]=='*')||(b[k]=='/')||(b[k]=='%')||(b[k]==';')))
					printf("%s ",a[i]);
					for(temp=0;temp<len2;temp++)
					{
						c[temp]='\0';
					}
					temp=0;
					break;//当操作代码位于头部时，只需要判断后半部分 
				}
			}
			
			
			else
			{
				j++;
				for(temp=0;temp<len2;temp++)
				{
					c[temp]='\0';
				}
				temp=0;//若不一致时，将录入位置向后移动一，并将c全部重置 
			}
		}
	}
	return 0;
} 
