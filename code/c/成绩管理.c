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
	printf("*    欢迎使用学生成绩管理系统    *\n");
	printf("*         1、读入学生成绩        *\n");
	printf("*         2、个人成绩分析        *\n");
	printf("*         3、单科成绩分析        *\n");
	printf("*         4、学生成绩排序        *\n");
	printf("*         5、生成成绩文件        *\n");
	printf("*         6、结束                *\n");
	printf("**********************************\n");
	printf("           请选择1~6:             \n");
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
	printf("数据读入完毕，请选择其他操作！\n");
	list();
}
void paverage()
{
	int i;
	for(i=0;i<8;i++)
		stu[i].sum=stu[i].score1 +stu[i].score2+stu[i].score3+stu[i].score4;
	for(i=0;i<8;i++)
		stu[i].average=stu[i].sum /4.0;
	printf("                               各学生成绩统计分析如下:                      \n");
	printf("    学号             姓名       数学    英语    物理   计算机   总分  平均成绩\n");
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
	printf("                    单科成绩分析如下:\n");
	printf("课  程   最高分   最低分   平均分   不及格   及格   良好   优秀\n");
	printf("数  学     %d       %d      %.2f     %d       %d      %d      %d\n",max[0],min[0],average1[0],a[0],b[0],c[0],d[0]);
	printf("物  理     %d       %d      %.2f     %d       %d      %d      %d\n",max[1],min[1],average1[1],a[1],b[1],c[1],d[1]);
	printf("英  语     %d       %d      %.2f     %d       %d      %d      %d\n",max[2],min[2],average1[2],a[2],b[2],c[2],d[2]);
	printf("计算机     %d       %d      %.2f     %d       %d      %d      %d\n",max[3],min[3],average1[3],a[3],b[3],c[3],d[3]);
	printf("             单科成绩分析完毕，请选择其他操作!\n");
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
	printf("                    各学生成绩排序如下:\n");
	printf("    学号            姓名        数学    物理    英语   计算机   总分 平均成绩    名次\n");
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
	fprintf(fp,"    学号              姓名      数学    物理    英语   计算机     总分    平均成绩    名次\n");
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
	fprintf(fp,"单科成绩分析如下:\n");
	fprintf(fp,"课  程   最高分   最低分   平均分   不及格   及格   良好   优秀\n");
	fprintf(fp,"数  学     %d       %d      %.2f     %d       %d      %d      %d\n",max[0],min[0],average1[0],a[0],b[0],c[0],d[0]);
	fprintf(fp,"物  理     %d       %d      %.2f     %d       %d      %d      %d\n",max[1],min[1],average1[1],a[1],b[1],c[1],d[1]);
	fprintf(fp,"英  语     %d       %d      %.2f     %d       %d      %d      %d\n",max[2],min[2],average1[2],a[2],b[2],c[2],d[2]);
	fprintf(fp,"计算机     %d       %d      %.2f     %d       %d      %d      %d\n",max[3],min[3],average1[3],a[3],b[3],c[3],d[3]);
	printf("已将成绩输出到文件，请选择其他操作!\n");
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
