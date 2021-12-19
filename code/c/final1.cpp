#include <iostream>
#include <string>
using namespace std;
class M_Phone
{
	public:
		
		M_Phone(string b,string c,double p)
		{
			brand=b;
			color=c;
			price=p;
		}
		show()
		{
			cout<<brand<<" "<<color<<" "<<price<<endl;
		}
		private:
			string brand;
			string color;
			double price;
};
int main()
{
	M_Phone p("APPLE","GOLD",11111);
	p.show();
	return 0;
}
