#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
const int maxn = 1010;
struct shu{
	string name;
	int price;
	int num;
}r[maxn];

map<int, string> p;
bool com(shu r1, shu r2){
	return r1.price < r2.price ;
}
int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i<n;i++){
		cin >> r[i].name >> r[i].price ;
		r[i].num = i;
	}
	sort(r,r+n,com);
	for(int i = 0;i<n;i++){
		m -= r[i].price;
		if(m>0){
			p.insert(make_pair(r[i].num,r[i].name));
		}
		else {
			break;
		}
	}
	if(p.size() == 0) {
		cout << "None" << endl;
		return 0;
	}
	map<int,string>::iterator it;
	for(it = p.begin() ;it != p.end() ;it++){
		cout << it->second << endl;
	}
	return 0;
}
