#include <stdio.h>
#include <string.h>
#include <math.h>
int a[2000]={0},b[2000]={0},ans[3000]={0};
int na,nb;
//�ӷ�����
void addP()
{
	//memset(ans,0,sizeof(ans));
	int i;
	int t = 0;
	for(i = 0; i <= 1005; i++)
	{
		ans[i] = a[i]+b[i];//����ֱ����Ӽ���
		if(ans[i]!=0)
			t++;//ͳ�Ʋ�Ϊ��ĸ���
	}
	if(t==0)
	{
	   printf("0 0\n");//�����ʽ����
	   return ;
	}
	int flag = 0;
	for(i = 1005; i >=0; i--)
	{
		if(ans[i]!=0)
		{//��Ϊ�����
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
//�˷�����
//void multiP(){
//	memset(ans,0,sizeof(ans));
//	int i,j;
//	int t = 0;
//	for(i = 0; i < 1005; i++){
//		if(a[i]!=0){
//			for(j = 0; j < 1005; j++){
//				if(b[j]!=0){
//					ans[i+j] += a[i]*b[j]; //ֱ�ӱ������ɣ�ע��������+=������=����Ϊ������˿��ܳ���ָͬ���Ĳ��ܸ���ֻ�����
//					if(ans[i+j]!=0)t++;//ͬ��
//				}
//			}
//		}
//	}
//	if(t==0){
//		printf("0 0\n");
//		return ;//�����ʽ����
//	}
//	int flag = 0;
//	for(i = 2005; i >=0; i--){
//		if(ans[i]!=0){//��Ϊ�����
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
	}//�������ݣ���Ϊ��������С����������±���Ϊָ��������ֵΪϵ��
	//�˷���
	//multiP();
	//�ӷ���
	addP();
	return 0;
}
