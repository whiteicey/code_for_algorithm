#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
#define SIZE 61
 
char S[SIZE];
 
void fun (char str[], int st, int fin) 
{	//��ȡ���ַ���S����� st �� �յ� fin ���Ӵ���str 
	int i;
	int k = 0;
	for(i = st; i < fin; i ++, k ++)
	{
		str[k] = S[i];
	}
	str[k] = '\0';
}
 
int main () 
{
	
	int L;
	int i,j,k;
	int len;	//�洢�ַ������ܳ� 
	
	scanf("%d", &L);
	scanf("%s", S);
 
	char all_s[SIZE];	//�������ŵ��ַ����Ĵ洢 
	int all_i;	//���������ַ����ĳ��� 
	int all = 0;	//���������ַ����ĳ��ִ��� 
	
	int temp_num = 0;	//��ʱ�ַ����ĳ��ִ��� 
	char temp[SIZE];	//��ʱ�ַ����Ĵ洢 
	char temp_e[SIZE];	//����ĳ��ʱ�ַ����������ַ����Ĵ洢 
	len = strlen(S);	
	for(i = L; i < len; i ++)
	{	//ö�����Ե��ַ������ܳ��ֵĳ��� 
		for(j = 0; j < len-i; j ++)
		{	//ö�ٸó��ȣ�i���ĸ��ַ�������� 
			temp_num = 0;
			fun(temp,j,j+i);	//jΪ��㣬j+i-1Ϊ�յ� 
			for(k = 0; k < len-i;k ++)
			{	//��ʱ�ַ����Ա���ͬ���ȵ��ַ����Ƿ�����ͬ 
				 fun(temp_e,k,k+i);
				 if(strcmp(temp_e,temp) == 0)
				 {
				 	temp_num ++;
				 }
			}
			if(temp_num > all)
			{	//�����ʱ�ַ����ĳ��ִ��������ϴ����ŵ��ַ����Ĵ��� ֱ�Ӵ��� 
				all_i = i;
				all = temp_num;
				strcpy(all_s,temp);
			} 
			else if(temp_num == all && i > all_i)
			{	//�����ʱ�ַ��������ϴγ��ֵ������ַ������ֵĴ�����ͬ�Ҹ�������� 
				all_i = i;
				all = temp_num;
				strcpy(all_s,temp);
			}
		}
	}
	
	printf("%s",all_s);
	
	return 0;
}

