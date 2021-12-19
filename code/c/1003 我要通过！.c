#include<stdio.h>
#include<string.h>
int main()
{	
	int n;
	scanf("%d",&n);
	char str[101];
	int i;
	while(n--)
	{		
		scanf("%s",str);
		int x=0,y=0,z=0;
		int flag=1;
		for(i=0;i<strlen(str);i++)
		{			
			if(str[i]=='A')
			{ 
				x++;
			}	
			else if(str[i]=='P')
			{				
				break;
			}
			else
			{
				flag=0;	
				goto stop;
			}		
		}		
		for(i=x+1;i<strlen(str);i++)
		{			
			if(str[i]=='A')
			{
				y++;
			}
	  	  else if(str[i]=='T')
			{
				break;
			}
			else
			{				
				flag=0;				
				goto stop;							
			}	
			if(str[i]!='T'&&i==strlen(str)-1)  			
			{					
				flag=0;			
			}		
		}		
		for(i=x+y+2;i<strlen(str);i++)		
		{			
			if(str[i]=='A')				
			{
				z++;
			}			
			else			
			{				
				flag=0;
				break;			
			}		
		}		
		stop:if(x*y==z&&y!=0&&flag==1)			
			{	
				printf("YES\n");
			}
			else		
			{			
				printf("NO\n");		
			}	
	}	
	return 0;
}

