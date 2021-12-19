#include <iostream>
#include <string>
using namespace std;
class person
{
    protected:
        string name;
        int age;
        char sex;
    public:
        person(string n,int a,char s)
        {
            name=n;
            age=a;
            sex=s;
        }
        void display ()
        {
            cout<<name<<" "<<age<<" "<<" "<<sex;
        }
};
class student:public person
{
    protected:
        int grade;
        float score;
        float other;
    public:
        student(string n,int a,char s,int g,float sco,float o):person(n,a,s)
        {
            grade=g;
            score=sco;
            other=o;
        }
        float add()
        {
            score+=other;
            return score;
        }
        void show()
        {
            cout<<name<<" "<<age<<" "<<sex<<" "<<grade<<" "<<add();
        }
};
int main()
{
    student stu("Xu Li",20,'f',2,25.4,2.6);
    stu.show();
    return 0;
}
