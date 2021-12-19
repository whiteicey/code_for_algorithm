#include <stdio.h>
struct mouse
{
	char id[100];
	int weight;
	char color[100];
};
int main()
{
	FILE* w1,* w;
	w1=fopen("OUT.TXT","w");
	w=fopen("IN.TXT","w");
	int n,i,j;
	scanf("%d",&n);
	struct mouse p[n];
	struct mouse temp;
	for(i=0;i<n;i++)
	{
		scanf("%s%d%s",p[i].id,&p[i].weight,p[i].color);
		fscanf(w,"%s%d%s",&p[i].id,&p[i].weight,&p[i].color);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(p[j].weight>p[i].weight)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s %s\n",p[i].id,p[i].color);
		fprintf(w1,"%s %s\n",p[i].id,p[i].color);
	}
	fclose(w);
	fclose(w1);
	return 0;
}
