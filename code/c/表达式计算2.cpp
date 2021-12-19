#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;
char priority[7][7]=
{ 
    {'>','>','<','<','<','>','>'},  
    {'>','>','<','<','<','>','>'},  
    {'>','>','>','>','<','>','>'},  
    {'>','>','>','>','<','>','>'},  
    {'<','<','<','<','<','=','0'},   
    {'>','>','>','>','0','>','>'},  
    {'<','<','<','<','<','0','='}   
};          
char step(char a,char b)
{   
    int i,j;  
    switch(a)
	{  
        case'+':i=0;break;  
        case'-':i=1;break;  
        case'*':i=2;break;  
        case'/':i=3;break;  
        case'(':i=4;break;  
        case')':i=5;break;  
        case'=':i=6;break;   
    }  
    switch(b)
	{  
        case'+':j=0;break;  
        case'-':j=1;break;  
        case'*':j=2;break;  
        case'/':j=3;break;  
        case'(':j=4;break;  
        case')':j=5;break;  
        case'=':j=6;break;  
    }  
    return priority[i][j];  
}
     
int oprt(int m,int n,char x)
{  
    if(x=='+')  
    	return m+n;  
    if(x=='-')  
    	return n-m;  
    if(x=='*')  
    	return m*n;  
    if(x=='/')  
    	return n/m;  
}
stack<int>num;
stack<char>ope;
int main()
{
	string s;
	int tmp;
	getline(cin,s);
	//cout<<s<<endl;
	ope.push('=');
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			int t=s[i]-'0';
			tmp*=10;
			tmp+=t;
			if(s[i+1]<'0'||s[i+1]>'9')
			{
				num.push(tmp);
				tmp=0;
			}
		}
		else if(s[i]==' ')
		{
			continue;
		}
		else
		{
			switch(step(ope.top(),s[i]))
			{
				case'<':
					ope.push(s[i]);
					break;
				case'=':
					ope.pop(); 
					break;
				case'>':
					char x=ope.top();
					ope.pop();
					int m,n;
					m=num.top();
					num.pop();
					n=num.top();
					num.pop();
					ope.push(s[i]);
					num.push(oprt(m,n,x));
					break;
			}
		}
	}
	while(num.size()!=1)
	{
		int a,b;
		a=num.top();
		num.pop();
		b=num.top();
		num.pop();
		num.push(oprt(a,b,ope.top()));
		ope.pop();
	}
	int b=num.top();
	//printf("%d",b);
	cout<<b;
	return 0;
}
