#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[] = "This is a simple string";
    char * pch;
    pch = strstr (str, "simple");
    puts (pch);
}
