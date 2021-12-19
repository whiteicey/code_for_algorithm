#include <iostream>
#include <cstdio>  
using namespace std;
int main () 
{  
    int n;  
    char c;  
    float h;  
	cin>>n;  
    while (n--) 
	{  
        cin>>c>>h; 
        if (c=='F')   
            printf("%.2f\n",h*1.09);  
        else  
            printf("%.2f\n",h/1.09);  
    }   
    return 0;  
}  
