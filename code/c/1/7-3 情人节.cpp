#include <iostream>
using namespace std;
int main()
{
	int n=1;
	string s,s1,s2;
	cin>>s;
	while(s!=".") 
	{					
		if(n==2) 
		{
			s1=s;
		}
		if(n==14)
		{
			s2=s;
		}
		cin>>s;
		n++;
	}
	n--;							
	if (n>=14)
	{
		cout<<s1<<" and "<<s2<<" are inviting you to dinner...";
	}	 	
	else if (n >= 2) 
	{
		cout<<s1<<" is the only one for you...";
	}						
	else 
	{
		cout<<"Momo... No one is for you ...";	
	}								
	return 0;
}
