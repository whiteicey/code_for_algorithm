#include <stdio.h>
#include <string.h>    //��ʶ���Ĺ��������֣���ĸ���»������ ���ҵ�һ���ַ�����Ϊ���֣� 
int main()
{
    int n;
    char a[1000];
    scanf("%d",&n);
    getchar();  //ע�ⴢ��س��� 
    while (n--)
    {
        int sum=1;
        memset(a,0,sizeof(a));
        int i,len;
        gets(a);
        len=strlen(a);               
        if(a[0]<='9'&&'0'<=a[0])    //ע�������Ǵ�0��ʼ �� 
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

