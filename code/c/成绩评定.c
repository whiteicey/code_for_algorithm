#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a); 
    switch(a/10)
	{
        case 10:
        case 9:
            putchar('A');
            break;
        case 8:
            putchar('B');
            break;
        case 7:
            putchar('C');
            break;
        case 6:
            putchar('D');
            break;
        default:
            putchar('E');       
    }
}

main10()
{
	int score;
	scanf("%d",&score);
	if(90<=score&&score<=100)
	{
		printf("'A'");
	}
	else if(80<=score&&score<90)
	{
		printf("'B'");
	}
	else if(70<=score&&score<79)
	{
		printf("'C'");
	}
	else if(60<=score&&score<69)
	{
		printf("'D'");
	}
	else
	{
		printf("'E'");
	}
	return 0;
}
 
