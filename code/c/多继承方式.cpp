#include <iostream>
using namespace std;
class teacher
{
	protected:
		string name;
		string birthday;
		char sex;
		string title;
	public:
		teacher(string n,string b,char s,string t)
		{
			name=n;
			birthday=b;
			sex=s;
			title=t;
		}
		void dispaly()
		{
			cout<<name<<" "<<birthday<<" "<<sex<<" "<<title; 
		}
};
class cadre
{
	protected:
		string name;
		string birthday;
		char sex;
		string post;
	public:
		cadre(string n,string b,char s,string p)
		{
			name=n;
			birthday=b;
			sex=s;
			post=p;
		}
};
class teachercadre:public teacher,public cadre
{
	private:
		string wages;
	public:
		teachercadre(string n,string b,char s,string t,string p,string w):teacher(n,b,s,t),cadre(n,b,s,p)
		{
			wages=w;
		}
		void show()
		{
			teacher::dispaly();
			cout<<" "<<cadre::post<<" "<<wages;
		}
};
int main()
{
	teachercadre t("LiHong","1967/10/12",'f',"professor","Header","8000.00");
	t.show();
	return 0;
}
