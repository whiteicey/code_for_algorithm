#include <iostream>
#include <algorithm>
#include <set> 
using namespace std;

set<int> a;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,s,k;
		cin >> n >> s >> k;
		int x;
		for(int i = 1;i <= k;i++){
			cin >> x;
			a.insert(x);
		}
		int ans = 0;
		while(1){
			if(s+ans <= n&&a.find(s+ans) == a.end() ) break;
			if(s-ans >= 1&&a.find(s-ans) == a.end() ) break;
			ans++;
		}
		cout << ans << endl;
		a.clear() ;
	}
	return 0;
}
