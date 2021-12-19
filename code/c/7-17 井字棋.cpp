#include <cstdio>
using namespace std;
char map[4][4];
int main()
{
	int n;
	scanf("%d",&n);
	char a;
		a=getchar();
	while(n)
	{
		n--;
		int i,j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				scanf("%c",&map[i][j]);
			}
			a=getchar();
		}
		if(map[0][0]==map[0][1]&&map[0][1]==map[0][2]&&map[0][0]=='O')
		{
			printf("yes\n");
			continue;
		}//第一行 
		else if(map[0][0]==map[1][0]&&map[1][0]==map[2][0]&&map[0][0]=='O')
		{
			printf("yes\n");
			continue;
		}//第一列 
		else if(map[0][1]==map[1][1]&&map[1][1]==map[2][1]&&map[0][1]=='O')
		{
			printf("yes\n");
			continue;
		}//第二列 
		else if(map[0][2]==map[1][2]&&map[1][2]==map[2][2]&&map[0][2]=='O')
		{
			printf("yes\n");
			continue;
		}// 第三列 
		else if(map[1][0]==map[1][1]&&map[1][1]==map[1][2]&&map[1][0]=='O')
		{
			printf("yes\n");
			continue;
		}//第二行 
		else if(map[2][0]==map[2][1]&&map[2][1]==map[2][2]&&map[2][0]=='O')
		{
			printf("yes\n");
			continue;
		}//第三行 
		else if(map[0][0]==map[1][1]&&map[1][1]==map[2][2]&&map[0][0]=='O')
		{
			printf("yes\n");
			continue;
		}
		else if(map[0][2]==map[1][1]&&map[1][1]==map[2][0]&&map[0][2]=='O')
		{
			printf("yes\n");
			continue;
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}



