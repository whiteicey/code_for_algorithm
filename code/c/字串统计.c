#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
#define SIZE 61
 
char S[SIZE];
 
void fun (char str[], int st, int fin) 
{	//截取总字符串S的起点 st 到 终点 fin 的子串到str 
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
	int len;	//存储字符串的总长 
	
	scanf("%d", &L);
	scanf("%s", S);
 
	char all_s[SIZE];	//最新最优的字符串的存储 
	int all_i;	//最新最优字符串的长度 
	int all = 0;	//最新最优字符串的出现次数 
	
	int temp_num = 0;	//临时字符串的出现次数 
	char temp[SIZE];	//临时字符串的存储 
	char temp_e[SIZE];	//对于某临时字符串的其他字符串的存储 
	len = strlen(S);	
	for(i = L; i < len; i ++)
	{	//枚举所以的字符串可能出现的长度 
		for(j = 0; j < len-i; j ++)
		{	//枚举该长度（i）的该字符串的起点 
			temp_num = 0;
			fun(temp,j,j+i);	//j为起点，j+i-1为终点 
			for(k = 0; k < len-i;k ++)
			{	//临时字符串对比相同长度的字符串是否有相同 
				 fun(temp_e,k,k+i);
				 if(strcmp(temp_e,temp) == 0)
				 {
				 	temp_num ++;
				 }
			}
			if(temp_num > all)
			{	//如果临时字符串的出现次数多于上次最优的字符串的次数 直接代替 
				all_i = i;
				all = temp_num;
				strcpy(all_s,temp);
			} 
			else if(temp_num == all && i > all_i)
			{	//如果临时字符串的与上次出现的最优字符串出现的次数相同且更长则代替 
				all_i = i;
				all = temp_num;
				strcpy(all_s,temp);
			}
		}
	}
	
	printf("%s",all_s);
	
	return 0;
}

