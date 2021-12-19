#include <iostream>
#include <cstdio> 
using namespace std;
class shape
{
	public:
		virtual float printlength()
		{
			return 0;
		}
		virtual float printarea()
		{
			return 0;
		}
};
class circle:public shape
{
	public:
		virtual float printlength();
		virtual float printarea();
		circle(float r):radius(r){
		}
	private:
		float radius;
};
float circle::printarea()
{
	return 3.14*radius*radius;
}
float circle::printlength()
{
	return 3.14*2*radius;
}
class square:public shape
{
	public:
		virtual float printlength();
		virtual float printarea();
		square(float l):length(l){
		}
	private:
		float length;
};
float square::printarea()
{
	return length*length;
}
float square::printlength()
{
	return length*4;
}
class rec:public shape
{
	public:
		virtual float printlength();
		virtual float printarea();
		rec(float l,float w):length(l),width(w){
		}
	private:
		float length,width;
};
float rec::printarea()
{
	return length*width;
}
float rec::printlength()
{
	return 2*(length+width);
}
float printarea(shape& s)
{
	return s.printarea();
}
float printlength(shape& s)
{
	return s.printlength();
}
int main()
{
	circle c(4);
	square a(5);
	rec r(2,5);
	shape* s[3]={&c,&a,&r};
	for(int i=0;i<3;i++)
	{
		printf("%.2f %.2f\n",s[i]->printlength(),s[i]->printarea());
	}
	return 0;
}
