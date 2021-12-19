#include <iostream>
using namespace std;
class stu
{
	public:
		stu(int n,float s):num(n),score(s){};
		void change (int n,float s)
		{
			num=n;
			score=s;
		}
		void display()
		{
			cout<<num<<' '<<score<<endl;
		}
	private:
		int num;
		float score;
};
int main()
{
	stu stu(101,78.5);
	stu.display();
	stu.change(101,80.5);
	stu.display();
	return 0;	
}
