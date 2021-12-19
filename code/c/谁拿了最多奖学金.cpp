#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
struct stu
{
    char name[20];
    int m;
    int o;
    char x;
    char y;
    int z;
}arr[101];
int main()
{
    int n,i;
    scanf("%d",&n);
    char a,b;
    for(i=1;i<=n;i++)
    {
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].m);
        scanf("%d",&arr[i].o);
        scanf("%c",&a);
        scanf("%c",&arr[i].x);
        scanf("%c",&b);
        scanf("%c",&arr[i].y);
        scanf("%d",&arr[i].z);
    }
    int arr1[101]={0};
    for(i=1;i<=n;i++)
    {
        arr1[i]=0;
        if((arr[i].m>80)&&(arr[i].z>=1))
        arr1[i]=arr1[i]+8000;
        if((arr[i].m>85)&&(arr[i].o>80))
        arr1[i]=arr1[i]+4000;
        if(arr[i].m>90)
        arr1[i]=arr1[i]+2000;
        if((arr[i].m>85)&&(arr[i].y=='Y'))
        arr1[i]=arr1[i]+1000;
        if((arr[i].o>80)&&(arr[i].x=='Y'))
        arr1[i]=arr1[i]+850;
    }
    int max;
    max=0;
    int sum;
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+arr1[i];
    }
    for(i=1;i<=n;i++)
    {
        if(arr1[max]<arr1[i])
        {
            max=i;
        }
    }
    printf("%s\n%d\n",arr[max].name,arr1[max]);
    printf("%d",sum);
    return 0;
}
