#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
const int maxn = 100010;
string ss = "22233344455566670778889990";
set<string> p;
string s[maxn];
int main(){
	int n;
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> s[i];
		int m = s[i].length() ;  
		for(int j = 0;j<m;j++){
			if(s[i][j] >= 'A'&&s[i][j] <= 'Z'){
				s[i][j] = ss[s[i][j]-'A'];
			}
		}
		p.insert(s[i]);
	}
	set<string>::iterator it;
	for(it = p.begin() ;it != p.end() ;it++){
		cout << *it << endl;
	}
	return 0;
} 
