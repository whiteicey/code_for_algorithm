#include<stdio.h>
#include<math.h>
int max=8,sum=0,a[8];
void show()
{  //��ʾÿ�γɹ���������������� 
    for(int i=0;i<max;i++)
	{
        printf("(%d,%d)\t",i,a[i]);
    }
    printf("\n");
}
int check(int n)
{
    for(int i=0;i<n;i++)
	{  //����ֻ��Ҫ�Ƚϵ���֪���� 
        if(a[i]==a[n]||abs(a[n]-a[i])==(n-i))
		{//����ȽϹؼ��������ж����ڷ��µĻʺ��Ƿ���֮ǰ 
          return 0  ;
		}                         //���µĻʺ��г�ͻ������ͬ�У���ͬ�Խ��ߣ���Ϊ֮ǰ�� 
    }
    return 1;                                //֮ǰ�е��� eightQueen(n+1);                            //��֤�˲�ͬ�� 
}

int eightQueen(int n)
{
    int i;
    if(n<max)
	{
        for(i=0;i<max;i++)
		{
            a[n]=i;
            if(check(n))
              eightQueen(n+1);
        }
   }
   else
   {
      sum++;
      //show();
   } 
}
int main()
{
    eightQueen(0);  //�ӵ����п�ʼ 
    printf("%d",sum);
}  
