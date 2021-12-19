#include<stdio.h>
#include<math.h>
int main()
{
	int x, y; 
    int i, j, temp, flag;
    while(scanf("%d%d", &x, &y)!=EOF  && (x!=0 || y!=0))
    {
	    flag=0;
        for(i=x;i<=y;i++)
        {
            temp=i*i+i+41;
			for(j=2;j<sqrt(temp);j++)
            {
                if(temp%j==0)
                {    
                    flag++;
                    break;                          
                }
            }
        }
        if(flag)
            printf("Sorry\n");
        else
            printf("OK\n");
    }
    return 0;
}
