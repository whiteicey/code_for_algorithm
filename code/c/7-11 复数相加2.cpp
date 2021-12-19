#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;
 
class Fs
{
	public:
		int imag;
		int real;
	public:
		friend Fs operator +(const Fs &a,const Fs &b);
		Fs(int r,int i):imag(i),real(r){}
		Fs(){}
};
Fs operator +(const Fs &a,const Fs &b)
{
	Fs c;
	c.real=a.real+b.real;
	c.imag=a.imag+b.imag;
	
	return c;
}
Fs hq(string a)
{
	
		int ai,aj,aa;
		
		ai=a.find("i");
 
		aj=a.rfind("-");
 
		aa=a.find("+");
 
		stringstream s1(a);
		
		int as,ax;
		
		/*
		有i
			 -3-i -3-2i,
			 i,-i, 
		*/
		if(ai==-1)//没有i 
		{
			ax=0;
			s1>>as;	
		}
		else//有i 
		{
			if(aj==-1&&aa!=-1) //3+2i ,全为正数，且为a+bi； 
			{
				s1>>as;
				s1>>ax;
				if(ax==0)
				{
					ax=1;
				}
			}
			else if(aj!=-1&&aa!=-1)//表明-a+bi;
			{
				s1>>as;
				s1>>ax;
				if(ax==0)
				{
					ax=1;
				}
			}
			else if(aj!=-1&&aj!=0&&aa==-1)//a-bi,
			{
				s1>>as;
				s1>>ax;
				if(ax==0)
				{
					ax=-1;
				}
			}
			else if(a=="i")
			{
				as=0;
				ax=1;
			}
			else if(a=="-i")
			{
				as=0;
				ax=-1;
			}
			
			else if(aj==-1&&aa==-1)
			{
				as=0;
				s1>>ax;
			}
			else if(aj!=-1&&aa==-1)
			{
				as=0;
				s1>>ax;
			}
			
			else
			{
				s1>>as;
				s1>>ax;
				if(ax==0)
				{
					ax=-1;
				}
			}
		}
	
	return Fs(as,ax);
}
void print(Fs cc)
{
			
		if(cc.real==0)
		{
			if(cc.imag==0)
			{
				cout<<0<<endl;
			}
			else
			{
					if(cc.imag==1)
					{
						cout<<"i"<<endl; 
					}
					else if(cc.imag==-1)
					{
						cout<<"-i"<<endl;
					}
					else
					{
						cout<<cc.imag<<"i"<<endl;
					}
					
			}
		
		}
		else
		{
			cout<<cc.real;
			if(cc.imag>0)
			{
					cout<<"+";
					if(cc.imag==1)
					{
						cout<<"i"<<endl; 
					}
					else if(cc.imag==-1)
					{
						cout<<"-i"<<endl;
					}
					else
					{
						cout<<cc.imag<<"i"<<endl;
					}
			}
			else if(cc.imag<0)
			{
					if(cc.imag==1)
					{
						cout<<"i"<<endl; 
					}
					else if(cc.imag==-1)
					{
						cout<<"-i"<<endl;
					}
					else
					{
						cout<<cc.imag<<"i"<<endl;
					}
			}
			else if(cc.imag==0)
			{
				cout<<endl;
			} 
		}
}
int main()
{
	string a;
	Fs cc(0,0);
	while(1)
	{
		cin>>a;
		if(a=="0")
		break;
		Fs aaa=hq(a);
		cc=aaa+cc;
	}
	print(cc);
	return 0;
} 
