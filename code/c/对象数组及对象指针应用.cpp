#include <iostream>
#include <cstdio>
using namespace std;
double sum=0,ave;
class student
{
	public:
		void scan();
		void display();
	private:
		int num;
		double score;
};
void student::scan()
{
	cin>>num>>score;
	sum+=score;
}
void student::display()
{
	printf("%d %.2lf\n",num,score);
}
int main()
{
	student stu[5],* p;
	int i,num=1;
	for(i=0;i<5;i++)
	{
		stu[i].scan();
	}
	printf("%.2lf\n",sum/5);
	for(p=stu;p<stu+5;p++)
	{
		if(num==1||num==3||num==5)
		{
			p->display();
		}
		num++;
	}
	return 0;
}
