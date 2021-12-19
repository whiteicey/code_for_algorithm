#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
const ll maxn = 1e6+5;
const double pi = acos(-1.0);
const ll inf = 0x3f3f3f3f;
const ll mod = 1000000000;
 
ll pre[maxn];
void init() {
    pre[1] = 1;
     
    for(ll i = 2; i <= 1000000; i++){
        if (i % 2) pre[i] = pre[i-1];
        else pre[i] = pre[i-1] + pre[i/2];
        pre[i] %= mod;
    }
}
 
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll t, n;
     
    cin >> t;
    init();
    while(t--){
        cin >> n;
         printf("%lld%c", pre[n], t==0?'\n':' ');
    }
    return 0;
}

