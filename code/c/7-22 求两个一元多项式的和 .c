#include <stdio.h>
#include <string.h>
#include <math.h>
int a[2000]={0},b[2000]={0},ans[3000]={0};
int na,nb;
//加法函数
void addP()
{
	//memset(ans,0,sizeof(ans));
	int i;
	int t = 0;
	for(i = 0; i <= 1005; i++)
	{
		ans[i] = a[i]+b[i];//数组直接相加即可
		if(ans[i]!=0)
			t++;//统计不为零的个数
	}
	if(t==0)
	{
	   printf("0 0\n");//零多项式特例
	   return ;
	}
	int flag = 0;
	for(i = 1005; i >=0; i--)
	{
		if(ans[i]!=0)
		{//不为零输出
		    if(!flag)
			{
			   printf("%d %d",ans[i],i);
			   flag = 1;
		    }
		    else
		       printf(" %d %d",ans[i],i);
	    }
	}
	putchar('\n');
	return ;
}
//乘法函数
//void multiP(){
//	memset(ans,0,sizeof(ans));
//	int i,j;
//	int t = 0;
//	for(i = 0; i < 1005; i++){
//		if(a[i]!=0){
//			for(j = 0; j < 1005; j++){
//				if(b[j]!=0){
//					ans[i+j] += a[i]*b[j]; //直接遍历即可，注意这里是+=不能是=，因为后面相乘可能出现同指数的不能覆盖只能相加
//					if(ans[i+j]!=0)t++;//同理
//				}
//			}
//		}
//	}
//	if(t==0){
//		printf("0 0\n");
//		return ;//零多项式特例
//	}
//	int flag = 0;
//	for(i = 2005; i >=0; i--){
//		if(ans[i]!=0){//不为零输出
//		    if(!flag){
//			   printf("%d %d",ans[i],i);
//			   flag = 1;
//		    }
//		    else
//		       printf(" %d %d",ans[i],i);
//	    }
//	}
//	putchar('\n');
//	return ;
//}
int main()
{
//	memset(a,0,sizeof(a));
//	memset(b,0,sizeof(b));
	scanf("%d",&na);
	int i;
	int index,value;
	for(i = 0; i < na; i++)
	{
		scanf("%d%d",&value,&index);
		a[index] = value;
	}
	scanf("%d",&nb);
	for(i = 0; i < nb; i++)
	{
		scanf("%d%d",&value,&index);
	    b[index] = value;
	}//读入数据，因为数据量较小，以数组的下标作为指数，数组值为系数
	//乘法：
	//multiP();
	//加法：
	addP();
	return 0;
}
