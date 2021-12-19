#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[80];
    strcpy (str, "these ");
    strcat (str, "strings ");
    strcat (str, "are ");
    strcat (str, "concatenated.");
    puts (str);
    
	char str1[20];
    char str2[20];
    strcpy (str1, "To be ");
    strcpy (str2, "or not to be");
    strncat (str1, str2, 6);
    puts (str1);
}
