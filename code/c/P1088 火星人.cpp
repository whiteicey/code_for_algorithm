#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
 
int a[10000001] = {0};//ȫ�ֱ��� 
 
int main()
{
    int M, N;
    cin >> N;
    cin >> M;
    int i;
    for(i = 0; i < N; i++
	){
    	cin >> a[i];
	} 
    while(M--)
	{
    	next_permutation(a, a + N);//ȫ���е�M��
	}
    for(i = 0; i < N; i++)
	{
    	cout << a[i] << " ";
	}
    return 0;
}
