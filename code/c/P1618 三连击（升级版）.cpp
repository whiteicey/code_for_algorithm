#include"iostream"
#include"cstdio"
using namespace std;
int main()
{
 	int a,b,c,x,y,z,ok=1;//ok����Ƿ���������������λ��
 	cin>>x>>y>>z;
 	for(a=123;a<=999;a++)//a������123����˴�123ö�پ�����   
 	{
  		b=a*y/x;  
  		c=a*z/x;
  		int d=a/100,e=a/10%10,f=a%10,g=b/100,h=b/10%10,i=b%10,j=c/100,k=c/10%10,l=c%10;//�����ÿ����λ���ĸ�λ
  		if(d!=e&&d!=f&&d!=g&&d!=h&&d!=i&&d!=j&&d!=k&&d!=l&&e!=f&&e!=g&&e!=h&&e!=i&&e!=j&&e!=k&&e!=l&&f!=g&&f!=h&&f!=i&&f!=j&&f!=k&&f!=l&&g!=h&&g!=i&&g!=j&&g!=k&&g!=l&&h!=i&&h!=j&&h!=k&&h!=l&&i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&k!=l)//�����жϲ����
 		if((a/100)*(a/10%10)*(a%10)*(b/100)*(b/10%10)*(b%10)*(c/100)*(c/10%10)*(c%10)==1*2*3*4*5*6*7*8*9)//�˻��պ���1��2��3��4��5��6��7��8��9
  		{
		  ok=0;
		  printf("%d %d %d\n",a,b,c);
		}//�ʹ��ڽ⣬��okΪ0�����            
 	}
	if(ok) 
		cout<<"No!!!"<<endl; //��������ھ����No!!!
return 0;
}
