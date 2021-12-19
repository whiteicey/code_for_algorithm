#include<iostream>
#include<cstdio>
using namespace std;
class Shape
{
	public:
	virtual float printArea()
	{
		return 0.0;
	}	
};
class cylinder:public Shape
{
	public:
	 	cylinder(float,float);
	 	virtual float printArea();	
	protected:
		float radius,height;
};
cylinder::cylinder(float r,float h):radius(r),height(h)
{
}
float cylinder::printArea()
{
	return 2*3.14*radius*height+3.14*radius*radius*2;
}
class cube:public Shape
{
	public:
		cube(float);
	virtual float printArea();
	protected:
		float width;
};
cube::cube(float w):width(w)
{
}
float cube::printArea()
{
	return width*width*6;
}
class global:public Shape
{
	public:
		global(float);
	virtual float printArea();
	protected:
		float radius;
};
global::global(float r):radius(r)
{
}
float global::printArea()
{
	return 4*3.14*radius*radius;
}
void printArea(Shape&s)
{
	printf("%.2f ",s.printArea());
	//cout<<s.printArea()<<endl;	
}
int main()
{
	cube cube(6);
	printArea(cube);
	global global(5);
	printArea(global);
	cylinder cylinder(5,16);
	printArea(cylinder);
} 
