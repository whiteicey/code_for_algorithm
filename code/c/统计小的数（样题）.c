#include <stdio.h>

void caculate(int m[] , int n , int x , int *num , float *aver);

int main()

{ int m[80],i=0,n,x,number;

 float av;

 while(1) {                     //循环读入数据

        scanf("%d",&m[i]);

        if(m[i]==-999) break;        //遇-999结束

        i++;

 }

 n=i;                           //输入数据的个数

 scanf("%d",&x);                 //输入正整数x

 caculate(m , n , x , &number , &av);

/* caculate函数功能是求给定数组平均值、统计比x小的个数。

 实际参数：m为数组名，n为数组中元素个数，av为平均值，

 number为比x小的正整数的个数。 */

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
