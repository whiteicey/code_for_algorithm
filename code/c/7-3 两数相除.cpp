#include <stdio.h>
int main(){
	int a,b,i,m,n,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>300000||b>300000||c>300000||b==0)
	{
		printf("data input error!");
		return 0;
	}
	printf("%d.",a/b);
	m=a%b*10;
	for(i=0;i<c;i++)
	{
		n=m/b;
		m=m%b*10;
		printf("%d",n);
		if(m==0){
			break;
		}
	}
	return 0;
}
