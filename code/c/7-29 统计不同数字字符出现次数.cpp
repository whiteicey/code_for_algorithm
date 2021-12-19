#include<iostream>
#include<string>
#include<cctype>
#define N 10
using namespace std;
int main()
{
    string s;
    int a[N] = { 0 }, tmp = 0;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
	{
        if (s[i] >= '0'&&s[i] <= '9')
	    {
            a[s[i] - '0']++;
            tmp = 1;
        }
	}
    if (tmp == 0)
        printf("None!");
    else
    {
        for (int i = 0; i <= 9; i++)
        {
            if (a[i] > 0)
                printf("%d-%d\n", i, a[i]);
        }
    }
}
