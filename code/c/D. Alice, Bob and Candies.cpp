#include <iostream>
#include <cstdio>
using namespace std;
int const N=2e5+5;
int c[N];            //�洢��n����
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		scanf("%d",&c[i]);
		n--;
		int a=0,b=0,u=0,cnt=0;     //a��Alice�Ե�������b�洢Bob�Ե�����
		//u�洢��һ��ĳ�˳Ե�������cnt��ʾ������
		for(int i=0;i<=n;)
		{
			cnt++;
			int sum=c[i++];     //sum��ʾ���ĳ�˳Ե�����
			while(sum<=u&&i<=n) sum+=c[i++];    //����Լ��Ѳ��ܴ����ϴε�
			a+=sum;
			u=sum;
			if(i>n) break;       //�ж����Ƿ�ȫ��a�����ˣ�����ֹͣ
			cnt++;
			sum=c[n--];          //��Ϊ�Ǵ�������ö�٣����Կ���ͨ��n--������
			while(sum<=u&&i<=n) sum+=c[n--];
			b+=sum;
			u=sum;
		}
		printf("%d %d %d\n",cnt,a,b);    //����������
	}
    return 0;
}
