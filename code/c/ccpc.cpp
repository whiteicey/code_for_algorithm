#include <cstdio>
using namespace std;
int list[26]={0};
int main(){
 int n;
 int i,j,max;
 char ch;
 
 scanf("%d",&n);
 getchar();
 
 for(i=0;i<n;i++){
  for(j=0;j<26;j++){
   list[j]=0;
  }
  max=0;
  while((ch=getchar())!='\n'){
   list[ch-'a']++;
  }for(j=0;j<26;j++){
   if(max<list[j]) max=list[j];
  }printf("Case #%d: %d\n",i+1,max);
 }
 
 return 0;
}
