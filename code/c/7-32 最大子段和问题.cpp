#include<iostream>
using namespace std;
int MaxSum(int n,int a[])
{
    int sum=0;
    int b=0;
    for(int i=1;i<=n;i++){
            if(b>0)b+=a[i];
            else b=a[i];
            if(b>sum)sum=b;
            }
    return sum;
}
int main()
{
    int n,a[100],m,maxsum;
    while(1)
	{
		cin>>n;
		if(n==0)
		{
			break;
		}
		int flag=0;
		for(m=0;m<n;m++)
		{
			cin>>a[m];
			if(a[m]>0)
			{
				flag=1;
			}
		}	
    	int b[100];
    	for(m=0;m<n;m++)
     	   b[m+1]=a[m];
    	maxsum=MaxSum(n,b);
    	if(flag=1)
    	{
    		cout<<maxsum<<endl;
		}
    	else
    	{
    		maxsum=0;
    		cout<<maxsum<<endl;
		}
	}
  	return 0;
}

