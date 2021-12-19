#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int t;
//vector<long long int> addr;

inline long long int val(int x)
{
 return (x<0 ? -x:x);
}


int main()
{
 scanf("%d", &t);
 while(t--)
 {
  long long int n, m ,k;
  long long int ans = 0;
  scanf("%lld%lld%lld", &n, &m, &k);
//  addr = vector<long long int>(m);
  ans += (k-1);
  long long int temp;
  long long int min_dis;
  
  scanf("%lld", &min_dis);
  ans += 2*val(k-min_dis);
  for (int i=1; i<m; i++)
  {
   scanf("%lld", &temp);
   ans += 2*val(temp-k);
   if (min_dis>temp) min_dis = temp;
  }
  ans += (k-1);
  if (min_dis<k) ans -=2*(k-min_dis);
  printf("%lld\n", ans);
 }
 return 0;
 
} 
