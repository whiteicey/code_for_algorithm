#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std; 
int len,a[300]={0},b[300]={0},t=0,f; 
string st,s,temp; 
int main() 
{ 
	int n;
	cin>>n;
	while(n--)
	{
		int flag=0;
		cin>>st; 
		temp=st;
  		len=st.size(); 
  		for(int i=0;i<len;i++) 
  		   a[i]=st[i]-'0'; //��stһλһλ��������a�� 
  		st=st+st;//��st��β��� 
  		for(int j=1;j<=len;j++) 
 		{ 
     		for(int k=0;k<len;k++) 
      			b[k]=a[k];//��a�������b�� 
     		for(int p=len-1;p>=0;p--)
			{ 
      			b[p]=b[p]*j+t; 
      			t=b[p]/10; 
      			b[p]=b[p]%10; 
    		}//�߾��ȳ˷� 
    		s="\0";//���ַ���s�ÿ� 
    		for(int q=0;q<len;q++) 
    			s=s+(char)('0'+b[q]);//��b����ת�����ַ���s�� 
	    	f=st.find(s,0); 
	    	if(f==string::npos)//��st��û��s 
   			{ 
   				flag=1;
   				break;
    		} 
    		else
    		{
    			flag=0;	
			}
  		}
  		if(flag==0)
  		{
  			cout<<temp<<" is cyclic\n";
		}
		else
		{
			cout<<temp<<" is not cyclic\n";
		}
	} 	
    return 0; 
}
