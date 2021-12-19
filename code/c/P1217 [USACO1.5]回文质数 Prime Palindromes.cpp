#include<iostream>
#include<cmath>
using namespace std;
int prime(int n) { 
    if(n==1) 
        return 0;
    if(n%2==0)
        return 0;
    else { 
        int i;
        for(i=2; i<=sqrt(n); i++) {
            if(n%i==0)
                return 0;
        }
        return 1;
    }
}
int hw(int n) { 
    int sum=0;
    int k=n;
    while(n!=0) {
        sum=sum*10+n%10;
        n/=10;
    }
    if(sum==k) 
        return 1;
    else
        return 0;
}
int main() {
    int i,n,sum=0,m;
    cin>>n>>m; 
    for(i=n; i<=m; i++) {
        if(i==9989900) 
            break;
        if(hw(i)&&prime(i)) 
            cout<<i<<endl; 
    }
    return 0; 
}
