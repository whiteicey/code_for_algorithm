#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[] = "almost every programmer should know memset!";
    memset (str, '-', 6);
    puts (str);
    memset (str, '-', sizeof(str));
    puts (str);
}
