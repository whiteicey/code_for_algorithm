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
    for(int i=0;i<=n-2;i++){ //���Ƕ�1��n-2��Ĵ���
        if(a[i]>0&&i>=1)  //���i==1�����ǵ�һ���Ȼ��һ����û��Ҫ�����+���ġ�
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
    if(a[n-1]!=0){  //�Ե�n-1��Ĵ���
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
    if(a[n]!=0){    //�����һ��Ĵ���
        if(a[n]<0)
            cout<<a[n];
        if(a[n]>0)
            cout<<"+"<<a[n];
    }
    return 0;   //������ط���0�ˡ�
}
