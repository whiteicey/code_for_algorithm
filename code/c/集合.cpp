#include<iostream>
#include <vector>
using namespace std;
class Line
{
   public:
      void setLength( double len );
      double getLength( void );
      Line();   // ���ǹ��캯������
      ~Line();  // ����������������
 
   private:
      double length;
};
 
// ��Ա�������壬�������캯��
Line::Line(void)
{
    cout << "Object is being created" << endl;
}
Line::~Line(void)
{
    cout << "Object is being deleted" << endl;
}
 
void Line::setLength( double len )
{
    length = len;
}
 
double Line::getLength( void )
{
    return length;
}
void add(int* a,int n)
{
	//a.push_back(10);
	a[n]=10;
}
int main()
{
	int n,i;
	cin>>n;
	Line line;
   	line.setLength(6.0); 
   	cout << "Length of line : " << line.getLength() <<endl;
	int* a=new int[n];
	for(i=0;i<n;i++)
	{
		a[i]=i;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
	add(a,n);	
	for(i=0;i<=n;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
}
