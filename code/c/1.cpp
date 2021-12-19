#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 1000010;
struct shu{
	int l,r;
}a[maxn];

void bian(int i){
	if(i) cout << i << endl;
	else return ;
	bian(a[i].l);
	bian(a[i].r);
	return ;
}

int main(){
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i].l >> a[i].r;
	}
	bian(1);
	return 0;
}
