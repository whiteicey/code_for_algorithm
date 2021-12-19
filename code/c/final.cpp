class Base
{
public: int i1;
protected: int i2;
private: int i3;
};

class D1 : public Base
{
public: int i11;
protected: int i12;
private: int i13;
public:
void f1()
{
 i1 = 0;
i2 = 0;
i3 = 0; // ´íÎó
Base b;
b.i1 = 0;
b.i2 = 0; // ´íÎó
b.i3 = 0; // ´íÎó
}
};
class D2 : public Base
{
public:
void f2()
{
Base b;
 i1 = 0;
b.i1 = 0;
i2 = 0;
b.i2 = 0; // ´íÎó
i3 = 0; // ´íÎó
b.i3 = 0; // ´íÎó
}
};
class DD : public D1
{
public:
int j1;
protected:
int j2;
private:
int j3;
public:

void f()
{
i1 = 0; // ´íÎó
i2 = 0; // ´íÎó
i3 = 0; // ´íÎó
i11 = 0;
i12 = 0;
i13 = 0; // ´íÎó
}
};
int main()
{
return 0;
}
