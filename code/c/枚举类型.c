#include <stdio.h>
int main()
{
	enum color
	{
		red,yellow,blue,white,black
	};
	enum color i,j,k,pri;
	int n=0,loop;
	for(i=red;i<=black;i++)
	{
		for(j=red;j<=black;j++)
		{
			if(i!=j)
			{
				for(k=red;k<=black;k++)
				{
					if(i!=j&&j!=k&&i!=k)
					{
						n++;
						printf("%d",n);
						for(loop=1;loop<=3;loop++)
						{
							switch(loop)
							{
								case 1: pri=i;break;
								case 2: pri=j;break;
								case 3: pri=k;break;
							}
							switch(pri)
							{
								case red: printf("red ");break;
								case yellow: printf("yellow ");break;
								case blue: printf("blue ");break;
								case white: printf("white ");break;
								case black: printf("black ");break;
							}
						}
						printf("\n");
					}
				}
			}
		}
	}
	
	return 0;
}
