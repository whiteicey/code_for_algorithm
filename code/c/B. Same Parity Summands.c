#include <stdio.h>
int main()
{
	int t,n,k,i,a;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		a=n-(k-1);
		if(a>0&&a%2)
		{//��������
			printf("YES\n");
			for(i=1;i<=k-1;i++)
				printf("1 ");
			printf("%d\n",a);
			continue;
		}
		a=n-(k-1)*2;
		if(a>0&&a%2==0)
		{//����ż��
			printf("YES\n");
			for(i=1;i<=k-1;i++)
				printf("2 ");
			printf("%d\n",a);
			continue;
		}
		printf("NO\n");//�����ɹ���
	}
	return 0;
}
