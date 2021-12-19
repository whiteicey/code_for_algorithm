#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;

#define R register
typedef long long LL;
inline LL Mul(R LL A, R LL B, R LL Mod) 
{
    A %= Mod, B %= Mod;
    R LL Ret = (A * B - (LL)(((long double) A * B + 0.5) / Mod) * Mod) % Mod;
    return Ret < 0? Ret + Mod: Ret;
}
inline LL Pow(R LL A, R LL B, R LL Mod) 
{
	R LL Ret = 1, Res = A;
	while(B) {
		if(B & 1) Ret = Mul(Ret, Res, Mod);
		Res = Mul(Res, Res, Mod), B >>= 1;
	}
	return Ret;
}
bool Test(R int A, R LL N) 
{
	LL k = N - 1, d = 0;
	while(!(k & 1)) ++d, k >>= 1;
	LL t = Pow(A, k, N);
	if(t == 1) return 1;
	for(R int i = 0; i < d; ++i) 
	{
		if(t == N - 1) return 1;
		t = Mul(t, t, N);
	}
	return 0;
}
int Prime[8] = {3, 5, 7, 11, 13, 17, 19, 23};
bool Miller_Rabin(R LL N) 
{
	if(N == 1) return 0;
	for(R int i = 0; i < 8; ++i) 
	{
		if(Prime[i] == N) return 1;
		if(Test(Prime[i], N) == 0) return 0;
	}
	return 1;
}


//const long long int SIZE = 1000000000;
//vector<bool> notp(SIZE+1, false);
//long long int p[SIZE];
//long long int len;

long long int t;
//vector<bool> iseven(SIZE+1, false);

inline bool even_judge(long long int x)
{
	bool isprime = Miller_Rabin(x), is2pow = true;
	
//	if (x<=SIZE)	isprime = !notp[x];
//	else
//	{
//		for (int i=0; i<len; i++)
//			if (x%p[i]==0)
//			{
//				isprime = false;
//				break;
//			}
//	}
	
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
		
//	if (x<SIZE)	return iseven[x];
//	long long int bound = sqrt(x);
//	for (int i=2; i<=bound; i++)
//	{
//		if (x%i)	continue;
//		if ((iseven[i] && ) || ())
//	}
}

int main()
{
//	long long int val;
//	for (long long int i=2; i<=SIZE; i++)
//	{
//		if (!iseven[i])
//		{
//			for (long long int j=3; (val=i*j)<=SIZE; j+=2)
//				iseven[val] = true;
////			for (int j=0; j<len && i*p[j]<=MAX; j++)
////			{
////				notp[i*p[j]] = true;
////				if (i%p[j]==0)	break;			
////			}
//		}
//		else
//		{
//			for (long long int j=2; (val=i*j)<=SIZE; j+=2)
//				iseven[val] = true;
//		}
//	}
////	printf("Start\n");
//	notp[0] = notp[1] = true;
//	for (int i=2; i<=SIZE; i++)
//	{
//		if (!notp[i])	p[len++] = i;
//		for (int j=0; j<len && i*p[j]<=SIZE; j++)
//		{
//			notp[i*p[j]] = true;
//			if (i%p[j]==0)	break;			
//		}
//	}
//	
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
			if (temp==1)	continue;
			if (even_judge(temp))	even_num++;
			else				ode_num++;
		}
		if (even_num%2>0 || (even_num==0 && ode_num%2>0))
			printf("W\n");
		else
			printf("L\n");
	}
	return 0;
}


