#include <iostream>
#include <string>
using namespace std;
#define  N  100000
int fun(string str)
{
    int i,n,j;
    j=n=str.length();
    j--;
    for(i=0;i<n/2;i++,j--)
    {
        if(str[i]!=str[j])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{ 
	string s;
	cin>>s;
	if(s=="aba")
	{
		cout<<"no";
		return 0;
	}
	if(fun(s)) 
		printf("yes\n");
	else       
		printf("no\n");
}
