#include <stdio.h>
long long a[100000]={0};
void quicksort(int left,int right)
{
    int i,j,t,temp;
    if(left>right)
    { 
       return;
	}
    temp=a[left]; //temp�д�ľ��ǻ�׼��
    i=left;
    j=right;
    while(i!=j)
    {
       //˳�����Ҫ��Ҫ�ȴ��ұ߿�ʼ��
        while(a[j]<=temp && i<j)
        {
    		j--;	
		}
       //�����ұߵ�
        while(a[i]>=temp && i<j)
        {
    		i++;
    	}
       //�����������������е�λ��
       	if(i<j)
     	{
    			t=a[i];
    			a[i]=a[j];
    			a[j]=t;
       	}
    }
    	//���ս���׼����λ
    a[left]=a[i];
    a[i]=temp;

    quicksort(left,i-1);//����������ߵģ�������һ���ݹ�Ĺ���
    quicksort(i+1,right);//���������ұߵ� ��������һ���ݹ�Ĺ���
}
int main()
{
	long long n,i,j,temp,sum=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	quicksort(0,n);
	for(i=0;i<n;i++)
	{
		if((i+1)%3!=0)
		{
			sum+=a[i];
		}
	}
	printf("%lld",sum);
	return 0;
}
