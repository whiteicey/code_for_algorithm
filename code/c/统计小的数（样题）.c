#include <stdio.h>

void caculate(int m[] , int n , int x , int *num , float *aver);

int main()

{ int m[80],i=0,n,x,number;

 float av;

 while(1) {                     //ѭ����������

        scanf("%d",&m[i]);

        if(m[i]==-999) break;        //��-999����

        i++;

 }

 n=i;                           //�������ݵĸ���

 scanf("%d",&x);                 //����������x

 caculate(m , n , x , &number , &av);

/* caculate�������������������ƽ��ֵ��ͳ�Ʊ�xС�ĸ�����

 ʵ�ʲ�����mΪ��������nΪ������Ԫ�ظ�����avΪƽ��ֵ��

 numberΪ��xС���������ĸ����� */

 printf("%-10.2f%-5d\n",av,number);

 return(0);

}

void caculate(int m[] , int n , int x , int *num , float *aver)

{

    int i;
    float sum=0;
    for(i=0;i<n;i++)
    {
    	if(m[i]<x)
    	{
    		(*num)++;
		}
		sum=sum+m[i];
	}
	*aver=sum/n;
}
