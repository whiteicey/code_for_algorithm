#include <iostream>
using namespace std;
class animal
{
	public:
		void sleep();
}; 
class cat:public animal
{
	public:
		void sleep();
};
void animal::sleep()
{
	cout<<"animal"<<endl;
}
void cat::sleep()
{
	cout<<"cat"<<endl;
}
int main()
{
	cat dog;
	animal cat;
	cat.sleep();
	return 0;
}
