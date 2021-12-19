#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "math.h"
using namespace std;
char s[100];
double cal()
{
	
	cin>>s;
	if (s[0]>='0'&&s[0]<='9')
		return atof(s);
	else
	{
		if(s[0] == '+')
			return cal() + cal();
		else if(s[0] == '-')
			return cal() - cal();
		else if(s[0] == '*')
			return cal() * cal();
		else if(s[0] == '/')
			return cal() / cal();
	}
}
int main()
{
	printf("%f",cal());
	return 0;
}

