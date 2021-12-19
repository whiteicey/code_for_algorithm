#include <iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<string>
using namespace std;
char a[50],b[100005][10];
 int c[100005],d[100005][3];
int main()
{
    int m,n,i,j,k;
    scanf("%d",&m);
    getchar();
    for(k=0;k<m;k++)
    {
        gets(a);
        n=strlen(a);
        for(i=0,j=0;i<n;i++)
        {
            if(a[i]=='A'||a[i]=='B'||a[i]=='C') b[k][j]='2',j++;
            if(a[i]=='D'||a[i]=='E'||a[i]=='F') b[k][j]='3',j++;
            if(a[i]=='G'||a[i]=='H'||a[i]=='I') b[k][j]='4',j++;
            if(a[i]=='J'||a[i]=='K'||a[i]=='L') b[k][j]='5',j++;
            if(a[i]=='M'||a[i]=='N'||a[i]=='O') b[k][j]='6',j++;
            if(a[i]=='P'||a[i]=='R'||a[i]=='S') b[k][j]='7',j++;
            if(a[i]=='T'||a[i]=='U'||a[i]=='V') b[k][j]='8',j++;
            if(a[i]=='W'||a[i]=='X'||a[i]=='Y') b[k][j]='9',j++;
            if(a[i]>='0'&&a[i]<='9') b[k][j]=a[i],j++;
            if(j==7) b[k][j]='\0',j=0;
        }
        c[k]=atoi(b[k]);
        d[k][1]=1;
    }
    sort(c,c+m);
    k=0;
    for(i=0;i<m-1;i++)
    {
        if(c[i]==c[i+1])
        {
            d[k][1]++;
            if(i!=m-2) 
				continue;
        }
        if(d[k][1]>1)
        {
        	d[k][0]=c[i];
			k++;
		}          
    }
    if(k>0)
    	for(i=0;i<k;i++)
        	printf("%03d-%04d %d\n",d[i][0]/10000,d[i][0]%10000,d[i][1]);
    else 
		printf("No duplicates.\n");
    return 0;
}
