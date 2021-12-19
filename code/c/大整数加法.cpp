#include<iostream>
#include<cstring>
using namespace std;
char str1[100000];
char str2[100000];
char str3[100000];
int N = 10;
char num[20] = "0123456789ABCDEF";
int add(char str1[], char str2[], char str3[])
{
	
	//比较str1,str2长度，把短的补齐0
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if(len1<len2)
	{
		for(int i=len1; i>=0; i--)
		{
			str1[i+ len2-len1] = str1[i];
		}
		for(int i=0; i<len2-len1; i++)
		{
			str1[i] = '0';
		}
	}
	else 
	{
		for(int i=len2; i>=0; i--)
		{
			str2[i+ len1-len2] = str2[i];
		}
		for(int i=0; i<len1-len2; i++)
		{
			str2[i] = '0';
		}
	}
	
	len1 = strlen(str1);
	
	//模拟
	int cf = 0;	//进位
	int temp = 0;	//本位和
	for(int i=len1-1; i>=0; i--)
	{
		if(str1[i]>'9')
			temp = str1[i] - 'A' + 10;
		else temp = str1[i] - '0';
		if(str2[i]>'9')
			temp += str2[i] - 'A' + 10;
		else temp += str2[i] - '0';
		temp += cf;
		
		cf = temp/N;
		temp %= N;
		
		str3[i] = num[temp];
	} 
	return cf;
}

int main()
{
    cin >> str1 >> str2;
    int cf =  add(str1, str2, str3);
    if(cf)
		cout << cf;
	
    
	if(strlen(str3)!=1)
	{
		int i=0;
		while(str3[i]=='0')
		{
			i++;
		}
		while(i!=strlen(str3))
		{
			cout << str3[i];
            i++;
		}
	}
    else cout << str3;
    
    
    return 0;
}
