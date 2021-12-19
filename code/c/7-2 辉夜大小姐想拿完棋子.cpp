#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
	int a,b;
	char pre[10];
	while(scanf("%d%d%s",&a,&b,pre)!=EOF)
	{
		//scanf("%s",&pre);
		int m,n;
		m=max(a,b);
		n=min(a,b);
		double t=(double)(sqrt(5.0)+1)/2;
		int c=m-n;
		if((int)(t*c)==n)
		{
			if(strcmp(pre,"huiye")==0)
			{
				printf("yuxing\n");
				//cout<<"yuxing"<<endl; 
			}
			else
			{
				printf("huiye\n");
				//cout<<"huiye"<<endl;
			}
		}
		else
		{
			printf("%s\n",pre);
			//cout<<pre<<endl;
		}
	}
	
	return 0;
}
