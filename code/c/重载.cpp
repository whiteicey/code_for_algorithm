#include <iostream>
 
using namespace std;
 
class Demo
{
public:
    // ��Ԫ����ʵ�����������
    friend Demo & operator+ (Demo & demo, int n);
    Demo(int a)
    {
        this->a = a;
    }
    int getA()
    {
        return a;
    }
private:
    int a;
};
// ���� "+" �����
Demo & operator+ (Demo & demo, int n)
{
    demo.a += n;
    return demo;
}
 
int main()
{
    Demo demo(1);
    // ���� "+" ������󣬶������ֱ�Ӽ�һ����
    demo = demo + 2;
    cout << demo.getA() << endl;
    return 0;
}

