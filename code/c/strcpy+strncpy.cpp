#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[] = "Sample string";
    char str2[40];
    char str3[40];
    strcpy (str2, str1);
    strcpy (str3, "copy successful");
    printf ("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
    
    char str4[] = "To be or not to be";
    char str5[40];
    char str6[40];
    strncpy ( str5, str4, sizeof(str4) );
    strncpy ( str6, str5, 5 );
    str3[5] = '\0';
    puts (str4);
    puts (str5);
    puts (str6);

}
