#include <stdio.h>
int main()
{
     int a,n,count=1,temp;
     long int sn=0,tn=0;
     scanf("%d%d",&a,&n);
     temp=a;
     while (count<=n)
     {
         tn=a;
         sn=sn+tn;
         a=a*10+temp;
         ++count;
     }
     printf("%ld\n",sn);
     
     return 0;
}
