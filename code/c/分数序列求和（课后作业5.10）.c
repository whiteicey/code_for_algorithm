#include <stdio.h>
int main()
{
     int n,number;
     double a=2,b=1,s=0,t;
 
     scanf("%d",&number);
     for (n=1;n<=number;n++)
     {
         s=s+(a/b);
         t=a;
         a=a+b;
         b=t;       /*�ⲿ���ǳ���Ĺؼ�*/
     }
     printf("%.6lf\n",s);
 
     return 0;
}
