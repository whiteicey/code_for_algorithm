#include<iostream>
using namespace std;
//շת�����
int gcd(int a,int b)
{
    int temp;
 if(a<b)         //��a�������
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
    cout<<"�������ĸ���:";
//�ö�̬һά�������������
    cin>>row ;
     int *a ;
    a=new int [row] ;
//����һά�����ֵ
 cout<<"��������:";
     for(i=0;i<row;i++)
     cin>>a[i];
  int maxfac,minmul;//�������Լ������С������
  maxfac=gcd(a[0],a[1]);
     minmul=(a[0]*a[1])/gcd(a[0],a[1]); //��С������Ҳ������������˳������Լ��������
  for(i=2;i<row;i++)
  {
   maxfac=gcd(maxfac,a[i]);//���ú�����һ���������Լ��
         minmul=((minmul*a[i])/gcd(minmul,a[i])); 
  }
  cout<<"���Լ��Ϊ:"<<maxfac<<endl;
  cout<<"��С������:"<<minmul<<endl;
//�ͷ�һά����
delete [] a ;
}

