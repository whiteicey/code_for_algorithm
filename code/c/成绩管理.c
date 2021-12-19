#include<stdio.h>
#include<stdlib.h>
struct student
{
	char num[12];
	char name[20];
	int score1;
	int score2;
	int score3;
	int score4;
	int sum;
	float average;
	int rank;
}stu[8];
void list()
{
	printf("**********************************\n");
	printf("*    ��ӭʹ��ѧ���ɼ�����ϵͳ    *\n");
	printf("*         1������ѧ���ɼ�        *\n");
	printf("*         2�����˳ɼ�����        *\n");
	printf("*         3�����Ƴɼ�����        *\n");
	printf("*         4��ѧ���ɼ�����        *\n");
	printf("*         5�����ɳɼ��ļ�        *\n");
	printf("*         6������                *\n");
	printf("**********************************\n");
	printf("           ��ѡ��1~6:             \n");
}
void fileread()
{
	int i;
	FILE *fp;
	if((fp=fopen("stuscore.txt","r"))==NULL)
	{
		printf("can not be open\n");
		exit(0);
	}
	for(i=0;i<8;i++)
		fscanf(fp,"%s%15s%4d%4d%4d%4d\n",&stu[i].num,&stu[i].name,&stu[i].score1,&stu[i].score2 ,&stu[i].score3 ,&stu[i].score4 );
	fclose(fp);
	printf("���ݶ�����ϣ���ѡ������������\n");
	list();
}
void paverage()
{
	int i;
	for(i=0;i<8;i++)
		stu[i].sum=stu[i].score1 +stu[i].score2+stu[i].score3+stu[i].score4;
	for(i=0;i<8;i++)
		stu[i].average=stu[i].sum /4.0;
	printf("                               ��ѧ���ɼ�ͳ�Ʒ�������:                      \n");
	printf("    ѧ��             ����       ��ѧ    Ӣ��    ����   �����   �ܷ�  ƽ���ɼ�\n");
	for(i=0;i<8;i++)
		printf("%12s%15s%8d%8d%8d%8d%8d%10.2f\n",stu[i].num,stu[i].name,stu[i].score1,stu[i].score2,stu[i].score3,stu[i].score4,stu[i].sum,stu[i].average);
	list();
}
void count()
{
	int i,max[4],min[4],sum1[4]={0},a[4]={0},b[4]={0},c[4]={0},d[4]={0};
	float average1[4];
	max[0]=min[0]=stu[0].score1;
	max[1]=min[1]=stu[0].score2;
	max[2]=min[2]=stu[0].score3;
	max[3]=min[3]=stu[0].score4;
	for(i=1;i<8;i++)
	{
		if(stu[i].score1>max[0])
		{
			max[0]=stu[i].score1;
			max[1]=stu[i].score2;
			max[2]=stu[i].score3;
			max[3]=stu[i].score4;
		}
		if(stu[i].score1<min[0])
		{
			min[0]=stu[i].score1;
			min[1]=stu[i].score2;
			min[2]=stu[i].score3;
			min[3]=stu[i].score4;
		}
	}
	for(i=0;i<8;i++)
	{
		sum1[0]+=stu[i].score1;
		sum1[1]+=stu[i].score2;
		sum1[2]+=stu[i].score3;
		sum1[3]+=stu[i].score4;
	}
		for(i=0;i<4;i++)
			average1[i]=sum1[i]/8.0;
	for(i=0;i<8;i++)
	{
		if(stu[i].score1<60)
			a[0]++;
		if(stu[i].score2<60)
			a[1]++;
		if(stu[i].score3<60)
			a[2]++;
		if(stu[i].score4<60)
			a[3]++;
		if(stu[i].score1<75&&stu[i].score1>=60)
			b[0]++;
		if(stu[i].score2<75&&stu[i].score2>=60)
			b[1]++;
		if(stu[i].score3<75&&stu[i].score3>=60)
			b[2]++;
		if(stu[i].score4<75&&stu[i].score4>=60)
			b[3]++;
		if(stu[i].score1<85&&stu[i].score1>=75)
			c[0]++;
		if(stu[i].score2<85&&stu[i].score2>=75)
			c[1]++;
		if(stu[i].score3<85&&stu[i].score3>=75)
			c[2]++;
		if(stu[i].score4<85&&stu[i].score4>=75)
			c[3]++;
		if(stu[i].score1>=85)
			d[0]++;
		if(stu[i].score2>=85)
			d[1]++;
		if(stu[i].score3>=85)
			d[2]++;
		if(stu[i].score4>=85)
			d[3]++;
	}
	printf("                    ���Ƴɼ���������:\n");
	printf("��  ��   ��߷�   ��ͷ�   ƽ����   ������   ����   ����   ����\n");
	printf("��  ѧ     %d       %d      %.2f     %d       %d      %d      %d\n",max[0],min[0],average1[0],a[0],b[0],c[0],d[0]);
	printf("��  ��     %d       %d      %.2f     %d       %d      %d      %d\n",max[1],min[1],average1[1],a[1],b[1],c[1],d[1]);
	printf("Ӣ  ��     %d       %d      %.2f     %d       %d      %d      %d\n",max[2],min[2],average1[2],a[2],b[2],c[2],d[2]);
	printf("�����     %d       %d      %.2f     %d       %d      %d      %d\n",max[3],min[3],average1[3],a[3],b[3],c[3],d[3]);
	printf("             ���Ƴɼ�������ϣ���ѡ����������!\n");
	list();
}
void sort()
{
	int i,j,t;
	struct student a;
	for(i=0;i<8;i++)
	{
		for(j=i+1;j<8;j++)
			if(stu[i].sum<stu[j].sum)
			{
				a=stu[i];
				stu[i]=stu[j];
				stu[j]=a;
			}
	}
	for(i=0;i<8;i++)
		stu[i].rank=i+1;
	printf("                    ��ѧ���ɼ���������:\n");
	printf("    ѧ��            ����        ��ѧ    ����    Ӣ��   �����   �ܷ� ƽ���ɼ�    ����\n");
	for(i=0;i<8;i++)
		printf("%12s%15s%8d%8d%8d%8d%8d%9.2f%8d\n",stu[i].num,stu[i].name,stu[i].score1,stu[i].score2,stu[i].score3,stu[i].score4,stu[i].sum,stu[i].average,stu[i].rank);
	list();
}
void filewrite()
{
	int i;
	FILE *fp;
	if((fp=fopen("stuscore.out","w"))==NULL)
	{
		printf("can not be open\n");
		exit(0);
	}
	fprintf(fp,"    ѧ��              ����      ��ѧ    ����    Ӣ��   �����     �ܷ�    ƽ���ɼ�    ����\n");
	for(i=0;i<8;i++)
		fprintf(fp,"%s       %10s     %d      %d      %d       %d       %d      %.2f       %d\n",stu[i].num,stu[i].name,stu[i].score1,stu[i].score2,stu[i].score3,stu[i].score4,stu[i].sum,stu[i].average,stu[i].rank);
	int max[4],min[4],sum1[4]={0},a[4]={0},b[4]={0},c[4]={0},d[4]={0};
	float average1[4];
	max[0]=min[0]=stu[0].score1;
	max[1]=min[1]=stu[0].score2;
	max[2]=min[2]=stu[0].score3;
	max[3]=min[3]=stu[0].score4;
	for(i=1;i<8;i++)
	{
		if(stu[i].score1>max[0])
		{
			max[0]=stu[i].score1;
			max[1]=stu[i].score2;
			max[2]=stu[i].score3;
			max[3]=stu[i].score4;
		}
		if(stu[i].score1<min[0])
		{
			min[0]=stu[i].score1;
			min[1]=stu[i].score2;
			min[2]=stu[i].score3;
			min[3]=stu[i].score4;
		}
	}
	for(i=0;i<8;i++)
	{
		sum1[0]+=stu[i].score1;
		sum1[1]+=stu[i].score2;
		sum1[2]+=stu[i].score3;
		sum1[3]+=stu[i].score4;
	}
		for(i=0;i<4;i++)
			average1[i]=sum1[i]/8.0;
	for(i=0;i<8;i++)
	{
		if(stu[i].score1<60)
			a[0]++;
		if(stu[i].score2<60)
			a[1]++;
		if(stu[i].score3<60)
			a[2]++;
		if(stu[i].score4<60)
			a[3]++;
		if(stu[i].score1<75&&stu[i].score1>=60)
			b[0]++;
		if(stu[i].score2<75&&stu[i].score2>=60)
			b[1]++;
		if(stu[i].score3<75&&stu[i].score3>=60)
			b[2]++;
		if(stu[i].score4<75&&stu[i].score4>=60)
			b[3]++;
		if(stu[i].score1<85&&stu[i].score1>=75)
			c[0]++;
		if(stu[i].score2<85&&stu[i].score2>=75)
			c[1]++;
		if(stu[i].score3<85&&stu[i].score3>=75)
			c[2]++;
		if(stu[i].score4<85&&stu[i].score4>=75)
			c[3]++;
		if(stu[i].score1>=85)
			d[0]++;
		if(stu[i].score2>=85)
			d[1]++;
		if(stu[i].score3>=85)
			d[2]++;
		if(stu[i].score4>=85)
			d[3]++;
	}
	fprintf(fp,"���Ƴɼ���������:\n");
	fprintf(fp,"��  ��   ��߷�   ��ͷ�   ƽ����   ������   ����   ����   ����\n");
	fprintf(fp,"��  ѧ     %d       %d      %.2f     %d       %d      %d      %d\n",max[0],min[0],average1[0],a[0],b[0],c[0],d[0]);
	fprintf(fp,"��  ��     %d       %d      %.2f     %d       %d      %d      %d\n",max[1],min[1],average1[1],a[1],b[1],c[1],d[1]);
	fprintf(fp,"Ӣ  ��     %d       %d      %.2f     %d       %d      %d      %d\n",max[2],min[2],average1[2],a[2],b[2],c[2],d[2]);
	fprintf(fp,"�����     %d       %d      %.2f     %d       %d      %d      %d\n",max[3],min[3],average1[3],a[3],b[3],c[3],d[3]);
	printf("�ѽ��ɼ�������ļ�����ѡ����������!\n");
	list();
}
int main()
{
	int j=0;
	list();
	while(j!=6)
	{
		scanf("%d",&j);
		switch(j)
		{
			case(1):fileread();continue;
			case(2):paverage();continue;
			case(3):count();continue;
			case(4):sort();continue;
			case(5):filewrite();continue;
			case(6):break;
		}
	}
	return 0;
}
