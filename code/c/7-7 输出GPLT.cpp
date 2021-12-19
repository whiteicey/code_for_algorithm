#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
int g,p,l,t;
int main()
{
    string s;
    getline(cin,s);
    g=count(s.begin(),s.end(),'g')+count(s.begin(),s.end(),'G');
    p=count(s.begin(),s.end(),'p')+count(s.begin(),s.end(),'P');
    l=count(s.begin(),s.end(),'l')+count(s.begin(),s.end(),'L');
    t=count(s.begin(),s.end(),'t')+count(s.begin(),s.end(),'T');
    while(g||p||l||t)
	{
        if(g)
		{
            printf("G");
            g--;
        }
        if(p)
		{
            printf("P");
            p--;
        }
        if(l)
		{
            printf("L");
            l--;
        }
        if(t)
		{
            printf("T");
            t--;
        }
    }
    return 0;
} 
