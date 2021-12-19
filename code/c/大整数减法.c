#include<stdio.h>
#include<string.h>
int c[100];

int judge(char a[], char b[])
{
    int i;
    if (strlen(a) < strlen(b)) 
	{
        return 0;
    }
    else if (strlen(a) > strlen(b)) 
	{
        return 1;
    }

    for (i = 0; i < strlen(a); i++) 
	{
        if (a[i] < b[i]) 
		{
            return 0;
        }
    }
    return 1;
}
void minus(char a[], char b[], int k1, int k2)
{
    int i, j;
    char k;
    for (i = 0; i<k1; i++, k1--)
    {
        k = a[i];
        a[i] = a[k1];
        a[k1] = k;
    }
    for (i = 0; i<k2; i++, k2--)
    {
        k = b[i]; 
		b[i] = b[k2]; 
		b[k2] = k;
    }
    for (i = 0; i<strlen(a); i++)
    {
        if (i >= strlen(b)) 
		{
            c[i] = a[i] - '0';
        }
        else 
		{
            c[i] = a[i] - b[i];
        }
    }
    for (i = 0; i<strlen(a); i++)
	{
		while (c[i]<0) 
		{
            c[i] += 10;
            c[i + 1] -= 1;
        }
	}       
}
int main()
{
    int i, j, k1, k2;
    char a[100], b[100];
    gets(a);
    gets(b);
    k1 = strlen(a) - 1;
    k2 = strlen(b) - 1;
    if (judge(a, b)) 
	{
        minus(a, b, k1, k2);
    }
    else 
	{
        printf("-");
        minus(b, a, k2, k1);
    }
    i = 100;
    while (c[i] == 0 && i != 0)
	{
        i--;
    }
    for (j = i; j >= 0; j--) 
	{
        printf("%d", c[j]);
    }
	return 0;
}

