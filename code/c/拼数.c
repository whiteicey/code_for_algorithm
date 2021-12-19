#include<stdio.h>
#include<string.h>



int main()
{
	char s[20][10],temp[10];
	int n,i,j,k;
	
	
	scanf("%d",&n);
	for ( i = 0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	
	
	for (i = 0;i<n-1;i++)
	{
		for (j = 0;j < n-1-i;j++)
		{
			if (s[j][0] < s[j+1][0])
			{
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
			if (s[j][0] == s[j+1][0])
			{
				k = compare(s[j],s[j+1]);
				if (k == 2)
				{
					strcpy(temp,s[j]);
					strcpy(s[j],s[j+1]);
					strcpy(s[j+1],temp);
				}
			}
		}
	}
	
	for (i = 0;i<n;i++)
	{
		printf("%s",s[i]);
	}
}

int compare(char s1[10],char s2[10])
{
	int max,i= 0 ,j= 0,len1,len2;
	len1 = strlen(s1);
	len2 = strlen(s2);
	max = len2;
	if (len1 > len2)
	{
		max = len1;
	}
	do
	{
		i = i%len1;
		j = j%len2;	
		if (s1[i] == s2[j])
		{
			i++;
			j++;

		}
		else if (s1[i] > s2[j])
		{
			return 1;
		}
		else
		{
			return 2;
		}	
	}while (j!=max&&i!=max);
	
	return 0;
	
}

