#include <stdio.h>
int main()
{
	int cNum[26];	//初始化为0
	char str[1000];
	int maxLine = -1;
	int i;
	//初始化数组
	for(i=0; i<26; i++)
	{
		cNum[i] = 0;
	} 
	//输入四行大写字母,并统计字符
	for(i=0; i<4; i++)
	{
		gets(str);	//输入一行，包括空格
		int j=0;
		while(str[j]!='\0')
		{
			if(str[j]>='A'&&str[j]<='Z')
			{
				int k = str[j]-'A';
				cNum[k]++;	//字母对应位置加一
				//记录最大行数
				if(cNum[k]>maxLine)
				{
					maxLine = cNum[k];
				}
			}
			j++;
		}
	} 
	//输出,用直方图显示
	int line;
	for(line=maxLine; line>0; line--)
	{
		for(i=0; i<26; i++)
		{
			if(cNum[i]>=line)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}	
	//最后一行输出字母
	for(i=0; i<26; i++)
	{
		printf("%c ",i+'A');
	}
	printf("\n");
 
	return 0;
}
