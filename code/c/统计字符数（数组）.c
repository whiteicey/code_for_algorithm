#include <stdio.h>
int main()
{
	int i,r,b=0,l=0,num=0,s=0,others=0,sum_b=0,sum_l=0,sum_num=0,sum_s=0,sum_others=0;
	scanf("%d",&r);
	char c;
	for(i=i;i<=r;i++)
	{
		do
		{
			if(c>='a'&&c<='z')//大写 
			{
				l++;
				sum_l=sum_l+l;
				l=0;
			}
			else if(c>='A'&&c<='Z')//小写 
			{
				b++;
				sum_b=sum_b+b;
				b=0;
			}
			else if(c>='0'&&c<='9')//数字 
			{ 
				num++;
				sum_num=sum_num+num;
				num=0;
			}
			else if(c==' ')//空格 
			{
				s++;
				sum_s=sum_s+s;
				s=0;
			}
			else//其他 
			{
				others++;
				sum_others=sum_others+others;
				others=0;
			}
		}while((c=getchar())!='\n');
	}
	printf("%d %d %d %d %d",sum_b,sum_l,sum_num,sum_s,sum_others-r-1);
	return 0;
}
