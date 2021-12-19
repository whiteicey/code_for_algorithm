#include <stdio.h>
#include <string.h>    //标识符的规则，由数字，字母，下划线组成 ，且第一个字符不能为数字！ 
int main()
{
    int n;
    char a[1000];
    scanf("%d",&n);
    getchar();  //注意储存回车符 
    while (n--)
    {
        int sum=1;
        memset(a,0,sizeof(a));
        int i,len;
        gets(a);
        len=strlen(a);               
        if(a[0]<='9'&&'0'<=a[0])    //注意数字是从0开始 ！ 
        {
            printf("no\n");
        }
        else
        {
        for(i=1;i<len;i++)
        {
            if(a[i]<='9'&&'0'<=a[i]||a[i]<='Z'&&'A'<=a[i]||a[i]<='z'&&'a'<=a[i]||a[i]=='_')
            {
                sum++;  
            }
        }   
        if(sum==len)
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }

    }
    return 0;
}

