#include<cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
const int N = 100000;
struct shan{
   int x,y,z;
}s[N]; 
double S; 
bool cmp(shan a,shan b) 
{
    return a.z<b.z;
}
int main()
{
    int n;
    scanf("%d",&n); 
    for(int i=0;i<n;++i)
        scanf("%d%d%d",&s[i].x,&s[i].y,&s[i].z); 
    sort(s,s+n,cmp); 
    for(int i=1,j=0;i<n;++j,++i)
        S+=sqrt(pow(s[i].x-s[j].x,2)+pow(s[i].y-s[j].y,2)+pow(s[i].z-s[j].z,2)); 
    printf("%0.3lf",S); 
    return 0;
}
