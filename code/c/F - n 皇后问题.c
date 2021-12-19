#include<stdio.h>
#include<math.h>
int max=8,sum=0,a[8];
void show()
{  //显示每次成功后整个界面的坐标 
    for(int i=0;i<max;i++)
	{
        printf("(%d,%d)\t",i,a[i]);
    }
    printf("\n");
}
int check(int n)
{
    for(int i=0;i<n;i++)
	{  //这里只需要比较到已知就行 
        if(a[i]==a[n]||abs(a[n]-a[i])==(n-i))
		{//这里比较关键，就是判断现在放下的皇后是否与之前 
          return 0  ;
		}                         //放下的皇后有冲突（即不同列，不同对角线，因为之前有 
    }
    return 1;                                //之前有调用 eightQueen(n+1);                            //保证了不同行 
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
    eightQueen(0);  //从第零行开始 
    printf("%d",sum);
}  
