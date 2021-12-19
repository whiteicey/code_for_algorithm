#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	long long a,b,c,d;
	cin >> a >> b >> c >> d;
	long long l = 23;
	long long m = 28;
	long long r = 33;
	long long gg = l*m*r;
	long long x = max(a/gg, max(b/gg, c/gg));
	a %= gg;
	b %= gg;
	c %= gg;
	long long ans = 0;
	for(long long i = gg;i >= 0;i--){
		if((i-a)%l == 0&&(i-b)%m == 0&&(i-c)%r == 0){
			ans = i;
			break;
		}
	}
	cout << abs(ans+gg*x-d) << endl;
	return 0;
} 
