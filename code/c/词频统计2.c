#include <stdio.h>
#include <string.h>
struct voc
{
	char id[10000];
	int num;
};
struct voc v[1000];
char s[10000];
int main()
{
	freopen("article.txt", "r", stdin);
	//fprintf(stderr, "damn");
	//fprintf(stderr, "b**ch");
	int i, num = 0, j;
	//fprintf(stderr, "fuck");
	while (gets(s))
	{
		//fprintf(stderr, "shit");
		char voc[100000]={'\0'};
		for (i=0; i<strlen(s); i++)
		{
			if (s[i]==' ')
			{
				for (j=0; j<=num; j++)
				{
					if(!strcmp(voc,v[j].id))
					{
						v[j].num++;
					}
				}
				if (j == num+1)
				{
					num++;
					strcpy(v[num].id,voc);
					v[num].num++;
				}
				memset(voc,'\0',sizeof(voc));
			}
			else
			{
				if (s[i]>='A' && s[i]<='Z' )
				{
					s[i] = s[i] - 'A' + 'a';
				}
				voc[strlen(voc)] = s[i];
				//voc[strlen(voc)+1] = '\0';
				//strcat(voc,s[i]);
			}
			
		}
	}
	for (i=0; i<=num; i++)
	{
		for (j=0; j<=num; j++)
		{
			if (strcmp(v[i].id,v[j].id) == -1)
			{
				struct voc t;
				strcpy(t.id, v[i].id);
				t.num = v[i].num;
				strcpy(v[i].id, v[j].id);
				v[i].num = v[j].num;
				strcpy(v[j].id, t.id);
				v[j].num = t.num;
			}
		}
	}
	for (i = 0; i<=num; i++)
	{
		printf("%s %d\n", v[i].id, v[i].num);
	}
	return 0;
}
