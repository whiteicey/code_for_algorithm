#include "point.h"
#include "circle.h"
#include "cylinder.h"
#include <iostream>
using namespace std;
int main()
{
	cylinder c1(0,0,2,4);
	cout<<c1.volumn();
	return 0;
}
