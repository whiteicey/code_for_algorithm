#include <iostream>
#include <string.h>
using namespace std;
string s1,s2;
int len1,len2;
int main()
{
	int t;
	cin>>t;
    while(t--)
    {
    	cin>>s1>>s2;
        int len1=s1.length();
        int len2=s2.length();
        int i=0,j=0;
        while(j<len2)
        {
            if(s1[i]==s2[j])
            {
                i++;
                j++;
                if(i==len1)
                {
                    cout<<"Yes"<<endl;
                    break;
                }
            }
            else
            {
                 j++;
                 if(j==len2)
                 {
                     cout<<"No"<<endl;
                     break;
                 }
            }
        }
    }
    return 0;
}
