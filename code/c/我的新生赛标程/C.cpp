#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	string s;
	cin >> s;
	long long m = s.length() ;
	long long ans = 0;
	long long sum = 0;
	long long x,y;
	for(long long i = 0;i<m;i++){
		ans *= 11;
		sum *= 10;
		if(s[i] == '0') x = 0;
		else if(s[i] == '1') x = 1;
		else if(s[i] == 'L') x = 2;
		else x = s[i]-'0'+1;
		ans += x;
		if(s[i] == 'L') y = 2;
		else y = s[i]-'0';
		sum += y;
	}
	cout << ans-sum << endl;
	return 0;
}
