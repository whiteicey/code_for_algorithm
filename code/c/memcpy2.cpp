#include <cstdio>
#include <cstring>
using namespace std;
int main() 
{
  char *s="ncut coders";
  char d[20];
  memcpy(d, s+5, 6);
  d[6]='\0';
  printf("%s", d);
  return 0;
}
