#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a=-1;
	double b=-114.514;
	cout<<abs(a)<<" "<<fabs(b)<<endl;
	cout<<sqrt(4)<<endl;
	cout<<pow(10,2)<<endl;
	cout<<fmod(4,3)<<endl;
	cout<<rand()<<endl;//int rand(void) ����һ����Χ�� 0 �� RAND_MAX (ֵ������ 32767)֮���α�����
	char c[10]={"1.01"};
	cout<<atof(c)<<endl;
	cout<<atol(c)<<endl;
}
