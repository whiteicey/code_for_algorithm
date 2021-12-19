#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;


const long long int SIZE = 10000000 + 10;
vector<bool> notp(SIZE+1, false);
long long int p[SIZE];
long long int len;

long long int t;
vector<bool> iseven(SIZE+1, false);

inline bool even_judge(long long int x)
{
 if (x==1) return true;
 bool isprime = true, is2pow = true;
 
 if (x<=SIZE) isprime = !notp[x];
 else
 {
  for (int i=0; i<len; i++)
   if (x%i==0)
   {
    isprime = false;
    break;
   }
 }
 
 while(x>1)
 {
  if (x&1)
  {
   is2pow = false;
   break;
  }
  x /= 2;
 }
 
 if (!isprime && !is2pow)
  return true;
 else
  return false;
  
// if (x<SIZE) return iseven[x];
// long long int bound = sqrt(x);
// for (int i=2; i<=bound; i++)
// {
//  if (x%i) continue;
//  if ((iseven[i] && ) || ())
// }
}

int main()
{
// long long int val;
// for (long long int i=2; i<=SIZE; i++)
// {
//  if (!iseven[i])
//  {
//   for (long long int j=3; (val=i*j)<=SIZE; j+=2)
//    iseven[val] = true;
////   for (int j=0; j<len && i*p[j]<=MAX; j++)
////   {
////    notp[i*p[j]] = true;
////    if (i%p[j]==0) break;   
////   }
//  }
//  else
//  {
//   for (long long int j=2; (val=i*j)<=SIZE; j+=2)
//    iseven[val] = true;
//  }
// }
//// printf("Start\n");
 notp[0] = notp[1] = true;
 for (int i=2; i<=SIZE; i++)
 {
  if (!notp[i]) p[len++] = i;
  for (int j=0; j<len && i*p[j]<=SIZE; j++)
  {
   notp[i*p[j]] = true;
   if (i%p[j]==0) break;   
  }
 }
 
 scanf("%lld", &t);
 while(t--)
 {
  long long int n;
  long long int ode_num = 0, even_num = 0;
  scanf("%lld", &n);
  long long int temp;
  for (long long int i=0; i<n; i++)
  {
   scanf("%lld", &temp);
   if(temp==1)continue;
   if (even_judge(temp)) even_num++;
   else    ode_num++;
  }
  if (even_num%2>0 || (even_num==0 && ode_num%2>0))
   printf("W\n");
  else
   printf("L\n");
 }
 return 0;
}

