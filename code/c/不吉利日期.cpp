#include <cstdio>
int main()
{
    int year,day;
    while(scanf("%d%d", &year,&day) != EOF)
	{
        int cnt = 0;
        for (int month = 1; month <= 12; ++month) 
		{
            int y = year;
            int d = 13;
            int m = month;
            if(m==1||m==2)
			{
                y = year - 1;
                m+=12;
            }
            int w =(d+1+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
            if(w == 5)
			{
                if(m > 12)
				{
                    printf("%d\n", m -12);
                }
				else
				{
                    printf("%d\n", m);                    
                }
                cnt++;
            }
        }
        if(cnt == 0)
		{
            printf("Luck");
        }
        printf("\n");
    }
    return 0;
}
