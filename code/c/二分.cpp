#include <iostream>
using namespace std;

int Search(int a[],int x,int n){
    int r=n-1, l=0;//���������±� 
    int time=0;//����Ƚϴ��� 
    while(l <= r){
        int mid = (r+l) / 2;//�м��� 
        time++;
        if(x==a[mid]){
            cout<<mid<<endl;
            cout<<time;
            break;
        }
        if(x>a[mid]){
            l=mid+1;
        } 
        else{
            r=mid-1;
        }
    }
    if(l>r) 
    {
        cout<<"-1"<<endl;
        cout<<time;
    }
    return -1;
}
int main(){
    int i, j, mid;
    int n, x;
    int a[1000];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    Search(a,x,n);
    return 0;
}
