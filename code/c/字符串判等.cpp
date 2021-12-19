#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
string a,b,c,d,t;
int main()
{
    int i,n;
    cin >> n;
    cin.get();
    while (n--)  
    {
        c="",d="";t="";
        getline(cin,a);
        getline(cin,b);
        if(a==""&&b=="")
		{
            printf("YES\n"); 
			getline(cin,t);
            continue;
        }
        for(i=0;a[i];++i)
		{
            if(a[i]!=' ')
			{
                if(a[i]<='z'&&a[i]>='a')
                    c+=a[i];
                else
                    c+=a[i]+32;
            }
        }
        for(i=0;b[i];++i)
		{
            if(b[i]!=' ')
			{
                if(b[i]<='z'&&b[i]>='a')
                    d+=b[i];
                else
                    d+=b[i]+32;
            }
        }
        if(c==d)
		{
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        getline(cin,t);
    }
    return 0;
}


