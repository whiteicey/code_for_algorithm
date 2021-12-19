#include <iostream> 
using namespace std;
int main() 
{
	int t;
   	cin >> t;
   	while (t--) 
	{
   		string s;
   		cin >> s;
   		int len = s.size();
   		s[len] = 'R';
   		int ans = 1;
   		int j = len;
   		for(int i = len - 1; i >= 0; i--)
		{
   			if(s[i] == 'R')
			{
   				ans = max(ans, j - i);
   				j = i;
   			}
   		}
   		if(s[0] != 'R')
		{
   			ans = max(ans, j + 1);
   		}
   		cout << ans << endl;
	}
    return 0;
}
