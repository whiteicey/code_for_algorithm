#include<iostream>
#include<string.h>
using namespace std;
void calculate(char *a,int k)
{
 	int len=strlen(a);
 	for(int count=0;count<k;count++)
	{
 	 	for(int i=0;i<len;i++)
		{
   			if(a[i]>a[i+1])
			{
    			for(int j=i;j<len;j++)
				{
    				a[j]=a[j+1];
    			}
    			len--;
    			break;
   			}
  		}
	}
	cout<<a;
}
int main()
{
 	char s[50];
 	int k;
 	cin>>s>>k;
 	calculate(s,k);
 	return 0;
}
