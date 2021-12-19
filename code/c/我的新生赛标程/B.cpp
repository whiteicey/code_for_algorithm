#include <iostream>
#include <algorithm>
using namespace std;
int a[2][4] = {1,3,6,8,2,4,5,7};
int main(){
	int n,m;
	cin >> n >> m;
	n += 12;
	if(n&1){ // n%2 == 0
		for(int i = 0;i<4;i++){
			if(a[0][i] == m){
				cout << "Yes" << endl;
				return 0;
			}
		}
		cout << "No" << endl;
	}
	else {
		for(int i = 0;i<4;i++){
			if(a[1][i] == m){
				cout << "Yes" << endl;
				return 0;
			}
		}
		cout << "No" << endl;
	}
	return 0;
} 
