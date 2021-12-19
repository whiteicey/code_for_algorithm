#include<iostream>
#include<queue>              
using namespace std;
long long int b[10005];
queue<int>qa;        
queue<int>qb;        
int tmp1;             
int tmp2;            
int n;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(b[i]%2==0)
        	qb.push(b[i]);     
        else
        	qa.push(b[i]);      
    }
    int counta=qa.size();        
    int countb=qb.size();      
    if(counta>countb *2)                            
    {
        while(!qa.empty()||!qb.empty())     
        {
            if(!qa.empty())              
            {
               tmp1 = qa.front();       
               cout<<tmp1;              
               qa.pop();                 
               counta--;               
               if(counta!=0)         
               cout<<" ";
               tmp1=qa.front();          
               cout<<tmp1;
               qa.pop();
               counta--;
               if(counta != 0)
               cout<<" ";
            }
            if(!qb.empty())
            {
                tmp2=qb.front();          
                cout<<tmp2;                  
                qb.pop();                     
                cout<<" ";
            }
        }
    }
    else
    {
    	if(counta<=countb*2)                         
    	{
            while(!qa.empty()||!qb.empty())             
        	{
            	if(!qa.empty())                     
            	{
            		tmp1 = qa.front();           
               		cout<<tmp1;
                	qa.pop();
                	cout<<" ";
                	tmp1 = qa.front();
                	cout<<tmp1;
                	qa.pop();
                	cout<<" ";
            	}
            	if(!qb.empty())
            	{
                	tmp2=qb.front();          
                	cout<<tmp2;
                	qb.pop();
                	countb--;
                	if(countb!=0)
                	{
                    	cout<<" ";
                	}
            	}
        	}
    	}
	} 
    return 0;
}
