#include <cstdio>
#include <set>
using namespace std;
inline int read()
{
    int s = 0, w = 1; char ch = getchar();
    while(ch < '0' || ch > '9'){ if(ch == '-') w = -1; ch = getchar();}
    while(ch >= '0' && ch <= '9') s = s * 10 + ch - '0', ch = getchar();
    return s * w;
} // 这是能判负数的C++快读模板
inline void write(int x)
{
     if(x<0) putchar('-'),x=-x;
     if(x>9) write(x/10);
     putchar(x%10+'0');
     putchar(' ');
}
int main()
{
	int n,i,x;
	multiset<int>h;
	int A=0,B=0,C=0,D=0,E=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		h.insert(x);
		x=read();
		if(x>=90)
		{
			A++;
		}
		else if(x<90&&x>=80)
		{
			B++;
		}
		else if(x<80&&x>=70)
		{
			C++;
		}
		else if(x<70&&x>=60)
		{
			D++;
		}
		else
		{
			E++;
		}
	}
	write(A);
	write(B);
	write(C);
	write(D);
	write(E);
	return 0;
}
