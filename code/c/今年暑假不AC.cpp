#include <stdio.h>
#include <algorithm>
using namespace std;
 
struct node 
{
	int t1;//���ӿ�ʼʱ�� 
	int t2;//���ӵĽ���ʱ�� 
}a[105]; 
 
int cmp(node u,node v)//�Խ�Ŀ���ս���ʱ���С�����������������ʱ����ͬ�����տ�ʼ�� 
{ 
	if(u.t2==v.t2)//�������ʱ����ͬ�Ļ�����ʼ��Խ�٣�����Ŀ��ʱ��Խ�̣����ܾ����ܵĶ࿴����
		return u.t1>v.t1;
	return u.t2<v.t2;//���磺2-3,3-4,2-4����϶��ῴ2-3,3-4���������ӣ�������2-4������� 
}
 
int main()
{
	int n,i,j,k,t;
	while(scanf("%d",&n)&&n)
	{
		for(i=0;i<n;i++) 
			scanf("%d%d",&a[i].t1,&a[i].t2);
		sort(a,a+n,cmp);//��ʱ��������� 
		for(i=1,t=a[0].t2,k=1;i<n;i++)//�����ʼ ��ʱ��������������ʱ��٣����k++ 
		{
			if(a[i].t1>=t) 
			{
				t=a[i].t2;
				k++;
			}
		}
		printf("%d\n",k); 
	}
	return 0;
}
