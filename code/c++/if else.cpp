#include <stdio.h>
int main()
{
	int score;
	scanf("%d",&score);
	if (score>700)
	{
		printf("qinghua\n");
		if(score > 700)
		{
			printf("wajueji\n");
		}
		else if(score >710)
		{
			printf("chushi\n");
		}
		else
		{
			printf("jisuanji\n");
		}
	}
	else
	{
		printf("lanxiang\n"); 
	}
	return 0;
}

