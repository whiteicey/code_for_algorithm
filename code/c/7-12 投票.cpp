#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int n,i,j;
	char a[3][10]={"Li","Zhang","Fun"};
	while(~scanf("%d",&n))
	{
		char str[10];
		int b[3][1]={0};
		for(i=0;i<n;i++)
		{
			scanf("%s",str);
			for(j=0;j<3;j++)
			{
				if(!strcmp(str,a[j]))
				{
					b[j][0]++;
					break;
				}
			}
		}
		for(i=0;i<3;i++)
		{
			printf("%s:%d\n",a[i],b[i][0]);
		}
	}
	return 0;
}
