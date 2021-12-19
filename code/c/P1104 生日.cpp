#include <iostream>
#include <string>
using namespace std;
struct student
{
	char name[100];
	int year;
	int month;
	int day;
};
int main()
{
	int n,i,j;
	cin>>n;
	struct student stu[n];
	for(i=0;i<n;i++)
	{
		cin>>stu[i].name>>stu[i].year>>stu[i].month>>stu[i].day;
	}
	struct student temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(stu[i].year<stu[j].year)
			{
				temp=stu[i];
				stu[i]=stu[j];
				stu[j]=temp;
			}
			else if(stu[i].year==stu[j].year)
			{
				if(stu[i].month<stu[j].month)
				{
					temp=stu[i];
					stu[i]=stu[j];
					stu[j]=temp;
				}
				else if(stu[i].month==stu[j].month)
				{
					if(stu[i].day<stu[j].day)
					{
						temp=stu[i];
						stu[i]=stu[j];
						stu[j]=temp;
					}
					else if(stu[i].day==stu[j].day)
					{
						if(i>j)
						{
							temp=stu[i];
							stu[i]=stu[j];
							stu[j]=temp;
						}
					}
				}	
			}	
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<stu[i].name<<endl;
	}
	return 0;
}
