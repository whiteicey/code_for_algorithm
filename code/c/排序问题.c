#include<stdio.h>
#include<string.h>
int findsum(int * in, int len, int sum) 
{
    int i, j;
    for(i=0,j=len-1;i<j; )
    {
        if(in[i]+in[j]==sum)
        {
            printf("%d %d",in[i],in[j]);
            return 1;
        }
        else if(in[i]+in[j]<sum)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;  
}
int main()
{
    int a[20],i;
    int n=0,num=0;
    char s[1000];
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
    	int tmp;
    	if(s[i]==' ')
    	{
    		a[n]=num;
    		n++;
    		num=0;
		}
		else if(s[i]>='0'&&s[i]<='9')
		{
			num*=10;
			tmp=s[i]-'0';
			num+=tmp;
		}
	}
	int target;
	scanf("%d",&target);
    findsum(a, n, target);
    return 0;
}
