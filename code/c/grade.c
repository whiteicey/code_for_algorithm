#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	scanf("%d",&num);
	char *g;
	g = (char *)malloc(sizeof(int)*num*3); //成绩的字符型数组
	// char g[1000]={'\0'};
	int i=0;
	int j;
	int count=0;
	int a=0,b=0,c=0,d=0,e=0;
	while(getchar()!='\n'); // 清除scanf的回车，不然下面的getchar用不起
	while(1){
		g[i]=getchar();
		if(g[i]=='\n'){
			break;
		}
		i++;
	}


	// printf("%d\n",i);
	// for(j=0;j<i;j++){
	// 	printf("%c",g[j]);
	// }
	// printf("\n");

	// printf("%c\n",g[i-1]);
	// printf("%d\n",j);

	g[i]=' '; //输入完成绩后，把成绩数字的往后一位为变成空格，方便下面判断

	for(j=0;j<i+1;j++)
	{
		if(g[j]!=' ')
		{
			count++;
		}
		else
		{
			// printf("%d\n",count);
			if(count == 3){
				count = 0;
				a++;
			}
			if(count == 1)
			{
				count = 0;
				e++;
			}
			if(count == 2)
			{
				// printf("%c\n",g[j-count]);
				if(g[j-count]=='9')
					a++;
				if(g[j-count]=='8')
					b++;
				if(g[j-count]=='7')
					c++;
				if(g[j-count]=='6')
					d++;
				if(g[j-count]=='5')
					e++;
				if(g[j-count]=='4')
					e++;
				if(g[j-count]=='3')
					e++;
				if(g[j-count]=='2')
					e++;
				if(g[j-count]=='1')
					e++;
				count = 0;
			}
		}
	}
	printf("%d %d %d %d %d\n", a, b, c, d, e);
	return 0;

	/*int n,grade,find;
	int result[101]={0};
	int a=0,b=0,c=0,d=0,e=0;
	int i = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&grade);
		result[grade]++;
	}
	i = 0;
	for (; i < 60; i++)
		e += result[i];
	for (; i < 70; i++)
		d += result[i];
	for (; i < 80; i++)
		c += result[i];
	for (; i < 90; i++)
		b += result[i];
	for (; i <= 100; i++)
		a += result[i];
	printf("%d %d %d %d %d\n", a, b, c, d, e);*/
}
