#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
const int maxn = 100010;

double nor[maxn];
double sou[maxn];
int main(){
	double l;
	int n,m;
	cin >> l >> n >> m;
	double t,v;
	int j = 0;
	for(int i = 0;i<n;i++){
		cin >> t >> v;
		nor[j++] = t+l/v;
	}
	j = 0;
	for(int i = 0;i<n;i++){
		cin >> t >> v;
		sou[j++] = t+l/v;
	}
	sort(nor,nor+n);
	sort(sou,sou+n);
	for(int i = 0;i<n;i++){
		if(i) cout << " ";
		printf("%.2lf",sou[i]);
	}
	cout << endl;
	for(int i = 0;i<n;i++){
		if(i) cout << " ";
		printf("%.2lf",nor[i]);
	}
	//cout << endl;
	return 0;
}
