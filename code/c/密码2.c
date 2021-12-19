#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void Decode(char *s,int k,int *a,int n);
void Initial(char *s,int n);
int main()
{
	int n,i;
	int k1,k2=1;
	int *a;
	int temp=0;
	char *s;
	scanf("%d",&n);
	while(n!=0)
	{
		a=(int*)malloc(n*sizeof(int));
		s=(char*)malloc(n*sizeof(char));
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		scanf("%d",&k1);
		getchar();
		while(k1!=0)
		{
			gets(s);
			//printf("length:%d s:|%s|\n",strlen(s),s);
			temp=strlen(s);
			for(i=0;i<(n-temp);i++)//"n-strlen(s)" can't be used, because strlen(s) is changing in this loop!
			strcat(s," ");//Use function "strcat()" to append space
			Decode(s,k1,a,n);
			scanf("%d",&k1);
			getchar();
		}
		scanf("%d",&n);
	}
	return 0;
}
void Decode(char *s,int k,int *a,int n)
{
	char *s1=(char*)malloc(n*sizeof(char));
	int i,t=0;
	for(t=0;t<k;t++)//Code Times 
	{
		for(i=0;i<n;i++)
		s1[a[i]-1]=s[i];
		s1[n]='\0';//To end string s1
		strcpy(s,s1);
	}
	printf("%s\n",s1);
}
