#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int a[1000020];
int findpos(int a[], int l, int r, int k)
{
    if (l == r)
    {
        if (a[l] == k)
            return l;
        else
            return -1;/*最后位置的数与待查询数不相等，说明数列里没有此数*/
    }
    int mid = (l + r) / 2;
    if (k <= a[mid])
        findpos(a, l, mid, k);/*在左边区域找*/
    else
        findpos(a, mid + 1, r, k);/*在右边区域找*/
}
int main()
{
    int n, m, k;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    while (m--)
    {
        cin >> k;
        cout << findpos(a, 1, n, k) << " ";
    }
    return 0;
}
