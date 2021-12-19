#include<iostream>
using namespace std;
//辗转相除法
int gcd(int a,int b)
{
    int temp;
 if(a<b)         //用a来存大数
 {
  temp=a;
  a=b;
  b=temp;
 }
 while(b!=0)
 {
  temp=a%b;
  a=b;
  b=temp;
 }
 return a;
}
int main()
{
    int row,col,i;
    cout<<"输入数的个数:";
//用动态一维数组来存放数字
    cin>>row ;
     int *a ;
    a=new int [row] ;
//输入一维数组的值
 cout<<"输入数字:";
     for(i=0;i<row;i++)
     cin>>a[i];
  int maxfac,minmul;//定义最大公约数和最小公倍数
  maxfac=gcd(a[0],a[1]);
     minmul=(a[0]*a[1])/gcd(a[0],a[1]); //最小公倍数也可以用它们相乘除以最大公约数来计算
  for(i=2;i<row;i++)
  {
   maxfac=gcd(maxfac,a[i]);//调用函数求一组数的最大公约数
         minmul=((minmul*a[i])/gcd(minmul,a[i])); 
  }
  cout<<"最大公约数为:"<<maxfac<<endl;
  cout<<"最小公倍数:"<<minmul<<endl;
//释放一维数组
delete [] a ;
}

