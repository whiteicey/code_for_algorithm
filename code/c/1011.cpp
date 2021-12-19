#include <iostream>

using namespace std;

int map1[50][50]={0};
int map2[3][3]={0};
int main(){
 int T;
 char ch;
 cin>>T;
 
 while(T--){
  int n;
  int flag=0;
  cin>>n;
  for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
    cin>>map1[i][j]; 
   }
  }
  for(int i=0;i<3;i++){
   for(int j=0;j<3;j++){
    cin>>map2[i][j];
    if(i!=0&&j!=0&&map2[i][j]!=0) flag=1;
   }
  }if(flag||map2[0][0]==0){
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     cout<<"0";
     if(j<n-1) cout<<" "; 
    }cout<<"\n";
   }
  }else{
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     cout<<map1[i][j];
     if(j<n-1) cout<<" "; 
    }cout<<"\n";
   }
  }
 }
 
 return 0;
}
