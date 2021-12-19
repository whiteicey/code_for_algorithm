#include <stdio.h>
#include <string.h>
struct stu
{
	char id[100];
	char name[100];
	int score1;
	int score2;
	int score3;
	double ave; 
};
int main()
{
	FILE* w;
	w=fopen("stud.dat","w");
	if(fopen("stud.dat","w")==NULL)
	{
		exit(0);
	}
	struct stu p[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s%s%d%d%d",p[i].id,p[i].name,&p[i].score1,&p[i].score2,&p[i].score3);
		p[i].ave=(p[i].score1+p[i].score2+p[i].score3)/3.0;
	}
	for(i=0;i<5;i++)
	{
		printf("%s %s %d %d %d %.2f\n",p[i].id,p[i].name,p[i].score1,p[i].score2,p[i].score3,p[i].ave);
		fprintf(w,"%s %s %d %d %d %.2f\n",p[i].id,p[i].name,p[i].score1,p[i].score2,p[i].score3,p[i].ave);
	}
	return 0;
}
