#include <stdio.h>
int main()
{
	int cNum[26];	//��ʼ��Ϊ0
	char str[1000];
	int maxLine = -1;
	int i;
	//��ʼ������
	for(i=0; i<26; i++)
	{
		cNum[i] = 0;
	} 
	//�������д�д��ĸ,��ͳ���ַ�
	for(i=0; i<4; i++)
	{
		gets(str);	//����һ�У������ո�
		int j=0;
		while(str[j]!='\0')
		{
			if(str[j]>='A'&&str[j]<='Z')
			{
				int k = str[j]-'A';
				cNum[k]++;	//��ĸ��Ӧλ�ü�һ
				//��¼�������
				if(cNum[k]>maxLine)
				{
					maxLine = cNum[k];
				}
			}
			j++;
		}
	} 
	//���,��ֱ��ͼ��ʾ
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
	//���һ�������ĸ
	for(i=0; i<26; i++)
	{
		printf("%c ",i+'A');
	}
	printf("\n");
 
	return 0;
}
