#include <stdio.h>
int main01()
{
	char a='A';
	printf("%c",a);
	return 0;
}

int main02()
{
	char a;
	scanf("%c",&a);
	a=a - 32;
	printf("%c",a);
	return 0;
}

int main03r()
{
	float pi =3.14159;
	printf("%.2f",pi);
	return 0;
}

int main04()
{
	float pi;
	scanf("%f",&pi);
	printf("%.3f",pi);
	return 0;
}

int main05()
{
	double pi=321.14159222;
	printf("%lf",pi);
	return 0;
}

int main06()
{
	float pi=3.14159;
	float r;
	float l;
	float s;
	scanf("%f",&r);
	s=pi*r*r;
	l=pi*2*r;
	printf("mianji:%.3f\n",s);
	printf("zhouchang:%.3f\n",l);
	return 0; 
}

int main07()
{
	int a=10;
	a=a ++ *10;
	printf("%d",a);
	return 0;
}

int main08()
{
	float a=0.999;
	float b;
	b = (float)a;
	printf("%f",b);
	return 0;
}

ina main()
{
	
}
