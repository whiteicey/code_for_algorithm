#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
using namespace std;
int a[20];
int fun(int i,int j)
{
    if(is_sorted(a+i,a+j))
        return j-i;
    return max(fun(i,(i+j)/2),fun((i+j)/2,j));//找到前后两部分中最大的那个序列长度
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d\n",fun(0,n));
    return 0;
}

