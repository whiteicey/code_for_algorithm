#include <cstdio>
using namespace std;
int divisor(int a,int b)           //�Զ��庯�������Լ��
{
	int temp;                   //������ʱ����
	if(a<b)                     //a<b �򽻻� 
	{
		temp=a;a=b;b=temp;
	}
	while(b!=0)
	{
		temp=a%b;              //a�д�������b��С��ѭ��ȡ�ֱ࣬��b������Ϊ0
		a=b;
		b=temp;
	}
	return a;                  //�������Լ�������ú�����
}
int main()
{
	int n;
	scanf("%d",&n);
	long long i,a,b,c,d,sum;
	for(i=0;i<n;i++)
	{
		scanf("%lldz%lldm",&a,&b);
		scanf("%lldz%lldm",&c,&d);
		if(b<0)
		{
			b*=-1;
			a*=-1;
		}
		if(d<0)
		{
			d*=-1;
			c*=-1;
		}
		int max=(b*d)/divisor(b,d);
		a=a*(max/b);
		c=c*(max/d);
		sum=a+c;
		if(sum==0)
		{
			printf("0z1m\n");
		}
		else
		{
			if(sum<0)
			{
				sum*=-1;
				printf("%lldz%lldm\n",sum/divisor(sum,max)*(-1),max/divisor(sum,max));
			}
			else
			{
				printf("%lldz%lldm\n",sum/divisor(sum,max),max/divisor(sum,max));
			}
			
		}
	}
	return 0;
}
