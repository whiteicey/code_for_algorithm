#include <stdio.h>
#include <string.h>
int main()
{
	char str1[80]={'\0'},str2[80][80]={'\0'},str3[80]={'\0'},str4[80][80]={'\0'},ret=0;
	int num[80]={0},flag[80]={0},len,num2[80];
	int i=0,j=0,m=0,n,k,j2=0;
	gets(str1);
	gets(str3);
	len=strlen(str3);
	while(str1[i]!='\0')
	{
		for(;(str1[i]>='a'&&str1[i]<='z')||(str1[i]>='A'&&str1[i]<='Z')||(str1[i]>='0'&&str1[i]<='9')||str1[i]=='_';i++)
		{
			str2[j][m++]=str1[i];
			num[j]=m;
			ret=1;
		}
		if(ret)
		{
			j++;
			m=0;
			i++;
			ret=0;
		}
		else
		i++;
		//if(str3[i]=='\0') break;
	}
	i=0;
	while(str3[i]!='\0')
	{
		for(;(str3[i]>='a'&&str3[i]<='z')||(str3[i]>='A'&&str3[i]<='Z')||(str3[i]>='0'&&str3[i]<='9')||str3[i]=='_';i++)
		{
			str4[j2][m++]=str3[i];
			num2[j2]=m;
			ret=1;
		}
		if(ret)
		{
			j2++;
			m=0;
			i++;
			ret=0;
		}
		else
		i++;
		//if(str3[i]=='\0') break;
	}
	ret=0;
	for(i=0;i<j;i++){
		for(k=0;k<j2;k++){
			if(num[i]==num2[k]){
				for(m=0;m<num[i];m++){
					if(str2[i][m]==str4[k][m]){
						ret++;
					}
					else break;
				}
				if(ret==num[i]){
					flag[i]=1;
				}
				ret=0;	
			}
		}
	}
	for(i=0;i<j;i++){
		if(flag[i]){
			printf("%s ",str2[i]);
		}
	}
	return 0;
 } 




