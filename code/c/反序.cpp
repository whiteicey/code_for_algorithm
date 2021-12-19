#include <iostream>
using namespace std;
int numa,numb; 
int main()
{
	cin>>numa;  
	while(numa!=0)
	{
		numb=numb*10+numa%10;
		numa/=10; 
	}
    cout<<numb;
    return 0; 
} 
