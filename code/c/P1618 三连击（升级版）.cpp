#include"iostream"
#include"cstdio"
using namespace std;
int main()
{
 	int a,b,c,x,y,z,ok=1;//ok标记是否存在满足题意的三位数
 	cin>>x>>y>>z;
 	for(a=123;a<=999;a++)//a最少是123，因此从123枚举就行了   
 	{
  		b=a*y/x;  
  		c=a*z/x;
  		int d=a/100,e=a/10%10,f=a%10,g=b/100,h=b/10%10,i=b%10,j=c/100,k=c/10%10,l=c%10;//分离出每个三位数的各位
  		if(d!=e&&d!=f&&d!=g&&d!=h&&d!=i&&d!=j&&d!=k&&d!=l&&e!=f&&e!=g&&e!=h&&e!=i&&e!=j&&e!=k&&e!=l&&f!=g&&f!=h&&f!=i&&f!=j&&f!=k&&f!=l&&g!=h&&g!=i&&g!=j&&g!=k&&g!=l&&h!=i&&h!=j&&h!=k&&h!=l&&i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&k!=l)//暴力判断不相等
 		if((a/100)*(a/10%10)*(a%10)*(b/100)*(b/10%10)*(b%10)*(c/100)*(c/10%10)*(c%10)==1*2*3*4*5*6*7*8*9)//乘积刚好是1，2，3，4，5，6，7，8，9
  		{
		  ok=0;
		  printf("%d %d %d\n",a,b,c);
		}//就存在解，记ok为0，输出            
 	}
	if(ok) 
		cout<<"No!!!"<<endl; //如果不存在就输出No!!!
return 0;
}
