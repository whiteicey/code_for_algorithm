#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int a[n+2],b[n+2];
    for(int i=0;i<=n;i++){
        scanf("%d",&a[i]);
        b[i]=n-i;
    }
    for(int i=0;i<=n-2;i++){ //这是对1到n-2项的处理
        if(a[i]>0&&i>=1)  //如果i==1代表是第一项，显然第一项是没必要输出“+”的。
            cout<<"+";
        if(a[i]!=0&&a[i]!=1&&a[i]!=-1){
            cout<<a[i]<<"x^"<<b[i];
        }
        if(a[i]==1){
            cout<<"x^"<<b[i];
        }
        if(a[i]==-1){
            cout<<"-x^"<<b[i];
        }
    }
    if(a[n-1]!=0){  //对第n-1项的处理
        if(a[n-1]<0){
            if(a[n-1]!=-1)
                cout<<a[n-1]<<"x";
            if(a[n-1]==-1)
                cout<<"-"<<"x"; 
        }
        if(a[n-1]>0){
            if(a[n-1]!=1)
                cout<<"+"<<a[n-1]<<"x";
            if(a[n-1]==1)
                cout<<"+"<<"x";
        }
    }
    if(a[n]!=0){    //对最后一项的处理
        if(a[n]<0)
            cout<<a[n];
        if(a[n]>0)
            cout<<"+"<<a[n];
    }
    return 0;   //最后愉快地返回0了。
}
