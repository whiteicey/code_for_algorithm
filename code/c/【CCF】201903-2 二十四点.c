#include <stdio.h>
int test (char ch) 
{
	if(ch == 'x' || ch == '/')
		return 1;
	return 0;
}
int cal (char ch,int l,int r) 
{
	switch (ch) {
		case '+': return l + r;
		case '-': return l - r;
		case 'x': return l * r;
		case '/': return l / r;
		default: return 0;
	}
}
int main()
{
	int len,i;
	int res = 0;
	int num1,num2,num3,num4;
	char ch1,ch2,ch3;
	scanf("%d",&len);
	char arr[len][7];
	for ( i = 0; i < len; i++ ) 
	{
		scanf("%s",arr[i]);
		num1 = arr[i][0] - '0';
		num2 = arr[i][2] - '0';
		num3 = arr[i][4] - '0';
		num4 = arr[i][6] - '0';
		ch1 = arr[i][1];
		ch2 = arr[i][3];
		ch3 = arr[i][5];
//		printf("%d%c%d",num1,ch1,num2);
		if ( test(ch2) ) 
		{
			if (test(ch1)) 
			{
				res = cal(ch3,cal(ch2,cal(ch1,num1,num2),num3),num4);
			}
			else 
			{
				res = cal(ch1,num1,cal(ch3,cal(ch2,num2,num3),num4));	
			}
		}
		else 
		{
			if (ch2 == '-')
				res = cal('+',cal(ch1,num1,num2),cal(ch3,num3*(-1),num4));
			else
				res = cal(ch2,cal(ch1,num1,num2),cal(ch3,num3,num4));	
		}
//		printf("%d\n",res);
		if (res == 24)	
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}	
//		printf("\n"); 
	}
	return 0;	
}
