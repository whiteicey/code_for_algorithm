#include <iostream>
#include <algorithm>
#include <string> 
using namespace std;
string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main(){
	int n;
	cin >> n;
	string s1;
	cin >> s1;
	string s2 = "";
	int m = s1.length() ;
	for(int i = 0;i<m;i++){
		s2 += s[(s1[i]-'A'+n)%26];
	}
	cout << "flag{" << s2 << "}" << endl;
	return 0; 
} 
