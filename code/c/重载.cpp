#include <iostream>
 
using namespace std;
 
class Demo
{
public:
    // 友元函数实现运算符重载
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
// 重载 "+" 运算符
Demo & operator+ (Demo & demo, int n)
{
    demo.a += n;
    return demo;
}
 
int main()
{
    Demo demo(1);
    // 重载 "+" 运算符后，对象可以直接加一个数
    demo = demo + 2;
    cout << demo.getA() << endl;
    return 0;
}

