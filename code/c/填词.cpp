#include<stdio.h> 
int main()
{
	int characters[26];
	int m, n, p, i, j;
	char str[1000];
	scanf("%d%d%d", &n, &m, &p);
	for (i = 0; i<26; i++)
	{
		characters[i] = 0;
	}
	for (i = 0; i<n; i++)
	{
		scanf("%s", str);
		for (j = 0; str[j] != '\0'; j++)
		{
			characters[str[j] - 'A']++;
		}
	}
	for (i = 0; i<p; i++)
	{
		scanf("%s",str);
		for (j = 0; str[j] != '\0'; j++)
		{
			characters[str[j] - 'A']--;
		}
	}
	for (i = 0; i<26; i++)
	{
		if (characters[i] != 0)
		{
			for (j = 0; j<characters[i]; j++)
			{
				printf("%c", i + 'A');
			}
		}
	}
	printf("\n");
	return 0;
}
