#include<iostream>
#include<string>
using namespace std;
int main()
{	
	string s;
		getline(cin,s,'E');	
		int x = 0,y = 0;	
		for(int i = 0;i < s.size();i++)	
		{		
			if(s[i] == '\n')
			continue;		
			if(s[i] == 'W') 
			x++;		
			else if(s[i] == 'L') 
			y++;		
			if(((x-y>=2)||(y-x>=2))&&(x >= 11||y >= 11))		
			{			
				cout << x << ":" << y << endl;			
				x = 0;			
				y = 0;		
			}	
		}	
		cout << x << ":" << y<< endl << endl;	
		x = 0,y = 0;	
		for(int i = 0;i < s.size();i++)	
		{		
			if(s[i] == '\n')
			continue;		
			if(s[i] == 'W') 
			x++;		
			else if(s[i] == 'L') 
			y++;		
			if(((x-y>=2)||(y-x>=2))&&(x >= 21||y >= 21))		
			{			
				cout << x << ":" << y << endl;			
				x = 0;			
				y = 0;		
			}	
		}		
		cout << x << ":" << y;	
		return 0;
} 

