#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 1010;
int a[maxn];

int search(int l,int r,int j){
	while(l <= r){
	   int m = (l+r)/2;
	   if(a[m] == j) return 1;
	   else if(a[m]<j) l = m+1;
	   else r = m-1;
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int  n,s,k;
		cin >> n >> s >> k;
		for(int i = 0;i<k;i++){
			cin >> a[i];
		}
		sort(a,a+k);
		int ans = 0;
		int l = s;
		int r = s;
		while(1){
			if(!search(0,k-1,l)){
				cout << ans << endl;
				break;
			}
			if(!search(0,k-1,r)){
				cout << ans << endl;
				break;
			}
			if(l>1) l--;
			if(r<n) r++;
			ans++;
		}
	}
	return 0;
} 
